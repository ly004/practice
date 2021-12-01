#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
char* my_strcpy(char* des, const char * src);
char* (*pf)(char*, const char*) = &my_strcpy;
char* (*pfArr[4])(char*, const char*) = { my_strcpy };