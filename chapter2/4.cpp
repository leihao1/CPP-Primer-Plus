#include<iostream>

int main()
{
    int age;
    std::cout<<"Please enter youer age: \n";
    std::cin>>age;
    int age_in_month=age*12;
    std::cout<<"Your age in months is: "<<age_in_month<<std::endl;
    return 0;
}

