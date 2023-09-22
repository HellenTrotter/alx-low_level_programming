#include "lists.h"

void before(void)__attribute__ ((constructor));

/**
 * before - a function that prints a message before main
 * Return: 0 (success)
 */

void before(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");

}
