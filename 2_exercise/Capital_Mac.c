#include <stdio.h>

int main() {
    char mac [17] = "44:d4:54:c2:18:cf";
    for(int i = 0;i < 17; i++){
        if(isalpha(mac[i]))
        mac[i] = toupper(mac[i]);
    }
    for(int i = 0; i < 17; i++)
	    printf("%c", mac[i]);
    printf("\n");
}
