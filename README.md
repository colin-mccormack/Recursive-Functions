# Recursive-Programs

## Program Structure:

### Headers

#### Dependencies
Include all necessary libraries and also declare all symbolic constants in one place.

#### Questions
Use conditional require statements to include all individual question handlers in one place.
Public functions in these files are henceforth imported and then implemented in main.

### Program Files:

#### Main
Runs the program using each handler function.

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

## Author

- Colin McMcormack, cmcco3@ocdsb.ca