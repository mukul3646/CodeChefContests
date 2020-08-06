#include<bits/stdc++.h>
#define lli unsigned long long int
using namespace std;

lli hp(lli n) 
{ 
	
	lli x=1;
	while(n>1)
	{
		x=x*2;
		n=n/2;
	}  

	return x-1;
} 


int main()
{
	lli t;
	cin>>t;

	while(t--)
	{
		lli arr[60]={0, 1, 1, 2, 3, 5, 8, 3, 1, 4, 5, 9, 4, 3, 7, 0, 7, 7, 4, 1, 5, 6, 1, 7, 8, 5, 3, 8, 1, 9, 0, 9, 9, 8, 7, 5, 2, 7, 9, 6, 5, 1, 6, 7, 3, 0, 3, 3, 6, 9, 5, 4, 9, 3, 2, 5, 7, 2, 9, 1};

		lli n,i,temp;
		cin>>n; 
		
		temp=hp(n);
		//temp--;
		//cout<<temp<<endl;
  		cout<<arr[temp%60]<<endl;

	}

 return 0;
}
