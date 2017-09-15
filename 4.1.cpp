#include <iostream>
using namespace std;
 
int cube(int );
 
int main() {
	int n, b; 
	cout<<"Enter a number to be cubed\n";
	cin>>n;
	b=cube(n);
	cout<<b;
	return 0;
}
int cube(int a)
{
	int b;
	b=a*a*a;
	return b;
}
