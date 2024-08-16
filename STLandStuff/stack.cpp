// LIFO [ Last in First Out ]

#include <bits/stdc++.h>
using namespace std;

int main()
{

    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.emplace(5);

    cout << "The size of the stack now is: " << st.size() << endl;
    cout << "The top element is: " << st.top() << endl;
    st.pop();
    cout << "The size of the stack now is: " << st.size() << endl;
    cout << "The top element is: " << st.top() << endl;

    cout << "Is the stack empty? " << st.empty() << endl;

    return 0;
}