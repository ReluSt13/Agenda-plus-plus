//
// Created by Statescu Relu on 11/11/2021.
//

#include "List.h"
#include "exceptii.h"

int List::id_max = 0;

List::List(const std::string &listName) : id(id_max), listName(listName){
    if(listName.empty() || listName.size() >= 40)
        throw eroare_numeLista(listName.size());
    id_max++;
}

List::List(const List &copie) : id(copie.id), listName(copie.listName),
                                                   nrOfItems(copie.nrOfItems), list(copie.list) {}

std::ostream &operator<<(std::ostream &os, const List &to_do_list) {
    return to_do_list.print(os);
}

std::ostream& List::print(std::ostream& os) const {
    if(this->list.empty())
        os << "List with ID = " << this->id << " is empty!\n";
    else
    {
        os << "List ID: " << this->id << "\n";
        os << "List Name: " << this->listName << "\n";
        os << "-----------------------------------\n";
        for(const auto& item : this->list)
        {
            os << "Item ID: " << item->getId() << "\n";
            os << "Content: " << item->getItemContent() << "\n";
            os << "Add date: " << item->getAddDate() << "\n";
            os << "Update date: " << item->getUpdateDate() << "\n";
        }
        os << "-----------------------------------\n";
    }
    return os;
}

void List::addItem(const std::shared_ptr<item>& item) {
    list.push_back(item);
    nrOfItems = list.size();
}

std::shared_ptr<item>& List::getItem(int ID) {
    if(ID < 0)
        throw std::invalid_argument("ID-ul nu poate fi negativ");
    for(auto& item : list)
    {
        if(item->getId() == ID)
            return item;
    }
    throw item_not_found(ID);
}

void List::deleteLastItem() {
    list.pop_back();
    nrOfItems = list.size();
}

void List::deleteItemByID(int ID) {
    if(ID < 0)
        throw std::invalid_argument("ID-ul nu poate fi negativ");
    int pos = 0;
    for(auto& item : list)
    {
        if(item->getId() == ID)
            list.erase(list.begin() + pos);
        pos++;
    }
    nrOfItems = list.size();
}

const int List::getId() const {
    return id;
}

int List::getNrOfItems() const {
    return nrOfItems;
}
