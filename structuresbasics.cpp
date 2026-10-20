#include <iostream>
#include <cmath>

using namespace std;


/*typedef struct student
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
    */



    struct car{
    
    int engine_cc;
    float max_speed;
    int price;
    
    };

   int main (){

    struct car zen;
    zen.engine_cc = 998;
    zen.max_speed = 140;
    zen.price = 1,00,000;

    struct car alto;
    alto.engine_cc = 798;
    alto.max_speed = 160;
    alto.price = 2,00,000;


    cout<<zen.engine_cc<<" cc";

return 0;
}