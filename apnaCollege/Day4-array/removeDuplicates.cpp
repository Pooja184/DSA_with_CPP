#include <iostream>
using namespace std;

int removeDuplicates(int arr[], int size) {
    bool seen[1000] = {false};  
    int j = 0;                  

    for (int i = 0; i < size; i++) {
        if (!seen[arr[i]]) {
            seen[arr[i]] = true;  
            arr[j] = arr[i];      
            j++;
        }
    }

    return j; 
}

int main() {
    int arr[] = {2, 1, 2, 4, 1};
    int size = 5;

    size = removeDuplicates(arr, size);

    cout << "Array after removing duplicates: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
