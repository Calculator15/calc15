#include <ctest.h>
#include "calc.h"

CTEST(input_data_1,division)
{
    const float result = Division(3, 0);
    const float expected = 0;
    ASSERT_EQUAL(expected,result);   
}

CTEST(input_data_2,tg_ctg)
{
    float result = Trigonometry (11, 90);
    float expected = 0;
    ASSERT_EQUAL(expected,result);   

    result = Trigonometry (12, 0);
    expected = 0;
    ASSERT_EQUAL(expected,result);   
}
