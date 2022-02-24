#include<stdio.h>
#include<stdlib.h>

void druck(int i, int n, int k, int* pArr);

int main(){
	int i=3, n=3, k=3;
	int arr [i][n][k];
	
	for(int zi = 0; zi < i; zi++){
		for(int zn = 0; zn <n; zn++){
			for(int zk = 0; zk < k; zk++){
				arr[zi][zn][zk] = zk + zn + zi;
				
			}
		}
	}
	
	druck(i, n, k, **arr);
	return 1;
}

void druck(int i, int n, int k, int* pArr){
	for(int j=0; j< i * n * k; j++){
		printf("%d ", *pArr + j);
	}
}
