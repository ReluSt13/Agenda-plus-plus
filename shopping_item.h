//
// Created by Statescu Relu on 17/12/2021.
//

#ifndef AGENDA_PLUS_PLUS_SHOPPING_ITEM_H
#define AGENDA_PLUS_PLUS_SHOPPING_ITEM_H


#include "item.h"

class shopping_item : public item {
    int quantity;
public:

    shopping_item(const std::string &itemContent, int quantity);

    std::ostream& print(std::ostream& os) const override;

    std::shared_ptr<item> clone() const override;

    void updateQuantity(int newQuantity);

    ~shopping_item();

};


#endif //AGENDA_PLUS_PLUS_SHOPPING_ITEM_H
