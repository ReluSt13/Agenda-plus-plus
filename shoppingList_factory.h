//
// Created by Statescu Relu on 26/12/2021.
//

#ifndef AGENDA_PLUS_PLUS_SHOPPINGLIST_FACTORY_H
#define AGENDA_PLUS_PLUS_SHOPPINGLIST_FACTORY_H


#include "shopping_list.h"

template<int nr>
class shoppingList_factory {
public:
    static shopping_list foodList() {
        shopping_list l("Food List", 20.7);
        for (int i = 0; i < nr; ++i) {
            l.addItems(std::make_shared<shopping_item>("FoodItem" + std::to_string(i) , 5, 1));
        }
        l.updateActualPrice();
        return l;
    }
    static shopping_list backToSchoolList() {
        shopping_list l("BackToSchool List", 57.62);
        for (int i = 0; i < nr; ++i) {
            l.addItems(std::make_shared<shopping_item>("btsItem" + std::to_string(i), 1, 1));
        }
        l.updateActualPrice();
        return l;
    }
    static shopping_list birthdayList() {
        shopping_list l("Birthday List", 125.5);
        for (int i = 0; i < nr; ++i) {
            l.addItems(std::make_shared<shopping_item>("birthdayItem" + std::to_string(i), 2, 2));
        }
        l.updateActualPrice();
        return l;
    }
};


#endif //AGENDA_PLUS_PLUS_SHOPPINGLIST_FACTORY_H
