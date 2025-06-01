#include <bits/stdc++.h>
using namespace std;

void explainMap()
{
    // KEY AND VALUE PAIR
    map<int, int> mpp;// !!!UNIQUE KEYS IN SORTED ORDER
    mpp.insert(1,2);
    mpp.insert({5,6});
    mpp.emplace(1,3);
    mpp.emplace(make_pair(1, 4));

    mpp[3] = 5;

    
    
}

int main()
{
    explainMap();
    return 0;
}