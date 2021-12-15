//
// Created by Statescu Relu on 11/11/2021.
//

#ifndef AGENDA_PLUS_PLUS_AGENDA_H
#define AGENDA_PLUS_PLUS_AGENDA_H


#include "List.h"

class agenda{
    std::vector<List> notebook;

public:
    agenda(const std::vector<List> &notebook);
};

#endif //AGENDA_PLUS_PLUS_AGENDA_H
