//
// Created by Statescu Relu on 17/12/2021.
//

#include "shopping_list.h"

shopping_list::shopping_list(const std::string &listName, double maxPrice) : List(listName), maxPrice(maxPrice) {}

shopping_list::~shopping_list() {

}

std::ostream &shopping_list::print(std::ostream &os) const {
    os << "Maximum price: " << this->maxPrice << "$\n";
    List::print(os);
    return os;
}
