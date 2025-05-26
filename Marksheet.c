#include <stdio.h>
#include <string.h>

int main() {
    char Student_name[60], Mother_name[50], Stream_name[50], Result[20],
         School_name[80], Class[20];
    int Seat_no;
    int Term;
    int ACADEMIC_YEAR;
    float Total_marks = 0, Percentage;
    char Grade;
     char Subjects[5][30];
      int Marks[5];
printf("Enter school/College name: ");
    fgets(School_name, sizeof(School_name), stdin);
    
    printf("Enter ACADEMIC YEAR = ");
    scanf ("%d",&ACADEMIC_YEAR);
printf(" Enter Term/Sem =");
    scanf ("%d",&Term);
    getchar();
      printf("Enter student name= ");
    fgets(Student_name, sizeof(Student_name), stdin);
 printf("Enter student Class= ");
    fgets(Class, sizeof(Class), stdin);
    printf("Enter Stream/Branch of student= ");
    fgets( Stream_name,sizeof(Stream_name),stdin);
  printf("Enter Mother name= ");
    scanf( "%s",&Mother_name);
    
      printf("Enter student Seat no= ");
    scanf("%d", &Seat_no);
      for (int i = 0; i < 5; i++) {
        printf("Enter name of Subject %d= ", i + 1);
        scanf(" %[^\n]", Subjects[i]); 

        printf("Enter marks for %s (out of 100)= ", Subjects[i]);
        scanf("%d", &Marks[i]);

        if (Marks[i] < 0 || Marks[i] > 100) {
            printf("Please enter valid marks for %s\n", Subjects[i]);
            return 1;
        }
        Total_marks += Marks[i];
    }
    Percentage = (Total_marks / 500) * 100;
     if (Percentage >= 90)
        Grade = 'A';
    else if (Percentage >= 80)
        Grade = 'B';
    else if (Percentage >= 70)
        Grade = 'C';
    else if (Percentage >= 60)
        Grade = 'D';
    else if (Percentage >= 36)
        Grade = 'E';
    else
        Grade = 'F';

    int isFail = 0;
    for (int i = 0; i < 5; i++) {
        if (Marks[i]<36)
        {isFail=1;
        break ;}
    }
    strcpy(Result, isFail ? "Fail\n" : "Pass\n");
    
     printf("     \n\n\n        ------MARKSHEET-----    \n");
     printf("\nSchool/College name:%s",School_name);
    printf ("        Academic year %d\n",ACADEMIC_YEAR);
    printf("            Term/Sem : %d\n",Term );
    printf("STUDENT NAME: %s", Student_name);
    printf("Seat no.: %d\n", Seat_no);
    printf("Mother Name: %s\n", Mother_name);
    printf("Class: %s", Class);
    printf("Stream/Branch: %s\n", Stream_name);
    printf("Subject      Marks\n");

    for (int i = 0; i < 5; i++) {
        printf("%-12s %d\n", Subjects[i], Marks[i]);
    }
      printf("Total Marks = %.2f / 500\n", Total_marks);
    printf("Percentage = %.2f%%\t", Percentage);
    printf("Grade = %c\n", Grade);
    printf("Result = %s\n", Result);
    printf("Teacher Signature\t");
    printf("Principal Signature\n");
    printf("Date of Issue: 23 May 2025\n");

    return 0;
}
