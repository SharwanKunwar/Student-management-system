#include<stdio.h>
#include<stdlib.h>

#define MAX_SIZE 100
#define MIN_SIZE 10

//Author: Sharwan jung kunwar
//Purpose: To hold student data of RR-Campus bca student using concept of "structure" , "array", "file handling", "pointer", "conditionals", "loops" etc.

void newLine(int x){
    for(int i=0; i<x; i++){
        printf("\n");
    }
}
void StudentPortal();
void Admin();

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
    else if(op == 1)
    {
        system("cls");
        newLine(5);
        printf("-----------------------------------------------------------------------\n");
        printf("\t\t\t Student Portal of 2080\n");
        printf("-----------------------------------------------------------------------\n\n\n");
        printf("\t1. First Semister\t\t 2. Second Semister\n\n");
        printf("\t0. Back Home");
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
    }
    else if(op == 2)
    {
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