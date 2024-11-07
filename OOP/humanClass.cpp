#include <bits/stdc++.h>
using namespace std;

class Human
{
public:
    int height;
    int weight;
    int age;

    int getAge()
    {
        return this->age;
    }
    void setAge(int age)
    {
        this->age = age;
    }
    int getWeight()
    {
        return this->weight;
    }
    void setWeight(int weight)
    {
        this->weight = weight;
    }
    int getHeight()
    {
        return this->height;
    }
    void setHeight(int height)
    {
        this->height = height;
    }
};

class Male: public Human {
    public:
    string color;

    void sleep() {
        cout << "Male is sleeping" << endl;
    }
};

int main()
{

    Male m1;

    return 0;
}