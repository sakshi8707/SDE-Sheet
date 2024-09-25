#include<iostream>
#include<bits/stdc++.h>
using namespace std;

/* testcase : 
2
sakshi
20
1
nishtha
18
0
*/
class student{
  string name;     //bydefault its private
  public:           //access specifier
    int age;
    bool gender;
    //constructor function
    student(){
      cout << 'Default consturctor' << endl;
    }

    //parametrised constructor
    student(string s,int a , bool g)
    {
      cout << "parametrised constructor" << endl;
      name = s;
      age = a;
      gender = g;
    }
    
    //copy constructor
    student(student &a)
    {
      cout << "copy constructor" << endl;
      name = a.name;
      age = a.age;
      gender = a.gender;
    }

    void setName(string s)
    {
      name = s;
    }

    void getName(){
      cout << name << endl;
    }


    void pringInfo(){
      cout << "Name : " << name << endl;
      cout << "age : " << age << endl;
      cout << "gender : " << gender << endl;
    }

};

int main()
{
    // int n;          //enter the no of object
    // cin >> n;
    // student obj[n];
    // for (int i = 0; i < n;i++)
    // {
    //   string s;                //accessing private data memeber
    //   cin >> s;
    //   obj[i].setName(s);
    //   // cin >> obj[i].name;
    //   cin >> obj[i].age;
    //   cin >> obj[i].gender;
    // }

    // for (int i = 0; i < n;i++)
    // {
    //   obj[i].pringInfo();
    // }

    cout << "**calling constuctor**" << endl;

    student a("sakshi",20,0);
    a.getName();
    a.pringInfo();
    student b;
    student c = a;

    return 0;
}