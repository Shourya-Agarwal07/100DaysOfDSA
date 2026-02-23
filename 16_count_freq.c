// Problem: Given an array of integers, count the frequency of each distinct element and print the result.
#include <stdio.h>

#include <stdio.h>

int main() {
    int n, i, j, c;

    printf("Enter size: ");
    scanf("%d", &n);

    int a[n];
    int b[n];  

    printf("Enter numbers:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        b[i] = 0; 
    }

    for(i = 0; i < n; i++) {

        if(b[i] == 1)
            continue;

        c = 1;

        for(j = i + 1; j < n; j++) {
            if(a[i] == a[j]) {
                c++;
                b[j] = 1; 
            }
        }

        printf("%d occurs %d times\n", a[i], c);
    }

    return 0;
}