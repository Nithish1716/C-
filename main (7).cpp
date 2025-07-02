#include <iostream>
using namespace std;
int main()
{
int l1,l2,l3,b1,b2,b3;
int wall,p1,p2;
cin>>l1>>l2>>l3>>b1>>b2>>b3;
wall=l1*b1;
p1=l2*b2;
p2=l3*b3;
int wall_size=p1+p2;
if(wall>=wall_size)
cout<<"raj an fix both painting";
else
cout<<"raj cannot fix the painting";
    return 0;
}