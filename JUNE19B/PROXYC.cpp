#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;

	while(t--)
	{

		int n,count=0,i,xcount=0,x,flag=0;
		float percy;
		cin>>n;
		getchar();
		string s;
		getline(cin,s);

		if(n>4)
		{
			for(i=0;i<n;i++)
			{
				if(s[i]=='P')
					count++;

			}

			percy=(count*1.0)/n;

			if(percy>=0.75)
			{
				cout<<"0"<<endl;
			}

			else
			{

				for(i=2;i<n-2;i++)
				{
					if(s[i]=='P')
					{}

					else if(s[i]=='A')
					{
						if((s[i-1]=='P' || s[i-2]=='P') && (s[i+1]=='P' || s[i+2]=='P'))
						{
							xcount++;
							x=xcount+count;

							percy=x*1.0/n;

							if(percy>=0.75)
								{flag=1; break;}
						}

					}

				}

				if(flag==1)
					cout<<xcount<<endl;

				else
					cout<<"-1"<<endl;
			}
		}

		else
		{
			for(i=0;i<n;i++)
				if(s[i]=='P')
					count++;


				percy=(count*1.0)/n;

				if(percy>=0.75)
					cout<<"0"<<endl;

				else
					cout<<"-1"<<endl;
		}

	}


}
