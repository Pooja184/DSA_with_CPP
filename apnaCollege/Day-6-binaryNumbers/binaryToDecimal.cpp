#include<iostream>
using namespace std;

int binaryToDecimal(int binaryNum){
    int ans=0,power=1;//2,4,8,16

    while(binaryNum>0){
        int rem=binaryNum%10;//1,0,0
        cout<<rem<<"\n";
        ans+=(rem*power);
        binaryNum/=10;//1001,100,10,1
        power*=2;
    }
    return ans;
}
//1+2+0+0+16=19
int main(){
    int binaryNum =10011;
    cout<<binaryToDecimal(binaryNum);
    return 0;
}