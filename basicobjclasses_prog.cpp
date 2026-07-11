#include <iostream>
#include <cmath>

using namespace std;


class bankacc{

    public:
        string name, fathersname, acctype;
        int pincode;

        void showPublicData(){

            cout << endl << "Account Holder: "<< name << endl << "Father's Name: " << fathersname << endl << "Account Type: " << acctype
            << endl << "Pincode: " << pincode << endl ;
        }

    private:
        int pin;
        string dob;
        double balance;

    
    };
    

int main (){

    string getAccNo;

    bankacc acc74101;

    acc74101.name = "PRIYANSHU";
    acc74101.fathersname = "RAJINDER KUMAR";
    acc74101.acctype = "CURRENT";
    acc74101.pincode = 152122;


    bankacc acc74102;

    acc74102.name = "SHUBHAM";
    acc74102.fathersname = "SHUBHASH CHANDER";
    acc74102.acctype = "SAVING";
    acc74102.pincode = 152123;


    //acc74101.showPublicData();
    //acc74102.showPublicData();


    cout << "Enter Your Bank Account No. (Including the prefix - acc)"<< endl;
    cin >> getAccNo;

    

    if (getAccNo == "acc74101"){
        acc74101.showPublicData();
    }
    
    else if(getAccNo == "acc74102"){
        acc74102.showPublicData();
    }


    else{
    cout << "Account Not Found!";
    }



    
return 0;
}

