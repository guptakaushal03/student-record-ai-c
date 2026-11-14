#include <stdio.h>
#include <string.h>

#define MAX 100

struct Student
{
    long sapid;
    char roll[20];
    char name[50];
    char phone[15];
    char email[50];
    int year;
    int semester;
    float sgpa[8];
};

struct Student students[MAX];
int count = 0;

void addStudent()
{
    printf("\nEnter SAP ID: ");
    scanf("%ld", &students[count].sapid);

    printf("Enter Roll Number: ");
    scanf("%s", students[count].roll);

    printf("Enter Name: ");
    scanf(" %[^\n]", students[count].name);

    printf("Enter Phone Number: ");
    scanf("%s", students[count].phone);

    printf("Enter Email ID: ");
    scanf("%s", students[count].email);

    printf("Enter Year (1-4): ");
    scanf("%d", &students[count].year);

    printf("Enter Current Semester: ");
    scanf("%d", &students[count].semester);

    printf("Enter SGPA for 8 Semesters:\n");

    for(int i = 0; i < 8; i++)
    {
        printf("Semester %d: ", i + 1);
        scanf("%f", &students[count].sgpa[i]);
    }

    count++;

    printf("\nStudent Added Successfully!\n");
}

void displayAll()
{
    if(count == 0)
    {
        printf("\nNo Records Found.\n");
        return;
    }

    for(int i = 0; i < count; i++)
    {
        printf("\n------------------------\n");
        printf("SAP ID : %ld\n", students[i].sapid);
        printf("Roll No : %s\n", students[i].roll);
        printf("Name : %s\n", students[i].name);
        printf("Phone : %s\n", students[i].phone);
        printf("Email : %s\n", students[i].email);
        printf("Year : %d\n", students[i].year);
        printf("Semester : %d\n", students[i].semester);
    }
}

float calculateCGPA(int index)
{
    float sum = 0;
    int countSem = 0;

    for(int i = 0; i < 8; i++)
    {
        if(students[index].sgpa[i] > 0)
        {
            sum += students[index].sgpa[i];
            countSem++;
        }
    }

    if(countSem == 0)
        return 0;

    return sum / countSem;
}

void searchStudent()
{
    long sap;
    printf("\nEnter SAP ID to Search: ");
    scanf("%ld", &sap);

    for(int i = 0; i < count; i++)
    {
        if(students[i].sapid == sap)
        {
            printf("\nRecord Found\n");
            printf("Name : %s\n", students[i].name);
            printf("Roll No : %s\n", students[i].roll);
            printf("CGPA : %.2f\n", calculateCGPA(i));
            return;
        }
    }

    printf("\nStudent Not Found\n");
}

void academicAdvisor()
{
    long sap;
    printf("\nEnter SAP ID: ");
    scanf("%ld", &sap);

    for(int i = 0; i < count; i++)
    {
        if(students[i].sapid == sap)
        {
            float cgpa = calculateCGPA(i);

            printf("\nCGPA = %.2f\n", cgpa);

            if(cgpa >= 9)
                printf("Excellent Performance - Maintain your current study pattern.\n");
            else if(cgpa >= 8)
                printf("Good Performance - Keep improving consistency.\n");
            else if(cgpa >= 6)
                printf("Needs Improvement - Focus on weak subjects.\n");
            else
                printf("Requires Immediate Attention - Improve study habits.\n");

            return;
        }
    }

    printf("Student Not Found\n");
}
