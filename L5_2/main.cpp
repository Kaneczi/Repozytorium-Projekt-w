#include <iostream>
#include <cstring>
#include <cmath>

void usage(char *programName) {
    printf("Usage: %s number1 operation number2\n", programName);
    printf("Available operations:\n");
    printf("\tadd\n");
    printf("\tsubt\n");
    printf("\tmult\n");
    printf("\tmult\n");
    printf("\tpowerof\n");
    printf("\n");
}

int main(int argc, char* argv[]) {

    int number1 = 0;
    int number2 = 0;
    int result = 0;

    if (argc == 4) {
        number1 = atoi(argv[1]);
        number2 = atoi(argv[3]);

        if (!strcmp("add", argv[2])) {
            result = number1 + number2;
            printf("%d + %d = %d\n", number1, number2, result);
            return 0;
        }
        if (!strcmp("subt", argv[2])) {
            result = number1 - number2;
            printf("%d - %d = %d\n", number1, number2, result);
            return 0;
        }
        if (!strcmp("mult", argv[2])) {
            result = number1 * number2;
            printf("%d * %d = %d\n", number1, number2, result);
            return 0;
        }
        if (!strcmp("div", argv[2])) {
            if(number2==0){
                printf("cannot divide by 0.");
                return 0;
            }


            result = number1 / number2;
            printf("%d / %d = %d\n", number1, number2, result);
            return 0;
        }
        if (!strcmp("powerof", argv[2])) {
            result = pow(number1, number2);
            printf("%d ^ %d = %d\n", number1, number2, result);
            return 0;
        }

    }

    usage(argv[0]);

    return 0;



}