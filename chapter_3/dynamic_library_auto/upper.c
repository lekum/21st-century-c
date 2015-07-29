#include <upper.h>
#include <ctype.h>

void to_upper(char *buf, const char *original)
{
    const char *p = original;
    char *q = buf;
    while (*p != '\0')
    {
        *q = toupper(*p);
        p++,q++;

    }
    *q = '\0';
}
