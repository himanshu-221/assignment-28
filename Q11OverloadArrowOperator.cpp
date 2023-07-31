/*Create a class Marks that have one member variable marks and one member function 
that will print marks. We know that we can access member functions using (.) dot operator. Now 
you need to overload (->) arrow operator to access that function*/
#include<iostream>
using namespace std;
class Marks
{
    int marks;
    public:
        void set(int x)
        {
            marks=x;
        }
        void get()
        {
            cout<<"Marks is "<<marks<<endl;
        }
        Marks* operator->()
        {
            
        }
};
int main()
{
    Marks m;
    m->set(50);
    m->get();
    return 0;

}