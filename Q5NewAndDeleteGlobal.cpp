/*Create a student class and overload new and delete operators outside the class.*/
#include<iostream>
using namespace std;
class Student
{
    string name;
    int age;
    public:
        Student()
        {
        }


        Student(string name,int age): name(name),age(age)
        {
            cout<<"Perameterized constructor called"<<endl;
        }


        void display()
        {
            cout<<"Name of student is = "<<name<<"\nage "<<age<<endl;
        }
};
void* operator new(size_t size)
        {
            cout<<"New memory block created of size : "<<size<<endl;
            void *p = malloc(size);
            return p;
        }
        void operator delete(void *p)
        {
            cout<<"Delete operator called"<<endl;
            free(p);
        }
       
int main()
{
    Student *s = new Student("Himanshu",23);
    s->display();
    int *p = new int;
    return 0;
}