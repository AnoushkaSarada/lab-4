#include<iostream>
using namespace std;
void number(int a)
{
if(a%2==0)
cout<<a<<" is even"<<endl;
else
cout<<a<<" is odd"<<endl;

}
int main()
{
int a;
cout<<"enter value of a";
cin>>a;
number(a);
return 0;
}