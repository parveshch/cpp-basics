#include <iostream>
#include <cmath>

using namespace std;


class car{

    public:

        string model, body_type, engine_cc;
        int cylinder, max_speed;
     


        void details(){

            cout << "The model is: "<< model << " with "<<engine_cc <<", "<< cylinder << " Cylinder Engine"<< " and has "<<body_type<< " body type, comprising max speed of " <<max_speed<<" km/h"<<endl;
        }
 

};



int main (){

    car bmw;

        bmw.model = "X5";
        bmw.body_type = "SUV";
        bmw.engine_cc = "2993 cc";
        bmw.cylinder = 4;
        bmw.max_speed = 240;

    
    car audi;

        audi.model = "A6";
        audi.body_type = "Sedan";
        audi.engine_cc = "1984 cc";
        audi.cylinder = 4;
        audi.max_speed = 220;

    
        bmw.details();
        audi.details();


return 0;
}