#include <stdio.h>

int main() {
    int age;
    char sts;
    
    
    printf("Enter the age: ");
    scanf("%d", &age);
    
    printf("Enter the status (W for working, R for retired): ");
    scanf("%c", &sts);
    
   
    if (age > 59) {
        if (sts == 'W') {
            printf("Working senior\n");
        } else {
            printf("Retired senior\n");
        }
    } else if (age > 20) {
        printf("Adult\n");
    } else if (age > 12) {
        printf("Teen\n");
    } else {
        printf("Child\n");
    }
    
    return 0;
}
