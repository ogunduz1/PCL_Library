#include "pcl_vector.h"

struct _PCLVector{
	void *mitem;
	size_t mcapacity;
	size_t msize;
	void (*mdestructor)(void *item);
	int (*mcmp)(const void *item1, const void *item2);
};

