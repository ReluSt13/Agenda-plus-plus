//
// Created by Statescu Relu on 17/12/2021.
//

#ifndef AGENDA_PLUS_PLUS_SHOPPING_LIST_H
#define AGENDA_PLUS_PLUS_SHOPPING_LIST_H


#include "List.h"
#include "shopping_item.h"
#include "exceptii.h"

class shopping_list : public List {
    double maxPrice;
    double actualPrice;
public:
    shopping_list(const std::string &listName, double maxPrice);

    ~shopping_list();

    void updateActualPrice();

    template<typename... Args>
    void addItems(Args &&... args) {
        if((args->getPrice(), ...) * (args->getQuantity(), ...) + this->actualPrice > this->maxPrice)
            throw eroare_adaugareItem();
        (list.push_back(std::forward<Args>(args)), ...);
        this->setNrOfItems();
        this->updateActualPrice();
    }

    std::ostream& print(std::ostream& os) const override;

    std::shared_ptr<List> clone() const override;

};


#endif //AGENDA_PLUS_PLUS_SHOPPING_LIST_H
