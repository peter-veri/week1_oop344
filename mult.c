
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i=2;
	int sum=atoi(argv[1]);
	while(argv[i]!='\0'){
	sum=sum*atoi(argv[i]);
	i++;
}
printf("%s %d",argv[0],sum);//just to make sure the executable is named correctly

}
