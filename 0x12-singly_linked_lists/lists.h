#ifndef HEADER
#define HEADER LIST_H
#include <stdio.h>
#include <stdarg.h>

int _putchar(char c);
char *_strdup(const char *str);
int _strlen(const char *s);

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */

typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;

#endif
