#include <iostream>
using namespace std;
 
long dia(long );
long cir(long );
long area(long );
 
int main() {
	long r, d, c, a;
	cout<<"Please enter the radius\n";
	cin>>r;
	d= dia(r);
	c= cir(r);
	a= area(r);
	cout<<"The diameter is "<<d<<", circumference is "<<c<<" and area is "<<a;
	return 0;
}
long dia(long a)
{
	long d= 2*a;
	return d;
}
long cir(long a)
{
	long c= 6.28*a;
	return c;
}
long area(long a)
{
	long ar= 3.14*a*a;
	return ar;
}
