#include<iostream>
using namespace std;

int main()
{
	const float GALLON_LITER=3.875;
	const float KM_MILE=100/62.14;
	float liters;
	cout<<"Enter your gasoline cosumption figure(liters/100km): ";
	cin>>liters;
	float gallons=liters/GALLON_LITER;
	float miles=100/KM_MILE;
	float mpg=miles/gallons;
	cout<<"Your car can drives "<<mpg<<" miles with per gallon.\n";
	return 0;

}
