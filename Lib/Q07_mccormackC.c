//
// Created by colin on 12/21/2021.
//

static int inline findNthGeo (int a, int r, int n) {

    return ( a + ( (n-1) * r ) );

}

int Q07() {

    printf ("\nCurrently in Q0%i : ", 7);
    printf ("Find the nth term in a geometric sequence having a starting value (term 1) of a and a common ratio or r.\n");

    int a, r, nth, n;

    printf ("Please enter the term 1 value : ");
    scanf ("%i", &a);
    fflush(stdin);
    printf ("Please enter the ratio : ");
    scanf ("%i", &r);
    fflush(stdin);
    printf ("Please enter the number of the term you want to find : ");
    scanf ("%i", &n);

    nth = findNthGeo(a, r, n);

    printf ("The %i term is %i.\n", n, nth);

    return 0;

}

