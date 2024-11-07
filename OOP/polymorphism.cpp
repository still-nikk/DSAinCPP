#include <bits/stdc++.h>
using namespace std;

class A
{
public:
    void sayHello()
    {
        cout << "Hello from Class A" << endl;
    }

    void sayHello(string str)
    {
        cout << "Hello from Class A with a parameter: " << str << endl;
    }
};

class B
{
public:
    int a;
    int b;
    int add()
    {
        return this->a + this->b;
    }

    void operator+(B &obj)
    {
        int value1 = this->a;
        int value2 = obj.a;
        cout << "Output = " << value2 - value1 << endl;
    }
};

class Animal {
    public:
    void speak() {
        cout << "I speak because I might be human." << endl;
    }
};

class Dog: public Animal {
    public:
    void speak() {
        cout << "I Bark because I am a dog." << endl;
    }

};

int main()
{

    B obj1, obj2;
    obj1.a = 4;
    obj2.a = 7;
    obj1 + obj2;

    return 0;
}