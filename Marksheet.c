CODE:

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
    

    return 0;
}




OUTPUT:-
Enter school/College name: GCOEY
Enter ACADEMIC YEAR = 2025
 Enter Term/Sem =1
Enter student name= Sima Jadhav
Enter student Class= 1st year
Enter Stream/Branch of student= co.puter engg.
Enter Mother name= manisha
Enter student Seat no= 16
Enter name of Subject 1= math
Enter marks for math (out of 100)= 89
Enter name of Subject 2= bcme
Enter marks for bcme (out of 100)= 88
Enter name of Subject 3= beee
Enter marks for beee (out of 100)= 98
Enter name of Subject 4= physics
Enter marks for physics (out of 100)= 87
Enter name of Subject 5= pps
Enter marks for pps (out of 100)= 97

    ------MARKSHEET-----

School/College name:GCOEY
        Academic year 2025
            Term/Sem : 1
STUDENT NAME: Sima Jadhav
Seat no.: 16
Mother Name: manisha
Class: 1st year
Stream/Branch: co.puter engg.

Subject      Marks
math         89
bcme         88
beee         98
physics      87
pps          97
Total Marks = 459.00 / 500
Percentage = 91.80%     Grade = A
Result = Pass

Teacher Signature       Principal Signature


[Process completed - press Enter]