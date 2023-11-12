#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <string.h>

void	ft_putstr_fd(char *s, int fd)
{
	if (s)
	{
		write(fd, s, strlen(s));
	}
}


int main(void)
{
	int fd;
	fd = open("test.txt", O_WRONLY | O_CREAT);
	ft_putstr_fd(NULL, fd);
	close(fd);
	return 0;
}
