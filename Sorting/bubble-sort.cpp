#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[],int n){
    for (int i = n-1; i >= 1; i--)
    {
        int didSwap = 0;
        for (int j = 0; j <= i-1; j++)
        {
            if (arr[j]>arr[j+1])
            {
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
                didSwap+=1;
            }
            
        }
        if(didSwap == 0){
            break;
        }
        
    }
    
}

int main(){
    int arr[] = {3, 2, 1, 4, 3};

    bubbleSort(arr, 5);
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}