#include <stdbool.h>
#include <limits.h>

bool isPalindrome(int x)
{
    int inverted;
    int temp;
    int digit;
    
    if (x < 0)
        return(false);
    temp = x;
    inverted = 0;
    while (temp > 0)
    {
        digit = temp % 10;
        if (inverted > (INT_MAX - digit) / 10)
            return (false);
        inverted = (inverted * 10) + digit;
        temp = temp / 10;
    }
    if (x == inverted)
        return (true);  
    else
        return (false);
}