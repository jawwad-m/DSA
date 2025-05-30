#include<bits/stdc++.h>
using namespace std;

void explainList(){
    list<int> ls;
    ls.push_back(5);
    ls.push_front(7);//fastest front insertion

    ls.emplace_back(10);
    ls.emplace_front(12);// faster than insert

    //Rest functions are all the same
    //begin, end, rbegin, rend, clear, swap, insert, size, erase
}

int main(){
    explainList();
    return 0;
}