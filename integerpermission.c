#include <stdio.h>
int main() {
    int code;
    printf("Enter permission code: ");
    scanf("%d", &code);
    if (code & 1) 
        printf("Read: Yes\n");
     else 
        printf("Read: No\n");
    

    if (code & 2) 
        printf("Write: Yes\n");
    else 
        printf("Write: No\n");
    

    if (code & 4) 
        printf("Execute: Yes\n");
     else 
        printf("Execute: No\n");
    

    return 0;
}