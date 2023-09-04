#include<stdio.h>
int main(){
    int n,c=1;
    printf("Input number of line you wanna print:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int k=0;k<i;k++){
            printf("%d ",c);
            c++;
        }
        printf("\n");
    }
    return 0;
}
