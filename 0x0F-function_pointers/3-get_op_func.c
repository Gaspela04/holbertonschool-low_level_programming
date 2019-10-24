#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * get_op_func - Function to perform the operation a parameter.
 * @s: Value passed argument for arg.
 * Return: Pointer to funtion.
 */
int (*get_op_func(char *s))(int, int)
{

op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};


