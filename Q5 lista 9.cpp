/* Convertendo uma string em mai�sculas * usando a fun��o strupr() */
#include <stdio.h>
#include <string.h>
 
int main() 
{ 
char string[20]; 
printf("\n"); 
printf("Convertendo uma string para mai�sculas\n"); 
printf("digite a stringde ate 20\n"); 
scanf("%d",&string); 
printf("string digitada : %s\n",string); 
printf("Convertendo para mai�sculas : %s\n",strupr(string)); 
return(0);
 }