#include <stdio.h>
/**
 * 
 */
int M, N;
void print_arg(void);
void reverseArray(int arr[M][N]);
void swap(int* a, int* b);
 int main(void)
 {
    int i, j;
    const int row, col;
    
    printf("Enter row and col: ");
    scanf("%d%d", &row, &col);
    printf("Matrix[%d][%d]\n", row, col);
    int arr[row][col];
    
    i = 0;
    do {
            j = 0;
            for (; j < col;)
            {
                printf("value at position arr[%d][%d]: ", i, j);
                scanf("%d", &*(*(arr + i) + j));
                ++j;
            }
            i++;
    } while (i < row);
    printf("Matrix arr[%d][%d] is:", row, col);
    for (i = 0; i < row; ++i)
    {
        putchar(10);
        j = 0;
        while (j < col)
        {
            printf("%d", *(*(arr + i) + j));
            ++j;
        }
    }
    print_arg();
    reverseArray(arr);
    return (0);
 }
void print_arg(void)
{
    printf("\nYou are about to reverse the matrix\nEnter row and col: ");
    scanf("%d%d", &M, &N);
    int arr[M][N];

    printf("The reverse of Matrix arr[%d][%d] is: ", M, N);
}
// Function to reverse
// the given 2D arr[][]
void reverseArray(int arr[M][N])
{
 
    // Traverse each row of arr[][]
    for (int i = 0; i < M; i++) 
    {
 
        // Initialise start and end index
        int start = 0;
        int end = N - 1;
 
        // Till start < end, swap the element
        // at start and end index
        while (start < end)
        {
 
            // Swap the element
            swap(&arr[i][start],
                 &arr[i][end]);
 
            // Increment start and decrement
            // end for next pair of swapping
            start++;
            end--;
        }
    }
 
    // Print the arr[][] after
    // reversing every row
    for (int i = 0; i < M; i++) 
    {
        putchar(10);
        for (int j = 0; j < N; j++) 
        {
            printf("%d", *(*(arr + i) + j));
        }
    }
}
// A utility function
// to swap the two element
void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
