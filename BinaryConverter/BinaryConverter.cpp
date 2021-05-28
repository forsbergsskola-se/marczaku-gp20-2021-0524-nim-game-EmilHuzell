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
    
    while (number >> divisions > 0) {
        std::cout << (number >> divisions);
        std::cout << 1;
        divisions++;
    }
    
}
int main()
{
    binaryConverter();
    binaryConverter2();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
