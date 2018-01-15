#include<iostream>
using namespace std;


double convertor(int);

int main()
{
    int light_year;
    cout<<"Enter the number of light year: \n";
    cin>>light_year;
    cout<<light_year<<" light years = "<<convertor(light_year)<<" astronomical units.\n";
    return 0;
}

double convertor(int ligtyear)
{
    return ligtyear*63240;
}

