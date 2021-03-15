#include <iostream>
#include <fstream>
#include <cmath>

bool isPrimeNumber(int number)
{
    for (int i = 2; i < ceil(sqrt(number)); i++)
    {
        if (number % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int userInput = 1;
    std::cout << "Number: ";
    std::cin >> userInput;

    std::ofstream PrimeNumbersFile("Prime_numbers.txt");

    for (int i = 1; i <= userInput; i++)
    {
        bool isPrime = isPrimeNumber(i);
        if (isPrime)
        {
            std::cout << i << " is a prime number\n";
            PrimeNumbersFile << i << " is a prime number\n";
        }
    }

    PrimeNumbersFile.close();

    return 0;
}
