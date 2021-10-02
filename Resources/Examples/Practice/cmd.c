/*
 * In this program I am limiting max command line arguments to 4
 * You can decide the limits, etc based on the assignment.
 * The program name itself is counted as one command line argument.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (int argc, char *argv[])
{

    int num_1 = 0;
   
    /*
     * We check for 5 (4 + 1) as program name must also be accounted for
     */
     
    if (argc > 5) {
        printf("Error: Max allowed parameters is 4, received %d\n", argc);
        return 1; //I am returning non-zero value to indicate it is an error condition.
    }

    num_1 = atoi(argv[1]);
    printf("First parameter entered is %d\n", num_1);

    num_1 = atoi(argv[2]);
    printf("Second parameter entered is %d\n", num_1);

    num_1 = atoi(argv[3]);
    printf("Third parameter entered is %d\n", num_1);

    num_1 = atoi(argv[4]);
    printf("Fourth parameter entered is %d\n", num_1);

    return 0;
}
