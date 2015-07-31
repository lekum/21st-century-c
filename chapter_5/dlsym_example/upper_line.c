#include <stdio.h>
#include <dlfcn.h>

int main()
{
    char original_line[81];
    char new_line[81];
    void *handle = dlopen("./upper.so", RTLD_LAZY);
    if (!handle)
    {
        fprintf(stderr, "Failed to load upper.so: %s\n", dlerror());
        return 1;
    }
    void (*to_upper)(char *, const char *);
    to_upper = dlsym(handle, "to_upper");
    puts("Please enter a line:");
    fgets(original_line, 81, stdin);
    to_upper(new_line, original_line);
    printf("\nUppercase version of the line:\n%s\n", new_line);
    return 0;
}
