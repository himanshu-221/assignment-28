/*Create a student class and overload new and delete operators as a member function of 
the class*/
#include<iostream>
#include<cstring>
using namespace std;
class Student
{
    string name;
    int age;
    public:
        Student()
        {
        }
        Student(string n,int x)
        {
           name =n;
           age= x;
        }
        void* operator new(size_t size)
        {
            void *p = malloc(size);
            return p;
        }
        void operator delete(void *p)
        {
            free(p);
        }
        void display()
        {
            cout<<"Name of student is = "<<name<<"\nage "<<age<<endl;
        }
};
int main()
{
    Student *s = new Student("Himanshu",24);
    s->display();

    return 0;
}