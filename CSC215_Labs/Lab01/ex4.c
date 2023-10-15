#include <stdio.h>
int main(){
    char letter = 'b';
    printf("%c\n", letter);
    printf("%d\n", letter);
    printf("%c\t%d\n", letter, letter);
    printf("%c\t%c\n", letter, letter+15);
    return 0;
}
