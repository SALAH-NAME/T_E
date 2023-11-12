#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

void test_ft_putchar_fd(char c, int fd)
{
    ft_putchar_fd(c, fd);
    if (fd >= 0)
    {
        printf(" '%c' has been written to the fd %d\n", c, fd);
    }
    else
    {
        printf("Invalid fd %d\n", fd);
    }
}

int main()
{
    int fd;

    fd = open("test.txt", O_WRONLY | O_CREAT);
    if (fd >= 0)
    {
        test_ft_putchar_fd('A', fd);
        close(fd);
    }

    test_ft_putchar_fd('B', STDOUT_FILENO);
    test_ft_putchar_fd('C', STDERR_FILENO);
    test_ft_putchar_fd('D', -1);

    return 0;
}

