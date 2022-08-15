#ifndef _CALC_H
#define _CALC_H_

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<errno.h>
#define GETLINE_MINSIZE 16




void sum(int a, int b);
void minus(int a, int b);
void dive(int a, int b);
void times(int a, int b);
int _getline(char **lineptr, size_t *n, FILE *fp);
char *get_input();

#endif