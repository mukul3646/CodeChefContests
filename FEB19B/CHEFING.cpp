#include <bits/stdc++.h> 
using namespace std; 
  
const int MAX_CHAR = 26; 
  
int commonCharacters(string str[], int n) 
{ 
   int count=0;
    bool prim[MAX_CHAR]; 
    memset(prim, true, sizeof(prim)); 
  
    for (int i = 0; i < n; i++) { 
  
        bool sec[MAX_CHAR] = { false }; 
   
        for (int j = 0; str[i][j]; j++) { 
   
            if (prim[str[i][j] - 'a']) 
                sec[str[i][j] - 'a'] = true;  
        } 

        memcpy(prim, sec, MAX_CHAR); 
    } 
   
    for (int i = 0; i < 26; i++) 
        if (prim[i]) 
            count++; 

         return count;
} 
  
// Driver's Code 
int main() 
{ 

    int t;
    cin>>t;
    while(t--)
    {
      int n,c,i;
      cin>>n;
      getchar();
      string str[n];
      for(i=0;i<n;i++)
      {
         getline(cin,str[i]);
      } 

      c=commonCharacters(str, n); 

      cout<<c<<endl;
    } 

       return 0; 
}
