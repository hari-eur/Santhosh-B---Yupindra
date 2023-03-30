#include <stdio.h>
#include <string.h>

void swap(char *c1, char *c2) 
{
    char temp = *c1;
    *c1 = *c2;
    *c2 = temp;
}

void permute_string(char *str) 
{
      int l = 0;
      int r = strlen(str);
      for (int i = l; i <= r; i++) 
      {
          swap(str + l, str + i);
          permute(str, l + 1, r);
          swap(str + l, str + i);
      }
}

int main() 
{
    char string[9];
    int lower = 0, upper = 0, number = 0, splchar = 0;
    printf("String of 8 characters: ");
    scanf("%s", string);
    if (strlen(string) != 8) 
    {
        printf("String must be 8 characters long!!\n");
    }
    for (int i = 0; i < strlen(string); i++) 
    {
        if (islower(str[i])) 
        {
            lower = 1;
        }
        else if (isupper(str[i])) 
        {
            upper = 1;
        } 
        else if (isdigit(str[i])) 
        {
            number = 1;
        } 
        else 
        {
            splchar = 1;
        }
    }

    if (!lower || !upper || !number || !splchar) 
    {
        printf("String must contain at least one lowercase letter, one uppercase letter, one number, and one special character.\n");
    }
    printf("All permutations of the string:\n");
    permute_string(string);
}
