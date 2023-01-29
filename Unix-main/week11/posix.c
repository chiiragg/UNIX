/*3.  Write a C/C++
POSIX compliant program that prints the POSIX defined*/



define _POSIX_SOURCE
#define _POSIX_C_SOURCE199309L
#include<stdio.h>
#include<unistd.h>

int main()
{

#ifdef _POSIX_JOB_CONTROL

printf("System supports job control\n");

#else

printf("System does not support job control \n");

#endif

#ifdef _POSIX_SAVED_IDS

printf("System supports saved set-UID and saved set-GID\n");

#else

printf("System does not support saved set-UID and saved set-GID \n");

#endif

#ifdef _POSIX_CHOWN_RESTRICTED

printf("chown_restricted option is %d\n",_POSIX_CHOWN_RESTRICTED);

#else

printf("System does not support chown_restricted option \n");

#endif

#ifdef _POSIX_NO_TRUNC

printf("Pathname trunc option is %d\n",_POSIX_NO_TRUNC);

#else

printf("System does not support system-wide pathname trunc option \n");

#endif

#ifdef _POSIX_VDISABLE

printf("Disable character for terminal files is %d\n",_POSIX_VDISABLE);

#endif

#ifdef _POSIX_CHOWN_RESTRICTED

printf("chown_restricted option is %d\n",_POSIX_CHOWN_RESTRICTED);

#else

printf("System does not support chown_restricted option \n");

#endif

#ifdef _POSIX_NO_TRUNC

printf("Pathname trunc option is %d\n",_POSIX_NO_TRUNC);

#else

printf("System does not support system-wide pathname trunc option \n");

#endif

#ifdef _POSIX_VDISABLE

printf("Disable character for terminal files is %d\n",_POSIX_VDISABLE);

#else

printf(" System does not support _POSIX_VDISABLE \n");

#endif

return 0;

}

//output
/*
bmsce@bmsce-Precision-T1700:~$ nano posixmacro.c
bmsce@bmsce-Precision-T1700:~$ gcc posixmacro.c -o asf
bmsce@bmsce-Precision-T1700:~$ ./asf
System supports job control
System supports saved set-UID and saved set-GID
chown_restricted option is 0
Pathname trunc option is 1
Disable character for terminal files is 0
*/
