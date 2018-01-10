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
static const char *ng0 = "C:/Users/Steven/Documents/SDSU/SDSU 2016-2017/Spring 2017/COMPE475/Single Cycle Processor/HW2/DataMemory.v";
static int ng1[] = {1, 0};



static void Always_30_0(char *t0)
{
    char t6[8];
    char t30[8];
    char t46[8];
    char t47[8];
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
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;
    unsigned int t44;
    char *t45;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    char *t54;
    char *t55;
    unsigned int t56;
    int t57;
    char *t58;
    unsigned int t59;
    int t60;
    int t61;
    unsigned int t62;
    unsigned int t63;
    int t64;
    int t65;

LAB0:    t1 = (t0 + 3008U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 3576);
    *((int *)t2) = 1;
    t3 = (t0 + 3040);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(30, ng0);

LAB5:    xsi_set_current_line(31, ng0);
    t4 = (t0 + 1208U);
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

LAB11:
LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(32, ng0);
    t28 = (t0 + 1528U);
    t29 = *((char **)t28);
    memcpy(t30, t29, 8);
    t33 = *((unsigned int *)t29);
    t34 = (t33 & 16U);
    t31 = t34;
    t28 = (t29 + 4);
    t35 = *((unsigned int *)t28);
    t36 = (t35 & 16U);
    t32 = t36;
    t37 = (t34 != 0);
    if (t37 == 1)
        goto LAB13;

LAB14:    t39 = (t36 != 0);
    if (t39 == 1)
        goto LAB15;

LAB16:    t42 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t42 & 4294967295U);
    t43 = (t30 + 4);
    t44 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t44 & 4294967295U);
    t45 = (t0 + 2088);
    t48 = (t0 + 2088);
    t49 = (t48 + 72U);
    t50 = *((char **)t49);
    t51 = (t0 + 2088);
    t52 = (t51 + 64U);
    t53 = *((char **)t52);
    t54 = (t0 + 1368U);
    t55 = *((char **)t54);
    xsi_vlog_generic_convert_array_indices(t46, t47, t50, t53, 1, 1, t55, 32, 1);
    t54 = (t46 + 4);
    t56 = *((unsigned int *)t54);
    t57 = (!(t56));
    t58 = (t47 + 4);
    t59 = *((unsigned int *)t58);
    t60 = (!(t59));
    t61 = (t57 && t60);
    if (t61 == 1)
        goto LAB17;

LAB18:    goto LAB12;

LAB13:    t38 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t38 | 4294967264U);
    goto LAB14;

LAB15:    t40 = (t30 + 4);
    t41 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t41 | 4294967264U);
    goto LAB16;

LAB17:    t62 = *((unsigned int *)t46);
    t63 = *((unsigned int *)t47);
    t64 = (t62 - t63);
    t65 = (t64 + 1);
    xsi_vlogvar_wait_assign_value(t45, t30, 0, *((unsigned int *)t47), t65, 0LL);
    goto LAB18;

}

static void Always_35_1(char *t0)
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

LAB0:    t1 = (t0 + 3256U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 3592);
    *((int *)t2) = 1;
    t3 = (t0 + 3288);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(35, ng0);

LAB5:    xsi_set_current_line(36, ng0);
    t4 = (t0 + 2088);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t0 + 2088);
    t9 = (t8 + 72U);
    t10 = *((char **)t9);
    t11 = (t0 + 2088);
    t12 = (t11 + 64U);
    t13 = *((char **)t12);
    t14 = (t0 + 1368U);
    t15 = *((char **)t14);
    xsi_vlog_generic_get_array_select_value(t7, 32, t6, t10, t13, 1, 1, t15, 32, 1);
    t14 = (t0 + 1928);
    xsi_vlogvar_assign_value(t14, t7, 0, 0, 32);
    goto LAB2;

}


extern void work_m_00000000003105992416_2461264495_init()
{
	static char *pe[] = {(void *)Always_30_0,(void *)Always_35_1};
	xsi_register_didat("work_m_00000000003105992416_2461264495", "isim/tb_SingleCycleProcessor_isim_beh.exe.sim/work/m_00000000003105992416_2461264495.didat");
	xsi_register_executes(pe);
}
