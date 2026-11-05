# include <stdio.h>
#include <string.h>

int main() {


    char text [100];
    printf("Enter a string: ");
    fgets(text, sizeof(text), stdin);

    text[strcspn(text, "\n")] = '\0';

    int count = 0;
    for (int i = 0; text[i] != '\0'; i++) {
        if (text[i] == ' ') {
            text[i] = '*';  
            count++;       
        }
    }
    printf("Modified string: %s\n", text);
    printf("Number of spaces replaced: %d\n", count);

    return 0;
}
