//
// Created by colin on 12/20/2021.
//

#include "../dependencies.h"

static inline int arithSum (float min, float max) {

    return (max - min + 1) * (( min + max) / 2);

}

int Q03() {

    printf ("\nCurrently in Q0%i : ", 3);
    printf ("Determine the sum of the integers between min and max inclusive\n");

    float min, max;
    int sum;

    printf ("Please enter the min of the range : ");
    scanf ("%f", &min);
    fflush(stdin);
    printf ("Please enter the min of the range : ");
    scanf ("%f", &max);

    sum = arithSum(min, max);

    printf ("The sum is %i.\n", sum);

    return 0;

}
