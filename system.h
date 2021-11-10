
#ifndef SYSTEM_H
#define SYSTEM_H

#include <rtems.h>
#include <stdlib.h>
#include <stdio.h>

rtems_task user_application(rtems_task_argument argument);
rtems_task Init( rtems_task_argument ignored );

#include <bsp.h>
#define CONFIGURE_APPLICATION_NEEDS_CONSOLE_DRIVER
#define CONFIGURE_APPLICATION_NEEDS_CLOCK_DRIVER
/* for stdio */
/* for time services */
#define CONFIGURE_MAXIMUM_TASKS 2
#define CONFIGURE_INIT_TASK_NAME rtems_build_name( 'E', 'X', 'A', 'M' )
#define CONFIGURE_RTEMS_INIT_TASKS_TABLE
#define CONFIGURE_INIT
#include <rtems/confdefs.h>
#endif
