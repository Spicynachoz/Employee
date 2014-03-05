#include <iostream>
#include "employee.h"
#include "timelog.h"
void display_menu();


using namespace std;

int main()
{
// create constructors for employee and timelog
    Employee emp1;
    timelog time1;

    int option;
    display_menu(); // display menu

    cin >> option ; // take user input "option"
    do { // loop while user input is not equal to 4
    if (option==1){
        cout << " please enter a detail to find" << endl;
         string detail;
        cin >> detail;
    emp1.show_details(detail); // call class function with user input
    display_menu();

   cin >> option ;
    }
    if (option ==2)
    {
        cout << " enter an id number to find "<< endl;
              string idnum;
              cin >> idnum;
              time1.show_details(idnum);//call class function with user input
              display_menu();
        cin >> option ;

    }
    if (option==3){
        string id, param, value;
    cout << " please enter an id number "<< endl;
    cin >> id;
    cout << " enter parameter to change "<< endl;
    cin >> param;
    cout << " enter new value " << endl;
    cin >> value;
    emp1.edit_details (id, param, value);//call class function with user input
    display_menu();
    cin >> option ;
    }
    }
    while (option != 4);
    if (option==4){
        emp1.new_details();
    }
return 0;
}

void display_menu()
{
    cout <<  " Welcome to the Employee Management program"<< endl;
    cout << " Please select an option from the menu" << endl;
    cout << " 1. Search User" << endl;
    cout << " 2. View Time Logs" << endl;
    cout << " 3. Update Information"<< endl;
    cout << " 4. Save and Exit " << endl;
}


