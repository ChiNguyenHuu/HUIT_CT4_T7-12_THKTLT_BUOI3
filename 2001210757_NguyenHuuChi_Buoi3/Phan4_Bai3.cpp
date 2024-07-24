#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 100

void taoMaTran(int a[MAX][MAX], int m, int n, int maxVal);
void xuatMaTran(int a[MAX][MAX], int m, int n);


int main() {
    int a[MAX][MAX], m, n, luaChon, maxVal, i, j, k, l;

    printf("Nhap so dong va so cot cua ma tran: ");
    scanf("%d %d", &m, &n);
    printf("Nhap gia tri lon nhat cho cac phan tu: ");
    scanf("%d", &maxVal);

    if (m <= 0 || n <= 0 || m > MAX || n > MAX) {
        printf("Kich thuoc ma tran khong hop le.\n");
        return 1;
    }

    srand(time(0));

    while (1) {
        printf("\nMenu:\n");
        printf("1. Tao va xuat ma tran\n");
        printf("2. Xuat cot chua chi so le\n");
        printf("3. Tim phan tu lon nhat tren bien\n");
        printf("4. Dem phan tu co chu so '2'\n");
        printf("5. Xuat phan tu nho nhat\n");
        printf("6. Sap xep ma tran theo dong (dong le tang dan, dong chan giam dan)\n");
        printf("7. Sap xep ma tran theo cot (cot le giam dan, cot chan tang dan)\n");
        printf("8. Kiem tra ma tran co sap xep theo thu tu zigzag\n");
        printf("9. Liet ke chi so cac dong chua toan gia tri chan\n");
        printf("10. Liet ke cac dong chua gia tri giam dan\n");
        printf("11. Tim gia tri xuat hien nhieu nhat trong ma tran\n");
        printf("12. Tim chu so xuat hien nhieu nhat trong ma tran\n");
        printf("13. Liet ke cot co tong nho nhat\n");
        printf("14. Hoan vi hai cot\n");
        printf("15. Hoan vi hai dong\n");
        printf("0. Thoat\n");
        printf("Nhap lua chon cua ban: ");
        scanf("%d", &luaChon);

        switch (luaChon) {
            case 1:
                taoMaTran(a, m, n, maxVal);
                xuatMaTran(a, m, n);
                break;
           
            case 0:
                exit(0);
            default:
                printf("Lua chon khong hop le!\n");
        }
    }

    return 0;
}

void taoMaTran(int a[MAX][MAX], int m, int n, int maxVal) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            a[i][j] = rand() % (maxVal + 1);
        }
    }
}

void xuatMaTran(int a[MAX][MAX], int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
}

