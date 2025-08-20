#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    char op;
    cout<<"Enter any two numbers:\n";
    cin>>a>>b;
    cin>>op;
    switch(op){
        case '+':
        c=a+b;
        break;
        case '-':
        c=a-b;
        break;
        case '*':
        c=a*b;
        break;
        case '/':
        c=a/b;
        break;
        default:
        cout<<"Enter valid opertor";
        break;
    }
    cout<<"Result:"<<a<<op<<b<<"="<<c;
}