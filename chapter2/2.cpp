#include<iostream>
using namespace std;

int main()
{
	unsigned int length;

	cout<<"please enter a distance in furlongs: \n";
	cin>>length;
	unsigned int yards_length=length*220;
	cout<<"your distance in furlongs is "<<length<<endl;
	cout<<"your distance in yards is "<<yards_length<<endl;
	return 0;
}

