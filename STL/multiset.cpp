#include<bits/stdc++.h>
using namespace std;

void explainMultiSet(){
    multiset<int> ms;// Only !!!SORTED!!! and not unique

    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.insert(2);
    ms.insert(2);

    ms.count(1);// ->4
    ms.erase(ms.find(1));// erases 1st (1)
    ms.erase(ms.find(1),next(ms.find(1), 2));// erases 3 (1)
}

int main(){
    explainMultiSet();
    return 0;
}