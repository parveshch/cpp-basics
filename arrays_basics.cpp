#include <iostream>
#include <cmath>

using namespace std;

int main (){

    int t;
    cout << endl << "We have 7 values of weight in (kg) as integers, input numbers between 0 to 6 to get any oof the output."<<endl;
    cin >> t;
    
    int weight[] ={40, 68, 86, 73, 105, 34, 45};

    cout << "The output value of weight is: "<< weight[t] << " kg" <<endl;

return 0;
}
