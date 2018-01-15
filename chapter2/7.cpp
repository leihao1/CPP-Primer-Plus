#include<iostream>
using namespace std;

void display(int,int);

int main()
{
    int hour;
    int minute;
    cout<<"Enter the number of hours: \n";
    cin>>hour;
    cout<<"Enter the number of minutes: \n";
    cin>>minute;
    display(hour,minute);
    return 0;

}

void display(int hour,int minute)
{
    cout<<"Time: "<<hour<<":"<<minute<<endl;
    return;
}
