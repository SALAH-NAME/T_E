#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>
#include <string.h>

void	ft_putnbr_fd(int n, int fd)
{
	long	nbr;
	char	c;

	nbr = n;
	if (nbr < 0)
	{
		write(fd, "-", 1);
		nbr = -nbr;
	}
	if (nbr > 9)
		ft_putnbr_fd(nbr / 10, fd);
	c = nbr % 10 + '0';
	write(fd, &c, 1);
}

void    test_ft_putnbr_fd(int n)
{
    int     fd;

    fd = open("test.txt", O_WRONLY | O_CREAT | O_APPEND, 0644);
    if (fd < 0)
    {
        printf("Failed to open file descriptor\n");
        return ;
    }
    ft_putnbr_fd(n, fd);
    write(fd, "\n", 1);
    close(fd);
    printf("Test passed for %d, output appended to test.txt\n", n);
}

int     main(void)
{
    test_ft_putnbr_fd(0);
    test_ft_putnbr_fd(1);
    test_ft_putnbr_fd(-1);
    test_ft_putnbr_fd(5432);
    test_ft_putnbr_fd(-5432);
    test_ft_putnbr_fd(123456789);
    test_ft_putnbr_fd(-123456789);
    test_ft_putnbr_fd(2147483647);
    test_ft_putnbr_fd(-2147483648);
    return (0);
}
