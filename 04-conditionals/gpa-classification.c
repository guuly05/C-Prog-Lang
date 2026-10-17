#include <stdio.h>

int main() 
{
    float gpa;
        
    printf("Enter the GPA: ");
    scanf("%f", &gpa);
    
    if (gpa >= 0.0 && gpa <= 4.0) {
        if (gpa <= 0.99) 
            printf("Failed semester—registration suspended\n");
         else if (gpa <= 1.99) 
            printf("On probation for next semester\n");
         else if (gpa <= 2.99) 
            printf("(no message)\n");
         else if (gpa <= 3.49) 
            printf("Dean’s list for semester\n");
         else 
            printf("Highest honors for semester\n");
        
    } else {
        printf("Invalid GPA. Please enter a GPA between 0.0 and 4.0.\n");
    }
    
    return 0;
}
