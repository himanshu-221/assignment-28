/*Create a complex class and overload assignment operator for that class.*/
#include<iostream>
using namespace std;
class Complex
{
    int a,b;
    public:
        Complex()
        {

        }
        Complex(int x,int y)
        {
            a=x;b=y;
        }
        void display()
        {
            cout<<"Complex number is = "<<a<<" + "<<b<<"i"<<endl;
        }
        Complex operator=(const Complex c)
        {
            //cout<<"Assignmrnt operator called"<<endl;
            this->a=c.a;
            this->b=c.b;
            return *this;
        }
};
int main()
{
    Complex c1(2,3),c2,c3;
    c3=c2=c1;               //For this two time assignment operator is called;
    c3.display();
    c2.display();
    c1.display();
    return 0;
}