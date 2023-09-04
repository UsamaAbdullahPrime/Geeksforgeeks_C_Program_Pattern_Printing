#include<stdio.h>
int main(){
    int n;
    printf("Input number of line you wanna print:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int k=0;k<=i;k++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
