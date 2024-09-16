#include<bits/stdc++.h>
using namespace std;
class Student{
public:
    string name;
    int roll;
    float cgpa;
    // Default Constructor
    Student()
    {

    }
    // Parameterised Constructor
    // you can also give two/one parameter according to your choice and then 
    // define remaining in main function
    Student(string s,int r,float c)
    {
        name=s;
        roll=r;
        cgpa=c;
    }
};
void printing_student(Student t)
{
    cout<<t.name<<" "<<t.roll<<" "<<t.cgpa<<endl;
}
int main()
{
    Student s1("Zoro",76,7.7);
    printing_student(s1);
    Student s2=s1;//Deep Copy of S1 occurs
    printing_student(s2);
    s2.name="Luffy";
    s2.cgpa=9;
    printing_student(s2);

    Student s3(s2);//Deep copy of s2 occurs
    printing_student(s3);
    s3.name="Sanji";
    printing_student(s3);
}