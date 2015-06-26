// Determine the maximum of a number of positive integers.
// Parameters: a variable number of positive values of
// type unsigned int. The last argument must be 0.
// Return value: the maximum of the arguments
#include <stdarg.h>
#include <stdio.h>

unsigned int max( unsigned int first, ... )
{
    unsigned int maxarg, arg;
    va_list arglist;
    va_start( arglist, first ); // Set arglist to deliver
    arg = maxarg = first;
    while ( arg != 0 )
    {
        arg = va_arg( arglist, unsigned );// Get an argument
        if ( arg > maxarg ) maxarg = arg;
    }
    va_end( arglist );
    return maxarg;
}

int main()
{
    printf("Max: %i\n", max(1,5,3));
}
