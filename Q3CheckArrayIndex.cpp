/*Overload subscript operator [] that will be useful when we want to check for an index out 
of bound.*/
#include<iostream>
using namespace std;

class ArrayIndex
{
    int arr[100];
    const int size=100;
    public:
        void setArray(int num,int index)
        {
            if(index>=100)
            {
                cout<<"Index out of bound"<<endl;
                exit(0);
            }
            arr[index]=num;
        }
       int operator[](int index)
       {
            if(index>=size)
            {
                cout<<"Index out of bound"<<endl;
                exit(0);
            }
            return arr[index];
       }
       void show(int index)
       {
        cout<<arr[index]<<endl;
       }
};
int main()
{
    ArrayIndex a1;
    a1.setArray(23,99);
    a1.show(99);
    return 0;

}