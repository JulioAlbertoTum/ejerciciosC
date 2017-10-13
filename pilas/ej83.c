// Este programa convierte una expresion infija en una expresion posfija

#include <stdio.h>
#include <string.h>

char postfixExp[60];
char infixExp[60];
char operatorStack[60];
int i=0, j=0, intTop = 0;

int lowPriority(char opr, char oprStack)
{
	int k, p1, p2;
	char oprList[] = {'+','-','*','/','%','^','('};
	int prioList[] = {0,0,1,1,2,3,4};
	if(oprStack == '(')
		return 0;
	for(k = 0; k < 6; k++){
		if(opr == oprList[k])
			p1 = prioList[k];
	}
	for(k = 0; k < 6; k++){
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
		if(opr != '(' ){
			while(lowPriority(opr, operatorStack[intTop-1]) == 1 && intTop > 0){
				postfixExp[j] = operatorStack[--intTop];
				j++;
			}
		}
		operatorStack[intTop] = opr;
		intTop++;
	}
}

void popOpr()
{
	while(operatorStack[--intTop] != '('){
		postfixExp[j] = operatorStack[intTop];
		j++;
	}
}


void main()
{
	char k;
	printf("\n Ingresa Infix Expression: ");
	gets(infixExp);
	while((k=infixExp[i++]) != '\0'){
		switch(k){
			case ' ':
				break;
			case '(':
			case '+':
			case '-':
			case '*':
			case '/':
			case '^':
			case '%':
				pushOpr(k);
				break;
			case ')':
				popOpr();
				break;
			default: 
				postfixExp[j] = k;
				j++;
		}
	}
	while(intTop >= 0){
		postfixExp[j] = operatorStack[--intTop];
		j++;
	}
	postfixExp[j] = '\0';
	printf("\n Infix Expression: %s ", infixExp);
	printf("\n Postfix Expression: %s ", postfixExp);
	printf("\n Gracias.\n");
}