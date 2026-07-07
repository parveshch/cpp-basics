#include <iostream>
#include <cmath>

using namespace std;


int getdedouble1(int a, int b=2){
    return a*b;
}

int getdedouble2(int a, int b = 2){
    return a*b;
}


int main (){

    int x;
    cout<< "enter the number you want to be doubled"<<endl;
    cin>> x;

    cout <<endl<<"your final number is "<<getdedouble1(x)<<endl;
    cout<<"in this answer the x is doubled due to the function in which b=2"<<endl;
    cout <<"cuz we only supplied single argument (x)"<<endl<<endl;


    cout<<"your final number is "<<getdedouble2(x, 78)<<endl;
    cout<<"whereas in this, the default value of b only kicks in if we not supply 2nd argument, in this case 2nd argument is 78.";


return 0;

}

