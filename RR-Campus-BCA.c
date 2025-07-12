#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include<windows.h>  // windows
#include <unistd.h>  // linux
#include <ctype.h>



#define MAX_SIZE 100
#define MIN_SIZE 10

//Author: Sharwan jung kunwar
//Purpose: To hold student data of RR-Campus bca student using concept of "structure" , "array", "file handling", "pointer", "conditionals", "loops" etc.

struct globalVariable{
    int count;
}gl;

void newLine(int x){
    for(int i=0; i<x; i++){
        printf("\n");
    }
}
void welcome(){
    for(int i=0; i<10050; i++){
        printf("01");
    }
    system("cls");
    newLine(5);
    printf("Welcome to RR-Campus BCA Student Data Management System\n");
    printf("Developed by Sharwan Jung Kunwar\n\n");
    Sleep(500);  // 1000 milliseconds = 1 second (Windows)
    printf("\t\t--");
    Sleep(400);  // 1000 milliseconds = 1 second (Windows)
    printf("-");
    Sleep(800);  // 1000 milliseconds = 1 second (Windows)
    printf("-");
    Sleep(400);  // 1000 milliseconds = 1 second (Windows)
    printf("----");
    Sleep(400);  // 1000 milliseconds = 1 second (Windows)
    printf("-");
    Sleep(500);  // 1000 milliseconds = 1 second (Windows)
    printf("-");
    Sleep(400);  // 1000 milliseconds = 1 second (Windows)
    printf("-");
    Sleep(500);  // 1000 milliseconds = 1 second (Windows)
    printf("-");
    Sleep(400);  // 1000 milliseconds = 1 second (Windows)
    printf("-");
    Sleep(400);  // 1000 milliseconds = 1 second (Windows)
    printf("-");
    Sleep(400);  // 1000 milliseconds = 1 second (Windows)
    printf("-");
    Sleep(400);  // 1000 milliseconds = 1 second (Windows)
    printf("-");
    Sleep(100);  // 1000 milliseconds = 1 second (Windows)
    printf("-");
    Sleep(100);  // 1000 milliseconds = 1 second (Windows)
    printf("-");
    Sleep(400);  // 1000 milliseconds = 1 second (Windows)
    printf("-");
    Sleep(100);  // 1000 milliseconds = 1 second (Windows)
    printf("-");
    Sleep(100);  // 1000 milliseconds = 1 second (Windows)
    printf("-");
    Sleep(100);  // 1000 milliseconds = 1 second (Windows)
    printf("-");
    Sleep(400);  // 1000 milliseconds = 1 second (Windows)
    printf("-");
    Sleep(100);  // 1000 milliseconds = 1 second (Windows)
    printf("-");
    Sleep(100);  // 1000 milliseconds = 1 second (Windows)
    printf("-");
    newLine(5);
    
}

void StudentPortal();
void Admin();

int login(){

    for(int i=0; i<7050; i++){
        printf("01");
    }
    
    again:
    system("cls");
    newLine(10);
    const char* username = "admin";
    const char* password = "admin";
    char input_username[20];
    char input_password[20];
    printf("-----------------------------------------------------------------------\n");
    printf("\t\tAdmin login pannel\n");
    printf("-----------------------------------------------------------------------\n\n\n");
    printf("\t\tusername\n\t\t: ");
    scanf("%s", input_username);
    printf("\t\tpassword\n\t\t: ");
    scanf("%s", input_password);

    if (strcmp(input_username, username) == 0 && strcmp(input_password, password) == 0) {
        return 1;
    }
    else if(gl.count >= 4){
        for(int i=0; i<7050; i++){
        printf("01");
    }
        system("cls");
        newLine(10);
        printf("\t\tToo many attempts !!!\n");
        newLine(10);
        exit(1);
    }else{
                gl.count++;
                printf("\tInvalid username or password try again.\n");
                goto again;
            }
            

}

struct students
{
    char firstName[MIN_SIZE];
    char lastName[MIN_SIZE];
    int age;
    int semester;
    int rollNo;
    char section;
    char Phone[MIN_SIZE];
    char Address[MAX_SIZE];
};

int main(){

    welcome();

    int op;
    char ch;
    top:
    fflush(stdin);
    system("cls");
    newLine(5);

    printf("-----------------------------------------------------------------------\n");
    printf("\t\tWelcome to RR-Campus BCA Faculty 2080\n");
    printf("-----------------------------------------------------------------------\n\n\n");
    printf("\t\t1. Student\t\t 2. Admin\n\n");
    printf("\t\t0. Exit");
    newLine(3);
    printf("-----------------------------------------------------------------------\n");
    printf("Enter : ");
    scanf("%d",&op);
    

    //condition for student and admin ------------------------------
    if(op == 0){
        exit:
         for(int i=0; i<7050; i++){
        printf("01");
    }
        system("cls");
        newLine(10);
        printf("\t\tThank you for using our portal.\n");
        newLine(10);
        exit(1);
    }
    else if(op < 0 || op > 2){
        printf("%d is not a valid option. you can chose between 1 and 2 only.\n",op);
        fflush(stdin);
        goto top;
    }
    else if(op == 1)       //students portal
    {
        for(int i=0; i<7050; i++){
            printf("01");
        }
        student:
        fflush(stdin);
        system("cls");
        newLine(5);
        printf("-----------------------------------------------------------------------\n");
        printf("\t\t\t Student Portal of 2080\n");
        printf("-----------------------------------------------------------------------\n\n\n");
        printf("\t1. First Semister\t\t 2. Second Semister\n\n");
        printf("\t0. Exit");
        newLine(3);
        printf("-----------------------------------------------------------------------\n");
        printf("Enter : ");
        scanf("%d",&op);


        if(isalpha(op)){
            goto student;
        }else if(!isalpha(op))
        {
            switch(op){
                case 0:
            for(int i=0; i<7050; i++)
            {
                printf("01");
            }
            system("cls");
            newLine(10);
            printf("\t\tThank you for using our portal.\n");
            newLine(10);
            exit(0);
            break;

            case 1:
            printf("This is semister one");
            printf("Enter : ");
            scanf("%d",&op);
            break;

            case 2:
            printf("This is semister two");
            break;

            default:
            goto student;
        }


            goto student;
        }
  
    }
    else if(op == 2)     //admin portal
    {   login();
        system("cls");
        newLine(5);
        printf("-----------------------------------------------------------------------\n");
        printf("\t\t\t Admin Portal\n");
        printf("-----------------------------------------------------------------------\n\n\n");
        printf("\t1. Display students\t 2. Remove Student\n\n");
        printf("\t3. Update Student\t 4. Add Student\n\n");
        printf("\t0. Exit");
        newLine(3);
        printf("-----------------------------------------------------------------------\n");
        printf("Enter : ");
        scanf("%d",&op);
        if(op == 0){
            system("cls");
            newLine(10);
            printf("Enter [ Y / N ] Back Home: ");
            scanf(" %c", &ch);
            if(ch == 'Y' || ch == 'y'){
                goto top;
            }else{
                goto exit;
            }

        }
    }else{

    }

    

    return 0;

}

//Functions for student and admin

void StudentPortal(){
    printf("hello, This is student portal");

}
void Admin(){
    printf("Hi, This is admin portal");
}