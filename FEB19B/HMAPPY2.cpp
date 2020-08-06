#include<bits/stdc++.h>
using namespace std;


int main()
{
	long int t;
	cin>>t;
	getchar();
	while(t--)
	{
		long long int n,a,b,k,result,Lcm,ncm,i;
		cin>>n>>a>>b>>k;

		long long int lar,both,small;

		if(a==b)
			result=0;

		else if(a>b&&a%b==0)
		{
			result=n/b-n/a;
		}

		else if(a<b&&b%a==0)
		{
			result=n/a-n/b;
		}

		else
		{
			result=(n/a)+(n/b)-2*(n/(a*b));
		}


		if(result>=k)
			cout<<"Win"<<endl;
		else
			cout<<"Lose"<<endl;

	}



}

