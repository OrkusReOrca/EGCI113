#include <stdio.h>

#define MaxRow 10 // array-maximum no of rows
#define MinRow 1  // array-minimum no of rows
#define MaxCol 6  // array-maximum no of columns
#define MinCol 1  // array-minimum no of columns

// Function declarations
int ReadArraySize(int, int);
void InitArray(int [][MaxCol], int [][MaxCol], int, int);
void InitArrayC(int [][MaxCol], int [][MaxCol], int [][MaxCol], int, int);
void DispResult(int [][MaxCol], int, int, int);
void ReadArray(int [][MaxCol], int, int); // to add 1 array at a time
void TransposeMatrix(int [][MaxCol], int [][MaxCol], int, int);

int main()
{
    int RowSize, ColSize;
    int a[MaxRow][MaxCol], b[MaxRow][MaxCol], c[MaxRow][MaxCol];

    printf("Please specify no. of rows of arrays: ");
    RowSize = ReadArraySize(MinRow, MaxRow);

    printf("Please specify no. of columns of arrays: ");
    ColSize = ReadArraySize(MinCol, MaxCol);
    printf("Array size is set to: [%d] [%d]\n", RowSize, ColSize);

    ReadArray(a, RowSize, ColSize);
    ReadArray(b, RowSize, ColSize);

    // find array c[][] = array a[][] + b[][]
    InitArrayC(a, b, c, RowSize, ColSize);

    printf("Displaying array a:\n");
    DispResult(a, RowSize, ColSize, 1);

    printf("\nDisplaying array b:\n");
    DispResult(b, RowSize, ColSize, 1);

    printf("\nDisplaying result in array c:\n");
    DispResult(c, RowSize, ColSize, 1);

    // Calculate and display the transpose of array c
    printf("\nDisplaying transpose of array c:\n");
    TransposeMatrix(c, a, RowSize, ColSize);
    DispResult(a, ColSize, RowSize, 2);

    printf("\nPlease type any key to exit: ");
    getchar();

    return 0;
}

int ReadArraySize(int MinSize, int MaxSize)
{
    int size;
    do
    {
        printf(" range[%d..%d] : ", MinSize, MaxSize);
        scanf("%d", &size);
    } while (size > MaxSize || size <= MinSize);

    return size;
}

void InitArray(int a[][MaxCol], int b[][MaxCol], int RowSize, int ColSize)
{
    int i, j;
    printf("\nInitializing arrays a and b..\n");
    for (i = 0; i < RowSize; i++)
        for (j = 0; j < ColSize; j++)
        {
            a[i][j] = i + j;
            b[i][j] = 2 * (i + j);
        }
}

void InitArrayC(int a[][MaxCol], int b[][MaxCol], int c[][MaxCol], int RowSize, int ColSize)
{
    int i, j;
    printf("Calculating array c..\n\n");
    for (i = 0; i < RowSize; i++)
        for (j = 0; j < ColSize; j++)
            c[i][j] = a[i][j] + b[i][j];
}

void DispResult(int array[][MaxCol], int RowSize, int ColSize, int arrayNumber)
{
    int i, j;
    for (i = 0; i < RowSize; i++)
    {
        for (j = 0; j < ColSize; j++)
            printf("%4d", array[i][j]);
        printf("\n");
    }
}

void ReadArray(int array[][MaxCol], int RowSize, int ColSize)
{
    int i, j;
    printf("\nEnter array values:\n");
    for (i = 0; i < RowSize; i++)
        for (j = 0; j < ColSize; j++)
        {
            printf("Enter value for element [%d][%d]: ", i, j);
            scanf("%d", &array[i][j]);
        }
}

void TransposeMatrix(int original[][MaxCol], int transposed[][MaxCol], int RowSize, int ColSize)
{
    int i, j;
    for (i = 0; i < ColSize; i++)
        for (j = 0; j < RowSize; j++)
            transposed[i][j] = original[j][i];
}
