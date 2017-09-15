#include <iostream>
using namespace std;

void strong(int up, int low)
{
	int i,j,fact,sum,d,check;
	
	cout <<"Strong numbers are : \n";
	for(i=low;i<=up;i++)
	{
		check = i;
	
		sum = 0;
		while(check>0)
		{
	                        fact = 1;
			d = check%10;
			for(j=1;j<=d;j++)
			{
				fact = fact*j;
			}
			sum = sum+fact;
			check = check/10;
		}
		if (sum == i)
		cout <<i <<endl;
}
}

int main() {
	
	int up,low;
	cout <<"Enter upper limit for strong numbers\n";
	cin >>up;
	cout <<"Enter lower limit for strong numbers\n";
	cin >>low;
	strong(up,low);
	return 0;
}
