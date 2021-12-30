//
// Created by Statescu Relu on 15/12/2021.
//

#include "to_do_list.h"
#include "to_do_item.h"

to_do_list::to_do_list(const std::string &listName, double percentageComplete) : List(listName), percentageComplete(
        percentageComplete) {}

to_do_list::to_do_list(const std::string &listName) : to_do_list(listName, 0) {}

to_do_list::~to_do_list() {}

void to_do_list::updatePercentage() {
    int nrOfItemsCompleted = 0;
    for(auto& Item : this->list) {
        if(dynamic_cast<to_do_item&>(*Item).isComplete())
            nrOfItemsCompleted++;
    }
    this->percentageComplete = ((double)nrOfItemsCompleted / (double)this->getNrOfItems()) * 100;
}

std::ostream & to_do_list::print(std::ostream& os) const {
    os << "Percentage complete: " << this->percentageComplete << "%\n";
    List::print(os);
    return os;
}

std::shared_ptr<List> to_do_list::clone() const {
    return std::make_shared<to_do_list>(*this);
}

void to_do_list::deleteLastItem() {
    List::deleteLastItem();
    this->updatePercentage();
}

void to_do_list::deleteItemByID(int ID) {
    List::deleteItemByID(ID);
    this->updatePercentage();
}

void to_do_list::updateAttributes() {
    this->updatePercentage();
}


