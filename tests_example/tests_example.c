#include <glib.h>
#include <stdio.h>
#include "sum.h"

void test_sum1()
{
    g_assert(5 == sum(2,3));
}

void test_sum2()
{
    g_assert(1 == sum(-1,2));
}

int main(int argc, char **argv)
{
    g_test_init(&argc, &argv, NULL);
    g_test_add_func("/set1/sum1 test", test_sum1);
    g_test_add_func("/set1/sum2 test", test_sum2);
    return g_test_run();
}
