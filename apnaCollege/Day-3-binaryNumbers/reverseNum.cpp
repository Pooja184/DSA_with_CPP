#include<iostream>
using namespace std;

void reverse(int num){
    int ans=0;
    int rev;
    while(num>0){
        int rem=num%10;
        ans = ans*10+rem;
        num /=10;
        // cout<<rem;
    }
    rev=ans;
    cout<<rev;
}

int main(){
    reverse(1667);
    return 0;
}