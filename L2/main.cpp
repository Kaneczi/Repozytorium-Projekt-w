#include <iostream>
#define SIZE 12
int main(){
    printf("arrays\n");
    int numbers[SIZE] = {1,2,7,9,45,45,8,345,3,8};

    //int max_num = numbers[0];
    int max_num = *(numbers);
    int max = 0;
    int mid = SIZE/2;
    float median = 0;
    int temp = 0;
    int sum=0;

    for(int i = 0;i < SIZE; i++)
//    {
//        printf("numbers[%d] = %d\n",i,numbers[i]);
//        sum += numbers[i];
//
//        if (numbers[i] > max_num)
//        {
//            max_num = numbers[i];
//            max = i;
//        }
//    }
    {
        printf("*(numbers + %d) = %d\n",i,*(numbers + i));
        sum += *(numbers + i);

        if (*(numbers + i) > max_num)
        {
            max_num = *(numbers + i);
            max = i;
        }
    }
//    for(int i = 0;i < SIZE; i++) {
//        for(int j = 0;j < SIZE-1; j++)
//        {
//            if (numbers[j]>numbers[j+1]) {
//                temp=numbers[j+1];
//                numbers[j+1]=numbers[j];
//                numbers[j]=temp;
//            }
//        }
//    }
    for(int i = 0;i < SIZE; i++) {
        for(int j = 0;j < SIZE-1; j++)
        {
            if (*(numbers + j)>*(numbers + j+1)) {
                temp=*(numbers + j+1);
                *(numbers + j+1)=*(numbers + j);
                *(numbers + j)=temp;
            }
        }
    }
    printf("post sorting:\n");
//    for(int i = 0;i < SIZE; i++)
//    {
//        printf("numbers[%d] = %d\n",i,numbers[i]);
//        sum += numbers[i];
//
//
//    }
    for(int i = 0;i < SIZE; i++)
    {
        printf("*(numbers + %d) = %d\n",i,*(numbers + i));
        sum += *(numbers + i);


    }

    printf("Max value: %d in numbers[%d]\n", max_num, max);
    float avg = (float) sum / SIZE;
    printf("Average value: %.2f\n",avg);



//    if (2*mid==SIZE) {
//        median= (float) (numbers[mid-1]+numbers[mid])/2;
//    }
//    else {
//        median= (float) numbers[mid];
//    }

    if (2*mid==SIZE) {
        median= (float) (*(numbers + mid-1)+*(numbers + mid))/2;
    }
    else {
        median= (float) *(numbers + mid);
    }

    printf("median: %.2f\n",median);


    //%.2f - 2 miejsca po przecinku
    //pd:

    return 0;
}

//int main() {
//    int exit=0;
//do {
//    printf("Simple calc\n");
//
//    printf("Enter the first number:\n");
//    int num1 = 1;
//    scanf("%d", &num1);
//
//    printf("Enter the second number:\n");
//    int num2 = 1;
//    scanf("%d", &num2);
//
//
//    printf("%d + %d = %d\n", num1, num2, num1 + num2);
//    printf("%d - %d = %d\n", num1, num2, num1 - num2);
//    printf("%d x %d = %d\n", num1, num2, num1 * num2);
//    if (num2 != 0) {
//        printf("%d : %d = %d\n", num1, num2, num1 / num2);
//    }
//
//    if(num1==0){
//        break;
//    }
//    if(num2==0){
//        break;
//    }
//
//} while (1);
//    return 0;
//}
