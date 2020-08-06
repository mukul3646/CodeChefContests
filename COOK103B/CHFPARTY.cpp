#include<bits/stdc++.h>
using namespace std;


int main()
{
	long int t;
	cin>>t;
	getchar();
	while(t--)
	{
		long int n,counter=0,i;
		cin>>n;

		long int a[n];

		for(i=0;i<n;i++)
			cin>>a[i];

		sort(a,a+n);

		
		for(i=0;i<n;i++)
		{

			if(counter>=a[i])
			{
				counter++;
			}

		}

		cout<<counter<<endl;
	}

}
