Date: 09/26/2023
Class: CS4541
Assignment: Number_Demonstrations
Author(s): Ramses Larabel
 
gcc -std=c99 -Wall -o A1 A1.c
 
Warnings: I had a couple of warnings but I was supposed to!

A1.c:33:19: warning: integer overflow in expression of type ‘int’ results in ‘-1794967296’ [-Woverflow]
   33 |  int p5_5 = 50000 * 50000;
      |                   ^
A1.c:34:19: warning: integer overflow in expression of type ‘int’ results in ‘-694967296’ [-Woverflow]
   34 |  int p5_6 = 60000 * 60000;
      |                   ^
A1.c:35:19: warning: integer overflow in expression of type ‘int’ results in ‘605032704’ [-Woverflow]
   35 |  int p5_7 = 70000 * 70000;

 
References: I did this on my own with no research

**** Problem 1 ****
Expected:
2.5000000000
Results:
2.5000000000
*******************

**** Problem 2 ****
Expected:
-0.1000000000
Results:
-0.1000000015
*******************

**** Problem 3 ****
Expected:
0.3333333333
0.3333333333
Results:
0.0000000000
0.3333333333
*******************

**** Problem 4 ****
Expected:
9999999.3399999999
9999999.3399999999
Results:
9999999.3399999999
9999999.0000000000
*******************

**** Problem 5 ****
Expected:
900000000
1600000000
2500000000
3600000000
4900000000
Results:
30000 * 30000 = 900000000
40000 * 40000 = 1600000000
50000 * 50000 = -1794967296
60000 * 60000 = -694967296
70000 * 70000 = 605032704
*******************

**** Problem 5 ****
Expected:
100000000000000000000
100000000003500000000
103500000000000000000
103500000000000000000
Results:
1e20 = 100000002004087734272.000000
1e20 + 3500000000 = 100000002004087734272.000000
1e20 + 3500000000 * 1000000000 = 103500002601996386304.000000
1e20 + 3500000000 * 1000000000 (Loop) = 100000002004087734272.000000
*******************
 

