//
// Created by Statescu Relu on 20/10/2021.
//
#include <string>
#include <iostream>
//#include <date.h>
#include <vector>

class date{
    int day;
    int month;
    int year;
    int hour;
    int minute;
};

class item{
    const int id;
    std::string itemContent;
    date addDate;
    date updateDate;
};

class to_do_list{
    const int id;
    std::vector<item> list;
};

class agenda{
    std::vector<to_do_list> agenda;
};

int main(){
    return 0;
}
