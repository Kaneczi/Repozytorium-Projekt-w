#include <iostream>


//int main(int argc, char const *argv[]) {
//    printf("Podano %d argumentów: \n", argc);
//    for(int i=0; i<argc; i++){
//        printf("Argument #%d\t-\t%s\n",i ,argv[i]);
//    }
//    return 0;
//}

void usage(const char *program_name) {
    printf("Sposob uzycia: %s <komunikat> <#powtorzenia>\n", program_name);
    exit(1);
}

int main(int argc, char const *argv[]) {
    if (argc < 3) {
        usage(argv[0]);
    }

    int count = atoi(argv[2]);
    printf("powtarzanie %d razy...\n", count);
    for (int i = 0; i < count; i++) {
        printf("%3d - %s\n", i, argv[1]);
    }

    return 0;
}