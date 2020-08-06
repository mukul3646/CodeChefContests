#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,i,index,max=0;
		cin>>n;
		int a[n],d[n];

		for (i=0;i<n;++i)
			cin>>a[i];

		for(i=0;i<n;i++)
			cin>>d[i];

		
		for(i=0;i<n;i++)
		{
			if(i==0)
			{
				if(d[i]>(a[i+1]+a[n-1]))
				{
					max=d[i];
					index=i;
				}
			}

			else if(i==n-1)
			{
				
				if(d[i]>(a[0]+a[i-1]) && d[i]> max)
				{
					max=d[i];
					index=i;
				}
			}

			else
			{
				if(d[i]>(a[i+1]+a[i-1]) && d[i]>max)
				{
					max=d[i];
					index=i;
				}
			}

		}
		if(max==0)
			cout<<"-1"<<endl;
		else
			cout<<d[index]<<endl;
			
	}

}
