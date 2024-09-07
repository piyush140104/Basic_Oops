#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    string name;
    int rolln;
    float cgpa;

    // Constructor
    Student(string s,int r,float c)
    {
        name=s;
        rolln=r;
        cgpa=c;
    }
};
void printing_student(Student t)
{
    cout<<t.name<<" "<<t.rolln<<" "<<t.cgpa<<endl;
}
int main()
{
    Student s1("zoro",76,8.2);
    printing_student(s1);

    Student s2("luffy",79,8);
    printing_student(s2);
}