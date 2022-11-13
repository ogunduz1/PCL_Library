#ifndef		_PCL_STRING_
#define		_PCL_STRING_

#include <stddef.h>

typedef void *PCLString;

PCLString *pcl_string_create(void);
void pcl_string_delete(PCLString handle);




#endif		/*_PCL_STRING_*/
