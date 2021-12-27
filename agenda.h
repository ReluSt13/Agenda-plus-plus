//
// Created by Statescu Relu on 11/11/2021.
//

#ifndef AGENDA_PLUS_PLUS_AGENDA_H
#define AGENDA_PLUS_PLUS_AGENDA_H


#include "List.h"

class agenda{
    std::vector<std::shared_ptr<List>> notebook;

    unsigned short nrOfLists;

    agenda() = default;

    static agenda* app;

public:

    agenda(const agenda&) = delete;

    agenda& operator=(const agenda&) = delete;

    static agenda* get_agenda();

    void addList(const std::shared_ptr<List>& lista);

    friend std::ostream &operator<<(std::ostream &os, const agenda &agenda);

    std::ostream& print(std::ostream& os) const;
};

#endif //AGENDA_PLUS_PLUS_AGENDA_H
