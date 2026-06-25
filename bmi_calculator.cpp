#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main (){

    float Weight, BMI, Height;

    cout << "Program Initializing..."<<endl <<endl;

    cout << "We are gonna calculate BMI"<<endl <<endl;


    cout << "Enter your Weight in kg-" <<endl;
    cin >> Weight;

    cout << "Enter your Height in cm-" << endl;
    cin >> Height;

    BMI = (Weight/(pow ((Height/100), 2)));

    cout <<endl<< "Your BMI is: " << fixed << setprecision(1)<< BMI << endl;



    if(BMI <18.5 && BMI >=10){
    cout << "You are Underweight, Kindly have a proper diet."<<endl <<endl;
    cout << "Recommended Body Weight "<< 18.5*pow(Height/100, 2) <<"kg"<<" - "<< 24.9*pow(Height/100, 2)<<" kg." <<endl<<endl;

    }
     else if(BMI < 10){
        cout << BMI << " BMI is beyond limits, Kindly check your input values." << endl <<endl;
    
    }
    else if(BMI >=18.5 && BMI <=24.9){
    cout << "You have a healthy bodyweight."<<endl <<endl;
     cout << "Recommended Body Weight "<< 18.5*pow(Height/100, 2) <<"kg"<<" - "<< 24.9*pow(Height/100, 2)<<" kg." <<endl<<endl;
    
    }
    else if (BMI >24.9 && BMI <=29.9) {
    cout << "You are overweight, No need to worry much, Just do exercise daily." <<endl <<endl;
     cout << "Recommended Body Weight "<< 18.5*pow(Height/100, 2) <<"kg"<<" - "<< 24.9*pow(Height/100, 2)<<" kg." <<endl<<endl;
    
    
    }
    else if (BMI >29.9 && BMI <=34.9) {
    cout << "You have Class - I Obesity, Just cut out all the Junk food and run 10km daily." <<endl <<endl;
    cout << "Recommended Body Weight "<< 18.5*pow(Height/100, 2) <<"kg"<<" - "<< 24.9*pow(Height/100, 2)<<" kg." <<endl<<endl;

    }
    else if (BMI > 34.9 && BMI <40) {
    cout << "You have Class - II Obesity, Kindly consult a doctor!!!" <<endl <<endl;
    cout << "Recommended Body Weight "<< 18.5*pow(Height/100, 2) <<"kg"<<" - "<< 24.9*pow(Height/100, 2)<<" kg." <<endl<<endl;

    }
    else if (BMI >= 40 && BMI <50) {
    cout << "You have Class - III Obesity, Kindly consult a doctor!!!" <<endl <<endl;
    cout << "Recommended Body Weight "<< 18.5*pow(Height/100, 2) <<"kg"<<" - "<< 24.9*pow(Height/100, 2)<<" kg." <<endl<<endl;

    }

    else if (BMI >= 50 && BMI <59.9) {
    cout << "You have Class - IV Obesity, Consult a doctor immediately!!!" <<endl <<endl;
    cout << "Recommended Body Weight "<< 18.5*pow(Height/100, 2) <<"kg"<<" - "<< 24.9*pow(Height/100, 2)<<" kg." <<endl<<endl;

    }
    else if (BMI >= 59.9 && BMI <69.9) {
    cout << "You have Class - V Obesity, Consult a doctor immediately!!!" <<endl <<endl;
    cout << "Recommended Body Weight "<< 18.5*pow(Height/100, 2) <<"kg"<<" - "<< 24.9*pow(Height/100, 2)<<" kg." <<endl<<endl;

    }
    else if (BMI >= 69.9 && BMI <79.9) {
    cout << "You have Class - VI Obesity, Consult a doctor immediately!!!" <<endl <<endl;
    cout << "Recommended Body Weight "<< 18.5*pow(Height/100, 2) <<"kg"<<" - "<< 24.9*pow(Height/100, 2)<<" kg." <<endl<<endl;

    }
    else if (BMI >= 79.9 && BMI <=100) {
    cout << "You have EXTREME Obesity, Consult a doctor immediately!!!" <<endl <<endl;
    cout << "Recommended Body Weight "<< 18.5*pow(Height/100, 2) <<"kg"<<" - "<< 24.9*pow(Height/100, 2)<<" kg." <<endl<<endl;

    }

    else {
    cout << BMI << " BMI is Beyond limits, Kindly check your input values."<<endl <<endl;
    
    }


    cout << "Thank you, Have a Good Day!";

    return 0;
}


