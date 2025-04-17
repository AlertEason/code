#include<stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	int s = 0;
	for (int i = 1; i < i <= n; i++) {
		s += sum(i, i + 1);
	}
	printf("sum=%d", sum);
	return 0;
}
int sum(int start,int count){
	int result = 0;
	for(int i = 0; i < count; i++) {
		result += start + i;
	}
	return result;
}