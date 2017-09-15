#include <iostream>
using namespace std;
int max(int ,int );
int min(int ,int );
int main() {
	int num1, num2, m1, m2;
	cout<<"Please enter two numbers\n";
	cin>>num1>>num2;
	m1= max(num1, num2);
	m2= min(num1, num2);
	cout<<"The greater number is "<<m1<<" and the lesser number is "<<m2;
	return 0;
}
int max(int a, int b)
{
	int k;
	if(a>b)
	k=a;
	else if(b>a)
	k=b;
	return k;
}
int min(int a, int b)
{
	int k;
	if(a>b)
	k=b;
	else if(a<b)
	k=a;
	return k;
}
