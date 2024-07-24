//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//#define MAX 100
//
//void taoMaTran(int a[MAX][MAX], int n, int maxVal);
//void xuatMaTran(int a[MAX][MAX], int n);
//void xuatDuongCheoChinh(int a[MAX][MAX], int n);
//void xuatDuongCheoSongSong(int a[MAX][MAX], int n);
//void timMaxTamGiacTren(int a[MAX][MAX], int n);
//void sapXepZicZac(int a[MAX][MAX], int n);
//void sapXepDuongCheoChinh(int a[MAX][MAX], int n);
//void hoanDoi(int* a, int* b);
//void sapXepMang(int arr[], int n);
//
//int main() {
//    int a[MAX][MAX], n, luaChon, maxVal;
//
//    printf("Nhap cap cua ma tran vuong (n >= 5): ");
//    scanf("%d", &n);
//    printf("Nhap gia tri toi da cho cac phan tu: ");
//    scanf("%d", &maxVal);
//
//    if (n < 5) {
//        printf("Cap cua ma tran phai lon hon hoac bang 5.\n");
//        return 1;
//    }
//
//    srand(time(0));
//
//    while (1) {
//        printf("\nMenu:\n");
//        printf("1. Tao va xuat ma tran\n");
//        printf("2. Xuat duong cheo chinh\n");
//        printf("3. Xuat cac duong cheo song song voi duong cheo chinh\n");
//        printf("4. Tim phan tu lon nhat trong tam giac tren cua duong cheo chinh\n");
//        printf("5. Sap xep ma tran kieu zic zac\n");
//        printf("6. Sap xep duong cheo chinh\n");
//        printf("0. Thoat\n");
//        printf("Nhap lua chon cua ban: ");
//        scanf("%d", &luaChon);
//
//        switch (luaChon) {
//        case 1:
//            taoMaTran(a, n, maxVal);
//            xuatMaTran(a, n);
//            break;
//        case 2:
//            xuatDuongCheoChinh(a, n);
//            break;
//        case 3:
//            xuatDuongCheoSongSong(a, n);
//            break;
//        case 4:
//            timMaxTamGiacTren(a, n);
//            break;
//        case 5:
//            sapXepZicZac(a, n);
//            xuatMaTran(a, n);
//            break;
//        case 6:
//            sapXepDuongCheoChinh(a, n);
//            xuatMaTran(a, n);
//            break;
//        case 0:
//            exit(0);
//        default:
//            printf("Lua chon khong hop le!\n");
//        }
//    }
//
//    return 0;
//}
//
//void taoMaTran(int a[MAX][MAX], int n, int maxVal) {
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < n; j++) {
//            a[i][j] = rand() % (maxVal + 1);
//        }
//    }
//}
//
//void xuatMaTran(int a[MAX][MAX], int n) {
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < n; j++) {
//            printf("%d\t", a[i][j]);
//        }
//        printf("\n");
//    }
//}
//
//void xuatDuongCheoChinh(int a[MAX][MAX], int n) {
//    printf("Duong cheo chinh: ");
//    for (int i = 0; i < n; i++) {
//        printf("%d ", a[i][i]);
//    }
//    printf("\n");
//}
//
//void xuatDuongCheoSongSong(int a[MAX][MAX], int n) {
//    printf("Cac duong cheo song song voi duong cheo chinh:\n");
//    for (int d = 1; d < n; d++) {
//        printf("Duong cheo tren duong cheo chinh (d = %d): ", d);
//        for (int i = 0; i < n - d; i++) {
//            printf("%d ", a[i][i + d]);
//        }
//        printf("\n");
//        printf("Duong cheo duoi duong cheo chinh (d = %d): ", d);
//        for (int i = 0; i < n - d; i++) {
//            printf("%d ", a[i + d][i]);
//        }
//        printf("\n");
//    }
//}
//
//void timMaxTamGiacTren(int a[MAX][MAX], int n) {
//    int max = a[0][1];
//    for (int i = 0; i < n; i++) {
//        for (int j = i + 1; j < n; j++) {
//            if (a[i][j] > max) {
//                max = a[i][j];
//            }
//        }
//    }
//    printf("Phan tu lon nhat trong tam giac tren: %d\n", max);
//}
//
//void sapXepZicZac(int a[MAX][MAX], int n) {
//    int temp[MAX * MAX];
//    int index = 0;
//
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < n; j++) {
//            temp[index++] = a[i][j];
//        }
//    }
//
//    sapXepMang(temp, n * n);
//
//    index = 0;
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < n; j++) {
//            a[i][j] = temp[index++];
//        }
//    }
//}
//
//void sapXepDuongCheoChinh(int a[MAX][MAX], int n) {
//    int diag[MAX];
//    for (int i = 0; i < n; i++) {
//        diag[i] = a[i][i];
//    }
//
//    sapXepMang(diag, n);
//
//    for (int i = 0; i < n; i++) {
//        a[i][i] = diag[i];
//    }
//}
//
//void hoanDoi(int* a, int* b) {
//    int temp = *a;
//    *a = *b;
//    *b = temp;
//}
//
//void sapXepMang(int arr[], int n) {
//    for (int i = 0; i < n - 1; i++) {
//        for (int j = i + 1; j < n; j++) {
//            if (arr[i] > arr[j]) {
//                hoanDoi(&arr[i], &arr[j]);
//            }
//        }
//    }
//}
