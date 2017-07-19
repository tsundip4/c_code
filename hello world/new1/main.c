#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* next;
};
void main(){
    struct node* temp;
    temp = NULL;
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    struct node* newnode1 = (struct node*)malloc(sizeof(struct node));
    newnode->data = 4;
    newnode->next = &newnode1;
    newnode1->data = 6;
    newnode->next = NULL;
    printf("%d %d", newnode->data, newnode1->data);


}
