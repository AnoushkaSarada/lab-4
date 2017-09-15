#include<iostream>
#include<cmath>
using namespace std;
void check()
{
int c,i,num;
cout<<"enter number";
cin>>num; 
  for( i=2;i<=num/2;i++)
    {
      if(num%i==0)
        c=c+1;
      else
         c=0;
     }
      if(c==0)
       cout<<" number is prime"<<endl;
     else
       cout<<" not prime"<<endl;

int k,n, sum=0,rem;
  for(i=1;i<n;i++)
  {
     rem=num%i;
     if(rem==0)
     {
       sum=sum+i;
      }   
   }
        if(sum==num)
          cout<< " is perfect"<<endl;
        else
           cout<<"  not perfect"<<endl;

int lastdigit,result,origi;
result=0;
origi=num;
  while(num>0)
  {
    lastdigit=num%10;
    result=result+(lastdigit*lastdigit*lastdigit);
    num=num/10;
  }
    if(origi==result)
     cout<<" is armstrong"<<endl;
    else
     cout<<" not armstrong"<<endl;
}
int main()
{
check();
return 0;
}
