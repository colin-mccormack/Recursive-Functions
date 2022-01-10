# Recursive-Programs

### Program Structure: Headers

#### Dependencies
Include all necessary libraries and also declare all symbolic constants in one place.

#### Questions
Use conditional require statements to include all individual question handlers in one place.
Public functions in these files are henceforth imported and then implemented in main.

### Program Structure: Unit testing

#### Test
All unit tests are preformed using the ```<assert.h>``` header as included in dependencies.h.
Unit tests can be turned off by toggling user defined preprocessor **UNIT_TESTING** (set to zero for off).
To save time while compiling the option for uncommenting the **NDEBUG** preprocessor directive is supplied. This will tell the compiler not to bother with even looking at any part of an assert statement.

### Program Structure: Main

#### Main
Runs the program using each handler function.

### Program Structure: Questions

#### Q01
Determine the number of times a given character occurs in a given string. For example, if s = “dogfood” and c = ‘o’ then your function would return 3.

#### Q02
Determine the sum of the integers between min and max inclusive. Your function can assume that min<=max.

#### Q03
Write an O(1) function to solve the problem in question #2. [HINT: This function will not be recursive or iterative but will require some mathematics]

#### Q04
Output the characters in a string in reverse order.

#### Q05
Determine the sum of the integers in an array of integers from minIndex to maxIndex. You can assume that minIndex <= maxIndex and that both values are between 0 and numElements-1.

#### Q06
Find the nth term in an arithmetic sequence having a starting value (term 1) of a and a difference of d.

#### Q07
Find the nth term in a geometric sequence having a starting value (term 1) of a and a common ratio or r.

#### Q08
Determine the nth term of the following sequence: 1, 2, -2, 1, 1, 0, 2, 3, 5, 8, … Here you can see that the nth term is the sum of the three previous terms.
Using a : Recursive solution that is O(3^n), Recursive solution that is O(n), Iterative solution that is O(n)

#### Q09
Determine the number of characters in a string using the following interface: int myStrLen(char *s, int i) in which the calling function will always pass zero to i.

#### Q10
Determine the number of characters in a string using the following interface: int myStrLen(char *s, int i) in which the calling function will always pass the index of the last character in s to i. The last character in a string is intrepreted as the null terminator for the purpose of this program.

#### Q11
Determine the number of characters in a string using the following interface: int myStrLen(char *s). Obviously this is the optimal solution to this problem.

#### Q12
Determine if a given string is a Palindrome. Your function should return 0 if it is not a palindrome and 1 if it is a palindrome. Here is the interface I would like you to use: int isPalindrome (char *s, int lo, int hi) in which the calling function will pass zero to lo and the index of the last character in the string to hi.

#### Q13
Determine the value of a given string according to the following rules: 10 points for lowercase chars, 20 points for uppercase chars, 50 points for number chars, 100 points for ‘*’ and zero points for all other characters.

#### Q14
Determine the number of multiples of mult in an  array A of integers from index lo to hi. Here is the interface: int countMults(int *A, int lo, int hi, int mult). Assume that both lo and hi are less than numElements.

## Author

- Colin McCormack, cmcco3@ocdsb.ca
