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
    to_do_list l1;
    to_do_list l2;
    l1.addItem(i1);
    l1.addItem(i2);
    l2.addItem(i3);
    l2.addItem(i4);
    std::cout << "Number of items in list: " << l1.getNrOfItems() << "\n\n";
    std::cout << l1;
    std::cout << "Number of items in list: " << l2.getNrOfItems() << "\n\n";
    std::cout << l2;
    i3.updateContent("cumpara rosii cherry"); //pushback face o copie deci nu se updateaza i3 si in vector
    std::cout << l2;
    return 0;
}
