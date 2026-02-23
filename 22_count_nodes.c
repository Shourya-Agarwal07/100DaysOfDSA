// Problem: Count Nodes in Linked List
#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

int main()
{
    struct Node *head = NULL, *temp = NULL, *newNode = NULL;
    int n, i, count = 0;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    printf("Enter %d integers: ", n);
    for (i = 0; i < n; i++)
    {
        newNode = (struct Node *)malloc(sizeof(struct Node));
        scanf("%d", &newNode->data);
        newNode->next = NULL;

        if (head == NULL)
        {
            head = newNode;
            temp = head;
        }
        else
        {
            temp->next = newNode;
            temp = temp->next;
        }
    }

    temp = head;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }

    printf("Total number of nodes: %d\n", count);

    return 0;
}
