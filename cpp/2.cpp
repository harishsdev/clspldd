//type identifier (initial_value);
#include<iostream>
using namespace std;
int main()
{
    int a=10;
    int b(4);
    int c{5};
    std::cout<<a;
    std::cout<<b;
    std::cout<<c;
    return 0;
}