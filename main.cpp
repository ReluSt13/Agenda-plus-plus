//
// Created by Statescu Relu on 20/10/2021.
//
#include <string>
#include <iostream>
#include "date.h"
#include "item.h"
#include "to_do_list.h"
#include "agenda.h"
#include "exceptii.h"


using namespace date::literals;

int main(){
    /*
    try {
        to_do_list lista3("");
        to_do_list list("test");
        list.addItem({"itemcontent aici", 2021_y/2/1, 2021_y/1/1});
        list.addItem(
                {"Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum."});
        list.addItem({""});
    }
    catch (eroare_lista& eroare) {
        std::cout << eroare.what() << "\n";
    }
    catch (eroare_item& eroare) {
        std::cout << eroare.what() << "\n";
    }
    catch (std::exception eroare) {
        std::cout << eroare.what() << "\n";
    }*/
    try{
        to_do_list list1("workout");
        to_do_list list2("groceries");
        list1.addItem({"5km run"});
        list1.addItem({"20 push-ups"});
        list2.addItem({"buy tomatoes"});
        list2.addItem({"buy sugar"});
        list2.addItem({"buy flour"});
        list2.addItem({"buy cinnamon"});
        std::cout << "Number of items in list: " << list1.getNrOfItems() << "\n\n";
        std::cout << list1;
        std::cout << "Number of items in list: " << list2.getNrOfItems() << "\n\n";
        std::cout << list2;
        list2.getItem(2).updateContent("buy cherry tomatoes");
        list2.deleteLastItem();
        std::cout << list2;
        list2.deleteItemByID(3);
        std::cout << list2;
    }
    catch (eroare_lista& eroare) {
        std::cout << eroare.what() << "\n";
    }
    catch (eroare_item& eroare) {
        std::cout << eroare.what() << "\n";
    }
    catch (std::invalid_argument& eroare) {
        std::cout << eroare.what() << "\n";
    }
    catch (std::exception& eroare) {
        std::cout << eroare.what() << "\n";
    }

    return 0;
}
