#include<stdio.h>
struct  students{
 int roll_no;
 int english;
 int hindi;
 int mathematrics ;

};

int main()
{
 struct students e[5];
for(int i=0;i<5;i++)
{

printf("enter your roll number e[%d] ",i);
scanf("%d",&e[i].roll_no);
printf("enter your english marks e[%d] ",i);
scanf("%d",&e[i].english);
printf("enter your hindi marks e[%d] ",i);
scanf("%d",&e[i].hindi);
printf("enter your mathematrics marks e[%d] ",i);
scanf("%d",&e[i].mathematrics);

}

printf("\n");
printf("\n");

for (int i=0;i<5;i++)

{
printf("your number =  %d\n",e[i].roll_no);
printf("your english marks = %d\n",e[i].english);
printf("your hindi marks = %d\n",e[i].hindi);
printf("your mathematrics marks = %d\n",e[i].mathematrics);

int Total= e[i]. english +e[i].hindi+ e[i].mathematrics;
printf("Total Marks = %d \n",Total);

float Percentage = (Total*0.3);
printf("Percentage = %.2f\n",Percentage);

printf("\n");
printf("\n");
}


return 0;
}