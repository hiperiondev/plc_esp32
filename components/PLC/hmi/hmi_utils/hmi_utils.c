#include <stddef.h>
#include <string.h>
#include <ctype.h>

char* rtrim(char *str) {
    if (str == NULL || *str == '\0') {
        return str;
    }

    int len = strlen(str);
    char *p = str + len - 1;
    while (p >= str && isspace(*p)) {
        *p = '\0';
        --p;
    }

    return str;
}

char* ltrim(char *str) {
    if (str == NULL || *str == '\0') {
        return str;
    }

    int len = 0;
    char *p = str;
    while (*p != '\0' && isspace(*p)) {
        ++p;
        ++len;
    }

    memmove(str, p, strlen(str) - len + 1);

    return str;
}

char* trim(char *str) {
    str = rtrim(str);
    str = ltrim(str);

    return str;
}
