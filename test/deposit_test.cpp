#include <unistd.h>
#include <stdlib.h>
#include "ctest.h"
#include "deposit.h"

CTEST(Speed, testspeed) {
    usleep(2000);
}

CTEST(dep10000, 30days) {
    
    const int sum = 10000;
    const int sum1=sum-sum*(0.1);                       

    ASSERT_EQUAL(9000, sum1);
}


CTEST(dep10000, 45days) {
    
    const int sum = 10000;
    const int sum1=sum+sum*(0.02);                       

    ASSERT_EQUAL(10200, sum1);
}


CTEST(dep10000, 150days) {
    
    const int sum = 10000;
    const int sum1=sum+sum*(0.06);                       

    ASSERT_EQUAL(10600, sum1);
}


CTEST(dep10000, 301days) {
    
    const int sum = 10000;
    const int sum1=sum+sum*(0.12);                       

    ASSERT_EQUAL(11200, sum1);
}


CTEST(dep200000, 30days) {
    
    const int sum = 200000;
    const int sum1=sum-sum*(0.1);                       

    ASSERT_EQUAL(180000, sum1);
}


CTEST(dep200000, 53days) {
    
    const int sum = 200000;
    const int sum1=sum+sum*(0.03);                       

    ASSERT_EQUAL(206000, sum1);
}


CTEST(dep200000, 201days) {
    
    const int sum = 200000;
    const int sum1=sum+sum*(0.08);                       

    ASSERT_EQUAL(216000, sum1);
}


CTEST(dep200000, 350days) {
    
    const int sum = 200000;
    const int sum1=sum+sum*(0.15);                       

    ASSERT_EQUAL(230000, sum1);
}

