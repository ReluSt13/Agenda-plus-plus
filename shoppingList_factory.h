//
// Created by Statescu Relu on 26/12/2021.
//

#ifndef AGENDA_PLUS_PLUS_SHOPPINGLIST_FACTORY_H
#define AGENDA_PLUS_PLUS_SHOPPINGLIST_FACTORY_H


#include "shopping_list.h"

class shoppingList_factory {
public:
    static shopping_list foodList();
    static shopping_list backToSchoolList();
    static shopping_list birthdayList() ;
};


#endif //AGENDA_PLUS_PLUS_SHOPPINGLIST_FACTORY_H
