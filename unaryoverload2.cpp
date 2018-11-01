#include<iostream>
//fifty6s
using namespace std;
class invert_position
{
    int x,y;
    public:
        invert_position(int a,int b)
        {
        	x=a;
        	y=b;
        }
    void show()
        {
            cout<<"\nx="<<x;
            cout<<"\ny="<<y;
        }
    void operator -();
};

void invert_position::operator -()
{
    x=-x;
    y=-y;
}
int main()
{
    invert_position i(2,3);
    -i;
    i.show();
    return 0;
}
