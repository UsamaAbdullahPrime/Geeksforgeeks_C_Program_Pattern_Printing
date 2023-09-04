#include<stdio.h>
int main(){
    int n,c;
    printf("Input number of line you wanna print:");
    scanf("%d",&n);
    c=(n*(n+1))/2;
    for(int i=n;i>=1;i--){
        for(int k=0;k<i;k++){
            printf("%d ",c);
            c--;
        }
        printf("\n");
    }
    return 0;
}

