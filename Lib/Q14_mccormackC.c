//
// Created by colin on 12/25/2021.
//

static int countMults(int *A, int lo, int hi, int mult) {

    if (lo > hi)
        return 0;

    if (A[lo] == mult)
        return ( ( countMults(A, lo + 1, hi, mult) ) + 1);

    else
        return ( countMults(A, lo + 1, hi, mult) );

}

int Q14() {

    printf ("\nCurrently in Q0%i : ", 14);
    printf ("Determine the number of multiples of mult in an  array A of integers from index lo to hi using the interface: \n"
            "int countMults(int *A, int lo, int hi, int mult).\n");

    int mult, lo, hi, numElements, count;
    int arr [MAX_ELEMENTS];

    do {
        printf ("Please enter the number of integer elements : ");
        scanf ("%i", &numElements);
        fflush(stdin);
    } while (numElements > MAX_ELEMENTS);

    printf ("Please enter the multiple you are searching for : ");
    scanf ("%i", &mult);
    fflush(stdin);

    do {
        printf ("Please enter the low value of the range you are searching in : ");
        scanf ("%i", &lo);
        fflush(stdin);
        printf ("Please enter the hi value of the range you are searching in : ");
        scanf ("%i", &hi);
        fflush(stdin);
    } while (lo < 0 || hi > numElements);

    for (int i = 0; i < numElements; i++) {
        printf ("Please enter element %i of the array : ", i + 1);
        scanf ("%i", &arr[i]);
        fflush(stdin);
    }

    count = countMults(arr, lo, hi, mult);

    printf ("Your string has %i occurrences of the multiple.\n", count);

    return 0;

}

