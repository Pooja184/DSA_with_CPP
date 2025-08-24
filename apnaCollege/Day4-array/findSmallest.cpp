#include<iostream>
using namespace std;

void findSmallest(int arr[],int size){
    int smallest=arr[0]; //here we can use INT_MAX also
    for(int i=0;i<size;i++){
        if(arr[i]<smallest){
            smallest = arr[i];
        }
    }
    cout<<smallest;
}

int main(){
    int arr[5]={3,5,2,-7,1};
    int size=5;
    findSmallest(arr,size);
}