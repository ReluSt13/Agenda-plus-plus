//
// Created by Statescu Relu on 11/11/2021.
//

#ifndef AGENDA_PLUS_PLUS_LIST_H
#define AGENDA_PLUS_PLUS_LIST_H

#include "item.h"
#include <vector>

class List{
    const int id;
    std::vector<std::shared_ptr<item>> list;
    int nrOfItems;
    static int id_max;
    std::string listName;

public:

    List(const std::string &listName);

    List(const List &copie);

    friend std::ostream &operator<<(std::ostream &os, const List &to_do_list);

    virtual std::ostream& print(std::ostream& os) const;

    void addItem(const std::shared_ptr<item>& item);

    std::shared_ptr<item>& getItem(int ID);

    void deleteLastItem();

    void deleteItemByID(int ID);

    const int getId() const;

    int getNrOfItems() const;

};

#endif //AGENDA_PLUS_PLUS_LIST_H
