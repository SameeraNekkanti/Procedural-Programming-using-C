#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data;
    struct Node *next;
};
int main(){
    struct Node *head=NULL, *temp, *newNode;
    int n, i;
    printf("enter no. of elements: ");
    scanf("%d",&n);
    for(i=0; i<n; i++){
        newNode=(struct Node *)malloc(sizeof(struct Node));
        if(newNode==NULL){
            printf("Memory allocation failed\n");
            return 1;
        }
        printf("enter element %d", i+1);
        scanf("%d", &newNode->data);
        newNode.next=NULL;
        if(head==NULL){
            head=newNode;
        }else{
        temp=head;
        while(temp.next!=NULL){
            temp=temp.next;
        }
        temp.next=newNode;
        }
    }
    printf("linked list: ");
    temp=head;
    while(temp!=NULL){
        printf("%d ",temp.data);
        temp=temp.next;
    }
    temp=head;
    while(temp!=NULL){
        struct Node *nextNode=temp.next;
        free(temp);
        temp=nextNode;
    }
    return 0;

}
