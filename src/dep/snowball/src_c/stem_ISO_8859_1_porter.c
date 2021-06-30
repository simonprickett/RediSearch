/* Generated by Snowball 2.1.0 - https://snowballstem.org/ */

#include "../runtime/header.h"

#ifdef __cplusplus
extern "C" {
#endif
extern int porter_ISO_8859_1_stem(struct SN_env * z);
#ifdef __cplusplus
}
#endif
static int r_Step_5b(struct SN_env * z);
static int r_Step_5a(struct SN_env * z);
static int r_Step_4(struct SN_env * z);
static int r_Step_3(struct SN_env * z);
static int r_Step_2(struct SN_env * z);
static int r_Step_1c(struct SN_env * z);
static int r_Step_1b(struct SN_env * z);
static int r_Step_1a(struct SN_env * z);
static int r_R2(struct SN_env * z);
static int r_R1(struct SN_env * z);
static int r_shortv(struct SN_env * z);
#ifdef __cplusplus
extern "C" {
#endif


extern struct SN_env * porter_ISO_8859_1_create_env(void);
extern void porter_ISO_8859_1_close_env(struct SN_env * z);


#ifdef __cplusplus
}
#endif
static const symbol s_0_0[1] = { 's' };
static const symbol s_0_1[3] = { 'i', 'e', 's' };
static const symbol s_0_2[4] = { 's', 's', 'e', 's' };
static const symbol s_0_3[2] = { 's', 's' };

static const struct among a_0[4] =
{
{ 1, s_0_0, -1, 3, 0},
{ 3, s_0_1, 0, 2, 0},
{ 4, s_0_2, 0, 1, 0},
{ 2, s_0_3, 0, -1, 0}
};

static const symbol s_1_1[2] = { 'b', 'b' };
static const symbol s_1_2[2] = { 'd', 'd' };
static const symbol s_1_3[2] = { 'f', 'f' };
static const symbol s_1_4[2] = { 'g', 'g' };
static const symbol s_1_5[2] = { 'b', 'l' };
static const symbol s_1_6[2] = { 'm', 'm' };
static const symbol s_1_7[2] = { 'n', 'n' };
static const symbol s_1_8[2] = { 'p', 'p' };
static const symbol s_1_9[2] = { 'r', 'r' };
static const symbol s_1_10[2] = { 'a', 't' };
static const symbol s_1_11[2] = { 't', 't' };
static const symbol s_1_12[2] = { 'i', 'z' };

static const struct among a_1[13] =
{
{ 0, 0, -1, 3, 0},
{ 2, s_1_1, 0, 2, 0},
{ 2, s_1_2, 0, 2, 0},
{ 2, s_1_3, 0, 2, 0},
{ 2, s_1_4, 0, 2, 0},
{ 2, s_1_5, 0, 1, 0},
{ 2, s_1_6, 0, 2, 0},
{ 2, s_1_7, 0, 2, 0},
{ 2, s_1_8, 0, 2, 0},
{ 2, s_1_9, 0, 2, 0},
{ 2, s_1_10, 0, 1, 0},
{ 2, s_1_11, 0, 2, 0},
{ 2, s_1_12, 0, 1, 0}
};

static const symbol s_2_0[2] = { 'e', 'd' };
static const symbol s_2_1[3] = { 'e', 'e', 'd' };
static const symbol s_2_2[3] = { 'i', 'n', 'g' };

static const struct among a_2[3] =
{
{ 2, s_2_0, -1, 2, 0},
{ 3, s_2_1, 0, 1, 0},
{ 3, s_2_2, -1, 2, 0}
};

static const symbol s_3_0[4] = { 'a', 'n', 'c', 'i' };
static const symbol s_3_1[4] = { 'e', 'n', 'c', 'i' };
static const symbol s_3_2[4] = { 'a', 'b', 'l', 'i' };
static const symbol s_3_3[3] = { 'e', 'l', 'i' };
static const symbol s_3_4[4] = { 'a', 'l', 'l', 'i' };
static const symbol s_3_5[5] = { 'o', 'u', 's', 'l', 'i' };
static const symbol s_3_6[5] = { 'e', 'n', 't', 'l', 'i' };
static const symbol s_3_7[5] = { 'a', 'l', 'i', 't', 'i' };
static const symbol s_3_8[6] = { 'b', 'i', 'l', 'i', 't', 'i' };
static const symbol s_3_9[5] = { 'i', 'v', 'i', 't', 'i' };
static const symbol s_3_10[6] = { 't', 'i', 'o', 'n', 'a', 'l' };
static const symbol s_3_11[7] = { 'a', 't', 'i', 'o', 'n', 'a', 'l' };
static const symbol s_3_12[5] = { 'a', 'l', 'i', 's', 'm' };
static const symbol s_3_13[5] = { 'a', 't', 'i', 'o', 'n' };
static const symbol s_3_14[7] = { 'i', 'z', 'a', 't', 'i', 'o', 'n' };
static const symbol s_3_15[4] = { 'i', 'z', 'e', 'r' };
static const symbol s_3_16[4] = { 'a', 't', 'o', 'r' };
static const symbol s_3_17[7] = { 'i', 'v', 'e', 'n', 'e', 's', 's' };
static const symbol s_3_18[7] = { 'f', 'u', 'l', 'n', 'e', 's', 's' };
static const symbol s_3_19[7] = { 'o', 'u', 's', 'n', 'e', 's', 's' };

static const struct among a_3[20] =
{
{ 4, s_3_0, -1, 3, 0},
{ 4, s_3_1, -1, 2, 0},
{ 4, s_3_2, -1, 4, 0},
{ 3, s_3_3, -1, 6, 0},
{ 4, s_3_4, -1, 9, 0},
{ 5, s_3_5, -1, 11, 0},
{ 5, s_3_6, -1, 5, 0},
{ 5, s_3_7, -1, 9, 0},
{ 6, s_3_8, -1, 13, 0},
{ 5, s_3_9, -1, 12, 0},
{ 6, s_3_10, -1, 1, 0},
{ 7, s_3_11, 10, 8, 0},
{ 5, s_3_12, -1, 9, 0},
{ 5, s_3_13, -1, 8, 0},
{ 7, s_3_14, 13, 7, 0},
{ 4, s_3_15, -1, 7, 0},
{ 4, s_3_16, -1, 8, 0},
{ 7, s_3_17, -1, 12, 0},
{ 7, s_3_18, -1, 10, 0},
{ 7, s_3_19, -1, 11, 0}
};

static const symbol s_4_0[5] = { 'i', 'c', 'a', 't', 'e' };
static const symbol s_4_1[5] = { 'a', 't', 'i', 'v', 'e' };
static const symbol s_4_2[5] = { 'a', 'l', 'i', 'z', 'e' };
static const symbol s_4_3[5] = { 'i', 'c', 'i', 't', 'i' };
static const symbol s_4_4[4] = { 'i', 'c', 'a', 'l' };
static const symbol s_4_5[3] = { 'f', 'u', 'l' };
static const symbol s_4_6[4] = { 'n', 'e', 's', 's' };

static const struct among a_4[7] =
{
{ 5, s_4_0, -1, 2, 0},
{ 5, s_4_1, -1, 3, 0},
{ 5, s_4_2, -1, 1, 0},
{ 5, s_4_3, -1, 2, 0},
{ 4, s_4_4, -1, 2, 0},
{ 3, s_4_5, -1, 3, 0},
{ 4, s_4_6, -1, 3, 0}
};

static const symbol s_5_0[2] = { 'i', 'c' };
static const symbol s_5_1[4] = { 'a', 'n', 'c', 'e' };
static const symbol s_5_2[4] = { 'e', 'n', 'c', 'e' };
static const symbol s_5_3[4] = { 'a', 'b', 'l', 'e' };
static const symbol s_5_4[4] = { 'i', 'b', 'l', 'e' };
static const symbol s_5_5[3] = { 'a', 't', 'e' };
static const symbol s_5_6[3] = { 'i', 'v', 'e' };
static const symbol s_5_7[3] = { 'i', 'z', 'e' };
static const symbol s_5_8[3] = { 'i', 't', 'i' };
static const symbol s_5_9[2] = { 'a', 'l' };
static const symbol s_5_10[3] = { 'i', 's', 'm' };
static const symbol s_5_11[3] = { 'i', 'o', 'n' };
static const symbol s_5_12[2] = { 'e', 'r' };
static const symbol s_5_13[3] = { 'o', 'u', 's' };
static const symbol s_5_14[3] = { 'a', 'n', 't' };
static const symbol s_5_15[3] = { 'e', 'n', 't' };
static const symbol s_5_16[4] = { 'm', 'e', 'n', 't' };
static const symbol s_5_17[5] = { 'e', 'm', 'e', 'n', 't' };
static const symbol s_5_18[2] = { 'o', 'u' };

static const struct among a_5[19] =
{
{ 2, s_5_0, -1, 1, 0},
{ 4, s_5_1, -1, 1, 0},
{ 4, s_5_2, -1, 1, 0},
{ 4, s_5_3, -1, 1, 0},
{ 4, s_5_4, -1, 1, 0},
{ 3, s_5_5, -1, 1, 0},
{ 3, s_5_6, -1, 1, 0},
{ 3, s_5_7, -1, 1, 0},
{ 3, s_5_8, -1, 1, 0},
{ 2, s_5_9, -1, 1, 0},
{ 3, s_5_10, -1, 1, 0},
{ 3, s_5_11, -1, 2, 0},
{ 2, s_5_12, -1, 1, 0},
{ 3, s_5_13, -1, 1, 0},
{ 3, s_5_14, -1, 1, 0},
{ 3, s_5_15, -1, 1, 0},
{ 4, s_5_16, 15, 1, 0},
{ 5, s_5_17, 16, 1, 0},
{ 2, s_5_18, -1, 1, 0}
};

static const unsigned char g_v[] = { 17, 65, 16, 1 };

static const unsigned char g_v_WXY[] = { 1, 17, 65, 208, 1 };

static const symbol s_0[] = { 's', 's' };
static const symbol s_1[] = { 'i' };
static const symbol s_2[] = { 'e', 'e' };
static const symbol s_3[] = { 'e' };
static const symbol s_4[] = { 'e' };
static const symbol s_5[] = { 'i' };
static const symbol s_6[] = { 't', 'i', 'o', 'n' };
static const symbol s_7[] = { 'e', 'n', 'c', 'e' };
static const symbol s_8[] = { 'a', 'n', 'c', 'e' };
static const symbol s_9[] = { 'a', 'b', 'l', 'e' };
static const symbol s_10[] = { 'e', 'n', 't' };
static const symbol s_11[] = { 'e' };
static const symbol s_12[] = { 'i', 'z', 'e' };
static const symbol s_13[] = { 'a', 't', 'e' };
static const symbol s_14[] = { 'a', 'l' };
static const symbol s_15[] = { 'f', 'u', 'l' };
static const symbol s_16[] = { 'o', 'u', 's' };
static const symbol s_17[] = { 'i', 'v', 'e' };
static const symbol s_18[] = { 'b', 'l', 'e' };
static const symbol s_19[] = { 'a', 'l' };
static const symbol s_20[] = { 'i', 'c' };
static const symbol s_21[] = { 'Y' };
static const symbol s_22[] = { 'Y' };
static const symbol s_23[] = { 'y' };

static int r_shortv(struct SN_env * z) {
    if (out_grouping_b(z, g_v_WXY, 89, 121, 0)) return 0;
    if (in_grouping_b(z, g_v, 97, 121, 0)) return 0;
    if (out_grouping_b(z, g_v, 97, 121, 0)) return 0;
    return 1;
}

static int r_R1(struct SN_env * z) {
    if (!(z->I[1] <= z->c)) return 0;
    return 1;
}

static int r_R2(struct SN_env * z) {
    if (!(z->I[0] <= z->c)) return 0;
    return 1;
}

static int r_Step_1a(struct SN_env * z) {
    int among_var;
    z->ket = z->c;
    if (z->c <= z->lb || z->p[z->c - 1] != 115) return 0;
    among_var = find_among_b(z, a_0, 4);
    if (!(among_var)) return 0;
    z->bra = z->c;
    switch (among_var) {
        case 1:
            {   int ret = slice_from_s(z, 2, s_0);
                if (ret < 0) return ret;
            }
            break;
        case 2:
            {   int ret = slice_from_s(z, 1, s_1);
                if (ret < 0) return ret;
            }
            break;
        case 3:
            {   int ret = slice_del(z);
                if (ret < 0) return ret;
            }
            break;
    }
    return 1;
}

static int r_Step_1b(struct SN_env * z) {
    int among_var;
    z->ket = z->c;
    if (z->c - 1 <= z->lb || (z->p[z->c - 1] != 100 && z->p[z->c - 1] != 103)) return 0;
    among_var = find_among_b(z, a_2, 3);
    if (!(among_var)) return 0;
    z->bra = z->c;
    switch (among_var) {
        case 1:
            {   int ret = r_R1(z);
                if (ret <= 0) return ret;
            }
            {   int ret = slice_from_s(z, 2, s_2);
                if (ret < 0) return ret;
            }
            break;
        case 2:
            {   int m_test1 = z->l - z->c;
                {   
                    int ret = out_grouping_b(z, g_v, 97, 121, 1);
                    if (ret < 0) return 0;
                    z->c -= ret;
                }
                z->c = z->l - m_test1;
            }
            {   int ret = slice_del(z);
                if (ret < 0) return ret;
            }
            {   int m_test2 = z->l - z->c;
                if (z->c - 1 <= z->lb || z->p[z->c - 1] >> 5 != 3 || !((68514004 >> (z->p[z->c - 1] & 0x1f)) & 1)) among_var = 3; else
                among_var = find_among_b(z, a_1, 13);
                if (!(among_var)) return 0;
                z->c = z->l - m_test2;
            }
            switch (among_var) {
                case 1:
                    {   int ret;
                        {   int saved_c = z->c;
                            ret = insert_s(z, z->c, z->c, 1, s_3);
                            z->c = saved_c;
                        }
                        if (ret < 0) return ret;
                    }
                    break;
                case 2:
                    z->ket = z->c;
                    if (z->c <= z->lb) return 0;
                    z->c--;
                    z->bra = z->c;
                    {   int ret = slice_del(z);
                        if (ret < 0) return ret;
                    }
                    break;
                case 3:
                    if (z->c != z->I[1]) return 0;
                    {   int m_test3 = z->l - z->c;
                        {   int ret = r_shortv(z);
                            if (ret <= 0) return ret;
                        }
                        z->c = z->l - m_test3;
                    }
                    {   int ret;
                        {   int saved_c = z->c;
                            ret = insert_s(z, z->c, z->c, 1, s_4);
                            z->c = saved_c;
                        }
                        if (ret < 0) return ret;
                    }
                    break;
            }
            break;
    }
    return 1;
}

static int r_Step_1c(struct SN_env * z) {
    z->ket = z->c;
    {   int m1 = z->l - z->c; (void)m1;
        if (z->c <= z->lb || z->p[z->c - 1] != 'y') goto lab1;
        z->c--;
        goto lab0;
    lab1:
        z->c = z->l - m1;
        if (z->c <= z->lb || z->p[z->c - 1] != 'Y') return 0;
        z->c--;
    }
lab0:
    z->bra = z->c;
    {   
        int ret = out_grouping_b(z, g_v, 97, 121, 1);
        if (ret < 0) return 0;
        z->c -= ret;
    }
    {   int ret = slice_from_s(z, 1, s_5);
        if (ret < 0) return ret;
    }
    return 1;
}

static int r_Step_2(struct SN_env * z) {
    int among_var;
    z->ket = z->c;
    if (z->c - 2 <= z->lb || z->p[z->c - 1] >> 5 != 3 || !((815616 >> (z->p[z->c - 1] & 0x1f)) & 1)) return 0;
    among_var = find_among_b(z, a_3, 20);
    if (!(among_var)) return 0;
    z->bra = z->c;
    {   int ret = r_R1(z);
        if (ret <= 0) return ret;
    }
    switch (among_var) {
        case 1:
            {   int ret = slice_from_s(z, 4, s_6);
                if (ret < 0) return ret;
            }
            break;
        case 2:
            {   int ret = slice_from_s(z, 4, s_7);
                if (ret < 0) return ret;
            }
            break;
        case 3:
            {   int ret = slice_from_s(z, 4, s_8);
                if (ret < 0) return ret;
            }
            break;
        case 4:
            {   int ret = slice_from_s(z, 4, s_9);
                if (ret < 0) return ret;
            }
            break;
        case 5:
            {   int ret = slice_from_s(z, 3, s_10);
                if (ret < 0) return ret;
            }
            break;
        case 6:
            {   int ret = slice_from_s(z, 1, s_11);
                if (ret < 0) return ret;
            }
            break;
        case 7:
            {   int ret = slice_from_s(z, 3, s_12);
                if (ret < 0) return ret;
            }
            break;
        case 8:
            {   int ret = slice_from_s(z, 3, s_13);
                if (ret < 0) return ret;
            }
            break;
        case 9:
            {   int ret = slice_from_s(z, 2, s_14);
                if (ret < 0) return ret;
            }
            break;
        case 10:
            {   int ret = slice_from_s(z, 3, s_15);
                if (ret < 0) return ret;
            }
            break;
        case 11:
            {   int ret = slice_from_s(z, 3, s_16);
                if (ret < 0) return ret;
            }
            break;
        case 12:
            {   int ret = slice_from_s(z, 3, s_17);
                if (ret < 0) return ret;
            }
            break;
        case 13:
            {   int ret = slice_from_s(z, 3, s_18);
                if (ret < 0) return ret;
            }
            break;
    }
    return 1;
}

static int r_Step_3(struct SN_env * z) {
    int among_var;
    z->ket = z->c;
    if (z->c - 2 <= z->lb || z->p[z->c - 1] >> 5 != 3 || !((528928 >> (z->p[z->c - 1] & 0x1f)) & 1)) return 0;
    among_var = find_among_b(z, a_4, 7);
    if (!(among_var)) return 0;
    z->bra = z->c;
    {   int ret = r_R1(z);
        if (ret <= 0) return ret;
    }
    switch (among_var) {
        case 1:
            {   int ret = slice_from_s(z, 2, s_19);
                if (ret < 0) return ret;
            }
            break;
        case 2:
            {   int ret = slice_from_s(z, 2, s_20);
                if (ret < 0) return ret;
            }
            break;
        case 3:
            {   int ret = slice_del(z);
                if (ret < 0) return ret;
            }
            break;
    }
    return 1;
}

static int r_Step_4(struct SN_env * z) {
    int among_var;
    z->ket = z->c;
    if (z->c - 1 <= z->lb || z->p[z->c - 1] >> 5 != 3 || !((3961384 >> (z->p[z->c - 1] & 0x1f)) & 1)) return 0;
    among_var = find_among_b(z, a_5, 19);
    if (!(among_var)) return 0;
    z->bra = z->c;
    {   int ret = r_R2(z);
        if (ret <= 0) return ret;
    }
    switch (among_var) {
        case 1:
            {   int ret = slice_del(z);
                if (ret < 0) return ret;
            }
            break;
        case 2:
            {   int m1 = z->l - z->c; (void)m1;
                if (z->c <= z->lb || z->p[z->c - 1] != 's') goto lab1;
                z->c--;
                goto lab0;
            lab1:
                z->c = z->l - m1;
                if (z->c <= z->lb || z->p[z->c - 1] != 't') return 0;
                z->c--;
            }
        lab0:
            {   int ret = slice_del(z);
                if (ret < 0) return ret;
            }
            break;
    }
    return 1;
}

static int r_Step_5a(struct SN_env * z) {
    z->ket = z->c;
    if (z->c <= z->lb || z->p[z->c - 1] != 'e') return 0;
    z->c--;
    z->bra = z->c;
    {   int m1 = z->l - z->c; (void)m1;
        {   int ret = r_R2(z);
            if (ret == 0) goto lab1;
            if (ret < 0) return ret;
        }
        goto lab0;
    lab1:
        z->c = z->l - m1;
        {   int ret = r_R1(z);
            if (ret <= 0) return ret;
        }
        {   int m2 = z->l - z->c; (void)m2;
            {   int ret = r_shortv(z);
                if (ret == 0) goto lab2;
                if (ret < 0) return ret;
            }
            return 0;
        lab2:
            z->c = z->l - m2;
        }
    }
lab0:
    {   int ret = slice_del(z);
        if (ret < 0) return ret;
    }
    return 1;
}

static int r_Step_5b(struct SN_env * z) {
    z->ket = z->c;
    if (z->c <= z->lb || z->p[z->c - 1] != 'l') return 0;
    z->c--;
    z->bra = z->c;
    {   int ret = r_R2(z);
        if (ret <= 0) return ret;
    }
    if (z->c <= z->lb || z->p[z->c - 1] != 'l') return 0;
    z->c--;
    {   int ret = slice_del(z);
        if (ret < 0) return ret;
    }
    return 1;
}

extern int porter_ISO_8859_1_stem(struct SN_env * z) {
    z->I[2] = 0;
    {   int c1 = z->c;
        z->bra = z->c;
        if (z->c == z->l || z->p[z->c] != 'y') goto lab0;
        z->c++;
        z->ket = z->c;
        {   int ret = slice_from_s(z, 1, s_21);
            if (ret < 0) return ret;
        }
        z->I[2] = 1;
    lab0:
        z->c = c1;
    }
    {   int c2 = z->c;
        while(1) {
            int c3 = z->c;
            while(1) {
                int c4 = z->c;
                if (in_grouping(z, g_v, 97, 121, 0)) goto lab3;
                z->bra = z->c;
                if (z->c == z->l || z->p[z->c] != 'y') goto lab3;
                z->c++;
                z->ket = z->c;
                z->c = c4;
                break;
            lab3:
                z->c = c4;
                if (z->c >= z->l) goto lab2;
                z->c++;
            }
            {   int ret = slice_from_s(z, 1, s_22);
                if (ret < 0) return ret;
            }
            z->I[2] = 1;
            continue;
        lab2:
            z->c = c3;
            break;
        }
        z->c = c2;
    }
    z->I[1] = z->l;
    z->I[0] = z->l;
    {   int c5 = z->c;
        {   
            int ret = out_grouping(z, g_v, 97, 121, 1);
            if (ret < 0) goto lab4;
            z->c += ret;
        }
        {   
            int ret = in_grouping(z, g_v, 97, 121, 1);
            if (ret < 0) goto lab4;
            z->c += ret;
        }
        z->I[1] = z->c;
        {   
            int ret = out_grouping(z, g_v, 97, 121, 1);
            if (ret < 0) goto lab4;
            z->c += ret;
        }
        {   
            int ret = in_grouping(z, g_v, 97, 121, 1);
            if (ret < 0) goto lab4;
            z->c += ret;
        }
        z->I[0] = z->c;
    lab4:
        z->c = c5;
    }
    z->lb = z->c; z->c = z->l;

    {   int m6 = z->l - z->c; (void)m6;
        {   int ret = r_Step_1a(z);
            if (ret < 0) return ret;
        }
        z->c = z->l - m6;
    }
    {   int m7 = z->l - z->c; (void)m7;
        {   int ret = r_Step_1b(z);
            if (ret < 0) return ret;
        }
        z->c = z->l - m7;
    }
    {   int m8 = z->l - z->c; (void)m8;
        {   int ret = r_Step_1c(z);
            if (ret < 0) return ret;
        }
        z->c = z->l - m8;
    }
    {   int m9 = z->l - z->c; (void)m9;
        {   int ret = r_Step_2(z);
            if (ret < 0) return ret;
        }
        z->c = z->l - m9;
    }
    {   int m10 = z->l - z->c; (void)m10;
        {   int ret = r_Step_3(z);
            if (ret < 0) return ret;
        }
        z->c = z->l - m10;
    }
    {   int m11 = z->l - z->c; (void)m11;
        {   int ret = r_Step_4(z);
            if (ret < 0) return ret;
        }
        z->c = z->l - m11;
    }
    {   int m12 = z->l - z->c; (void)m12;
        {   int ret = r_Step_5a(z);
            if (ret < 0) return ret;
        }
        z->c = z->l - m12;
    }
    {   int m13 = z->l - z->c; (void)m13;
        {   int ret = r_Step_5b(z);
            if (ret < 0) return ret;
        }
        z->c = z->l - m13;
    }
    z->c = z->lb;
    {   int c14 = z->c;
        if (!(z->I[2])) goto lab5;
        while(1) {
            int c15 = z->c;
            while(1) {
                int c16 = z->c;
                z->bra = z->c;
                if (z->c == z->l || z->p[z->c] != 'Y') goto lab7;
                z->c++;
                z->ket = z->c;
                z->c = c16;
                break;
            lab7:
                z->c = c16;
                if (z->c >= z->l) goto lab6;
                z->c++;
            }
            {   int ret = slice_from_s(z, 1, s_23);
                if (ret < 0) return ret;
            }
            continue;
        lab6:
            z->c = c15;
            break;
        }
    lab5:
        z->c = c14;
    }
    return 1;
}

extern struct SN_env * porter_ISO_8859_1_create_env(void) { return SN_create_env(0, 3); }

extern void porter_ISO_8859_1_close_env(struct SN_env * z) { SN_close_env(z, 0); }

