// convertir una expresion infija en una expresino prefija.

#include <stdio.h>
#include <string.h>

char prefixExp[60];
char infixExp[60];
char operatorStack[60];
int n=0, intTop=0;

void fillPre(char let){
	int m;
	if(n == 0)
		prefixExp[0] = let;
	else{
		for(m = n+1; m > 0; m--)
			prefixExp[m] = prefixExp[m-1];
		prefixExp[0] = let;
	}
	n++;
}

int lowPriority(char opr, char oprStack){
	int k, p1, p2;
	char oprList[] = {'+','-','*','/','%','^', ')'};
	int prioList[] = {0, 0, 1, 1, 2, 3, 4};
	if(oprStack == ')')
		return 0;
	for(k=0; k < 6; k++){
		if(opr == oprList[k])
			p1 = prioList[k];
	}

	for(k=0; k < 6; k++){
		if(oprStack == oprList[k])
			p2 = prioList[k];
	}

	if(p1 < p2)
		return 1;
	else
		return 0;
}

void pushOpr(char opr){
	if(intTop == 0){
		operatorStack[intTop] = opr;
		intTop++;
	}else{
		if(opr != ')'){
			while(lowPriority(opr, operatorStack[intTop-1]) == 1 && intTop > 0){
				fillPre(operatorStack[--intTop]);
			}
		}
		operatorStack[intTop] = opr;
		intTop++;
	}
}

void popOpr(){
	while(operatorStack[--intTop] != ')')
		fillPre(operatorStack[intTop]);
}


void main()
{
	char chrL;
	int length;
	printf("\nIngresa expresion infija: \n");
	gets(infixExp);
	length = strlen(infixExp);
	while(length > 0){
		chrL = infixExp[--length];
		switch(chrL){
			case ' ':
				break;
			case ')':
			case '+':
			case '-':
			case '*':
			case '/':
			case '^':
			case '%':
				pushOpr(chrL);
				break;
			case '(':
				popOpr();
				break;
			default:
				fillPre(chrL);
		}
	}
	while(intTop > 0){
		fillPre(operatorStack[--intTop]);
		n++;
	}

	prefixExp[n] = '\0';
	printf("\n Expresion Infija : %s ", infixExp);
	printf("\n Expresion prefija: %s", prefixExp);
	printf("\nGracias.\n");
} 