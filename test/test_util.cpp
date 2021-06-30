#include "acutest.h"

#include "util.hpp"

void test_add(void)
{
    TEST_CHECK(add(10, 20) == 10 + 20);
}

void test_sub(void)
{
    TEST_CHECK(sub(10, 20) == 10 - 20);
}

void test_mult(void)
{
    TEST_CHECK(mult(10, 20) == 10 * 20);
}

TEST_LIST = {
    {"add", test_add},
    {"sub", test_sub},
    {"mult", test_mult},
    {NULL, NULL}
};


