#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char str[100];
    char hex_str[100] = "";
    int i, j = 0;
    fgets(str, sizeof(str), stdin);
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == '-' && (i == 0 || (str[i - 1] != '-' &&!isxdigit(str[i - 1])))) {
            hex_str[j++] = str[i];
        } else if (isxdigit(str[i])) {
            hex_str[j++] = str[i];
        }
    }
    hex_str[j] = '\0';
    long decimal = strtol(hex_str, NULL, 16);
    printf("%s:%ld", hex_str, decimal);
    return 0;
}