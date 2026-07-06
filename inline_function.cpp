#include <iostream>
#include <cmath>

using namespace std;


 int diff(int a, int b){

    return a-b;
}


int main (){
    int x, y;

    cout<<"enter the first number"<<endl;
    cin>>x;

    cout<<"enter the second number"<<endl;
    cin>>y;

    cout<<"the difference is: "<<diff(x, y)<<endl;
     cout<<"the difference is: "<<diff(x, y)<<endl;
      cout<<"the difference is: "<<diff(x, y)<<endl;
       cout<<"the difference is: "<<diff(x, y)<<endl;
        cout<<"the difference is: "<<diff(x, y)<<endl;
         cout<<"the difference is: "<<diff(x, y)<<endl;
          cout<<"the difference is: "<<diff(x, y)<<endl;
           cout<<"the difference is: "<<diff(x, y)<<endl;
            cout<<"the difference is: "<<diff(x, y)<<endl;
             cout<<"the difference is: "<<diff(x, y)<<endl;




return 0;
}

//the compiler firstly see that whether inline funtion is written? if yes then
//it literally copy the function's code i.e. (a-b) and directly paste it where the function value is called