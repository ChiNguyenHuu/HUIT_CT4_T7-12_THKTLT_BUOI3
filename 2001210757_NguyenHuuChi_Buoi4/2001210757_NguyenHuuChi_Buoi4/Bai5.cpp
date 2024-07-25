//#include <stdio.h>
//#include <string.h>
//
//void splitName(const char* fullName, char* middleName, char* lastName) {
//    // Tìm vị trí khoảng trắng cuối cùng trong chuỗi fullName
//    const char* lastSpace = strrchr(fullName, ' ');
//
//    if (lastSpace != NULL) {
//        // Sao chép phần họ lót vào middleName
//        strncpy(middleName, fullName, lastSpace - fullName);
//        middleName[lastSpace - fullName] = '\0'; // Kết thúc chuỗi họ lót
//
//        // Sao chép phần tên vào lastName
//        strcpy(lastName, lastSpace + 1);
//    }
//    else {
//        // Nếu không tìm thấy khoảng trắng, toàn bộ chuỗi fullName là tên
//        strcpy(middleName, "");
//        strcpy(lastName, fullName);
//    }
//}
//
//int main() {
//    char fullName[200];
//    char middleName[200];
//    char lastName[50];
//
//    printf("Nhap ho ten day du: ");
//    fgets(fullName, sizeof(fullName), stdin);
//    fullName[strcspn(fullName, "\n")] = '\0'; // Xóa ký tự xuống dòng nếu có
//
//    splitName(fullName, middleName, lastName);
//
//    printf("Ho lot: \"%s\"\n", middleName);
//    printf("Ten: \"%s\"\n", lastName);
//
//    return 0;
//}
