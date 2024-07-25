//#include <stdio.h>
//#include <string.h>
//#include <stdbool.h>
//#include <ctype.h>
//
//// Hàm tìm kiếm tên trong chuỗi họ tên
//bool searchName(const char* fullName, const char* name) {
//    const char* pos = strstr(fullName, name);
//
//    // Nếu tìm thấy tên trong chuỗi họ tên
//    if (pos != NULL) {
//        // Kiểm tra xem ký tự trước và sau tên có phải là khoảng trắng hoặc kết thúc chuỗi
//        bool isValidBefore = (pos == fullName) || isspace((unsigned char)*(pos - 1));
//        bool isValidAfter = (*(pos + strlen(name)) == '\0') || isspace((unsigned char)*(pos + strlen(name)));
//
//        if (isValidBefore && isValidAfter) {
//            return true;
//        }
//    }
//    return false;
//}
//
//int main() {
//    char fullName[200];
//    char name[50];
//
//    printf("Nhap ho ten day du: ");
//    fgets(fullName, sizeof(fullName), stdin);
//    fullName[strcspn(fullName, "\n")] = '\0'; // Xóa ký tự xuống dòng nếu có
//
//    printf("Nhap ten can tim: ");
//    fgets(name, sizeof(name), stdin);
//    name[strcspn(name, "\n")] = '\0'; // Xóa ký tự xuống dòng nếu có
//
//    if (searchName(fullName, name)) {
//        printf("Ten '%s' ton tai trong chuoi ho ten '%s'.\n", name, fullName);
//    }
//    else {
//        printf("Ten '%s' khong ton tai trong chuoi ho ten '%s'.\n", name, fullName);
//    }
//
//    return 0;
//}
