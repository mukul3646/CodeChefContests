#include<bits/stdc++.h>
using namespace std;

int main()
{

int t;
cin>>t;
while(t--)
{
	int n,k,v,sum=0,var,sum1,i;
	cin>>n>>k>>v;

	int a[n];

	for(i=0;i<n;i++)
		{
			cin>>a[i];
			sum=sum+a[i];

		}

	var=(v*(n+k)-sum)/k;
	sum1=var*k;

	if(var>0 && (sum+sum1)/(n+k)==v)
		cout<<var<<endl;

	else
		cout<<"-1"<<endl;

}

}
