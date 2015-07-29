#include <upper.h>
#include <stdio.h>

int main()
{
    char original_line[81];
    char new_line[81];
    puts("Please enter a line:");
    fgets(original_line, 81, stdin);
    to_upper(new_line, original_line);
    printf("\nUppercase version of the line:\n%s\n", new_line);
    return 0;
}
