//
// Created by Statescu Relu on 11/11/2021.
//

#ifndef AGENDA_PLUS_PLUS_AGENDA_H
#define AGENDA_PLUS_PLUS_AGENDA_H


#include "to_do_list.h"

class agenda{
    std::vector<to_do_list> notebook;

public:
    agenda(const std::vector<to_do_list> &notebook);
};

#endif //AGENDA_PLUS_PLUS_AGENDA_H
