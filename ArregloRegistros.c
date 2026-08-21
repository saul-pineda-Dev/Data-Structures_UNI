#include <stdio.h>

struct employee
{
    int code;
    char phone[11];
    char name[25];
    char address[30];
    float salary;
};

void add()
{
    struct employee emp[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter employee %d information:\n", i + 1);
        printf("Name: ");
        scanf(" %s", emp[i].name);
        printf("Code: ");
        scanf(" %d", &emp[i].code);
        printf("Phone: ");
        scanf(" %s", emp[i].phone);
        printf("Address: ");
        scanf(" %s", emp[i].address);
        printf("Salary: ");
        scanf(" %f", &emp[i].salary);
    }
}

void general_inquiries()
{
    struct employee emp[5];
    for (int i = 0; i < 5; i++)
    {
        printf("===============================\n");
        printf("==========Empleados============\n");
        printf("Employee %d information: \n", i + 1);
        printf("Code: %d\n", emp[i].code);
        printf("Phone: %s\n", emp[i].phone);
        printf("Name: %s\n", emp[i].name);
        printf("Address: %s\n", emp[i].address);
        printf("Salary: %.2f\n", emp[i].salary);
    }
}
void menu() 
{
    int op;

    printf("1. Add employee\n");
    printf("2. General Inquiries\n");
    printf("3. Exit\n");
    printf("===============================\n");
    printf("Select an option: ");
    scanf("%d", &op);

    do
    {
        switch (op)
        {
        case 1:
            add();
            break;
        case 2:
            general_inquiries();
            break;
        default:
          printf("Invalid option, please try again(1-3).\n");
            break;
        }



    } while (op != 3);
    
};

int main()
{
    menu();

    return 0;
}