#include<stdio.h>
int main(){
    int n;
    printf("Input number of Row you wanna print:");
    scanf("%d",&n);
    for(int i=0;i<n-1;i++){
        for(int j=1;j<n-i;j++){
            printf(" ");
        }
        for(int k=0;k<=2*i;k++){
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
    for (int i=0;i<2*n-1;i++){
		printf("*");
	}
    return 0;
}

