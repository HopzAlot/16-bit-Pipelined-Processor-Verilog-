/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000000012414579_2356217838_init();
    work_m_00000000002266902782_0886308060_init();
    work_m_00000000001777362615_1917266896_init();
    work_m_00000000004078405738_2309632077_init();
    work_m_00000000001637928013_3626715834_init();
    work_m_00000000001486082474_2344769583_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000001486082474_2344769583");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
