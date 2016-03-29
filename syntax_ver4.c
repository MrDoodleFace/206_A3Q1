#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(int argc, char *argv){
	
}

int isValidCommand(char *token){
	switch(token) {

   		case "TAKEASTEP" :
     		return 1;
	
   		case "LEFT" :
     		return 1;

      	case "RIGHT" :
     		return 1;

      	case "PICKUP" :
     		return 1;

      	case "DROP" ::
     		return 1;

      	case "DETECTMARKER" :
     		return 1;

      	case "TURNON" :
     		return 1;

      	case "TURNOFF" :
     		return 1;

   		default :
   			return 0;
}

int isValidExpression(char *expression){
	initBuffer(expression);
	char *token = expression; //This is done to make a string whose size will never be exceeded by token thus preventing errors
	token = nextToken();
	if (token == "REPEAT"){
		token = nextToken();
		int len = strlen(token);
		for(int i=0;i<len;i++){
			if (isdigit[0]){
				continue;
			} else {
				return;
			}
		}
	} else if (tokem == "WHILE"){
		char *token = nextToken();
	} else if (tokem == "SAY"){
		char *token = nextToken();
	} else {
		return 0;
}