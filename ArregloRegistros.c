#include <stdio.h>

struct birthdate
{
    int day;
    char month[11];
    int year;
};

struct employee
{
    struct birthdate birth;
    int code;
    char phone[12];
    char name[25];
    char address[30];
    float salary;
};

void add(struct employee emp[])
{
    for (int i = 0; i < 5; i++)
    {
        printf("\nEnter employee %d information:\n", i + 1);

        printf("Name: ");
        scanf(" %24[^\n]", emp[i].name);

        printf("Birthdate (day month year): ");
        scanf("%d %10s %d",
              &emp[i].birth.day,
              emp[i].birth.month,
              &emp[i].birth.year);

        printf("Code: ");
        scanf("%d", &emp[i].code);

        printf("Phone: ");
        scanf(" %11[^\n]", emp[i].phone);

        printf("Address: ");
        scanf(" %29[^\n]", emp[i].address);

        printf("Salary: ");
        scanf("%f", &emp[i].salary);
    }
}

void general_inquiries(struct employee emp[])
{
    for (int i = 0; i < 5; i++)
    {
        printf("\n===============================\n");
        printf("========== Empleados ==========\n");
        printf("Employee %d information:\n", i + 1);

        printf("Code: %d\n", emp[i].code);
        printf("Phone: %s\n", emp[i].phone);
        printf("Name: %s\n", emp[i].name);
        printf("Address: %s\n", emp[i].address);

        printf("Birthdate: %d/%s/%d\n",
               emp[i].birth.day,
               emp[i].birth.month,
               emp[i].birth.year);

        printf("Salary: %.2f\n", emp[i].salary);
    }
}

void menu()
{
    struct employee emp[5];

    int op;

    do
    {
        printf("\n1. Add employee\n");
        printf("2. General Inquiries\n");
        printf("3. Exit\n");
        printf("===============================\n");
        printf("Select an option: ");

        scanf("%d", &op);

        switch (op)
        {
            case 1:
                add(emp);
                break;

            case 2:
                general_inquiries(emp);
                break;

            case 3:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid option, please try again (1-3).\n");
                break;
        }

    } while (op != 3);
}

int main()
{
    menu();

    return 0;
}