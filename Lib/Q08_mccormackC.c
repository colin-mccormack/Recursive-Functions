//
// Created by colin on 12/21/2021.
//

static int nthTerm3n (int *A, int n) {

    if (n != 0 && n != 1 && n != 2)
        A[n] = nthTerm3n(A, n - 1) + nthTerm3n(A, n - 2) + nthTerm3n(A, n - 3);

    return A[n];

}

static int nthTermOn (int *A, int n, int cur) {

    if (cur > n)
        return A[cur - 1];

    A[cur] = A[cur - 1] + A[cur - 2] + A[cur - 3];

    return nthTermOn(A, n, cur + 1);

}

static int nthTermIt (int *A, int n, int cur) {

    for (; cur <= n; cur++)
        A[cur] = A[cur - 1] + A[cur - 2] + A[cur - 3];

    return A[cur - 1];

}


int Q08() {

    printf ("\nCurrently in Q0%i : ", 8);
    printf ("Determine the nth term of the following sequence: \n"
            "1, 2, -2, 1, 1, 0, 2, 3, 5, 8, … \n"
            "Here you can see that the nth term is the sum of the three previous terms.\n");

    int nth3n, nthOn, nthIt, n;
    int arr1[MAX_ELEMENTS] = {1,2,-2};
    int arr2[MAX_ELEMENTS] = {1,2,-2};
    int arr3[MAX_ELEMENTS] = {1,2,-2};

    do {
        printf ("Please enter the term number you want to find : ");
        scanf ("%i", &n);
        fflush(stdin);
    } while (n > MAX_ELEMENTS);

    nth3n = nthTerm3n(arr1, n);
    nthOn = nthTermOn (arr2, n, 3);
    nthIt = nthTermIt (arr3, n, 3);

    printf ("The %i term in the sequence using the recursive O(3^n) time complexity solution is %i.\n", n, nth3n);
    printf ("The %i term in the sequence using the recursive O(n) time complexity solution is %i.\n", n, nthOn);
    printf ("The %i term in the sequence using the iterative O(n) time complexity solution is %i.\n", n, nthIt);

    return 0;

}
