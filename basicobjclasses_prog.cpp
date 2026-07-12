#include <iostream>
using namespace std;


class bankacc{


    public:
        string name, fathersname, acctype;
        int pincode;

        

    

        void showPublicData(){


          cout << endl << "Account Holder: "<< name << endl << "Father's Name: " << fathersname << endl << "Account Type: " << acctype
            << endl << "Pincode: " << pincode << endl;
        }

    private:
        int pin;
        string dob;
        double balance;

    
    };
    

    

int main (){

    int t, i;

    bankacc accno[100];

    accno[0].name = "PRIYANSHU";
    accno[0].fathersname = "RAJINDER KUMAR";
    accno[0].acctype = "CURRENT";
    accno[0].pincode = 152122;


    accno[1].name = "SHUBHAM";
    accno[1].fathersname = "SHUBHASH CHANDER";
    accno[1].acctype = "SAVING";
    accno[1].pincode = 152123;


    //acc74101.showPublicData();
    //acc74102.showPublicData();


    cout<< "Enter Your Ac. No."<<endl;
    cin>>t;

    if (t>2 || t<0){

        cout<<"Account Not Found";
    

    }
    else{

        accno[t].showPublicData();

       

    }

    


    
return 0;
}

