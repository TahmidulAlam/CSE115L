/*Program for telephone operators to keep
customer information(name, number, mobile data, balance)
and modify them*/

#include<stdio.h>
#include<string.h>

//Declaring a structure "struct customer" for keeping various data types of variable together
struct customer
{
    int serial;
    char name[30];
    char number[15];
    float balance;
    float data;
};

//Declaring all the functions prototype
void getCustomerData(struct customer*pt);
void searchByName(struct customer*pt);
void searchByNumber(struct customer*pt);
void editName(struct customer*pt);
void editNumber(struct customer*pt);
void addCustomer(struct customer*pt);
void deleteCustomer(struct customer*pt);
void balanceMobileData(struct customer*pt);
void sortOrder(struct customer*pt);
void printCustomerData(struct customer*pt);
void printAllData(struct customer*pt);


int main()
{
    int n;
    struct customer A[1000];       //declaring an array of "struct customer" data type
                                   //Array can store maximum 1000 customer's data

    while(1)                       //using true value in while loop condition so that program keeps running unless "Break;" happens
    {
       printf("Press 1 to take Customer Information Input.\n");
       printf("Press 2 to find Customer By Name.\n");
       printf("Press 3 to find Customer By number.\n");
       printf("Press 4 to Edit Customer Name.\n");
       printf("Press 5 to Edit Customer Number.\n");
       printf("Press 6 to Add another Customer.\n");
       printf("Press 7 to Delete a Customer Information.\n");
       printf("Press 8 to Allocate Mobile Data.\n");
       printf("Press 9 to Sort All Customer Data in Alphabetical Order.\n");
       printf("Press 10 to Print any Particular Customer Data on File.\n");
       printf("Press 11 to Print All Customer Information (modified) on File.\n");
       printf("Press 0 to Terminate the Program.\n");
       printf("\nEnter input: ");
       scanf("%d",&n);


       if(n==0)                    //if user inputs 0 the loop will break and the program will terminate
          break;

       //using switch case for executing different functions based on user input
       switch(n)
       {
         case 1:
            getCustomerData(A);
            break;
         case 2:
            searchByName(A);
            break;
         case 3:
            searchByNumber(A);
            break;
         case 4:
            editName(A);
            break;
         case 5:
            editNumber(A);
            break;
         case 6:
            addCustomer(A);
            break;
         case 7:
            deleteCustomer(A);
            break;
        case 8:
            balanceMobileData(A);
            break;
         case 9:
            sortOrder(A);
            break;
         case 10:
            printCustomerData(A);
            break;
         case 11:
            printAllData(A);
            break;
         default:
            printf("Invalid Input");
       }

       printf("\n\n");
    }

     return 0;
}

//Function for getting all the customer data from user input
void getCustomerData(struct customer*pt)
{
    int i, N;

    printf("\nHow many customer data to take input: ");
    scanf("%d",&N);

    /*making all the serial numbers 0
    when an array slot is filled
    serial number becomes other than 0,
    all the rest empty array's serial number remains 0.*/
    for(i=0;i<100;i++)
    {
      pt[i].serial=0;
    }

    //getting all the customer data using for loop
    for(i=0;i<N;i++)
    {
       getc(stdin);
       printf("\nCustomer Serial no.%d\n", i+1);
       pt[i].serial=i+1;               //Serial number is always +1 more than array index
       printf("Enter name: ");
       gets(pt[i].name);
       printf("Enter number: ");
       gets(pt[i].number);
       printf("Balance(Tk): ");
       scanf("%f",&pt[i].balance);
       printf("Mobile data(MB): ");
       scanf("%f",&pt[i].data);
    }
}

//Function for finding a customer serial no. and number by searching Name
void searchByName(struct customer*pt)
{
     int i, L;                         //declaring variables
     char tempName[30];

     getc(stdin);
     printf("Enter customer name's first few alphabets: ");
     gets(tempName);
     L=strlen(tempName);               //getting the length of string provided by user for using in strncmp
     printf("\nCustomer with matches: \n");

     //checking array's every element
     for(i=0;i<100;i++)
     {
        //when serial no. is zero it means empty array
        //so the loop breaks and stops looking
        if(pt[i].serial==0)
        {
          break;
        }
        else if((strncmp(pt[i].name,tempName,L)==0))    //using strncmp for finding match
        {
          printf("Serial no.%d  Name: %s  Number: %s\n", pt[i].serial, pt[i].name, pt[i].number);
        }
     }
}

//function for finding a customer serial no. and number by searching Number
void searchByNumber(struct customer*pt)
{
     int i, L;                      //declaring variables
     char tempNumber[15];

     getc(stdin);
     printf("Enter customer number's first few digits: ");
     gets(tempNumber);
     L=strlen(tempNumber);          //getting the length of string provided by user for using in strncmp
     printf("\nCustomer with matches: \n");

     //checking array's every element
     for(i=0;i<100;i++)
     {
        //when serial no. is zero it means empty array
        //so the loop breaks and stops looking
        if(pt[i].serial==0)
        {
          break;
        }
        else if((strncmp(pt[i].number,tempNumber,L)==0))   //using strncmp for finding match
        {
          printf("Serial no.%d  Name: %s  Number: %s\n", pt[i].serial, pt[i].name, pt[i].number);
        }
     }
}

//function for editing a Customer Name using customer serial no.
void editName(struct customer*pt)
{
     int i;
     char tempName[30];

     printf("Editing Customer Name\n");
     printf("Enter Customer Serial No: ");
     scanf("%d",&i);
     getc(stdin);
     printf("Enter Customer's New Name: ");
     gets(tempName);

     //using strcpy for overwriting the new Name
     strcpy(pt[i-1].name,tempName);                //using i-1 cause serial no. is always 1 more than array index

     printf("Serial no.%d  Name: %s\n", pt[i-1].serial, pt[i-1].name);
     printf("Customer name have been changed successfully");
}

//function for editing a Customer Number using customer serial no.
void editNumber(struct customer*pt)
{
     int i;
     char tempNumber[15];

     printf("Editing Customer Number\n");
     printf("Enter Customer Serial No: ");
     scanf("%d",&i);
     getc(stdin);
     printf("Enter Customer's New Number: ");
     gets(tempNumber);

     //using strcpy for overwriting the new Number
     strcpy(pt[i-1].number,tempNumber);             //using i-1 cause serial no. is always 1 more than array index

     printf("Serial no.%d  Name: %s  Number: %s\n", pt[i-1].serial, pt[i-1].name, pt[i-1].number);
     printf("Customer number have been changed successfully");
}

//function for adding a customer
void addCustomer(struct customer*pt)
{
     getc(stdin);
     int i;

     printf("Adding a Customer:");

     /*finding how many customer inputs have already been taken
       using for loop, when serial no. 0 is reached loop stops.
       i-1's value is then the number of inputs*/
     for(i=0;pt[i].serial!=0;i++)

     //putting new customer input in array index i , cause i-1 is the number of already taken inputs
     pt[i].serial=i+1;
     printf("Enter name: ");
     gets(pt[i].name);
     printf("Enter number: ");
     gets(pt[i].number);
     printf("Balance(Tk): ");
     scanf("%f",&pt[i].balance);
     printf("Data(MB): ");
     scanf("%f",&pt[i].data);

     printf("New Customer has been added successfully.");
}

//function for deleting a customer using serial no.
void deleteCustomer(struct customer*pt)
{
     int i;

     printf("Deleting Customer Data\n");
     printf("Enter Customer Serial no: ");
     scanf("%d",&i);

     //overwriting the previous informations and making other values zero
     strcpy(pt[i-1].name,"");
     strcpy(pt[i-1].number,"");
     pt[i-1].balance=0;
     pt[i-1].data=0;

     printf("Customer serial no.%d information have been deleted",i);
}

//function for allocating mobile data to any customer
void balanceMobileData(struct customer*pt)
{
     int i;                       //declaring variables
     float tempData, rate;

     printf("Allocating Mobile Data\n");
     printf("Enter customer Serial no: ");  //using customer serial no to find the customer
     scanf("%d",&i);
     printf("Enter how many MB to allocate and add: ");
     scanf("%f",&tempData);
     printf("Enter per MB data price:");
     scanf("%f",&rate);

     //allocating data and reducing balance according to rate
     pt[i-1].data = pt[i-1].data+tempData;
     pt[i-1].balance=pt[i-1].balance-tempData*rate;

     printf("\nData: %f", pt[i-1].data);
     printf("\nBalance: %f", pt[i-1].balance);

     printf("\nMobile Data have been allocated successfully and balance have been deducted");
}

//function for sorting all the customers serially using their name's alphabetical order
void sortOrder(struct customer*pt)
{
     int i, j;                                       //declaring variables
     char tempName[30], tempNumber[15];
     float tempBalance, tempData;

     //using for loop and the sorting sort algorithm for ordering
     for(i=0;pt[i].serial!=0;i++)
     {
        for(j=i+1;pt[j].serial!=0;j++)
        {
           //swapping all the information except serial no. based on necessary conditions
           if(strcmp(pt[j].name,pt[i].name)<0)      //using strcmp for comparing alphabetical order
           {
             //swapping the names using temporary variable (tempName)
             strcpy(tempName,pt[i].name);
             strcpy(pt[i].name,pt[j].name);
             strcpy(pt[j].name,tempName);
             //swapping the numbers using temporary variable (tempNumber)
             strcpy(tempNumber,pt[i].number);
             strcpy(pt[i].number,pt[j].number);
             strcpy(pt[j].number,tempNumber);
             //swapping the balances using temporary variable (tempBalance)
             tempBalance=pt[i].balance;
             pt[i].balance=pt[j].balance;
             pt[j].balance=pt[i].balance;
             //swapping the mobile datas using temporary variable (tempData)
             tempData=pt[i].data;
             pt[i].data=pt[j].data;
             pt[j].data=pt[i].data;
           }
        }
     }
     printf("All customers data have been sorted in alphabetical order.");
}

//Function for printing any particular customer's data on a file
void printCustomerData(struct customer*pt)
{
    FILE*fptr;                               //declaring pointer for file
    int i;


    printf("Enter customer serial no: ");    //taking serial no. input for finding the customer
    scanf("%d",&i);

    fptr=fopen("customer.txt","a");          //opening file in appending mode

    if(fptr!=NULL)                           //checking if there is a file
    {
      //printing the customer data
      fprintf(fptr,"Customer serial no. %d\n",pt[i-1].serial);
      fprintf(fptr,"Name: %s\n",pt[i-1].name);
      fprintf(fptr,"Number: %s\n",pt[i-1].number);
      fprintf(fptr,"Balance(Tk): %f\n",pt[i-1].balance);
      fprintf(fptr,"Data (MB): %f\n",pt[i-1].data);
    }
    fclose(fptr);                            //closing the file

    printf("customer(serial no.%d) data have been successfully printed on customer.txt", i);
}

//Function for printing all the customers data on a file
void printAllData(struct customer*pt)
{
    int i;
    FILE*fp;                                 //declaring pointer for file
    fp=fopen("All Customer.txt","w");        //opening the file in writing mode

    if(fp!=NULL)                             //checking if the file is there
    {
      //printing all the customer data using for loop
      for(i=0;i<100;i++)
      {
         /*when an array is empty we have made its serial no.0 ,
         so the for loop breaks when it finds an empty array,
         thus reducing time */
         if(pt[i].serial==0)
           break;
         else
         {
           //Printing all the customer's data on file
           fprintf(fp,"Customer serial no. %d\n",pt[i].serial);
           fprintf(fp,"Name: %s\n",pt[i].name);
           fprintf(fp,"Number: %s\n",pt[i].number);
           fprintf(fp,"Balance(Tk): %f\n",pt[i].balance);
           fprintf(fp,"Data (MB): %f\n",pt[i].data);
           fprintf(fp,"\n");
         }
      }
      fclose(fp);                             //closing the file
    }

    printf("All customer data have been successfully printed on All Customer.txt");
}

































