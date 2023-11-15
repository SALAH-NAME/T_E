#ifndef	LIBTEST_H
#define	LIBTEST_H

#define ORANGE "\x1B[93m"
#define GREEN "\x1B[92m"
#define BLUE "\x1B[94m"
#define RED "\x1B[91m"
#define RESET "\x1B[0m"

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <assert.h>
#include "./libft.h"


void main_ft_isfunctions();
void test_ft_isalpha(char c, char *str);
void test_ft_isdigit(char c, char *str);
void test_ft_isalnum(char c, char *str);
void test_ft_isascii(int c, char *str);
void test_ft_isprint(int c, char *str);

void main_ft_memfunctions();
void test_ft_memset(char *start, char *from, int c, size_t n, char *expected);
void test_ft_bzero(char *start, char *from, size_t n, char *expected);
void test_ft_memcpy(char *dest, const char *src, size_t n, char *expected);
void test_ft_memmove(char *start, char *dest, const char *src, size_t n, char *expected);
void test_ft_memchr(const void *s, int c, size_t n, char *expected);
void test_ft_memcmp(const void *s1, const void *s2, size_t n, char *expected);

void main_ft_strfunctions();
void test_ft_strnstr(const char *haystack, const char *needle, size_t len, char *expected);
void test_ft_strlen(const char *s, char *expected);
void test_ft_strncmp(const char *s1, const char *s2, size_t n, char *expected);
void test_ft_strrchr(const char *s, int c, char *expected);
void test_ft_strchr(const char *s, int c, char *expected);

void main_ft_tofunctions();
void test_ft_tolower(int c, char *expected);
void test_ft_toupper(int c, char *expected);

void main_ft_strlfunctions();
void test_ft_strlcpy(char *dst, const char *src, size_t dstsize, char *expected);
void test_ft_strlcat(char *dst, const char *src, size_t dstsize, char *expected);

void main_ft_mallfunctions();
void test_ft_strdup(const char *s, char *expected);
void test_ft_calloc(size_t nmemb, size_t size, char *expected);

void main_test_atoi();
void test_ft_atoi(const char *str, int expected);

void main_test_substr();
void test_ft_substr(char const *s, unsigned int start, size_t len, char *expected);

void main_test_strjoin();
void test_ft_strjoin(char const *s1, char const *s2, char *expected);

#endif
