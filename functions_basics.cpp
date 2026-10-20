#include <iostream>
#include <cmath>

using namespace std;


int sub(int a, int b){

    return a-b;
}

int main (){
    int num1, num2;

    cout << "enter 1st number"<<endl;
    cin>> num1;
    cout << "enter 2nd number"<<endl;
    cin >> num2;

    cout << "the difference is "<< sub(num1, num2);
    


return 0;
}