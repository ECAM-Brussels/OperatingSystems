// utils.c
// Author: Sébastien Combéfis
// Version: November 27, 2016

#include "utils.h"

int fact (int n)
{
    if (n == 0)
        return 1;
    return n * fact(n-1);
}

int power2 (int n)
{
    if (n == 0)
        return 1;
    return 2 * power2(n-1);
}
