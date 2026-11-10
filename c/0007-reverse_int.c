#include <limits.h>
#include <stdlib.h>

int reverse(int x)
{
    int inverted;
    int temp;
    int digit;

    inverted = 0;
    temp = x;
    while(temp != 0)
    {
        digit = temp % 10;
        if (x > 0)
        {
           if (inverted > INT_MAX / 10 ||
            (inverted == INT_MAX / 10) && digit > 7) 
                return (0);
        }   
        else if (x < 0)
        {
            if (inverted < (INT_MIN / 10) ||
            (inverted == (INT_MIN / 10) && digit < -8))
            return (0);
        }
        inverted = (inverted * 10) + digit;
        temp = temp / 10;
    }
    return (inverted);
}