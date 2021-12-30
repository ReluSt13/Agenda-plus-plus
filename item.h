//
// Created by Statescu Relu on 11/11/2021.
//

#ifndef AGENDA_PLUS_PLUS_ITEM_H
#define AGENDA_PLUS_PLUS_ITEM_H


#include "date.h"

class item{
    int id;
    static int id_max;
    std::string itemContent;
    /*const*/ date::year_month_day addDate;
    date::year_month_day updateDate;


public:
    item();

    item(const std::string &itemContent, const date::year_month_day &addDate,
         const date::year_month_day &updateDate);

    explicit item(const std::string &itemContent);

    item(const item& copie);

    item& operator=(const item& copie);

    friend std::ostream &operator<<(std::ostream &os, const item &item);

    virtual std::ostream& print(std::ostream& os) const;

    virtual std::shared_ptr<item> clone() const;

    virtual ~item();

    int getId() const;

    void updateContent(const std::string& Content);

};


#endif //AGENDA_PLUS_PLUS_ITEM_H
