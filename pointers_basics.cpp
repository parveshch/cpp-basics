#include <iostream>
#include <cmath>

using namespace std;

int main (){
    
    int t, p;

    int* q= &t;

    cout<< "Enter the Integer value and get the address of it on your System's RAM."<<endl<<endl;

    cout << "Press 0 to end the program, Press 1 to start the program"<<endl;
    cin >> p;

    switch (p)
    {
    case 0:
        cout<< "Program Ended.";
        break;

    case 1:
       
    cout << "Program Initializing..."<<endl<<endl;

    

    cout<< "Enter the number of which you want address"<<endl;
    cin >>t;



    //Here q is the pointer variable, for address of t.
    // int variable is used to store integer, similarly int* (pointer variable) is used to store address.


    cout <<"The address of " <<t<< " is: " << q<<endl;

    break;

    //  *--> denotes value at

     default:

     cout<<"Invalid Input!";
        break;
    }
return 0;
}
