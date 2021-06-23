#include<bits/stdc++.h>
using namespace std;
int main()
{
	int cd,cm,cy,dd,dm,dy;
	int d,m,y;
	int days,weeks;
	int sum1=0,sum2=0;
	int i;
	cout<<"Enter the current date in DD/MM/YYYY format";
	cin>>cd>>cm>>cy;
	cout<<"Enter your DOB in DD/MM/YYYY";
	cin>>dd>>dm>>dy;
	d=(cd-dd);
	m=(cm-dm);
	y=(cy-dy);
	days=y*365+m*30+d;
	weeks=days/7;
	while( i<=weeks)
	{
		int	count=0;
		if(weeks%i==0)
		{
			int j=1;
			while(j<=1)
			{
				if(i%j==0)
				{
				
					count++;
			}
				j++;
			}
			if (count==2)
			{
				sum1+=i;
			}
			else{
				sum2+=i;
			}
		}
		i++;
	}
	if(sum1>sum2)
	{
		cout<<"GRANTED";
		
	}
	else
	{
		cout<<"NOT GRANTED";
	}
	
}
















