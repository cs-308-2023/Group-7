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