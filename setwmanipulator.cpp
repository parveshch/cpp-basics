#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    int x, y, z, t;

    x = 241, y = 7, z = 5911, t = 60;

    //trying setw manipulator 

    cout << "the value of x is:"<< setw(6)<< x << endl;
    cout << "the value of y is:"<< setw(6)<<y << endl;
    cout << "the value of z is:"<< setw(6)<<z << endl;
    cout << "the value of t is:"<< setw(4) << t << endl;


    return 0;



}
