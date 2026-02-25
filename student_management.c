#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct student   
{
    int rollno;
    char name[50];
    int age;
    char course[50];
    char branch[50];
}s1;

int main()
{
    FILE *fp;
    struct student s1;
    int input,sroll;
    int r,n,m;
    int found;
    printf("\n\n..Welcome to the student data portal..\n\nwhat you want to do enter number accordingly------\n\n1-view result of any student\n2-add student\n3-view all student data\n4-exit\n");
    scanf("%d",&input);
    
    switch(input)
    {
        case 1: fp=fopen("studentdata.txt","r");
                    if(fp==NULL)
                    {
                    printf("file can't be open\n");
                    return 1;
                    }

                    char line[100];
                    printf("enter the roll no.\n");
                        scanf("%d",&sroll);


                    while(fgets(line,sizeof(line),fp))
                    {
                        //rollno. reading
                        sscanf(line,"Roll no.:%d",&s1.rollno);

                        //name reading
                        fgets(line,sizeof(line),fp);
                        sscanf(line,"Name:%[^\n]",&s1.name);

                        //age reading
                        fgets(line,sizeof(line),fp);
                        sscanf(line,"age:%d",&s1.age);

                        //course
                        fgets(line,sizeof(line),fp);
                        sscanf(line,"Course:%[^\n]",&s1.course);

                        //branch
                        fgets(line,sizeof(line),fp);
                        sscanf(line,"Branch:%[^\n]",&s1.branch);

                        //dash reading
                        int a,b,c,d,e,f,g;
                        fgets(line,sizeof(line),fp);
                        sscanf(line,"%c%c%c%c%c%c%c",&a,&b,&c,&d,&e,&f,&g);

                        
                        if(s1.rollno==sroll)
                            {
                            printf("\n-------Student found!!-------\n\n");
                        
                            printf("roll no.:%d\n",s1.rollno);
                            printf("name:%s\n",s1.name);
                            printf("age:%d\n",s1.age);
                            printf("Course:%s\n",s1.course);
                            printf("Branch:%s\n",s1.branch);
                            printf("\n");
                            found=1;
                            }
                        }
                            if(found!=1)
                            {
                            printf("\n--------student not found--------\n\n");
                            }
                            printf("\n");         
                            fclose(fp);      
                break;

        case 2: fp=fopen("studentdata.txt","a");
                if(fp==NULL)
                {
                printf("file can't be open");
                return 1;       
                }
                printf("enter the roll number of the student\n");
                scanf("%d",&s1.rollno);
                
                
                fprintf(fp,"Roll no.:%d\n",s1.rollno);
                getchar();

                printf("enter the name of the student\n");
                fgets(s1.name, sizeof(s1.name), stdin);
                fprintf(fp,"Name:");
                fputs(s1.name,fp);

                printf("enter the age of the student\n");
                scanf("%d",&s1.age);
                fprintf(fp,"age:%d\n",s1.age);

                printf("enter the course name\n");
                scanf("%s",s1.course);
                fprintf(fp,"Course:%s\n",s1.course);

                printf("enter the branch\n");
                scanf("%s",s1.branch);
                fprintf(fp,"Branch:%s\n",s1.branch);

                fprintf(fp,"-------\n");

                printf("\nStudent added succesfully!!!\n\n");

                fclose(fp);
                break;


        case 3:fp=fopen("studentdata.txt","r");
               printf("\n------student list-------\n\n");
               char c;
               while((c=getc(fp))!=EOF)
                {
                    putchar(c);
                }
                fclose(fp);
                break;


        case 4: printf("\nexiting the portal.........\n\n");
                break;


        default:printf("----invalid choice----\n\n");
        
}
return 0;
}
