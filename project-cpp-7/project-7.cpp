#include <iostream>
using namespace std;


//  question No. 01


class  student{ 
  public:
  int obj;
   int id;
   string Name;
};

void  studentdata(int id, string Name){
    cout << "Student id :" << id << endl;
    cin >> id;

    cout << "student Name :" << endl;
    cin >> Name ;
};

void templete () {
cout << "Student Name :" << endl;
}

int main () {
  studentdata(121, "aman");
  studentdata(122, "mohit");
  studentdata(123, "rahul");
  studentdata(124, "ketan");
  studentdata(125, "vivek");   
}




// Question No. 02

class studentinfo {

    private:
    int id;

    public:
    string StudentName;
   
};

void addinfo(){

}

void Displayinfo () {

};

void Deleteinfo (){

};

void serchinfo (){

};

void  push_back (int addinfo) {
    int size;
    int choice;
       
  cout << "Enter your vator size " << endl;
  cin >> size;

  do
  {
      cout << "Press 1 For add students details " << endl;
      cout << "Press 2 For Display student details " << endl;
      cout << "Press 3 For Delete student details " << endl;
      cout << "Press 4 For serch student details " << endl;
      cout << "Press 0 Exit" << endl;


      switch (choice)
      {
    case 1: 
    //    addinfo ();
      break;
    case 2: 
      Displayinfo ();
      break;
    case 3: 
       Deleteinfo ();
      break;
    case 4: 
      serchinfo();
      break;
    case 0: 
      break;
        
        
      default:
        break;
      }
  } while (choice != 0);
  

};




