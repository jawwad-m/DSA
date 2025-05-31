#include<bits/stdc++.h>
using namespace std;

void explainSet(){

    // SORTED AND UNIQUE ---> KING
    set<int> st;
    st.insert(1);
    st.insert(2);
    st.insert(2);
    st.insert(3);
    st.insert(4);
    st.insert(7);

    // auto it1 = st.find(3);// returns iterator pointing to three's address!!!
    // auto it2 = st.find(6);// returns iterator pointing to {after} last address->i.e. null!!!

    // st.count(1);//0 or 1 returned

    // st.erase(4);
    // st.erase(it1,it2);// multiple erased

    auto it3 = st.upper_bound(2);//upper_bound(x)->Finds the first number that is strictly greater than x
    auto it4 = st.lower_bound(3);//lower_bound(x)->Finds the first number that is greater than or equal to x

    cout<<*it3<<" "<<*it4;

}

int main(){
    explainSet();
    return 0;
}