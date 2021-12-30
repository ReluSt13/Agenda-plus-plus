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

    explicit List(const std::string &listName);

    List(const List &copie);

    friend std::ostream &operator<<(std::ostream &os, const List &to_do_list);

    List &operator=(const List &copie);

    virtual std::ostream& print(std::ostream& os) const;

    virtual void updateAttributes();

    template<typename... Args>
    void addItems(List& l, Args &&... args) {
        (l.addToList(args), ...);
        nrOfItems = list.size();
    }

    virtual void addToList(std::shared_ptr<item> Item);

    void setNrOfItems();

    std::shared_ptr<item>& getItem(int ID);

    virtual std::shared_ptr<List> clone() const;

    void deleteLastItem();

    void deleteItemByID(int ID);

    int getId() const;

    int getNrOfItems() const;

    virtual ~List();

};

#endif //AGENDA_PLUS_PLUS_LIST_H
