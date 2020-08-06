#include<bits/stdc++.h>
using namespace std;


int main()
{
	long int t;
	cin>>t;
	getchar();
	while(t--)
	{

		long int n,b,i;
		cin>>n>>b;

		long int w[n],h[n],p[n],a[n],max=0,flag=0;

		for(i=0;i<n;i++)
			cin>>w[i]>>h[i]>>p[i];

		for(i=0;i<n;i++)
		{
			if(p[i]<=b)
			{

				a[i]=w[i]*h[i];
				if(a[i]>max)
				{
					max=a[i];
					flag=1;
				}

			}


		}

		if(flag==0)
			cout<<"no tablet"<<endl;
		else
			cout<<max<<endl;

	}

}
