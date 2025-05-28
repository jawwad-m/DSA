#include<bits/stdc++.h>
using namespace std;

void explainPair(){
    pair<int,int> p = {1,3};
    cout<<p.first<<" "<<p.second<<endl;

    pair<int, pair<int,int>> p2 = {1,{2,3}};
    cout<<p2.first<<" "<<p2.second.first<<" "<<p2.second.second<<endl;

    pair<int, int> arr[] = {{1,2},{2,3},{3,4}};
    for (int i = 0; i < 3; i++)
    {
        cout<<arr[i].first<<" "<<arr[i].second<<endl;
    }
    
}

int main(){
    // pair lies inside the UTILITY library
    explainPair();
    return 0;
}