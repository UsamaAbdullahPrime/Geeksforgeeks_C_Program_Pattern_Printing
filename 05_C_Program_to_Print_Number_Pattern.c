#include<stdio.h>
int main(){
    int n;
    printf("Input number of line you wanna print:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=i;j<n-1;j++){
            printf(" ");
        }
        for(int k=0;k<=i;k++){
            printf("%d ",k+1);
        }
        printf("\n");
    }
    return 0;
}
