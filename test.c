#include <stdio.h>
#include <ctype.h>
int main() {
    int flag = 0;
    int ch;
    while ((ch = getchar() != '\n')) {
        if (isalpha(ch)) {
            if (!flag) {
                if (islower(ch))
                    ch = toupper(ch);
                putchar(ch);
                flag = 1;
            }
            else {
                putchar(ch);
            }
        }
        else {
            if (flag) {
                putchar('\n');
                flag = 0;
            }
        }
    }
    if (flag) {
        putchar('\n');
    }
    return 0;
}