#include <stdio.h>
#include <conio.h>
#define SIZE 20
/**************Function Declaration Begin**********/
void get_elements(int A[], int n);
void movedown(int pos, int A[], int n);
void Heap_sort(int A[], int n);
void show_elements(int A[], int n);
/**************Function Declaration End**********/
void main()
{
    int n, A[SIZE];
    printf("\n\t\t Program for Heap sort: ");
    printf("\n How many numbers you want to store in the array: ");
    scanf("%d", &n);
    get_elements(A, n);
    Heap_sort(A, n);
    show_elements(A, n);
    getch();
}
/********** heapify & adjusting element position **********/
/********** Function Definition begins **********/
void movedown(int pos, int A[], int n)
{
    int k, r, l, max, temp;
    for (k = pos;;)
    {
        l = 2 * k + 1;
        r = l + 1;
        if (l >= n)
        {
            return;
        }
        else if (r >= n)
        {
            max = 1;
        }
        else if (A[l] > A[r])
        {
            max = l;
        }
        else
        {
            max = r;
        }
    }
    if (A[k] > A[max])
    {
        return;
    }
    temp = A[k];
    A[k] = A[max];
    A[max] = temp;
    k = max;
} /********** Function Definition ends **********/
/*** heap sorting technique *****************/
/********** Function Definition begins **********/
void Heap_sort(int A[], int n)
{
    int i, temp;
    for (i = n / 2; i >= 0; --i)
    /* Performimg Heapify */
    {
        movedown(i, A, n);
    }
    for (i = n - 1; i > 0; i--)
    {
        temp = A[0];
        A[0] = A[i];
        A[i] = temp;
        movedown(0, A, i);
    }
} /********** Function Definition ends **********/
/********** inputting elements **********/
/********** Function Definition begins **********/
void get_elements(int A[], int n)
{
    int i;
    printf("\n Enter %d elements : \n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &A[i]);
    printf("\n Array before sorting: ");
    for (i = 0; i < n; ++i)
        printf("%d ", A[i]);
    printf("\n");
}
/********** Function Definition ends **********/
/********** displaying elements **********/
/********** Function Definition begins **********/
void show_elements(int A[], int n)
{
    int i;
    printf("\n Array after sorting : ");
    for (i = 0; i < n; ++i)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}
/********** Function Definition ends **********/
