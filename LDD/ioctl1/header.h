//#ifndef _SREE_CHAR_DEVICE_H_
//#define _SREE_CHAR_DEVICE_H_


#ifndef _IOCTL_CONST_H_
#define _IOCTL_CONST_H_


#include <asm/ioctl.h>

   
/* We have to base our constants based on a majic number */
#define SREE_MAGIC 'L'


#define SREE_FILL_ZERO		_IO( SREE_MAGIC, 1 )


#define SREE_FILL_CHAR		_IOW( SREE_MAGIC, 2, char )

/* SET_SIZE: to set the size of the character array */

#define SREE_SET_SIZE		_IOW( SREE_MAGIC, 3, uint )

/* GET_SIZE: to get the size of the character array */
#define SREE_GET_SIZE		_IOR( SREE_MAGIC, 4, uint )

#define SREE_MAX_CMDS		4

#endif /* _IOCTL_CONST_H_ */

