## Exercise 01
* read-only variable is not assignable
* http://stackoverflow.com/questions/22788927/read-only-variable-is-not-assignable
* We removed the "const" so that x is a variable
and can be assigned other values.

## Exercise 02
* type 'int' to a value of type, 'const int' drops qualifiers
* http://stackoverflow.com/questions/27812119/binding-of-reference-to-a-value-of-type-drops-qualifiers
* Changed y to a const type so it can bind to x. 

## Exercise 03
* cannot bind to a value of unrelated type 'int'
* http://stackoverflow.com/questions/18565167/non-const-lvalue-references
* Changed string to int so both variables are of the same type.

## Exercise 04
* use of undeclared identifier 'vector'
* http://stackoverflow.com/questions/21332968/c-undeclared-identifier-vector
* Included <vector> and <iostream> libraries and using namespace std.
The original code used methods from the libraries without importing them.

## Exercise 05
* undefined reference to c++
* http://www.cplusplus.com/forum/beginner/77999/
* Gave sayHello() a function body, and defined it to print "Hello world!"

## Exercise 06
* use of undeclared identifier
* http://stackoverflow.com/questions/22197030/what-is-an-undeclared-identifier-error-and-how-do-i-fix-it
* Rearranged the sayHello() function so that it precedes the main() call.
We defined the function before we called it.

## Exercise 07
* variable 'x' is uninitialized when used here
* didn't have to search because terminal provided solution:
initialize the variable 'x' to silence this warning unsigned int x;
* Initialized x=0 before using it in a function call.

## Exercise 08
* using the result of an assignment as a condition without parentheses
* didn't have to search because terminal provided solution:
use '==' to turn this assignment into an equality comparison
* Changed the assignment to an equality comparison (= to ==).

## Exercise 09
* use of undeclared identifier
* http://stackoverflow.com/questions/22197030/what-is-an-undeclared-identifier-error-and-how-do-i-fix-it
* We removed the semicolon after the for loop so that next line was
the body of the for loop.

## Exercise 10
* expected ';' in 'for' statement specifier
* http://stackoverflow.com/questions/7084213/expected-in-for-statement-specifier-ios
* We changed the commas to semicolons so that the for loop had
the right syntax.

## Exercise 11
* comparison of integers of different signs: 'int'
      and 'const size_t' (aka 'const unsigned long')
* http://stackoverflow.com/questions/8350971/comparison-of-integers-of-different-signs-warning-with-xcode 
* changed the type of i from int to size_t so that they would be
of the same type.

## Exercise 12
* use of undeclared identifier
* http://stackoverflow.com/questions/22197030/what-is-an-undeclared-identifier-error-and-how-do-i-fix-it
* Added brackets to include both lines of the for loop so that i would be
defined by that line of the code.

## Exercise 13
* invalid operands to binary expression
* http://cs50.stackexchange.com/questions/7332/why-do-i-get-the-invalid-operands-to-binary-expression-error
* changed 'c' from a char to a string by adding double quotes "c"

## Exercise 14
* warning: unused parameter 'y'
* http://stackoverflow.com/questions/3599160/unused-parameter-warnings-in-c-code
* changed addTwoNumbers to return x+y so that it used both variables. 
Changed main() to return z so that all the variables were used.

## Exercise 15
* control may reach end of non-void function
* http://stackoverflow.com/questions/19104216/error-control-may-reach-end-of-non-void-function
* added the statement "return false" after the loop so that
it is guaranteed to return a value.
