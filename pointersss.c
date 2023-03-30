#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int strnumcmp(const char* s1, const char* s2) {
    int i = 0, j = 0;
    while (s1[i] != '\0' && s2[j] != '\0') {
        if (isdigit(s1[i]) && isdigit(s2[j])) {  // compare digits
            int num1 = atoi(s1 + i), num2 = atoi(s2 + j);
            if (num1 != num2) {
                return num1 - num2;
            }
            while (isdigit(s1[i])) i++;  // move past the digits
            while (isdigit(s2[j])) j++;
        }
        else if (s1[i] == s2[j]) {  // compare characters
            i++;
            j++;
        }
        else {
            return s1[i] - s2[j];
        }
    }
    if (s1[i] == '\0' && s2[j] == '\0') {
        return 0;
    }
    else if (s1[i] == '\0') {
        return -1;
    }
    else {
        return 1;
    }
}

int main() {
    int n;
    scanf("%d", &n);
    char** strings = malloc(n * sizeof(char*));
    for (int i = 0; i < n; i++) {
        strings[i] = malloc(31 * sizeof(char));
        scanf("%s", strings[i]);
    }
    qsort(strings, n, sizeof(char*), (int (*)(const void*, const void*)) strnumcmp);
    for (int i = 0; i < n; i++) {
        printf("%s ", strings[i]);
    }
    printf("\n");
    for (int i = 0; i < n; i++) {
        free(strings[i]);
    }
    free(strings);
    return 0;
}
