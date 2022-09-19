#include <stdio.h>
int main() {
    int i;
    char c_1 = 'a';
    char c_2 = 'A';
    for(i=0;i<=25;i++) {
        printf("%c\n",c_1+i);
    }

    printf("\n");

    for(i=0;i<=25;i++) {
        printf("%c\n",c_2+i);
    }
}
