//
// Created by Statescu Relu on 15/12/2021.
//

#include "to_do_item.h"

to_do_item::to_do_item(const std::string &itemContent, bool isCompleted) : item(itemContent),
                                                                           isCompleted(isCompleted) {}

to_do_item::~to_do_item() {}

to_do_item::to_do_item(const std::string &itemContent) : to_do_item(itemContent, false) {}

std::ostream& to_do_item::print(std::ostream& os) const {
    item::print(os);
    os << "Task completed: " << this->isCompleted << "\n";
    return os;
}

std::shared_ptr<item> to_do_item::clone() const {
    return std::make_shared<to_do_item>(*this);
}