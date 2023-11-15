#include "testlib.h"

void test_ft_putendl_fd(char *s, int fd, char *expected)
{
    ft_putendl_fd(s, fd);
    if (fd >= 0)
    {
        printf(BLUE" \"%s\\n\" has been written to the fd %d\n"RESET, s, fd);
    }
    else
    {
        printf(BLUE"Invalid fd %d\n"RESET, fd);
    }
    printf(GREEN"\t|=> %s\n"RESET, expected);
}

void main_test_putendl_fd()
{
    int fd;
    char buffer[1024];
    ssize_t bytes_read;

    printf(RED"\nRunning main_test_putendl_fd...\n"RESET);

    printf(ORANGE"Running test_ft_putendl_fd...\n"RESET);
    fd = open("file_endl", O_WRONLY | O_CREAT, 0666);
    if (fd >= 0)
    {
        test_ft_putendl_fd("Hello, world!", fd, "'Hello, world!\\n' has been written to the fd");
        close(fd);
    }

    printf(ORANGE"\nReading from file_str...\n"RESET);
    fd = open("file_str", O_RDONLY);
    if (fd >= 0)
    {
        bytes_read = read(fd, buffer, sizeof(buffer) - 1);
        if (bytes_read >= 0)
        {
            buffer[bytes_read] = '\0';
            printf(GREEN"Contents of file_str: \n%s\n$\n"RESET, buffer);
        }
        else
        {
            printf(RED"Error reading from file_str\n"RESET);
        }
        close(fd);
    }
    else
    {
        printf(RED"Error opening file_str for reading\n"RESET);
    }
}
