#include<bits/stdc++.h>
using namespace std;

void explainVector(){
    vector<int> v;
    v.push_back(5);
    v.emplace_back(6);//costlier than push_back

    vector<int> v1(v);//copy another vector
    vector<int> v2(5,100);//5 instances of 100
    
    vector<int> v3(5);//can inscrease its size even after defining

    vector<int>::iterator it = v.begin();//it will give memory address
    it++;
    cout<<*(it)<<" ";// * -> value at

    //Iterators - vector
    // vector<int>::iterator it = v.begin();
    vector<int>::iterator it = v.end();// points to memory after last element
    vector<int>::reverse_iterator it = v.rend();
    vector<int>::reverse_iterator it = v.rbegin();// it++ will move in reverse

    v.back();//last element

    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout<<*(it)<<" ";
    }

    for (auto it = v.begin(); it != v.end(); it++)// automatically determines the data type
    {
        cout<<*(it)<<" ";
    }

    for(auto it : v){// for-each loop in C++ STL
        cout<<it<<" ";
    }
    
    //Deleting 

    v.erase(v.begin()+1);

    //Multiple- Deletion
    v2.erase(v.begin(),v.begin()+3);// starting and ending address !!!!ENDING IS EXCLUSIVE

    //Insertion

    v.insert(v.begin()+1,5);
    v.insert(v.begin()+1,5,10);//5 instances of 10 will be inserted at index 1

    //Inserting a entire vector
    v.insert(v.begin()+1,v2.begin(),v2.end());

    v.size();//how many elements

    v.pop_back();//last element removed
    
    v.clear();//erases the entire vector

    v.empty();//TRUE OR FALSE

    v.swap(v3); //swap data with another vector
}

int main(){
    explainVector();
    return 0;
}