// utils.c
// Author: Sébastien Combéfis
// Version: November 27, 2016

#include "utils.h"

int fact (int n)
{
    int i, result;
    
    result = 1;
    for (i = 1; i <= n; i++)
    {
        result *= i;
    }
    return result;
}

int power2 (int n)
{
    int i, result;
    
    result = 1;
    for (i = 0; i < n; i++)
    {
        result *= 2;
    }
    return result;
}
