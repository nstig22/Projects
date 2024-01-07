#include <iostream>
#include <string>

int addTwoIntegers(int a, int b){
    return a + b;
}

int main()
{
    int a = 0;
    int b = 0;

    std::string name = "test";

    std::cout << "Hello World" << std::endl;

    std::cout << "Pleas input two integers:";
    std::cin >> a >> b;

    std::cout << "The sum of " << a << " and " << b << " is " << addTwoIntegers(a, b) << std::endl;

    std::cout << "Please enter your name:";
    std::cin.ignore();
    std::getline(std::cin, name);
    std::cout << std::endl << "Hello " << name << std::endl;
}