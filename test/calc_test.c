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

CTEST (arithmetic_operation_7, sin)
{
    float result = Trigonometry (9,30);
    float expected = 0.5;
    ASSERT_EQUAL_U(expected, result);
    
    result = Trigonometry (9, 90);
    expected = 1;
    ASSERT_EQUAL_U(expected, result);

    result = Trigonometry (9, 45);
    expected = 0.707;
    ASSERT_EQUAL_U(expected, result);
}

CTEST (arithmetic_operation_8, cos)
{
    float result = Trigonometry (10,30);
    float expected = 0.866;
    ASSERT_EQUAL_U(expected, result);
    
    result = Trigonometry (10, 90);
    expected = 0;
    ASSERT_EQUAL_U(expected, result);

    result = Trigonometry (10, 45);
    expected = 0.707;
    ASSERT_EQUAL_U(expected, result);
}

CTEST (arithmetic_operation_9, tg)
{
    float result = Trigonometry (11,30);
    float expected = 0.577;
    ASSERT_EQUAL_U(expected, result);

    result = Trigonometry (11,39);
    expected = 0.81;
    ASSERT_EQUAL_U(expected, result);

}

CTEST (arithmetic_operation_10, ctg)
{
    float result = Trigonometry (12,68);
    float expected = 0.404;
    ASSERT_EQUAL_U(expected, result);

    result = Trigonometry (12, 45);
    expected = 1;
    ASSERT_EQUAL_U(expected, result);

    result = Trigonometry (12, 90);
    expected = 0;
    ASSERT_EQUAL_U(expected, result);
}

CTEST (arithmetic_operation_11, arcsin)
{
    float result = Trigonometry (13,1);
    float expected = 90;
    ASSERT_EQUAL_U(expected, result);

    result = Trigonometry (13, 0.5);
    expected = 30;
    ASSERT_EQUAL_U(expected, result);

    result = Trigonometry (13, 0.789);
    expected = 52.09;
    ASSERT_EQUAL_U(expected, result);
}

CTEST (arithmetic_operation_12, arccos)
{
    float result = Trigonometry (14, 0.356);
    float expected = 69.15;
    ASSERT_EQUAL_U(expected, result);

    result = Trigonometry (14, 0.5);
    expected = 60;
    ASSERT_EQUAL_U(expected, result);

    result = Trigonometry (14, 0.25);
    expected = 75.52;
    ASSERT_EQUAL_U(expected, result);
}

CTEST (arithmetic_operation_13, arctg)
{
    float result = Trigonometry (15, 7.69);
    float expected = 82.59;
    ASSERT_EQUAL_U(expected, result);

    result = Trigonometry (15, 0.8);
    expected = 38.66;
    ASSERT_EQUAL_U(expected, result);

    result = Trigonometry (15, 1);
    expected = 45;
    ASSERT_EQUAL_U(expected, result);
}

CTEST (arithmetic_operation_14, arcctg)
{
    float result = Trigonometry (16, 5.35);
    float expected = 10.58;
    ASSERT_EQUAL_U(expected, result);

    result = Trigonometry (16, 0.5);
    expected = 63.43;
    ASSERT_EQUAL_U(expected, result);

    result = Trigonometry (16, 30);
    expected = 1.91;
    ASSERT_EQUAL_U(expected, result);
}
