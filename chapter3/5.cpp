#include<iostream>
using namespace std;

int main()
{
	long long world;
	cout<<"Enter the world's population: \n";
	cin>>world;
	long long us;
	cout<<"Enter the population of the US: \n";
	cin>>us;
	double ratio=(double)us/world*100;
	cout<<"The population of the US is "<<ratio<<"% of the world population\n";
	return 0;

}
