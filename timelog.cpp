#include "timelog.h"
#include <iostream>
#include <fstream>
#include <cmath>
#include <sstream>
using namespace std;


timelog::timelog()
// timelog constructor. open file and create 2d array
{
    ifstream timefile;
    timefile.open ("timelog.txt");
    if(!timefile)

    //Test file open
    {
                cout<<"Error opening output file"<<endl;

    }
    while(a < 100)
    {
        timefile >> timeArray[a][b];
        b++;
        if (b==4)
        {
            b=0;
            a++;
        }
    }
    timefile.close();

}
    void timelog :: show_details(string idnum)
		{
		    // loop through 2d array and match idnum with nth element
		    // convert nth element of array into integer value
		    // calculate difference and remainder then print

		    int x, y;
		    double diff, remain;

		    for (int i=0; i<100; i++) {
            for (int j=0; j<4; j++) {
        if (timeArray[i][j] == idnum)
        {
                    stringstream(timeArray[i][2])>>x;
                    stringstream(timeArray[i][3])>>y;
                    if (abs(( x - y)%(100))==0){
                            diff = abs(( x - y)/(100));
                    remain = 0;
                    }
                    if (abs(( x - y)%(100))!=0) {
                        diff = abs(( x - y)/100);
                             remain = 0.5;
                    }

    cout << timeArray[i][1] << " " << timeArray[i][2]<< " " <<timeArray[i][3]<<" "  << diff+remain << endl;
        }
            }
		    }
		}

