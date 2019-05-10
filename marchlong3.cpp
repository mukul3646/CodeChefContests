#include<bits/stdc++.h>
using namespace std;
int main()
{

long int t;
cin>>t;
while(t--)
{

	long int n,i,j,count=0,k;
	cin>>n;
	getchar();

	string s[n];

	for(i=0;i<n;i++)
		getline(cin,s[i]);


	for(i=0;i<n;i++)
	{

		for(j=i+1;j<n;j++)
		{
			int flag=0;
			string str=s[i]+s[j];

				if(str.find('a')!=-1)
					flag++;

				if(str.find('e')!=-1)
					flag++;

				if(str.find('i')!=-1)
					flag++;

				if(str.find('o')!=-1)
					flag++;

				if(str.find('u')!=-1)
					flag++;


			if(flag==5)
				count++;

		}
	}

	cout<<count<<endl;
}

}