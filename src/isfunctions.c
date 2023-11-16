#include "testlib.h"

void test_ft_isalpha(char c, char *str)
{
    if (ft_isalpha(c))
        printf(BLUE"'%c' is an alphabetic.\n"RESET, c);
    else
        printf(BLUE"'%c' is not an alphabetic.\n"RESET, c);
    printf(GREEN"\t|=> %s\n"RESET,str);
}

void test_ft_isdigit(char c, char *str)
{
    if (ft_isdigit(c))
        printf(BLUE"'%c' is a digit.\n"RESET, c);
    else
        printf(BLUE"'%c' is not a digit.\n"RESET, c);
    printf(GREEN"\t|=> %s\n"RESET,str);
}

void test_ft_isalnum(char c, char *str)
{
    if (ft_isalnum(c))
        printf(BLUE"'%c' is an alphanumeric.\n"RESET, c);
    else
        printf(BLUE"'%c' is not an alphanumeric.\n"RESET, c);
    printf(GREEN"\t|=> %s\n"RESET,str);
}

void test_ft_isascii(int c, char *str)
{
    if (ft_isascii(c))
        printf(BLUE"'%c' is an ASCII.\n"RESET, c);
    else
        printf(BLUE"'%c' is not an ASCII.\n"RESET, c);
    printf(GREEN"\t|=> %s\n"RESET,str);
}

void test_ft_isprint(int c, char *str)
{
    if (ft_isprint(c))
        printf(BLUE"'%c' is a printable.\n"RESET, c);
    else
        printf(BLUE"'%c' is not a printable.\n"RESET, c);
    printf(GREEN"\t|=> %s\n"RESET,str);
}

void main_ft_isfunctions()
{
	printf(RED"\nRunning main_ft_isfunctions...\n"RESET);
    printf(ORANGE"Running test_ft_isalpha...\n"RESET);
    test_ft_isalpha('a', "'a' is an alphabetic.");
    test_ft_isalpha('Z', "'Z' is an alphabetic.");
    test_ft_isalpha('1', BR"'1' is not an alphabetic."RESET);
    test_ft_isalpha('!', BR"'!' is not an alphabetic."RESET);
    test_ft_isalpha(' ', BR"' ' is not an alphabetic."RESET);

    printf(ORANGE"Running test_ft_isdigit...\n"RESET);
    test_ft_isdigit('1', "'1' is a digit.");
    test_ft_isdigit('0', "'0' is a digit.");
    test_ft_isdigit('9', "'9' is a digit.");
    test_ft_isdigit('a', BR"'a' is not a digit."RESET);
    test_ft_isdigit(' ', BR"' ' is not a digit."RESET);

    printf(ORANGE"Running test_ft_isalnum...\n"RESET);
    test_ft_isalnum('1', "'1' is an alphanumeric.");
    test_ft_isalnum('a', "'a' is an alphanumeric.");
    test_ft_isalnum('Z', "'Z' is an alphanumeric.");
    test_ft_isalnum('!', BR"'!' is not an alphanumeric."RESET);
    test_ft_isalnum(' ', BR"' ' is not an alphanumeric."RESET);

    printf(ORANGE"Running test_ft_isascii...\n"RESET);
    test_ft_isascii('a', "'a' is an ASCII.");
    test_ft_isascii(128, BR"' ' is not an ASCII."RESET);
    test_ft_isascii(127, "' ' is an ASCII.");
    test_ft_isascii(0,   "' ' is an ASCII.");
    test_ft_isascii(' ', "' ' is an ASCII.");

    printf(ORANGE"Running test_ft_isprint...\n"RESET);
    test_ft_isprint('a', "'a' is a printable.");
    test_ft_isprint(31,  BR"' ' is not a printable."RESET);
    test_ft_isprint(32,  "' ' is a printable.");
    test_ft_isprint(126, "'~' is a printable.");
    test_ft_isprint(127, BR"' ' is not a printable."RESET);
}
