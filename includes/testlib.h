#ifndef	LIBTEST_H
#define	LIBTEST_H

#define ORANGE "\x1B[93m"
#define GREEN "\x1B[92m"
#define BLUE "\x1B[94m"
#define RED "\x1B[91m"
#define BR "\x1b[95m"
#define PP "\x1b[152m"
#define RESET "\x1B[0m"

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <limits.h>
#include <assert.h>
#include <fcntl.h>
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

void main_test_strtrim();
void test_ft_strtrim(char const *s1, char const *set, char *expected);

void main_test_split();
void test_ft_split(char const *s, char c, char *expected);

void main_test_itoa();
void test_ft_itoa(int n, char *expected);

void main_test_strmapi();
void test_ft_strmapi(char const *s, char (*f)(unsigned int, char), char *expected);

void main_test_striteri();
void test_ft_striteri(char *s, char *expected);

void main_test_putchar_fd();
void test_ft_putchar_fd(char c, int fd, char *expected);

void main_test_putstr_fd();
void test_ft_putstr_fd(char *s, int fd, char *expected);

void main_test_putendl_fd();
void test_ft_putendl_fd(char *s, int fd, char *expected);

void main_test_putnbr_fd();
void test_ft_putnbr_fd(int n, int fd, char *expected);




void main_test_lstnew();
void test_ft_lstnew(void *content, t_list *expected);

void main_test_lstadd_front();
void test_ft_lstadd_front(t_list **lst, t_list *new, char *expected);

void main_test_lstsize();
void test_ft_lstsize(t_list **lst, int expected);

void main_test_lstlast();
void test_ft_lstlast(t_list **lst, char *expected);

void main_test_lstadd_back();
void test_ft_lstadd_back(t_list **lst, t_list *new, char *expected);

void main_test_lstdelone();
void test_ft_lstdelone(t_list **lst, void (*del)(void *), char *expected);

void main_test_lstclear();
void test_ft_lstclear(t_list **lst, void (*del)(void *));

void main_test_lstiter();
void test_ft_lstiter(t_list *lst, void (*f)(void *), char *expected);

void main_test_lstmap();
void test_ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *), char **expected);



void del(void *content);
void modify_content(void *content);
void *to_upper(void *content);


#endif
