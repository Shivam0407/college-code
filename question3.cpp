#include<bits/stdc++.h>
using namespace std;
 void countEggs()
 {	int n;
 	cin>>n;
 	int a[n];
 	int sum=0;
 	int count=0;
 	for(int i=0;i<n;i++)
 	{
 		cin>>a[i];
 		if(a[i]<=0){
 			count++;
 			
		 }
	}
	if(n>0){
		cout<<"Error";	}
	else{
	
	if(count=0){
	
	for(int i=0;i<n;i++)

	{	for(int j=1;j<=4;j++){
	
	
		if(a[i]>=52)
		{
			sum+=4;
		}
		a[i]++;
		
}
	}
	cout<<sum;
}
else{
	cout<<"Error";
}
 }
}
 int main()
 {
 	countEggs();
 	
 }
