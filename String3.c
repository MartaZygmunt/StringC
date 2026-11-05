# include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {

    char name[100];
    printf("Enter a name: ");
    fgets(name, sizeof(name), stdin);

    name[0] = toupper(name[0]); 
    for (int i = 1; name[i] != '\0'; i++) 
    if (name[i] == ' ') {
            name[i + 1] = toupper(name[i + 1]);
        }
        
    printf("Result: %s\n", name);

    return 0;
}    










    

