// Similar to Stack
// But it is FIFO ( First in First out )

#include <bits/stdc++.h>
using namespace std;

int main()
{

    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.emplace(4);

    cout << "The front element is: " << q.front() << endl;
    cout << "The back element is: " << q.back() << endl;

    q.back() += 5;
    cout << "The back element is: " << q.back() << endl;

    q.pop();
    cout << "The front element is: " << q.front() << endl;

    return 0;
}