#include <stdio.h>
#include "unity/unity.h"
#include "test_operations.h"

int main() {
    printf("Hello, World!\n");

    UNITY_BEGIN();
    RUN_TEST(test_Addition);
    RUN_TEST(test_Substraction);
    return UNITY_END();
}