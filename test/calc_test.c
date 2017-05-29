#include <ctest.h>
#include "calc.h"

CTEST(arithmetic_operation_1, summ)
{   
    float A[3] = {10,-10,25};
    float result = Addition(A,3);
    float expected = 25;
    ASSERT_EQUAL_U(expected, result);

    float B[2] = {45, 0};
    result = Addition(B,2);
    expected = 45;
    ASSERT_EQUAL_U(expected, result);

    float C[2] = {-6, -15};
    result = Addition(C,2);
    expected = -21;
    ASSERT_EQUAL_U(expected, result);
}
    
CTEST(arithmetic_operation_2,subtrac)
{  
    float result = Subtraction (5,6); 
    float expected = -1; 
    ASSERT_EQUAL_U(expected, result); 


    result = Subtraction (-12,-5); 
    expected = -7; 
    ASSERT_EQUAL_U(expected, result);

    result = Subtraction (-2.47,15.63); 
    expected = -18.1; 
    ASSERT_EQUAL_U(expected, result); 
}

CTEST (arithmetic_operation_3, multipl)
{
    float A[2] = {6,8};
    float result = Multiplication (A,2); 
    float expected = 48; 
    ASSERT_EQUAL_U(expected, result);

    float B[2] = {-20, -3};
    result = Multiplication (B,2); 
    expected = 60; 
    ASSERT_EQUAL_U(expected, result);

    float C[3] = {-2.25, 5, 3};
    result = Multiplication (C,3); 
    expected = -33.75; 
    ASSERT_EQUAL_U(expected, result);
}

CTEST (arithmetic_operation_4, divis)
{

    float result = Division (50,5); 
    float expected = 10; 
    ASSERT_EQUAL_U(expected, result);

    result = Division (-48,5); 
    expected = -9.6; 
    ASSERT_EQUAL_U(expected, result);

    result = Division (-81,-9); 
    expected = 9; 
    ASSERT_EQUAL_U(expected, result);
}

CTEST (arithmetic_operation_5, factor)
{
    float result = Fact (5); 
    float expected = 120; 
    ASSERT_EQUAL_U(expected, result);


    result = Fact (8); 
    expected = 40320; 
    ASSERT_EQUAL_U(expected, result);
}

CTEST (arithmetic_operation_6, equation)
{   
    float A[2] = {};
    float result = Roots(A, 2, 1, 2); 
    float expected = 0; 
    ASSERT_EQUAL_U(expected, result);
 
    Roots(A, 2, 5, -3); 
    const float result1 = A[0];
    const float result2 = A[1];
    const float expected1 = 0.5;
    const float expected2 = -3; 
    ASSERT_EQUAL_U(expected1, result1);
    ASSERT_EQUAL_U(expected2, result2);

    Roots(A, 1, 6, 9); 
    result = A[0];
    expected = -3;
    ASSERT_EQUAL_U(expected, result);
}
