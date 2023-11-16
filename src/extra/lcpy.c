#include <stdio.h>
#include <stdlib.h>
#include <string.h>



size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (src[i] && (i < size - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	while (src[i] != '\0')
	{
		i++;
	}
	return (i);
}




int main() {
    char src[50] = "Hello, World!";
    char dest[50];

    // Copy src to dest
    strlcpy(dest, src, sizeof(dest));

    printf("Copied string: %s\n", dest);

    return 0;
}

