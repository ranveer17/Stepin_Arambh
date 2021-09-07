#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define __HEADER_H
int main()
{
    char ID[]="Ranveer", password[]="1703", id[10], p[6];
    int n=1, x, y;

    do{
         printf("\nID:");
         scanf("%s", &id);

         printf("\nPassword:");
         scanf("%s", &p);

         x=strcmp(id, ID);
         y=strcmp(p, password);

         if(x==0 && y==0){
           printf("\nSucessfully Logged In");
           printf("\t                              Welcome to Tour Guide                                     \t");
           printf("\n1.)Darjeeling\n2.)McLeodganj\n3.)Sikkim\n4.)Kanyakumari\n5.)Hampi\n6.)Nainital\n7.)Lonavala\n8.)Varanasin\n9.exit\n");
           recursive_switch();
         }
         else {
           printf("\nWrong Password, try again", 3-n);
            getch();
            n++;}

         if(n>3){
          printf("\nAccess Denied");
          getch();
          }

       }while (n<=5);
     return 0;
}