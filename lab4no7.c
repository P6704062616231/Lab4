#include <stdio.h>
int main(){
char a;
int b,x,i,j;
	scanf("%c %d %d",&a,&b,&x);
	for (i = 1; i <= b;i++){
		for(j = 1; j < x; j++){
			printf("%c",a);
		}
		printf("%c\n",a);

	}

return 0;
}
