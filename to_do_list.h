//
// Created by Statescu Relu on 15/12/2021.
//

#ifndef AGENDA_PLUS_PLUS_TO_DO_LIST_H
#define AGENDA_PLUS_PLUS_TO_DO_LIST_H


#include "List.h"

class to_do_list : public List {
    double percentageComplete;
public:
    to_do_list(const std::string &listName, double percentageComplete);

    to_do_list(const std::string &listName);

    std::ostream& print(std::ostream& os) const override;

    ~to_do_list();
};


#endif //AGENDA_PLUS_PLUS_TO_DO_LIST_H
