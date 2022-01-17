#include <stdio.h>
int main()
{
    int choice;
    int a;
    int b;
    int c;
    int d;
    int e;
    int f;
    int total;
    char name[50];
    printf("YOU GOOD NAME\n");
    scanf("%s",&name);
    printf("PRESS 1 FOR MENU: \n");
    printf("PRESS 2 FOR EXIT: \n");
    scanf("%d",&choice);
    if (choice==1){
        int choice_2;
        loop:
        printf("............MENU..............\n");
        printf("1.) TEA.................. 17rs\n");
        printf("2.) DIP DIP TEA.......... 18rs\n");
        printf("3.) COFFEE............... 20rs\n");
        scanf("%d",&choice_2);
        if (choice_2==1)
        {
            int quantity_1;
            int answer;
            printf("ENTER QUANTITY:");
            scanf("%d",&quantity_1);
            printf("WANT TO ORDER MORE :\n");
            printf("1.)YES\n");
            printf("2.)NO\n");
            scanf("%d",&answer);
            a = quantity_1;
            if (answer==1)
            {
                goto loop;
            }
            else if(answer==2){
                printf("BILL\n");
            }
            c == 0;
            b == 0;
        }
        else if(choice_2==2)
        {
            int quantity_2;
            int answer;
            printf("ENTER QUANTITY:");
            scanf("%d",&quantity_2);
            printf("WANT TO ORDER MORE :\n");
            printf("1.)YES\n");
            printf("2.)NO\n");
            scanf("%d",&answer);
            b = quantity_2;
            if (answer==1)
            {
                goto loop;
            }
            else if(answer==2){
                printf("BILL\n");
            }
            a == 0;
            c == 0;
        }
        else if(choice_2==3)
        {
            int quantity_3;
            int answer;
            printf("ENTER QUANTITY:");
            scanf("%d",&quantity_3);
            printf("WANT TO ORDER MORE :\n");
            printf("1.)YES\n");
            printf("2.)NO\n");
            scanf("%d",&answer);
            c = quantity_3;
            if (answer==1)
            {
                goto loop;
            }
            else if(answer==2){
                printf("BILL\n");
            }
            a == 0;
            b == 0;
        }
        d = a*17;
        e = b*18;
        f = c*20;
        total = d+e+f;
        printf("TOTAL ");
        printf("%d",total);
        printf("rs\n");
        if (a==0){
            printf("\n");
        }
        else {
            printf("%d",a);
            printf(" TEA ORDERED SUCCESSFULLY\n");
        }
        if (b==0){
            printf("\n");
        }
        else {
            printf("%d",b);
            printf(" DIP DIP TEA ORDERED SUCCESSFULLY\n");
        }
        if (c==0){
            printf("\n");
        }
        else {
            printf("%d",c);
            printf(" COFFEE ORDERED SUCCESSFULLY\n");
        }
        int reply;
        printf("MONEY PAID\n");
        printf("1.) YES\n");
        printf("2.) NO\n");
        scanf("%d",&reply);
        if (reply==1){
            printf("THANK YOU");
        }
        else if(reply==2){
            printf("PLEASE PAY MONEY");
        }
    }
    else {
        printf("THANK YOU");
    }
    FILE *fp;
    fp = fopen("bill.txt","ab");
    fprintf(fp,"NAME: %s          ",name);
    fprintf(fp,"AMOUNT PAID: %d\n",total);
    fclose(fp);
}
