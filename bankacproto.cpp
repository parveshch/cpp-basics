#include <iostream>

using namespace std;



class bankac{
    
    public:
    string acholdername;
    int acno;
   
    double acbalance, deposit;

    void getdetails(void)
    {

        cout<<"Welcome to MT Finance Bank"<<endl<<endl;

       
        cout<<"Enter Your Name: "<<endl;
        cin>>acholdername;

        cout<<"Enter Your Ac. No."<<endl;
        cin>>acno;

        cout<<"Enter Your Balance: "<<endl;
        cin>>acbalance;


    }

    void setbalance(){

        cout<<"Enter the deposit money value: "<<endl;
        cin>>deposit;

        cout<<'$'<<deposit<<" Credited in Your Ac"<<endl<<"Your Total Balance is: $"<<(deposit+acbalance);


    }



};




int main (){

    bankac id[2];
    int i;


    
    for(i=0; i<2; i++){

        id[i].getdetails();
    }


    for(i=0; i<2; i++){

        id[i].setbalance();
    }

    
return 0;
}

