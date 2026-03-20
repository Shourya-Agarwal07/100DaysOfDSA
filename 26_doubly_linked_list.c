// Problem: Doubly Linked List Insertion and Traversal
#include <stdio.h>
#include <stdlib.h>


struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
};

int main()
{
    struct Node *head = NULL, *temp = NULL, *newNode = NULL, *last = NULL;
    int n, i;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    if (n > 0)
    {
        printf("Enter %d integers: ", n);
    }

    for (i = 0; i < n; i++)
    {
        newNode = (struct Node *)malloc(sizeof(struct Node));
        scanf("%d", &newNode->data);
        newNode->next = NULL;
        newNode->prev = NULL;

        if (head == NULL)
        {
            head = newNode;
            temp = head;
        }
        else
        {
            temp->next = newNode;   
            newNode->prev = temp;   
            temp = temp->next;      
        }
    }

    printf("Forward Traversal: ");
    temp = head;
    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        last = temp; 
        temp = temp->next;
    }
    printf("NULL\n");
    printf("Backward Traversal: ");
    temp = last; 
    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->prev;
    }
    printf("NULL\n");

    return 0;
}