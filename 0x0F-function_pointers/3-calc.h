#ifndef CALC_H
#define CALC_H

/*
 * Desc: a header file for calculation
 */

/**
 * struct op - A struct op.
 * @op: defines the operator.
 * @f: deines the function pointer.
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);

#endif
