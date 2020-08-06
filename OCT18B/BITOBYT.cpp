#include<bits/stdc++.h>
using namespace std;

int main()
{

 double t,bit,nibble,byte,n,exp,pos,pwr;
 cin>>t;

 while(t--)
 {
 
 cin>>n;

 if(n==0)
 	{bit=1;nibble=0;byte=0;}

 else{

		 if((int)n%26!=0)
		 pwr=(int)n/26;
		 
		 else
		 pwr=(int)(n/26)-1;


		 pos=(int)n%26;
		 exp=pow(2,pwr);
		 
		 if(pos==0)
		 {
		 	bit=0;
		 	nibble=0;
		 	byte=exp;
		 }

		 else if(pos<=2)
		 {
			bit=exp;
		 	nibble=0;
		 	byte=0;

		 }


		 else if(pos<=10)
		 {
			bit=0;
		 	nibble=exp;
		 	byte=0;

		 }


		 else if(pos<=26)
		 {
			bit=0;
		 	nibble=0;
		 	byte=exp;

		 }

    }
    cout.precision(0);
    cout<<fixed<<bit<<" "<<fixed<<nibble<<" "<<fixed<<byte<<"\n";


}

}
