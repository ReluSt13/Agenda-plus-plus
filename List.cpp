//
// Created by Statescu Relu on 11/11/2021.
//

#include "List.h"
#include "exceptii.h"

int List::id_max = 0;

List::List(const std::string &listName) : id(id_max), listName(listName), nrOfItems(0){
    if(listName.empty() || listName.size() >= 40)
        throw eroare_numeLista(listName.size());
    id_max++;
}

List::List(const List &copie) : id(copie.id), listName(copie.listName),
                                                   nrOfItems(copie.nrOfItems) {
    for (const auto &data : copie.list) {
        list.push_back(data->clone());
    }

}

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
        os << "Nr. of Items: " << this->nrOfItems << "\n";
        os << "-----------------------------------\n";
        for(const auto& Item : this->list)
        {
            Item->print(os);
        }
        os << "-----------------------------------\n\n";
    }
    return os;
}

List &List::operator=(const List &copie) {
    if (this != &copie) {
        auto lista_noua = std::vector<std::shared_ptr<item>>();
        for (const auto &data : copie.list) {
            lista_noua.push_back(data->clone());
        }
        list = lista_noua;
    }
    return *this;
}

void List::addItem(const std::shared_ptr<item>& Item) {
    list.push_back(Item->clone());
    nrOfItems = list.size();
}

std::shared_ptr<item>& List::getItem(int ID) {
    if(ID < 0)
        throw std::invalid_argument("ID-ul nu poate fi negativ");
    for(auto& Item : list)
    {
        if(Item->getId() == ID)
            return Item;
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
    for(auto& data : list)
    {
        if(data->getId() == ID) {
            list.erase(list.begin() + pos);
            break;
        }
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

void List::setNrOfItems(int nr) {
    this->nrOfItems = nr;
}

std::shared_ptr<List> List::clone() const {
    return std::make_shared<List>(*this);
}
