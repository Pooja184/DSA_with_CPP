//calculator
#include<iostream>
using namespace std;

int main()
{
  int a,b,c;
  char op;
  cout<<"Enter any two numbers:";
  cin>>a>>b;
  label: ;
  cout<<"Provide operator:(+,-,*,/)=";
  cin>>op;
  if(op == '+'){
    c=a+b;
  }else if(op == '-'){
    c=a-b;
  }else if(op == '*'){
    c=a*b;
  }else if (op == '/')
  {
    c=a/b;
  }else{
    cout<<"Enter the valid operator";
    goto label;
  }
  cout<<"Result :"<<a<<op<<b<<"="<<c;
  
}

