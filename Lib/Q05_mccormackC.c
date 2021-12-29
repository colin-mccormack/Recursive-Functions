//
// Created by colin on 12/21/2021.
//

#include "../dependencies.h"

static int rArraySum (int min, int max, int *array) {

    if (min > max)
        return 0;

    return ( array[min] + rArraySum( (min + 1), max, array) );

}

int Q05() {

    printf ("\nCurrently in Q0%i : ", 5);
    printf ("Determine the sum of the integers between min and max inclusive in our array\n");

    int min, max, sum;
    int array[MAX_INTS] = {0,1,2,3,4,5,6,7,8,9};

    do {

        printf("Please enter the min of the range : ");
        scanf("%i", &min);
        fflush(stdin);
        printf("Please enter the min of the range : ");
        scanf("%i", &max);

    } while (min < 0 || max > 9);

    sum = rArraySum(min, max, array);

    printf ("The sum is %i.\n", sum);

    return 0;

}
