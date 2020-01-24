#include<stdio.h>
void main()
{
      int choice;
      printf("enter choice\n");
      scanf("%d",&choice);
      switch(choice)
      {
            case 1:printf("physics cycle\n");
                   break;
            case 2:printf("chemistry cycle\n");
                   break;
      default: printf("not registered\n");
      }
}
