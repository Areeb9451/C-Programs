#include<stdio.h>
#include<conio.h>
#define MAX 5
int Stack_arr[MAX];
int top = -1;
void push(int data){
    if(top == MAX-1){
        printf("Stack Overflow");
        return;
    }
    top = top + 1;
    Stack_arr[top] = data;
}
int pop(){
    int value;
    if(top == -1){
        printf("Stack Underflow");
        exit(1);
    }
    value = Stack_arr[top];
    top = top - 1;
    return value;
}
void print(){
    int i;
    if(top == -1){
        printf("Stack Overflow\n");
        return;
    }
    for(i = top; i>=0; i--)
      printf("%d ", Stack_arr[i]);
      printf("\n");
}
int main(){
    int data;
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    data = pop();
   printf("%d",data);
   return 0;
}
