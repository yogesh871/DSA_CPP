#include <iostream>
using namespace std;

int main()
{

    {
        //  Question no. 01 
        int i, j;

        for (i = 41; i <= 45; i++)
        {
            for (j = 41; j <= i; j++)
            {
                cout << j << " ";
            }
            cout << endl;
        }
    }

    
        //  Question no. 02 =>
  

    // int i , j, value;

    //  for (i =11; i <= 14; i++ ){

    //     for (j =11; j <= i; j++){
    //         cout << j << " ";
           
    //     }
         
    // }
    


{
    //  Question no .3
    for (int i = 5; i >= 1  ; i--)
    {     
         for (int k = 5; k > i; k--)
         {
            cout << "";
         }
         for (int j = 1; j <= i; j++)
         {
            if(j % 2 == 1){
                cout << " 1 ";
            }
            else{
                cout << " 0 ";
            }
         }
         cout << endl;    
    }
}

{
//   Question no. 04
     for ( int i = 5; i >1 ; i--)
     {
       for (int  k = 5; k >1; k--)
       {
        cout << " ";
       }
       for (int j = 1; j <= i ; j++)
       {
         cout << j << " ";
       }
       cout << endl;   
     }
}


    // Question no .5

{
      for ( int i = 5; i > 1 ; i--)
     {
       for (int j = 1; j <= i ; j++)
       {
         cout << j << " ";
       }
       cout << endl; 
     }
}


//  Question No. 06
for(int i = 1; i <= 5; i++){

    for (int k= 5; k > i; k--){
        cout << "  "; 
    }
    for (int j = i; j >=1 ; j--){

    cout << j << " " ;     
    }
cout << endl;
}


//  Question no. 07
{

for(char i = 1; i <= 5; i++){

    for (char k= 5; k > i; k--){
        cout << " * "; 
    }
    for (char j = i; j >=1 ; j--){

    cout << j << " " ;     
    }
cout << endl;

}
}