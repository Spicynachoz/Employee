#include "employee.h"
#include <iostream>
#include <fstream>
using namespace std;

// employee constructor. open file and stuff file into 2d array
Employee:: Employee ()
{
    ifstream detfile;
    detfile.open("details.txt");
     if(!detfile)

    //Test file open
    {
                cout<<"Error opening output file"<<endl;

    }
    while(a < 100)
    {
        detfile >> empArray[a][b];
        b++;
        if (b==6)
        {
            b=0;
            a++;
        }
    }
    detfile.close();
    string* empArray;

}
// take user inputs : id, param, value
// match id and param with nth element in the array
// set nth element to new value
    void Employee:: edit_details(string id, string param, string value)
		{
		    int i , j ;
                for (int i=0; i<100; i++) {
		    if ( empArray[i][0] == id ){
		        if ( param == "department" || param == "Department" )
            {
                j = 4;
            empArray[i][4] = value;
            }
		        if ( param == "name" || param == "Name" )
            {
                j = 1;
            empArray[i][1] = value;
            }
                if ( param == "date of birth" || param == "Date of Birth" )
            {
                j = 2;
            empArray[i][2] = value;
            }
                if ( param == "SSN" || param == "ssn" )
            {
                j = 3;
            empArray[i][3] = value;
            }
                 if ( param == "Position" || param == "position" )
            {
                j = 5;
            empArray[i][5] = value;
            }

		}

           }
		    }



    void Employee :: show_details(string detail)
    // loop through 2d array
    // match value with nth element in array
    // print out ements 0 to 5 of that row
		{
		    for (int i=0; i<100; i++) {
            for (int j=0; j<6; j++) {
        if (empArray[i][j] == detail)
        {
            cout << empArray[i][0]<<" " <<  empArray[i][1] << " " << empArray[i][2]<< " " <<empArray[i][3]
            << " " << empArray[i][4]<< " " << empArray[i][5] << endl;
            //cout << empArray[0][0] <<" " <<  empArray[0][2]<<endl;
        }



   }
}
		}

void Employee:: new_details( )
{
    // open file " details.txt"
    // loop through and stuff 2d array into file
    ofstream detafile ("details.txt");
    for (int i=0; i<100; i++) {

            for (int j=0; j<6; j++) {
                detafile<< empArray[i][j] << " " ;


}
    detafile << endl;
    }
     detafile.close();
}

