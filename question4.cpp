#include<bits/stdc++.h>
using namespace std;


int main()
{
	int n,p=1,q=1;
	cin>>n;
	int a[n];
	int count=0;
	if(n<10)
	{
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]<=0){
 			count++;}
 			
		if(i%2==0)
			{
				p*=a[i];
			}
		else{
				q*=a[i];
			}
	
	}
		if(p>=q && count==0)
		{
			cout<<"Dominant";
		}
		else if(count==0 && q>p)
		{
			cout<<"Magical";
		}
		else
		{
			cout<<"Error";
		}
}
	else
		cout<<"Error";
}

