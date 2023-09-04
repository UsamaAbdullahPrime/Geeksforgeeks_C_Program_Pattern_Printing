#include<stdio.h>
int main(){
    int n,space;
    printf("Input row for hollow star:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(space=1;space<n-i;space++){
            printf(" ");
        }
        for(int j=0;j<=2*i;j++){
                printf("*");
        }
        printf("\n");
    }
        for(int i=n-2;i>=0;i--){
        for(space=n-i;space>1;space--){
            printf(" ");
        }
        for(int j=2*i;j>=0;j--){
                printf("*");
        }
        printf("\n");
    }
    return 0;
}
