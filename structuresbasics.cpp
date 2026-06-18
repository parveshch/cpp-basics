#include <iostream>
#include <cmath>

using namespace std;


struct student
{
    int rollno;
    int marks;
    char favChar;

    
};

int main (){
    struct student priyanshu;
    priyanshu.rollno = 21;
    priyanshu.marks = 87;
    priyanshu.favChar = 'w';

    cout << "The roll no is: "<< priyanshu.rollno<<endl;
    cout << "The marks are: "<< priyanshu.marks<<endl;
    cout << "The fav char is: "<< priyanshu.favChar<<endl;

return 0;
}