//
// Created by Statescu Relu on 15/12/2021.
//

#ifndef AGENDA_PLUS_PLUS_TO_DO_ITEM_H
#define AGENDA_PLUS_PLUS_TO_DO_ITEM_H


#include "item.h"

class to_do_item : public item {
    bool isCompleted;
public:
    to_do_item(const std::string &itemContent, bool isCompleted);

    to_do_item(const std::string &itemContent);

    std::ostream& print(std::ostream& os) const override;

    std::shared_ptr<item> clone() const override;

    ~to_do_item();
};


#endif //AGENDA_PLUS_PLUS_TO_DO_ITEM_H
