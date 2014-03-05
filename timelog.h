#ifndef TIMELOG_H
#define TIMELOG_H
#include <string>
class timelog{

private:
    int a =0, b = 0;
    std :: string timeArray[100][4];


public:
        timelog();
        void show_details(std :: string idnum);

};
#endif
