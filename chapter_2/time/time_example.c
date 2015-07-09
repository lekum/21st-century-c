#include <stdio.h>
#include <time.h>

int main()
{
    time_t time_buffer;
    struct tm *local_time;

    time(&time_buffer);
    local_time = localtime(&time_buffer);
    printf("Local time: %s", asctime(local_time));
}
