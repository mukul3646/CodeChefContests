#include<bits/stdc++.h>
using namespace std;
int main()
{

long int t;
cin>>t;
while(t--)
{
	long int i=0,d,n,b[20]={0},c[20]={0},j,count=0,k=0;
	cin>>n>>d;
	
	while(n>0)
	{
		b[i]=n%10;
		n=n/10;
		i++;
	}
	
	int p=*min_element(b,b+i);

	for(j=i;j>=0;j--)
	{
		if(b[j]>=d)
			count++;

		else if(b[j]<d && b[j]>p)
		{
			count++;
		}

		else if(b[j]==p)
		{
			c[k]=b[j];

			p=*min_element(b,b+j);
			k++;
		}

	}

	for(j=0;j<k;j++)
		cout<<c[j];

	for(j=0;j<count;j++)
		cout<<d;

	cout<<endl;

}

}