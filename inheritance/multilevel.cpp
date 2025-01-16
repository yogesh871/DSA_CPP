#include <iostream>
using namespace std;

class animal {

public:
void eat() {
    cout << "You can Fight" << endl;
}
   
};

class animal_park  : public animal {
     public: 
     void dark () {
        cout << "you can also fight" << endl;
     }

};

class pitbull  : public animal_park {
     public: 
     void white () {
        cout << "you can also fight with pitbull" << endl;
     }

};

int main() {

    pitbull obj;

    obj.eat();
    obj.dark();
    obj.white();

    return 0;

}