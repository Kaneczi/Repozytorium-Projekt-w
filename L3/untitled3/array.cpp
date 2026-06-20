#include <iostream>

void averageValue(int tab[],int size){
    int sum =0;
    float average=0;
    for(int i=0;i<size;i++){
        sum += tab[i];
    }
    average=(float)sum/size;
    printf("average value: %.2f\n",average);


}
void maxValue(int tab[],int size){
    int value=tab[0];
    for(int i=1;i<size;i++){
        if (tab[i]>value){
            value=tab[i];
        }
    }
    printf("max value: %d\n",value);


}
void maxValueLocator(int tab[],int size){
    int value=tab[0];
    int max=0;
    for(int i=1;i<size;i++){
        if (tab[i]>value){
            value=tab[i];
            max=i;
        }
    }
    printf("max value in: tab[%d]\n",max);
}


void medianValue(int tab[],int size){
    int temp;
    int mid=size/2;
    float median=0;
    for(int i = 0;i < size; i++) {
        for(int j = 0;j < size-1; j++)
        {
            if (*(tab + j)>*(tab + j+1)) {
                temp=*(tab + j+1);
                *(tab + j+1) =*(tab + j);
                *(tab + j)=temp;
            }}}
    if (2*mid==size) {
        median= (float) (*(tab + mid-1)+*(tab + mid))/2;
    }
    else {
        median= (float) *(tab + mid);
    }
    printf("median: %.2f\n",median);
}