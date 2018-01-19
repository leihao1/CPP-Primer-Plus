#include<iostream>
using namespace std;

int main()
{
	float deg,min,sec;
	cout<<"enter a latitude in degrees,minutes,and seconds:\n";
	cout<<"degrees:___\n";
	cout<<"minutes:___\n";
	cout<<"seconds:___";
	cout<<"\b\b\b\x1b[1A\x1b[1A";
	cin>>deg;
	cout<<"\t";
	cin>>min;
	cout<<"\t";
	cin>>sec;
	float degs=deg+min/60+sec/60/60;
	cout<<deg<<" degrees, "<<min<<" minutes, "<<sec<<" seconds = "<<degs<<" degrees\n";		
	return 0;
}
