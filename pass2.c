#include <stdio.h>

int main()
{
    char username[100];
    char password[100];
 
    printf("Enter your username :- ");
    scanf("%s",&username);
 
    printf("Enter your password :- ");
    scanf("%s",&password);
 
    if(strcmp(username,"mitva@gmail.com")==0)
    {
        if(strcmp(password,"12345")==0)
        {
            printf("Login Successfull....");
        } else {
             printf("password invalid");
               }
    }
    else
    {
    printf("login failed , invaild Credentials.");
    }
    
}