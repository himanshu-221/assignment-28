/*Define a class Complex with appropriate instance variables and member functions. 
Overload following operators
a. << insertion operator
b. >> extraction operator*/
#include<iostream>
using namespace std;
class Complex
{
    private:
    int a,b;
    public:
        friend istream& operator>>(istream &in,Complex &x)
        {
            cout<<"Enter value for 'a' : ";
            cin>>x.a;
            cout<<"\nEnter value for 'b' : ";
            cin>>x.b;
        }
        friend ostream& operator<<(ostream &out,Complex &a)
        {
            cout<<"\ncomplex number is : "<<a.a<<" + "<<a.b<<'i';
            return out;
        }
};
int main()
{
    Complex c1;
    cout<<"Enter values for complex number\n";
    cin>>c1;
    cout<<c1;
    return 0;
}