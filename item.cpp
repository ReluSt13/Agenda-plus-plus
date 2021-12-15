//
// Created by Statescu Relu on 11/11/2021.
//

#include "item.h"
#include "exceptii.h"
using namespace date::literals;

int item::id_max = 0;

item::item(const std::string &itemContent, const date::year_month_day &addDate, const date::year_month_day &updateDate)
        : id(id_max), itemContent(itemContent), addDate(addDate),
          updateDate(updateDate) {
    if(itemContent.size() <= 0 || itemContent.size() >= 500)
        throw eroare_contentLen(itemContent.size());
    if(updateDate < addDate)
        throw eroare_dataUpdate();
    id_max++;
}

item::item(const std::string &itemContent)
        : item(itemContent, date::year_month_day{date::floor<date::days>(std::chrono::system_clock::now())}, 3020_y/1/1) {}

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

    return item.print(os);
}

std::ostream& item::print(std::ostream& os) const {
    os << "Item ID: " << this->id << "\n";
    os << "Content: " << this->itemContent << "\n";
    os << "Add date: " << this->addDate << "\n";
    os << "Update date: " << this->updateDate << "\n";
    return os;
}

std::shared_ptr<item> item::clone() const {
    return std::make_shared<item>(*this);
}

item::~item() {}


void item::updateContent(std::string itemContent) {
    if(itemContent.size() <= 0 || itemContent.size() >= 500)
        throw eroare_contentUpdate(itemContent.size());
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
