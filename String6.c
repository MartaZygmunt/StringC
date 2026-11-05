# include <stdio.h>
#include <string.h>

int main() {
    char words [100];
    printf("Enter a string: ");
    fgets(words, sizeof(words), stdin);

    words[strcspn(words, "\n")] = '\0';
    int count = 0;
    char *token = strtok(words, " ");

    while (token != NULL) {
        count++;
        token = strtok(NULL, " ");
    }
    printf("Text consists of %d words.\n", count);
    return 0;
}