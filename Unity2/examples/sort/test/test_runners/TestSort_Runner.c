#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP_RUNNER(Sort)
{
  RUN_TEST_CASE(Sort, CorrectParameters);       
  RUN_TEST_CASE(Sort, IntAEmpty);               
  RUN_TEST_CASE(Sort, IntAEqualValues);         
  RUN_TEST_CASE(Sort, LengthTooBig);            
  RUN_TEST_CASE(Sort, LengthTooSmall);          
  RUN_TEST_CASE(Sort, LengthOnUpperLimit);      
  RUN_TEST_CASE(Sort, LengthOnLowerLimit);      
  RUN_TEST_CASE(Sort, ComplexityEmpty);         
  RUN_TEST_CASE(Sort, ComplexityInvalidString); 
  RUN_TEST_CASE(Sort, AlgorithmTooBig);         
  RUN_TEST_CASE(Sort, AlgorithmTooSmall);       
}

// int sort(int* a, int length, char* type, int algorithm);