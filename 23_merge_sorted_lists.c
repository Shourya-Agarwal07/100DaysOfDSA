// Problem: Merge Two Sorted Linked Lists
#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

int main()
{
    struct Node *head1 = NULL, *head2 = NULL, *temp = NULL, *new_node = NULL;
    int n, m, i;

    printf("Enter number of nodes in first list: ");
    scanf("%d", &n);
    printf("Enter %d sorted integers: ", n);
    for (i = 0; i < n; i++)
    {
        new_node = (struct Node *)malloc(sizeof(struct Node));
        scanf("%d", &new_node->data);
        new_node->next = NULL;

        if (head1 == NULL)
        {
            head1 = new_node;
            temp = new_node;
        }
        else
        {
            temp->next = new_node;
            temp = new_node;
        }
    }

    printf("Enter number of nodes in second list: ");
    scanf("%d", &m);
    printf("Enter %d sorted integers: ", m);
    for (i = 0; i < m; i++)
    {
        new_node = (struct Node *)malloc(sizeof(struct Node));
        scanf("%d", &new_node->data);
        new_node->next = NULL;

        if (head2 == NULL)
        {
            head2 = new_node;
            temp = new_node;
        }
        else
        {
            temp->next = new_node;
            temp = new_node;
        }
    }

    struct Node *head3 = NULL;

    if (head1 == NULL)
        head3 = head2;
    else if (head2 == NULL)
        head3 = head1;
    else
    {
        if (head1->data < head2->data)
        {
            head3 = head1;
            head1 = head1->next;
        }
        else
        {
            head3 = head2;
            head2 = head2->next;
        }

        temp = head3;

        while (head1 != NULL && head2 != NULL)
        {
            if (head1->data < head2->data)
            {
                temp->next = head1;
                head1 = head1->next;
            }
            else
            {
                temp->next = head2;
                head2 = head2->next;
            }
            temp = temp->next;
        }

        if (head1 != NULL)
            temp->next = head1;
        else
            temp->next = head2;
    }

    printf("Merged List: ");
    temp = head3;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");

    return 0;
}