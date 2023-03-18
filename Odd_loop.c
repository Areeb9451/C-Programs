#include<stdio.h>
int main(){
    int i;
    char another ='Y';
    for(;another=='Y';){
     printf("Enter a number\n");
     scanf("%d",&i);
     printf("The Square of the entered number is = %d\n",i*i);
     printf("Do you want to enter the another number or not Y/N\n");
    fflush(stdin); 
     scanf("%c",&another);
     if(another=='N')
     goto sos;
    }
    sos : printf("Exit");
    return 0;
}