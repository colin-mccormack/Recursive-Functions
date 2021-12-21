//
// Created by colin on 12/20/2021.
//

#include "../dependencies.h"

static void rSum (int min, int max, int *sum) {

    if (min > max)
        return;

    rSum((min + 1), max, sum);

    *sum += min;

}

int Q02() {

    printf ("\nCurrently in Q0%i : ", 2);
    printf ("Determine the sum of the integers between min and max inclusive\n");

    int min, max, sum;

    sum = 0;

    printf ("Please enter the min of the range : ");
    scanf ("%i", &min);
    fflush(stdin);
    printf ("Please enter the min of the range : ");
    scanf ("%i", &max);

    rSum(min, max, &sum);

    printf ("The sum is %i.\n", sum);

    return 0;

}
