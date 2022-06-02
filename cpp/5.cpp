#include<iostream>
using namespace std;
int add(int a,int b)
{
    return a+b;
}
int main()
{
    int x=add(10,20);
    std::cout<<x;
    return 0;
}