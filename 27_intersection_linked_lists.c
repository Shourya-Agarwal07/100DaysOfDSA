// Problem: Find Intersection Point of Two Linked Lists
#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

int main()
{
    struct Node *head1 = NULL, *head2 = NULL, *temp = NULL, *newNode = NULL;
    int n, m, i;
    printf("Enter number of nodes in first list: ");
    scanf("%d", &n);

    if (n > 0)
    {
        printf("Enter %d integers: ", n);
        for (i = 0; i < n; i++)
        {
            newNode = (struct Node *)malloc(sizeof(struct Node));
            scanf("%d", &newNode->data);
            newNode->next = NULL;

            if (head1 == NULL)
            {
                head1 = newNode;
                temp = head1;
            }
            else
            {
                temp->next = newNode;
                temp = temp->next;
            }
        }
    }
    printf("Enter number of nodes in second list: ");
    scanf("%d", &m);

    if (m > 0)
    {
        printf("Enter %d integers: ", m);
        for (i = 0; i < m; i++)
        {
            newNode = (struct Node *)malloc(sizeof(struct Node));
            scanf("%d", &newNode->data);
            newNode->next = NULL;

            if (head2 == NULL)
            {
                head2 = newNode;
                temp = head2;
            }
            else
            {
                temp->next = newNode;
                temp = temp->next;
            }
        }
    }
    int len1 = 0, len2 = 0;
    
    temp = head1;
    while (temp != NULL)
    {
        len1++;
        temp = temp->next;
    }

    temp = head2;
    while (temp != NULL)
    {
        len2++;
        temp = temp->next;
    }
    struct Node *temp1 = head1;
    struct Node *temp2 = head2;

    if (len1 > len2)
    {
        for (i = 0; i < (len1 - len2); i++)
        {
            temp1 = temp1->next;
        }
    }
    else if (len2 > len1)
    {
        for (i = 0; i < (len2 - len1); i++)
        {
            temp2 = temp2->next;
        }
    }

    int found = 0;
    while (temp1 != NULL && temp2 != NULL)
    {

        if (temp1->data == temp2->data)
        {
            printf("Intersection point found with value: %d\n", temp1->data);
            found = 1;
            break;
        }
        temp1 = temp1->next;
        temp2 = temp2->next;
    }

    if (found == 0)
    {
        printf("No intersection point found.\n");
    }

    return 0;
}