#include "lists.h"
/**
 *thisbeforemain - function that prints You're beat! and yet, you must allow,
 *\nI bore my house upon my back!\n before the main function is executed.
 *
 *Return: 0
 */
void __attribute__((constructor)) thisbeforemain(void);
void thisbeforemain(void)
{
	printf("You're beat! and yet, you must allow,\n"
	       "I bore my house upon my back!\n");
}
