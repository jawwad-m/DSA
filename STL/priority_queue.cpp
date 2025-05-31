#include<bits/stdc++.h>
using namespace std;

void explainPQueue(){

    // !!!MIN-HEAP
    priority_queue<int> pq;//stores maximum at the top in an arranged order
    pq.push(5);
    pq.push(3);
    pq.push(8);

    pq.top();//->8

    // !!!MAX-HEAP
    priority_queue<int, vector<int>, greater<int>> pqinc;
    pqinc.push(2);
    pqinc.push(10);
    pqinc.push(5);
    pqinc.push(6);
    pqinc.push(7);

    pqinc.top();//->2


}

int main(){
    explainPQueue();
    return 0;
}