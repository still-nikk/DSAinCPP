// same as a set but can store multiple occurences of an element

#include <bits/stdc++.h>
using namespace std;

int main()
{

    multiset<int> ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.insert(2);
    ms.insert(2);
    ms.insert(3);

    ms.erase(2); // This removes all the occurences of 2

    int count = ms.count(1);
    cout << "The count of 1 is: " << count << endl;

    ms.erase(ms.find(1)); // If I want to delete only one occurence of 1
    // What if I want to delete 2 occurences of 1;
    ms.insert(1);
    ms.insert(1);
    // ms.erase(ms.find(1), ms.find(1)+2);
    ms.erase(ms.find(1),next(ms.find(1),2));

    return 0;
}