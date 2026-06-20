#include <iostream>
#include <time.h>

int main() {

    srand(time(NULL) * time(NULL));


    int min_value;
    int max_value;
    int number = 1;
    do {
        printf("\nnumber of values to generate:\n");
        scanf("%d", &number);
        printf("minimum value:\n");
        scanf("%d", &min_value);
        printf("maximum value:\n");
        scanf("%d", &max_value);
        printf("\n values between: %d - %d\n", min_value, max_value);
        //int random[number];
        int *randoms;
        randoms = (int *) malloc(number * sizeof(int));

        for (int i = 0; i < number; i++) {
            //random[i] = (min_value + rand()) % (min_value + max_value + 1);
            randoms[i] = (min_value + rand()) % (min_value + max_value + 1);
        }

        for (int i = 0; i < number; i++) {
            printf("%d ", randoms[i]);
        }

        free(randoms);
    } while (number > 0);
    return 0;

}
