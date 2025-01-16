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

int main() {

    animal_park obj;

    obj.eat();
    obj.dark();

    return 0;

}