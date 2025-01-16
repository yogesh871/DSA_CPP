#include <iostream>
using namespace std;

class vehicle {

public:
void name() {
    cout << "vihecle name  is :" << endl;
}
   
};

class bike  : public vehicle {
     public: 
     void bikename () {
        cout << "bike is the vehicle" << endl;
     }

};

class car  : public vehicle{
     public: 
     void carnaeme () {
        cout << "car is the vehicle" << endl;
     }

};

int main() {

    bike c1;
    car c2;


    c1.name();
    c1.bikename();
    c2.carnaeme();

     
    return 0;

}