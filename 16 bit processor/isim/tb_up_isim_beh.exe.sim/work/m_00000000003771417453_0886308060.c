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
static const char *ng0 = "C:/Users/Virtu/Desktop/New folder/updated/ALU.V";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {0, 0};
static int ng3[] = {1, 0};
static int ng4[] = {2, 0};
static int ng5[] = {3, 0};
static int ng6[] = {4, 0};
static int ng7[] = {5, 0};
static int ng8[] = {6, 0};
static int ng9[] = {9, 0};
static int ng10[] = {13, 0};
static int ng11[] = {14, 0};
static int ng12[] = {12, 0};
static int ng13[] = {10, 0};
static int ng14[] = {11, 0};



static void Always_46_0(char *t0)
{
    char t6[8];
    char t29[8];
    char t61[8];
    char t62[8];
    char t64[8];
    char t99[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t7;
    unsigned int t8;
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
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    char *t28;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    char *t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    char *t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    char *t63;
    char *t65;
    char *t66;
    char *t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    char *t74;
    char *t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    char *t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    char *t96;
    char *t97;
    char *t98;
    char *t100;
    char *t101;

LAB0:    t1 = (t0 + 2272U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 2468);
    *((int *)t2) = 1;
    t3 = (t0 + 2300);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(46, ng0);

LAB5:    xsi_set_current_line(47, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 1380);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 16);
    xsi_set_current_line(48, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1472);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);
    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1564);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);
    xsi_set_current_line(51, ng0);
    t2 = (t0 + 968U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t5);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t5);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB9;

LAB6:    if (t16 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    t20 = (t6 + 4);
    t21 = *((unsigned int *)t20);
    t22 = (~(t21));
    t23 = *((unsigned int *)t6);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 968U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t5);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t5);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB17;

LAB14:    if (t16 != 0)
        goto LAB16;

LAB15:    *((unsigned int *)t6) = 1;

LAB17:    t20 = (t6 + 4);
    t21 = *((unsigned int *)t20);
    t22 = (~(t21));
    t23 = *((unsigned int *)t6);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB18;

LAB19:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 968U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng4)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t5);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t5);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB25;

LAB22:    if (t16 != 0)
        goto LAB24;

LAB23:    *((unsigned int *)t6) = 1;

LAB25:    t20 = (t6 + 4);
    t21 = *((unsigned int *)t20);
    t22 = (~(t21));
    t23 = *((unsigned int *)t6);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB26;

LAB27:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 968U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng5)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t5);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t5);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB33;

LAB30:    if (t16 != 0)
        goto LAB32;

LAB31:    *((unsigned int *)t6) = 1;

LAB33:    t20 = (t6 + 4);
    t21 = *((unsigned int *)t20);
    t22 = (~(t21));
    t23 = *((unsigned int *)t6);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB34;

LAB35:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 968U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng6)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t5);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t5);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB44;

LAB41:    if (t16 != 0)
        goto LAB43;

LAB42:    *((unsigned int *)t6) = 1;

LAB44:    t20 = (t6 + 4);
    t21 = *((unsigned int *)t20);
    t22 = (~(t21));
    t23 = *((unsigned int *)t6);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB45;

LAB46:    xsi_set_current_line(61, ng0);
    t2 = (t0 + 968U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng7)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t5);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t5);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB55;

LAB52:    if (t16 != 0)
        goto LAB54;

LAB53:    *((unsigned int *)t6) = 1;

LAB55:    t20 = (t6 + 4);
    t21 = *((unsigned int *)t20);
    t22 = (~(t21));
    t23 = *((unsigned int *)t6);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB56;

LAB57:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 968U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng8)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t5);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t5);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB63;

LAB60:    if (t16 != 0)
        goto LAB62;

LAB61:    *((unsigned int *)t6) = 1;

LAB63:    t20 = (t6 + 4);
    t21 = *((unsigned int *)t20);
    t22 = (~(t21));
    t23 = *((unsigned int *)t6);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB64;

LAB65:    xsi_set_current_line(70, ng0);
    t2 = (t0 + 968U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng9)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t5);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t5);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB71;

LAB68:    if (t16 != 0)
        goto LAB70;

LAB69:    *((unsigned int *)t6) = 1;

LAB71:    t20 = (t6 + 4);
    t21 = *((unsigned int *)t20);
    t22 = (~(t21));
    t23 = *((unsigned int *)t6);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB72;

LAB73:    xsi_set_current_line(72, ng0);
    t2 = (t0 + 968U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng10)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t5);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t5);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB79;

LAB76:    if (t16 != 0)
        goto LAB78;

LAB77:    *((unsigned int *)t6) = 1;

LAB79:    t20 = (t6 + 4);
    t21 = *((unsigned int *)t20);
    t22 = (~(t21));
    t23 = *((unsigned int *)t6);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB80;

LAB81:    xsi_set_current_line(76, ng0);
    t2 = (t0 + 968U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng11)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t5);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t5);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB87;

LAB84:    if (t16 != 0)
        goto LAB86;

LAB85:    *((unsigned int *)t6) = 1;

LAB87:    t20 = (t6 + 4);
    t21 = *((unsigned int *)t20);
    t22 = (~(t21));
    t23 = *((unsigned int *)t6);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB88;

LAB89:    xsi_set_current_line(78, ng0);
    t2 = (t0 + 968U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng12)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t5);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t5);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB95;

LAB92:    if (t16 != 0)
        goto LAB94;

LAB93:    *((unsigned int *)t6) = 1;

LAB95:    t20 = (t6 + 4);
    t21 = *((unsigned int *)t20);
    t22 = (~(t21));
    t23 = *((unsigned int *)t6);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB96;

LAB97:    xsi_set_current_line(80, ng0);
    t2 = (t0 + 968U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng13)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t5);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t5);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB103;

LAB100:    if (t16 != 0)
        goto LAB102;

LAB101:    *((unsigned int *)t6) = 1;

LAB103:    memset(t29, 0, 8);
    t20 = (t6 + 4);
    t21 = *((unsigned int *)t20);
    t22 = (~(t21));
    t23 = *((unsigned int *)t6);
    t24 = (t23 & t22);
    t25 = (t24 & 1U);
    if (t25 != 0)
        goto LAB104;

LAB105:    if (*((unsigned int *)t20) != 0)
        goto LAB106;

LAB107:    t27 = (t29 + 4);
    t30 = *((unsigned int *)t29);
    t31 = *((unsigned int *)t27);
    t32 = (t30 || t31);
    if (t32 > 0)
        goto LAB108;

LAB109:    memcpy(t64, t29, 8);

LAB110:    t90 = (t64 + 4);
    t91 = *((unsigned int *)t90);
    t92 = (~(t91));
    t93 = *((unsigned int *)t64);
    t94 = (t93 & t92);
    t95 = (t94 != 0);
    if (t95 > 0)
        goto LAB122;

LAB123:    xsi_set_current_line(82, ng0);
    t2 = (t0 + 968U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng14)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t5);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t5);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB129;

LAB126:    if (t16 != 0)
        goto LAB128;

LAB127:    *((unsigned int *)t6) = 1;

LAB129:    memset(t29, 0, 8);
    t20 = (t6 + 4);
    t21 = *((unsigned int *)t20);
    t22 = (~(t21));
    t23 = *((unsigned int *)t6);
    t24 = (t23 & t22);
    t25 = (t24 & 1U);
    if (t25 != 0)
        goto LAB130;

LAB131:    if (*((unsigned int *)t20) != 0)
        goto LAB132;

LAB133:    t27 = (t29 + 4);
    t30 = *((unsigned int *)t29);
    t31 = *((unsigned int *)t27);
    t32 = (t30 || t31);
    if (t32 > 0)
        goto LAB134;

LAB135:    memcpy(t64, t29, 8);

LAB136:    t97 = (t64 + 4);
    t91 = *((unsigned int *)t97);
    t92 = (~(t91));
    t93 = *((unsigned int *)t64);
    t94 = (t93 & t92);
    t95 = (t94 != 0);
    if (t95 > 0)
        goto LAB148;

LAB149:    xsi_set_current_line(84, ng0);

LAB152:    xsi_set_current_line(85, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1380);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);

LAB150:
LAB124:
LAB98:
LAB90:
LAB82:
LAB74:
LAB66:
LAB58:
LAB47:
LAB36:
LAB28:
LAB20:
LAB12:    goto LAB2;

LAB8:    t19 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(51, ng0);

LAB13:    xsi_set_current_line(52, ng0);
    t26 = (t0 + 692U);
    t27 = *((char **)t26);
    t26 = (t0 + 784U);
    t28 = *((char **)t26);
    memset(t29, 0, 8);
    xsi_vlog_unsigned_add(t29, 16, t27, 16, t28, 16);
    t26 = (t0 + 1380);
    xsi_vlogvar_assign_value(t26, t29, 0, 0, 16);
    goto LAB12;

LAB16:    t19 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB17;

LAB18:    xsi_set_current_line(53, ng0);

LAB21:    xsi_set_current_line(54, ng0);
    t26 = (t0 + 692U);
    t27 = *((char **)t26);
    t26 = (t0 + 600U);
    t28 = *((char **)t26);
    memset(t29, 0, 8);
    xsi_vlog_unsigned_lshift(t29, 16, t27, 16, t28, 3);
    t26 = (t0 + 1380);
    xsi_vlogvar_assign_value(t26, t29, 0, 0, 16);
    goto LAB20;

LAB24:    t19 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB25;

LAB26:    xsi_set_current_line(55, ng0);

LAB29:    xsi_set_current_line(56, ng0);
    t26 = (t0 + 692U);
    t27 = *((char **)t26);
    t26 = (t0 + 600U);
    t28 = *((char **)t26);
    memset(t29, 0, 8);
    xsi_vlog_unsigned_rshift(t29, 16, t27, 16, t28, 3);
    t26 = (t0 + 1380);
    xsi_vlogvar_assign_value(t26, t29, 0, 0, 16);
    goto LAB28;

LAB32:    t19 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB33;

LAB34:    xsi_set_current_line(57, ng0);

LAB37:    xsi_set_current_line(58, ng0);
    t26 = (t0 + 692U);
    t27 = *((char **)t26);
    t26 = (t0 + 784U);
    t28 = *((char **)t26);
    t30 = *((unsigned int *)t27);
    t31 = *((unsigned int *)t28);
    t32 = (t30 | t31);
    *((unsigned int *)t29) = t32;
    t26 = (t27 + 4);
    t33 = (t28 + 4);
    t34 = (t29 + 4);
    t35 = *((unsigned int *)t26);
    t36 = *((unsigned int *)t33);
    t37 = (t35 | t36);
    *((unsigned int *)t34) = t37;
    t38 = *((unsigned int *)t34);
    t39 = (t38 != 0);
    if (t39 == 1)
        goto LAB38;

LAB39:
LAB40:    t56 = (t0 + 1380);
    xsi_vlogvar_assign_value(t56, t29, 0, 0, 16);
    goto LAB36;

LAB38:    t40 = *((unsigned int *)t29);
    t41 = *((unsigned int *)t34);
    *((unsigned int *)t29) = (t40 | t41);
    t42 = (t27 + 4);
    t43 = (t28 + 4);
    t44 = *((unsigned int *)t42);
    t45 = (~(t44));
    t46 = *((unsigned int *)t27);
    t47 = (t46 & t45);
    t48 = *((unsigned int *)t43);
    t49 = (~(t48));
    t50 = *((unsigned int *)t28);
    t51 = (t50 & t49);
    t52 = (~(t47));
    t53 = (~(t51));
    t54 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t54 & t52);
    t55 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t55 & t53);
    goto LAB40;

LAB43:    t19 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB44;

LAB45:    xsi_set_current_line(59, ng0);

LAB48:    xsi_set_current_line(60, ng0);
    t26 = (t0 + 692U);
    t27 = *((char **)t26);
    t26 = (t0 + 784U);
    t28 = *((char **)t26);
    t30 = *((unsigned int *)t27);
    t31 = *((unsigned int *)t28);
    t32 = (t30 & t31);
    *((unsigned int *)t29) = t32;
    t26 = (t27 + 4);
    t33 = (t28 + 4);
    t34 = (t29 + 4);
    t35 = *((unsigned int *)t26);
    t36 = *((unsigned int *)t33);
    t37 = (t35 | t36);
    *((unsigned int *)t34) = t37;
    t38 = *((unsigned int *)t34);
    t39 = (t38 != 0);
    if (t39 == 1)
        goto LAB49;

LAB50:
LAB51:    t56 = (t0 + 1380);
    xsi_vlogvar_assign_value(t56, t29, 0, 0, 16);
    goto LAB47;

LAB49:    t40 = *((unsigned int *)t29);
    t41 = *((unsigned int *)t34);
    *((unsigned int *)t29) = (t40 | t41);
    t42 = (t27 + 4);
    t43 = (t28 + 4);
    t44 = *((unsigned int *)t27);
    t45 = (~(t44));
    t46 = *((unsigned int *)t42);
    t48 = (~(t46));
    t49 = *((unsigned int *)t28);
    t50 = (~(t49));
    t52 = *((unsigned int *)t43);
    t53 = (~(t52));
    t47 = (t45 & t48);
    t51 = (t50 & t53);
    t54 = (~(t47));
    t55 = (~(t51));
    t57 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t57 & t54);
    t58 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t58 & t55);
    t59 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t59 & t54);
    t60 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t60 & t55);
    goto LAB51;

LAB54:    t19 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB55;

LAB56:    xsi_set_current_line(61, ng0);

LAB59:    xsi_set_current_line(62, ng0);
    t26 = (t0 + 692U);
    t27 = *((char **)t26);
    t26 = (t0 + 876U);
    t28 = *((char **)t26);
    memset(t29, 0, 8);
    xsi_vlog_unsigned_add(t29, 16, t27, 16, t28, 6);
    t26 = (t0 + 1380);
    xsi_vlogvar_assign_value(t26, t29, 0, 0, 16);
    goto LAB58;

LAB62:    t19 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB63;

LAB64:    xsi_set_current_line(63, ng0);

LAB67:    xsi_set_current_line(64, ng0);
    t26 = (t0 + 876U);
    t27 = *((char **)t26);
    memcpy(t29, t27, 8);
    t26 = (t0 + 1380);
    xsi_vlogvar_assign_value(t26, t29, 0, 0, 16);
    goto LAB66;

LAB70:    t19 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB71;

LAB72:    xsi_set_current_line(70, ng0);

LAB75:    xsi_set_current_line(71, ng0);
    t26 = (t0 + 1152U);
    t27 = *((char **)t26);
    t26 = (t0 + 1060U);
    t28 = *((char **)t26);
    memset(t29, 0, 8);
    xsi_vlog_unsigned_add(t29, 8, t27, 8, t28, 8);
    t26 = (t0 + 1748);
    xsi_vlogvar_assign_value(t26, t29, 0, 0, 8);
    goto LAB74;

LAB78:    t19 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB79;

LAB80:    xsi_set_current_line(72, ng0);

LAB83:    xsi_set_current_line(73, ng0);
    t26 = (t0 + 692U);
    t27 = *((char **)t26);
    t26 = (t0 + 784U);
    t28 = *((char **)t26);
    memset(t29, 0, 8);
    xsi_vlog_unsigned_multiply(t29, 32, t27, 16, t28, 16);
    t26 = (t0 + 1656);
    xsi_vlogvar_assign_value(t26, t29, 0, 0, 32);
    xsi_set_current_line(74, ng0);
    t2 = (t0 + 1656);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t19 = (t4 + 4);
    t7 = *((unsigned int *)t4);
    t8 = (t7 >> 16);
    *((unsigned int *)t6) = t8;
    t9 = *((unsigned int *)t19);
    t10 = (t9 >> 16);
    *((unsigned int *)t5) = t10;
    t11 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t11 & 65535U);
    t12 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t12 & 65535U);
    t20 = (t0 + 1472);
    xsi_vlogvar_assign_value(t20, t6, 0, 0, 16);
    xsi_set_current_line(75, ng0);
    t2 = (t0 + 1656);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t19 = (t4 + 4);
    t7 = *((unsigned int *)t4);
    t8 = (t7 >> 0);
    *((unsigned int *)t6) = t8;
    t9 = *((unsigned int *)t19);
    t10 = (t9 >> 0);
    *((unsigned int *)t5) = t10;
    t11 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t11 & 65535U);
    t12 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t12 & 65535U);
    t20 = (t0 + 1564);
    xsi_vlogvar_assign_value(t20, t6, 0, 0, 16);
    goto LAB82;

LAB86:    t19 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB87;

LAB88:    xsi_set_current_line(76, ng0);

LAB91:    xsi_set_current_line(77, ng0);
    t26 = (t0 + 1564);
    t27 = (t26 + 36U);
    t28 = *((char **)t27);
    t33 = (t0 + 1380);
    xsi_vlogvar_assign_value(t33, t28, 0, 0, 16);
    goto LAB90;

LAB94:    t19 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB95;

LAB96:    xsi_set_current_line(78, ng0);

LAB99:    xsi_set_current_line(79, ng0);
    t26 = (t0 + 1472);
    t27 = (t26 + 36U);
    t28 = *((char **)t27);
    t33 = (t0 + 1380);
    xsi_vlogvar_assign_value(t33, t28, 0, 0, 16);
    goto LAB98;

LAB102:    t19 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB103;

LAB104:    *((unsigned int *)t29) = 1;
    goto LAB107;

LAB106:    t26 = (t29 + 4);
    *((unsigned int *)t29) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB107;

LAB108:    t28 = (t0 + 692U);
    t33 = *((char **)t28);
    t28 = ((char*)((ng2)));
    memset(t61, 0, 8);
    t34 = (t33 + 4);
    t42 = (t28 + 4);
    t35 = *((unsigned int *)t33);
    t36 = *((unsigned int *)t28);
    t37 = (t35 ^ t36);
    t38 = *((unsigned int *)t34);
    t39 = *((unsigned int *)t42);
    t40 = (t38 ^ t39);
    t41 = (t37 | t40);
    t44 = *((unsigned int *)t34);
    t45 = *((unsigned int *)t42);
    t46 = (t44 | t45);
    t48 = (~(t46));
    t49 = (t41 & t48);
    if (t49 != 0)
        goto LAB114;

LAB111:    if (t46 != 0)
        goto LAB113;

LAB112:    *((unsigned int *)t61) = 1;

LAB114:    memset(t62, 0, 8);
    t56 = (t61 + 4);
    t50 = *((unsigned int *)t56);
    t52 = (~(t50));
    t53 = *((unsigned int *)t61);
    t54 = (t53 & t52);
    t55 = (t54 & 1U);
    if (t55 != 0)
        goto LAB115;

LAB116:    if (*((unsigned int *)t56) != 0)
        goto LAB117;

LAB118:    t57 = *((unsigned int *)t29);
    t58 = *((unsigned int *)t62);
    t59 = (t57 & t58);
    *((unsigned int *)t64) = t59;
    t65 = (t29 + 4);
    t66 = (t62 + 4);
    t67 = (t64 + 4);
    t60 = *((unsigned int *)t65);
    t68 = *((unsigned int *)t66);
    t69 = (t60 | t68);
    *((unsigned int *)t67) = t69;
    t70 = *((unsigned int *)t67);
    t71 = (t70 != 0);
    if (t71 == 1)
        goto LAB119;

LAB120:
LAB121:    goto LAB110;

LAB113:    t43 = (t61 + 4);
    *((unsigned int *)t61) = 1;
    *((unsigned int *)t43) = 1;
    goto LAB114;

LAB115:    *((unsigned int *)t62) = 1;
    goto LAB118;

LAB117:    t63 = (t62 + 4);
    *((unsigned int *)t62) = 1;
    *((unsigned int *)t63) = 1;
    goto LAB118;

LAB119:    t72 = *((unsigned int *)t64);
    t73 = *((unsigned int *)t67);
    *((unsigned int *)t64) = (t72 | t73);
    t74 = (t29 + 4);
    t75 = (t62 + 4);
    t76 = *((unsigned int *)t29);
    t77 = (~(t76));
    t78 = *((unsigned int *)t74);
    t79 = (~(t78));
    t80 = *((unsigned int *)t62);
    t81 = (~(t80));
    t82 = *((unsigned int *)t75);
    t83 = (~(t82));
    t47 = (t77 & t79);
    t51 = (t81 & t83);
    t84 = (~(t47));
    t85 = (~(t51));
    t86 = *((unsigned int *)t67);
    *((unsigned int *)t67) = (t86 & t84);
    t87 = *((unsigned int *)t67);
    *((unsigned int *)t67) = (t87 & t85);
    t88 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t88 & t84);
    t89 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t89 & t85);
    goto LAB121;

LAB122:    xsi_set_current_line(80, ng0);

LAB125:    xsi_set_current_line(81, ng0);
    t96 = (t0 + 1152U);
    t97 = *((char **)t96);
    t96 = (t0 + 1060U);
    t98 = *((char **)t96);
    memset(t99, 0, 8);
    xsi_vlog_unsigned_add(t99, 8, t97, 8, t98, 8);
    t96 = (t0 + 1748);
    xsi_vlogvar_assign_value(t96, t99, 0, 0, 8);
    goto LAB124;

LAB128:    t19 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB129;

LAB130:    *((unsigned int *)t29) = 1;
    goto LAB133;

LAB132:    t26 = (t29 + 4);
    *((unsigned int *)t29) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB133;

LAB134:    t28 = (t0 + 1380);
    t33 = (t28 + 36U);
    t34 = *((char **)t33);
    t42 = (t0 + 692U);
    t43 = *((char **)t42);
    memset(t61, 0, 8);
    t42 = (t34 + 4);
    t56 = (t43 + 4);
    t35 = *((unsigned int *)t34);
    t36 = *((unsigned int *)t43);
    t37 = (t35 ^ t36);
    t38 = *((unsigned int *)t42);
    t39 = *((unsigned int *)t56);
    t40 = (t38 ^ t39);
    t41 = (t37 | t40);
    t44 = *((unsigned int *)t42);
    t45 = *((unsigned int *)t56);
    t46 = (t44 | t45);
    t48 = (~(t46));
    t49 = (t41 & t48);
    if (t49 != 0)
        goto LAB140;

LAB137:    if (t46 != 0)
        goto LAB139;

LAB138:    *((unsigned int *)t61) = 1;

LAB140:    memset(t62, 0, 8);
    t65 = (t61 + 4);
    t50 = *((unsigned int *)t65);
    t52 = (~(t50));
    t53 = *((unsigned int *)t61);
    t54 = (t53 & t52);
    t55 = (t54 & 1U);
    if (t55 != 0)
        goto LAB141;

LAB142:    if (*((unsigned int *)t65) != 0)
        goto LAB143;

LAB144:    t57 = *((unsigned int *)t29);
    t58 = *((unsigned int *)t62);
    t59 = (t57 & t58);
    *((unsigned int *)t64) = t59;
    t67 = (t29 + 4);
    t74 = (t62 + 4);
    t75 = (t64 + 4);
    t60 = *((unsigned int *)t67);
    t68 = *((unsigned int *)t74);
    t69 = (t60 | t68);
    *((unsigned int *)t75) = t69;
    t70 = *((unsigned int *)t75);
    t71 = (t70 != 0);
    if (t71 == 1)
        goto LAB145;

LAB146:
LAB147:    goto LAB136;

LAB139:    t63 = (t61 + 4);
    *((unsigned int *)t61) = 1;
    *((unsigned int *)t63) = 1;
    goto LAB140;

LAB141:    *((unsigned int *)t62) = 1;
    goto LAB144;

LAB143:    t66 = (t62 + 4);
    *((unsigned int *)t62) = 1;
    *((unsigned int *)t66) = 1;
    goto LAB144;

LAB145:    t72 = *((unsigned int *)t64);
    t73 = *((unsigned int *)t75);
    *((unsigned int *)t64) = (t72 | t73);
    t90 = (t29 + 4);
    t96 = (t62 + 4);
    t76 = *((unsigned int *)t29);
    t77 = (~(t76));
    t78 = *((unsigned int *)t90);
    t79 = (~(t78));
    t80 = *((unsigned int *)t62);
    t81 = (~(t80));
    t82 = *((unsigned int *)t96);
    t83 = (~(t82));
    t47 = (t77 & t79);
    t51 = (t81 & t83);
    t84 = (~(t47));
    t85 = (~(t51));
    t86 = *((unsigned int *)t75);
    *((unsigned int *)t75) = (t86 & t84);
    t87 = *((unsigned int *)t75);
    *((unsigned int *)t75) = (t87 & t85);
    t88 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t88 & t84);
    t89 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t89 & t85);
    goto LAB147;

LAB148:    xsi_set_current_line(82, ng0);

LAB151:    xsi_set_current_line(83, ng0);
    t98 = (t0 + 1152U);
    t100 = *((char **)t98);
    t98 = (t0 + 1060U);
    t101 = *((char **)t98);
    memset(t99, 0, 8);
    xsi_vlog_unsigned_add(t99, 8, t100, 8, t101, 8);
    t98 = (t0 + 1748);
    xsi_vlogvar_assign_value(t98, t99, 0, 0, 8);
    goto LAB150;

}


extern void work_m_00000000003771417453_0886308060_init()
{
	static char *pe[] = {(void *)Always_46_0};
	xsi_register_didat("work_m_00000000003771417453_0886308060", "isim/tb_up_isim_beh.exe.sim/work/m_00000000003771417453_0886308060.didat");
	xsi_register_executes(pe);
}
