#include<iostream>
using namespace std;
class student
{
    string name;
    int mark;
    static int count;
public:
    void getdetails();
    void printdetails();
    student topper(student);
    int printcount();
 };
 int student::count;
void student::getdetails()
{
   cout<<"Enter name:\n";
   cin>>name;
   cout<<"Enter mark:\n";
   cin>>mark;
   count++;
}

void student::printdetails()
{
    cout<<name<<"\t"<<mark<<"\n";
}

int student::printcount()
    {
        return count;
    }
student student::topper(student a)
 {
     if(a.mark>mark)
        return a;
     else
        return *this;
 }

int main()
{
    student stu[10],first;
    int n,q;

    cout<<"Enter number of students:";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter details of student"<<i+1<<":\n";
        stu[i].getdetails();
    }
    //"Student Details who secured first mark"
    first=stu[0];
    for(int i=0;i<n;i++)
    {
        first=first.topper(stu[i]);
    }

    q=first.printcount();
    cout<<"Topper among a total of "<<q<<" students\n";
    first.printdetails();
    return(0);
}

