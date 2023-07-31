/*Define a class Complex with appropriate instance variables and member functions. One 
of the functions should be setData() to set the properties of the object. Make sure the 
names of formal arguments are the same as names of instance variables.
*/
#include<iostream>
using namespace std;

class Complex
{
    int a,b;
    public:
        void const setdata(int a,int b)
        {
            this->a=a;this->b=b;
        }
        void display()
        {
            cout<<"Complex number is = "<<a<<" + "<<b<<"i";
        }
};
int main()
{
    Complex a;
    a.setdata(3,7);
    a.display();
    return 0;
}