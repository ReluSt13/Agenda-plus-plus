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
#include "shopping_item.h"
#include "shopping_list.h"
#include "shoppingList_factory.h"


using namespace date::literals;

int main(){

    try {
        /*to_do_list l1("aceasta este o lista");
        l1.addItems(std::make_shared<to_do_item>("acesta este un item"));
        l1.addItems(std::make_shared<to_do_item>("acesta este alt item"));
        l1.addItems(std::make_shared<to_do_item>("al 3-lea item wow"));
        l1.addItems(std::make_shared<to_do_item>("al 4-lea item wow"));
        l1.addItems(std::make_shared<to_do_item>("al 5-lea item wow"));
        l1.addItems(std::make_shared<to_do_item>("al 6-lea item wow"));
        l1.addItems(std::make_shared<to_do_item>("al 7-lea item wow"));
        dynamic_cast<to_do_item&>(*l1.getItem(0)).complete();
        dynamic_cast<to_do_item&>(*l1.getItem(5)).complete();
        l1.updatePercentage();
        std::cout << l1;*/

        /*shopping_item s_item1("acesta este un item", 3.6,  2);
        shopping_list s_list1("shopping list1", 15.6);
        s_list1.addItems(std::make_shared<shopping_item>(s_item1));
        s_list1.updateActualPrice();
        std::cout << s_list1;
        s_list1.getItem(0)->updateContent("item1");
        dynamic_cast<shopping_item&>(*s_list1.getItem(0)).updateQuantity(3);
        dynamic_cast<shopping_item&>(*s_list1.getItem(0)).updatePrice(3.9);
        s_list1.updateActualPrice();
        std::cout << s_list1;
        shopping_item s_item2("acesta este un item", 3.9,  1);
        s_list1.addItems(std::make_shared<shopping_item>(s_item2));
        s_list1.updateActualPrice();
        std::cout << s_list1;*/
        /*shopping_list lista_m = shoppingList_factory::foodList();
        std::cout << lista_m;

        shopping_list lista_back = shoppingList_factory::backToSchoolList();
        std::cout << lista_back;

        shopping_list lista_birthday = shoppingList_factory::birthdayList();
        std::cout << lista_birthday;*/

        /*List l1("Lista1");
        l1.addItems(std::make_shared<item>("item1"));
        l1.addItems(std::make_shared<item>("item2"));
        List l2("Lista2");
        l2.addItems(std::make_shared<item>("item1"));
        l2.addItems(std::make_shared<item>("item2"));
        auto Agenda = agenda::get_agenda();
        Agenda->addList(std::make_shared<List>(l1));
        Agenda->addList(std::make_shared<List>(l2));
        shopping_list lista_b = shoppingList_factory::birthdayList();
        Agenda->addList(std::make_shared<shopping_list>(lista_b));
        to_do_list todoL("ToDoList");
        todoL.addItems(std::make_shared<to_do_item>("item1", true), std::make_shared<to_do_item>("item2", false));
        todoL.addItems(std::make_shared<to_do_item>("item3", true));
        todoL.updatePercentage();
        Agenda->addList(std::make_shared<to_do_list>(todoL));
        std::cout << *Agenda;
        delete Agenda;

        List l7("lista");
        l7.addItems(std::make_shared<item>("item1"), std::make_shared<item>("item2"), std::make_shared<item>("item3"));
        std::cout << l7;*/

        shopping_list listShop("wow", 12.3);
        listShop.addItems(std::make_shared<shopping_item>("wow1", 3, 2),
                          std::make_shared<shopping_item>("wow1", 2, 2),
                          std::make_shared<shopping_item>("wow2", 0.2, 3));
        listShop.getItem(1)->updateContent("UPDATED");
        listShop.updateMaxPrice(13.3);
        listShop.deleteLastItem();
        std::cout << listShop;
        to_do_list todoL("ToDoList");
        todoL.addItems(std::make_shared<to_do_item>("item1", false), std::make_shared<to_do_item>("item2", true));
        todoL.addItems(std::make_shared<to_do_item>("item3", true));
        todoL.deleteItemByID(3);
        std::cout << todoL;

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
    /*try{
        List list1("workout");
        List list2("groceries");
        list1.addItems(std::make_shared<item>("5km run"));
        list1.addItems(std::make_shared<item>("20 push-ups"));
        list2.addItems(std::make_shared<item>("buy tomatoes"));
        list2.addItems(std::make_shared<item>("buy sugar"));
        list2.addItems(std::make_shared<item>("buy flour"));
        list2.addItems(std::make_shared<item>("buy cinnamon"));
        List list3(list1);
        List list4("lista");
        list4 = list2;
        std::cout << "Number of items in list: " << list1.getNrOfItems() << "\n\n";
        std::cout << list1;
        std::cout << "Number of items in list: " << list2.getNrOfItems() << "\n\n";
        std::cout << list2;
        list2.getItem(2)->updateContent("buy cherry tomatoes");
        list2.deleteLastItem();
        list2.deleteItemByID(3);
        std::cout << list2;
        std::cout << "Number of items in list: " << list2.getNrOfItems() << "\n\n";
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
    }*/

    return 0;
}
