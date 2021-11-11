//
// Created by Statescu Relu on 20/10/2021.
//
#include <string>
#include <iostream>
#include "date.h"
#include "item.h"
#include "to_do_list.h"
#include "agenda.h"
#include <vector>

using namespace date::literals;

int main(){

    item i1( "Ceva");
    item i2("CEVAsiALTCEVA");
    item i3("cumpara rosii");
    item i4("tema bd");
    to_do_list l1(1);
    l1.addItem(i1);
    l1.addItem(i2);
    l1.addItem(i3);
    l1.addItem(i4);
    std::cout << l1;
    std::cout << "Number of items in list: " << l1.getNrOfItems() << "\n\n";
    l1.deleteItemByID(2);
    l1.deleteLastItem();
    std::cout << l1;
    std::cout << "Number of items in list: " << l1.getNrOfItems() << "\n\n";
    return 0;
}
