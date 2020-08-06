#include<bits/stdc++.h>
using namespace std;

int binaryToDecimal(int n) 
{ 
    int num = n; 
    int dec_value = 0; 
      
    // Initializing base value to 1, i.e 2^0 
    int base = 1; 
      
    int temp = num; 
    while (temp) 
    { 
        int last_digit = temp % 10; 
        temp = temp/10; 
          
        dec_value += last_digit*base; 
          
        base = base*2; 
    } 
      
    return dec_value; 
} 


int main()
{

long int t;
cin>>t;

while(t--)
{
	long int n,i,count=0,j;
	cin>>n;
	getchar();
	int a[32]={0};

	string s[n];
	for(i=0;i<n;i++)
		{
			string str="";

			getline(cin,s[i]);

			
			if(s[i].find('a')!=-1)
					str=str+"1";

			else if(s[i].find('a')==-1)
					str=str+"0";

			if(s[i].find('e')!=-1)
					str=str+"1";

			else if(s[i].find('e')==-1)
					str=str+"0";
	

			if(s[i].find('i')!=-1)
					str=str+"1";

			else if(s[i].find('i')==-1)
					str=str+"0";	


			if(s[i].find('o')!=-1)
					str=str+"1";

			else if(s[i].find('o')==-1)
					str=str+"0";
	
			if(s[i].find('u')!=-1)
					str=str+"1";

			else if(s[i].find('u')==-1)
					str=str+"0";

			int num = stoi(str);
			num=binaryToDecimal(num);

			a[num]++;
		}


for(i=0;i<32;i++)
{
	if(a[i]==0)
	{}
	else
	{
		for(j=0;j<32;j++)
		{

			if(i==31 && i==j)
			{
				int no=a[i]-1;
				count=count+((no*(no+1))/2);
			}

			else if(a[j]==0)
			{}

			else
			{
				int c=i|j;

				if(c==31)
					count=count+a[i]*a[j];

			}

		}

	a[i]=0;	

	}

}

cout<<count<<endl;

}

}
