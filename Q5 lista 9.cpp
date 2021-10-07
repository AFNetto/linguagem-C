/* Convertendo uma string em maiúsculas * usando a função strupr() */
#include <stdio.h>
#include <string.h>
 
int main() 
{ 
char string[20]; 
printf("\n"); 
printf("Convertendo uma string para maiúsculas\n"); 
printf("digite a stringde ate 20\n"); 
scanf("%d",&string); 
printf("string digitada : %s\n",string); 
printf("Convertendo para maiúsculas : %s\n",strupr(string)); 
return(0);
 }