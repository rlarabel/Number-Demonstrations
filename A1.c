/*************************
Date: 09/26/2023
Class: CS4541
Assignment: Number_Demonstrations
Author(s): Ramses Larabel
*************************/
#include <stdio.h>

int main() {
	// Problem 1
	float p1 = 2.5;
	printf("**** Problem 1 ****\n");
	printf("%0.10f\n", p1);
	printf("*******************\n");

	// Problem 2
	float p2 = -1.0/10.0;
        printf("**** Problem 2 ****\n");
        printf("%0.10f\n", p2);
        printf("*******************\n");

        // Problem 3
        double p3IntDiv = 1/3;
	double p3FloatDiv = 1.0/3.0;
        printf("**** Problem 3 ****\n");
        printf("%0.10f\n%0.10f\n", p3IntDiv, p3FloatDiv);
        printf("*******************\n");

        // Problem 4
        double p4 = 9999999.3399999999;
        double p4Float = (float) 9999999.3399999999;
        printf("**** Problem 4 ****\n");
        printf("%0.10f\n%0.10f\n", p4, p4Float);
        printf("*******************\n");

	// Problem 5
        int p5_3 = 30000 * 30000;
        int p5_4 = 40000 * 40000;
	int p5_5 = 50000 * 50000;
	int p5_6 = 60000 * 60000;
	int p5_7 = 70000 * 70000;

        printf("**** Problem 5 ****\n");
        printf("30000 * 30000 = %d\n", p5_3);
	printf("40000 * 40000 = %d\n", p5_4);
	printf("50000 * 50000 = %d\n", p5_5);
	printf("60000 * 60000 = %d\n", p5_6);
	printf("70000 * 70000 = %d\n", p5_7);
        printf("*******************\n");

        // Problem 6
        float p6Base = 1e20;
        float p6Plus = 1e20 + 3500000000;
        float p6Mult = 1e20 + 3500000000 * 1000000000;
	float p6Loop = p6Base;
        for (int i = 0; i < 1000000000; ++i)
	{
		p6Loop += 3500000000;
	}

        printf("**** Problem 6 ****\n");
        printf("1e20 = %f\n", p6Base);
        printf("1e20 + 3500000000 = %f\n", p6Plus);
        printf("1e20 + 3500000000 * 1000000000 = %f\n", p6Mult);
        printf("1e20 + 3500000000 * 1000000000 (Loop) = %f\n", p6Loop);
        printf("*******************\n");
	return 0;
}
