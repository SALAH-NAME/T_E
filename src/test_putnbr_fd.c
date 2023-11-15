#include "testlib.h"

void test_ft_putnbr_fd(int n, int fd, char *expected)
{
    ft_putnbr_fd(n, fd);
    if (fd >= 0)
    {
        printf(BLUE" %d has been written to the fd %d\n"RESET, n, fd);
    }
    else
    {
        printf(BLUE"Invalid fd %d\n"RESET, fd);
    }
    printf(GREEN"\t|=> %s\n"RESET, expected);
}

void main_test_putnbr_fd()
{
    int fd;
    char buffer[1024];
    ssize_t bytes_read;

    printf(RED"\nRunning main_test_putnbr_fd...\n"RESET);

    printf(ORANGE"Running test_ft_putnbr_fd...\n"RESET);
    fd = open("file_nbr", O_WRONLY | O_CREAT, 0666);
    if (fd >= 0)
    {
        test_ft_putnbr_fd(0, fd, "'0' has been written to the fd");
        ft_putchar_fd('\n', fd);
        test_ft_putnbr_fd(1, fd, "'1' has been written to the fd");
        ft_putchar_fd('\n', fd);
        test_ft_putnbr_fd(-1, fd, "'-1' has been written to the fd");
        ft_putchar_fd('\n', fd);
        test_ft_putnbr_fd(5432, fd, "'5432' has been written to the fd");
        ft_putchar_fd('\n', fd);
        test_ft_putnbr_fd(-5432, fd, "'-5432' has been written to the fd");
        ft_putchar_fd('\n', fd);
        test_ft_putnbr_fd(123456789, fd, "'123456789' has been written to the fd");
        ft_putchar_fd('\n', fd);
        test_ft_putnbr_fd(-123456789, fd, "'-123456789' has been written to the fd");
        ft_putchar_fd('\n', fd);
        test_ft_putnbr_fd(2147483647, fd, "'2147483647' has been written to the fd");
        ft_putchar_fd('\n', fd);
        test_ft_putnbr_fd(-2147483648, fd, "'-2147483648' has been written to the fd");
        close(fd);
    }

    printf(ORANGE"\nReading from file_nbr...\n"RESET);
    fd = open("file_nbr", O_RDONLY);
    if (fd >= 0)
    {
        bytes_read = read(fd, buffer, sizeof(buffer) - 1);
        if (bytes_read >= 0)
        {
            buffer[bytes_read] = '\0';
            printf(GREEN"Contents of file_nbr: \n%s\n$\n"RESET, buffer);
        }
        else
        {
            printf(RED"Error reading from file_nbr\n"RESET);
        }
        close(fd);
    }
    else
    {
        printf(RED"Error opening file_nbr for reading\n"RESET);
    }
}