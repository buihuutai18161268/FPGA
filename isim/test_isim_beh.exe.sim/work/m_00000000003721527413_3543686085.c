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
static const char *ng0 = "D:/TT_FPGA/TSP_PST_TTR_TNV/TSP_PST_TTR_TNV.v";
static unsigned int ng1[] = {1U, 0U};
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {255U, 0U};
static int ng4[] = {1, 0};
static unsigned int ng5[] = {128U, 0U};
static unsigned int ng6[] = {2U, 0U};
static unsigned int ng7[] = {8U, 0U};
static int ng8[] = {3, 0};
static int ng9[] = {0, 0};
static int ng10[] = {7, 0};
static int ng11[] = {4, 0};
static unsigned int ng12[] = {3U, 0U};



static void Always_27_0(char *t0)
{
    char t6[8];
    char t30[8];
    char t46[8];
    char t64[8];
    char t79[8];
    char t87[8];
    char t123[8];
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
    char *t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    char *t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    char *t53;
    char *t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;
    char *t60;
    char *t61;
    char *t62;
    char *t63;
    char *t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    char *t78;
    char *t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    char *t86;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    char *t91;
    char *t92;
    char *t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    char *t101;
    char *t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    char *t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    char *t121;
    char *t122;
    int t124;
    int t125;
    int t126;
    int t127;
    int t128;
    int t129;

LAB0:    t1 = (t0 + 3008U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(27, ng0);
    t2 = (t0 + 3328);
    *((int *)t2) = 1;
    t3 = (t0 + 3040);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(27, ng0);

LAB5:    xsi_set_current_line(28, ng0);
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

LAB11:    xsi_set_current_line(31, ng0);

LAB13:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB17;

LAB14:    if (t18 != 0)
        goto LAB16;

LAB15:    *((unsigned int *)t6) = 1;

LAB17:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB18;

LAB19:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1928);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 8);

LAB20:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t0 + 2088);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 2);

LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(29, ng0);
    t28 = ((char*)((ng2)));
    t29 = (t0 + 1928);
    xsi_vlogvar_assign_value(t29, t28, 0, 0, 8);
    goto LAB12;

LAB16:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB17;

LAB18:    xsi_set_current_line(33, ng0);

LAB21:    xsi_set_current_line(34, ng0);
    t21 = (t0 + 1928);
    t22 = (t21 + 56U);
    t28 = *((char **)t22);
    t29 = ((char*)((ng3)));
    memset(t30, 0, 8);
    t31 = (t28 + 4);
    t32 = (t29 + 4);
    t33 = *((unsigned int *)t28);
    t34 = *((unsigned int *)t29);
    t35 = (t33 ^ t34);
    t36 = *((unsigned int *)t31);
    t37 = *((unsigned int *)t32);
    t38 = (t36 ^ t37);
    t39 = (t35 | t38);
    t40 = *((unsigned int *)t31);
    t41 = *((unsigned int *)t32);
    t42 = (t40 | t41);
    t43 = (~(t42));
    t44 = (t39 & t43);
    if (t44 != 0)
        goto LAB25;

LAB22:    if (t42 != 0)
        goto LAB24;

LAB23:    *((unsigned int *)t30) = 1;

LAB25:    memset(t46, 0, 8);
    t47 = (t30 + 4);
    t48 = *((unsigned int *)t47);
    t49 = (~(t48));
    t50 = *((unsigned int *)t30);
    t51 = (t50 & t49);
    t52 = (t51 & 1U);
    if (t52 != 0)
        goto LAB26;

LAB27:    if (*((unsigned int *)t47) != 0)
        goto LAB28;

LAB29:    t54 = (t46 + 4);
    t55 = *((unsigned int *)t46);
    t56 = (!(t55));
    t57 = *((unsigned int *)t54);
    t58 = (t56 || t57);
    if (t58 > 0)
        goto LAB30;

LAB31:    memcpy(t87, t46, 8);

LAB32:    t115 = (t87 + 4);
    t116 = *((unsigned int *)t115);
    t117 = (~(t116));
    t118 = *((unsigned int *)t87);
    t119 = (t118 & t117);
    t120 = (t119 != 0);
    if (t120 > 0)
        goto LAB44;

LAB45:
LAB46:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB50;

LAB47:    if (t18 != 0)
        goto LAB49;

LAB48:    *((unsigned int *)t6) = 1;

LAB50:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB51;

LAB52:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB57;

LAB54:    if (t18 != 0)
        goto LAB56;

LAB55:    *((unsigned int *)t6) = 1;

LAB57:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB58;

LAB59:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng6)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB64;

LAB61:    if (t18 != 0)
        goto LAB63;

LAB62:    *((unsigned int *)t6) = 1;

LAB64:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB65;

LAB66:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng12)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB76;

LAB73:    if (t18 != 0)
        goto LAB75;

LAB74:    *((unsigned int *)t6) = 1;

LAB76:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB77;

LAB78:
LAB79:
LAB67:
LAB60:
LAB53:    goto LAB20;

LAB24:    t45 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t45) = 1;
    goto LAB25;

LAB26:    *((unsigned int *)t46) = 1;
    goto LAB29;

LAB28:    t53 = (t46 + 4);
    *((unsigned int *)t46) = 1;
    *((unsigned int *)t53) = 1;
    goto LAB29;

LAB30:    t59 = (t0 + 2088);
    t60 = (t59 + 56U);
    t61 = *((char **)t60);
    t62 = (t0 + 1528U);
    t63 = *((char **)t62);
    memset(t64, 0, 8);
    t62 = (t61 + 4);
    t65 = (t63 + 4);
    t66 = *((unsigned int *)t61);
    t67 = *((unsigned int *)t63);
    t68 = (t66 ^ t67);
    t69 = *((unsigned int *)t62);
    t70 = *((unsigned int *)t65);
    t71 = (t69 ^ t70);
    t72 = (t68 | t71);
    t73 = *((unsigned int *)t62);
    t74 = *((unsigned int *)t65);
    t75 = (t73 | t74);
    t76 = (~(t75));
    t77 = (t72 & t76);
    if (t77 != 0)
        goto LAB34;

LAB33:    if (t75 != 0)
        goto LAB35;

LAB36:    memset(t79, 0, 8);
    t80 = (t64 + 4);
    t81 = *((unsigned int *)t80);
    t82 = (~(t81));
    t83 = *((unsigned int *)t64);
    t84 = (t83 & t82);
    t85 = (t84 & 1U);
    if (t85 != 0)
        goto LAB37;

LAB38:    if (*((unsigned int *)t80) != 0)
        goto LAB39;

LAB40:    t88 = *((unsigned int *)t46);
    t89 = *((unsigned int *)t79);
    t90 = (t88 | t89);
    *((unsigned int *)t87) = t90;
    t91 = (t46 + 4);
    t92 = (t79 + 4);
    t93 = (t87 + 4);
    t94 = *((unsigned int *)t91);
    t95 = *((unsigned int *)t92);
    t96 = (t94 | t95);
    *((unsigned int *)t93) = t96;
    t97 = *((unsigned int *)t93);
    t98 = (t97 != 0);
    if (t98 == 1)
        goto LAB41;

LAB42:
LAB43:    goto LAB32;

LAB34:    *((unsigned int *)t64) = 1;
    goto LAB36;

LAB35:    t78 = (t64 + 4);
    *((unsigned int *)t64) = 1;
    *((unsigned int *)t78) = 1;
    goto LAB36;

LAB37:    *((unsigned int *)t79) = 1;
    goto LAB40;

LAB39:    t86 = (t79 + 4);
    *((unsigned int *)t79) = 1;
    *((unsigned int *)t86) = 1;
    goto LAB40;

LAB41:    t99 = *((unsigned int *)t87);
    t100 = *((unsigned int *)t93);
    *((unsigned int *)t87) = (t99 | t100);
    t101 = (t46 + 4);
    t102 = (t79 + 4);
    t103 = *((unsigned int *)t101);
    t104 = (~(t103));
    t105 = *((unsigned int *)t46);
    t106 = (t105 & t104);
    t107 = *((unsigned int *)t102);
    t108 = (~(t107));
    t109 = *((unsigned int *)t79);
    t110 = (t109 & t108);
    t111 = (~(t106));
    t112 = (~(t110));
    t113 = *((unsigned int *)t93);
    *((unsigned int *)t93) = (t113 & t111);
    t114 = *((unsigned int *)t93);
    *((unsigned int *)t93) = (t114 & t112);
    goto LAB43;

LAB44:    xsi_set_current_line(35, ng0);
    t121 = ((char*)((ng2)));
    t122 = (t0 + 1928);
    xsi_vlogvar_assign_value(t122, t121, 0, 0, 8);
    goto LAB46;

LAB49:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB50;

LAB51:    xsi_set_current_line(37, ng0);
    t21 = (t0 + 1928);
    t22 = (t21 + 56U);
    t28 = *((char **)t22);
    t29 = ((char*)((ng4)));
    memset(t30, 0, 8);
    xsi_vlog_unsigned_lshift(t30, 8, t28, 8, t29, 32);
    t31 = ((char*)((ng1)));
    memset(t46, 0, 8);
    xsi_vlog_unsigned_add(t46, 8, t30, 8, t31, 8);
    t32 = (t0 + 1928);
    xsi_vlogvar_assign_value(t32, t46, 0, 0, 8);
    goto LAB53;

LAB56:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB57;

LAB58:    xsi_set_current_line(39, ng0);
    t21 = (t0 + 1928);
    t22 = (t21 + 56U);
    t28 = *((char **)t22);
    t29 = ((char*)((ng4)));
    memset(t30, 0, 8);
    xsi_vlog_unsigned_rshift(t30, 8, t28, 8, t29, 32);
    t31 = ((char*)((ng5)));
    memset(t46, 0, 8);
    xsi_vlog_unsigned_add(t46, 8, t30, 8, t31, 8);
    t32 = (t0 + 1928);
    xsi_vlogvar_assign_value(t32, t46, 0, 0, 8);
    goto LAB60;

LAB63:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB64;

LAB65:    xsi_set_current_line(41, ng0);

LAB68:    xsi_set_current_line(42, ng0);
    t21 = (t0 + 1928);
    t22 = (t21 + 56U);
    t28 = *((char **)t22);
    memset(t30, 0, 8);
    t29 = (t30 + 4);
    t31 = (t28 + 4);
    t33 = *((unsigned int *)t28);
    t34 = (t33 >> 0);
    *((unsigned int *)t30) = t34;
    t35 = *((unsigned int *)t31);
    t36 = (t35 >> 0);
    *((unsigned int *)t29) = t36;
    t37 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t37 & 15U);
    t38 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t38 & 15U);
    t32 = ((char*)((ng4)));
    memset(t46, 0, 8);
    xsi_vlog_unsigned_rshift(t46, 4, t30, 4, t32, 32);
    t45 = ((char*)((ng7)));
    memset(t64, 0, 8);
    xsi_vlog_unsigned_add(t64, 4, t46, 4, t45, 4);
    t47 = (t0 + 1928);
    t53 = (t0 + 1928);
    t54 = (t53 + 72U);
    t59 = *((char **)t54);
    t60 = ((char*)((ng8)));
    t61 = ((char*)((ng9)));
    xsi_vlog_convert_partindices(t79, t87, t123, ((int*)(t59)), 2, t60, 32, 1, t61, 32, 1);
    t62 = (t79 + 4);
    t39 = *((unsigned int *)t62);
    t106 = (!(t39));
    t63 = (t87 + 4);
    t40 = *((unsigned int *)t63);
    t110 = (!(t40));
    t124 = (t106 && t110);
    t65 = (t123 + 4);
    t41 = *((unsigned int *)t65);
    t125 = (!(t41));
    t126 = (t124 && t125);
    if (t126 == 1)
        goto LAB69;

LAB70:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t7 = (t4 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 4);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 4);
    *((unsigned int *)t5) = t12;
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 15U);
    t14 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t14 & 15U);
    t8 = ((char*)((ng4)));
    memset(t30, 0, 8);
    xsi_vlog_unsigned_lshift(t30, 4, t6, 4, t8, 32);
    t21 = ((char*)((ng1)));
    memset(t46, 0, 8);
    xsi_vlog_unsigned_add(t46, 4, t30, 4, t21, 4);
    t22 = (t0 + 1928);
    t28 = (t0 + 1928);
    t29 = (t28 + 72U);
    t31 = *((char **)t29);
    t32 = ((char*)((ng10)));
    t45 = ((char*)((ng11)));
    xsi_vlog_convert_partindices(t64, t79, t87, ((int*)(t31)), 2, t32, 32, 1, t45, 32, 1);
    t47 = (t64 + 4);
    t15 = *((unsigned int *)t47);
    t106 = (!(t15));
    t53 = (t79 + 4);
    t16 = *((unsigned int *)t53);
    t110 = (!(t16));
    t124 = (t106 && t110);
    t54 = (t87 + 4);
    t17 = *((unsigned int *)t54);
    t125 = (!(t17));
    t126 = (t124 && t125);
    if (t126 == 1)
        goto LAB71;

LAB72:    goto LAB67;

LAB69:    t42 = *((unsigned int *)t123);
    t127 = (t42 + 0);
    t43 = *((unsigned int *)t79);
    t44 = *((unsigned int *)t87);
    t128 = (t43 - t44);
    t129 = (t128 + 1);
    xsi_vlogvar_assign_value(t47, t64, t127, *((unsigned int *)t87), t129);
    goto LAB70;

LAB71:    t18 = *((unsigned int *)t87);
    t127 = (t18 + 0);
    t19 = *((unsigned int *)t64);
    t20 = *((unsigned int *)t79);
    t128 = (t19 - t20);
    t129 = (t128 + 1);
    xsi_vlogvar_assign_value(t22, t46, t127, *((unsigned int *)t79), t129);
    goto LAB72;

LAB75:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB76;

LAB77:    xsi_set_current_line(46, ng0);

LAB80:    xsi_set_current_line(47, ng0);
    t21 = (t0 + 1928);
    t22 = (t21 + 56U);
    t28 = *((char **)t22);
    memset(t30, 0, 8);
    t29 = (t30 + 4);
    t31 = (t28 + 4);
    t33 = *((unsigned int *)t28);
    t34 = (t33 >> 0);
    *((unsigned int *)t30) = t34;
    t35 = *((unsigned int *)t31);
    t36 = (t35 >> 0);
    *((unsigned int *)t29) = t36;
    t37 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t37 & 15U);
    t38 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t38 & 15U);
    t32 = ((char*)((ng4)));
    memset(t46, 0, 8);
    xsi_vlog_unsigned_lshift(t46, 4, t30, 4, t32, 32);
    t45 = ((char*)((ng1)));
    memset(t64, 0, 8);
    xsi_vlog_unsigned_add(t64, 4, t46, 4, t45, 4);
    t47 = (t0 + 1928);
    t53 = (t0 + 1928);
    t54 = (t53 + 72U);
    t59 = *((char **)t54);
    t60 = ((char*)((ng8)));
    t61 = ((char*)((ng9)));
    xsi_vlog_convert_partindices(t79, t87, t123, ((int*)(t59)), 2, t60, 32, 1, t61, 32, 1);
    t62 = (t79 + 4);
    t39 = *((unsigned int *)t62);
    t106 = (!(t39));
    t63 = (t87 + 4);
    t40 = *((unsigned int *)t63);
    t110 = (!(t40));
    t124 = (t106 && t110);
    t65 = (t123 + 4);
    t41 = *((unsigned int *)t65);
    t125 = (!(t41));
    t126 = (t124 && t125);
    if (t126 == 1)
        goto LAB81;

LAB82:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t7 = (t4 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 4);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 4);
    *((unsigned int *)t5) = t12;
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 15U);
    t14 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t14 & 15U);
    t8 = ((char*)((ng4)));
    memset(t30, 0, 8);
    xsi_vlog_unsigned_rshift(t30, 4, t6, 4, t8, 32);
    t21 = ((char*)((ng7)));
    memset(t46, 0, 8);
    xsi_vlog_unsigned_add(t46, 4, t30, 4, t21, 4);
    t22 = (t0 + 1928);
    t28 = (t0 + 1928);
    t29 = (t28 + 72U);
    t31 = *((char **)t29);
    t32 = ((char*)((ng10)));
    t45 = ((char*)((ng11)));
    xsi_vlog_convert_partindices(t64, t79, t87, ((int*)(t31)), 2, t32, 32, 1, t45, 32, 1);
    t47 = (t64 + 4);
    t15 = *((unsigned int *)t47);
    t106 = (!(t15));
    t53 = (t79 + 4);
    t16 = *((unsigned int *)t53);
    t110 = (!(t16));
    t124 = (t106 && t110);
    t54 = (t87 + 4);
    t17 = *((unsigned int *)t54);
    t125 = (!(t17));
    t126 = (t124 && t125);
    if (t126 == 1)
        goto LAB83;

LAB84:    goto LAB79;

LAB81:    t42 = *((unsigned int *)t123);
    t127 = (t42 + 0);
    t43 = *((unsigned int *)t79);
    t44 = *((unsigned int *)t87);
    t128 = (t43 - t44);
    t129 = (t128 + 1);
    xsi_vlogvar_assign_value(t47, t64, t127, *((unsigned int *)t87), t129);
    goto LAB82;

LAB83:    t18 = *((unsigned int *)t87);
    t127 = (t18 + 0);
    t19 = *((unsigned int *)t64);
    t20 = *((unsigned int *)t79);
    t128 = (t19 - t20);
    t129 = (t128 + 1);
    xsi_vlogvar_assign_value(t22, t46, t127, *((unsigned int *)t79), t129);
    goto LAB84;

}


extern void work_m_00000000003721527413_3543686085_init()
{
	static char *pe[] = {(void *)Always_27_0};
	xsi_register_didat("work_m_00000000003721527413_3543686085", "isim/test_isim_beh.exe.sim/work/m_00000000003721527413_3543686085.didat");
	xsi_register_executes(pe);
}
