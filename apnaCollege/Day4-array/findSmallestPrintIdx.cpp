#include<iostream>
using namespace std;

void smallestIdx(int arr[],int size){
    int smallest=INT_MAX;
    int idx=0;
    for(int i=0;i<size;i++){
        if(arr[i]<smallest){
            smallest=arr[i];
            idx=i;

        }
    }
    // cout<<smallest<<endl;s
    cout<<idx;
}

int main(){
    int arr[5]={5,4,7,1,3};
    int size=5;
    smallestIdx(arr,size);
    return 0;
}

