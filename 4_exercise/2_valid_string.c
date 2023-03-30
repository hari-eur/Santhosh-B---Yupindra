#include <stdio.h>
int main() 
{
    char input[9];
    int i, lower = 0, upper = 0, number = 0, splchar = 0;
    printf("String of 8 characters: ");
    for (i = 0; i < 8; i++) 
    {
        scanf("%c", &input[i]);
        if (input[i] >= 'a' && input[i] <= 'z')
            lower = 1;
        else if (input[i] >= 'A' && input[i] <= 'Z')
            upper = 1;
        else if (input[i] >= '0' && input[i] <= '9')
            number = 1;
        else
            splchar = 1;
    }
    input[8] = '\0';
    if (lower && upper && number && splchar)
        printf("Valid String\n");
    else
        printf("Not a Valid String\n");
}
