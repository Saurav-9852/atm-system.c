#include <stdio.h>
int main()
{
    char card;
    int n;
    int p;
    int a;
    int b;
    int diff;
    
    printf("Welcome to the ATM\n\n");
    printf("Please Insert your card\n\n");
    scanf("%c",&card);

    if(card=='S'){
        printf("Hello Saurav Prakash\n\n");
        printf(">Press 1 to withdrawl the money from your account\n\n");
        printf(">Press 2 to check the balance\n\n");

        b=5000;

        scanf("%d",&n);

        if(n==1){
            printf("Please enter your 4 digit pin: \n");
            scanf("%d",&p);

            if(p==1234)
            {
                printf("Enter the amount to be withdrawl : \n");
                scanf("%d",&a);

                if(a>b)
                {
                    printf("insufficient");
                }
                else
                {
                    printf("Collect the money\n\n");

                    diff = b-a;
                    printf("Now,your bank balance is %d",diff);
                }
            }
            else{
                printf("incorrect pin\n\n");
                printf("please try again\n\n");
                scanf("%d",&p);
                if(p==1234)
                {
                    printf("Enter the amount to be withdrawl:\n");
                    scanf("%d",&a);

                    if(a>b){
                        printf("insufficient");
                    }
                    else{
                        printf("collect the money\n\n");
                        diff = b-a;
                        printf("now,your bank balance is %d",diff);
                    }
                }
                else{
                    printf("your request has been blocked\n");
                    printf("so please try again");
                }
            }
        }
        else if(n==2){
            printf("please enter your 4 digit pin:");
            scanf("%d",&p);

            if(p!=1234){
                printf("please try again\n\n");
                scanf("%d",&p);

                if(p!=1234){
                    printf("your request has been blocked\n");
                    printf("so,please try again");
                }
                else{
                    printf("your bank balance is %d",b);
                }
            }
            else 
            {
                printf("Your bank balance is %d",b);
            }
        }
    }
    else if(card=='M'){
        printf("Hello Mainro\n\n");

        printf(">Press 1 to withdrawl the money from your account\n\n");
        printf(">Press 2 to check the balance\n\n");
                
        b=100000;

        scanf("%d",&n);

        if(n==1){
            printf("Please enter your 4 digit pin: \n");
            scanf("%d",&p);

            if(p==5678)
            {
                printf("enter the amount to be withdrawl:\n");
                scanf("%d",&a);

                if(a>b){
                    printf("insufficient");
                }
                else{
                    printf("collect the money\n\n");
                    diff=b-a;
                    printf("now,your bank balance is %d",diff);
                }
            }
            else{
                printf("Incorrect pin\n\n");
                printf("please try again\n\n");
                scanf("%d",&p);

                if(p==5678)
                {
                    printf("Enter the amount to be withdrawl:\n");
                    scanf("%d",&a);

                    if(a>b){
                        printf("Insufficient");
                    }
                    else{
                        printf("Collect the money");
                        diff=b-a;
                        printf("now,your bank balance is %d",diff);
                    }
                }
                else{
                    printf("your request has been blocked\n");
                    printf("so please try again");
                }

            }
        }
        else if(n==2){
            printf("Please enter your 4 digit pin: \n");
            scanf("%d",&p);

            if(p!=5678){
                printf("please try again\n\n");
                scanf("%d",&p);

                if(p!=5678){
                    printf("your request has been blocked\n");
                    printf("so,Please try again");
                }
                else{
                    printf("Your bank balance is %d",b);
                }
            }
            else{
                printf("your bank baance is %d",b);
            }
        }
    }
    else if(card=='A'){
        printf("Hello Aditya\n\n");
        printf(">Press 1 to withdrawl the money from your account\n\n");
        printf(">Press 2 to check the balance\n\n");
        
        b=60000;

        scanf("%d",&n);

        if(n==1){
            printf("Please enter your 4-digit pin: \n");
            scanf("%d",&p);

            if(p==9123){
                printf("Enter the amount to be withdrawl:\n");
                scanf("%d",&a);

                if(a>b){
                    printf("Insufficient");
                }
                else{
                    printf("Collect the money\n\n");

                    diff=b-a;

                    printf("now,your bank balance is %d",diff);
                }
            }
            else{
                printf("Incorrect pin:\n\n");
                printf("Please try again\n\n");
                scanf("%d",&p);

                if(p==9123){
                    printf("Enter the amount to be withdrawl:\n");
                    scanf("%d",&a);

                    if(a>b){
                        printf("Insufficient");
                    }
                    else{
                        printf("Collect the money\n\n");
                        diff=b-a;
                        printf("now,your bank balance is %d",diff);
                    }
                }
                else{
                    printf("your request has been blocked\n");
                    printf("So,Please try again");
                }
            }
        }
        else if(n==2){
            printf("Please enter your 4-digit pin:\n");
            scanf("%d",&p);

            if(p!=9123){
                printf("Please try again\n\n");
                scanf("%d",&p);

                if(p!=9123){
                    printf("Your request has been blocked\n");
                    printf("So,Please try again");
                }
                else{
                    printf("Your bank balance is %d",b);
                }
            }
            else{
                printf("Your bank balance is %d",b);
            }
        }
    }
    else if(card=='s'){
        printf("Hello shivam\n\n");

        printf(">Press 1 to withdrawl the money from your account\n\n");
        printf(">Press 2 to check the balance\n\n");
        
        b=40000;

        scanf("%d",&n);

        if(n==1){
            printf("Please enter your 4-digit pin: \n");
            scanf("%d",&p);

            if(p==8123){
                printf("Enter the amount to be withdrawl:\n");
                scanf("%d",&a);

                if(a>b){
                    printf("Insufficient");
                }
                else{
                    printf("Collect the money\n\n");

                    diff=b-a;

                    printf("now,your bank balance is %d",diff);
                }
            }
            else{
                printf("Incorrect pin:\n\n");
                printf("Please try again\n\n");
                scanf("%d",&p);

                if(p==8123){
                    printf("Enter the amount to be withdrawl:\n");
                    scanf("%d",&a);

                    if(a>b){
                        printf("Insufficient");
                    }
                    else{
                        printf("Collect the money\n\n");
                        diff=b-a;
                        printf("now,your bank balance is %d",diff);
                    }
                }
                else{
                    printf("Your request has been blocked\n");
                    printf("So,Please try again");
                }
            }
        }
        else if(n==2){
            printf("Please enter your 4-digit pin:\n");
            scanf("%d",&p);

            if(p!=8123){
                printf("Please try again\n\n");
                scanf("%d",&p);

                if(p!=8123){
                    printf("Your request has been blocked\n");
                    printf("So,Please try again");
                }
                else{
                    printf("Your bank balance is %d",b);
                }
            }
            else{
                printf("your bank balance is %d",b);
            }
        }
    }
    return 0;
}