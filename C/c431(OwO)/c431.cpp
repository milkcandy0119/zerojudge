#include <stdio.h>
#include <stdlib.h>

int number[101];

int main() {
	int n;
	scanf("%d", &n);
	for(int i=0;i<101;i++) {
		number[i]=0;
	}
	for(int i=0;i<n;i++) {
		int k;
		scanf("%d", &k);
		number[k]++;
	}
	for(int i=1;i<=100;i++) {
		for(int j=0;j<number[i];j++) {
			printf("%d ", i);
		}
	}
	
	return 0;
}