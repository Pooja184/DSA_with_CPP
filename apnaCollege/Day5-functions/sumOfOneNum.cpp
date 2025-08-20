#include<iostream>
using namespace std;

int sum(int num){
    int sum=0;
    int i=1,digit;
    while(num>0){
        digit=num%10; //provide last digit 
        sum+=digit; 
        num=num/10; //provide all digits except last
    }
    return sum;
}

int main(){
     int n1=129;
     cout<<sum(n1);
     return 0;
}