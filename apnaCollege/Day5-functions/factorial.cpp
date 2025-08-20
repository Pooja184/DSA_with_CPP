#include<iostream>
using namespace std;

int factorial(int num){
    int fac=1;
    for(int i=num;i>=1;i--){
        fac*=i;
    }
    return fac;

}

int main(){
    int fact=factorial(5);
    cout<<fact;
}