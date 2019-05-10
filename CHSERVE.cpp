#include<bits/stdc++.h>
using namespace std;

int main()
{

 int t,p1,p2,p,k;
 cin>>t;

 while(t--)
 {

 cin>>p1>>p2>>k;
 p=p1+p2;
 p=p/k;

 if(p%2==0)
 {
  cout<<"CHEF"<<"\n";
 }

 else
 	cout<<"COOK"<<"\n";

 }

}
