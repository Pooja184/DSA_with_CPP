//WAF to print unique values in an array

#include<iostream>
using namespace std;

void uniqueArr(int arr[],int size){
    for(int i=0;i<size;i++){
        bool isUnique=true;
        for(int j=0;j<=size;j++){
            if(i!=j && arr[i]==arr[j]){
                isUnique=false;
                break;
            }
        }
        if(isUnique){
            cout<<arr[i]<<" ";
        }
    }
}

int main(){
    int arr[]={2,3,2,6,1,3};
    int size=6;
    uniqueArr(arr,size);
    return 0;
}