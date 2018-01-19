#include<iostream>
using namespace std;

int main()
{	int inch;
	const int FACTOR=12;
	cout<<"please enter your height:__\b\b";
	cin>>inch;
	int feet=inch/FACTOR;
	int inches=inch%feet;
	cout<<"your height in feet is: "<<feet<<" feet "<<inches<<" inches\n";

	return 0;
}
