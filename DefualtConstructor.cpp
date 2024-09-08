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

    // This initialisation is wrong without default constructor
    Student s2;
    s2.name="luffy";
    s2.roll=70;
    s2.cgpa=8.8;

    printing_student(s1);
    printing_student(s2);

    // we can also overwrite
    Student s3("sanji",80,6.7);
    printing_student(s3);
    s3.cgpa=9;
    s3.roll=34;
    printing_student(s3);
}