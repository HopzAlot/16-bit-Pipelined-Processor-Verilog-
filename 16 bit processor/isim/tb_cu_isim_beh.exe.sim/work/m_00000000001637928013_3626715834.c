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

/* This file is designed for use with ISim build 0x8ef4fb42 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/Virtu/Desktop/New folder/updated/CONTROLUNIT.V";
static int ng1[] = {1, 0};
static int ng2[] = {0, 0};
static unsigned int ng3[] = {3656U, 0U};
static unsigned int ng4[] = {7745U, 0U};
static unsigned int ng5[] = {11841U, 0U};
static int ng6[] = {2, 0};
static unsigned int ng7[] = {15944U, 0U};
static int ng8[] = {3, 0};
static unsigned int ng9[] = {20040U, 0U};
static int ng10[] = {4, 0};
static unsigned int ng11[] = {44616U, 0U};
static int ng12[] = {5, 0};
static unsigned int ng13[] = {48648U, 0U};
static int ng14[] = {6, 0};
static unsigned int ng15[] = {52744U, 0U};
static int ng16[] = {7, 0};
static unsigned int ng17[] = {24138U, 0U};
static int ng18[] = {8, 0};
static unsigned int ng19[] = {28162U, 0U};
static int ng20[] = {9, 0};
static unsigned int ng21[] = {32322U, 0U};
static int ng22[] = {10, 0};
static unsigned int ng23[] = {36418U, 0U};
static int ng24[] = {11, 0};
static unsigned int ng25[] = {36866U, 0U};
static int ng26[] = {12, 0};
static unsigned int ng27[] = {44610U, 0U};
static int ng28[] = {13, 0};
static unsigned int ng29[] = {48714U, 0U};
static int ng30[] = {14, 0};
static unsigned int ng31[] = {0U, 0U};
static int ng32[] = {15, 0};



static void Always_34_0(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;

LAB0:    t1 = (t0 + 3284U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 3912);
    *((int *)t2) = 1;
    t3 = (t0 + 3312);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(35, ng0);

LAB5:    xsi_set_current_line(36, ng0);
    t4 = (t0 + 692U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(41, ng0);

LAB14:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 2576);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t4, 8, t5, 32);
    t7 = (t0 + 2576);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 8, 0LL);

LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(37, ng0);

LAB13:    xsi_set_current_line(38, ng0);
    t28 = ((char*)((ng2)));
    t29 = (t0 + 2576);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 8, 0LL);
    goto LAB12;

}

static void Initial_47_1(char *t0)
{
    char t3[8];
    char t4[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t13;
    int t14;
    char *t15;
    unsigned int t16;
    int t17;
    int t18;
    unsigned int t19;
    unsigned int t20;
    int t21;
    int t22;

LAB0:    xsi_set_current_line(48, ng0);

LAB2:    xsi_set_current_line(49, ng0);
    t1 = ((char*)((ng3)));
    t2 = (t0 + 2760);
    t5 = (t0 + 2760);
    t6 = (t5 + 44U);
    t7 = *((char **)t6);
    t8 = (t0 + 2760);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng2)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 1, t11, 32, 1);
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    if (t18 == 1)
        goto LAB3;

LAB4:    xsi_set_current_line(50, ng0);
    t1 = ((char*)((ng4)));
    t2 = (t0 + 2760);
    t5 = (t0 + 2760);
    t6 = (t5 + 44U);
    t7 = *((char **)t6);
    t8 = (t0 + 2760);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng1)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 1, t11, 32, 1);
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    if (t18 == 1)
        goto LAB5;

LAB6:    xsi_set_current_line(51, ng0);
    t1 = ((char*)((ng5)));
    t2 = (t0 + 2760);
    t5 = (t0 + 2760);
    t6 = (t5 + 44U);
    t7 = *((char **)t6);
    t8 = (t0 + 2760);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng6)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 1, t11, 32, 1);
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    if (t18 == 1)
        goto LAB7;

LAB8:    xsi_set_current_line(52, ng0);
    t1 = ((char*)((ng7)));
    t2 = (t0 + 2760);
    t5 = (t0 + 2760);
    t6 = (t5 + 44U);
    t7 = *((char **)t6);
    t8 = (t0 + 2760);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng8)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 1, t11, 32, 1);
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    if (t18 == 1)
        goto LAB9;

LAB10:    xsi_set_current_line(53, ng0);
    t1 = ((char*)((ng9)));
    t2 = (t0 + 2760);
    t5 = (t0 + 2760);
    t6 = (t5 + 44U);
    t7 = *((char **)t6);
    t8 = (t0 + 2760);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng10)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 1, t11, 32, 1);
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    if (t18 == 1)
        goto LAB11;

LAB12:    xsi_set_current_line(54, ng0);
    t1 = ((char*)((ng11)));
    t2 = (t0 + 2760);
    t5 = (t0 + 2760);
    t6 = (t5 + 44U);
    t7 = *((char **)t6);
    t8 = (t0 + 2760);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng12)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 1, t11, 32, 1);
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    if (t18 == 1)
        goto LAB13;

LAB14:    xsi_set_current_line(55, ng0);
    t1 = ((char*)((ng13)));
    t2 = (t0 + 2760);
    t5 = (t0 + 2760);
    t6 = (t5 + 44U);
    t7 = *((char **)t6);
    t8 = (t0 + 2760);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng14)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 1, t11, 32, 1);
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    if (t18 == 1)
        goto LAB15;

LAB16:    xsi_set_current_line(56, ng0);
    t1 = ((char*)((ng15)));
    t2 = (t0 + 2760);
    t5 = (t0 + 2760);
    t6 = (t5 + 44U);
    t7 = *((char **)t6);
    t8 = (t0 + 2760);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng16)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 1, t11, 32, 1);
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    if (t18 == 1)
        goto LAB17;

LAB18:    xsi_set_current_line(57, ng0);
    t1 = ((char*)((ng17)));
    t2 = (t0 + 2760);
    t5 = (t0 + 2760);
    t6 = (t5 + 44U);
    t7 = *((char **)t6);
    t8 = (t0 + 2760);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng18)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 1, t11, 32, 1);
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    if (t18 == 1)
        goto LAB19;

LAB20:    xsi_set_current_line(58, ng0);
    t1 = ((char*)((ng19)));
    t2 = (t0 + 2760);
    t5 = (t0 + 2760);
    t6 = (t5 + 44U);
    t7 = *((char **)t6);
    t8 = (t0 + 2760);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng20)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 1, t11, 32, 1);
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    if (t18 == 1)
        goto LAB21;

LAB22:    xsi_set_current_line(59, ng0);
    t1 = ((char*)((ng21)));
    t2 = (t0 + 2760);
    t5 = (t0 + 2760);
    t6 = (t5 + 44U);
    t7 = *((char **)t6);
    t8 = (t0 + 2760);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng22)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 1, t11, 32, 1);
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    if (t18 == 1)
        goto LAB23;

LAB24:    xsi_set_current_line(60, ng0);
    t1 = ((char*)((ng23)));
    t2 = (t0 + 2760);
    t5 = (t0 + 2760);
    t6 = (t5 + 44U);
    t7 = *((char **)t6);
    t8 = (t0 + 2760);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng24)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 1, t11, 32, 1);
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    if (t18 == 1)
        goto LAB25;

LAB26:    xsi_set_current_line(61, ng0);
    t1 = ((char*)((ng25)));
    t2 = (t0 + 2760);
    t5 = (t0 + 2760);
    t6 = (t5 + 44U);
    t7 = *((char **)t6);
    t8 = (t0 + 2760);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng26)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 1, t11, 32, 1);
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    if (t18 == 1)
        goto LAB27;

LAB28:    xsi_set_current_line(62, ng0);
    t1 = ((char*)((ng27)));
    t2 = (t0 + 2760);
    t5 = (t0 + 2760);
    t6 = (t5 + 44U);
    t7 = *((char **)t6);
    t8 = (t0 + 2760);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng28)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 1, t11, 32, 1);
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    if (t18 == 1)
        goto LAB29;

LAB30:    xsi_set_current_line(63, ng0);
    t1 = ((char*)((ng29)));
    t2 = (t0 + 2760);
    t5 = (t0 + 2760);
    t6 = (t5 + 44U);
    t7 = *((char **)t6);
    t8 = (t0 + 2760);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng30)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 1, t11, 32, 1);
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    if (t18 == 1)
        goto LAB31;

LAB32:    xsi_set_current_line(64, ng0);
    t1 = ((char*)((ng31)));
    t2 = (t0 + 2760);
    t5 = (t0 + 2760);
    t6 = (t5 + 44U);
    t7 = *((char **)t6);
    t8 = (t0 + 2760);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng32)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 1, t11, 32, 1);
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    if (t18 == 1)
        goto LAB33;

LAB34:
LAB1:    return;
LAB3:    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t4);
    t21 = (t19 - t20);
    t22 = (t21 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t22);
    goto LAB4;

LAB5:    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t4);
    t21 = (t19 - t20);
    t22 = (t21 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t22);
    goto LAB6;

LAB7:    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t4);
    t21 = (t19 - t20);
    t22 = (t21 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t22);
    goto LAB8;

LAB9:    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t4);
    t21 = (t19 - t20);
    t22 = (t21 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t22);
    goto LAB10;

LAB11:    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t4);
    t21 = (t19 - t20);
    t22 = (t21 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t22);
    goto LAB12;

LAB13:    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t4);
    t21 = (t19 - t20);
    t22 = (t21 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t22);
    goto LAB14;

LAB15:    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t4);
    t21 = (t19 - t20);
    t22 = (t21 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t22);
    goto LAB16;

LAB17:    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t4);
    t21 = (t19 - t20);
    t22 = (t21 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t22);
    goto LAB18;

LAB19:    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t4);
    t21 = (t19 - t20);
    t22 = (t21 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t22);
    goto LAB20;

LAB21:    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t4);
    t21 = (t19 - t20);
    t22 = (t21 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t22);
    goto LAB22;

LAB23:    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t4);
    t21 = (t19 - t20);
    t22 = (t21 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t22);
    goto LAB24;

LAB25:    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t4);
    t21 = (t19 - t20);
    t22 = (t21 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t22);
    goto LAB26;

LAB27:    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t4);
    t21 = (t19 - t20);
    t22 = (t21 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t22);
    goto LAB28;

LAB29:    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t4);
    t21 = (t19 - t20);
    t22 = (t21 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t22);
    goto LAB30;

LAB31:    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t4);
    t21 = (t19 - t20);
    t22 = (t21 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t22);
    goto LAB32;

LAB33:    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t4);
    t21 = (t19 - t20);
    t22 = (t21 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t22);
    goto LAB34;

}

static void Always_66_2(char *t0)
{
    char t7[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;

LAB0:    t1 = (t0 + 3572U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 3920);
    *((int *)t2) = 1;
    t3 = (t0 + 3600);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(67, ng0);

LAB5:    xsi_set_current_line(68, ng0);
    t4 = (t0 + 2760);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    t8 = (t0 + 2760);
    t9 = (t8 + 44U);
    t10 = *((char **)t9);
    t11 = (t0 + 2760);
    t12 = (t11 + 40U);
    t13 = *((char **)t12);
    t14 = (t0 + 2576);
    t15 = (t14 + 36U);
    t16 = *((char **)t15);
    xsi_vlog_generic_get_array_select_value(t7, 16, t6, t10, t13, 2, 1, t16, 8, 2);
    t17 = (t0 + 2484);
    xsi_vlogvar_assign_value(t17, t7, 0, 0, 16);
    goto LAB2;

}

static void Always_71_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t1 = (t0 + 3716U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(71, ng0);
    t2 = (t0 + 3928);
    *((int *)t2) = 1;
    t3 = (t0 + 3744);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(72, ng0);

LAB5:    xsi_set_current_line(73, ng0);
    t4 = (t0 + 2668);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    t7 = (t0 + 2576);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 8);
    goto LAB2;

}


extern void work_m_00000000001637928013_3626715834_init()
{
	static char *pe[] = {(void *)Always_34_0,(void *)Initial_47_1,(void *)Always_66_2,(void *)Always_71_3};
	xsi_register_didat("work_m_00000000001637928013_3626715834", "isim/tb_cu_isim_beh.exe.sim/work/m_00000000001637928013_3626715834.didat");
	xsi_register_executes(pe);
}
