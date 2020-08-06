#include<bits/stdc++.h>
using namespace std;

long int funk(unsigned long long int n)
{
	unsigned long long int sum=0,x;
	while(n>0)
	{
		x=n%10;
		sum=sum+x;
		n=n/10;
	}

return sum;
}


int main()
{
   	int t;
	cin>>t;

	while(t--)
	{
		unsigned long long int n;
		cin>>n; 

		n=n*10;

		long int digsum=funk(n);
	
		int x=0;
		//cout<<digsum<<endl;

		while((digsum+x)%10!=0)
		{
			x++;
		}

		n=n+x;

		cout<<n<<endl;
	}


}
