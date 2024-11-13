#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* next;
};
struct node* insertAtEnd(struct node* head,int data){
    struct node* newNode=(struct node*)malloc(sizeof(struct node));
    newNode->data=data;
    struct node* temp=head;
    if(temp==NULL){
        head=newNode;
        newNode->next=head;
    }
    else{
        while(temp->next!=head){
        temp=temp->next;
        }
        temp->next=newNode;
        newNode->next=head;
    }
    return head;
}
void display(struct node* head){
    struct node* temp=head;
    while(temp->next!=head){
        printf("%d\n",temp->data);
        temp=temp->next;
        }
        printf("%d\n",temp->data);
}
int main() {
    struct node* head=NULL;
   head=insertAtEnd(head,12);
    head=insertAtEnd(head,20);
    head=insertAtEnd(head,18);
    display(head);
    return 0;
}
    
