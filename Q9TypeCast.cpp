/*Create an Integer class that contains int x as an instance variable and overload
casting int() operator that will type cast your Integer class object to int data type.
*/
#include<iostream>
using namespace std;
class Integer
{
    int r;
    public:
        Integer(int x)
        {
            r=x;
        }
        operator int()
        {
            cout<<"Operator int() called\n";
            return r;
        }
};
int main()
{
    Integer i=12;
    int a = i;
    cout<<"Object of integer class is Typecast into int is = "<<a<<endl;
    return 0;

}