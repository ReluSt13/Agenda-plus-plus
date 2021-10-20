//
// Created by Statescu Relu on 20/10/2021.
//
#include <string>
#include <iostream>
//#include <date.h>

class date{
    int day;
    int month;
    int year;
    int hour;
    int minute;
};

class to_do_list_item{
    const int itemID;
    std::string itemContent;
    date addDate;
    date updateDate;
};

class journal_entry{
    const int entryID;
    std::string entryContent;
    date addDate;
};

class shopping_list_item{
    const int itemID;
    std::string itemName;
    date addDate;
};

class reminder{
    const int reminderID;
    std::string reminderMSG;
    date triggerDate;
    date addDate;
};
int main(){
    return 0;
}
