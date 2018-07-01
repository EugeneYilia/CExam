#include <stdio.h>
#include <string.h>

int main() {
    char id[18];// 6--13
    printf("Please input an id number:");
    scanf("%s", &id);
    int result = checkYear(id);
    if (result == 1) {
        println("yes");
    } else if (result == 0) {
        println("no");
    }
    return 0;
}

int checkYear(char id[]) {
    char all[4];
    strncpy(all, id + 6, 4);
    int n;
    sscanf(all, "%d", &n);
    if (n <= 2016 && n >= 1900) {
        return 1;
    } else {
        return 0;
    }
}

void println(char a[]) {
    printf("%s\n", a);
}