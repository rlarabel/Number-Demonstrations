# Number Demonstrations
Date: 09/26/2023  
Class: CS4541  
Assignment: Number_Demonstrations  
Author(s): Ramses Larabel  

## Purpose
This assignment demonstrates how integer and floating-point arithmetic in C can produce unexpected results due to overflow, precision loss, and representation limitations. Through a series of problems, we explore how different types of numerical expressions behave in ways that may surprise programmers unfamiliar with these low-level details.

## Input
`gcc -std=c99 -Wall -o A1 A1.c`  
`.\A1`
 
## Warnings 
I had a couple of warnings but I was supposed to!

`A1.c:33:19: warning: integer overflow in expression of type ‘int’ results in ‘-1794967296’ [-Woverflow]`  
`___33 |  int p5_5 = 50000 * 50000;`  
 
`A1.c:34:19: warning: integer overflow in expression of type ‘int’ results in ‘-694967296’ [-Woverflow]`  
`___34 |  int p5_6 = 60000 * 60000;`  
 
`A1.c:35:19: warning: integer overflow in expression of type ‘int’ results in ‘605032704’ [-Woverflow]`  
`___35 |  int p5_7 = 70000 * 70000;`  

## Results
| Problem	| formula	  | Expected Result(s)	| Actual Result(s)	| Issue Highlighted |
| --------|-----------|--------------------|------------------|------------------ |
|   1     | `5.0 / 2.0` |   `2.5000000000`     |  `2.5000000000`    |   Nothing         |
| 2       | `-1.0 / 10.0`   | `-0.1000000000`      | `-0.1000000015`    | Floating-point precision error | 
| 3       |  `1 / 3`<br>`1.0 /3.0`    | `0.3333333333`<br>`0.3333333333` | `0.0000000000`<br>`0.3333333333`| Integer division truncates to zero  |
|4 | `(double) 9999999.3399999999`<br>`(float) 9999999.3399999999`  |`9999999.3399999999`<br>`9999999.3399999999`| `9999999.3399999999`<br>`9999999.0000000000` | Precision loss on large floats  |
|5 | `30000 * 30000`<br>`40000 * 40000`<br>`50000 * 50000`<br>`60000 * 60000`<br>`70000 * 70000` | `900000000`<br>`1600000000`<br>`2500000000`<br>`3600000000`<br>`4900000000` |  `900000000`<br>`1600000000`<br>`-1794967296`<br>`-694967296`<br>`605032704`|  Integer overflow |
| 6 | `1e20`<br>`1e20 + 3500000000`<br>`1e20 + 3500000000 * 1000000000`<br>`x=1e20` `x += 3500000000` looped 1000000000 times | `100000000000000000000`<br>`100000000003500000000`<br>`103500000000000000000`<br>`103500000000000000000` | `100000002004087734272.000000`<br>`100000002004087734272.000000`<br>`03500002601996386304.000000`<br>`100000002004087734272.000000` | Float limit exceeded in arithmetic |

*******************
## Takeaways 
- Integer Overflow occurs silently in C when results exceed the limits of int. Always use larger types (e.g., long long or uint64_t) or explicit range checks.
- Floating-Point Inaccuracy arises due to limited binary precision—especially visible when working with very large or very small numbers.
- Integer Division truncates toward zero. Cast to float/double if exact division is required.
- When multiplying large constants or adding very large and very small values, consider the order of operations and type safety.

## References
No external references were used. All work and experimentation were conducted independently.
