#include<bits/stdc++.h>
using namespace std;

long int printDistinct(long int arr[],long int n) 
{ 
	long int count=0;
   // First sort the array so that all occurrences become consecutive 
    sort(arr, arr + n); 
  
    // Traverse the sorted array 
    for (int i=0; i<n; i++) 
    { 
       // Move the index ahead while there are duplicates 
       while (i < n-1 && arr[i] == arr[i+1]) 
          i++; 
  
       // print last occurrence of the current element 
       count++; 
    } 
    return count;
} 

int main()
{
	long int t;
	cin>>t;

	while(t--)
	{
		long int n,x,i;
		cin>>n>>x;
		long int a[n+1];
		a[0]=x;
		getchar();
		string s;

		getline(cin,s);

		long int num=x;
		
		for(i=1;i<=n;i++)
		{
			if(s[i-1]=='R')	
			num++;

			else if(s[i-1]=='L')
			num--;

			a[i]=num;
		}

		long int c=printDistinct(a,n+1);

		cout<<c<<endl;
	}


}
