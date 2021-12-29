//
// Created by colin on 12/27/2021.
//

#include "../../dependencies.h"
#include "../../questions.h"


void testQ01() {

    assert ( ( charCount ("dogfood", 'o') ) == 3 );
    printf ("Unit test 1 for Q01 passed!\n");

    assert ( ( charCount ("dogfoodo", 'o') ) == 4 );
    printf ("Unit test 2 for Q01 passed!\n");

    assert ( ( charCount ("ooo", 'o') ) == 3 );
    printf ("Unit test 3 for Q01 passed!\n");

    assert ( ( charCount ("ddd", 'o') ) == 0 );
    printf ("Unit test 4 for Q01 passed!\n");

    assert ( ( charCount ("", 'o') ) == 0 );
    printf ("Unit test 5 for Q01 passed!\n");

    printf ("All unit tests for Q01 passed!\n\n");

}

void testQ02 () {

    assert ( ( rSum (1, 3) ) == 6 );
    printf ("Unit test 1 for Q02 passed!\n");

    assert ( ( rSum (1, 1) ) == 1 );
    printf ("Unit test 2 for Q02 passed!\n");

    assert ( ( rSum (0, 0) ) == 0 );
    printf ("Unit test 3 for Q02 passed!\n");

    assert ( ( rSum (1, 4) ) == 10 );
    printf ("Unit test 4 for Q02 passed!\n");

    assert ( ( rSum (2, 3) ) == 5 );
    printf ("Unit test 5 for Q02 passed!\n");

    printf ("All unit tests for Q02 passed!\n\n");

}

void testQ03 () {

    assert ( ( arithSum (1, 3) ) == 6 );
    printf ("Unit test 1 for Q03 passed!\n");

    assert ( ( arithSum (1, 1) ) == 1 );
    printf ("Unit test 2 for Q03 passed!\n");

    assert ( ( arithSum (0, 0) ) == 0 );
    printf ("Unit test 3 for Q03 passed!\n");

    assert ( ( arithSum (1, 4) ) == 10 );
    printf ("Unit test 4 for Q03 passed!\n");

    assert ( ( arithSum (2, 3) ) == 5 );
    printf ("Unit test 5 for Q03 passed!\n");

    printf ("All unit tests for Q03 passed!\n\n");

}

/*
 *
 * This code is commented out since it is not necessary to test Q04
 *
void testQ04 () {

}
 */

void testQ05 () {

    // Reuse array from inside Q05
    int array[MAX_INTS] = {0,1,2,3,4,5,6,7,8,9};

    assert ( ( rArraySum (1, 3, array) ) == 6 );
    printf ("Unit test 1 for Q05 passed!\n");

    assert ( ( rArraySum (1, 1, array) ) == 1 );
    printf ("Unit test 2 for Q05 passed!\n");

    assert ( ( rArraySum (0, 0, array) ) == 0 );
    printf ("Unit test 3 for Q05 passed!\n");

    assert ( ( rArraySum (1, 4, array) ) == 10 );
    printf ("Unit test 4 for Q05 passed!\n");

    assert ( ( rArraySum (2, 3, array) ) == 5 );
    printf ("Unit test 5 for Q05 passed!\n");

    printf ("All unit tests for Q05 passed!\n\n");

}

void testQ06 () {

    assert ( ( findNth (1, 3, 2) ) == 4 );
    printf ("Unit test 1 for Q06 passed!\n");

    assert ( ( findNth (1, 0, 11) ) == 1 );
    printf ("Unit test 2 for Q06 passed!\n");

    assert ( ( findNth (9, 4, 3) ) == 17 );
    printf ("Unit test 3 for Q06 passed!\n");

    assert ( ( rFindNth (1, 4, FIRST_ELEMENT, 2) ) == 5 );
    printf ("Unit test 4 for Q06 passed!\n");

    assert ( ( rFindNth (0, 11, FIRST_ELEMENT, 1) ) == 0 );
    printf ("Unit test 5 for Q06 passed!\n");

    printf ("All unit tests for Q06 passed!\n\n");

}

void testQ07 () {

    assert ( ( rFindNthGeo (0, 0, FIRST_ELEMENT, 1000) ) == 0 );
    printf ("Unit test 1 for Q07 passed!\n");

    assert ( ( rFindNthGeo (1, 0, FIRST_ELEMENT, 11) ) == 0 );
    printf ("Unit test 2 for Q07 passed!\n");

    assert ( ( rFindNthGeo (3, 4, FIRST_ELEMENT, 6) ) == 3072 );
    printf ("Unit test 3 for Q07 passed!\n");

    assert ( ( rFindNthGeo (1, 4, FIRST_ELEMENT, 2) ) == 4 );
    printf ("Unit test 4 for Q07 passed!\n");

    assert ( ( rFindNthGeo (0, 11, FIRST_ELEMENT, 12) ) == 0 );
    printf ("Unit test 5 for Q07 passed!\n");

    printf ("All unit tests for Q07 passed!\n\n");

}

void testQ08 () {

    int arr1[MAX_ELEMENTS] = {1,2,-2};
    int arr2[MAX_ELEMENTS] = {1,2,-2};
    int arr3[MAX_ELEMENTS] = {1,2,-2};
    int arr4[MAX_ELEMENTS] = {1,2,-2};
    int arr5[MAX_ELEMENTS] = {1,2,-2};
    int arr6[MAX_ELEMENTS] = {1,2,-2};

    assert ( ( nthTerm3n (arr1, 9) ) == 10 );
    printf ("Unit test 1 for Q08 passed!\n");

    assert ( ( nthTermOn (arr2, 9, LENGTH_OF_ARR) ) == 10 );
    printf ("Unit test 2 for Q08 passed!\n");

    assert ( ( nthTermIt (arr3, 9, LENGTH_OF_ARR) ) == 10 );
    printf ("Unit test 3 for Q08 passed!\n");

    assert ( ( nthTerm3n (arr4, 5) ) == 0 );
    printf ("Unit test 4 for Q08 passed!\n");

    assert ( ( nthTermOn (arr5, 3, LENGTH_OF_ARR) ) == 1 );
    printf ("Unit test 5 for Q08 passed!\n");

    assert ( ( nthTermIt (arr6, 4, LENGTH_OF_ARR) ) == 1 );
    printf ("Unit test 6 for Q08 passed!\n");

    printf ("All unit tests for Q08 passed!\n\n");

}

void testQ09 () {

    assert ( ( myStrLen ("ABC", FIRST_CHAR) ) == 3 );
    printf ("Unit test 1 for Q09 passed!\n");

    assert ( ( myStrLen ("", FIRST_CHAR) ) == 0 );
    printf ("Unit test 2 for Q09 passed!\n");

    assert ( ( myStrLen ("ABCD", FIRST_CHAR) ) == 4 );
    printf ("Unit test 3 for Q09 passed!\n");

    assert ( ( myStrLen ("ABCDEFGH", FIRST_CHAR) ) == 8 );
    printf ("Unit test 4 for Q09 passed!\n");

    assert ( ( myStrLen ("A", FIRST_CHAR) ) == 1 );
    printf ("Unit test 5 for Q09 passed!\n");

    printf ("All unit tests for Q09 passed!\n\n");

}

/*
 *
 * This code is commented out since it is not necessary to test Q10
 *
void testQ10 () {

}
 */

void testQ11 () {

    assert ( ( myStrLenStringParam ("ABC") ) == 3 );
    printf ("Unit test 1 for Q11 passed!\n");

    assert ( ( myStrLenStringParam ("") ) == 0 );
    printf ("Unit test 2 for Q11 passed!\n");

    assert ( ( myStrLenStringParam ("ABCD") ) == 4 );
    printf ("Unit test 3 for Q11 passed!\n");

    assert ( ( myStrLenStringParam ("ABCDEFGH") ) == 8 );
    printf ("Unit test 4 for Q11 passed!\n");

    assert ( ( myStrLenStringParam ("A") ) == 1 );
    printf ("Unit test 5 for Q11 passed!\n");

    printf ("All unit tests for Q11 passed!\n\n");

}

void testQ12 () {

    assert ( ( isPalindrome ("ABC", 0, ( strlen("ABC") - 1 )) ) == 0 );
    printf ("Unit test 1 for Q12 passed!\n");

    assert ( ( isPalindrome ("ABCBA", 0, ( strlen("ABCBA") - 1 )) ) == 1 );
    printf ("Unit test 2 for Q12 passed!\n");

    assert ( ( isPalindrome ("BBB", 0, ( strlen("BBB") - 1 )) ) == 1 );
    printf ("Unit test 3 for Q12 passed!\n");

    assert ( ( isPalindrome ("A", 0, ( strlen("A") - 1 )) ) == 1 );
    printf ("Unit test 4 for Q12 passed!\n");

    assert ( ( isPalindrome ("ABCA", 0, ( strlen("ABCA") - 1 )) ) == 0 );
    printf ("Unit test 5 for Q12 passed!\n");

    printf ("All unit tests for Q12 passed!\n\n");

}

void testQ13 () {

    assert ( ( stringValue ("abc", 0) ) == 30 );
    printf ("Unit test 1 for Q13 passed!\n");

    assert ( ( stringValue ("", 0) ) == 0 );
    printf ("Unit test 2 for Q13 passed!\n");

    assert ( ( stringValue ("ABC", 0) ) == 60 );
    printf ("Unit test 3 for Q13 passed!\n");

    assert ( ( stringValue ("*Aa", 0) ) == 130 );
    printf ("Unit test 4 for Q13 passed!\n");

    assert ( ( stringValue ("123", 0) ) == 150 );
    printf ("Unit test 5 for Q13 passed!\n");

    printf ("All unit tests for Q13 passed!\n\n");

}

void testQ14 () {

    int array[MAX_INTS] = {0,1,2,3,4,5,6,7,8,9,2,3,4,5,2,10};

    assert ( ( countMults (array, 0, 14, 1) ) == 1 );
    printf ("Unit test 1 for Q14 passed!\n");

    assert ( ( countMults (array, 0, 14, 2) ) == 3 );
    printf ("Unit test 2 for Q14 passed!\n");

    assert ( ( countMults (array, 0, 14, 15) ) == 0 );
    printf ("Unit test 3 for Q14 passed!\n");

    assert ( ( countMults (array, 0, 14, 5) ) == 2 );
    printf ("Unit test 4 for Q14 passed!\n");

    assert ( ( countMults (array, 0, 14, 0) ) == 1 );
    printf ("Unit test 5 for Q14 passed!\n");

    printf ("All unit tests for Q14 passed!\n\n");

}

void testing() {

    printf ("Testing is on!\n\n");
    testQ01();
    testQ02();
    testQ03();
    // testQ04(); // No unit testing for this question : It prints to standard output and can therefore not be error checked on a return value, and is easily verified
    testQ05();
    testQ06();
    testQ07();
    testQ08();
    testQ09();
    // testQ10(); // No unit testing for this question : It is redundant and returns a parameter
    testQ11();
    testQ12();
    testQ13();
    testQ14();

}