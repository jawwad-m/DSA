#include<bits/stdc++.h>
using namespace std;

void selectionSort(int arr[],int n){
    for (int i = 0; i <= n-2; i++)
    {
        int mini = i;
        for (int j = i; j <= n-1; j++)
        {
            if(arr[j]<arr[mini]){
                mini = j;
            }
        }
        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp;
        
    }
    
}

int main(){
    int arr[] = {3, 2, 1, 4, 3};

    selectionSort(arr, 5);
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}