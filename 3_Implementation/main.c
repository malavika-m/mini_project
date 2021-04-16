/**
 * @file trial.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-04-15
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include "test_calc.h"
#include "market.h"
struct detail{
    int q;
    int m;
    char n[20];
    int d;
};
/**
 * @brief 
 * 
 * @return int 
 */
int main()
{
      char ch;
    printf("\tSUPER MARKET BILLING SYSTEM\t\n");
    printf("**********************************");
    printf("\n");
    char tym[10];
    char date[10];
    strcpy(tym,__TIME__);
    strcpy(date,__DATE__);
    printf("%s GMT\n",tym);
    printf("%s\n",date);
    int num;
    printf("Enter an number of items: ");
    scanf("%d", &num);  
   struct detail *id =(struct detail*)malloc(num*sizeof(struct detail));
   float cost[num];
   float sum=0;
   for(int i=0;i<num;i++)
   {  
      printf("product name: ");
      scanf("%s",&id[i].n);
      printf("quantity    :");
      scanf(" %d",&id[i].q);
      printf("MRP         :");
      scanf(" %d",&id[i].m);
      printf("Discount    :");
      scanf(" %d",&id[i].d);
      printf("\n");
      /**
       * @brief calling cal() belonging to market.h to calculate net amount 
       */
      cost[i] = cal(id[i].m,id[i].d,id[i].q);
      sum= sum+cost[i];
   }
   /**
    * @brief printing the final bill format: supermarket name,address,contact details 
    * current time & date
    * headers {}
    * totatl amount 
    */
   printf("\t   ABCD Supermarket \n");
   printf(" ABCD Road, Tnagat, Vdistrict, tristate-682003\n");
   printf("\tabcd_supermaarket@mail.com");
   printf(" ph: 23785888\n");
   printf("%s GMT\n",tym);
   printf("%s\n",date);
   printf("***********************************************");
   printf("\nItem name  | Cost(INR) | Quantity | Amount \n");
   printf("------------------------------------------\n");
    for(int i=0;i<num;i++)
    {
        printf("%s  %10d %10d %10.3f\n",id[i].n,id[i].m,id[i].q,cost[i]);
        
    }
     printf("-------------------------------------------\n");
     printf("                     Total amount:  %12.4f \n",sum);
     int ans;
     /**
      * @brief this variablle denotes amount paid by customer to user
      */
     printf("amount paid: ");
     scanf("%d",&ans);
     /**
      * @brief if excess then bal() calculates amount to be paid back to customer by user
      */
     if(ans>sum)
     {
         int b= bal(sum,ans);
         printf("Should return %d rupees\n",b);
     }
     int flg=1;
     /**
      * @brief Construct a new while object
      * if amount paid by customer is not enough-try again till sucessful
      */
     while(flg)
     {
     if(ans<sum)
     {
         printf("Not enough try again\n");
         printf("amont paid: ");
         scanf("%d",&ans);
     }
     else
     {
     printf("PAYMENT SUCESSFUL!!\n");
     printf("\n");
     printf("\tThank you!!!\n");
     printf("\tHave a nice day & Visit again!!\n");
     printf("\t*******************");
     flg=0;
     }
     }
     printf("\n");
     /**
      * @brief frees the id structure alotted memory
      * 
      */
    free(id);
printf("\n");
/**
 * @brief for unit testing
 * 
 */
test_main();
return 0;
}