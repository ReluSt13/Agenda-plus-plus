//
// Created by Statescu Relu on 20/10/2021.
//
#include <string>
#include <iostream>
#include "date.h"
#include "item.h"
#include "List.h"
#include "agenda.h"
#include "exceptii.h"
#include "to_do_item.h"
#include "to_do_list.h"


using namespace date::literals;

int main(){

    /*try {
        to_do_list l1("aceasta este o lista");
        l1.addItem(std::make_shared<to_do_item>("acesta este un item"));
        std::cout << l1;
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
        List list1("workout");
        List list2("groceries");
        list1.addItem(std::make_shared<item>("5km run"));
        list1.addItem(std::make_shared<item>("20 push-ups"));
        list2.addItem(std::make_shared<item>("buy tomatoes"));
        list2.addItem(std::make_shared<item>("buy sugar"));
        list2.addItem(std::make_shared<item>("buy flour"));
        list2.addItem(std::make_shared<item>("buy cinnamon"));
        std::cout << "Number of items in list: " << list1.getNrOfItems() << "\n\n";
        std::cout << list1;
        std::cout << "Number of items in list: " << list2.getNrOfItems() << "\n\n";
        std::cout << list2;
        list2.getItem(2)->updateContent("buy cherry tomatoes");
        list2.deleteLastItem();
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
