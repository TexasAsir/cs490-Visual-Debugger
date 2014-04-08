#include <stdio.h>
#include <string.h>
#define MAX 10000

int main (int argc, char *argv[])
{
    FILE *fp;
    char str[MAX];
    char *x[MAX];
    int i =0;
    char y[MAX];

    if((fp = fopen(argv[1], "r"))==NULL) {
    printf("Cannot open file.\n");
    exit(1);}

    while(!feof(fp)) {
        while(fgets(str, sizeof str, fp)) {
            x[i]= strdup(str);
            i++;
        }
    }
	char in[2];
	int j = 0;
	while(1){
		scanf("%s",in);
		printf("%s",x[j]);
		j++;
		if(j == i){
			break;
		}
	}  

   fclose(fp);

  return 0;
}
