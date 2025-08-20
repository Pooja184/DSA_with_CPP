#include<iostream>
using namespace std;

void fibonacci(int num){
    int a=0,b=1,fib=0;

    for(int i=0;i<=num;i++){
        if(i==0){
            cout<<a<<" ";
        }else if(i==1){
            cout<<b<<" ";
        }else{
            fib=a+b;
            cout<<fib<<" ";
            a=b;
            b=fib;
        }
    }
}

int main(){
    int num=10;
    fibonacci(num);
}