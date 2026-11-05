# include <stdio.h>
#include <string.h>

int main() {
    char email[100];
    printf("Enter an email address: ");
    fgets(email, sizeof(email), stdin);

    email[strcspn(email, "\n")] = '\0';

    char *at = strchr(email, '@');
    char *dot = strrchr(email, '.');
    if (at != NULL && dot != NULL && dot > at) {
        int len = strlen(dot) - 1; 
        
        if (len == 2 || len == 3) {
            printf("Valid email!\n");
        } else {
                printf("Invalid email (after the last dot there must be 2 or 3 characters).\n");
            }
    } else {
        printf("Invalid email (wrong format: missing '@', dot, or wrong order).\n");
    }
    return 0;
}
