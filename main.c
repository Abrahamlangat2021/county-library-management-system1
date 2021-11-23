/*
project:county library management  system
Author:Abraham langat
Date nov,2021
language:c99
license:MIT
*/
/*
USERS-View users,add new users,edit,delete,login,change password
catalogue
issuarance
serial
acquisition

Navigation
*/


#include <stdio.h>
#include <stdlib.h>

int menu();//prototype


int main()
{
    int action;
    action=menu();
    //execute action
    return 0;
}

int menu()//header
{
   int action;

    do{

    printf("t/county Library\n");
    printf("welcome mr Abraham\n");
    printf("What would you like to do?\n");
     printf("1.view users.\n");
     printf("2.Add new user\n");
      printf("3.Edit user\n");
     printf("4.Delete user\n");
     printf("5.Change password");
     printf("6.logout.\n");
     printf("7.Exit");
     printf("selected action(1-7):");
     scanf("%d",&action);
     if(action<1 || action>7){
        system("cls");
        printf("invalid.Action.TRY Again.\n");
     }
     }while(action<1 || action>7);

     return action;

     }
     void execute_action(int action){
         switch(action){
         case 1:
            printf("list of users\n");
            break;
             case 2:
            printf("Add new user\n");
            break;

             case 3:
            printf("Editing users\n");
            break;
             case 4:
            printf("Deleting users\n");
            break;
             case 5:
            printf("change password\n");
            break;
             case 6:
            printf("logout\n");
            break;
             case 7:
            printf("Exit\n");
            break;




            printf("bye\n");
            break;
            default:
            printf("invalid action");

         }
         }

            void close() {
                printf("Thanks for using  the system\n");
                printf("created by Abraham langat");
                printf("Bye\n");
                sleep(2000);
                exit(0);


            }
