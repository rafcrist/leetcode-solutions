#include <limits.h>

int myAtoi(char* s)
{
    int i;
    int result;
    int sign;

    i = 0;
    result = 0;
    sign = 1;
    while (s[i] == ' ')
        i++;
    if (s[i] == '-' || s[i] == '+')
    {
        if (s[i] == '-')
            sign = -1;
        i++;
    }
    while (s[i] == '0')
        i++;
    while (s[i] >= '0' && s[i] <= '9')
    {
        if (sign == 1)
        {
            if (result > INT_MAX / 10 || 
                (result == INT_MAX / 10 && s[i] > '7')) 
                return (INT_MAX);
        }
        else if (sign == -1)
        {
           if (result > (INT_MIN / 10) * sign ||
           (result == (INT_MIN / 10)* sign && s[i] >= '8'))
                return(INT_MIN);
        }

        result = result * 10 + (s[i] - '0');
        i++;
    }
    return (result * sign);
}