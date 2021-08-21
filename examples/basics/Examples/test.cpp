#include "stdafx.h"
#include <iostream>
#include <time.h>
#include <stdlib.h>
using std::cout;
using std::endl;


void test_program()
{
	srand(unsigned(int(time(0))));
	for (int i = 0; i <= 1000; i++)
	{
		int num1 = rand() % 1000;
		int num2 = (rand() % 1000)+num1;
		
		if (num1 >= 0 && num2 >= 0)
		{
			cout << "test program for " << num1 << " and " << num2<< endl;
			cout << "result is: " << endl;
			cout << endl;
			cout << endl;

		}
		else
		{
			cout << "invalid input!!" << endl;
		}
			
		cout << endl;
	}

}
