#include<iostream>
using namespace std;

void reverseArr(int arr[],int size){

    int i=0;
    int j=size-1;
    while(i<j){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
    

}

int main(){
    int arr[]={2,6,5,8,9,1};
    int size=6;
    reverseArr(arr,size);
 
     for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
   
}