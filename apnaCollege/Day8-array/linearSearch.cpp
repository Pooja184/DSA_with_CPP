#include<iostream>
using namespace std;

int linearSearch(int arr[],int size, int num){

    for(int i=0;i<size;i++){
        if(arr[i]==num){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[]={3,5,7,2,9};
    cout<<linearSearch(arr,5,2);
    return 0;
}