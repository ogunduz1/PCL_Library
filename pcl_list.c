#include "pcl_list.h"

typedef struct _Node {
	void *mitem;
	struct _Node *mnext;
}Node;

struct _PCLList {
	struct _Node *mfirst;
	struct _Node *mlast;
	size_t msize;
	void (*mdestructor)(void *item);
	int (*mcmp)(const void *item1, const void *item2);
};
