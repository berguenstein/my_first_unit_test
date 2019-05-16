#include "test_operations.h"
#include "../HW_behaviour/operations.h"

void test_Addition(void)
{
    TEST_ASSERT_EQUAL_INT(40, add(10,30));
    TEST_ASSERT_EQUAL_INT(40, add(-10,50));
    TEST_ASSERT_EQUAL_INT(40, add(300,-260));
}

void test_Substraction(void)
{
    TEST_ASSERT_EQUAL_INT(40, sub(50,10));
    TEST_ASSERT_EQUAL_INT(40, sub(50,10));
    TEST_ASSERT_EQUAL_INT(-10,sub(50,60));
    TEST_ASSERT_EQUAL_INT(-10,sub(-5,5));
}