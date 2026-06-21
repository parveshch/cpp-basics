#include <iostream>
#include <cmath>

using namespace std;


typedef struct student
{
    int rollno;
    int marks;
    char favChar;

    
} st;

int main (){
    st priyanshu;
    priyanshu.rollno = 21;
    priyanshu.marks = 87;
    priyanshu.favChar = 'w';

    st ajit;
    ajit.marks = 65;
    ajit.rollno = 01;
    ajit.favChar = 'a';

    cout << "The roll no is: "<< priyanshu.rollno<<endl;
    cout << "The marks are: "<< priyanshu.marks<<endl;
    cout << "The fav char is: "<< priyanshu.favChar<<endl<<endl;

    cout << "The roll no is: "<< ajit.rollno<<endl;
    cout << "The marks are: "<< ajit.marks<<endl;
    cout << "The fav char is: "<< ajit.favChar<<endl;



return 0;
}