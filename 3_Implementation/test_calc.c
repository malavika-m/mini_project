/**
 * @file test_calc.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-04-15
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "unity_internals.h"
#include "market.h"
#include "unity.h"

void setUp()
	{	}
    
void tearDown()
	{	}
void test_bal(void)
{
    TEST_ASSERT_EQUAL_INT(561,bal(1444,2005));
    TEST_ASSERT_EQUAL_INT(2510,bal(1238,3748));
}
/**
 * @brief 
 * 
 * @return int 
 */
int test_main()
{
    /**
     * @brief Construct a new unity begin object
     * 
     */
    UNITY_BEGIN();
    /**
     * @brief Construct a new run test object
     * 
     */
    RUN_TEST(test_bal);
    /**
     * @brief 
     * 
     * @return return 
     */
    return UNITY_END();
}