#include <iostream>
using namespace std;

class wheel {

public:
void color() {
    cout << "Wheel color is black" << endl;
}
   
};

class engine {
     public: 
     void cc () {
        cout << "900 cc engine" << endl;
     }

};

class car  : public wheel, public engine {
     public: 
     void name () {
        cout << "car name is ferrei" << endl;
     }

};

int main() {

    car obj;

    obj.color();
    obj.cc();
    obj.name();

    return 0;

}