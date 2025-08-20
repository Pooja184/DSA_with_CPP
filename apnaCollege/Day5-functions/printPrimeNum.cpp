//WAF to print all prime numbers from 1 to N

#include<iostream>
using namespace std;

int prime(int num){
    bool isPrime=true;
    for(int i=2;i<=num/2;i++){
        if(num%i==0){
            isPrime=false;
            break;
        }
    }
    if(isPrime==true){
        return true;
    }else{
        return false;
    }
}

void printPrime(int n){
    for(int i=2;i<=n;i++){
        if(prime(i)){
            cout<<i<<" ";
        }
    }
}

// void printPrime(int num){
//     bool isPrime=true;
//     for(int i=2;i<=num;i++){
//         if(num%i==0){
//             isPrime=false;
//             break;
//         }
//     }
//     if(isPrime==true){
//         cout<<num;
//     }
// }
int main(){
    printPrime(10);
    return 0;
}