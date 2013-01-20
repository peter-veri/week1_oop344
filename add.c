#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i=1;
	int sum=0;
	while(argv[i]!='\0'){
	sum+=atoi(argv[i]);
	i++;
}
printf("%s %d",argv[0],sum);//just to make sure the executable is named correctly

}
