//
// Created by Statescu Relu on 12/12/2021.
//

#include "exceptii.h"

eroare_item::eroare_item(const std::string &arg) : runtime_error("Eroare item: " + arg) {}

eroare_contentLen::eroare_contentLen(int contentSize) : eroare_item("Eroare nr. caractere: au fost introduse: " + std::to_string(contentSize) + " caractere") {}

eroare_dataUpdate::eroare_dataUpdate() : eroare_item("Eroare data update : data de update nu poate fi inaintea datei de adaugare"){}


eroare_lista::eroare_lista(const std::string &arg) : runtime_error("Eroare lista: " + arg) {}

eroare_numeLista::eroare_numeLista(int nrChar) : eroare_lista("Eroare nume lista: au fost introduse: " + std::to_string(nrChar) + " caractere"){}

eroare_contentUpdate::eroare_contentUpdate(int contentSize) : eroare_item("Eroare updatare content: au fost introduse: " + std::to_string(contentSize) + " caractere") {}
