fr#include<stdio.h>
int main(){
	int arr[4][4];
	
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++)
			scanf("%d",&arr[i][j]);
	}
			
	for(int i=0;i<4;i++){
		
			for(int j=0;j<i;j++){
				printf("   ");
			}
			for(int j=i;j<4;j++){
					printf("  %d",arr[i][j]);
			}
			printf("\n");
	}
}
