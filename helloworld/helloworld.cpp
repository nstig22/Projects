#include <iostream>

int addTwoIntegers(int a, int b){
    return a + b;
}

int main()
{
    int a = 0;
    int b = 0;

    std::cout << "Hello World" << std::endl;

    std::cout << "Pleas input two integers:";
    std::cin >> a >> b;

    std::cout << addTwoIntegers(a, b);


}