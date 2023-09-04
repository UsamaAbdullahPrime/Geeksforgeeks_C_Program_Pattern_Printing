#include<stdio.h>
int main(){
    int n;
    printf("Input number of Row you wanna print:");
    scanf("%d",&n);
    for (int m=0;m<2*n-1;m++){
		printf("*");
	}
	printf("\n");
    for(int i=n-2;i>=0;i--){
        for(int j=n-i;j>1;j--){
            printf(" ");
        }
        for(int k=2*i;k>=0;k--){
            if(k==0 || k==2*i){
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}

