#include <iostream>

bool isPrimeNumber(int number)
{
    for (int i = 2; i < number; i++)
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
    for (int i = 1; i <= userInput; i++)
    {
        bool isPrime = isPrimeNumber(i);
        if (isPrime)
        {
            std::cout << i << " is a prime number\n";
        }
    }

    return 0;
}
