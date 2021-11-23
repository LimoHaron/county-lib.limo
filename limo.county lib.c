/*
    Project: County Library management system.
    Author:  Limo Haron
    Date:    Oct,2021
    Compiler: GNU GCC
    Language: C99
    License: MIT
*/

/*

Users - view users,Add new user, edit,delete,login,change password,logout
catalogue
Issuance
Serial
Acquisition

Navigation

*/
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int menu(); // prototype
int main()
{
    int action;
    action = menu();
    // execute action
    return 0;
}

int menu() //header
{
    int action;
    do {
        printf("\tCounty Library\n");
        printf("Welcome Limo Haron. \n");
        printf("What would you like to do?\n");
        printf("1. View Users.\n");
        printf("2. Add new User\n");
        printf("3. Edit User.\n");
        printf("4. Delete User.\n");
        printf("5. Change Password.");
        printf("6. Logout.\n");
        printf("7. Exit.\n");
        printf("Selected action(1-7): ");
        scanf("%d",&action);
        if(action < 1 || action > 7) {
            system("cls");
            printf("Invalid Action. Try again.\n");
        }
    } while (action < 1 || action > 7);

    return action;
}
void execute_action (int action);{
 case 1:
    printf("list of users\n");
    break;
 case 2:
    printf("add new users\n");
    break;
 case 3:
    printf("edit users\n");
    break;
 case 4:
    printf("deleting users\n");
    break;
 case 5:
    printf("changing passwords\n");
    break;
 case 6:
    printf("you have been logged out\n");
    break;
 case 7:
    close();
    break;

 default:
    printf("invalid action");
}
void close(){
printf("thanks for using the system\n");
printf(created by Limo Haron\n");
printf("bye\n");
Sleep(2000);
exit(0);
}


