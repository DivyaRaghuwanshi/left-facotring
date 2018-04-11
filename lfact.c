#include<stdio.h>
#include<string.h>
int main()  {
    char input[100],*l,*r,productions[25][50],c[10],d[10],e[10],c1=0,c2=0,c3=0;
    int i=0,j=0,flag=0;
    printf("Enter the production\n");
    scanf("%s",input);
    l=strtok(input,"->");
    r=strtok(NULL,"->");
    temp=strtok(r,"|");
    temp=strtok(NULL,"|");
   int n=strlen(r);
   int m=strlen(temp);
 for(i=0;i<n;i++){
    if(r[i]==temp[i]){
        c[c1]=r[i];
        c1++;}
        else{
            d[c2]=r[i];
        c2++;}}
 for(i=c1;i<m;i++){
    e[c3]=temp[i];
    c3++;
 }
if(r[0]!=temp[0])
    printf("No left factoring\n");
printf("%s->",l);
for(i=0;i<c1;i++)
    printf("%c",c[i]);
printf("%s'",l);
printf("\n");

if(c2==0)
    printf("%s'->\356",l);
else{
    printf("%s'->",l);
for(i=0;i<c2;i++){
    printf("%c",d[i]);}}
printf("\n");
printf("%s'->",l);
for(i=0;i<c3;i++)
    printf("%c",e[i]);
 }

