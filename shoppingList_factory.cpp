//
// Created by Statescu Relu on 26/12/2021.
//

#include "shoppingList_factory.h"

shopping_list shoppingList_factory::foodList() {
    shopping_list l("Food List", 20.7);
    l.addItem(std::make_shared<shopping_item>("Potato", 0.5, 2));
    l.addItem(std::make_shared<shopping_item>("Tomato", 0.9, 3));
    l.addItem(std::make_shared<shopping_item>("Garlic", 0.2, 5));
    l.addItem(std::make_shared<shopping_item>("Bag of rice", 2.5, 1));
    l.updateActualPrice();
    return l;
}

shopping_list shoppingList_factory::backToSchoolList() {
    shopping_list l("Back to School List", 50);
    l.addItem(std::make_shared<shopping_item>("Pen", 3.3, 1));
    l.addItem(std::make_shared<shopping_item>("Notebook", 1.35, 3));
    l.addItem(std::make_shared<shopping_item>("Backpack", 9.7, 1));
    l.addItem(std::make_shared<shopping_item>("Pencil", 0.3, 5));
    l.addItem(std::make_shared<shopping_item>("Eraser", 0.6, 1));
    l.updateActualPrice();
    return l;
}

shopping_list shoppingList_factory::birthdayList() {
    shopping_list l("Birthday List", 125.5);
    l.addItem(std::make_shared<shopping_item>("Cake", 25.9, 1));
    l.addItem(std::make_shared<shopping_item>("Balloons", 0.2, 25));
    l.addItem(std::make_shared<shopping_item>("Candles", 0.2, 13));
    l.addItem(std::make_shared<shopping_item>("Birthday Hat", 1, 10));
    l.addItem(std::make_shared<shopping_item>("Confetti Cannon", 2, 3));
    l.addItem(std::make_shared<shopping_item>("Cookies", 0.4, 20));
    l.updateActualPrice();
    return l;
}


