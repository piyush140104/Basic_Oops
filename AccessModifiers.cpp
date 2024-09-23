#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int rno;
    string name;

    Student()
    {

    }

    Student(string name, int rno, float cgpa)
    {
        this->name = name;
        this->rno = rno;
        this->cgpa = cgpa;
        // cgpa will work as you can ceacss public internally 
    }

    void display()
    {
        cout<<this->name<<" "<<this->rno<<" "<<this->cgpa<<endl;
    }

    float getcgpa()//this is called getter
    {
        return cgpa;
    }

    void setcgpa(float m)//setter
    {
        cgpa=m;
    }
private:
    float cgpa;
};
int main()
{
    Student s1("zoro",76,7);
    Student s2;
    s2.name="Luffy";
    s2.rno=80;
    // s2.cgpa=5.5; if you intitalize cgpa in this way it will not work
    // cout<<s1.cgpa also not works
    // using constructor we can access private member
    // but se can make a functio in class and then use it to print cgpa
    s1.display();

    cout<<"cgpa is:"<<s1.getcgpa()<<endl;
    s1.setcgpa(9);
    cout<<"cgpa is:"<<s1.getcgpa();
}