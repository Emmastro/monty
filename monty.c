#include "monty.h"

int main(int argc, char const *argv[])
{
    ssize_t n;

    if (argc != 2)
    {
        dprintf(2, "Usage: %s filename\n", argv[0]);
        exit(1);
    }
    n = read_textfile(argv[1], 114);
    printf("\n(printed chars: %li)\n", n);
    n = read_textfile(argv[1], 1024);
    printf("\n(printed chars: %li)\n", n);
    return (0);
}
