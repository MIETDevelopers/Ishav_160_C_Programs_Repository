//To be modified.
#include <stdio.h>
#include <stdlib.h>
struct student
{
    int roll_no;
    char name[80];
    int attendance;
};

void accept(struct student[], int);
void display(struct student[], int);
int search(struct student[], int, int);
int main()
{
    struct student data[20];
    int n, choice, roll_no, index;

    printf("Student attendance record maintainence System\n\n");
    printf("Number of student records you want to enter? : ");
    scanf("%d", &n);
    accept(data, n);
    do
    {

        printf("\nStudent attendance record maintainence System menu :\n");
        printf("Press 1 to Display all records.\n");
        printf("Press 2 to Search a specific student.\n");
        printf("Press 0 to exit\n");
        printf("\nEnter choice(0-2) : ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
                display(data, n);
                break;
            case 2:
                printf("Enter Roll number to search : ");
                scanf("%d", &roll_no);
                index = search(data, n, roll_no);
                if (index ==  - 1)
                {
                    printf("Record not found : ");
                }
                else
                {
                    printf("Roll Number: %d\nName: %s\nAttendance: %d\n",
                        data[index].roll_no, data[index].name,
                        data[index].attendance);
                }
                break;
        }
    }
    while (choice != 0);

    return 0;
}

void accept(struct student list[80], int s)
{
    int i;
    for (i = 0; i < s; i++)
    {
        printf("\nEnter data for Record #%d", i + 1);

        printf("\nEnter roll_no : ");
        scanf("%d", &list[i].roll_no);
        fflush(stdin);
        printf("Enter name : ");
        gets(list[i].name);
        list[i].attendance = 0;
    } 
}

void display(struct student list[80], int s)
{
    int i;

    printf("\n\nRoll Number\tName\tAttendance\n");
    for (i = 0; i < s; i++)
    {
        printf("%d\t%s\t%d\n", list[i].roll_no, list[i].name,
            list[i].attendance);
    } 
}

int search(struct student list[80], int s, int number)
{
    int i;

    for (i = 0; i < s; i++)
    {
        if (list[i].roll_no == number)
        {
            return i;
        } 
    }
    return  - 1;
}