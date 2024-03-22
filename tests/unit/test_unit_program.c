#include <logic.h>
#include <unity.h>

void test_div(void)
{
    TEST_ASSERT_EQUAL(3, div(6, 2));
    TEST_ASSERT_EQUAL(-1, div(5, 0));
    TEST_ASSERT_EQUAL(0, div(0, 3));
    TEST_ASSERT_EQUAL(3, div(7, 2));
}

void test_mul(void)
{
    TEST_ASSERT_EQUAL(6, mul(3, 2));
    TEST_ASSERT_EQUAL(0, mul(0, 2));
    TEST_ASSERT_EQUAL(0, mul(-3, 0));
    TEST_ASSERT_EQUAL(-10, mul(-5, 2));
}

void setUp(void)
{
}

void tearDown(void)
{
}

int main()
{
    UNITY_BEGIN();
    RUN_TEST(test_div);
    RUN_TEST(test_mul);
    return UNITY_END();
}