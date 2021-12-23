//
// Created by colin on 12/21/2021.
//

#include "../dependencies.h"

static void rArraySum (int min, int max, int *array, int *sum) {

    if (min > max)
        return;

    rArraySum((min + 1), max, array, sum);

    *sum += array[min];

}

int Q05() {

    printf ("\nCurrently in Q0%i : ", 5);
    printf ("Determine the sum of the integers between min and max inclusive in our array\n");

    int min, max, sum;
    int array[MAX_INTS] = {1,2,3,4,5,6,7,8,9,10};

    sum = 0;

    printf ("Please enter the min of the range : ");
    scanf ("%i", &min);
    fflush(stdin);
    printf ("Please enter the min of the range : ");
    scanf ("%i", &max);

    rArraySum(min, max, array, &sum);

    printf ("The sum is %i.\n", sum);

    return 0;

}
