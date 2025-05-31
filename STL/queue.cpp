#include<bits/stdc++.h>
using namespace std;

void explainQueue(){
    queue<int> q;//FIFO
    q.back();//gives the last inserted element and !!!NOT THE FIRST
    q.pop();//removes !!1ST ELEMENT INSERTED
    q.front();//1st element as of present
    
    //Rest functions are the same

}

int main(){
    explainQueue();
    return 0;
}