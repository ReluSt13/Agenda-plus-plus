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
    to_do_list list1("workout");
    to_do_list list2("groceries");
    list1.addItem({"5km run"});
    list1.addItem({"20 push-ups"});
    list2.addItem({"buy tomatoes"});
    list2.addItem({"buy sugar"});
    list2.addItem({"buy flour"});
    std::cout << "Number of items in list: " << list1.getNrOfItems() << "\n\n";
    std::cout << list1;
    std::cout << "Number of items in list: " << list2.getNrOfItems() << "\n\n";
    std::cout << list2;
    list2.getItem(2).updateContent("buy cherry tomatoes");
    std::cout << list2;
    list2.deleteItemByID(3);
    std::cout << list2;
    return 0;
}
