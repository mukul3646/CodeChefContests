#include<bits/stdc++.h>
using namespace std;


long long int Partition(long long int [],long long int ,long long int, long long int[]);

void Quick_sort(long long int a[],long long int p,long long int r,long long int b[])

{
long long int q;
if(p<r)

 {
  q=Partition(a,p,r,b);
  Quick_sort(a,p,q-1,b);
  Quick_sort(a,q+1,r,b); 
   
 }

}

long long int Partition(long long int a[],long long int p,long long int r, long long int b[])
{
long long int swap,x,i,j;
x=a[r];
i=p-1;

for(j=p;j<=r-1;j++)
 {
 
 if (a[j]<=x)
 {
  i=i+1;

  swap= a[i];
  a[i]=a[j];
  a[j]=swap;

  swap= b[i];
  b[i]=b[j];
  b[j]=swap;

 }
 
 }
 
  swap=a[i+1];
  a[i+1]=a[r];
  a[r]=swap;

  swap=b[i+1];
  b[i+1]=b[r];
  b[r]=swap;

return (i+1);
}


int main()
{

 long long int n,m,i,rear,front,x,add=0,middle,temp;
 cin>>n>>m;


 long long int a[n],b[n],c[n],p=0;

 long long int r=n-1;

 for(i=0;i<n;i++)
 {
 	cin>>a[i];
    add=add+a[i];
 }

for(i=0;i<n;i++)
 	cin>>b[i];

    	for (i=0; i<n; i++)
    	{
    		c[i]=a[i]*b[i];
    	}

    	if(m==0)
    	{
    		long long mx=c[0];
    		for(i=1;i<n;i++)
    		{
    			if(c[i]>mx)
    				mx=c[i];
    		}
    		cout<<mx;
    	}

else
{


 Quick_sort(c,p,r,b);

		rear=c[0];
    	front=c[n-1];

    	 x=0;


  if(m<add)
  {

  	    		while(rear<=front)
  	    		{

    			middle=(rear+front)/2;
    			
    			temp=m;
    			for(i=n-1;i>=0;i--)
    			{
    				if(c[i]<=middle)
    				break;
    				
    				else{

    						if((c[i]-middle)%b[i]==0)
    						temp=temp-(c[i]-middle)/(b[i]);
    						

    						else
    						temp=temp-(c[i]-middle)/(b[i])-1;
    					}
    			}
    			

    				if(temp<0)
    				{
    					rear=middle+1;
    				}

    				else
    				{
    					front=middle-1;
    				}

    				if(rear>front)
    				{
    					if(temp<0)
    						x=middle+1;
    					else
    						x=middle;
    				}
    		}

    	cout<<x<<endl;	

  }

else
	cout<<0<<endl;

}
return 0;
}
