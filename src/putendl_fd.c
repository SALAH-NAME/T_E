#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <string.h>

void	ft_putendl_fd(char *s, int fd)
{
	size_t	len;

	if (s)
	{
		len = strlen(s);
		write(fd, s, len);
		write(fd, "\n", 1);
	}
}

int main(void)
{
	int fd;
	fd = open("test.txt", O_WRONLY | O_CREAT);
	ft_putendl_fd("HELLO FROM THE FILE", fd);
	close(fd);
	return 0;
}
