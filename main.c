#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <parse.h>
#include <syntax.h>

int main(int argc, char *argv){

	char * line = NULL;
    size_t len = 0;
    ssize_t read;

	FILE *fp = fopen(argv[0],"r+");
	int count =1;
	while ((read = getline(&line, &len, fp)) != -1) {
		if(isValid)
     	
    }
	
	fclose(fp);
}