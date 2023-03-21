# include <stdio.h>
# include <stdlib.h>
int main(){
get_inp:printf("Size of array: ");
	int n;
	scanf("%d", &n);
	if(n % 2 == 0){
		printf("Even Size given, need and odd size\n");
		goto get_inp;
	}

	int **arr = (int**)malloc(n*sizeof(int*));
	for(int i = 0; i < n; i++)
	arr[i] = (int*)malloc(n*sizeof(int));
	
	printf("\nElements of the array: ");
	for(int i = 0; i < n; i++)
	for(int j = 0; j < n; j++)
	scanf("%d",&arr[i][j]);
	
	for(int i = 0; i < n ; i++){
		printf("\n");
		for(int j = 0; j < n; j++){
			printf("%d ", arr[i][j]);
		}
	}
	printf("\n");
	
	int m;
	printf("\nElement to find and replace: ");
	scanf("%d", &m);
	for(int i = 1; i < n; i++){
		for(int j = 0; j < n; j++){
			if(arr[i][j] == m)
			arr[i][j] = arr[i - 1][j];
		}
	}

	for(int i = 0; i < n; i++){
		printf("\n");
		for(int j = 0; j < n; j++){
			printf("%d ", arr[i][j]);
		}
	}
}
