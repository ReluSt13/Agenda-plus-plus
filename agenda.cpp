//
// Created by Statescu Relu on 11/11/2021.
//

#include "agenda.h"

agenda* agenda::app = nullptr;

void agenda::addList(const std::shared_ptr<List>& lista) {
    notebook.push_back(lista->clone());
    nrOfLists = notebook.size();
}

std::ostream &agenda::print(std::ostream &os) const {
    os << "There are " << this->nrOfLists << " lists in this notebook. :)\n";
    for(const auto& lista : this->notebook) {
        lista->print(os);
    }
    return os;
}

std::ostream &operator<<(std::ostream &os, const agenda &agenda) {
    return agenda.print(os);
}

agenda *agenda::get_agenda() {
    if (app == nullptr)
        app = new agenda;
    return app;
}

