//
// Created by Statescu Relu on 17/12/2021.
//

#include "shopping_list.h"
#include "exceptii.h"

shopping_list::shopping_list(const std::string &listName, double maxPrice) : List(listName), maxPrice(maxPrice), actualPrice(0.) {}

shopping_list::~shopping_list() = default;

void shopping_list::updateActualPrice() {
    actualPrice = 0;
    for (auto& s_item : this->list) {
        actualPrice += dynamic_cast<shopping_item&>(*s_item).getPrice() * dynamic_cast<shopping_item&>(*s_item).getQuantity();
    }
}

void shopping_list::addItem(const std::shared_ptr<shopping_item>& Item) {
    if(Item->getPrice() * Item->getQuantity() + this->actualPrice > this->maxPrice)
        throw eroare_adaugareItem();
    list.push_back(Item->clone());
    this->setNrOfItems(list.size());
}

std::ostream &shopping_list::print(std::ostream &os) const {
    os << "Maximum price: $" << this->maxPrice << "\n";
    os << "Actual price: $" << this->actualPrice << "\n";
    List::print(os);
    return os;
}




