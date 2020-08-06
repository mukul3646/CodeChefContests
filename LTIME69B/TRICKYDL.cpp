#include<bits/stdc++.h>
using namespace std;

int main()
{

long long int t;
cin>>t;
while(t--)
{

	long long int a,temp=1,count=0,sum,i=0,index,j;
	cin>>a;
	long long int diff[1000000];

	sum=a;
	while(sum>temp)
	{
		temp=temp+(2*pow(2,i));
		sum=sum+a;
		count++;

		diff[i]=sum-temp;
		i++;

		/*diff=a-temp;

		if(diff>pre)
		{
			max=diff;
			pre=diff;
		}

		else if(diff<pre)
			{
				d2=pre;
				//x[i]=count;
				i++;
			}
			*/

	}

	long long int *p=max_element(diff,diff+i);

	for(j=0;j<i;j++)
	{
		if(diff[j]==*p)
		{
			index=j;
			index=index+2;
			break;
		}
	}


cout<<count<<" "<<index<<endl;

}


}
