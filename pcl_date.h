#ifndef		_PCL_DATE_
#define		_PCL_DATE_

typedef unsigned int pcl_date_t;

#define		PCL_DAY_OFFSET					0
#define		PCL_MONTH_OFFSET				5
#define		PCL_YEAR_OFFSET					9
#define		PCL_SET_DAY(V, X)				V = (X << PCL_DAY_OFFSET) | V
#define		PCL_SET_MONTH(V, X)				V = (X << PCL_MONTH_OFFSET) | V
#define		PCL_SET_YEAR(V, X)				V = (X << PCL_YEAR_OFFSET) | V
#define		PCL_SET_DATE(V, D, M, Y)		((PCL_SET_YEAR(V, Y),PCL_SET_MONTH(V, M)),PCL_SET_DAY(V, D))
#define		PCL_DAY_MASK					0x1F
#define		PCL_MONTH_MASK					0x1E0
#define		PCL_YEAR_MASK					0xFFE00	
#define		PCL_GET_DAY(V)					(V & PCL_DAY_MASK) >> PCL_DAY_OFFSET			
#define		PCL_GET_MONTH(V)				(V & PCL_MONTH_MASK) >> PCL_MONTH_OFFSET
#define		PCL_GET_YEAR(V)					(V & PCL_YEAR_MASK) >> PCL_YEAR_OFFSET


#endif		/*_PCL_DATE_*/

