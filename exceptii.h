//
// Created by Statescu Relu on 12/12/2021.
//

#ifndef AGENDA_PLUS_PLUS_EXCEPTII_H
#define AGENDA_PLUS_PLUS_EXCEPTII_H

#include <stdexcept>

class eroare_item : public std::runtime_error {
public:
    explicit eroare_item(const std::string &arg);
};

class eroare_contentLen : public eroare_item {
public:
    explicit eroare_contentLen(int contentSize);
};

class eroare_dataUpdate : public eroare_item {
public:
    explicit eroare_dataUpdate();
};

class eroare_contentUpdate : public eroare_item {
public:
    explicit eroare_contentUpdate(int contentSize);
};

class eroare_lista : public std::runtime_error {
public:
    eroare_lista(const std::string &arg);
};

class eroare_numeLista : public eroare_lista {
public:
    explicit eroare_numeLista(int nrChar);
};

#endif //AGENDA_PLUS_PLUS_EXCEPTII_H
