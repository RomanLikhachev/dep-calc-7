#include <unistd.h>
#include <stdlib.h>
#include "ctest.h"
#include "deposit.h"


CTEST(Speedtest,Validtest) {
    usleep(2000);
}

CTEST(Checksummen100000, postuplenie) {
    const int sum = 9999;
    int p=0;  
     
   if (sum<100000)
	{  
		p=1;
    }
                           
    ASSERT_EQUAL(1, p);
} 



CTEST(Checksumbol100000, postuplenie) {
    const int sum = 190000;
    int p=0;  
     
   if (sum > 100000)
    {
    	p=1;
    }  
                           
    ASSERT_EQUAL(1, p);
} 


CTEST(Countdaysmoreyear, dayday365) {
    const int srok= 400;
    int p=0;  
     
  if (srok > 365)
	{    
    	p = 1;
    } 
                           
    ASSERT_EQUAL(1, p);
} 

