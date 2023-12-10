#include<iostream>
using namespace std;

int main()
{
    int a = 45;
    cout<<"The int is: "<<a<<endl;
    cout<<"The size of int is: "<<sizeof(a)<<endl;

    float b = 1.2;
    cout<<"The float is: "<<b<<endl;
    cout<<"The size of float is: "<<sizeof(b)<<endl;

    char c = 'c';
    cout<<"The char is: "<<c<<endl;
    cout<<"The size of char is: "<<sizeof(c)<<endl;

    double d = 1.25;
    cout<<"The double is: "<<d<<endl;
    cout<<"The size of double is: "<<sizeof(d)<<endl;

    bool f = false;
    cout<<"The bool is: "<<f<<endl;
    cout<<"The size of bool is: "<<sizeof(f)<<endl;

    //assigning the character to the integer:
    int g ='a';
    cout<<"The char into int is: "<<g<<endl;

    //assigning the int to the character:
    char h = 97;
    cout<<"The int into char is: "<<h<<endl;

    //Printing the Negative integer:
    int l = -2;
    cout<<"The negative int is: "<<l<<endl;

    //Operations:
    int x = 2;
    int y = 3;

    cout<<(x==y)<<endl;
    cout<<(x!=y)<<endl;
    cout<<(x>=y)<<endl;
    cout<<(x<=y)<<endl;
    cout<<(x > y)<<endl;
    cout<<(x < y)<<endl;
}