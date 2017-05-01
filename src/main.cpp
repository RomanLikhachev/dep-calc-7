#include <iostream>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include "deposit.h"

#define k 100000


using namespace std;


int main(){
	//setlocale(0,"RUS");
	int srok, sum;
	 cout<<"Please,type your deposite:";
	 cin>>sum;
	 cout<<"Please,type count of days:";
	 cin>>srok;
	 proverkasum(sum);
	 proverkasrok(srok,sum);
	 //system("PAUSE");
	 getchar();
}
