#include "unity.h"

/* Modify these two lines according to the project */
#include "busdetails.h"
#define PROJECT_NAME    "Bus_Ticket"

/* Prototypes for all the test functions */
void test_displaybus(void);
void test_displaycust(void);
void test_reservation(void);
void test_displaybusdetails(void);
void test_displaycustdetails(void);
void test_costing(void);

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
  RUN_TEST(test_displaybus);
  RUN_TEST(test_displaycust);
  RUN_TEST(test_reservation);
  RUN_TEST(test_displaybusdetails);
  RUN_TEST(test_displaycustdetails);
  RUN_TEST(test_costing);

  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 
void test_costing(void)
{
	TEST_ASSERT_EQUAL(0, costing(1, 0));
	
	/* Dummy fail*/
  	// TEST_ASSERT_EQUAL(2, multiply(2, 5));
	
}
void test_displaybus(void) {
  
}
void test_displaycust(void) {
 
  /* Dummy fail*/
  
}
void test_reservation(void) {
 
  /* Dummy fail*/
  
}

void test_displaybusdetails(void) {
  
  
  /* Dummy fail*/
  
}

void test_displaycustdetails(void) {
  
  
  /* Dummy fail*/
 
}
