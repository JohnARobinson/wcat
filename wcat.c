#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int main(int argc, char *argv[]) {
	
	int file_num = 0;

	if(argc > 1)
	{
		file_num = argc;
		int i = 1;
		do{
			FILE *fp = fopen(argv[i], "r");
			char string[150];
			
			//printf("%s", argv[i]);
			if (fp == NULL) 
			{
				printf("wcat: cannot open file\n");
    				exit(1);
			}

			while(1)
			{	

			if(fgets(string, 150, fp) == NULL)
			{
				break;
			}
			//puts(string);
			printf("%s", string);
	
			}
   			fclose(fp);

			if(file_num == i)
			{
				break;
			}
			i++;
		}while(file_num != i);
	}
	return 0;
}	
