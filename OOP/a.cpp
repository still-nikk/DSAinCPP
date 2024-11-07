#include <bits/stdc++.h>
using namespace std;

class Hero
{

private:
    string name;
    int health;
    char level;

public:
    static int staticMember;

    // Default Constructor
    Hero()
    {
        cout << "Dafault Constructor was called" << endl;
    }

    // Parameterized Constructor
    // Hero(string n, int h, char l)
    // {
    //     cout << "Parameterized Constructor was called" << endl;
    //     health = h;
    //     name = n;
    //     level = l;
    // }
    Hero(string name, int health, char level)
    {
        cout << "Parameterized Constructor was called" << endl;
        this->health = health;
        this->name = name;
        this->level = level;
    }

    // Copy constructor
    Hero(Hero &h)
    {
        cout << "Copy Constructor was called" << endl;

        this->health = h.health;
        this->name = h.name;
        this->level = h.level;
    }

    void print()
    {
        cout << this->getName() << " " << this->getHealth() << " " << this->getLevel() << endl;
    }

    int getHealth()
    {
        return health;
    }

    string getName()
    {
        return name;
    }

    char getLevel()
    {
        return level;
    }

    void setName(string n)
    {
        name = n;
    }

    void setHealth(int h)
    {
        health = h;
    }

    void setLevel(char l)
    {
        level = l;
    }

    static void randomFunctionName()
    {
        cout << "Calling static member from inside static function: " << staticMember << endl;
    }
};

int Hero::staticMember = 5;



int main()
{

    Hero h1;
    h1.setHealth(70);
    h1.setLevel('A');
    h1.setName("Ramesh");
    cout << h1.getName() << " " << h1.getHealth() << " " << h1.getLevel() << endl;

    Hero *h2 = new Hero;
    h2->setHealth(80);
    h2->setName("Kamlesh");
    h2->setLevel('B');
    cout << (*h2).getName() << " " << h2->getHealth() << " " << h2->getLevel() << endl;

    Hero h3("Nikunj", 100, 'C');
    cout << h3.getName() << " " << h3.getHealth() << " " << h3.getLevel() << endl;

    Hero h4(h3);
    h4.print();

    cout << "Static Member of Hero class is: " << Hero::staticMember << endl;
    Hero::randomFunctionName();

    return 0;
}