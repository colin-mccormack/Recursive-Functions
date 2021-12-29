//
// Created by colin on 12/21/2021.
//

static int inline findNth(int a, int d, int n) {

    return ( a + ( (n-1) * d ) );

}


static int rFindNth (int a, int d, int cur, int n) {

    if ( cur > ( n - 1) )
        return a;

    return ( rFindNth(a + d, d, cur + 1, n) );

}

int Q06() {

    printf ("\nCurrently in Q0%i : ", 6);
    printf ("Find the nth term in an arithmetic sequence having a starting value (term 1) of a and a difference of d.\n");

    int a, d, nth, n, nthR;

    printf ("Please enter the term 1 value : ");
    scanf ("%i", &a);
    fflush(stdin);
    printf ("Please enter the difference : ");
    scanf ("%i", &d);
    fflush(stdin);
    printf ("Please enter the number of the term you want to find : ");
    scanf ("%i", &n);

    nth = findNth(a, d, n);
    nthR = rFindNth(a, d, FIRST_ELEMENT, n);

    printf ("The %i term iteratively is %i.\n", n, nth);
    printf ("The %i term recursively is %i.\n", n, nthR);

    return 0;

}
