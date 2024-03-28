#include <iostream>
using namespace std;

class Person
{
private:
    string name;
    string gender;
    float age;

public:
    Person(string n, string g, float a) : name(n), gender(g), age(a)
    {
    }

    void setName(string n)
    {
        name = n;
    }

    string getName()
    {
        return name;
    }

    void setGender(string g)
    {
        gender = g;
    }

    string getGender()
    {
        return gender;
    }

    void setAge(float a)
    {
        age = a;
    }

    float getAge()
    {
        return age;
    }
};

class Student : protected Person
{
private:
    int student_level;
    float GPA;

public:
    Student(string n, string g, float a, int sl, float gpa) : Person(n, g, a), student_level(sl), GPA(gpa)
    {
    }

    void set_GPA(float gpa)
    {
        GPA = gpa;
    }

    float get_GPA()
    {
        return GPA;
    }

    void set_student_level(int sl)
    {
        student_level = sl;
    }

    int get_student_level()
    {
        return student_level;
    }
};

class Employee : public Person
{
private:
    int salary;
    string rank;
    string job;

public:
    Employee(string n, string g, float a, int sal, string r, string j) : Person(n, g, a) , salary(sal), rank(r), job(j)
    {}

    void setsalary(int sal)
    {
        salary = sal;
    }

    int getsalary()
    {
        return salary;
    }

    void setrank(string r)
    {
        rank = r;
    }

    string getrank()
    {
        return rank;
    }

    void setjob(string j)
    {
        job = j;
    }

    string getjob()
    {
        return job;
    }
};
int main()
{
    Person P("Kareem", "Male", 24);
    Student S("Ahmed", "Male", 26, 4, 3.7);
    Employee E("Omar", "Male", 20, 1000, "Manager", "teacher");



    cout << "Person Name: " << P.getName() << endl;
    cout << "Student GPA: " << S.get_GPA() << endl;
    cout << "Employee Salary: " << E.getsalary() << endl;
}