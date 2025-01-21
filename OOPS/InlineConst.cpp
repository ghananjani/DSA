#include <iostream>
#include <string>
using namespace std;
class Student
{
private:
    int roll_no;
    string name;

protected:
    string course;
    int m1, m2, m3;

public:
    Student() {}       // Default constructor: non-parametrised;


    Student(string r){    // parametrised constructor: e.g string is passed
        course=r;
    }


    Student(int roll_no,string name,string course,int m1,int m2,int m3){
        this->roll_no = roll_no;   
        this->name = name;         
        Student::course = course; // this is also valid
        this->m3=m3;
        this->m1=m1;
        this->m2=m2;    

    }
    inline Student(int r) : roll_no(r) {}  // parametrised constructor: e.g int is passed
    inline Student(int r,string n) : roll_no(r),name(n) {}  // parametrised constructor: e.g int is passed

    string getName()
    {
        return name;
    }

    void setName(string k)
    {
        name = k;
        
    }

    int total(int m1, int m2, int m3)
    {
        return m1 + m2 + m3;
    }




    int average(int m1, int m2, int m3)
    {
        return (m1 + m2 + m3) / 3;
    }
    int average()
    {
        return (m1 + m2 + m3) / 3;
    }
    string grade(int a)
    {
        if (a >= 90)
            return "A";
        else if (a >= 80)
            return "B";
        else if (a >= 70)
            return "C";
        else
            return "D";
    }


    string getCourse()
    {
        return course;
    }

    int getRollno()
    {
        return roll_no;
    }
};

int main()
{
    Student obj1;
    Student obj2("Math");
    Student obj3(5);
    Student obj4(12114973,"Sachin","Java",98,76,89);
    Student obj5(12114973,"Angad");



    obj1.setName("Sachin");
    cout << obj1.getName() << endl;
    cout << obj1.total(55, 50, 60) << endl;
    cout << obj1.average(40, 50, 60) << endl;
    cout << obj1.grade(obj1.average(40, 50, 60)) << endl;

    cout << obj2.getCourse() << endl;
    cout << obj3.getRollno() << endl;

    cout<<obj4.getName()<<endl;
    cout<<obj4.getCourse()<<endl;
    cout<<obj4.average()<<endl;
    cout<<obj4.grade(obj4.average())<<endl;

    cout<<obj5.getRollno()<<endl;
    cout<<obj5.getName()<<endl;




    return 0;
}
