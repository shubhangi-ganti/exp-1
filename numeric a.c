#include<stdio.h>
// max and min of 3 numbers
int main(){
    int a,b,c;
    printf("enter the value of a\n enter the value of b \n enter the value of c \n");
    scanf("%d %d %d",&a,&b,&c);
    
    if(a>b && a>c){                            
    printf("%d is the largest\n",a);}
    else if(b>a && b>c){
    printf("%d is the largest\n", b);}
    else{
    printf("%d is the largest\n",c);}    
    
    if(a<b && a<c){                            
    printf("%d is the smallest\n",a);}
    else if(b<a && b<c){
    printf("%d is the smallest\n", b);}
    else{
    printf("%d is the smallest\n",c);}         
 return 0;
 }   
