#include <iostream>
#include <cmath>

using namespace std;

int main (){

int marks[] = {89, 88, 94, 75, 79, 33, 99};

string name[] = {"ajit", "rohit", "bhawna", "mittul", "shubham"};


int t;

cout << endl << "Array containing Marks, and size allocated in the ram: " << endl;

for (int t=0; t<7; t++) {

    cout << marks[t] << " with the size of: " << sizeof(marks[t]) <<" bytes."<< endl;

}



cout << endl << "Array containing Name, and size allocated in the ram: " << endl;

for (int t=0; t<6; t++){

    cout << name[t] << " with the size of: " << sizeof(name[t]) <<" bytes."<< endl;
}





return 0;
}
