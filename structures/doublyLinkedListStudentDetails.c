#include <stdio.h>
#include <stdlib.h>
struct student{
    int rollNo;
    char name[50];
    float marks;
    struct student *prev;
    struct student *next;
};
int main(){
    struct student *head=NULL, *newnode, *temp, *last;
    int n, i;
    printf("Enter number of students: ");
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        newnode=(struct student *)malloc(sizeof(struct student));
        if(newnode==NULL){
            printf("Memory allocation failed");
            return 1;
        }
        printf("\nenter roll no.: ");
        scanf("%d", &newnode->rollNo);
        printf("Enter name: ");
        scanf("%49s", newnode->name);
        printf("Enter marks: ");
        scanf("%f", &newnode->marks);
        newnode->prev=NULL;
        newnode->next=NULL;
        if (head==NULL){
            head=newnode;
            last=newnode;

        }else{
            last->next=newnode;
            newnode->prev=last;
            last=newnode;
        }
    }
    printf("\nStudent details in FORWARD order:\n");
    temp=head;
    while (temp != NULL)
    {
        printf("\nRoll No: %d", temp->rollNo);
        printf("\nName: %s", temp->name);
        printf("\nMarks: %.2f\n", temp->marks);

        temp = temp->next;
    }
    printf("\nStudent details in REVERSE order:\n");
    temp=last;
    while (temp != NULL)
    {
        printf("\nRoll No: %d", temp->rollNo);
        printf("\nName: %s", temp->name);
        printf("\nMarks: %.2f\n", temp->marks);

        temp = temp->prev;
    }
    temp=head;
    while(temp!=NULL){
        struct student *nextnode=temp->next;
        free(temp);
        temp=nextnode;
    }
    return 0;


}
