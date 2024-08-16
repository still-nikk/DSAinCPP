//Stores everything in the sorted order
//Stores only the unique values

#include <bits/stdc++.h>
using namespace std;

int main() 
{

    set<int> st;
    st.insert(0);
    st.insert(1);
    st.emplace(2);
    st.insert(3);
    st.insert(4);
    st.insert(2);

    auto it = st.find(4);
    
    auto it2 = st.find(6);

    st.erase(it);

    int count = st.count(1); // Can only have 1 or 0 as the answer

    auto it3 = st.find(1);
    auto it4 = st.find(3);
    st.erase(it3,it4); // erases [it3, it4) *Note the braces it4 is not included
    

    return 0; 
}