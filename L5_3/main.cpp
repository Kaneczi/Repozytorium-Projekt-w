#include <iostream>

void toLower(char *text) {
    while (*text) {
        if ('A' <= *text && *text <= 'Z') {
            *text += ('a' - 'A');
        }
        text++;
    }
}

void toUpper(char *text) {
    while (*text) {
        if ('a' <= *text && *text <= 'z') {
            *text += ('A' - 'a');
        }
        text++;
    }
}

int textSize(char *text) {
    int size = 0;
    while (*text) {
        size++;
        text++;
    }
    return size;
}

int main(int argc, char* argv[100]) {
    printf("Text lenght: %d\n", textSize(argv[1]));
//    char* text[1000];
//    for(int i=1; argv[i]; i++){
//        while (*text) {
//       text++;
//            }
//
//            //*text += 'argv[i]';
//    }

    printf("Input: %s\n", argv[1]);
    toLower(argv[1]);
    printf("Lowercase: %s\n", argv[1]);
    toUpper(argv[1]);
    printf("Uppercase: %s\n", argv[1]);
    if(argv[2]){
        printf("true...");
    }


    return 0;
}
