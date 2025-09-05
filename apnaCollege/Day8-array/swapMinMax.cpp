#include<iostream>
#include<climits>
using namespace std;

//WAF to swap min and max number of an array

void swapMinMAx(int arr[],int size){

    int smallest=INT_MAX;
    int largest=INT_MIN;
    int smIdx=0;
    int lgIdx=0;

    for(int i=0;i<size;i++){
        if(arr[i]<smallest){
            smallest=arr[i];
            smIdx=i;
        }
        if(arr[i]>largest){
            largest=arr[i];
            lgIdx=i;
        }
    }
   int temp=arr[smIdx];
   arr[smIdx]=arr[lgIdx];
   arr[lgIdx]=temp;
}


int main(){
    int arr[]={3,1,2,7,9};
    int size=5;
    swapMinMAx(arr,size);

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}