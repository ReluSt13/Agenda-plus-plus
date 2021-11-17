//
// Created by Statescu Relu on 11/11/2021.
//

#ifndef AGENDA_PLUS_PLUS_TO_DO_LIST_H
#define AGENDA_PLUS_PLUS_TO_DO_LIST_H

#include "item.h"
#include <vector>

class to_do_list{
    const int id;
    std::vector<item> list;
    int nrOfItems;
    static int id_max;

public:

    to_do_list();

    to_do_list(const std::vector<item> &list);

    friend std::ostream &operator<<(std::ostream &os, const to_do_list &to_do_list);

    void addItem(item item);

    void deleteLastItem();

    void deleteItemByID(int ID);

    const int getId() const;

    int getNrOfItems() const;

};

#endif //AGENDA_PLUS_PLUS_TO_DO_LIST_H
