#include <stdio.h>;
#include <stdbool.h>;
#include <string.h>;

char *buffer;
char *temp;

void initBuffer(char *inputLine){
	buffer = inputLine;
	temp = inputLine;
}