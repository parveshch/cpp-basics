#include <iostream>
#include <cmath>

using namespace std;



int main (){

    int x, y;
    char t;
    
    cout<< "Enter your equation:" <<endl;

    cin>> x>> t>> y;

    if (t=='*'){
        cout << x*y<<endl;

    }
    
    else if (t=='+'){
        cout << x+y<<endl;

    }

    else if (t=='-'){
        cout << x-y<<endl;

    }

    else if (t=='/'){
        cout << x/y<<endl;

    }

    else{

        cout <<"enter an appropriate arithmetic sign";
    }



return 0;
}