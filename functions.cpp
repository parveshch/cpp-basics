#include <iostream>
#include <cmath>

using namespace std;

int mul(int a, int b){

return a*b;
}

int main (){
    int num1, num2;

cout<< "enter the first number"<<endl;
cin>> num1;

cout<< "enter the second number"<<endl;
cin>>num2;

cout<< "the multiplication is: "<< mul(num1, num2);

cout<<endl<<"thankyou";

return 0;
}

//the purpose of return a*b is to return this value (a*b) to the one who called the function- mul()

