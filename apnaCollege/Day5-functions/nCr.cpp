#include<iostream>
using namespace std;

int factorial(int num){
    int fact=1;
    for(int i=1;i<=num;i++){
        fact*=i;
    }
    return fact;
}

int main(){
    int n=6;
    int r=3;
    int nValue=factorial(n);
    int rValue=factorial(r);
    cout<<(nValue/(rValue*(factorial(n-r))));
    // cout<<factorial(5);

}