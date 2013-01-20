

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i=2;
	float sum=atoi(argv[1]);
	while(argv[i]!='\0'){
		if(atoi(argv[i])==0){
		printf("division by zero not possible, returning 0");return 0;}
	sum=sum/(atoi(argv[i]));
	i++;
}
printf("%s %.2lf",argv[0],sum);//just to make sure the executable is named correctly

}
