#include "unity.h"
#include <proto.h>

/* Modify these two lines according to the project */
#include <proto.h>
#define PROJECT_NAME  "MP"

/* Prototypes for all the test functions */
void test_add(void);
void test_subtract(void);
void test_multiply(void);
void test_divide(void);
void test_modulus(void);
void test_power(void);
void test_factorial(void);

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_add);
  RUN_TEST(test_subtract);
  RUN_TEST(test_multiply);
  RUN_TEST(test_divide);
  RUN_TEST(test_modulus);
  RUN_TEST(test_power);
  RUN_TEST(test_factorial);

  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 
void test_add(void) {
  TEST_ASSERT_EQUAL(30, addition(10, 20));
  TEST_ASSERT_EQUAL(-10, addition(10, -20));

}
void test_subtract(void) {
  TEST_ASSERT_EQUAL(-3, subtraction(0, 3));
  
  /* Dummy fail*/
  // TEST_ASSERT_EQUAL(1, subtract(1000, 900));
}

void test_multiply(void) {
  TEST_ASSERT_EQUAL(0, multiplication(1, 0));
  
  /* Dummy fail*/
  // TEST_ASSERT_EQUAL(2, multiply(2, 5));
}

void test_divide(void) {
  TEST_ASSERT_EQUAL(2, division(4, 2));
  
  /* Dummy fail*/
  // TEST_ASSERT_EQUAL(3, divide(2, 2));
}
void test_modulus(void) {
  TEST_ASSERT_EQUAL(1, modulus(5,2));
 
}
void test_power(void) {
  TEST_ASSERT_EQUAL(1, power(1, 0));
  
 
}
void test_factorial(void) {
  TEST_ASSERT_EQUAL(1, factorial(1)));
  
  
}