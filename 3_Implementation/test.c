#include<stdio.h>
#include<stdlib.h>
#include<string.h>
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
void recursive_switch()
{
    int choice=0;
    char buff[255];
    char c;
    FILE*data;
    typedef enum{
       none,
       Darjeeling,
       McLeodganj,
       Sikkim,
       Kanyakumari,
       Hampi,
       Nainital,
       Lonavala,
       Varanasi,
       exit
    }Destinations;
    printf("\nenter your choice ");
    scanf("%d",&choice);

   switch (choice)
   {

        case Darjeeling:
            data= fopen("C:/Users/Ranveer Singh/projects/helloworld/tmp/Darjeeling.txt", "r");
            c = fgetc(data);
            while (c != EOF)
            {
                printf ("%c", c);
                c = fgetc(data);
            }
            fclose(data);
            break;

        case McLeodganj:
        data= fopen("C:/Users/Ranveer Singh/projects/helloworld/tmp/McLeodganj.txt", "r");
            c = fgetc(data);
            while (c != EOF)
            {
                printf ("%c", c);
                c = fgetc(data);
            }
            fclose(data);
            break;

        case Sikkim:
         data= fopen("C:/Users/Ranveer Singh/projects/helloworld/tmp/Sikkim.txt", "r");
            c = fgetc(data);
            while (c != EOF)
            {
                printf ("%c", c);
                c = fgetc(data);
            }
            fclose(data);
            break;

        case Kanyakumari:
         data= fopen("C:/Users/Ranveer Singh/projects/helloworld/tmp/Kanyakumari.txt", "r");
            c = fgetc(data);
            while (c != EOF)
            {
                printf ("%c", c);
                c = fgetc(data);
            }
            fclose(data);
            break;

        case Hampi:
         data= fopen("C:/Users/Ranveer Singh/projects/helloworld/tmp/Hampi.txt", "r");
            c = fgetc(data);
            while (c != EOF)
            {
                printf ("%c", c);
                c = fgetc(data);
            }
            fclose(data);
            break;

        case Nainital:
         data= fopen("C:/Users/Ranveer Singh/projects/helloworld/tmp/Nainital.txt", "r");
            c = fgetc(data);
            while (c != EOF)
            {
                printf ("%c", c);
                c = fgetc(data);
            }
            fclose(data);
            break;

        case Lonavala:
         data= fopen("C:/Users/Ranveer Singh/projects/helloworld/tmp/Lonavala.txt", "r");
            c = fgetc(data);
            while (c != EOF)
            {
                printf ("%c", c);
                c = fgetc(data);
            }
            fclose(data);
            break;

        case Varanasi:
         data= fopen("C:/Users/Ranveer Singh/projects/helloworld/tmp/Varanasi.txt", "r");
            c = fgetc(data);
            while (c != EOF)
            {
                printf ("%c", c);
                c = fgetc(data);
            }
            fclose(data);
            break;

        case exit:
        printf("Exiting Now");
        break;
    
   
   default:
    printf("chooose from above options");
     recursive_switch();
   }
}