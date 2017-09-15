#include <iostream>
using namespace std;

int perfect(int up,int low)
{
	int num,sum,i,j;
    	
    	cout <<"Perfect numbers are : \n";
    	for(i=low;i<=up;i++)
    	{
    		sum = 0;
    		for(j=1;j<i;j++)
    		{
    		if (i%j==0)
    		sum = sum+j;
    		}
    		if (sum==i)
    		cout <<i <<endl;
}
}

int main() {
	int up,low;
	cout <<"Enter the lower limit\n";
	cin >>low;
	cout <<"Enter the upper limit\n";
	cin >>up;
	perfect(up,low);
	return 0;
}