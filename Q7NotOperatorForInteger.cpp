/*Create an Integer class and overload not operator for that class.
*/
#include<iostream>
using namespace std;
class Integer
{
    int num;
    public:
    Integer(int a)
{
    num=a;
}
        int operator!(void)
        {
            cout<<"Not operator called"<<endl;
            return -num;
        }
        void display()
        {
            cout<<num<<endl;
        }
};
int main()
{
    Integer a(-10);
    !a;
    a.display();
    return 0;
    
}