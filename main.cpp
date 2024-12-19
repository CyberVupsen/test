#include <iostream>

int main()
try
{
    std::cout << "Привет!\n";
    return 0;
}
catch(...)
{
    return -1;
}