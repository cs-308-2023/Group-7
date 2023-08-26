#include <iostream>
using namespace std;

int gcd(int a,int b){
    while(a%b!=0){
        int temp=a;
        a=b;
        b=temp%b;
    }
    return b;
}

int gcd_rec(int a,int b){
    if(a%b==0) return 0;
    return gcd_rec(b,a%b);
}