//
// Created by Statescu Relu on 11/11/2021.
//

#include "to_do_list.h"


to_do_list::to_do_list(const int id) : id(id) {}

to_do_list::to_do_list(const int id, const std::vector<item> &list) : id(id), list(list) {}

std::ostream &operator<<(std::ostream &os, const to_do_list &to_do_list) {
    if(to_do_list.list.size() == 0)
        os << "List with ID = " << to_do_list.id << " is empty!\n";
    else
    {
        os << "List ID: " << to_do_list.id << "\n";
        for(const auto& item : to_do_list.list)
        {
            os << "Item ID: " << item.getId() << "\n";
            os << "Content: " << item.getItemContent() << "\n";
            os << "Add date: " << item.getAddDate() << "\n";
            os << "Update date: " << item.getUpdateDate() << "\n\n";
        }
    }

}

void to_do_list::addItem(item item) {
    list.push_back(item);
    nrOfItems = list.size();
}

void to_do_list::deleteLastItem() {
    list.pop_back();
    nrOfItems = list.size();
}

void to_do_list::deleteItemByID(int ID) {
    list.erase(list.begin() + ID - 1);
    nrOfItems = list.size();
}

const int to_do_list::getId() const {
    return id;
}

int to_do_list::getNrOfItems() const {
    return nrOfItems;
}
