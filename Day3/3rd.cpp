#include<iostream>
using namespace std;

int main()
{
    int n,f;
    //formal arg
    int fact(int n);
    cout<<"Enter the number";
    cin>>n;
    f=fact(n);
    cout<<"Factorial of"<<n<<"="<<f;
}

// int fact(int n)
// {
//     int f=1;
//     for(int i=1;i<=n;i++)
//     {
//         f=f*i;
//     }
//     return f;
// }

//actual arg
int fact(int n)
{
    if(n<=1)
    {
        return 1;
    }
    else{
        return n*fact(n-1);
    }
}