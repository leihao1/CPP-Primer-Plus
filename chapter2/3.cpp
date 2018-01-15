#include<iostream>
using namespace std;

void typer1();
void typer2();

int main()
{
    typer1();
    typer1();
    typer2();
    typer2();
    return 0;
}

void typer1()
{
    cout<<"Three blind mice\n";
}

void typer2()
{
    cout<<"See how they run\n";
}
