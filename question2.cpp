#include<bits/stdc++.h>
using namespace std;
void income(float x,float y,float z,float t,float w,int m,int year)
{
	double dexpen,mexpen;
	dexpen=x+y+z+t+w;
	if(m==4 || m==6 || m==9 || m==11)
	{
		mexpen=dexpen*30;
	}
	else if(m==2)
	{
		mexpen=dexpen*29;
	}
	else{
		mexpen=dexpen*31;
	}
	cout<<fixed;
	cout<<setprecision(6)<<dexpen<<" "<<mexpen;
}
int main()
{
	float x,y,z,t,w;
	int m,year;
	cin>>x>>y>>z>>t>>w>>m>>year;
	if(m<=12 && y>x && y>z && y>t && y>w && x>0 && y>0 && z>0 && t>0 && w>0)
	{
		income(x,y,z,t,w,m,year);
	}
	else{
		cout<<"Error";
	}
}
