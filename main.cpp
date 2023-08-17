#include <iostream>
#include "functions.h"
using namespace std;
int main(){
    bool flg=true;
    while (flg){
    print_hello();
    int n;
    cin>>n;
    if (n<0) {cout<<"-ve enter again"<<endl; continue;}
    flg = false;
    cout<< endl;
    cout<<"The factorial of"<<n<<" is "<< factorial(n)<< endl;
    return 0;

    }
}
