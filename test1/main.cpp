#include<bits/stdc++.h>
int main(){
	int t = 10;
	for(int i=0;i<t;i++){
		printf("%d\n",1<<i);
		for(int j=0;j<1<<i;j++){
			printf("%d ",rand()%10000)-((rand()%10)*10);
		}
		printf("\n");
	}
	return 0;
}
