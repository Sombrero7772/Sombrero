#include<stdio.h>
int main(){
	int n=1;
	int k;
	
	double sum=0;
	
	printf("Enter k(1<=k<=15):");
	scanf("%d",&k);
	printf("\n");
	
	
	while(sum<k){
		sum+=1.0/n;
		n++;
	}
	printf("%d",n-1);
	
	return 0;
}

	