//
// Created by Statescu Relu on 11/11/2021.
//

#include "item.h"
using namespace date::literals;

int item::id_max = 0;

item::item(const std::string &itemContent, const date::year_month_day &addDate, const date::year_month_day &updateDate)
        : id(id_max), itemContent(itemContent), addDate(addDate),
          updateDate(updateDate) {id_max++;}

item::item(const std::string &itemContent)
        : item(itemContent, date::year_month_day{date::floor<date::days>(std::chrono::system_clock::now())}, 2020_y/1/1) {}

item::item(const item &copie) : id(copie.id), itemContent(copie.itemContent),
                                addDate(copie.addDate), updateDate(copie.updateDate) {}

item &item::operator=(const item &copie) {
    this->id = copie.id;
    this->itemContent = copie.itemContent;
    this->addDate = copie.addDate;
    this->updateDate = copie.updateDate;
    return *this;
}

std::ostream &operator<<(std::ostream &os, const item &item) {
    os << "Item ID: " << item.id << "\n";
    os << "Content: " << item.itemContent << "\n";
    os << "Add date: " << item.addDate << "\n";
    os << "Update date: " << item.updateDate << "\n";
    return os;
}

item::~item() {}

void item::setId(int id) {
    item::id = id;
}

void item::setItemContent(const std::string &itemContent) {
    item::itemContent = itemContent;
}

void item::setAddDate(const date::year_month_day &addDate) {
    item::addDate = addDate;
}

void item::setUpdateDate(const date::year_month_day &updateDate) {
    item::updateDate = updateDate;
}

void item::updateContent(std::string itemContent) {
    item::itemContent = itemContent;
    item::updateDate = date::year_month_day{date::floor<date::days>(std::chrono::system_clock::now())};
}

int item::getId() const {
    return id;
}

const std::string &item::getItemContent() const {
    return itemContent;
}

const date::year_month_day &item::getAddDate() const {
    return addDate;
}

const date::year_month_day &item::getUpdateDate() const {
    return updateDate;
}
