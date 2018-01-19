#include<iostream>
using namespace std;

int main()
{
	const int FOOT_INCH=12;
	const double INCH_METER=0.0254;
	const float KG_POUND=2.2;
	int feet;
	int inches;
	cout<<"please enter your height in feet and inches.\n";
	cout<<"feet:___\b\b\b";
	cin>>feet;
	cout<<"inches:___\b\b\b";
	cin>>inches;
	int pounds;
	cout<<"please enter your wirght in pounds:___\b\b\b";
	cin>>pounds;
	int one_inch=feet*FOOT_INCH+inches;
	double meters=one_inch*INCH_METER;
	cout<<meters<<endl;
	double kg=pounds/KG_POUND;
	double bmi=kg/(meters*meters);
	cout<<"your BMI is : "<<bmi<<endl;
	return 0;
}
