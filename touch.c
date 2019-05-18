#include <conio.h>
#include <stdio.h>

int main(int argc,char **argv)
{
	if(argc == 2) {
		FILE *fp;
		fp = fopen(argv[1],"w");
		if(fp != NULL) 	printf("File Created : %s",argv[1]);
		else printf("Failed to Create FIle : %s",argv[1]);
		fclose(fp);
	} else {
		printf("Invalid arguments\n");
		printf("Usage : touch filename");
	}
}