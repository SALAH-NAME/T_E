#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_count_words(const char *str, char c)
{
	int count;
	int i;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] == c)
			i++;
		if (str[i])
		{
			count++;
			while (str[i] && str[i] != c)
				i++;
		}
	}
	return (count);
}

char **ft_clear(char **arr, int n)
{
	int i;

	i = 0;
	while (arr[i] && i < n)
		free(arr[i++]);
	free(arr);
	return (NULL);
}

char	*ft_strndup(char const *src, int size)
{
	char	*dest;
	int		i;
	dest = (char *)malloc(sizeof(char) * (size + 1));
	if (!dest)
		return (NULL);
	i = 0;
	while (src[i] && i < size)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char **ft_core(char **split,const char *str,char c, int words)
{
	int start;
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < words)
	{
		while (str[j] == c)
			j++;
		start = j;
		while (str[j] && str[j] != c)
			j++;
		split[i] = ft_strndup(str + start, j - start);
		if (!split[i])
			return ft_clear(split, i);
		i++;
	}
	split[words] = NULL;
	return split;
}

char	**ft_split(char const *str, char c)
{
	int words;
//	int start;
	char **split;
//	int i;
//	int j;

	if (!str)
		return (NULL);
	words = ft_count_words(str, c);
	split = (char **)malloc(sizeof(char *) * (words + 1));
	if (!split)
		return (NULL);
//	i = 0;
//	j = 0;
//	while (i < words)
//	{
//		while (str[j] == c)
//			j++;
//		start = j;
//		while (str[j] && str[j] != c)
//			j++;
//		split[i] = ft_strndup(str + start, j - start);
//		if (!split[i])
//			return ft_clear(split, i);
//		i++;
//	}
//	split[words] = NULL;
	ft_core(split, str, c, words);
	return (split);
}


void test_ft_split(char const *s, char c)
{
    char **strs = ft_split(s, c);
    if (strs)
    {
        printf("Splitting \"%s\" by '%c' gives:\n", s, c);
        for (size_t i = 0; strs[i]; i++)
        {
            printf("\"%s\"\n", strs[i]);
            free(strs[i]);
        }
        free(strs);
    }
    else
    {
        printf("Cannot split \"%s\" by '%c' (NULL returned)\n", s, c);
    }
}

int main()
{
    test_ft_split("Hello World", ' '); // "Hello", "World"
    test_ft_split("", ' '); // "" // or nothing
    test_ft_split("Hello World", 'H'); // "", "ello World"
    test_ft_split("Hello World", 'd'); // "Hello Worl", ""
    test_ft_split(NULL, ' '); // NULL

    return 0;
}

