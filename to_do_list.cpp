//
// Created by Statescu Relu on 15/12/2021.
//

#include "to_do_list.h"

to_do_list::to_do_list(const std::string &listName, double percentageComplete) : List(listName), percentageComplete(
        percentageComplete) {}

to_do_list::to_do_list(const std::string &listName) : to_do_list(listName, 0) {}

to_do_list::~to_do_list() {}

std::ostream& to_do_list::print(std::ostream& os) const {
    List::print(os);
    os << "Percentage complete: " << this->percentageComplete << "\n";
    return os;
}

