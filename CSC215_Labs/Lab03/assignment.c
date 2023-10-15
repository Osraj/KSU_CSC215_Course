#include <stdio.h>

int main() 
{
    int a_counter = 0;
    int e_counter = 0;
    int i_counter = 0;
    int o_counter = 0;
    int u_counter = 0;

    char str[1024+1];
    printf("Enter the sentence > ");
    gets(str);

    int i;
    for(i=0; str[i]!='\0'; i++) 
    {
        if (str[i] == 'a' || str[i] == 'A')
            a_counter += 1;
        else if (str[i] == 'e' || str[i] == 'E')
            e_counter += 1;
        else if (str[i] == 'i' || str[i] == 'I')
            i_counter += 1;
        else if (str[i] == 'o' || str[i] == 'O')
            o_counter += 1;
        else if (str[i] == 'u' || str[i] == 'U')
            u_counter += 1;
    }

    printf("A/a:%d\tE/e:%d\tI/i:%d\tO/o:%d\tU/u:%d", a_counter, e_counter, i_counter, o_counter, u_counter);

    return 0;


}