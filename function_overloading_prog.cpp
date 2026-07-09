#include <iostream>
#include <cmath>

using namespace std;



    
double area(float r){
    return 3.14*r*r;
}

double area(int h, int b){
    return 0.5*b*h;
}


int main (){
     
    cout<<area(5, 3)<<endl;
    cout<<area(7);



return 0;
}
