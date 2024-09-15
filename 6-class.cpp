#include<iostream>
using namespace std;
class Student{
    private:
    char name[40];
    int age;

    public:
    void getdata();
    void display(){
        cout <<"name:"<<name<<endl;
        cout <<"age:"<<age;
    }
};
void Student::getdata()
{
    cout <<"enter the name and age of the student:";
    cin >>name;
    cin >>age;
}
int main()
{
    Student obj1;
    obj1.getdata();
    obj1.display();
    return 0;
}