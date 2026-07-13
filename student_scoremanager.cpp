#include <iostream>
using namespace std;

class student
{

public:
    string name;
    int marks[6], total, rollno;
    double percentage;
    static int counter;

    void getinfo(void)
    {

        cout << "ENTER STUDENT "<<"'"<< ++counter <<"'"<<" NAME:" << endl;
        cin >> name;

        cout << "ENTER ROLL NO.:" << endl;
        cin >> rollno;

        cout << "ENTER MARKS OF MATHS:" << endl;
        cin >> marks[0];
        cout << "ENTER MARKS OF PHYSICS:" << endl;
        cin >> marks[1];
        cout << "ENTER MARKS OF CHEMISTRY:" << endl;
        cin >> marks[2];
        cout << "ENTER MARKS OF ENGLISH:" << endl;
        cin >> marks[3];
        cout << "ENTER MARKS OF HINDI:" << endl;
        cin >> marks[4];
        cout << "ENTER MARKS OF GK:" << endl;
        cin >> marks[5];
        cout<<endl;

        

    }


void calculateinfo(){

    total = marks[0]+marks[1]+marks[2]+marks[3]+marks[4]+marks[5];

        percentage = (((total)/600.00)*100);
}

    void showinfo()
    {

        cout << "The Total Score of " << name << ", Roll No. "<<rollno<<" is: "<<total<<" & the Percentage is: "<<percentage<<'%'<<endl;

    
    }


};

int student::counter = 0;

int main()
{

    int i;

    student std[3];

    for (i = 0; i < 3; i++)
    {
        std[i].getinfo();

        std[i].calculateinfo();


    }

    

    for(i = 0; i < 3; i++)
    {
        std[i].showinfo();
    }



    return 0;
}
