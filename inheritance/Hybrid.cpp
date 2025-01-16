#include <iostream>
using namespace std;

class A {

public:
void top() {
    cout << "From class A" << endl;
}
   
};

class B : public A {
     public: 
     void sideB () {
        cout << "from class B" << endl;
     }

};

class C : public A{
     public: 
     void sideC () {
        cout << "from class C" << endl;
     }

};

class D : public B, public C{
     public: 
     void bottom () {
        cout << "from class D" << endl;
     }

};

int main() {

   D obj;

   obj.sideB();
   obj.sideC();
   obj.bottom();
   obj.B::top();

    return 0;

}