#include <stdio.h>

void readFile(char *filepath)
{
    int c = 0;
    FILE *f = fopen(filepath, "rb");

    if (f)
    {
        while ((c = getc(f)) != EOF)
            putchar(c);
        fclose(f);
    }
    else
    {
        printf("file '%s' was not found", filepath);
    }
}

int main(int argc, char **argv)
{
    char fpath;
    if (argc > 1)
    {
        printf("filepath: '%s'\n", argv[1]);
        readFile(argv[1]);
    }
    else
    {
        printf("usage: %s <filepath>\n", argv[0]);
    }

    return 0;
}
