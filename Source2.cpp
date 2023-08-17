#include <iostream>
using namespace std;

class Composed
{
public:
    Composed()
    {
        cout << "Composed Default Constructor Called!!" << endl;
    }
    ~Composed()
    {
        cout << "Composed destructor Called!!" << endl;
    }
};
class Base
{
private:
    int x, y;
    // Composed c;

public:
    Base()
    {
        cout << "Base Default Constructor Called!!" << endl;
        x = y = 0;
    }
    Base(int a, int b)
    {
        cout << "Base Overloaded Constructor Called!!" << endl;
        x = a;
        y = b;
    }
    Base(const Base &orig) : x(orig.x), y(orig.y)
    {
        cout << "Base Copy Constructor Called!!" << endl;
    }
    ~Base()
    {
        cout << "Base Destrutor Called!!" << endl;
    }
    void set(int a, int b)
    {
        x = a;
        y = b;
    }
    void display()
    {
        cout << "x and y are: " << x << " " << y << endl;
    }
    const Base &operator=(const Base &rhs) // Assignment Operator
    {
        cout << "Base - Assignment Operator is Called!!" << endl;
        if (this == &rhs)
        {
            return *this;
        }
        else
        {
            // Also Deallocate Previously Allocated Memory (if any).
            x = rhs.x;
            y = rhs.y;
            return *this;
        }
    }
};
class Derived : public Base
{
private:
    double z;
    // Composed c;

public:
    Derived()
    {
        cout << "Derived Default Constructor Called!!" << endl;
        z = 0;
    }
    Derived(int a, int b, double c) : Base(a, b), z(c)
    {
        cout << "Derived Overloded Constructor Called!!" << endl;
    }
    Derived(const Derived &orig) : Base(orig), z(orig.z) // Calling the Base Copy Conctructor by writing Base(orig)
    {
        cout << "Derived Copy Constructor Called!!" << endl;
    }

    ~Derived()
    {
        cout << "Derived Destructor Called!!" << endl;
    }
    void display()
    {
        Base::display();
        cout << "z is: " << z << endl;
    }
    const Derived &operator=(const Derived &rhs)
    {
        cout << "Derived - Assignment Operator Called!!" << endl;
        if (this == &rhs)
        {
            return *this;
        }
        else
        {
            // Also Deallocate Previously Allocated Memory (if any).
            Base::operator=(rhs); // Assigment Operator of Base Class.
            z = rhs.z;
            return *this;
        }
    }
};
int main()
{

    // Base b1(12, 13);
    // Derived d1(15, 16, 7.5);
    // b1.display();
    // d1.display();

    // Base b1;
    Derived d1(15, 16, 7.5);
    cout << "----------------------------------------------\n";

    Derived d2;
    cout << "-----------------------------------------------\n";

    d2 = d1; // Assignment Operator

    cout << "-----------------------------------------------\n";

    d1.display();
    d2.display();

    // Dynamically Objects Allocation.

    Base *bp = new Base(4, 6);
    Derived *dp = new Derived(10, 13, 45.6);

    // Also More Surprisingly we can create Derived Object with Base Class Pointer.

    Base *bp1 = new Derived(10, 15, 67.5);
    // But
    // Derived dp1 = new Base(10, 12); // ERROR!,  This won't work

    // A Base class Pointer/reference can point to any object of any of the derived class i.e.
    Base *dp2 = dp; // This will work with no Issues.

    return 0;
}