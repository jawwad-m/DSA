#include<bits/stdc++.h>
using namespace std;

void findChar(char value, char ch[]){
    int arr[26] = {0};
    for (int i = 0; i < 10; i++)
    {
        arr[ch[i] - 'a'] += 1;
    }

    cout<<"->"<<arr[value - 'a'];
    
}

int main(){
    char ch[10] = {'a','a','b','a','c','d','e','e','r','b'};
    // for (int i = 0; i < 10; i++)
    // {
    //     cin>>ch[i];
    // }

    char value = 'a';
    findChar(value, ch);
    
    return 0;
}