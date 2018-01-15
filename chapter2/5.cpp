#include<iostream>
using namespace std;

int temp_convert(int);

int main()
{
    int temp;
    cout<<"Please enter a Celsius value: \n";
    cin>>temp;
    cout<<temp<<" degrees Celsius is "<<temp_convert(temp)<<" degrees Fahrenheit.\n";
    return 0;
}

int temp_convert(int c)
{
    return 1.8*c+32.0;
}
