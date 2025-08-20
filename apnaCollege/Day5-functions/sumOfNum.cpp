//calculate the sum of numbers from 1 to n
#include<iostream>
using namespace std;

int sumOfNum(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    return sum;
}

int main(){
    int sum=sumOfNum(5);
    cout<<sum;
}