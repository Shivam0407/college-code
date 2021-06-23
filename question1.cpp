#include<bits/stdc++.h>
using namespace std;
void noOfNotes(int totalMoney)
{
	int notes[10]={2000,500,200,100,50,20,10,5,2,1};
	int Frequency[10]={0};
	for(int i=0;i<10;i++)
	{
		if(totalMoney>=notes[i])
		{
			Frequency[i]=totalMoney/notes[i];
			totalMoney=totalMoney-Frequency[i]*notes[i];
		}
		else{
			cout>>"Error";
		}
	}
	for(int i=0;i<10;i++)
		cout<<Frequency[i]<<" ";
}
int main(){
	int totalMoney;
	cin>>totalMoney;
	noOfNotes(totalMoney);
	return 0;
}
