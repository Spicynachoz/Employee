#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>
class Employee{
private:
    int a =0, b = 0;
    std :: string empArray[100][6];


public:
        Employee();
		void edit_details(std :: string id,std :: string param,std :: string value );
		void show_details(std :: string detail);
        void new_details();
};
#endif
