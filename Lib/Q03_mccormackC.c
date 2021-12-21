//
// Created by colin on 12/20/2021.
//

static inline void arithSum (int min, int max, int *sum) {

    (*sum) = (max - min + 1) * ((min + max) / 2);

}

int Q03() {

    printf ("\nCurrently in Q0%i : ", 3);
    printf ("Determine the sum of the integers between min and max inclusive\n");

    int min, max, sum;

    sum = 0;

    printf ("Please enter the min of the range : ");
    scanf ("%i", &min);
    fflush(stdin);
    printf ("Please enter the min of the range : ");
    scanf ("%i", &max);

    arithSum(min, max, &sum);

    printf ("The sum is %i.\n", sum);

    return 0;

}
