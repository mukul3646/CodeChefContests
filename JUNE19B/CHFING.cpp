#include <boost/multiprecision/cpp_int.hpp> 
#include<bits/stdc++.h>
using namespace boost::multiprecision; 
using namespace std; 
 
int main() 
{
	int t;
	cin>>t;
 
	while(t--)
	{
    
    int128_t diff,mod,r;
    int128_t n,k,sum,an,som;

    cin>>n>>k;
 	
	 n=k+n-1;	
	 sum=(k-1);
 
	if((2*k)-n<=1)
	 {
 
		 }	
 
	else
	 {
 
	  diff=n-k;
 
	  if(diff==1)
	  {	
	  r=(2*k)-n-1;	
	  r=(r*(r+1))/2;
	  sum=sum+r;	
	  }
 
	 else
	 {
	 	r=(2*k)-n-1;
 		mod=r%diff;

 		an=((mod-r)/(diff*-1))+1;
 		som=an*((mod+r)/2);
 		
 		if((mod+r)%2!=0)
 		{	
 			if(an%2==0)
 			som=som+(an/2);	

 		}
	 	/*while(r>=1)
	 	{



	 		sum=sum+r;
	 		r=r-diff;
		}
 		*/
 		sum=sum+som;

	 }
 
  }
 
  cout<<sum%1000000007<<endl;
}
 return 0;
}

