#include <upper.h>
#include <stdio.h>

int main()
{
    char line[81];
    char new_line[81];
    puts("Please enter a string:");
    fgets(line, 81, stdin);
    to_upper(new_line, line);
    printf("To upper: %s\n", new_line);
    return 0;
}
