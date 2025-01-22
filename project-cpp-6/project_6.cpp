#include <iostream>
using namespace std;

class BankAccount
{
public:
      int accountNumber = 900073200001997;
      double balance = 54000;
      double addamount = 12000;
      double removeAmount = 8000;
      double totalAmount;
      double finalAmount;

        void deposit(){
            cout << "balance: " << balance << endl;
            cout << "Added Amount is: " << addamount << endl;

              totalAmount = balance + addamount;
              cout << "balance : " << totalAmount <<endl;
        }

        void withdraw(){
            cout << " removed Amount is:" << removeAmount << endl;
           finalAmount =  totalAmount  - removeAmount;
        };

        void getBalance(){
            cout << "balance : " <<  finalAmount << endl;
        }

        void display() {
            cout <<"Account Number : " <<  accountNumber << endl;
            cout << "Account Holder Name " << endl; 
            cout << " balance :" << finalAmount << endl;
        }
};

class Saving : public BankAccount{
 public: 

 double  finalbalance = finalAmount;

 double  interestRate;

     void calculateInterest(){
        interestRate  =  (58000 * 2 * 2)/100 ; 
        cout << "your interestRate" << interestRate << endl;

 
    }
}; 

class Checking : public BankAccount{

    public: 
      double overdraftLimit;

     void checkOverdraft(){
        cout << " your Welcome" << endl;

      }


}; 

class FixedDeposit : public BankAccount{

    double term;

    void calculateInterest(){


    }
};

int main(){
     Saving obj;

     obj.deposit();
     obj.withdraw();
     obj.getBalance();
     obj.display();
     obj.calculateInterest();

     Checking obj;
    //  obj.checkOverdraf();

}
