/*
 * Copyright 2021 Emiliano Gonzalez (egonzalez . hiperion @ gmail . com))
 * * Project Site:  *
 *
 * This is based on other projects:
 *    PLsi (https://github.com/ElPercha/PLsi)
 *
 *    please contact their authors for more information.
 *
 * This is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3, or (at your option)
 * any later version.
 *
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this software; see the file COPYING.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street,
 * Boston, MA 02110-1301, USA.
 *
 */

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
