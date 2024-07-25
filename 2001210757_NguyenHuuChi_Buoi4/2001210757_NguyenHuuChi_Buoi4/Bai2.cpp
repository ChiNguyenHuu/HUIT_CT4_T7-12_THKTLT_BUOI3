//#include <stdio.h>
//#include <ctype.h>
//#include <stdbool.h>
//
//void capitalizeWords(char* s) {
//    bool newWord = true;
//
//    while (*s) {
//        if (isspace((unsigned char)*s)) {
//            newWord = true;
//        }
//        else {
//            if (newWord) {
//                *s = toupper((unsigned char)*s);
//                newWord = false;
//            }
//            else {
//                *s = tolower((unsigned char)*s);
//            }
//        }
//        s++;
//    }
//}
//
//int main() {
//    char s[200];
//
//    printf("Nhap chuoi: ");
//    fgets(s, sizeof(s), stdin);
//
//    capitalizeWords(s);
//
//    printf("Chuoi sau khi bien doi: %s\n", s);
//
//    return 0;
//}
