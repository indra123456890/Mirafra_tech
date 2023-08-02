#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <stdlib.h>
#include <sys/types.h>
#include<sys/ioctl.h>
#include "header.h"

int main()
{
	int fd, i;
	char my_buf[4000];
	
	unsigned int size=0;
	char c;
	
	
	printf("[%d] - Opening device sree_cdrv\n", getpid() );
	
	fd = open( "/dev/sree_cdrv", O_RDWR );//1
	if( fd < 0 ) {
		printf("\n\nDevice could not be opened\n\n");
		return 1;
	}
	printf("Device opened with ID [%d]\n", fd);
	
	   
	ioctl( fd, SREE_GET_SIZE, &size );

	printf("Present size of the buffer is %d\n", size);//4000


	size=1000;
	ioctl(fd, SREE_SET_SIZE,&size);//app--->1000

	
	ioctl( fd, SREE_GET_SIZE, &size );

	printf("Present size of the buffer is %d\n", size);//1000
//================================


	ioctl(fd,SREE_FILL_ZERO);

	read( fd, my_buf, 200);

	printf("New contents\n%s\n", my_buf);

//-----------------------

	c = '$';

	ioctl(fd, SREE_FILL_CHAR, &c);


      	/* test if it worked */
	read( fd, my_buf, 70 );
	printf("New contents\n%s\n", my_buf);

//============================

	close(fd);
	
	exit(0);

















#if 0
//==================
	size = 2000;		//step1
	printf("Setting size of buffer to 2000\n");

	if( ioctl( fd, SREE_SET_SIZE, &size ) < 0 )	//step2
		printf("ioctl failed\n");

	ioctl( fd, SREE_GET_SIZE, &size );	//step3
	printf("New size of the buffer is %d\n", size);		

//=====================

	ioctl(fd, SREE_FILL_ZERO);

      	/* test if it worked */
	read( fd, my_buf, 100 );
	printf("New contents\n%s\n", my_buf);
//==============================
#if 1
	/* lets fill the buffer with character '=' */	//step4
	c = '*';
	ioctl(fd, SREE_FILL_CHAR, &c);

      	/* test if it worked */
	read( fd, my_buf, 70 );
	printf("New contents\n%s\n", my_buf);

#endif

#endif
	
}



