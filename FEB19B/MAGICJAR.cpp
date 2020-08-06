#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	getchar();
	while(t--)
	{
		long int n,i;
		cin>>n;
		long int a[n],sum=0;

		for(i=0;i<n;i++)
		{
			cin>>a[i];
			sum=sum+(a[i]-1);
		}
		
		sum++;
		
		cout<<sum<<endl;

	}


}
