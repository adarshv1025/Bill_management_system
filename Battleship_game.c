#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAX 7

void terminate();
void computer();
void rules();

int main()
{
    int n;
    do
    {
        printf("****WELCOME TO BATTLE SHIP GAME****\n");
        printf("        1)PLAY VS COMPUTER\n");
        printf("        2)PLAY WITH FRIENDS\n");
        printf("        3)EXIT\n");
        scanf("%d",&n);
        switch(n)
        {
            case 1:computer();
                    break;

            case 3:terminate();
                    break;

            default:printf("Please enter a valid choice\n");
                    break;
        }
    }while(1);
}

void terminate()
{
    printf("THANKS FOR PLAYING\n");
    exit(0);
}

void computer()
{
    rules();

}

void rules()
{
    printf("PLEASE!! consider the rules for the game\n");
    printf("1)Empty cells:Yet to be guessed is represented by ~\n");
    printf("2)Missed guessed: Represented by X\n");
    printf("3)HIT guess:Is represented by O\n");
    printf("4)Ships after Sink are represented by S\n");
}