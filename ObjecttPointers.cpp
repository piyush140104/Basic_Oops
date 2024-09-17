#include <bits/stdc++.h>
using namespace std;
class Cricketer
{
public:
    string name;
    int runs;
    float avg;
    Cricketer(string name, int runs, float avg) 
    {
        this->name = name;
        this->runs = runs;
        this->avg = avg;
    }
};
void print_cricketers(Cricketer t)
{
    cout << t.name << " " << t.runs << endl;
}
// we pass the address of cricketer now in function(pass by reference)
// address received in pointer so we write *c
void change(Cricketer* c)
{
    (*c).avg=70;// or c->avg=70
}
int main()
{
    Cricketer c1("virat kohli", 25000, 55.5);
    Cricketer *pointer_1 = &c1; // storing address of c1
    cout << c1.runs << endl;
    // now we print using pointer
    // cout<<p1.runs is wrong as pointer_1 is pointer
    cout << (*pointer_1).runs << endl; // this is correct we got to that address that pointer_1 is storing and then we print the value
    cout << pointer_1->runs << endl;   // same meaning as of previous
    (*pointer_1).avg = 80;
    // it changed the average of player 1
    cout<<(*pointer_1).avg<<endl;
    cout<<c1.avg<<endl;
    cout<<pointer_1->avg<<endl;

    change(&c1);
    cout<<c1.avg<<endl;
}