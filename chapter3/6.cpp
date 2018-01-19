#include<iostream>
using namespace std;

int main()
{
	float miles,gallons,per;
	cout<<"Enter miles you have driven: \n";
	cin>>miles;
	cout<<"Enter total gasoline you have used: \n";
	cin>>gallons;
	per=miles/gallons;
	cout<<"Your car drives "<<per<<" miles per gallon.\n";
	return 0;

}
