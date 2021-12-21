//
// Created by Statescu Relu on 17/12/2021.
//

#include "shopping_item.h"

shopping_item::shopping_item(const std::string &itemContent, double price, int quantity) : item(itemContent), quantity(quantity), price(price) {}

std::ostream& shopping_item::print(std::ostream& os) const {
    item::print(os);
    os << "Price: " << this->price << "$\n";
    os << "Quantity: x" << this->quantity << "\n";
    os << "---------------\n";
    return os;
}

std::shared_ptr<item> shopping_item::clone() const {
    return std::make_shared<shopping_item>(*this);
}

shopping_item::~shopping_item()= default;

void shopping_item::updateQuantity(int newQuantity) {
    this->quantity = newQuantity;
}

void shopping_item::updatePrice(double newPrice) {
    this->price = newPrice;
}

double shopping_item::getPrice() const {
    return this->price;
}

int shopping_item::getQuantity() const {
    return this->quantity;
}

