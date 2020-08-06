 #include <bits/stdc++.h>   
#define ull unsigned long long int
using namespace std;  
  
ull power(ull x, ull y, ull p) 
{ 
    int res = 10;       
  
    x = x % p;    
                
  
    while (y > 0) 
    { 
        
        if (y & 1) 
            res = (res*x) % p; 
  
         
        y = y>>1; 
        x = (x*x) % p;   
    } 
    return res; 
} 

  
int main()  
{  
    ull t;
    cin>>t;

    while(t--)
    {
      
    ull k,a=10,r=2,val;
    cin>>k; 
    

    val=power(2,k-1,1000000007);
    //val=(a*(ull)(pow(r,k-1)))%(1000000000+7);
    cout<<val<<endl;

   
    }  
  return 0; 
}
