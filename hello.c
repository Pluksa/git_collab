#include <stdio.h>
int main(void)
{
greeting("Developer A,B,C !!\n");
// Print a farewell message for the specified user
farewell("Developer A,B,C");
return 0;
}
//Print a greeting message for specified user
int greeting(const char *name)
{
printf("Hello, %s!\n", name);
return 0;
}
int farewell(const char *name)
{
printf("Goodbye, %s!\n", name);
return 0;
}