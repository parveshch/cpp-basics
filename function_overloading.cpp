#include <iostream>
#include <cmath>

using namespace std;

int multiply(int a, int b){
    return a*b;
}
   
int multiply(int a, int b, int c, int d){
    return a*b*c*d;
}



int main (){
     int num1, num2, num3, num4;

    cout<<"enter 1st no."<<endl;
    cin>>num1;

    cout<<"enter 2nd no."<<endl;
    cin >> num2;

    cout<<"enter 3rd no."<<endl;
    cin>>num3;

    cout<<"enter 4th no."<<endl;
    cin >> num4;


    cout<<endl<<multiply(num1, num2);
    cout<< endl<<multiply(num1, num2, num3, num4);



return 0;
}