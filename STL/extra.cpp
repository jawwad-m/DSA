#include <bits/stdc++.h>
using namespace std;

bool comp(const pair<int,int> &a, const pair<int,int> &b) {
    return a.first < b.first;  // or any custom condition
}

void explainExtra()
{
    pair<int,int> p[3] = {{5,4}, {1,2}, {5,6}};  // an array of 3 pairs
    
    sort(p, p + 3, comp);  // now this works, sorting the array
    
    for (int i = 0; i < 3; i++)
        cout << p[i].first << "," << p[i].second << " ";


    int cnt = __builtin_popcount(5);
    long long x = 7638916954262546;
    long long cnt2 = __builtin_popcountll(x);
    cout<<"hu"<<cnt2;

    string s="123";
    sort(s.begin(),s.end());

    do
    {
        cout<<s<<endl;
    } while (next_permutation(s.begin(),s.end()));

    pair<int,int> maxi = *max_element(p,p+3);
    cout<<maxi.first<<" "<<maxi.second;
    
}

int main()
{
    explainExtra();
    return 0;
}