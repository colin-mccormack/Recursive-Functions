//
// Created by colin on 12/20/2021.
//

#include "../dependencies.h"

static int rSum (int min, int max) {

    if (min > max)
        return 0;

    return ( ( rSum((min + 1), max) ) + min );

}

int Q02() {

    printf ("\nCurrently in Q0%i : ", 2);
    printf ("Determine the sum of the integers between min and max inclusive\n");

    int min, max, sum;

    printf ("Please enter the min of the range : ");
    scanf ("%i", &min);
    fflush(stdin);
    printf ("Please enter the min of the range : ");
    scanf ("%i", &max);

    sum = rSum(min, max);

    printf ("The sum is %i.\n", sum);

    return 0;

}
