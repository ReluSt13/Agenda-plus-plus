//
// Created by Statescu Relu on 17/12/2021.
//

#ifndef AGENDA_PLUS_PLUS_SHOPPING_LIST_H
#define AGENDA_PLUS_PLUS_SHOPPING_LIST_H


#include "List.h"
#include "shopping_item.h"
#include "exceptii.h"

class shopping_list : public List {
    double maxPrice;
    double actualPrice;
    void updateActualPrice();
public:
    template<int>
    friend class shoppingList_factory;

    shopping_list(const std::string &listName, double maxPrice);

    ~shopping_list();

    void addToList(std::shared_ptr<item> Item) override;

    void deleteLastItem();

    void deleteItemByID(int ID);

    void updateAttributes() override;

    void updateMaxPrice(double newMaxPrice);

    std::ostream& print(std::ostream& os) const override;

    std::shared_ptr<List> clone() const override;

};


#endif //AGENDA_PLUS_PLUS_SHOPPING_LIST_H







