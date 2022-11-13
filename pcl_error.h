#ifndef		_PCL_ERROR_
#define		_PCL_ERROR_

#define		XPCL_ERRORS								\
			X(PCL_NO_ERROR)							\
			X(PCL_NOT_IN_CONTAINER)					\
			X(PCL_EXCESS_CONTAINER)					\
			X(PCL_NO_CAPACITY)						\


#define		X(a)	a,
enum PclErrors { XPCLERRORS };
#undef		X


extern	int pcl_errno;

char *pcl_strerror(int errno);
void pcl_perror(const char *str);

#endif		/*_PCL_ERROR_*/