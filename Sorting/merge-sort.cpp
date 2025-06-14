#include <bits/stdc++.h>
using namespace std;

vector<int> merge(int arr[], int low, int mid, int high)
{
    vector<int> temp;
    int left = low;
    int right = mid + 1;
    while (left <= mid && right <= high)
    {
        if (arr[left] <= arr[right])
        {   
            temp.push_back(arr[left++]);
        }
        else temp.push_back(arr[right++]);
    }
    while (left<=mid){
        temp.push_back(arr[left++]);
    }
    while(right<=high)
    {
        temp.push_back(arr[right++]);
    }
    for (int i = low; i <= high; i++)
    {
        arr[i] = temp[i-low];
    }
    
}

void mergeSort(int arr[], int low, int high)
{
    if (low >= high)
        return;
    int mid = (high + low) / 2;
    mergeSort(arr, low, mid);
    mergeSort(arr, mid + 1, high);
    merge(arr, low, mid, high);
}

int main()
{
    int arr[] = {3, 2, 1, 4, 3};

    mergeSort(arr, 0, 4);
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}