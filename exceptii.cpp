//
// Created by Statescu Relu on 12/12/2021.
//

#include "exceptii.h"
#include <string>

using namespace std::string_literals;

eroare_item::eroare_item(const std::string &arg) : runtime_error("Eroare item: "s + arg) {}

eroare_contentLen::eroare_contentLen(int contentSize) : eroare_item("Eroare nr. caractere: au fost introduse: "s + std::to_string(contentSize) + " caractere"s) {}

eroare_dataUpdate::eroare_dataUpdate() : eroare_item("Eroare data update : data de update nu poate fi inaintea datei de adaugare"){}


eroare_lista::eroare_lista(const std::string &arg) : runtime_error("Eroare lista: "s + arg) {}

eroare_numeLista::eroare_numeLista(int nrChar) : eroare_lista("Eroare nume lista: au fost introduse: "s + std::to_string(nrChar) + " caractere"s){}

eroare_contentUpdate::eroare_contentUpdate(int contentSize) : eroare_item("Eroare updatare content: au fost introduse: "s + std::to_string(contentSize) + " caractere"s) {}


item_not_found::item_not_found(int ID) : eroare_item("Item-ul cu ID-ul: " + std::to_string(ID) + " nu a fost gasit.") {}
