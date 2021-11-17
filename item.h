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
    item(const std::string &itemContent, const date::year_month_day &addDate,
         const date::year_month_day &updateDate);

    item(const std::string &itemContent);

    item(const item& copie);

    item& operator=(const item& copie);

    friend std::ostream &operator<<(std::ostream &os, const item &item);

    ~item();

    void setId(int id);

    void setItemContent(const std::string &itemContent);

    void setAddDate(const date::year_month_day &addDate);

    void setUpdateDate(const date::year_month_day &updateDate);

    int getId() const;

    const std::string &getItemContent() const;

    const date::year_month_day &getAddDate() const;

    const date::year_month_day &getUpdateDate() const;

    void updateContent(std::string itemContent);

};


#endif //AGENDA_PLUS_PLUS_ITEM_H
