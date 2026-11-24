#include <stdio.h>

int main() {
    int score;
    char grade;

    
    printf("Enter your score: ");
    if (scanf("%d", &score) != 1 || score < 0 || score > 100) {
        printf("Invalid input! Please enter a numeric score between 0 and 100.\n");
        return 1;
    }


    grade = (score >= 90) ? 'A' :
            (score >= 80) ? 'B' :
            (score >= 70) ? 'C' :
            (score >= 60) ? 'D' : 'F';

    printf("Your grade is %c. ", grade);

    
    switch (grade) {
        case 'A':
            printf("Excellent work! ");
            break;
        case 'B':
            printf("Well done. ");
            break;
        case 'C':
            printf("Good job. ");
            break;
        case 'D':
            printf("You Passed, but you could do better. ");
            break;
        case 'F':
            printf("Sorry, you failed. ");
            break;
        default:
            printf("Unknown grade. ");
            break;
    }

    
    if (grade == 'A' || grade == 'B' || grade == 'C' || grade == 'D') {
        printf("You are eligible for the next level.\n");
    } else {
        printf("Please try again next time.\n");
    }

    return 0;
}