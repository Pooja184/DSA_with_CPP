#include<iostream>
using namespace std;

int main()
{
    int num,fac;
    int facto(int n);
    cout<<"Enter the number:";
    cin>>num;
    fac=facto(num);
    cout<<"factorial:"<<fac;
}

int facto(int n)
{
    if(n<=1){
        return 1;
    }else{
        return n*facto(n-1);
    }
}