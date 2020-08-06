#include<stdio.h>

long long int digitsum(long long int);

int main()
{
  long long int t,array[100000],n,d,m,pa,i,x=1,q=0,a,b,k=1,ppi=0,step;
  
  scanf("%lli",&t);
  while(t>0)
  {
  scanf("%lli %lli",&n,&d);
  
  pa=100;
  array[0]=array[1]=n;
  while(ppi<12)
  {
     ppi++;
     for(i=1;i<=x;i++)
     {
        n = q+(i-1);
 	a = digitsum(array[n]);
	b = array[n]+d;
   	
   	array[k*2+1]=b;
	array[k*2]=a;
	k++;

	if(a<pa)
	{
	  pa=a;
          step=ppi;
      	}
     }
    q=x=x*2;
    }
 
  if(pa==array[0])
     step=0;
     printf("%lli %lli\n",pa,step);
	  x=1;
	  q=0;
	  k=1;
	  ppi=0;
	  t--;
  }
  return 0;
}

long long int digitsum(long long int a)
{
  long long int sum=0;
  while(a!=0)
  {
    sum=sum+a%10;
    a=a/10;
  }
  return sum; 
}
