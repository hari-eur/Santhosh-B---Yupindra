#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct student 
{
    char name[50];
    char mailid[50];
    char mobile[50];
    char percent[50];
};

struct department 
{
    char dept[50];
    struct student students[100];
    int nst;
    float average;
};

main() 
{
    int n;
    printf("Number of Inputs: ");
    scanf("%d", &n);
    
    struct department dt[10];
    int ndept = 0;

    for (int i = 0; i < n; i++) 
    {
        char name[50], mailid[50], mobile[50], percent[50], dept[50];
        printf("Enter student details (Name, mailid, mobile number, percent, department):\n");
        scanf("%s %s %s %s %s", name, mailid, mobile, percent, dept);

        int dcount = -1;
        for (int j = 0; j < ndept; j++) 
	{
            if (strcmp(dt[j].dept, dept) == 0) 
	    {
                dcount = j;
                break;
            }
        }
        if (dcount == -1) 
        {
            dcount = ndept;
            strcpy(dt[ndept].dept, dept);
            dt[ndept].nst = 0;
            dt[ndept].average = 0;
            ndept++;
        }

        struct student st;
        strcpy(st.name, name);
        strcpy(st.mailid, mailid);
        strcpy(st.mobile, mobile);
        strcpy(st.percent, percent);
        dt[dcount].students[dt[dcount].nst] = st;
        dt[dcount].nst++;

        float tpercent = 0;
        for (int j = 0; j < dt[dcount].nst; j++) 
	{
            char *percent = dt[dcount].students[j].percent;
            int percentValue = atoi(percent);
            tpercent += percentValue;
        }
        dt[dcount].average = tpercent / dt[dcount].nst;
    }

    printf("Number of departments: %d\n", ndept);
    printf("Average percent per department:\n");

    for (int i = 0; i < ndept; i++) 
    {
        printf("%s - %.0f%%\n", dt[i].dept, dt[i].average);
    }
}
