#include<iostream>
using namespace std;
int main()
{
    int salary,hostal,bank,food,send_to_parent;
    cin>>salary>>hostal>>bank>>food>>send_to_parent;
    int total_expenses=salary+hostal+bank+food+send_to_parent;
    if(salary>total_expenses)
      cout<<"he can save the money";
    else
       cout<<"he can do hard work";
}