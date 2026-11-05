# include <stdio.h>
#include <string.h>

int main() {
    char text[100];
    printf("Enter a string: ");
    fgets(text, sizeof(text), stdin);

    char *result = strchr(text, 's');
    if (result == NULL) {
        printf("Result: letter 's' not found.\n");
    } else {
        int position = result - text;
        printf("Result: position is %d\n", position);
    }
    return 0;
}