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

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/Steven/Documents/SDSU/SDSU 2016-2017/Spring 2017/COMPE475/Single Cycle Processor/HW2/ALU.v";
static unsigned int ng1[] = {2U, 0U};
static unsigned int ng2[] = {6U, 0U};
static unsigned int ng3[] = {0U, 0U};
static unsigned int ng4[] = {1U, 0U};
static unsigned int ng5[] = {7U, 0U};
static int ng6[] = {1, 0};
static int ng7[] = {0, 0};
static unsigned int ng8[] = {4294967295U, 4294967295U};



static void Always_29_0(char *t0)
{
    char t10[8];
    char t11[8];
    char t12[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    char *t28;

LAB0:    t1 = (t0 + 3120U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 3440);
    *((int *)t2) = 1;
    t3 = (t0 + 3152);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(29, ng0);

LAB5:    xsi_set_current_line(30, ng0);
    t4 = (t0 + 1640U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t4, 3);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB15;

LAB16:
LAB18:
LAB17:    xsi_set_current_line(37, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 2200);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB19:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 2200);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = ((char*)((ng7)));
    memset(t12, 0, 8);
    xsi_vlog_signed_equal(t12, 32, t4, 32, t7, 32);
    memset(t11, 0, 8);
    t8 = (t12 + 4);
    t13 = *((unsigned int *)t8);
    t14 = (~(t13));
    t15 = *((unsigned int *)t12);
    t16 = (t15 & t14);
    t17 = (t16 & 1U);
    if (t17 != 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t8) != 0)
        goto LAB35;

LAB36:    t21 = (t11 + 4);
    t18 = *((unsigned int *)t11);
    t19 = *((unsigned int *)t21);
    t20 = (t18 || t19);
    if (t20 > 0)
        goto LAB37;

LAB38:    t22 = *((unsigned int *)t11);
    t23 = (~(t22));
    t24 = *((unsigned int *)t21);
    t25 = (t23 || t24);
    if (t25 > 0)
        goto LAB39;

LAB40:    if (*((unsigned int *)t21) > 0)
        goto LAB41;

LAB42:    if (*((unsigned int *)t11) > 0)
        goto LAB43;

LAB44:    memcpy(t10, t27, 8);

LAB45:    t28 = (t0 + 2040);
    xsi_vlogvar_assign_value(t28, t10, 0, 0, 1);
    goto LAB2;

LAB7:    xsi_set_current_line(31, ng0);
    t7 = (t0 + 1320U);
    t8 = *((char **)t7);
    t7 = (t0 + 1480U);
    t9 = *((char **)t7);
    memset(t10, 0, 8);
    xsi_vlog_signed_add(t10, 32, t8, 5, t9, 32);
    t7 = (t0 + 2200);
    xsi_vlogvar_assign_value(t7, t10, 0, 0, 32);
    goto LAB19;

LAB9:    xsi_set_current_line(32, ng0);
    t3 = (t0 + 1320U);
    t4 = *((char **)t3);
    t3 = (t0 + 1480U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    xsi_vlog_signed_minus(t10, 32, t4, 5, t7, 32);
    t3 = (t0 + 2200);
    xsi_vlogvar_assign_value(t3, t10, 0, 0, 32);
    goto LAB19;

LAB11:    xsi_set_current_line(33, ng0);
    t3 = (t0 + 1320U);
    t4 = *((char **)t3);
    t3 = (t0 + 1480U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    xsi_vlog_signed_bit_and(t10, 32, t4, 5, t7, 32);
    t3 = (t0 + 2200);
    xsi_vlogvar_assign_value(t3, t10, 0, 0, 32);
    goto LAB19;

LAB13:    xsi_set_current_line(34, ng0);
    t3 = (t0 + 1320U);
    t4 = *((char **)t3);
    t3 = (t0 + 1480U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    xsi_vlog_signed_bit_or(t10, 32, t4, 5, t7, 32);
    t3 = (t0 + 2200);
    xsi_vlogvar_assign_value(t3, t10, 0, 0, 32);
    goto LAB19;

LAB15:    xsi_set_current_line(35, ng0);
    t3 = (t0 + 1320U);
    t4 = *((char **)t3);
    t3 = (t0 + 1480U);
    t7 = *((char **)t3);
    memset(t12, 0, 8);
    xsi_vlog_signed_less(t12, 32, t4, 5, t7, 32);
    memset(t11, 0, 8);
    t3 = (t12 + 4);
    t13 = *((unsigned int *)t3);
    t14 = (~(t13));
    t15 = *((unsigned int *)t12);
    t16 = (t15 & t14);
    t17 = (t16 & 1U);
    if (t17 != 0)
        goto LAB20;

LAB21:    if (*((unsigned int *)t3) != 0)
        goto LAB22;

LAB23:    t9 = (t11 + 4);
    t18 = *((unsigned int *)t11);
    t19 = *((unsigned int *)t9);
    t20 = (t18 || t19);
    if (t20 > 0)
        goto LAB24;

LAB25:    t22 = *((unsigned int *)t11);
    t23 = (~(t22));
    t24 = *((unsigned int *)t9);
    t25 = (t23 || t24);
    if (t25 > 0)
        goto LAB26;

LAB27:    if (*((unsigned int *)t9) > 0)
        goto LAB28;

LAB29:    if (*((unsigned int *)t11) > 0)
        goto LAB30;

LAB31:    memcpy(t10, t26, 8);

LAB32:    t27 = (t0 + 2200);
    xsi_vlogvar_assign_value(t27, t10, 0, 0, 32);
    goto LAB19;

LAB20:    *((unsigned int *)t11) = 1;
    goto LAB23;

LAB22:    t8 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB23;

LAB24:    t21 = ((char*)((ng6)));
    goto LAB25;

LAB26:    t26 = ((char*)((ng7)));
    goto LAB27;

LAB28:    xsi_vlog_unsigned_bit_combine(t10, 32, t21, 32, t26, 32);
    goto LAB32;

LAB30:    memcpy(t10, t21, 8);
    goto LAB32;

LAB33:    *((unsigned int *)t11) = 1;
    goto LAB36;

LAB35:    t9 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB36;

LAB37:    t26 = ((char*)((ng4)));
    goto LAB38;

LAB39:    t27 = ((char*)((ng3)));
    goto LAB40;

LAB41:    xsi_vlog_unsigned_bit_combine(t10, 1, t26, 1, t27, 1);
    goto LAB45;

LAB43:    memcpy(t10, t26, 8);
    goto LAB45;

}


extern void work_m_00000000000127114801_0886308060_init()
{
	static char *pe[] = {(void *)Always_29_0};
	xsi_register_didat("work_m_00000000000127114801_0886308060", "isim/tb_SingleCycleProcessor_isim_beh.exe.sim/work/m_00000000000127114801_0886308060.didat");
	xsi_register_executes(pe);
}
