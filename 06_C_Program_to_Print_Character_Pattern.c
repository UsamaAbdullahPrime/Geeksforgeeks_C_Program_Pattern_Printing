#include<stdio.h>
int main(){
    int n,c=97;
    printf("Input number of line you wanna print:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=i;j<n-1;j++){
            printf(" ");
        }
        for(int k=0;k<=i;k++){
            printf("%c ",c);
            c++;
        }
        printf("\n");
    }
    return 0;
}
