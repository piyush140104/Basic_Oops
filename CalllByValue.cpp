// Call by Value
#include<bits/stdc++.h> 
using namespace std;
class Car{
public:
    string name;
    int seats;
    int price;
};
void change_name(Car f)
{
    f.name="Audi A8";
}
void print(Car t)
{
    cout<<t.name<<" "<<t.seats<<" "<<t.price<<endl;
}
int main()
{
    Car e;
    e.name="creta";
    e.price=1600000;
    e.seats=5;
    cout<<"Before Changing:"<<" ";
    print(e);
    change_name(e);
    cout<<"After Changing:"<<" ";
    print(e);

}
