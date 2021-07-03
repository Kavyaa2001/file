#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    FILE *fp, *cp;
    int i=0,count=0;
    char a[20],s[20];
    fp=fopen("fresh.txt","w");
    fscanf(fp,"MyCaptain");
    fclose(fp);
    fp=fopen("fresh.txt","r");
    printf("Input to the reverse function:");
    char ch=fgetc(fp);
    while(ch!=EOF)
    {
        count++;
        fputc(ch);
        a[i]=ch;
        i++;
        ch=fgetc(fp);
    }
    printf("Output:");
    for(int j=(count-1);j>=0;j--)
    {
        printf("%c",s[i]);
    }
    fclose(fp);
    cp=fopen("copy.txt"."w");
    while((ch=fgetc(fp))!=EOF)
    {
        fputc(ch,cp);
    }
    fclose(fp);
    fclose(cp);
    return 0;
    
}
