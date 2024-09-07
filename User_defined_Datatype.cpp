#include <bits/stdc++.h>
using namespace std;
// creating New datatype name Student
// we start class name with capital letter it is a convention
class Student{
public:
    // class properties
    int roll;
    string name;
    float cgpa;
};
int main()
{
    Student x;
    // now how to set student  name x characters
    x.name="Zoro";
    x.roll=76;
    x.cgpa=8;

    Student y;
    y.name="Luffy";
    y.roll=88;
    y.cgpa=7.7;

//  cout<<x<<endl u can't print directly
    cout<<x.name<<endl;
    cout<<y.name<<endl;
    cout<<x.cgpa<<endl;
    cout<<y.cgpa<<endl;

    Student c;
    cin>>c.name;
    cout<<"Name of third student is:"<<c.name<<endl;
}