#include<stdio.h>
int main(){
int numbers[100];
char operators[100];
int n=0;
int op=0;
printf("Enter your number: ");
scanf("%d",&numbers[n]);
n=n+1;// table has a numbers when user enters a new number it will be add new space in the table
//------------------------------------------------
while(1)// mean when the user input a number or operator is always true then go to the loop
  {
  scanf("%c",&operators[op]);
    if(operators[op]=='='){
        break;// when it's = stop and out and directly return
    }
    op=op+1;// it's a table for operator when input a operator the table add new space in the table
    scanf("%d",&numbers[n]);// add other num
    n=n+1;// add other space in num's table

  }
  return 0;// return the result
  //----------------------------------------------
   for (int i = 0; i < op; i++)
   {
     if (operators[i]=='*'||operators[i]=='/')
     {
      numbers[i]=numbers[i]*numbers[i+1];
       for (int j= i+1; j<n; j++)
       {
         
         numbers[j]=numbers[j+1];
         
       }
       for (int j= i; j<op; j++)
       {
         
         operators[j]=operators[j+1];
         
       }
     
        n--;
        op--;
        i--;
       
       
       
     }
     
   }
   
}
