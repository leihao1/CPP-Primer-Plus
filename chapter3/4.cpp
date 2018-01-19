#include<iostream>
using namespace std;

int main()
{
	const int HOURS_IN_DAY=24;
	const int MINS_IN_HOUR=60;
	const int SECS_IN_MINUTE=60;
	long long sec;
	cout<<"Enter the number of seconds: \n";
	cin>>sec;
	int secs=sec%SECS_IN_MINUTE;
	long long temp=sec/SECS_IN_MINUTE;
	int mins=temp%MINS_IN_HOUR;
	temp=temp/MINS_IN_HOUR;
	int hours=temp%HOURS_IN_DAY;
	long long days=temp/HOURS_IN_DAY;
	cout<<sec<<" seconds = "<<days<<" days, "<<hours<<" hours, "<<mins<<" minutes, "<<secs<<" seconds\n";
	return 0;

}
