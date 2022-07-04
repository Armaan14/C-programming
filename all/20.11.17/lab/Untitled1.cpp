#include <iostream>
#include<cstring>
using namespace std;
class student
{  public:
    string name;
    int id;
    float cgpa;
    student()
    {
      this->name="null";
      this->id=0;
      cout<<name<<endl;
      cout<<id<<endl;
    }
    student(int i)
    {
        student();
        this->id=i;
        cout<<id<<endl;
    }
  /*  void setvalue(string n, int i, float c)
    {
        this->name,n;
        this->id=i;
        this->cgpa=c;
    }
    void display()
    {
        cout<<name<<endl;
        cout<<id<<endl;
        cout<<cgpa<<endl;
    }*/
};
class teacher: public student
{public:
    int salary;
    teacher()
    {
        this->name="null";
        this-> id=0;
    }
    teacher(int s)
    {
        this->salary=s;
    }
};
int main()
{ //teacher  t1;
 //  t1.f();
   student* s1=new student();
//s1->setvalue("rahim",1,3.4);
 // s1->display();
  teacher  t1(), t2(200000);
  //t1.display();
  //t2.display();
    return 0;
}
