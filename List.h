//
// Created by Statescu Relu on 11/11/2021.
//

#ifndef AGENDA_PLUS_PLUS_LIST_H
#define AGENDA_PLUS_PLUS_LIST_H

#include "item.h"
#include <vector>

class List{
    const int id;
    int nrOfItems;
    static int id_max;
    std::string listName;

protected:
    std::vector<std::shared_ptr<item>> list;
public:

    List(const std::string &listName);

    List(const List &copie);

    friend std::ostream &operator<<(std::ostream &os, const List &to_do_list);

    virtual List &operator=(const List &copie);

    virtual std::ostream& print(std::ostream& os) const;

    void addItem(const std::shared_ptr<item>& item);

    void setNrOfItems(int nr);

    std::shared_ptr<item>& getItem(int ID);

    virtual std::shared_ptr<List> clone() const;

    void deleteLastItem();

    void deleteItemByID(int ID);

    const int getId() const;

    int getNrOfItems() const;

};

#endif //AGENDA_PLUS_PLUS_LIST_H
