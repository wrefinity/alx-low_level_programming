#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - selects the operation type.
 * @s: defines the operator.
 *
 * Return: an operator else null.
 */
int (*get_op_func(char *s))(int, int)
{
	int index = 0;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	while (ops[index].op != NULL && *(ops[index].op) != *s)
		index++;

	return (ops[index].f);
}

