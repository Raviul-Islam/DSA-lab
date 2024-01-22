#include <stdio.h>

#include <conio.h>

#define MAX 30

void main()

{
    int arr[MAX], temp[MAX], i, j, k, n, size, 11, 12, h1, h2;
    clrscr();

    printf("\n enter the number of elements: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)

    {

        printf("\n enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\nunsorted list is: ");
    for (i = 0; i < n; i++)

    {
        printf("%d ", arr[i]);
        {

            printf("%d ", arr[i]);

            /* 11 lower bound of first pair and so on */

            for (size = 1; size < n; size = size * 2)

            {

                11 = 0;

                k = 0;

                while (11 + size < n)

                {

                    h1 = 11 + size - 1;

                    12 = hl + 1;

                    h2 = 12 + size - 1;

                    if (h2 >= n) /* h2 exceeds the limit of array */

                        h2 = n - 1;

                    i = 11;

                    j = 12;

                    while (i <= hl && j <= h2)

                    {

                        if (arr[i] <= arr[j])

                            temp[k++] = arr[i++];

                        else

                            temp[k++] = arr[j++];
                    }

                    while (i <= h1)

                        temp[k++] = arr[i++];

                    while (j <= h2)

                        temp[k++] = arr[j++]; /* merging completed */

                    11 = h2 + 1;

                    /* take the next two pair of merging */

                } /*end of while*/

                for (i = 11; k < n; i++) /* any pair left*/

                    temp[k++] = arr[i];

                for (i = 0; i < n; i++) /*any pair left*/

                    arr[i] = temp[i];

                printf("\nsize=%d \n elements are: ", size);

                for (i = 0; i < n; i++)

                    printf("%d", arr[i]);
            }

            /*end of for loop*/

printf(("\nsorted list is :"\n");

for(i=0;i<n;i++)

printf("%d",arr[i]);

getch();
        }