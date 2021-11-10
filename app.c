#include "system.h"
#include <rtems.h>
#include <stdlib.h>
#include <stdio.h>


rtems_task user_application(rtems_task_argument argument)
{
	while(1)
	{
		printf("RTEMS-APP");
	}

}
