#include<bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        int j = i;
        while (j>0 && arr[j-1]>arr[j])
        {
            int temp = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = temp;
            j--;
        }
        
    }
    
}

int main(){
    int arr[] = {3, 2, 1, 4, 3};

    insertionSort(arr, 5);
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}