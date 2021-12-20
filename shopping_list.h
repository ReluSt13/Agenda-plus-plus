//
// Created by Statescu Relu on 17/12/2021.
//

#ifndef AGENDA_PLUS_PLUS_SHOPPING_LIST_H
#define AGENDA_PLUS_PLUS_SHOPPING_LIST_H


#include "List.h"

class shopping_list : public List {
    double maxPrice;
    double actualPrice;
public:
    shopping_list(const std::string &listName, double maxPrice);

    ~shopping_list();

    void updateActualPrice();

    std::ostream& print(std::ostream& os) const override;

    double getActualPrice();


};


#endif //AGENDA_PLUS_PLUS_SHOPPING_LIST_H
