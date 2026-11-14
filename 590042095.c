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
