//
// Created by Statescu Relu on 17/12/2021.
//

#include "shopping_list.h"

shopping_list::shopping_list(const std::string &listName, double maxPrice) : List(listName), maxPrice(maxPrice), actualPrice(0.) {}

shopping_list::~shopping_list() = default;

void shopping_list::updateActualPrice() {
    actualPrice = 0;
    for (auto& s_item : this->list) {
        actualPrice += dynamic_cast<shopping_item&>(*s_item).getPrice() * dynamic_cast<shopping_item&>(*s_item).getQuantity();
    }
}

std::ostream &shopping_list::print(std::ostream &os) const {
    os << "Maximum price: $" << this->maxPrice << "\n";
    os << "Actual price: $" << this->actualPrice << "\n";
    List::print(os);
    return os;
}

std::shared_ptr<List> shopping_list::clone() const {
    return std::make_shared<shopping_list>(*this);
}




