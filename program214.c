#include<stdio.h>
//reverse display
void Display(char *str)
{
    if(*str !='\0')
    {
       
       
        str++;
        Display(str);
         printf("%c\n",*str);
        
    }


   
}
int main()
{
char Arr[20];

printf("Enter the string:");
scanf("%[^'\n']s",Arr);

Display(Arr);

    return 0;
}