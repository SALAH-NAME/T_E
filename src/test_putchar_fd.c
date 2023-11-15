#include "testlib.h"

void test_ft_putchar_fd(char c, int fd, char *expected)
{
    ft_putchar_fd(c, fd);
    if (fd >= 0)
    {
        printf(BLUE" '%c' has been written to the fd %d\n"RESET, c, fd);
    }
    else
    {
        printf(BLUE"Invalid fd %d\n"RESET, fd);
    }
    printf(GREEN"\t|=> %s\n"RESET, expected);
}


void main_test_putchar_fd()
{
    int fd;
    char buffer[1024];
    ssize_t bytes_read;

    printf(RED"\nRunning main_test_putchar_fd...\n"RESET);

    printf(ORANGE"Running test_ft_putchar_fd...\n"RESET);
    fd = open("file_char", O_WRONLY | O_CREAT, 0666);
    if (fd >= 0)
    {
        test_ft_putchar_fd('A', fd, "'A' has been written to the fd");
        close(fd);
    }

    printf(ORANGE"\nReading from file_char...\n"RESET);
    fd = open("file_char", O_RDONLY);
    if (fd >= 0)
    {
        bytes_read = read(fd, buffer, sizeof(buffer) - 1);
        if (bytes_read >= 0)
        {
            buffer[bytes_read] = '\0';
            printf(GREEN"Contents of file_char:\n%s\n$\n"RESET, buffer);
        }
        else
        {
            printf(RED"Error reading from file_char\n"RESET);
        }
        close(fd);
    }
    else
    {
        printf(RED"Error opening file_char for reading\n"RESET);
    }
}
