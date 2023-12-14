#include<bits/stdc++.h>
using namespace std;

class Student 
{
    public:
    char name[30];
    int roll;
    int age;
    char sec;

    Student(char a[],int roll,int age,char sec)
    {
        strcpy(this->name,a);
        this->age = age;
        this->roll = roll;
        this->sec = sec;
    }

};


int main()
{
    Student *rahim = new Student("Rahim",35,21,'C');
    cout<<rahim->name<<" "<<rahim->age<<" "<<rahim->roll<<" "<<rahim->sec;
    delete rahim;
    // cout<<rahim->name<<" "<<rahim->age<<" "<<rahim->roll<<" "<<rahim->sec;

    return 0;
}