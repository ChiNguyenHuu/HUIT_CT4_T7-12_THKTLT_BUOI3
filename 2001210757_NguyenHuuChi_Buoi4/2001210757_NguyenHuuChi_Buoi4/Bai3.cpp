//#include <stdio.h>
//#include <ctype.h>
//#include <string.h>
//
//// Hàm xóa khoảng trắng thừa và chuẩn hóa chuỗi
//void trimAndReduceSpaces(char* s) {
//    int i = 0, j = 0;
//    bool inWord = false;
//
//    // Xóa khoảng trắng ở đầu
//    while (isspace((unsigned char)s[i])) {
//        i++;
//    }
//
//    // Xóa khoảng trắng thừa ở giữa và cuối chuỗi
//    while (s[i]) {
//        if (isspace((unsigned char)s[i])) {
//            if (inWord) {
//                s[j++] = ' ';
//                inWord = false;
//            }
//        }
//        else {
//            s[j++] = s[i];
//            inWord = true;
//        }
//        i++;
//    }
//
//    // Xóa khoảng trắng ở cuối nếu có
//    if (j > 0 && s[j - 1] == ' ') {
//        j--;
//    }
//
//    s[j] = '\0';
//}
//
//int main() {
//    char s[200];
//
//    printf("Nhap chuoi: ");
//    fgets(s, sizeof(s), stdin);
//
//    // Xóa ký tự xuống dòng cuối chuỗi nếu có
//    s[strcspn(s, "\n")] = '\0';
//
//    trimAndReduceSpaces(s);
//
//    printf("Chuoi sau khi chuan hoa: \"%s\"\n", s);
//
//    return 0;
//}
