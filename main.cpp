//
// Created by Statescu Relu on 20/10/2021.
//
#include <string>
#include <iostream>
#include "date.h"
#include <vector>


class item{
    /*const*/ int id;
    std::string itemContent;
    /*const*/ date::year_month_day addDate;
    date::year_month_day updateDate;

public:
    item(const int id, const std::string &itemContent, const date::year_month_day &addDate,
         const date::year_month_day &updateDate) : id(id), itemContent(itemContent), addDate(addDate),
                                                   updateDate(updateDate) {}

    item(const item& copie) : id(copie.id), itemContent(copie.itemContent),
                              addDate(copie.addDate), updateDate(copie.updateDate) {}

    item& operator=(const item& copie){
        this->id = copie.id;
        this->itemContent = copie.itemContent;
        this->addDate = copie.addDate;
        this->updateDate = copie.updateDate;
        return *this;
    }

    friend std::ostream &operator<<(std::ostream &os, const item &item){
        os << "Item ID: " << item.id;
        os << "Content: " << item.itemContent;
        os << "Add date: " << item.addDate;
        os << "Update date: " << item.updateDate;
    }

    ~item() {}

    void setId(int id) {
        item::id = id;
    }

    void setItemContent(const std::string &itemContent) {
        item::itemContent = itemContent;
    }

    void setAddDate(const date::year_month_day &addDate) {
        item::addDate = addDate;
    }

    void setUpdateDate(const date::year_month_day &updateDate) {
        item::updateDate = updateDate;
    }

};

class to_do_list{
    const int id;
    std::vector<item> list;
    int nrOfItems;

public:
    to_do_list(const int id, const std::vector<item> &list) : id(id), list(list) {}

    friend std::ostream &operator<<(std::ostream &os, const to_do_list &to_do_list){
        os << "List ID: " << to_do_list.id;
        for(const auto& item : to_do_list.list)
        {

        }
    }

    void addItem(item item)
    {
        list.push_back(item);
        nrOfItems = list.size() + 1;
    }

    const int getId() const {
        return id;
    }

    int getNrOfItems() const {
        return nrOfItems;
    }

};

class agenda{
    std::vector<to_do_list> notebook;

public:
    agenda(const std::vector<to_do_list> &notebook) : notebook(notebook) {}
};

int main(){

    //item i1(1, "ceva", 2021/1/1, 2021/1/1);

    return 0;
}
