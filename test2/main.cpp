#include<bits/stdc++.h>
int main(){
	int t = 8;
	for(int i=0;i<t;i++){
		printf("%d\n",(int)pow(16,i));
		for(int j=0;j<(int)pow(16,i);j++){
			printf("%d ",rand()%10000)-((rand()%10)*10);
		}
		printf("\n");
	}
	return 0;
}
