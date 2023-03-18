#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
struct Node{
    int data;
    struct Node *link;
};
void merge(struct Node *p, struct Node *q, struct Node **s){
    struct Node *z;
    if(p == NULL && q == NULL)
      return;
    while(p != NULL && q != NULL){
       if(*s == NULL){
          *s = (struct Node *)malloc(sizeof(struct Node));
           z = *s;
       }
       else{
           z->link = (struct Node *)malloc(sizeof(struct Node));
           z = z->link;
       }
       if(p->data < q->data){
           z->data = p->data;
           p = p->link;
       }
       else if(p->data > q->data){
           z->data = q->data;
           q = q->link;
       }
      else{
          z->data = q->data;
          q = q->link;
          p = p->link;
      }
    }

    while(p != NULL){
        z->link = (struct Node *)malloc(sizeof(struct Node));
        z = z->link;
        z->data = p->data;
        p = p->link;
    }

    while(q != NULL){
        z->link = (struct Node *)malloc(sizeof(struct Node));
        z = z->link;
        z->data = q->data;
        q = q->link;
    }
    z->link = NULL; 
}
