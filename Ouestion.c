#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
# define MAX 50
int Stack[MAX];
int top = -1;
int isEmpty(){
    if(top == -1)
      return 1;
    else
      return 0;   
}
int isFull(){
    if(top == MAX-1)
      return 1;
    else
      return 0;  
}
void push(int num){
    if(isFull()){
      printf("Stack Overflow\n");   
     exit(1);
    }
    top=top+1;
    Stack[top] = num;
}
int pop(){
    int val;
    if(isEmpty()){
        printf("Stack Underflow\n");
        exit(1);
    }
    val = Stack[top];
    top=top-1;
    return val;
}
void Dec2Bin(int n){
    while(n != 0){
        push(n%2);
        n = (int)(n/2);
    }
}
void print(){
   if(isEmpty()){
       printf("Stack Underflow\n");
       exit(1);
   }
   while(!isEmpty())
       printf("%d ",pop());
    }
     
void main(){   

//---------------------------------------------------->> Given number is Even or Odd.


/*
int num;
printf("Enter a number\n");
scanf("%d", &num);
if (num%2 == 0){
    printf("The entered number is Even number");
}
else
printf(" The given number is Odd number");
    
*/


//--------------------------------------------------->> Given Year is Leap or Not.
/*


printf("Enter the Year\n");
int year;
scanf("%d",&year);
if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0) ){
printf("The Entered Year is Leap year");    
} 
else{
printf("Entered Year is not a Leap year");    
}

*/

//------------------------------------------------------>> To find the Factorial of given number

/*

int a, pro = 1; 
printf ("Enter a number\n");
scanf("%d",&a);
for(int i = a; i>0; i--)
pro *=i;
printf("The Factorial of given number is = %d",pro);
*/



//------------------------------------------------------->> To find Whether the given number is prime of not:


/*
int n, c = 0;  
printf("Enter a number\n");
scanf("%d",&n);
if(n==1 || n ==0)
printf("The number is prime");
for(int i = 2; i<n/2 ;i++){
if(n%i==0)
 c++;
}    
if(c==0)
    printf("The number is prime");
else
printf("The number is not prime number");
*/


//----------------------------------------------------------->> To check wether a given number is Palindrome or not.


/*

int num, remainder, temp, reverse = 0;
printf("Enter a number\n");
scanf("%d",&num);
temp = num;
while(num>0){
remainder = num % 10;
reverse = reverse * 10 + remainder;
num /= 10;
} 
printf("The given number is = %d\n",temp);
printf("The reverse of the given number is = %d\n",reverse);
if(temp == reverse){
printf("The given number is Palindrome");   
} 
else
printf("The given number is not Palindrome"); 

*/
 

//-------------------------------------------------------------->> To print Fibonacii Series.
/*
int n, a = 0, b = 1;
int c = a+b;
printf("Enter number of term\n");
scanf("%d",&n);
printf("Fibonacii Series : %d %d",a,b);
for(int i = 3; i<=n; i++){
printf(" %d",c);
a=b;
b=c; 
c=a+b;  
}
*/

// ------------------------------------------------------------>> Search an element in array and print its position
/*
int num;
int arr[] = {2,4,1,5,6,10,8,7};
int len = sizeof(arr)/sizeof(arr[0]);
printf("Enter a number\n");
scanf("%d",&num);
for(int i = 0; i < len; i++){
    if(arr[i]==num){
      printf("The position of given number is:\n"); 
      printf("%d",i);
    break;
    }
}
*/
//--------------------------------------------------------------->> Print an element of an array in reverse order
/*
int max;
printf("Enter the length of array\n");
scanf("%d",&max);
int arr[max];
printf("Enter the element of array\n");
for(int i = 0; i < max; i++)
    scanf("%d",&arr[i]);
 printf("The element of array in reverse order is :\n");    
for(int j = max-1; j>=0; j--)
    printf("%d\n",arr[j]);
*/

// --------------------------------------------------------------->> Decimal to binary conversion using Stack
/*
int dec;
printf("Enter a decimal number\n");
scanf("%d",&dec);
Dec2Bin(dec);
print();
*/

// ----------------------------------------------------------------->> Selection Sorting
int arr2[] = {4,8,6,1,14,2};
sorting(arr2);
int leng = sizeof(arr2)/sizeof(arr2[0]);
for(int i = 0; i < leng; i++)
    printf("%d ",arr2[i]);
}

  