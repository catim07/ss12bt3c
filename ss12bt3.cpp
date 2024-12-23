#include<stdio.h>
void giaithua(int n){
	int total=1;
	for(int i=1;i<=n;i++){
		total*=i;
	}
	printf("%d",total);
}
int main(){
	int n=10;
	printf("giai thua cua %d la ",n);
	giaithua(n);
	return 0;
}
