#include <iostream>

using namespace std;

int main() 
{
    bool wantsToCheck = true;
    string wantsToCheckString;

    while (wantsToCheck)
    {
        int number;
        bool isPrime = true;
        cout << "Enter a number to check: ";
        cin >> number;

        if (number <= 1)
            isPrime = false;
        
        for (int i = 2; i <= number/2; i++)
        {
            if(number%i == 0)
                isPrime = false;
        }
        if (isPrime)
            cout << "The number is prime." << endl;
        else
            cout << "The number is not prime." << endl;
        
        cout << "Execute check again (yes/no): ";
        cin >> wantsToCheckString;
        wantsToCheck = (wantsToCheckString == "yes");
        
    }
    
    return 0;
}
