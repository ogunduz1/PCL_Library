#include "pcl_error.h"
#include <stdio.h>


#define		X(a)		#a	,
static const char *pcl_errors[] = { XPCLERRORS };
#undef		X

char *pcl_strerror(int errno) {
	return	pcl_errors[errno];
}

void pcl_perror(const char *str) {
	printf("%s : %s", str, pcl_strerror(pcl_errno));
}



