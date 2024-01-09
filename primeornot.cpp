
#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
   int howmuch;
   cin>>howmuch;
   for( int n=2;n<=howmuch;n++){
       cout<< n <<endl ;
       if(n%2==0){
           cout<<"notprime "<<endl;
       }
       else{
           cout<<"prime "<<endl;
       }
   }
    return 0;
}
