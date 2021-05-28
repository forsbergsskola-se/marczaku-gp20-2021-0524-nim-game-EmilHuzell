// BinaryConverter.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
//prints binary sequence of a number
void binaryConverter() {

    int number;
    std::cin >> number;
    std::cout << "0b";
    if (number < 0) {
        std::cout << "1";
    }
    else {
        std::cout << "0";
    }
        for (int i = 7; i >= 0; i--) 
        {
            if (pow(2, i) <= number) {
                std::cout << "1";
                number -= pow(2, i);
            }
            else {
                std::cout << "0";
            }
        }
    

}
void binaryConverter2(){
    int number;
    std::cin >> number;
    int divisions = 0;
    std::cout << "0b";
    while (number > 0) {
        if (number & 1) {
            std::cout << 1;
        }
        else {
            std::cout << 0;
        }
        divisions++;
        number = number >> 1;
    }
    
    
}
int main()
{
    binaryConverter();
    binaryConverter2();
}


