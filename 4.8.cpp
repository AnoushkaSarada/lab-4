#include <iostream>
#include <cmath>
using namespace std;

int armstrong(int up,int low)
{
	int num,i,sum,dig,cube;
	sum = 0;
	
	cout <<"List of Armstrong numbers is : \n";
	for(i=low; i<=up; i++)
	{
		num = i;
		sum = 0;
		while(num>1)
	{
		dig = num%10;
		cube = pow(dig,3);
		sum = sum+cube;
		num = num/10;
	}
	if (sum == i)
	cout <<i <<endl;
}
}
int main() {
	
	int up,low;
	cout <<"Enter the lower limit\n";
	cin >>low;
	cout <<"Enter the upper limit\n";
	cin >>up;
	armstrong(up,low);
	return 0;
}
