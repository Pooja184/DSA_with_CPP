#include<iostream>
using namespace std;

//WAF to check if a number is prime or not

void primeNumber(int num){
    bool isPrime=false;
    if(num==0 && num==1){
        cout<< "enter number which is grater than 1";
    }
    for(int i=2;i<=num/2;i++){
        if(num%i==0){
            isPrime=true;
            break;
        }
    }
    if(isPrime==true){
        cout<<  "Number is not prime";
    }else{
        cout<< "Number is prime";
    }
}

int main(){
     primeNumber(6);
}