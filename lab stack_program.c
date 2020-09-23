#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define STACK_SIZE 3
int top=-1, flag=1;
int s[10];
int item;

void push()
{
    if(top == STACK_SIZE-1)
    {
        printf("Stack Overflow! \n");
        return;
    }
    
    top++;
    s[top]= item;
}

int pop()
{
    
    if(top==-1)
    {
        return -1;
    }
    return s[top--];
}

void display()
{
    int i;
    if(top== -1)
    {
        printf("Empty Stack \n");
        return;
    }
    printf("The Contents of the Stack are: \n");
    for(i=0;i<top;i++)
      {  printf("%d\n", s[i]);
      }
     printf("\n")  ;
        
}

void main()
{
    int item_deleted, choice;
    system("clear");
    while(flag==1)
    {
        printf("Enter the choice(1:- to push, 2:- to pop, 3:- to display, 4:- to exit) \n");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1: printf("Enter the item to be entered \n");
                    scanf("%d", &item);
                    push();
                    printf("%d was entered into the stack.\n", item);
                    display();
                    break;
            case 2: item_deleted= pop();
                    if (item_deleted == -1)
                    {
                        printf("Empty Stack \n");
                    }
                    else
                    {
                        printf("The item deleted is %d \n", item_deleted);
                    }
                    printf("The stack is :\n");
                    display();
                    break;
            case 3: display();
                    break;
                    
            case 4 :  flag =0;
            break;
            default : printf("Invalid choice\n");
        }
    }
    
}
