#include <stdio.h>
int main(void) {
	// your code goes here
	int testcase;
    scanf("%d",&testcase);
    while(testcase--){
        int n,x,d;
        scanf("%d %d %d",&n,&x,&d);
        printf("%d\n",n/(5*x)+d);
    }
	return 0;
}
