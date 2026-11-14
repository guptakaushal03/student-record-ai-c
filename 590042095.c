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
    if(count >= MAX)
    {
        printf("Student limit reached!\n");
        return;
    }

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

float calculateCGPA(int index)
{
    float sum = 0;
    int semCount = 0;

    for(int i = 0; i < 8; i++)
    {
        if(students[index].sgpa[i] > 0)
        {
            sum += students[index].sgpa[i];
            semCount++;
        }
    }

    if(semCount == 0)
        return 0;

    return sum / semCount;
}

void displayAll()
{
    if(count == 0)
    {
        printf("\nNo Records Found\n");
        return;
    }

    for(int i = 0; i < count; i++)
    {
        printf("\n--------------------------------\n");
        printf("SAP ID : %ld\n", students[i].sapid);
        printf("Roll No : %s\n", students[i].roll);
        printf("Name : %s\n", students[i].name);
        printf("Phone : %s\n", students[i].phone);
        printf("Email : %s\n", students[i].email);
        printf("Year : %d\n", students[i].year);
        printf("Semester : %d\n", students[i].semester);
        printf("CGPA : %.2f\n", calculateCGPA(i));
    }
}

void searchStudent()
{
    long sap;

    printf("Enter SAP ID to Search: ");
    scanf("%ld", &sap);

    for(int i = 0; i < count; i++)
    {
        if(students[i].sapid == sap)
        {
            printf("\nRecord Found\n");
            printf("SAP ID : %ld\n", students[i].sapid);
            printf("Name : %s\n", students[i].name);
            printf("Roll No : %s\n", students[i].roll);
            printf("CGPA : %.2f\n", calculateCGPA(i));
            return;
        }
    }

    printf("Student Not Found\n");
}

void deleteStudent()
{
    long sap;

    printf("Enter SAP ID to Delete: ");
    scanf("%ld", &sap);

    for(int i = 0; i < count; i++)
    {
        if(students[i].sapid == sap)
        {
            for(int j = i; j < count - 1; j++)
            {
                students[j] = students[j + 1];
            }

            count--;
            printf("Student Deleted Successfully\n");
            return;
        }
    }

    printf("Student Not Found\n");
}

void averageCGPAByYear()
{
    for(int year = 1; year <= 4; year++)
    {
        float sum = 0;
        int total = 0;

        for(int i = 0; i < count; i++)
        {
            if(students[i].year == year)
            {
                sum += calculateCGPA(i);
                total++;
            }
        }

        if(total > 0)
        {
            printf("Year %d Average CGPA = %.2f\n", year, sum / total);
        }
    }
}

void sortBySAP()
{
    struct Student temp;

    for(int i = 0; i < count - 1; i++)
    {
        for(int j = 0; j < count - i - 1; j++)
        {
            if(students[j].sapid > students[j + 1].sapid)
            {
                temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }

    printf("Records Sorted By SAP ID\n");
    displayAll();
}

void sortByName()
{
    struct Student temp;

    for(int i = 0; i < count - 1; i++)
    {
        for(int j = 0; j < count - i - 1; j++)
        {
            if(strcmp(students[j].name, students[j + 1].name) > 0)
            {
                temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }

    printf("Records Sorted By Name\n");
    displayAll();
}

void academicAdvisor()
{
    long sap;

    printf("Enter SAP ID: ");
    scanf("%ld", &sap);

    for(int i = 0; i < count; i++)
    {
        if(students[i].sapid == sap)
        {
            float cgpa = calculateCGPA(i);

            printf("\nCGPA = %.2f\n", cgpa);

            if(cgpa >= 9.0)
                printf("Excellent Performance - Maintain your current study pattern.\n");
            else if(cgpa >= 8.0)
                printf("Good Performance - Keep improving consistency.\n");
            else if(cgpa >= 6.0)
                printf("Needs Improvement - Focus on weak subjects.\n");
            else
                printf("Requires Immediate Attention - Improve study habits.\n");

            return;
        }
    }

    printf("Student Not Found\n");
}

int main()
{
    int choice;

    do
    {
        printf("\n===== STUDENT RECORD AND RESULT MANAGEMENT SYSTEM =====\n");
        printf("1. Add Student\n");
        printf("2. Display All Students\n");
        printf("3. Search Student\n");
        printf("4. Average CGPA By Year\n");
        printf("5. Delete Student\n");
        printf("6. Sort By SAP ID\n");
        printf("7. Sort By Name\n");
        printf("8. Academic Advisor\n");
        printf("0. Exit\n");

        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                addStudent();
                break;

            case 2:
                displayAll();
                break;

            case 3:
                searchStudent();
                break;

            case 4:
                averageCGPAByYear();
                break;

            case 5:
                deleteStudent();
                break;

            case 6:
                sortBySAP();
                break;

            case 7:
                sortByName();
                break;

            case 8:
                academicAdvisor();
                break;

            case 0:
                printf("Thank You\n");
                break;

            default:
                printf("Invalid Choice\n");
        }

    } while(choice != 0);

    return 0;
}
