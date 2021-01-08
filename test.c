#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	char bufr[10000]="hello we are@)leanrning ablut \nstrock";
	char *ch;
  										ch = strtok(bufr, "@)");

  										ch = strtok(NULL, "@)");
										  printf("%s",ch);
										  return 0;
}