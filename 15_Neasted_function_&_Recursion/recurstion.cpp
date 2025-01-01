#include <iostream>
using namespace std;

//  Factoruial with Recurstion 
int fact(int n){
    if(n <= 1){
      return 1;
    }
    else{ 
        return  n * fact(n -1); 
    }
}

int main () {
    int ans = fact(5);
    cout << " factorial is :" << ans << endl;

}