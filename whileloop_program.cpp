#include <iostream>
using namespace std;

int main(){


    int y, z;
    y=0;


    cout <<"Program Initializing..." <<endl;

    cout << "Which table you want?"<<endl;
    cin >> z;

    cout <<endl<<"Table of "<< z <<endl;

    while (y>=0 && y<=10) {

        cout <<z<<'x'<<y<<"="<< (y*z) <<endl;
        y++;
    }
    
    cout << endl << "Thank you! Have a good day :)" <<endl;


      
    return 0;

}



