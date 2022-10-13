#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

typedef __SIZE_TYPE__ size_t;

void print_name(char *name, void (*f)(char *));

#endif
