#include<bits/stdc++.h>
using namespace std;
int main()
{

long int t;
cin>>t;
while(t--)
{

	long int n;
	cin>>n;
	long int a[n],count=0,neg=0,low,high;

	for(long int i=0;i<n;i++)
		{
			cin>>a[i];
			
			if(a[i]>0)
				count++;

			else if(a[i]<0)
				neg++;
		}

			if(neg>count)
			{
				 high=neg;
				 low=count;
			}

			else if(neg<count)
			{
				 high=count;
				 low=neg;

			}

			if(low==0)
			{
				low=high;
			}

		cout<<high<<" "<<low<<endl;

}

}