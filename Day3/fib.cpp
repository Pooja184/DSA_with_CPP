#include<iostream>
using namespace std;

int main()
{
    int fibo(int n);
    int num;
    cout<<"Enter the number of terms";
    cin>>num;

    cout<<"Fibonacci series:";
    for(int i=0;i<num;i++)
    {
        cout<<fibo(i)<<" ";
    }
}

int fibo(int n)
{
    if(n<=1)
    {
        return n;
    }else{
        return fibo(n-1)+fibo(n-2);
    }
}