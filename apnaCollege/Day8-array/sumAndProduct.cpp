//WAF to calculate the sum & product of all numbers in an array
#include<iostream>
using namespace std;

void sumAndProduct(int arr[],int size){
    int sum=0, product=1;

    for(int i=0;i<size;i++){
        sum+=arr[i];
        product*=arr[i];
    }
    // return sum,product;
    cout<<sum<<"\n";
    cout<<product<<"\n";
}

int main(){
    int arr[]={2,4,5,6,2};
    int size=5;
    sumAndProduct(arr,size);
}