#include <stdio.h>
#include <string.h>

printText(const char *text) {
    int count = 0;
    if (text == NULL) {
        return -1;
    }
    else {
        for (int i = 0; i < strlen(text); i++) {
            count++;
        }
        printf("%s",text);
        return count;


    }
}
