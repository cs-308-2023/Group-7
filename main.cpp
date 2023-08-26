#include <iostream>
#include "functions.h"
using namespace std;
int main(){
    int x,y;
    x=56;
    y=98;
    cout<<"output of GCD of "<<x<<" and "<<y<<" is: "<<gcd(x,y)<<endl;
    bool flg=true;
    print_hello();
    while (flg){
    int n;
    cout<<"enter your number"<<endl;
    cin>>n;
    if (n<0) {cout<<"-ve enter again"<<endl; continue;}
    flg = false;
    cout<< endl;
    cout<<"The factorial of"<<n<<" is "<< factorial(n)<< endl;
    return 0;

    }
}
