#include <stdio.h>
int main()
{

    int cp_marks,a1_marks,a2_marks,q1_marks,q2_marks,mid1_marks,mid2_marks,finalexam_marks,total=0,temp_value;
    char ch;
    while(1){
    printf("Enter your Class Performance Marks: ");
    scanf("%d",&cp_marks);
    printf("Enter your Assignment 1 Marks: ");
    scanf("%d",&a1_marks);
    printf("Enter your Assignment 2 Marks: ");
    scanf("%d",&a2_marks);
    printf("Enter your Quiz 1 Marks: ");
    scanf("%d",&q1_marks);
    printf("Enter your Quiz 2 Marks: ");
    scanf("%d",&q2_marks);
    printf("Enter your Midterm 1 Marks: ");
    scanf("%d",&mid1_marks);
    printf("Enter your Midterm 2 Marks: ");
    scanf("%d",&mid2_marks);
    printf("Enter your Final Exam Marks: ");
    scanf("%d",&finalexam_marks);

    float assignment_average= ((float)a1_marks + (float)a2_marks)/2;
    printf("Average of Assignments: %.0f/15\n",assignment_average);

    if(q1_marks>q2_marks)
    {
        printf("Best of Quiz Marks: %d/15\n",q1_marks);
        total+=q1_marks;
    }
    else if(q2_marks>q1_marks)
    {
        printf("Best of Quiz Marks: %d/15\n",q2_marks);
        temp_value=q2_marks;
    }
    else
    {
        printf("Best of Quiz Marks: %d/15\n",q1_marks);
        temp_value=q1_marks;
    }

    int midterm_calculation = mid1_marks + mid2_marks;
    printf("Total Midterm Marks: %d\n",midterm_calculation);

    total = temp_value + cp_marks + assignment_average + midterm_calculation + finalexam_marks;
    printf("Total Marks Obtained: %d\n",total);

    if(total>=0 && total<=49)
    {


        printf("Total grade = F \n");
    }
    if(total>=50 && total<=59)
    {


        printf("Total grade = E \n");
    }
    if(total>=60 && total<=69)
    {


        printf("Total grade = D \n");
    }
    if(total>=70 && total<=79)
    {


        printf("Total grade = C \n");
    }
    if(total>=80 && total<=89)
    {


        printf("Total grade = B \n");
    }
    if(total>=90 && total<=100)
    {


        printf("Total grade = A \n");
    }

    printf("Calculate another Grade? Enter Y or N: ");
    scanf(" %c",&ch);

    if(ch=='Y')
    {
        continue;
    }
    else if(ch=='N')
    {
        break;
    }
}

}

