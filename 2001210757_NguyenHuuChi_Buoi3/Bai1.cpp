//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//#define MAX 100
//
//void createMatrix(int a[MAX][MAX], int m, int n, int maxVal);
//void printMatrix(int a[MAX][MAX], int m, int n);
//void rowSum(int a[MAX][MAX], int m, int n);
//void maxInColumns(int a[MAX][MAX], int m, int n);
//void printBorders(int a[MAX][MAX], int m, int n);
//void findLocalMaxima(int a[MAX][MAX], int m, int n);
//void findQueens(int a[MAX][MAX], int m, int n);
//void findSaddlePoints(int a[MAX][MAX], int m, int n);
//void printEvenRows(int a[MAX][MAX], int m, int n);
//void sortRows(int a[MAX][MAX], int m, int n);
//void swap(int* a, int* b);
//void sortArray(int arr[], int n);
//
//int main() {
//    int a[MAX][MAX], m, n, choice, maxVal;
//
//    printf("Enter the number of rows: ");
//    scanf("%d", &m);
//    printf("Enter the number of columns: ");
//    scanf("%d", &n);
//    printf("Enter the maximum value for elements: ");
//    scanf("%d", &maxVal);
//
//    srand(time(0));
//
//    while (1) {
//        printf("\nMenu:\n");
//        printf("1. Create and print matrix\n");
//        printf("2. Calculate and print row sums\n");
//        printf("3. Print maximum values in each column\n");
//        printf("4. Print border elements\n");
//        printf("5. Print local maxima\n");
//        printf("6. Print queen elements\n");
//        printf("7. Print saddle points\n");
//        printf("8. Print rows with only even numbers\n");
//        printf("9. Sort rows\n");
//        printf("0. Exit\n");
//        printf("Enter your choice: ");
//        scanf("%d", &choice);
//
//        switch (choice) {
//        case 1:
//            createMatrix(a, m, n, maxVal);
//            printMatrix(a, m, n);
//            break;
//        case 2:
//            rowSum(a, m, n);
//            break;
//        case 3:
//            maxInColumns(a, m, n);
//            break;
//        case 4:
//            printBorders(a, m, n);
//            break;
//        case 5:
//            findLocalMaxima(a, m, n);
//            break;
//        case 6:
//            findQueens(a, m, n);
//            break;
//        case 7:
//            findSaddlePoints(a, m, n);
//            break;
//        case 8:
//            printEvenRows(a, m, n);
//            break;
//        case 9:
//            sortRows(a, m, n);
//            printMatrix(a, m, n);
//            break;
//        case 0:
//            exit(0);
//        default:
//            printf("Invalid choice!\n");
//        }
//    }
//
//    return 0;
//}
//
//void createMatrix(int a[MAX][MAX], int m, int n, int maxVal) {
//    for (int i = 0; i < m; i++) {
//        for (int j = 0; j < n; j++) {
//            a[i][j] = rand() % (maxVal + 1);
//        }
//    }
//}
//
//void printMatrix(int a[MAX][MAX], int m, int n) {
//    for (int i = 0; i < m; i++) {
//        for (int j = 0; j < n; j++) {
//            printf("%d\t", a[i][j]);
//        }
//        printf("\n");
//    }
//}
//
//void rowSum(int a[MAX][MAX], int m, int n) {
//    for (int i = 0; i < m; i++) {
//        int sum = 0;
//        for (int j = 0; j < n; j++) {
//            sum += a[i][j];
//        }
//        printf("Sum of row %d: %d\n", i, sum);
//    }
//}
//
//void maxInColumns(int a[MAX][MAX], int m, int n) {
//    for (int j = 0; j < n; j++) {
//        int max = a[0][j];
//        for (int i = 1; i < m; i++) {
//            if (a[i][j] > max) {
//                max = a[i][j];
//            }
//        }
//        printf("Max in column %d: %d\n", j, max);
//    }
//}
//
//void printBorders(int a[MAX][MAX], int m, int n) {
//    printf("Top border: ");
//    for (int j = 0; j < n; j++) printf("%d ", a[0][j]);
//    printf("\nBottom border: ");
//    for (int j = 0; j < n; j++) printf("%d ", a[m - 1][j]);
//    printf("\nLeft border: ");
//    for (int i = 0; i < m; i++) printf("%d ", a[i][0]);
//    printf("\nRight border: ");
//    for (int i = 0; i < m; i++) printf("%d ", a[i][n - 1]);
//    printf("\n");
//}
//
//void findLocalMaxima(int a[MAX][MAX], int m, int n) {
//    for (int i = 0; i < m; i++) {
//        for (int j = 0; j < n; j++) {
//            int isMaxima = 1;
//            if (i > 0 && a[i][j] <= a[i - 1][j]) isMaxima = 0;
//            if (i < m - 1 && a[i][j] <= a[i + 1][j]) isMaxima = 0;
//            if (j > 0 && a[i][j] <= a[i][j - 1]) isMaxima = 0;
//            if (j < n - 1 && a[i][j] <= a[i][j + 1]) isMaxima = 0;
//            if (isMaxima) printf("%d at (%d, %d)\n", a[i][j], i, j);
//        }
//    }
//}
//
//void findQueens(int a[MAX][MAX], int m, int n) {
//    for (int i = 0; i < m; i++) {
//        for (int j = 0; j < n; j++) {
//            int isQueen = 1;
//            for (int k = 0; k < m; k++) {
//                if (k != i && a[i][j] < a[k][j]) {
//                    isQueen = 0;
//                    break;
//                }
//            }
//            for (int l = 0; l < n; l++) {
//                if (l != j && a[i][j] < a[i][l]) {
//                    isQueen = 0;
//                    break;
//                }
//            }
//            if (isQueen) printf("%d at (%d, %d)\n", a[i][j], i, j);
//        }
//    }
//}
//
//void findSaddlePoints(int a[MAX][MAX], int m, int n) {
//    for (int i = 0; i < m; i++) {
//        for (int j = 0; j < n; j++) {
//            int isMinRow = 1, isMaxCol = 1;
//            for (int k = 0; k < n; k++) {
//                if (a[i][j] > a[i][k]) {
//                    isMinRow = 0;
//                    break;
//                }
//            }
//            for (int l = 0; l < m; l++) {
//                if (a[i][j] < a[l][j]) {
//                    isMaxCol = 0;
//                    break;
//                }
//            }
//            if (isMinRow && isMaxCol) printf("%d at (%d, %d)\n", a[i][j], i, j);
//        }
//    }
//}
//
//void printEvenRows(int a[MAX][MAX], int m, int n) {
//    for (int i = 0; i < m; i++) {
//        int allEven = 1;
//        for (int j = 0; j < n; j++) {
//            if (a[i][j] % 2 != 0) {
//                allEven = 0;
//                break;
//            }
//        }
//        if (allEven) {
//            printf("Row %d: ", i);
//            for (int j = 0; j < n; j++) {
//                printf("%d ", a[i][j]);
//            }
//            printf("\n");
//        }
//    }
//}
//
//void sortRows(int a[MAX][MAX], int m, int n) {
//    for (int i = 0; i < m; i++) {
//        sortArray(a[i], n);
//    }
//}
//
//void swap(int* a, int* b) {
//    int temp = *a;
//    *a = *b;
//    *b = temp;
//}
//
//void sortArray(int arr[], int n) {
//    for (int i = 0; i < n - 1; i++) {
//        for (int j = i + 1; j < n; j++) {
//            if (arr[i] > arr[j]) {
//                swap(&arr[i], &arr[j]);
//            }
//        }
//    }
//}
