/*Create a Coordinate class for 3 variables x,y and z and overload comma operator such 
that when you write c3 = (c1 , c2 ) then c2 is assigned to c3. Where c1,c2,and c3 are 
objects of 3D coordinate class.
*/
#include<iostream>
using namespace std;
class Coordinate
{
    int x,y,z;
    public:
        void setter(int a,int b,int c=0)
        {
            x=a;y=b;z=c;
        }
        Coordinate& operator=(const Coordinate &c)
        {
            //cout<<"Assignmrnt operator called"<<endl;
            this->x=c.x;
            this->y=c.y;
            this->z=c.z;
            return *this;
        }
        Coordinate operator,( Coordinate c)
        {
            Coordinate temp;
            cout<<"Comma operator called"<<endl;
            temp.x=c.x;
            temp.y=c.y;
            temp.z=c.z;
            return temp;
        }
        void display()
        {
            cout<<"Coordinate are :- "<<x<<" "<<y<<" "<<z<<endl;
        }
};
int main()
{
    Coordinate c1,c2,c3;
    c1.setter(2,3,4);
    c2.setter(5,6,7);
    c3 = (c1,c2);
    c3.display();
    c2.display();
    c1.display();
    return 0;
}