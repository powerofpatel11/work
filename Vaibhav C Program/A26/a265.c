#include<stdio.h>
struct employee{
  int empno;
  char empname[20];
 char   empaddress[100] ;
 int empage;

};
int main()
{
 struct employee emp ;
printf("ENTER THE DATA");
printf("employee number ");
scanf("%d",&emp.empno);
printf("name.....?"); 
gets(emp.empname)
;
printf("address........?");
gets(emp.empaddress);
printf("your age ");
scanf("%d",&emp.empage);

printf("your data");
printf("empno.:    %d ",emp.empno);
printf("empname :    %s ",emp.empname);
printf("empaddress:    %s ",emp.empaddress);
printf("empage:    %d ",emp.empage);

return 0;
}