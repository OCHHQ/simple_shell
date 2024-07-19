/* src/main.c */

#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    print_hello();
    return (0);
}

/**
 * print_hello - Prints a hello message
 */
void print_hello(void)
{
    printf("Hello, Simple Shell!\n");
}
