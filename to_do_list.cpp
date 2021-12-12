//
// Created by Statescu Relu on 11/11/2021.
//

#include "to_do_list.h"
#include "exceptii.h"

int to_do_list::id_max = 0;

to_do_list::to_do_list(const std::string &listName) : id(id_max), listName(listName) {
    if(listName.size() <= 0  || listName.size() >= 40)
        throw eroare_numeLista(listName.size());
    id_max++;
}

to_do_list::to_do_list(const to_do_list &copie) : id(copie.id), listName(copie.listName),
                                                   nrOfItems(copie.nrOfItems), list(copie.list) {}

std::ostream &operator<<(std::ostream &os, const to_do_list &to_do_list) {
    if(to_do_list.list.size() == 0)
        os << "List with ID = " << to_do_list.id << " is empty!\n";
    else
    {
        os << "List ID: " << to_do_list.id << "\n";
        os << "List Name: " << to_do_list.listName << "\n";
        os << "-----------------------------------\n";
        for(const auto& item : to_do_list.list)
        {
            os << "Item ID: " << item.getId() << "\n";
            os << "Content: " << item.getItemContent() << "\n";
            os << "Add date: " << item.getAddDate() << "\n";
            os << "Update date: " << item.getUpdateDate() << "\n";
        }
        os << "-----------------------------------\n";
    }
    return os;
}

void to_do_list::addItem(item item) {
    list.push_back(item);
    nrOfItems = list.size();
}

item& to_do_list::getItem(int ID) {
    if(ID < 0)
        throw std::invalid_argument("ID-ul nu poate fi negativ");
    for(auto& item : list)
    {
        if(item.getId() == ID)
            return item;
    }
    //return ceva;
}

void to_do_list::deleteLastItem() {
    list.pop_back();
    nrOfItems = list.size();
}

void to_do_list::deleteItemByID(int ID) {
    if(ID < 0)
        throw std::invalid_argument("ID-ul nu poate fi negativ");
    int pos = 0;
    for(auto& item : list)
    {
        if(item.getId() == ID)
            list.erase(list.begin() + pos);
        pos++;
    }
    nrOfItems = list.size();
}

const int to_do_list::getId() const {
    return id;
}

int to_do_list::getNrOfItems() const {
    return nrOfItems;
}
