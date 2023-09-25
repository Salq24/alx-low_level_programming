#include "main.h"
/**
*_islower - A function that checks for
*lower case characters
*c: character 
*Return: 1 if c is lowercase, else, 0
*/

int _islower(int c)

{
        if (c >= 97 && c <= 122)
        {
       return (1);
        }
       return (0);
}
