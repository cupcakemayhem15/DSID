#include <stdio.h>
#include <unistd.h>
// Bibliotecas acrescentadas
#include <stdlib.h> // para exit

int main(void)
/*
** Listing3.2b.c - Subtasking utilizando fork() e execl(): modulo do filho
*/
{
/* Child task sends a process id message to the screen */
printf("Child task active as process %d.\n", getpid());
/* Child task exits normally */
exit(0);
return 0;
}