#include <iostream>
using namespace std;
int main(){
int n;
cin>>n;  // Enter No. of rows and columns
int i=1;
while (i<=n){
    int j=1;
       while(j<=n){
        cout<< j; // n-j+1 to get 321 321
        j+=1;
       }
    cout<< endl;   
   i+=1;    
}

}