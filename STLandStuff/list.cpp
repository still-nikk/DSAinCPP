//in vector ( a singly linked list ) we used insert function but insertion is very expensive i.e. it takes more time but in list ( list is a doubly linked list ) pushing the element takes much less time

// The only differenece in the list is that in list you can have push element to the front of the list and rest all the functions are same as in the vector

#include <bits/stdc++.h>
using namespace std;

int main() 
{

    list <int> l;
    l.push_front(2);
    l.emplace_front(1);

    for ( auto l : l ) {
        cout << l << " ";
    }
    cout << endl;

    return 0; 
}