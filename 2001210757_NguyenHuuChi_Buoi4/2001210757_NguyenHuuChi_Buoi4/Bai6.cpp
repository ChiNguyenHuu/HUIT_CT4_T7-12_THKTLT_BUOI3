#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

#define MAX_TEXT_LENGTH 1000
#define MAX_PATTERN_LENGTH 100
#define MAX_NAME_LENGTH 100
#define MAX_STUDENTS 100

typedef struct {
    char name[MAX_NAME_LENGTH];
} Student;

void inputStudents(Student students[], int* count) {
    printf("Nhap so sinh vien: ");
    scanf("%d", count);
    getchar(); // Xóa ký tự xuống dòng còn lại

    for (int i = 0; i < *count; i++) {
        printf("Nhap ten sinh vien %d: ", i + 1);
        fgets(students[i].name, sizeof(students[i].name), stdin);
        students[i].name[strcspn(students[i].name, "\n")] = '\0'; // Xóa ký tự xuống dòng nếu có
    }
}

void displayStudents(const Student students[], int count) {
    printf("\nDanh sach sinh vien:\n");
    for (int i = 0; i < count; i++) {
        printf("Sinh vien %d: %s\n", i + 1, students[i].name);
    }
}

void bruteForceSearch(const char* text, const char* pattern) {
    int textLen = strlen(text);
    int patternLen = strlen(pattern);

    printf("Vi tri cac chuoi '%s' trong chuoi:\n", pattern);

    for (int i = 0; i <= textLen - patternLen; i++) {
        int j;
        for (j = 0; j < patternLen; j++) {
            if (text[i + j] != pattern[j]) {
                break;
            }
        }
        if (j == patternLen) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

void searchFromFile(const char* fileName, const char* pattern) {
    FILE* file = fopen(fileName, "r");
    if (file == NULL) {
        perror("Loi mo file");
        return;
    }

    char fileContent[MAX_TEXT_LENGTH];
    fread(fileContent, sizeof(char), sizeof(fileContent) - 1, file);
    fclose(file);

    fileContent[strcspn(fileContent, "\n")] = '\0'; // Xóa ký tự xuống dòng nếu có

    bruteForceSearch(fileContent, pattern);
}

int main() {
    Student students[MAX_STUDENTS];
    int studentCount = 0;

    char text[MAX_TEXT_LENGTH];
    char pattern[MAX_PATTERN_LENGTH];
    char fileName[100];

    int choice;

    do {
        printf("\n----- MENU -----\n");
        printf("1. Nhap danh sach sinh vien\n");
        printf("2. Hien thi danh sach sinh vien\n");
        printf("3. Tim chuoi con trong chuoi van ban nhap tu ban phim\n");
        printf("4. Tim chuoi con trong chuoi van ban tu tep tin\n");
        printf("0. Thoat\n");
        printf("Chon tuy chon: ");
        scanf("%d", &choice);
        getchar(); // Xóa ký tự xuống dòng còn lại

        switch (choice) {
        case 1:
            inputStudents(students, &studentCount);
            break;

        case 2:
            displayStudents(students, studentCount);
            break;

        case 3:
            printf("Nhap chuoi van ban: ");
            fgets(text, sizeof(text), stdin);
            text[strcspn(text, "\n")] = '\0'; // Xóa ký tự xuống dòng nếu có

            printf("Nhap chuoi can tim: ");
            fgets(pattern, sizeof(pattern), stdin);
            pattern[strcspn(pattern, "\n")] = '\0'; // Xóa ký tự xuống dòng nếu có

            bruteForceSearch(text, pattern);
            break;

        case 4:
            printf("Nhap ten file (bao gom duong dan): ");
            fgets(fileName, sizeof(fileName), stdin);
            fileName[strcspn(fileName, "\n")] = '\0'; // Xóa ký tự xuống dòng nếu có

            printf("Nhap chuoi can tim: ");
            fgets(pattern, sizeof(pattern), stdin);
            pattern[strcspn(pattern, "\n")] = '\0'; // Xóa ký tự xuống dòng nếu có

            searchFromFile(fileName, pattern);
            break;

        case 0:
            printf("Thoat chuong trinh.\n");
            break;

        default:
            printf("Lua chon khong hop le. Vui long chon lai.\n");
            break;
        }
    } while (choice != 0);

    return 0;
}
