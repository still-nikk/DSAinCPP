// stores the largest element on top
// basically a sorted queue
// The data is not stored in a linear fashion instead is stored in the form of a tree
//push and pop have a time complexity of O(logn)
//top has a time complexity of O(1)

#include <bits/stdc++.h>
using namespace std;

int main()
{

    // Maximum heap
    priority_queue<int> pq;

    pq.push(1);
    pq.emplace(3);
    pq.push(2);

    cout << "The top element is: " << pq.top() << endl;

    pq.pop();
    cout << "The top element is: " << pq.top() << endl;

    // Minimum heap
    priority_queue<int, vector<int>, greater<int>> pq1;
    pq1.push(1);
    pq1.push(2);
    pq1.emplace(3);

    cout << "The top element is: " << pq1.top() << endl;

    pq1.pop();
    cout << "The top element is: " << pq1.top() << endl;

    return 0;
}