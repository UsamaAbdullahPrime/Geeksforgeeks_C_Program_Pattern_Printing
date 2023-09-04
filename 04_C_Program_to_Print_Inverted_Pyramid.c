#include<stdio.h>
int main(){
    int n;
    printf("Input number of line you wanna print:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            printf(" ");
        }
        for(int k=i;k<n;k++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
