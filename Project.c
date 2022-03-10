
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
int choice;
int size=0;
struct data{
char fname[21];
char lname[21];
char gender[1];
char address[50];
char contactno[11];
char email[50];
char problem[100];
char nameofdoc[21];
char age[1];

}x[50];

char yesorno[1];



void add ()
{
system("cls");
printf("\n\t\t- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - \n ");
printf("\t\t\t\t\t\tGAZA HOSPITAL\t\t\t\t\t \n ");
printf("\t\t- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - \n ");
printf("\t\t\t!!!!!!!!!!!!!!!!!!!Add Patients Record!!!!!!!!!!!!!!!!!!!");
printf("\n\t\t\t\tFirst Name:");
fflush(stdin);
scanf("%s",x[size].fname);

    while(strlen(x[size].fname)<=2)
    {
    printf("\n\t\t\t\tThe first name must be more than two litters\n");
    printf("\n\t\t\t\tFirst Name:");
    fflush(stdin);
    scanf("%s",&x[size].fname);
     
    }//end of while
 
printf("\n\t\t\t\tLast Name:");
fflush(stdin);
scanf("%s",&x[size].lname);

    while(strlen(x[size].lname)<=2)
    {
    printf("\n\t\t\t\tThe last name must be more than two litters\n");
 
        printf("\n\t\t\t\tLast Name:");
        fflush(stdin);
        scanf("%s",&x[size].lname);
    }
regender:
printf("\n\t\t\t\tGender[F/M]:");
fflush(stdin);  
scanf("\t\t\t%s",&x[size].gender);
strupr(x[size].gender);
int genderfcmp=strcmp("F",x[size].gender);
int gendermcmp=strcmp("M",x[size].gender);
int genderfandm=abs(genderfcmp)+abs(gendermcmp);
while(genderfandm!=1)
{
    printf("\t\t\t\tThe gender must be [F Or M]");
   
    goto regender;
}

printf("\n\t\t\t\tAge:");
fflush(stdin);
scanf("%s",&x[size].age);
    while(strlen(x[size].age)>=3)
    {
    printf("\n\t\t\t\tThe age must be less than three numbers\n");
 
    printf("\n\t\t\t\tAge:");
    fflush(stdin);
    scanf("%s",&x[size].age);
    int lenage=strlen(x[size].age);
     
    }
 
 /**/
printf("\n\t\t\t\tAddress:");
fflush(stdin);
scanf("%s",&x[size].address);
strlen(x[size].address);
    while(strlen(x[size].address)<=3)
    {
    printf("\n\t\t\t\tThe address must be more than three litters\n");
 
        printf("\n\t\t\t\tAddress:");
        fflush(stdin);
        scanf("%s",&x[size].address);
 
    }
    /**/
 
printf("\n\t\t\t\tContact Number:");
fflush(stdin);
scanf("%s",&x[size].contactno);


    while(strlen(x[size].contactno)!=10)
    {
    printf("\n\t\t\t\tThe contact number just must be ten numbers\n");
 
    printf("\n\t\t\t\tContact Number:");
   fflush(stdin);
   scanf("%s",&x[size].contactno);
     
    }
 
    /**/
printf("\n\t\t\t\tEmail:");
fflush(stdin);
scanf("%s",&x[size].email);
/*/*/


printf("\n\t\t\t\tProblem:");
fflush(stdin);
scanf("%s",&x[size].problem);
while(strlen(x[size].problem)<=3)
    {
    printf("\n\t\t\t\tThe problem must be more than three litters\n");
 
    printf("\n\t\t\t\tProblem:");
    fflush(stdin);
    scanf("%s",&x[size].problem);
     
    }
 
printf("\n\t\t\t\tPrescribad Doctor:");
fflush(stdin);
scanf("%s",&x[size].nameofdoc);


    while(strlen(x[size].nameofdoc)<=3)
    {
    printf("\n\t\t\t\tThe Prescribad Doctor must be more than three litters\n");
 
    printf("\n\t\t\t\tPrescribad Doctor:");
    fflush(stdin);
    scanf("%s",x[size].nameofdoc);
   
    }
    /*/*/


printf("\t\t\t.....Information Record Successful.....");
size++;
reyorno:
printf("\n\t\t\t\tDo you want to add more[Y/N]:");
fflush(stdin);
scanf("%s",&yesorno);
strupr(yesorno);
strcmp(yesorno,"Y");
int cmpn=strcmp(yesorno,"N");
if(strcmp(yesorno,"Y")==0)
{
system("cls");
add();
}
else if(strcmp(yesorno,"N")==0)
{
system("cls");
 mainmenu();
}
else
{
printf("\n\t\t\t\t Invaild answer,answer the question agian");
getch();
goto reyorno;

}

}/*end of add*/



void listop()
{

int l;
system("cls");
printf("\n\t\t- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - \n ");
    printf("\t\t\t\t\t\tGAZA HOSPITAL\t\t\t\t\t \n ");
    printf("\t\t- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - \n ");
    printf("\t\t\t!!!!!!!!!!!!!!!!!!!Add Patients Record!!!!!!!!!!!!!!!!!!!");
    printf("\n\n\nFull Name\tGender\tAge\tAddress\t\tContact No.\tEmail\t\tProblem\t\tPrescribed Doctor\n");
    printf("=========================================================================================================\n");
 
    for(l=0;l<size;l++)
    {
    printf("\n%s %s\t%s\t%s\t%s\t\t%s\t%s\t\t%s\t\t%s\n\n",x[l].fname,x[l].lname,x[l].gender,x[l].address,x[l].contactno,x[l].email,x[l].problem,x[l].nameofdoc);
    }

    printf("press any key to return to main menu");
   
getch();
mainmenu();

}

int del()
{
char pa[21];
 
 int t,ex=0,i;

rede:
    system("cls");
    printf("\n\t\t- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - \n ");
    printf("\t\t\t\t\t\tGAZA HOSPITAL\t\t\t\t\t \n ");
    printf("\t\t- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - \n ");
    printf("\t\t\t!!!!!!!!!!!!!!!!!!!delete Patients Record!!!!!!!!!!!!!!!!!!!");
printf("\n\n\tEnter the patient's first name : ");
scanf("%s",&pa);
for(t=0;t<=size;t++){
if(strcmp(pa,x[t].fname)==0){
ex=1;
   break;
}
}

if(ex==0)
printf("patient not found");

    else if(ex==1){
    for(i=t;i<=size;i++){

strcpy(x[i].fname,x[i+1].fname);
            strcpy(x[i].lname,x[i+1].lname);
            strcpy(x[i].age,x[i+1].age);
            strcpy(x[i].gender,x[i+1].gender);
            strcpy(x[i].contactno,x[i+1].contactno);
            strcpy(x[i].address,x[i+1].address);
            strcpy(x[i].email,x[i+1].email);
            strcpy(x[i].nameofdoc,x[i+1].nameofdoc);
}
   
         
          }
         
         
else{
printf("patient does not exist,try again");
getch();
system("cls");
goto rede;

}

printf("patient deleted successfully.\npress any key to return to main menu");
getch();
mainmenu();


















}






int mainmenu()
{
system("cls");
int x,y;
printf("\n\t\t- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - \n ");
printf("\t\t\t\t\t\tGAZA HOSPITAL\t\t\t\t\t \n ");
printf("\t\t- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - \n ");


printf("\n\t\t\t\t1.Add Patients Record\n");
printf("\t\t\t\t2.List patients Record\n");
printf("\t\t\t\t3.Search patients Record\n");
printf("\t\t\t\t4.Edit patients Record\n");
printf("\t\t\t\t5.Delete patientss Record\n");
printf("\t\t\t\t6.Exit\n\n\n");
printf("Enter your choice:");
scanf("%d",&choice);
x=(choice<=6&&choice>=1);

if(x==1)
{
retray:
switch(choice)
{

case 1:
add();
break;

case 2:
listop();

break;

case 3:
search();
break;

case 4:
edit();
break;

case 5:
del();
break;

case 6:


system("cls");
printf("\n\t\t- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - \n ");
    printf("\t\t\t\t\t\tGAZA HOSPITAL\t\t\t\t\t \n ");
    printf("\t\t- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - \n\n\n ");
    printf("\t\tThanks For Visiting");
    getch();
    exit(1);
 


break;


}


return;
}

else
{

while(x==0)
{

printf("Invaild input, press any key to try again");
getch();
system("cls");
printf("\n\t\t- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - \n ");
        printf("\t\t\t\t\t\tGAZA HOSPITAL\t\t\t\t\t \n ");
        printf("\t\t- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - \n ");


        printf("\n\t\t\t\t1.Add Patients Record\n");
        printf("\t\t\t\t2.List patients Record\n");
        printf("\t\t\t\t3.Search patients Record\n");
        printf("\t\t\t\t4.Edit patients Record\n");
        printf("\t\t\t\t5.Delete patientss Record\n");
        printf("\t\t\t\t6.Exit\n\n\n");
        printf("Enter your choice(only from 1 to 6):");
        scanf("%d",&choice);
     
          x=(choice<=6&&choice>=1);
     


    }
    goto retray;
    }

}


void search()
{
 char pa[21];
 char an[1];
 int t,ex=0;

research:
    system("cls");
    printf("\n\t\t- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - \n ");
    printf("\t\t\t\t\t\tGAZA HOSPITAL\t\t\t\t\t \n ");
    printf("\t\t- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - \n ");
    printf("\t\t\t!!!!!!!!!!!!!!!!!!!Search Patients Record!!!!!!!!!!!!!!!!!!!");
printf("\n\n\tEnter the patient name to be viewed : ");
scanf("%s",&pa);
for(t=0;t<=size;t++){
if(strcmp(pa,x[t].fname)==0){
ex=1;
   break;
}
}

if(ex==0)
printf("patient not found");

    else if(ex==1){
    printf("\n\n\nFull Name\tGender\tAge\tAddress\t\tContact No.\tEmail\t\tProblem\t\tPrescribed Doctor\n");
         printf("=========================================================================================================\n");
         printf("\n%s %s\t%s\t%s\t%s\t\t%s\t%s\t\t%s\t\t%s\n\n",x[t].fname,x[t].lname,x[t].gender,x[t].address,x[t].contactno,x[t].email,x[t].problem,x[t].nameofdoc);
         getch();
         
          }
          printf("Do you want to view more[Y/N]??");
          scanf("%s",&an);
          strupr(an);
          if(strcmp(an,"Y")==0)
          goto research;
         
          else  if(strcmp(an,"N")==0){
 
          system("cls");
          mainmenu();
 }
 else
 printf("Invaild answer,press any key to try again");
 getch();
 system("cls");
 goto research;

       
 
   
         
         

 
 
 
   



 }//end of search


void edit()
{
char pa[21];
    char an[1];
    int t,ex=0;
    char u[20];

research:
    system("cls");
    printf("\n\t\t- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - \n ");
    printf("\t\t\t\t\t\tGAZA HOSPITAL\t\t\t\t\t \n ");
    printf("\t\t- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - \n ");
    printf("\t\t\t!!!!!!!!!!!!!!!!!!!Edit Patients Record!!!!!!!!!!!!!!!!!!!");
printf("\n\n\tEnter the patient's first name: ");
scanf("%s",&pa);
for(t=0;t<=size;t++){
if(strcmp(pa,x[t].fname)==0){
ex=1;
   break;
}
}

if(ex==0){

printf("patient not found,press any key to try again");
getch();
goto research;

}

    else if(ex==1){
    printf("\n\n\t\t****Existing information****");
    printf("\n\n\nFull Name\tGender\tAge\tAddress\t\tContact No.\tEmail\t\tProblem\t\tPrescribed Doctor\n");
         printf("=========================================================================================================\n");
         printf("\n%s %s\t%s\t%s\t%s\t\t%s\t%s\t\t%s\t\t%s\n\n",x[t].fname,x[t].lname,x[t].gender,x[t].address,x[t].contactno,x[t].email,x[t].problem,x[t].nameofdoc);
         printf("\n\n");
         printf("\n\t\t\t\tEnter new First Name:");
         fflush(stdin);
        scanf("%s",x[t].fname);

         while(strlen(x[t].fname)<=2)
         {
          printf("\n\t\t\t\tThe first name must be more than two litters\n");
         printf("\n\t\t\t\tFirst Name:");
        fflush(stdin);
         scanf("%s",&x[t].fname);
     
         }//end of while
 
       printf("\n\t\t\t\tEnter new Last Name:");
       fflush(stdin);
       scanf("%s",&x[t].lname);

       while(strlen(x[t].lname)<=2)
       {
        printf("\n\t\t\t\tThe last name must be more than two litters\n");
 
        printf("\n\t\t\t\t Enter new Last Name:");
        fflush(stdin);
        scanf("%s",&x[t].lname);
       }
         regender:
        printf("\n\t\t\t\tEnter the new Gender[F/M]:");
        fflush(stdin);  
        scanf("\t\t\t%s",&x[t].gender);
        strupr(x[t].gender);
         int genderfcmp=strcmp("F",x[t].gender);
         int gendermcmp=strcmp("M",x[t].gender);
         int genderfandm=abs(genderfcmp)+abs(gendermcmp);
         while(genderfandm!=1)
        {
         printf("\t\t\t\t The new gender must be [F Or M]");
   
           goto regender;
         }

         printf("\n\t\t\t\tEnter the new Age:");
         fflush(stdin);
         scanf("%s",&x[t].age);
         while(strlen(x[t].age)>=3)
          {
            printf("\n\t\t\t\tThe age must be less than three numbers\n");
 
           printf("\n\t\t\t\tEnter the new Age:");
             fflush(stdin);
           scanf("%s",&x[t].age);
         int lenage=strlen(x[t].age);
     
    }
 
 /**/
printf("\n\t\t\t\tEnter the new Address:");
fflush(stdin);
scanf("%s",&x[t].address);
strlen(x[t].address);
    while(strlen(x[t].address)<=3)
    {
    printf("\n\t\t\t\tThe address must be more than three litters\n");
 
        printf("\n\t\t\t\tEnter the new Address:");
        fflush(stdin);
        scanf("%s",&x[t].address);
 
    }
    /**/
 
        printf("\n\t\t\t\tEnter the new Contact Number:");
            fflush(stdin);
         scanf("%s",&x[t].contactno);


    while(strlen(x[t].contactno)!=10)
    {
    printf("\n\t\t\t\tThe contact number just must be ten numbers\n");
 
    printf("\n\t\t\t\tEnter the new Contact Number:");
   fflush(stdin);
   scanf("%s",&x[t].contactno);
     
    }
 
    /**/
        printf("\n\t\t\t\tEnter the new Email:");
         fflush(stdin);
         scanf("%s",&x[t].email);
         /*/*/


       printf("\n\t\t\t\tEnter the new Problem:");
        fflush(stdin);
        scanf("%s",&x[t].problem);
        while(strlen(x[t].problem)<=3)
    {
    printf("\n\t\t\t\tThe problem must be more than three litters\n");
 
    printf("\n\t\t\t\tEnter the new Problem:");
    fflush(stdin);
    scanf("%s",&x[t].problem);
     
    }
 
         printf("\n\t\t\t\tEnter the new Prescribad Doctor:");
         fflush(stdin);
       scanf("%s",&x[t].nameofdoc);


       while(strlen(x[t].nameofdoc)<=3)
        {
        printf("\n\t\t\t\tThe Prescribad Doctor must be more than three litters\n");
 
        printf("\n\t\t\t\tEnter the new Prescribad Doctor:");
         fflush(stdin);
       scanf("%s",&x[t].nameofdoc);
   
       }
       /*/*/
       reu:
         printf("press U key to confirm the updating operation:");
         scanf("%s",&u);
         strupr(u);
         if(strcmp(u,"U")==0){
          printf("patient record updated successfully\npress any key to return to the main menu");
          getch();
          system("cls");
          mainmenu();
}
else{
printf("invaild input,enter press any key to try again...");
getch();
goto reu;
}

         
         }
         


}

void main()
{
int i;


printf("\n\n\n\n\n\n\n\t\t\t\t#################################################\n");
printf("\t\t\t\t#\t\tWELCOME TO \t\t\t#\n");
printf("\t\t\t\t#\tGAZA HOSPITAL MANAGMENT SYSTEM\t\t#\n");
printf("\n\n\n\npress any key to continue");
getch();
system("cls");






char user[20];
char pass[20];
printf("\n\t\t- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - \n ");
printf("\t\t\t\t\t\tGAZA HOSPITAL\t\t\t\t\t \n ");
printf("\t\t- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - \n ");
printf("\t\t\t\t\tENTER YOUR USERNAME AND PASSWORD :)\n\n");
printf("\t\t\t\t\t\tUSERNAME: ");
    scanf("%s",user);
 
printf("\n\n\t\t\t\t\t\tPASSWORD:");
scanf("%s",pass);


i=(strcmp(user,"system"))+(strcmp(pass,"system"));

if(i==0)
{
printf("\n\n\t\t\t\t\t\tLOGIN SUCCESSFUL\n\n");
printf("\n\npress any key to continue....\n\n");
getch();
system("cls");
}

else
{
     while (i!=0)
     {
    printf("\n\n\t\t\t\t\tWRONG PASSWORD AND USERNAME\nPRESS ANY KEY TO TRY AGAIN");
getch();
system("cls");
    printf("\n\t\t- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - \n ");
printf("\t\t\t\t\t\tGAZA HOSPITAL\t\t\t\t\t \n ");
printf("\t\t- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - \n ");
printf("\t\t\t\t\tENTER YOUR USERNAME AND PASSWORD :)\n\n");
printf("\n\n\t\t\t\t\t\tUSERNAME: ");
    scanf("%s",user);
printf("\n\n\t\t\t\t\t\tPASSWORD: ");
scanf("%s",pass);
i=(strcmp(user,"system"))+(strcmp(pass,"system"));


}
    printf("\n\n\t\t\t\t\tLOGIN SUCCESSFUL");
    printf("\n\npress any key to continue....\n\n");
    getch();
system("cls");
}


mainmenu();