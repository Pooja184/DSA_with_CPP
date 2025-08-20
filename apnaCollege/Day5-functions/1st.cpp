#include<iostream>
using namespace std;

int sum(int n1, int n2){
    int add=n1+n2;
    return add;
}

int minimum(int n1,int n2){
    if(n1>n2){
        return n2;
    }else{
        return n1;
    }
}
int main(){
    int value=sum(10,20);
    cout<<value<<endl;
    int min=minimum(2,1);
    cout<<min;
}