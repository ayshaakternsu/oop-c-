#include <iostream>
#include <string>
using namespace std;

// Base class
class Uni
{
public:
    string uniName = "North South";

    void check()
    {
        cout << "Yes,It's a method! 1st Base Class\n";
    }
    Uni()
    {
        cout << "\nHello from Constructor\n";
    }

    ~Uni()
    {
        cout << "\nDestructor executed\n";
    }

    string name(string n)
    {
        return n;
    }
};

// Another base class
class MyOtherClass_Session
{
public:
    string session = "2020-2021";
    void myOtherFunction()
    {
        cout << "2nd Base Class.\n";
        cout << "Our Session is 2020-2021.\n";
    }
};

// Derived class
class Student : public Uni, public MyOtherClass_Session
{
public:
    string myName = name("Aysha");
};

class Teacher : public Uni
{
private:
    string salary;

public:
    string nameT = name("Razia Pal");

    int age(int age)
    {
        return age;
    }
    string age(string age)
    {
        return age;
    }

public:
    void setSalary(string s)
    {
        salary = s;
    }
    string getSalary()
    {
        return salary;
    }
};

// Base class
class TotalFee
{
public:
    // pure virtual function providing interface framework. virtual int getClassFee() = 0;
    void setStudent(int s)
    {
        student = s;
    }
    void setFee(int f)
    {
        fee = f;
    }

protected:
    int student;
    int fee;
};

// Derived classes
class Session1 : public TotalFee
{
public:
    int getClassFee()
    {
        return (student * fee);
    }
};
class Session2 : public TotalFee
{
public:
    int getClassFee()
    {
        return (student * fee);
    }
};

int main()
{
    Student myStudent;
    myStudent.check();

    myStudent.myOtherFunction();
    cout << "\n My information:\n" + myStudent.uniName + " " + myStudent.myName + " " + myStudent.session;

    Teacher myTeacher;
    string tSalary;
    myTeacher.setSalary("12000");
    cout << "\n method overloading by integer:" << myTeacher.age(40) << "\n";
    cout << "\n method overloading by string:" << myTeacher.age("40") << "\n";
    cout << "\nTeacher Salary by getter-setter " << myTeacher.getSalary();
    cout << "\n method overriding:  " + myStudent.myName;
    cout << "\n method overriding:  " + myTeacher.nameT;

    // Abstract Class Example
    Session1 one;
    Session2 two;
    one.setStudent(5);
    one.setFee(7);
    cout << "\nTotal Session1 fee: " << one.getClassFee() << endl;
    two.setStudent(5);
    two.setFee(10);
    cout << "\nTotal Session2 fee: " << two.getClassFee() << endl;

    return 0;
}