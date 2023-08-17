#include "main.h"
#include <stdio.h>
/**
 * main - entry point
 * Return: 0 (success)
 */
void positive_or_negative(int i)
{
        if (i > 0)
                printf("%d is positive\n", i);
        else if (i == 0)
                printf("%d is zero\n", i);
        else if (i < 0)
                printf("%d is negative\n", i);
        printf("\n");

       	return (0);
}
