//
// Created by Statescu Relu on 17/12/2021.
//

#ifndef AGENDA_PLUS_PLUS_SHOPPING_ITEM_H
#define AGENDA_PLUS_PLUS_SHOPPING_ITEM_H


#include "item.h"

class shopping_item : public item {
    int quantity;
    double price;
public:
    shopping_item();

    shopping_item(const std::string &itemContent, double price, int quantity);

    std::ostream& print(std::ostream& os) const override;

    std::shared_ptr<item> clone() const override;

    void updateQuantity(int newQuantity);

    void updatePrice(double newPrice);

    double getPrice() const;

    int getQuantity() const;

    double totalPrice() const;

    void setQuantity(int Quantity);

    void setPrice(double Price);

    ~shopping_item();

};


#endif //AGENDA_PLUS_PLUS_SHOPPING_ITEM_H
