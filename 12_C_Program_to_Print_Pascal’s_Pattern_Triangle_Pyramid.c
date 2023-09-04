#include<stdio.h>
main(){
    int row;
    printf("Input Number of Row: ");
    scanf("%d",&row);
    //printf("%d",factorial(number));
    for(int n=0;n<row;n++){
        for(int space=1;space<=row-n;space++){
            printf(" ");
        }
        for(int r=0;r<=n;r++){
            int ncr=factorial(n)/(factorial(n-r)*factorial(r));
            printf("%d ",ncr);
        }
        printf("\n");
    }
    return 0;
}

int factorial(n){

    int fact=1;
    if(n==0){
        return 1;
    }
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}
