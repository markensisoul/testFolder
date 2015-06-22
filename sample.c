#include<stdio.h>

int main(){

	printf("Hello I'm a git_first_file!");
	int temp[10],i;
	while(true){
		if(i==10)
		{
			temp[i] = (i+=1);
		}
		printf("%d",temp[i]);
	}
	return 0;
}
