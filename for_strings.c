#include "shell.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strncpy - Copies a string.
 * @dest: The string destination.
 * @src: The string to be copied.
 * @n: The string length.
 * 
 * Return: dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i  ; i < n &&
