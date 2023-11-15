#include "testlib.h"

void test_ft_isalpha(char c, char *str)
{
    if (ft_isalpha(c))
        printf(BLUE"'%c' is an alphabetic."RESET, c);
    else
        printf(BLUE"'%c' is not an alphabetic."RESET, c);
    printf(GREEN"\t|=> %s\n"RESET,str);
}

void test_ft_isdigit(char c, char *str)
{
    if (ft_isdigit(c))
        printf(BLUE"'%c' is a digit."RESET, c);
    else
        printf(BLUE"'%c' is not a digit."RESET, c);
    printf(GREEN"\t|=> %s\n"RESET,str);
}

void test_ft_isalnum(char c, char *str)
{
    if (ft_isalnum(c))
        printf(BLUE"'%c' is an alphanumeric."RESET, c);
    else
        printf(BLUE"'%c' is not an alphanumeric."RESET, c);
    printf(GREEN"\t|=> %s\n"RESET,str);
}

void test_ft_isascii(int c, char *str)
{
    if (ft_isascii(c))
        printf(BLUE"'%c' is an ASCII."RESET, c);
    else
        printf(BLUE"'%c' is not an ASCII."RESET, c);
    printf(GREEN"\t|=> %s\n"RESET,str);
}

void test_ft_isprint(int c, char *str)
{
    if (ft_isprint(c))
        printf(BLUE"'%c' is a printable."RESET, c);
    else
        printf(BLUE"'%c' is not a printable."RESET, c);
    printf(GREEN"\t|=> %s\n"RESET,str);
}

void main_ft_isfunctions()
{
	printf(RED"\nRunning main_ft_isfunctions...\n"RESET);
    printf(ORANGE"Running test_ft_isalpha...\n"RESET);
    test_ft_isalpha('a', "'a' is an alphabetic.");
    test_ft_isalpha('Z', "'Z' is an alphabetic.");
    test_ft_isalpha('1', "'1' is not an alphabetic.");
    test_ft_isalpha('!', "'!' is not an alphabetic.");
    test_ft_isalpha(' ', "' ' is not an alphabetic.");

    printf(ORANGE"Running test_ft_isdigit...\n"RESET);
    test_ft_isdigit('1', "'1' is a digit.");
    test_ft_isdigit('0', "'0' is a digit.");
    test_ft_isdigit('9', "'9' is a digit.");
    test_ft_isdigit('a', "'a' is not a digit.");
    test_ft_isdigit(' ', "' ' is not a digit.");

    printf(ORANGE"Running test_ft_isalnum...\n"RESET);
    test_ft_isalnum('1', "'1' is an alphanumeric.");
    test_ft_isalnum('a', "'a' is an alphanumeric.");
    test_ft_isalnum('Z', "'Z' is an alphanumeric.");
    test_ft_isalnum('!', "'!' is not an alphanumeric.");
    test_ft_isalnum(' ', "' ' is not an alphanumeric.");

    printf(ORANGE"Running test_ft_isascii...\n"RESET);
    test_ft_isascii('a', "'a' is an ASCII.");
    test_ft_isascii(128, "' ' is not an ASCII.");
    test_ft_isascii(127, "' ' is an ASCII.");
    test_ft_isascii(0,   "' ' is an ASCII.");
    test_ft_isascii(' ', "' ' is an ASCII.");

    printf(ORANGE"Running test_ft_isprint...\n"RESET);
    test_ft_isprint('a', "'a' is a printable.");
    test_ft_isprint(31,  "' ' is not a printable.");
    test_ft_isprint(32,  "' ' is a printable.");
    test_ft_isprint(126, "'~' is a printable.");
    test_ft_isprint(127, "' ' is not a printable.");
}
