#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node* next;
};

void DeleteList(struct Node* head){
    struct Node* deleteMe = head;
    struct Node* nextNode;
    while (deleteMe!=NULL){
        nextNode = deleteMe->next;
        free(deleteMe);
        deleteMe = nextNode;
    }
    head = NULL;
}

void PrintList(struct Node* head){
    struct Node* temp = head;
    while(temp!=NULL)
    {
        printf("%d-->",temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main(){
    struct Node* head = NULL;

    DeleteList(head);
    PrintList(head);

    return 0;
}