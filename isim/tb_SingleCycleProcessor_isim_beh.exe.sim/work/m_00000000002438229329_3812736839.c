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
static const char *ng0 = "C:/Users/Steven/Documents/SDSU/SDSU 2016-2017/Spring 2017/COMPE475/Single Cycle Processor/HW2/PCJump.v";



static void Cont_28_0(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 2688U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(28, ng0);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    t2 = (t0 + 1368U);
    t5 = *((char **)t2);
    xsi_vlogtype_concat(t3, 32, 32, 2U, t5, 6, t4, 26);
    t2 = (t0 + 3088);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t3, 8);
    xsi_driver_vfirst_trans(t2, 0, 31);
    t10 = (t0 + 3008);
    *((int *)t10) = 1;

LAB1:    return;
}


extern void work_m_00000000002438229329_3812736839_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("work_m_00000000002438229329_3812736839", "isim/tb_SingleCycleProcessor_isim_beh.exe.sim/work/m_00000000002438229329_3812736839.didat");
	xsi_register_executes(pe);
}
