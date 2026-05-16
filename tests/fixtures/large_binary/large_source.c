#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int field_1;
    long field_1_b;
    double field_1_c;
    char name_1[64];
} StructType1;

int function_1(StructType1 *s, int param_a, double param_b, const char *param_c) {
    int local_1 = param_a * 1;
    double local_1_d = param_b * 1;
    char buf_1[128];
    snprintf(buf_1, sizeof(buf_1), "function_%d: %d, %f, %s", 1, local_1, local_1_d, param_c ? param_c : "null");
    return local_1 + (int)local_1_d;
}

typedef struct {
    int field_2;
    long field_2_b;
    double field_2_c;
    char name_2[64];
} StructType2;

int function_2(StructType2 *s, int param_a, double param_b, const char *param_c) {
    int local_2 = param_a * 2;
    double local_2_d = param_b * 2;
    char buf_2[128];
    snprintf(buf_2, sizeof(buf_2), "function_%d: %d, %f, %s", 2, local_2, local_2_d, param_c ? param_c : "null");
    return local_2 + (int)local_2_d;
}

typedef struct {
    int field_3;
    long field_3_b;
    double field_3_c;
    char name_3[64];
} StructType3;

int function_3(StructType3 *s, int param_a, double param_b, const char *param_c) {
    int local_3 = param_a * 3;
    double local_3_d = param_b * 3;
    char buf_3[128];
    snprintf(buf_3, sizeof(buf_3), "function_%d: %d, %f, %s", 3, local_3, local_3_d, param_c ? param_c : "null");
    return local_3 + (int)local_3_d;
}

typedef struct {
    int field_4;
    long field_4_b;
    double field_4_c;
    char name_4[64];
} StructType4;

int function_4(StructType4 *s, int param_a, double param_b, const char *param_c) {
    int local_4 = param_a * 4;
    double local_4_d = param_b * 4;
    char buf_4[128];
    snprintf(buf_4, sizeof(buf_4), "function_%d: %d, %f, %s", 4, local_4, local_4_d, param_c ? param_c : "null");
    return local_4 + (int)local_4_d;
}

typedef struct {
    int field_5;
    long field_5_b;
    double field_5_c;
    char name_5[64];
} StructType5;

int function_5(StructType5 *s, int param_a, double param_b, const char *param_c) {
    int local_5 = param_a * 5;
    double local_5_d = param_b * 5;
    char buf_5[128];
    snprintf(buf_5, sizeof(buf_5), "function_%d: %d, %f, %s", 5, local_5, local_5_d, param_c ? param_c : "null");
    return local_5 + (int)local_5_d;
}

typedef struct {
    int field_6;
    long field_6_b;
    double field_6_c;
    char name_6[64];
} StructType6;

int function_6(StructType6 *s, int param_a, double param_b, const char *param_c) {
    int local_6 = param_a * 6;
    double local_6_d = param_b * 6;
    char buf_6[128];
    snprintf(buf_6, sizeof(buf_6), "function_%d: %d, %f, %s", 6, local_6, local_6_d, param_c ? param_c : "null");
    return local_6 + (int)local_6_d;
}

typedef struct {
    int field_7;
    long field_7_b;
    double field_7_c;
    char name_7[64];
} StructType7;

int function_7(StructType7 *s, int param_a, double param_b, const char *param_c) {
    int local_7 = param_a * 7;
    double local_7_d = param_b * 7;
    char buf_7[128];
    snprintf(buf_7, sizeof(buf_7), "function_%d: %d, %f, %s", 7, local_7, local_7_d, param_c ? param_c : "null");
    return local_7 + (int)local_7_d;
}

typedef struct {
    int field_8;
    long field_8_b;
    double field_8_c;
    char name_8[64];
} StructType8;

int function_8(StructType8 *s, int param_a, double param_b, const char *param_c) {
    int local_8 = param_a * 8;
    double local_8_d = param_b * 8;
    char buf_8[128];
    snprintf(buf_8, sizeof(buf_8), "function_%d: %d, %f, %s", 8, local_8, local_8_d, param_c ? param_c : "null");
    return local_8 + (int)local_8_d;
}

typedef struct {
    int field_9;
    long field_9_b;
    double field_9_c;
    char name_9[64];
} StructType9;

int function_9(StructType9 *s, int param_a, double param_b, const char *param_c) {
    int local_9 = param_a * 9;
    double local_9_d = param_b * 9;
    char buf_9[128];
    snprintf(buf_9, sizeof(buf_9), "function_%d: %d, %f, %s", 9, local_9, local_9_d, param_c ? param_c : "null");
    return local_9 + (int)local_9_d;
}

typedef struct {
    int field_10;
    long field_10_b;
    double field_10_c;
    char name_10[64];
} StructType10;

int function_10(StructType10 *s, int param_a, double param_b, const char *param_c) {
    int local_10 = param_a * 10;
    double local_10_d = param_b * 10;
    char buf_10[128];
    snprintf(buf_10, sizeof(buf_10), "function_%d: %d, %f, %s", 10, local_10, local_10_d, param_c ? param_c : "null");
    return local_10 + (int)local_10_d;
}

typedef struct {
    int field_11;
    long field_11_b;
    double field_11_c;
    char name_11[64];
} StructType11;

int function_11(StructType11 *s, int param_a, double param_b, const char *param_c) {
    int local_11 = param_a * 11;
    double local_11_d = param_b * 11;
    char buf_11[128];
    snprintf(buf_11, sizeof(buf_11), "function_%d: %d, %f, %s", 11, local_11, local_11_d, param_c ? param_c : "null");
    return local_11 + (int)local_11_d;
}

typedef struct {
    int field_12;
    long field_12_b;
    double field_12_c;
    char name_12[64];
} StructType12;

int function_12(StructType12 *s, int param_a, double param_b, const char *param_c) {
    int local_12 = param_a * 12;
    double local_12_d = param_b * 12;
    char buf_12[128];
    snprintf(buf_12, sizeof(buf_12), "function_%d: %d, %f, %s", 12, local_12, local_12_d, param_c ? param_c : "null");
    return local_12 + (int)local_12_d;
}

typedef struct {
    int field_13;
    long field_13_b;
    double field_13_c;
    char name_13[64];
} StructType13;

int function_13(StructType13 *s, int param_a, double param_b, const char *param_c) {
    int local_13 = param_a * 13;
    double local_13_d = param_b * 13;
    char buf_13[128];
    snprintf(buf_13, sizeof(buf_13), "function_%d: %d, %f, %s", 13, local_13, local_13_d, param_c ? param_c : "null");
    return local_13 + (int)local_13_d;
}

typedef struct {
    int field_14;
    long field_14_b;
    double field_14_c;
    char name_14[64];
} StructType14;

int function_14(StructType14 *s, int param_a, double param_b, const char *param_c) {
    int local_14 = param_a * 14;
    double local_14_d = param_b * 14;
    char buf_14[128];
    snprintf(buf_14, sizeof(buf_14), "function_%d: %d, %f, %s", 14, local_14, local_14_d, param_c ? param_c : "null");
    return local_14 + (int)local_14_d;
}

typedef struct {
    int field_15;
    long field_15_b;
    double field_15_c;
    char name_15[64];
} StructType15;

int function_15(StructType15 *s, int param_a, double param_b, const char *param_c) {
    int local_15 = param_a * 15;
    double local_15_d = param_b * 15;
    char buf_15[128];
    snprintf(buf_15, sizeof(buf_15), "function_%d: %d, %f, %s", 15, local_15, local_15_d, param_c ? param_c : "null");
    return local_15 + (int)local_15_d;
}

typedef struct {
    int field_16;
    long field_16_b;
    double field_16_c;
    char name_16[64];
} StructType16;

int function_16(StructType16 *s, int param_a, double param_b, const char *param_c) {
    int local_16 = param_a * 16;
    double local_16_d = param_b * 16;
    char buf_16[128];
    snprintf(buf_16, sizeof(buf_16), "function_%d: %d, %f, %s", 16, local_16, local_16_d, param_c ? param_c : "null");
    return local_16 + (int)local_16_d;
}

typedef struct {
    int field_17;
    long field_17_b;
    double field_17_c;
    char name_17[64];
} StructType17;

int function_17(StructType17 *s, int param_a, double param_b, const char *param_c) {
    int local_17 = param_a * 17;
    double local_17_d = param_b * 17;
    char buf_17[128];
    snprintf(buf_17, sizeof(buf_17), "function_%d: %d, %f, %s", 17, local_17, local_17_d, param_c ? param_c : "null");
    return local_17 + (int)local_17_d;
}

typedef struct {
    int field_18;
    long field_18_b;
    double field_18_c;
    char name_18[64];
} StructType18;

int function_18(StructType18 *s, int param_a, double param_b, const char *param_c) {
    int local_18 = param_a * 18;
    double local_18_d = param_b * 18;
    char buf_18[128];
    snprintf(buf_18, sizeof(buf_18), "function_%d: %d, %f, %s", 18, local_18, local_18_d, param_c ? param_c : "null");
    return local_18 + (int)local_18_d;
}

typedef struct {
    int field_19;
    long field_19_b;
    double field_19_c;
    char name_19[64];
} StructType19;

int function_19(StructType19 *s, int param_a, double param_b, const char *param_c) {
    int local_19 = param_a * 19;
    double local_19_d = param_b * 19;
    char buf_19[128];
    snprintf(buf_19, sizeof(buf_19), "function_%d: %d, %f, %s", 19, local_19, local_19_d, param_c ? param_c : "null");
    return local_19 + (int)local_19_d;
}

typedef struct {
    int field_20;
    long field_20_b;
    double field_20_c;
    char name_20[64];
} StructType20;

int function_20(StructType20 *s, int param_a, double param_b, const char *param_c) {
    int local_20 = param_a * 20;
    double local_20_d = param_b * 20;
    char buf_20[128];
    snprintf(buf_20, sizeof(buf_20), "function_%d: %d, %f, %s", 20, local_20, local_20_d, param_c ? param_c : "null");
    return local_20 + (int)local_20_d;
}

typedef struct {
    int field_21;
    long field_21_b;
    double field_21_c;
    char name_21[64];
} StructType21;

int function_21(StructType21 *s, int param_a, double param_b, const char *param_c) {
    int local_21 = param_a * 21;
    double local_21_d = param_b * 21;
    char buf_21[128];
    snprintf(buf_21, sizeof(buf_21), "function_%d: %d, %f, %s", 21, local_21, local_21_d, param_c ? param_c : "null");
    return local_21 + (int)local_21_d;
}

typedef struct {
    int field_22;
    long field_22_b;
    double field_22_c;
    char name_22[64];
} StructType22;

int function_22(StructType22 *s, int param_a, double param_b, const char *param_c) {
    int local_22 = param_a * 22;
    double local_22_d = param_b * 22;
    char buf_22[128];
    snprintf(buf_22, sizeof(buf_22), "function_%d: %d, %f, %s", 22, local_22, local_22_d, param_c ? param_c : "null");
    return local_22 + (int)local_22_d;
}

typedef struct {
    int field_23;
    long field_23_b;
    double field_23_c;
    char name_23[64];
} StructType23;

int function_23(StructType23 *s, int param_a, double param_b, const char *param_c) {
    int local_23 = param_a * 23;
    double local_23_d = param_b * 23;
    char buf_23[128];
    snprintf(buf_23, sizeof(buf_23), "function_%d: %d, %f, %s", 23, local_23, local_23_d, param_c ? param_c : "null");
    return local_23 + (int)local_23_d;
}

typedef struct {
    int field_24;
    long field_24_b;
    double field_24_c;
    char name_24[64];
} StructType24;

int function_24(StructType24 *s, int param_a, double param_b, const char *param_c) {
    int local_24 = param_a * 24;
    double local_24_d = param_b * 24;
    char buf_24[128];
    snprintf(buf_24, sizeof(buf_24), "function_%d: %d, %f, %s", 24, local_24, local_24_d, param_c ? param_c : "null");
    return local_24 + (int)local_24_d;
}

typedef struct {
    int field_25;
    long field_25_b;
    double field_25_c;
    char name_25[64];
} StructType25;

int function_25(StructType25 *s, int param_a, double param_b, const char *param_c) {
    int local_25 = param_a * 25;
    double local_25_d = param_b * 25;
    char buf_25[128];
    snprintf(buf_25, sizeof(buf_25), "function_%d: %d, %f, %s", 25, local_25, local_25_d, param_c ? param_c : "null");
    return local_25 + (int)local_25_d;
}

typedef struct {
    int field_26;
    long field_26_b;
    double field_26_c;
    char name_26[64];
} StructType26;

int function_26(StructType26 *s, int param_a, double param_b, const char *param_c) {
    int local_26 = param_a * 26;
    double local_26_d = param_b * 26;
    char buf_26[128];
    snprintf(buf_26, sizeof(buf_26), "function_%d: %d, %f, %s", 26, local_26, local_26_d, param_c ? param_c : "null");
    return local_26 + (int)local_26_d;
}

typedef struct {
    int field_27;
    long field_27_b;
    double field_27_c;
    char name_27[64];
} StructType27;

int function_27(StructType27 *s, int param_a, double param_b, const char *param_c) {
    int local_27 = param_a * 27;
    double local_27_d = param_b * 27;
    char buf_27[128];
    snprintf(buf_27, sizeof(buf_27), "function_%d: %d, %f, %s", 27, local_27, local_27_d, param_c ? param_c : "null");
    return local_27 + (int)local_27_d;
}

typedef struct {
    int field_28;
    long field_28_b;
    double field_28_c;
    char name_28[64];
} StructType28;

int function_28(StructType28 *s, int param_a, double param_b, const char *param_c) {
    int local_28 = param_a * 28;
    double local_28_d = param_b * 28;
    char buf_28[128];
    snprintf(buf_28, sizeof(buf_28), "function_%d: %d, %f, %s", 28, local_28, local_28_d, param_c ? param_c : "null");
    return local_28 + (int)local_28_d;
}

typedef struct {
    int field_29;
    long field_29_b;
    double field_29_c;
    char name_29[64];
} StructType29;

int function_29(StructType29 *s, int param_a, double param_b, const char *param_c) {
    int local_29 = param_a * 29;
    double local_29_d = param_b * 29;
    char buf_29[128];
    snprintf(buf_29, sizeof(buf_29), "function_%d: %d, %f, %s", 29, local_29, local_29_d, param_c ? param_c : "null");
    return local_29 + (int)local_29_d;
}

typedef struct {
    int field_30;
    long field_30_b;
    double field_30_c;
    char name_30[64];
} StructType30;

int function_30(StructType30 *s, int param_a, double param_b, const char *param_c) {
    int local_30 = param_a * 30;
    double local_30_d = param_b * 30;
    char buf_30[128];
    snprintf(buf_30, sizeof(buf_30), "function_%d: %d, %f, %s", 30, local_30, local_30_d, param_c ? param_c : "null");
    return local_30 + (int)local_30_d;
}

typedef struct {
    int field_31;
    long field_31_b;
    double field_31_c;
    char name_31[64];
} StructType31;

int function_31(StructType31 *s, int param_a, double param_b, const char *param_c) {
    int local_31 = param_a * 31;
    double local_31_d = param_b * 31;
    char buf_31[128];
    snprintf(buf_31, sizeof(buf_31), "function_%d: %d, %f, %s", 31, local_31, local_31_d, param_c ? param_c : "null");
    return local_31 + (int)local_31_d;
}

typedef struct {
    int field_32;
    long field_32_b;
    double field_32_c;
    char name_32[64];
} StructType32;

int function_32(StructType32 *s, int param_a, double param_b, const char *param_c) {
    int local_32 = param_a * 32;
    double local_32_d = param_b * 32;
    char buf_32[128];
    snprintf(buf_32, sizeof(buf_32), "function_%d: %d, %f, %s", 32, local_32, local_32_d, param_c ? param_c : "null");
    return local_32 + (int)local_32_d;
}

typedef struct {
    int field_33;
    long field_33_b;
    double field_33_c;
    char name_33[64];
} StructType33;

int function_33(StructType33 *s, int param_a, double param_b, const char *param_c) {
    int local_33 = param_a * 33;
    double local_33_d = param_b * 33;
    char buf_33[128];
    snprintf(buf_33, sizeof(buf_33), "function_%d: %d, %f, %s", 33, local_33, local_33_d, param_c ? param_c : "null");
    return local_33 + (int)local_33_d;
}

typedef struct {
    int field_34;
    long field_34_b;
    double field_34_c;
    char name_34[64];
} StructType34;

int function_34(StructType34 *s, int param_a, double param_b, const char *param_c) {
    int local_34 = param_a * 34;
    double local_34_d = param_b * 34;
    char buf_34[128];
    snprintf(buf_34, sizeof(buf_34), "function_%d: %d, %f, %s", 34, local_34, local_34_d, param_c ? param_c : "null");
    return local_34 + (int)local_34_d;
}

typedef struct {
    int field_35;
    long field_35_b;
    double field_35_c;
    char name_35[64];
} StructType35;

int function_35(StructType35 *s, int param_a, double param_b, const char *param_c) {
    int local_35 = param_a * 35;
    double local_35_d = param_b * 35;
    char buf_35[128];
    snprintf(buf_35, sizeof(buf_35), "function_%d: %d, %f, %s", 35, local_35, local_35_d, param_c ? param_c : "null");
    return local_35 + (int)local_35_d;
}

typedef struct {
    int field_36;
    long field_36_b;
    double field_36_c;
    char name_36[64];
} StructType36;

int function_36(StructType36 *s, int param_a, double param_b, const char *param_c) {
    int local_36 = param_a * 36;
    double local_36_d = param_b * 36;
    char buf_36[128];
    snprintf(buf_36, sizeof(buf_36), "function_%d: %d, %f, %s", 36, local_36, local_36_d, param_c ? param_c : "null");
    return local_36 + (int)local_36_d;
}

typedef struct {
    int field_37;
    long field_37_b;
    double field_37_c;
    char name_37[64];
} StructType37;

int function_37(StructType37 *s, int param_a, double param_b, const char *param_c) {
    int local_37 = param_a * 37;
    double local_37_d = param_b * 37;
    char buf_37[128];
    snprintf(buf_37, sizeof(buf_37), "function_%d: %d, %f, %s", 37, local_37, local_37_d, param_c ? param_c : "null");
    return local_37 + (int)local_37_d;
}

typedef struct {
    int field_38;
    long field_38_b;
    double field_38_c;
    char name_38[64];
} StructType38;

int function_38(StructType38 *s, int param_a, double param_b, const char *param_c) {
    int local_38 = param_a * 38;
    double local_38_d = param_b * 38;
    char buf_38[128];
    snprintf(buf_38, sizeof(buf_38), "function_%d: %d, %f, %s", 38, local_38, local_38_d, param_c ? param_c : "null");
    return local_38 + (int)local_38_d;
}

typedef struct {
    int field_39;
    long field_39_b;
    double field_39_c;
    char name_39[64];
} StructType39;

int function_39(StructType39 *s, int param_a, double param_b, const char *param_c) {
    int local_39 = param_a * 39;
    double local_39_d = param_b * 39;
    char buf_39[128];
    snprintf(buf_39, sizeof(buf_39), "function_%d: %d, %f, %s", 39, local_39, local_39_d, param_c ? param_c : "null");
    return local_39 + (int)local_39_d;
}

typedef struct {
    int field_40;
    long field_40_b;
    double field_40_c;
    char name_40[64];
} StructType40;

int function_40(StructType40 *s, int param_a, double param_b, const char *param_c) {
    int local_40 = param_a * 40;
    double local_40_d = param_b * 40;
    char buf_40[128];
    snprintf(buf_40, sizeof(buf_40), "function_%d: %d, %f, %s", 40, local_40, local_40_d, param_c ? param_c : "null");
    return local_40 + (int)local_40_d;
}

typedef struct {
    int field_41;
    long field_41_b;
    double field_41_c;
    char name_41[64];
} StructType41;

int function_41(StructType41 *s, int param_a, double param_b, const char *param_c) {
    int local_41 = param_a * 41;
    double local_41_d = param_b * 41;
    char buf_41[128];
    snprintf(buf_41, sizeof(buf_41), "function_%d: %d, %f, %s", 41, local_41, local_41_d, param_c ? param_c : "null");
    return local_41 + (int)local_41_d;
}

typedef struct {
    int field_42;
    long field_42_b;
    double field_42_c;
    char name_42[64];
} StructType42;

int function_42(StructType42 *s, int param_a, double param_b, const char *param_c) {
    int local_42 = param_a * 42;
    double local_42_d = param_b * 42;
    char buf_42[128];
    snprintf(buf_42, sizeof(buf_42), "function_%d: %d, %f, %s", 42, local_42, local_42_d, param_c ? param_c : "null");
    return local_42 + (int)local_42_d;
}

typedef struct {
    int field_43;
    long field_43_b;
    double field_43_c;
    char name_43[64];
} StructType43;

int function_43(StructType43 *s, int param_a, double param_b, const char *param_c) {
    int local_43 = param_a * 43;
    double local_43_d = param_b * 43;
    char buf_43[128];
    snprintf(buf_43, sizeof(buf_43), "function_%d: %d, %f, %s", 43, local_43, local_43_d, param_c ? param_c : "null");
    return local_43 + (int)local_43_d;
}

typedef struct {
    int field_44;
    long field_44_b;
    double field_44_c;
    char name_44[64];
} StructType44;

int function_44(StructType44 *s, int param_a, double param_b, const char *param_c) {
    int local_44 = param_a * 44;
    double local_44_d = param_b * 44;
    char buf_44[128];
    snprintf(buf_44, sizeof(buf_44), "function_%d: %d, %f, %s", 44, local_44, local_44_d, param_c ? param_c : "null");
    return local_44 + (int)local_44_d;
}

typedef struct {
    int field_45;
    long field_45_b;
    double field_45_c;
    char name_45[64];
} StructType45;

int function_45(StructType45 *s, int param_a, double param_b, const char *param_c) {
    int local_45 = param_a * 45;
    double local_45_d = param_b * 45;
    char buf_45[128];
    snprintf(buf_45, sizeof(buf_45), "function_%d: %d, %f, %s", 45, local_45, local_45_d, param_c ? param_c : "null");
    return local_45 + (int)local_45_d;
}

typedef struct {
    int field_46;
    long field_46_b;
    double field_46_c;
    char name_46[64];
} StructType46;

int function_46(StructType46 *s, int param_a, double param_b, const char *param_c) {
    int local_46 = param_a * 46;
    double local_46_d = param_b * 46;
    char buf_46[128];
    snprintf(buf_46, sizeof(buf_46), "function_%d: %d, %f, %s", 46, local_46, local_46_d, param_c ? param_c : "null");
    return local_46 + (int)local_46_d;
}

typedef struct {
    int field_47;
    long field_47_b;
    double field_47_c;
    char name_47[64];
} StructType47;

int function_47(StructType47 *s, int param_a, double param_b, const char *param_c) {
    int local_47 = param_a * 47;
    double local_47_d = param_b * 47;
    char buf_47[128];
    snprintf(buf_47, sizeof(buf_47), "function_%d: %d, %f, %s", 47, local_47, local_47_d, param_c ? param_c : "null");
    return local_47 + (int)local_47_d;
}

typedef struct {
    int field_48;
    long field_48_b;
    double field_48_c;
    char name_48[64];
} StructType48;

int function_48(StructType48 *s, int param_a, double param_b, const char *param_c) {
    int local_48 = param_a * 48;
    double local_48_d = param_b * 48;
    char buf_48[128];
    snprintf(buf_48, sizeof(buf_48), "function_%d: %d, %f, %s", 48, local_48, local_48_d, param_c ? param_c : "null");
    return local_48 + (int)local_48_d;
}

typedef struct {
    int field_49;
    long field_49_b;
    double field_49_c;
    char name_49[64];
} StructType49;

int function_49(StructType49 *s, int param_a, double param_b, const char *param_c) {
    int local_49 = param_a * 49;
    double local_49_d = param_b * 49;
    char buf_49[128];
    snprintf(buf_49, sizeof(buf_49), "function_%d: %d, %f, %s", 49, local_49, local_49_d, param_c ? param_c : "null");
    return local_49 + (int)local_49_d;
}

typedef struct {
    int field_50;
    long field_50_b;
    double field_50_c;
    char name_50[64];
} StructType50;

int function_50(StructType50 *s, int param_a, double param_b, const char *param_c) {
    int local_50 = param_a * 50;
    double local_50_d = param_b * 50;
    char buf_50[128];
    snprintf(buf_50, sizeof(buf_50), "function_%d: %d, %f, %s", 50, local_50, local_50_d, param_c ? param_c : "null");
    return local_50 + (int)local_50_d;
}

typedef struct {
    int field_51;
    long field_51_b;
    double field_51_c;
    char name_51[64];
} StructType51;

int function_51(StructType51 *s, int param_a, double param_b, const char *param_c) {
    int local_51 = param_a * 51;
    double local_51_d = param_b * 51;
    char buf_51[128];
    snprintf(buf_51, sizeof(buf_51), "function_%d: %d, %f, %s", 51, local_51, local_51_d, param_c ? param_c : "null");
    return local_51 + (int)local_51_d;
}

typedef struct {
    int field_52;
    long field_52_b;
    double field_52_c;
    char name_52[64];
} StructType52;

int function_52(StructType52 *s, int param_a, double param_b, const char *param_c) {
    int local_52 = param_a * 52;
    double local_52_d = param_b * 52;
    char buf_52[128];
    snprintf(buf_52, sizeof(buf_52), "function_%d: %d, %f, %s", 52, local_52, local_52_d, param_c ? param_c : "null");
    return local_52 + (int)local_52_d;
}

typedef struct {
    int field_53;
    long field_53_b;
    double field_53_c;
    char name_53[64];
} StructType53;

int function_53(StructType53 *s, int param_a, double param_b, const char *param_c) {
    int local_53 = param_a * 53;
    double local_53_d = param_b * 53;
    char buf_53[128];
    snprintf(buf_53, sizeof(buf_53), "function_%d: %d, %f, %s", 53, local_53, local_53_d, param_c ? param_c : "null");
    return local_53 + (int)local_53_d;
}

typedef struct {
    int field_54;
    long field_54_b;
    double field_54_c;
    char name_54[64];
} StructType54;

int function_54(StructType54 *s, int param_a, double param_b, const char *param_c) {
    int local_54 = param_a * 54;
    double local_54_d = param_b * 54;
    char buf_54[128];
    snprintf(buf_54, sizeof(buf_54), "function_%d: %d, %f, %s", 54, local_54, local_54_d, param_c ? param_c : "null");
    return local_54 + (int)local_54_d;
}

typedef struct {
    int field_55;
    long field_55_b;
    double field_55_c;
    char name_55[64];
} StructType55;

int function_55(StructType55 *s, int param_a, double param_b, const char *param_c) {
    int local_55 = param_a * 55;
    double local_55_d = param_b * 55;
    char buf_55[128];
    snprintf(buf_55, sizeof(buf_55), "function_%d: %d, %f, %s", 55, local_55, local_55_d, param_c ? param_c : "null");
    return local_55 + (int)local_55_d;
}

typedef struct {
    int field_56;
    long field_56_b;
    double field_56_c;
    char name_56[64];
} StructType56;

int function_56(StructType56 *s, int param_a, double param_b, const char *param_c) {
    int local_56 = param_a * 56;
    double local_56_d = param_b * 56;
    char buf_56[128];
    snprintf(buf_56, sizeof(buf_56), "function_%d: %d, %f, %s", 56, local_56, local_56_d, param_c ? param_c : "null");
    return local_56 + (int)local_56_d;
}

typedef struct {
    int field_57;
    long field_57_b;
    double field_57_c;
    char name_57[64];
} StructType57;

int function_57(StructType57 *s, int param_a, double param_b, const char *param_c) {
    int local_57 = param_a * 57;
    double local_57_d = param_b * 57;
    char buf_57[128];
    snprintf(buf_57, sizeof(buf_57), "function_%d: %d, %f, %s", 57, local_57, local_57_d, param_c ? param_c : "null");
    return local_57 + (int)local_57_d;
}

typedef struct {
    int field_58;
    long field_58_b;
    double field_58_c;
    char name_58[64];
} StructType58;

int function_58(StructType58 *s, int param_a, double param_b, const char *param_c) {
    int local_58 = param_a * 58;
    double local_58_d = param_b * 58;
    char buf_58[128];
    snprintf(buf_58, sizeof(buf_58), "function_%d: %d, %f, %s", 58, local_58, local_58_d, param_c ? param_c : "null");
    return local_58 + (int)local_58_d;
}

typedef struct {
    int field_59;
    long field_59_b;
    double field_59_c;
    char name_59[64];
} StructType59;

int function_59(StructType59 *s, int param_a, double param_b, const char *param_c) {
    int local_59 = param_a * 59;
    double local_59_d = param_b * 59;
    char buf_59[128];
    snprintf(buf_59, sizeof(buf_59), "function_%d: %d, %f, %s", 59, local_59, local_59_d, param_c ? param_c : "null");
    return local_59 + (int)local_59_d;
}

typedef struct {
    int field_60;
    long field_60_b;
    double field_60_c;
    char name_60[64];
} StructType60;

int function_60(StructType60 *s, int param_a, double param_b, const char *param_c) {
    int local_60 = param_a * 60;
    double local_60_d = param_b * 60;
    char buf_60[128];
    snprintf(buf_60, sizeof(buf_60), "function_%d: %d, %f, %s", 60, local_60, local_60_d, param_c ? param_c : "null");
    return local_60 + (int)local_60_d;
}

typedef struct {
    int field_61;
    long field_61_b;
    double field_61_c;
    char name_61[64];
} StructType61;

int function_61(StructType61 *s, int param_a, double param_b, const char *param_c) {
    int local_61 = param_a * 61;
    double local_61_d = param_b * 61;
    char buf_61[128];
    snprintf(buf_61, sizeof(buf_61), "function_%d: %d, %f, %s", 61, local_61, local_61_d, param_c ? param_c : "null");
    return local_61 + (int)local_61_d;
}

typedef struct {
    int field_62;
    long field_62_b;
    double field_62_c;
    char name_62[64];
} StructType62;

int function_62(StructType62 *s, int param_a, double param_b, const char *param_c) {
    int local_62 = param_a * 62;
    double local_62_d = param_b * 62;
    char buf_62[128];
    snprintf(buf_62, sizeof(buf_62), "function_%d: %d, %f, %s", 62, local_62, local_62_d, param_c ? param_c : "null");
    return local_62 + (int)local_62_d;
}

typedef struct {
    int field_63;
    long field_63_b;
    double field_63_c;
    char name_63[64];
} StructType63;

int function_63(StructType63 *s, int param_a, double param_b, const char *param_c) {
    int local_63 = param_a * 63;
    double local_63_d = param_b * 63;
    char buf_63[128];
    snprintf(buf_63, sizeof(buf_63), "function_%d: %d, %f, %s", 63, local_63, local_63_d, param_c ? param_c : "null");
    return local_63 + (int)local_63_d;
}

typedef struct {
    int field_64;
    long field_64_b;
    double field_64_c;
    char name_64[64];
} StructType64;

int function_64(StructType64 *s, int param_a, double param_b, const char *param_c) {
    int local_64 = param_a * 64;
    double local_64_d = param_b * 64;
    char buf_64[128];
    snprintf(buf_64, sizeof(buf_64), "function_%d: %d, %f, %s", 64, local_64, local_64_d, param_c ? param_c : "null");
    return local_64 + (int)local_64_d;
}

typedef struct {
    int field_65;
    long field_65_b;
    double field_65_c;
    char name_65[64];
} StructType65;

int function_65(StructType65 *s, int param_a, double param_b, const char *param_c) {
    int local_65 = param_a * 65;
    double local_65_d = param_b * 65;
    char buf_65[128];
    snprintf(buf_65, sizeof(buf_65), "function_%d: %d, %f, %s", 65, local_65, local_65_d, param_c ? param_c : "null");
    return local_65 + (int)local_65_d;
}

typedef struct {
    int field_66;
    long field_66_b;
    double field_66_c;
    char name_66[64];
} StructType66;

int function_66(StructType66 *s, int param_a, double param_b, const char *param_c) {
    int local_66 = param_a * 66;
    double local_66_d = param_b * 66;
    char buf_66[128];
    snprintf(buf_66, sizeof(buf_66), "function_%d: %d, %f, %s", 66, local_66, local_66_d, param_c ? param_c : "null");
    return local_66 + (int)local_66_d;
}

typedef struct {
    int field_67;
    long field_67_b;
    double field_67_c;
    char name_67[64];
} StructType67;

int function_67(StructType67 *s, int param_a, double param_b, const char *param_c) {
    int local_67 = param_a * 67;
    double local_67_d = param_b * 67;
    char buf_67[128];
    snprintf(buf_67, sizeof(buf_67), "function_%d: %d, %f, %s", 67, local_67, local_67_d, param_c ? param_c : "null");
    return local_67 + (int)local_67_d;
}

typedef struct {
    int field_68;
    long field_68_b;
    double field_68_c;
    char name_68[64];
} StructType68;

int function_68(StructType68 *s, int param_a, double param_b, const char *param_c) {
    int local_68 = param_a * 68;
    double local_68_d = param_b * 68;
    char buf_68[128];
    snprintf(buf_68, sizeof(buf_68), "function_%d: %d, %f, %s", 68, local_68, local_68_d, param_c ? param_c : "null");
    return local_68 + (int)local_68_d;
}

typedef struct {
    int field_69;
    long field_69_b;
    double field_69_c;
    char name_69[64];
} StructType69;

int function_69(StructType69 *s, int param_a, double param_b, const char *param_c) {
    int local_69 = param_a * 69;
    double local_69_d = param_b * 69;
    char buf_69[128];
    snprintf(buf_69, sizeof(buf_69), "function_%d: %d, %f, %s", 69, local_69, local_69_d, param_c ? param_c : "null");
    return local_69 + (int)local_69_d;
}

typedef struct {
    int field_70;
    long field_70_b;
    double field_70_c;
    char name_70[64];
} StructType70;

int function_70(StructType70 *s, int param_a, double param_b, const char *param_c) {
    int local_70 = param_a * 70;
    double local_70_d = param_b * 70;
    char buf_70[128];
    snprintf(buf_70, sizeof(buf_70), "function_%d: %d, %f, %s", 70, local_70, local_70_d, param_c ? param_c : "null");
    return local_70 + (int)local_70_d;
}

typedef struct {
    int field_71;
    long field_71_b;
    double field_71_c;
    char name_71[64];
} StructType71;

int function_71(StructType71 *s, int param_a, double param_b, const char *param_c) {
    int local_71 = param_a * 71;
    double local_71_d = param_b * 71;
    char buf_71[128];
    snprintf(buf_71, sizeof(buf_71), "function_%d: %d, %f, %s", 71, local_71, local_71_d, param_c ? param_c : "null");
    return local_71 + (int)local_71_d;
}

typedef struct {
    int field_72;
    long field_72_b;
    double field_72_c;
    char name_72[64];
} StructType72;

int function_72(StructType72 *s, int param_a, double param_b, const char *param_c) {
    int local_72 = param_a * 72;
    double local_72_d = param_b * 72;
    char buf_72[128];
    snprintf(buf_72, sizeof(buf_72), "function_%d: %d, %f, %s", 72, local_72, local_72_d, param_c ? param_c : "null");
    return local_72 + (int)local_72_d;
}

typedef struct {
    int field_73;
    long field_73_b;
    double field_73_c;
    char name_73[64];
} StructType73;

int function_73(StructType73 *s, int param_a, double param_b, const char *param_c) {
    int local_73 = param_a * 73;
    double local_73_d = param_b * 73;
    char buf_73[128];
    snprintf(buf_73, sizeof(buf_73), "function_%d: %d, %f, %s", 73, local_73, local_73_d, param_c ? param_c : "null");
    return local_73 + (int)local_73_d;
}

typedef struct {
    int field_74;
    long field_74_b;
    double field_74_c;
    char name_74[64];
} StructType74;

int function_74(StructType74 *s, int param_a, double param_b, const char *param_c) {
    int local_74 = param_a * 74;
    double local_74_d = param_b * 74;
    char buf_74[128];
    snprintf(buf_74, sizeof(buf_74), "function_%d: %d, %f, %s", 74, local_74, local_74_d, param_c ? param_c : "null");
    return local_74 + (int)local_74_d;
}

typedef struct {
    int field_75;
    long field_75_b;
    double field_75_c;
    char name_75[64];
} StructType75;

int function_75(StructType75 *s, int param_a, double param_b, const char *param_c) {
    int local_75 = param_a * 75;
    double local_75_d = param_b * 75;
    char buf_75[128];
    snprintf(buf_75, sizeof(buf_75), "function_%d: %d, %f, %s", 75, local_75, local_75_d, param_c ? param_c : "null");
    return local_75 + (int)local_75_d;
}

typedef struct {
    int field_76;
    long field_76_b;
    double field_76_c;
    char name_76[64];
} StructType76;

int function_76(StructType76 *s, int param_a, double param_b, const char *param_c) {
    int local_76 = param_a * 76;
    double local_76_d = param_b * 76;
    char buf_76[128];
    snprintf(buf_76, sizeof(buf_76), "function_%d: %d, %f, %s", 76, local_76, local_76_d, param_c ? param_c : "null");
    return local_76 + (int)local_76_d;
}

typedef struct {
    int field_77;
    long field_77_b;
    double field_77_c;
    char name_77[64];
} StructType77;

int function_77(StructType77 *s, int param_a, double param_b, const char *param_c) {
    int local_77 = param_a * 77;
    double local_77_d = param_b * 77;
    char buf_77[128];
    snprintf(buf_77, sizeof(buf_77), "function_%d: %d, %f, %s", 77, local_77, local_77_d, param_c ? param_c : "null");
    return local_77 + (int)local_77_d;
}

typedef struct {
    int field_78;
    long field_78_b;
    double field_78_c;
    char name_78[64];
} StructType78;

int function_78(StructType78 *s, int param_a, double param_b, const char *param_c) {
    int local_78 = param_a * 78;
    double local_78_d = param_b * 78;
    char buf_78[128];
    snprintf(buf_78, sizeof(buf_78), "function_%d: %d, %f, %s", 78, local_78, local_78_d, param_c ? param_c : "null");
    return local_78 + (int)local_78_d;
}

typedef struct {
    int field_79;
    long field_79_b;
    double field_79_c;
    char name_79[64];
} StructType79;

int function_79(StructType79 *s, int param_a, double param_b, const char *param_c) {
    int local_79 = param_a * 79;
    double local_79_d = param_b * 79;
    char buf_79[128];
    snprintf(buf_79, sizeof(buf_79), "function_%d: %d, %f, %s", 79, local_79, local_79_d, param_c ? param_c : "null");
    return local_79 + (int)local_79_d;
}

typedef struct {
    int field_80;
    long field_80_b;
    double field_80_c;
    char name_80[64];
} StructType80;

int function_80(StructType80 *s, int param_a, double param_b, const char *param_c) {
    int local_80 = param_a * 80;
    double local_80_d = param_b * 80;
    char buf_80[128];
    snprintf(buf_80, sizeof(buf_80), "function_%d: %d, %f, %s", 80, local_80, local_80_d, param_c ? param_c : "null");
    return local_80 + (int)local_80_d;
}

typedef struct {
    int field_81;
    long field_81_b;
    double field_81_c;
    char name_81[64];
} StructType81;

int function_81(StructType81 *s, int param_a, double param_b, const char *param_c) {
    int local_81 = param_a * 81;
    double local_81_d = param_b * 81;
    char buf_81[128];
    snprintf(buf_81, sizeof(buf_81), "function_%d: %d, %f, %s", 81, local_81, local_81_d, param_c ? param_c : "null");
    return local_81 + (int)local_81_d;
}

typedef struct {
    int field_82;
    long field_82_b;
    double field_82_c;
    char name_82[64];
} StructType82;

int function_82(StructType82 *s, int param_a, double param_b, const char *param_c) {
    int local_82 = param_a * 82;
    double local_82_d = param_b * 82;
    char buf_82[128];
    snprintf(buf_82, sizeof(buf_82), "function_%d: %d, %f, %s", 82, local_82, local_82_d, param_c ? param_c : "null");
    return local_82 + (int)local_82_d;
}

typedef struct {
    int field_83;
    long field_83_b;
    double field_83_c;
    char name_83[64];
} StructType83;

int function_83(StructType83 *s, int param_a, double param_b, const char *param_c) {
    int local_83 = param_a * 83;
    double local_83_d = param_b * 83;
    char buf_83[128];
    snprintf(buf_83, sizeof(buf_83), "function_%d: %d, %f, %s", 83, local_83, local_83_d, param_c ? param_c : "null");
    return local_83 + (int)local_83_d;
}

typedef struct {
    int field_84;
    long field_84_b;
    double field_84_c;
    char name_84[64];
} StructType84;

int function_84(StructType84 *s, int param_a, double param_b, const char *param_c) {
    int local_84 = param_a * 84;
    double local_84_d = param_b * 84;
    char buf_84[128];
    snprintf(buf_84, sizeof(buf_84), "function_%d: %d, %f, %s", 84, local_84, local_84_d, param_c ? param_c : "null");
    return local_84 + (int)local_84_d;
}

typedef struct {
    int field_85;
    long field_85_b;
    double field_85_c;
    char name_85[64];
} StructType85;

int function_85(StructType85 *s, int param_a, double param_b, const char *param_c) {
    int local_85 = param_a * 85;
    double local_85_d = param_b * 85;
    char buf_85[128];
    snprintf(buf_85, sizeof(buf_85), "function_%d: %d, %f, %s", 85, local_85, local_85_d, param_c ? param_c : "null");
    return local_85 + (int)local_85_d;
}

typedef struct {
    int field_86;
    long field_86_b;
    double field_86_c;
    char name_86[64];
} StructType86;

int function_86(StructType86 *s, int param_a, double param_b, const char *param_c) {
    int local_86 = param_a * 86;
    double local_86_d = param_b * 86;
    char buf_86[128];
    snprintf(buf_86, sizeof(buf_86), "function_%d: %d, %f, %s", 86, local_86, local_86_d, param_c ? param_c : "null");
    return local_86 + (int)local_86_d;
}

typedef struct {
    int field_87;
    long field_87_b;
    double field_87_c;
    char name_87[64];
} StructType87;

int function_87(StructType87 *s, int param_a, double param_b, const char *param_c) {
    int local_87 = param_a * 87;
    double local_87_d = param_b * 87;
    char buf_87[128];
    snprintf(buf_87, sizeof(buf_87), "function_%d: %d, %f, %s", 87, local_87, local_87_d, param_c ? param_c : "null");
    return local_87 + (int)local_87_d;
}

typedef struct {
    int field_88;
    long field_88_b;
    double field_88_c;
    char name_88[64];
} StructType88;

int function_88(StructType88 *s, int param_a, double param_b, const char *param_c) {
    int local_88 = param_a * 88;
    double local_88_d = param_b * 88;
    char buf_88[128];
    snprintf(buf_88, sizeof(buf_88), "function_%d: %d, %f, %s", 88, local_88, local_88_d, param_c ? param_c : "null");
    return local_88 + (int)local_88_d;
}

typedef struct {
    int field_89;
    long field_89_b;
    double field_89_c;
    char name_89[64];
} StructType89;

int function_89(StructType89 *s, int param_a, double param_b, const char *param_c) {
    int local_89 = param_a * 89;
    double local_89_d = param_b * 89;
    char buf_89[128];
    snprintf(buf_89, sizeof(buf_89), "function_%d: %d, %f, %s", 89, local_89, local_89_d, param_c ? param_c : "null");
    return local_89 + (int)local_89_d;
}

typedef struct {
    int field_90;
    long field_90_b;
    double field_90_c;
    char name_90[64];
} StructType90;

int function_90(StructType90 *s, int param_a, double param_b, const char *param_c) {
    int local_90 = param_a * 90;
    double local_90_d = param_b * 90;
    char buf_90[128];
    snprintf(buf_90, sizeof(buf_90), "function_%d: %d, %f, %s", 90, local_90, local_90_d, param_c ? param_c : "null");
    return local_90 + (int)local_90_d;
}

typedef struct {
    int field_91;
    long field_91_b;
    double field_91_c;
    char name_91[64];
} StructType91;

int function_91(StructType91 *s, int param_a, double param_b, const char *param_c) {
    int local_91 = param_a * 91;
    double local_91_d = param_b * 91;
    char buf_91[128];
    snprintf(buf_91, sizeof(buf_91), "function_%d: %d, %f, %s", 91, local_91, local_91_d, param_c ? param_c : "null");
    return local_91 + (int)local_91_d;
}

typedef struct {
    int field_92;
    long field_92_b;
    double field_92_c;
    char name_92[64];
} StructType92;

int function_92(StructType92 *s, int param_a, double param_b, const char *param_c) {
    int local_92 = param_a * 92;
    double local_92_d = param_b * 92;
    char buf_92[128];
    snprintf(buf_92, sizeof(buf_92), "function_%d: %d, %f, %s", 92, local_92, local_92_d, param_c ? param_c : "null");
    return local_92 + (int)local_92_d;
}

typedef struct {
    int field_93;
    long field_93_b;
    double field_93_c;
    char name_93[64];
} StructType93;

int function_93(StructType93 *s, int param_a, double param_b, const char *param_c) {
    int local_93 = param_a * 93;
    double local_93_d = param_b * 93;
    char buf_93[128];
    snprintf(buf_93, sizeof(buf_93), "function_%d: %d, %f, %s", 93, local_93, local_93_d, param_c ? param_c : "null");
    return local_93 + (int)local_93_d;
}

typedef struct {
    int field_94;
    long field_94_b;
    double field_94_c;
    char name_94[64];
} StructType94;

int function_94(StructType94 *s, int param_a, double param_b, const char *param_c) {
    int local_94 = param_a * 94;
    double local_94_d = param_b * 94;
    char buf_94[128];
    snprintf(buf_94, sizeof(buf_94), "function_%d: %d, %f, %s", 94, local_94, local_94_d, param_c ? param_c : "null");
    return local_94 + (int)local_94_d;
}

typedef struct {
    int field_95;
    long field_95_b;
    double field_95_c;
    char name_95[64];
} StructType95;

int function_95(StructType95 *s, int param_a, double param_b, const char *param_c) {
    int local_95 = param_a * 95;
    double local_95_d = param_b * 95;
    char buf_95[128];
    snprintf(buf_95, sizeof(buf_95), "function_%d: %d, %f, %s", 95, local_95, local_95_d, param_c ? param_c : "null");
    return local_95 + (int)local_95_d;
}

typedef struct {
    int field_96;
    long field_96_b;
    double field_96_c;
    char name_96[64];
} StructType96;

int function_96(StructType96 *s, int param_a, double param_b, const char *param_c) {
    int local_96 = param_a * 96;
    double local_96_d = param_b * 96;
    char buf_96[128];
    snprintf(buf_96, sizeof(buf_96), "function_%d: %d, %f, %s", 96, local_96, local_96_d, param_c ? param_c : "null");
    return local_96 + (int)local_96_d;
}

typedef struct {
    int field_97;
    long field_97_b;
    double field_97_c;
    char name_97[64];
} StructType97;

int function_97(StructType97 *s, int param_a, double param_b, const char *param_c) {
    int local_97 = param_a * 97;
    double local_97_d = param_b * 97;
    char buf_97[128];
    snprintf(buf_97, sizeof(buf_97), "function_%d: %d, %f, %s", 97, local_97, local_97_d, param_c ? param_c : "null");
    return local_97 + (int)local_97_d;
}

typedef struct {
    int field_98;
    long field_98_b;
    double field_98_c;
    char name_98[64];
} StructType98;

int function_98(StructType98 *s, int param_a, double param_b, const char *param_c) {
    int local_98 = param_a * 98;
    double local_98_d = param_b * 98;
    char buf_98[128];
    snprintf(buf_98, sizeof(buf_98), "function_%d: %d, %f, %s", 98, local_98, local_98_d, param_c ? param_c : "null");
    return local_98 + (int)local_98_d;
}

typedef struct {
    int field_99;
    long field_99_b;
    double field_99_c;
    char name_99[64];
} StructType99;

int function_99(StructType99 *s, int param_a, double param_b, const char *param_c) {
    int local_99 = param_a * 99;
    double local_99_d = param_b * 99;
    char buf_99[128];
    snprintf(buf_99, sizeof(buf_99), "function_%d: %d, %f, %s", 99, local_99, local_99_d, param_c ? param_c : "null");
    return local_99 + (int)local_99_d;
}

typedef struct {
    int field_100;
    long field_100_b;
    double field_100_c;
    char name_100[64];
} StructType100;

int function_100(StructType100 *s, int param_a, double param_b, const char *param_c) {
    int local_100 = param_a * 100;
    double local_100_d = param_b * 100;
    char buf_100[128];
    snprintf(buf_100, sizeof(buf_100), "function_%d: %d, %f, %s", 100, local_100, local_100_d, param_c ? param_c : "null");
    return local_100 + (int)local_100_d;
}

typedef struct {
    int field_101;
    long field_101_b;
    double field_101_c;
    char name_101[64];
} StructType101;

int function_101(StructType101 *s, int param_a, double param_b, const char *param_c) {
    int local_101 = param_a * 101;
    double local_101_d = param_b * 101;
    char buf_101[128];
    snprintf(buf_101, sizeof(buf_101), "function_%d: %d, %f, %s", 101, local_101, local_101_d, param_c ? param_c : "null");
    return local_101 + (int)local_101_d;
}

typedef struct {
    int field_102;
    long field_102_b;
    double field_102_c;
    char name_102[64];
} StructType102;

int function_102(StructType102 *s, int param_a, double param_b, const char *param_c) {
    int local_102 = param_a * 102;
    double local_102_d = param_b * 102;
    char buf_102[128];
    snprintf(buf_102, sizeof(buf_102), "function_%d: %d, %f, %s", 102, local_102, local_102_d, param_c ? param_c : "null");
    return local_102 + (int)local_102_d;
}

typedef struct {
    int field_103;
    long field_103_b;
    double field_103_c;
    char name_103[64];
} StructType103;

int function_103(StructType103 *s, int param_a, double param_b, const char *param_c) {
    int local_103 = param_a * 103;
    double local_103_d = param_b * 103;
    char buf_103[128];
    snprintf(buf_103, sizeof(buf_103), "function_%d: %d, %f, %s", 103, local_103, local_103_d, param_c ? param_c : "null");
    return local_103 + (int)local_103_d;
}

typedef struct {
    int field_104;
    long field_104_b;
    double field_104_c;
    char name_104[64];
} StructType104;

int function_104(StructType104 *s, int param_a, double param_b, const char *param_c) {
    int local_104 = param_a * 104;
    double local_104_d = param_b * 104;
    char buf_104[128];
    snprintf(buf_104, sizeof(buf_104), "function_%d: %d, %f, %s", 104, local_104, local_104_d, param_c ? param_c : "null");
    return local_104 + (int)local_104_d;
}

typedef struct {
    int field_105;
    long field_105_b;
    double field_105_c;
    char name_105[64];
} StructType105;

int function_105(StructType105 *s, int param_a, double param_b, const char *param_c) {
    int local_105 = param_a * 105;
    double local_105_d = param_b * 105;
    char buf_105[128];
    snprintf(buf_105, sizeof(buf_105), "function_%d: %d, %f, %s", 105, local_105, local_105_d, param_c ? param_c : "null");
    return local_105 + (int)local_105_d;
}

typedef struct {
    int field_106;
    long field_106_b;
    double field_106_c;
    char name_106[64];
} StructType106;

int function_106(StructType106 *s, int param_a, double param_b, const char *param_c) {
    int local_106 = param_a * 106;
    double local_106_d = param_b * 106;
    char buf_106[128];
    snprintf(buf_106, sizeof(buf_106), "function_%d: %d, %f, %s", 106, local_106, local_106_d, param_c ? param_c : "null");
    return local_106 + (int)local_106_d;
}

typedef struct {
    int field_107;
    long field_107_b;
    double field_107_c;
    char name_107[64];
} StructType107;

int function_107(StructType107 *s, int param_a, double param_b, const char *param_c) {
    int local_107 = param_a * 107;
    double local_107_d = param_b * 107;
    char buf_107[128];
    snprintf(buf_107, sizeof(buf_107), "function_%d: %d, %f, %s", 107, local_107, local_107_d, param_c ? param_c : "null");
    return local_107 + (int)local_107_d;
}

typedef struct {
    int field_108;
    long field_108_b;
    double field_108_c;
    char name_108[64];
} StructType108;

int function_108(StructType108 *s, int param_a, double param_b, const char *param_c) {
    int local_108 = param_a * 108;
    double local_108_d = param_b * 108;
    char buf_108[128];
    snprintf(buf_108, sizeof(buf_108), "function_%d: %d, %f, %s", 108, local_108, local_108_d, param_c ? param_c : "null");
    return local_108 + (int)local_108_d;
}

typedef struct {
    int field_109;
    long field_109_b;
    double field_109_c;
    char name_109[64];
} StructType109;

int function_109(StructType109 *s, int param_a, double param_b, const char *param_c) {
    int local_109 = param_a * 109;
    double local_109_d = param_b * 109;
    char buf_109[128];
    snprintf(buf_109, sizeof(buf_109), "function_%d: %d, %f, %s", 109, local_109, local_109_d, param_c ? param_c : "null");
    return local_109 + (int)local_109_d;
}

typedef struct {
    int field_110;
    long field_110_b;
    double field_110_c;
    char name_110[64];
} StructType110;

int function_110(StructType110 *s, int param_a, double param_b, const char *param_c) {
    int local_110 = param_a * 110;
    double local_110_d = param_b * 110;
    char buf_110[128];
    snprintf(buf_110, sizeof(buf_110), "function_%d: %d, %f, %s", 110, local_110, local_110_d, param_c ? param_c : "null");
    return local_110 + (int)local_110_d;
}

typedef struct {
    int field_111;
    long field_111_b;
    double field_111_c;
    char name_111[64];
} StructType111;

int function_111(StructType111 *s, int param_a, double param_b, const char *param_c) {
    int local_111 = param_a * 111;
    double local_111_d = param_b * 111;
    char buf_111[128];
    snprintf(buf_111, sizeof(buf_111), "function_%d: %d, %f, %s", 111, local_111, local_111_d, param_c ? param_c : "null");
    return local_111 + (int)local_111_d;
}

typedef struct {
    int field_112;
    long field_112_b;
    double field_112_c;
    char name_112[64];
} StructType112;

int function_112(StructType112 *s, int param_a, double param_b, const char *param_c) {
    int local_112 = param_a * 112;
    double local_112_d = param_b * 112;
    char buf_112[128];
    snprintf(buf_112, sizeof(buf_112), "function_%d: %d, %f, %s", 112, local_112, local_112_d, param_c ? param_c : "null");
    return local_112 + (int)local_112_d;
}

typedef struct {
    int field_113;
    long field_113_b;
    double field_113_c;
    char name_113[64];
} StructType113;

int function_113(StructType113 *s, int param_a, double param_b, const char *param_c) {
    int local_113 = param_a * 113;
    double local_113_d = param_b * 113;
    char buf_113[128];
    snprintf(buf_113, sizeof(buf_113), "function_%d: %d, %f, %s", 113, local_113, local_113_d, param_c ? param_c : "null");
    return local_113 + (int)local_113_d;
}

typedef struct {
    int field_114;
    long field_114_b;
    double field_114_c;
    char name_114[64];
} StructType114;

int function_114(StructType114 *s, int param_a, double param_b, const char *param_c) {
    int local_114 = param_a * 114;
    double local_114_d = param_b * 114;
    char buf_114[128];
    snprintf(buf_114, sizeof(buf_114), "function_%d: %d, %f, %s", 114, local_114, local_114_d, param_c ? param_c : "null");
    return local_114 + (int)local_114_d;
}

typedef struct {
    int field_115;
    long field_115_b;
    double field_115_c;
    char name_115[64];
} StructType115;

int function_115(StructType115 *s, int param_a, double param_b, const char *param_c) {
    int local_115 = param_a * 115;
    double local_115_d = param_b * 115;
    char buf_115[128];
    snprintf(buf_115, sizeof(buf_115), "function_%d: %d, %f, %s", 115, local_115, local_115_d, param_c ? param_c : "null");
    return local_115 + (int)local_115_d;
}

typedef struct {
    int field_116;
    long field_116_b;
    double field_116_c;
    char name_116[64];
} StructType116;

int function_116(StructType116 *s, int param_a, double param_b, const char *param_c) {
    int local_116 = param_a * 116;
    double local_116_d = param_b * 116;
    char buf_116[128];
    snprintf(buf_116, sizeof(buf_116), "function_%d: %d, %f, %s", 116, local_116, local_116_d, param_c ? param_c : "null");
    return local_116 + (int)local_116_d;
}

typedef struct {
    int field_117;
    long field_117_b;
    double field_117_c;
    char name_117[64];
} StructType117;

int function_117(StructType117 *s, int param_a, double param_b, const char *param_c) {
    int local_117 = param_a * 117;
    double local_117_d = param_b * 117;
    char buf_117[128];
    snprintf(buf_117, sizeof(buf_117), "function_%d: %d, %f, %s", 117, local_117, local_117_d, param_c ? param_c : "null");
    return local_117 + (int)local_117_d;
}

typedef struct {
    int field_118;
    long field_118_b;
    double field_118_c;
    char name_118[64];
} StructType118;

int function_118(StructType118 *s, int param_a, double param_b, const char *param_c) {
    int local_118 = param_a * 118;
    double local_118_d = param_b * 118;
    char buf_118[128];
    snprintf(buf_118, sizeof(buf_118), "function_%d: %d, %f, %s", 118, local_118, local_118_d, param_c ? param_c : "null");
    return local_118 + (int)local_118_d;
}

typedef struct {
    int field_119;
    long field_119_b;
    double field_119_c;
    char name_119[64];
} StructType119;

int function_119(StructType119 *s, int param_a, double param_b, const char *param_c) {
    int local_119 = param_a * 119;
    double local_119_d = param_b * 119;
    char buf_119[128];
    snprintf(buf_119, sizeof(buf_119), "function_%d: %d, %f, %s", 119, local_119, local_119_d, param_c ? param_c : "null");
    return local_119 + (int)local_119_d;
}

typedef struct {
    int field_120;
    long field_120_b;
    double field_120_c;
    char name_120[64];
} StructType120;

int function_120(StructType120 *s, int param_a, double param_b, const char *param_c) {
    int local_120 = param_a * 120;
    double local_120_d = param_b * 120;
    char buf_120[128];
    snprintf(buf_120, sizeof(buf_120), "function_%d: %d, %f, %s", 120, local_120, local_120_d, param_c ? param_c : "null");
    return local_120 + (int)local_120_d;
}

typedef struct {
    int field_121;
    long field_121_b;
    double field_121_c;
    char name_121[64];
} StructType121;

int function_121(StructType121 *s, int param_a, double param_b, const char *param_c) {
    int local_121 = param_a * 121;
    double local_121_d = param_b * 121;
    char buf_121[128];
    snprintf(buf_121, sizeof(buf_121), "function_%d: %d, %f, %s", 121, local_121, local_121_d, param_c ? param_c : "null");
    return local_121 + (int)local_121_d;
}

typedef struct {
    int field_122;
    long field_122_b;
    double field_122_c;
    char name_122[64];
} StructType122;

int function_122(StructType122 *s, int param_a, double param_b, const char *param_c) {
    int local_122 = param_a * 122;
    double local_122_d = param_b * 122;
    char buf_122[128];
    snprintf(buf_122, sizeof(buf_122), "function_%d: %d, %f, %s", 122, local_122, local_122_d, param_c ? param_c : "null");
    return local_122 + (int)local_122_d;
}

typedef struct {
    int field_123;
    long field_123_b;
    double field_123_c;
    char name_123[64];
} StructType123;

int function_123(StructType123 *s, int param_a, double param_b, const char *param_c) {
    int local_123 = param_a * 123;
    double local_123_d = param_b * 123;
    char buf_123[128];
    snprintf(buf_123, sizeof(buf_123), "function_%d: %d, %f, %s", 123, local_123, local_123_d, param_c ? param_c : "null");
    return local_123 + (int)local_123_d;
}

typedef struct {
    int field_124;
    long field_124_b;
    double field_124_c;
    char name_124[64];
} StructType124;

int function_124(StructType124 *s, int param_a, double param_b, const char *param_c) {
    int local_124 = param_a * 124;
    double local_124_d = param_b * 124;
    char buf_124[128];
    snprintf(buf_124, sizeof(buf_124), "function_%d: %d, %f, %s", 124, local_124, local_124_d, param_c ? param_c : "null");
    return local_124 + (int)local_124_d;
}

typedef struct {
    int field_125;
    long field_125_b;
    double field_125_c;
    char name_125[64];
} StructType125;

int function_125(StructType125 *s, int param_a, double param_b, const char *param_c) {
    int local_125 = param_a * 125;
    double local_125_d = param_b * 125;
    char buf_125[128];
    snprintf(buf_125, sizeof(buf_125), "function_%d: %d, %f, %s", 125, local_125, local_125_d, param_c ? param_c : "null");
    return local_125 + (int)local_125_d;
}

typedef struct {
    int field_126;
    long field_126_b;
    double field_126_c;
    char name_126[64];
} StructType126;

int function_126(StructType126 *s, int param_a, double param_b, const char *param_c) {
    int local_126 = param_a * 126;
    double local_126_d = param_b * 126;
    char buf_126[128];
    snprintf(buf_126, sizeof(buf_126), "function_%d: %d, %f, %s", 126, local_126, local_126_d, param_c ? param_c : "null");
    return local_126 + (int)local_126_d;
}

typedef struct {
    int field_127;
    long field_127_b;
    double field_127_c;
    char name_127[64];
} StructType127;

int function_127(StructType127 *s, int param_a, double param_b, const char *param_c) {
    int local_127 = param_a * 127;
    double local_127_d = param_b * 127;
    char buf_127[128];
    snprintf(buf_127, sizeof(buf_127), "function_%d: %d, %f, %s", 127, local_127, local_127_d, param_c ? param_c : "null");
    return local_127 + (int)local_127_d;
}

typedef struct {
    int field_128;
    long field_128_b;
    double field_128_c;
    char name_128[64];
} StructType128;

int function_128(StructType128 *s, int param_a, double param_b, const char *param_c) {
    int local_128 = param_a * 128;
    double local_128_d = param_b * 128;
    char buf_128[128];
    snprintf(buf_128, sizeof(buf_128), "function_%d: %d, %f, %s", 128, local_128, local_128_d, param_c ? param_c : "null");
    return local_128 + (int)local_128_d;
}

typedef struct {
    int field_129;
    long field_129_b;
    double field_129_c;
    char name_129[64];
} StructType129;

int function_129(StructType129 *s, int param_a, double param_b, const char *param_c) {
    int local_129 = param_a * 129;
    double local_129_d = param_b * 129;
    char buf_129[128];
    snprintf(buf_129, sizeof(buf_129), "function_%d: %d, %f, %s", 129, local_129, local_129_d, param_c ? param_c : "null");
    return local_129 + (int)local_129_d;
}

typedef struct {
    int field_130;
    long field_130_b;
    double field_130_c;
    char name_130[64];
} StructType130;

int function_130(StructType130 *s, int param_a, double param_b, const char *param_c) {
    int local_130 = param_a * 130;
    double local_130_d = param_b * 130;
    char buf_130[128];
    snprintf(buf_130, sizeof(buf_130), "function_%d: %d, %f, %s", 130, local_130, local_130_d, param_c ? param_c : "null");
    return local_130 + (int)local_130_d;
}

typedef struct {
    int field_131;
    long field_131_b;
    double field_131_c;
    char name_131[64];
} StructType131;

int function_131(StructType131 *s, int param_a, double param_b, const char *param_c) {
    int local_131 = param_a * 131;
    double local_131_d = param_b * 131;
    char buf_131[128];
    snprintf(buf_131, sizeof(buf_131), "function_%d: %d, %f, %s", 131, local_131, local_131_d, param_c ? param_c : "null");
    return local_131 + (int)local_131_d;
}

typedef struct {
    int field_132;
    long field_132_b;
    double field_132_c;
    char name_132[64];
} StructType132;

int function_132(StructType132 *s, int param_a, double param_b, const char *param_c) {
    int local_132 = param_a * 132;
    double local_132_d = param_b * 132;
    char buf_132[128];
    snprintf(buf_132, sizeof(buf_132), "function_%d: %d, %f, %s", 132, local_132, local_132_d, param_c ? param_c : "null");
    return local_132 + (int)local_132_d;
}

typedef struct {
    int field_133;
    long field_133_b;
    double field_133_c;
    char name_133[64];
} StructType133;

int function_133(StructType133 *s, int param_a, double param_b, const char *param_c) {
    int local_133 = param_a * 133;
    double local_133_d = param_b * 133;
    char buf_133[128];
    snprintf(buf_133, sizeof(buf_133), "function_%d: %d, %f, %s", 133, local_133, local_133_d, param_c ? param_c : "null");
    return local_133 + (int)local_133_d;
}

typedef struct {
    int field_134;
    long field_134_b;
    double field_134_c;
    char name_134[64];
} StructType134;

int function_134(StructType134 *s, int param_a, double param_b, const char *param_c) {
    int local_134 = param_a * 134;
    double local_134_d = param_b * 134;
    char buf_134[128];
    snprintf(buf_134, sizeof(buf_134), "function_%d: %d, %f, %s", 134, local_134, local_134_d, param_c ? param_c : "null");
    return local_134 + (int)local_134_d;
}

typedef struct {
    int field_135;
    long field_135_b;
    double field_135_c;
    char name_135[64];
} StructType135;

int function_135(StructType135 *s, int param_a, double param_b, const char *param_c) {
    int local_135 = param_a * 135;
    double local_135_d = param_b * 135;
    char buf_135[128];
    snprintf(buf_135, sizeof(buf_135), "function_%d: %d, %f, %s", 135, local_135, local_135_d, param_c ? param_c : "null");
    return local_135 + (int)local_135_d;
}

typedef struct {
    int field_136;
    long field_136_b;
    double field_136_c;
    char name_136[64];
} StructType136;

int function_136(StructType136 *s, int param_a, double param_b, const char *param_c) {
    int local_136 = param_a * 136;
    double local_136_d = param_b * 136;
    char buf_136[128];
    snprintf(buf_136, sizeof(buf_136), "function_%d: %d, %f, %s", 136, local_136, local_136_d, param_c ? param_c : "null");
    return local_136 + (int)local_136_d;
}

typedef struct {
    int field_137;
    long field_137_b;
    double field_137_c;
    char name_137[64];
} StructType137;

int function_137(StructType137 *s, int param_a, double param_b, const char *param_c) {
    int local_137 = param_a * 137;
    double local_137_d = param_b * 137;
    char buf_137[128];
    snprintf(buf_137, sizeof(buf_137), "function_%d: %d, %f, %s", 137, local_137, local_137_d, param_c ? param_c : "null");
    return local_137 + (int)local_137_d;
}

typedef struct {
    int field_138;
    long field_138_b;
    double field_138_c;
    char name_138[64];
} StructType138;

int function_138(StructType138 *s, int param_a, double param_b, const char *param_c) {
    int local_138 = param_a * 138;
    double local_138_d = param_b * 138;
    char buf_138[128];
    snprintf(buf_138, sizeof(buf_138), "function_%d: %d, %f, %s", 138, local_138, local_138_d, param_c ? param_c : "null");
    return local_138 + (int)local_138_d;
}

typedef struct {
    int field_139;
    long field_139_b;
    double field_139_c;
    char name_139[64];
} StructType139;

int function_139(StructType139 *s, int param_a, double param_b, const char *param_c) {
    int local_139 = param_a * 139;
    double local_139_d = param_b * 139;
    char buf_139[128];
    snprintf(buf_139, sizeof(buf_139), "function_%d: %d, %f, %s", 139, local_139, local_139_d, param_c ? param_c : "null");
    return local_139 + (int)local_139_d;
}

typedef struct {
    int field_140;
    long field_140_b;
    double field_140_c;
    char name_140[64];
} StructType140;

int function_140(StructType140 *s, int param_a, double param_b, const char *param_c) {
    int local_140 = param_a * 140;
    double local_140_d = param_b * 140;
    char buf_140[128];
    snprintf(buf_140, sizeof(buf_140), "function_%d: %d, %f, %s", 140, local_140, local_140_d, param_c ? param_c : "null");
    return local_140 + (int)local_140_d;
}

typedef struct {
    int field_141;
    long field_141_b;
    double field_141_c;
    char name_141[64];
} StructType141;

int function_141(StructType141 *s, int param_a, double param_b, const char *param_c) {
    int local_141 = param_a * 141;
    double local_141_d = param_b * 141;
    char buf_141[128];
    snprintf(buf_141, sizeof(buf_141), "function_%d: %d, %f, %s", 141, local_141, local_141_d, param_c ? param_c : "null");
    return local_141 + (int)local_141_d;
}

typedef struct {
    int field_142;
    long field_142_b;
    double field_142_c;
    char name_142[64];
} StructType142;

int function_142(StructType142 *s, int param_a, double param_b, const char *param_c) {
    int local_142 = param_a * 142;
    double local_142_d = param_b * 142;
    char buf_142[128];
    snprintf(buf_142, sizeof(buf_142), "function_%d: %d, %f, %s", 142, local_142, local_142_d, param_c ? param_c : "null");
    return local_142 + (int)local_142_d;
}

typedef struct {
    int field_143;
    long field_143_b;
    double field_143_c;
    char name_143[64];
} StructType143;

int function_143(StructType143 *s, int param_a, double param_b, const char *param_c) {
    int local_143 = param_a * 143;
    double local_143_d = param_b * 143;
    char buf_143[128];
    snprintf(buf_143, sizeof(buf_143), "function_%d: %d, %f, %s", 143, local_143, local_143_d, param_c ? param_c : "null");
    return local_143 + (int)local_143_d;
}

typedef struct {
    int field_144;
    long field_144_b;
    double field_144_c;
    char name_144[64];
} StructType144;

int function_144(StructType144 *s, int param_a, double param_b, const char *param_c) {
    int local_144 = param_a * 144;
    double local_144_d = param_b * 144;
    char buf_144[128];
    snprintf(buf_144, sizeof(buf_144), "function_%d: %d, %f, %s", 144, local_144, local_144_d, param_c ? param_c : "null");
    return local_144 + (int)local_144_d;
}

typedef struct {
    int field_145;
    long field_145_b;
    double field_145_c;
    char name_145[64];
} StructType145;

int function_145(StructType145 *s, int param_a, double param_b, const char *param_c) {
    int local_145 = param_a * 145;
    double local_145_d = param_b * 145;
    char buf_145[128];
    snprintf(buf_145, sizeof(buf_145), "function_%d: %d, %f, %s", 145, local_145, local_145_d, param_c ? param_c : "null");
    return local_145 + (int)local_145_d;
}

typedef struct {
    int field_146;
    long field_146_b;
    double field_146_c;
    char name_146[64];
} StructType146;

int function_146(StructType146 *s, int param_a, double param_b, const char *param_c) {
    int local_146 = param_a * 146;
    double local_146_d = param_b * 146;
    char buf_146[128];
    snprintf(buf_146, sizeof(buf_146), "function_%d: %d, %f, %s", 146, local_146, local_146_d, param_c ? param_c : "null");
    return local_146 + (int)local_146_d;
}

typedef struct {
    int field_147;
    long field_147_b;
    double field_147_c;
    char name_147[64];
} StructType147;

int function_147(StructType147 *s, int param_a, double param_b, const char *param_c) {
    int local_147 = param_a * 147;
    double local_147_d = param_b * 147;
    char buf_147[128];
    snprintf(buf_147, sizeof(buf_147), "function_%d: %d, %f, %s", 147, local_147, local_147_d, param_c ? param_c : "null");
    return local_147 + (int)local_147_d;
}

typedef struct {
    int field_148;
    long field_148_b;
    double field_148_c;
    char name_148[64];
} StructType148;

int function_148(StructType148 *s, int param_a, double param_b, const char *param_c) {
    int local_148 = param_a * 148;
    double local_148_d = param_b * 148;
    char buf_148[128];
    snprintf(buf_148, sizeof(buf_148), "function_%d: %d, %f, %s", 148, local_148, local_148_d, param_c ? param_c : "null");
    return local_148 + (int)local_148_d;
}

typedef struct {
    int field_149;
    long field_149_b;
    double field_149_c;
    char name_149[64];
} StructType149;

int function_149(StructType149 *s, int param_a, double param_b, const char *param_c) {
    int local_149 = param_a * 149;
    double local_149_d = param_b * 149;
    char buf_149[128];
    snprintf(buf_149, sizeof(buf_149), "function_%d: %d, %f, %s", 149, local_149, local_149_d, param_c ? param_c : "null");
    return local_149 + (int)local_149_d;
}

typedef struct {
    int field_150;
    long field_150_b;
    double field_150_c;
    char name_150[64];
} StructType150;

int function_150(StructType150 *s, int param_a, double param_b, const char *param_c) {
    int local_150 = param_a * 150;
    double local_150_d = param_b * 150;
    char buf_150[128];
    snprintf(buf_150, sizeof(buf_150), "function_%d: %d, %f, %s", 150, local_150, local_150_d, param_c ? param_c : "null");
    return local_150 + (int)local_150_d;
}

typedef struct {
    int field_151;
    long field_151_b;
    double field_151_c;
    char name_151[64];
} StructType151;

int function_151(StructType151 *s, int param_a, double param_b, const char *param_c) {
    int local_151 = param_a * 151;
    double local_151_d = param_b * 151;
    char buf_151[128];
    snprintf(buf_151, sizeof(buf_151), "function_%d: %d, %f, %s", 151, local_151, local_151_d, param_c ? param_c : "null");
    return local_151 + (int)local_151_d;
}

typedef struct {
    int field_152;
    long field_152_b;
    double field_152_c;
    char name_152[64];
} StructType152;

int function_152(StructType152 *s, int param_a, double param_b, const char *param_c) {
    int local_152 = param_a * 152;
    double local_152_d = param_b * 152;
    char buf_152[128];
    snprintf(buf_152, sizeof(buf_152), "function_%d: %d, %f, %s", 152, local_152, local_152_d, param_c ? param_c : "null");
    return local_152 + (int)local_152_d;
}

typedef struct {
    int field_153;
    long field_153_b;
    double field_153_c;
    char name_153[64];
} StructType153;

int function_153(StructType153 *s, int param_a, double param_b, const char *param_c) {
    int local_153 = param_a * 153;
    double local_153_d = param_b * 153;
    char buf_153[128];
    snprintf(buf_153, sizeof(buf_153), "function_%d: %d, %f, %s", 153, local_153, local_153_d, param_c ? param_c : "null");
    return local_153 + (int)local_153_d;
}

typedef struct {
    int field_154;
    long field_154_b;
    double field_154_c;
    char name_154[64];
} StructType154;

int function_154(StructType154 *s, int param_a, double param_b, const char *param_c) {
    int local_154 = param_a * 154;
    double local_154_d = param_b * 154;
    char buf_154[128];
    snprintf(buf_154, sizeof(buf_154), "function_%d: %d, %f, %s", 154, local_154, local_154_d, param_c ? param_c : "null");
    return local_154 + (int)local_154_d;
}

typedef struct {
    int field_155;
    long field_155_b;
    double field_155_c;
    char name_155[64];
} StructType155;

int function_155(StructType155 *s, int param_a, double param_b, const char *param_c) {
    int local_155 = param_a * 155;
    double local_155_d = param_b * 155;
    char buf_155[128];
    snprintf(buf_155, sizeof(buf_155), "function_%d: %d, %f, %s", 155, local_155, local_155_d, param_c ? param_c : "null");
    return local_155 + (int)local_155_d;
}

typedef struct {
    int field_156;
    long field_156_b;
    double field_156_c;
    char name_156[64];
} StructType156;

int function_156(StructType156 *s, int param_a, double param_b, const char *param_c) {
    int local_156 = param_a * 156;
    double local_156_d = param_b * 156;
    char buf_156[128];
    snprintf(buf_156, sizeof(buf_156), "function_%d: %d, %f, %s", 156, local_156, local_156_d, param_c ? param_c : "null");
    return local_156 + (int)local_156_d;
}

typedef struct {
    int field_157;
    long field_157_b;
    double field_157_c;
    char name_157[64];
} StructType157;

int function_157(StructType157 *s, int param_a, double param_b, const char *param_c) {
    int local_157 = param_a * 157;
    double local_157_d = param_b * 157;
    char buf_157[128];
    snprintf(buf_157, sizeof(buf_157), "function_%d: %d, %f, %s", 157, local_157, local_157_d, param_c ? param_c : "null");
    return local_157 + (int)local_157_d;
}

typedef struct {
    int field_158;
    long field_158_b;
    double field_158_c;
    char name_158[64];
} StructType158;

int function_158(StructType158 *s, int param_a, double param_b, const char *param_c) {
    int local_158 = param_a * 158;
    double local_158_d = param_b * 158;
    char buf_158[128];
    snprintf(buf_158, sizeof(buf_158), "function_%d: %d, %f, %s", 158, local_158, local_158_d, param_c ? param_c : "null");
    return local_158 + (int)local_158_d;
}

typedef struct {
    int field_159;
    long field_159_b;
    double field_159_c;
    char name_159[64];
} StructType159;

int function_159(StructType159 *s, int param_a, double param_b, const char *param_c) {
    int local_159 = param_a * 159;
    double local_159_d = param_b * 159;
    char buf_159[128];
    snprintf(buf_159, sizeof(buf_159), "function_%d: %d, %f, %s", 159, local_159, local_159_d, param_c ? param_c : "null");
    return local_159 + (int)local_159_d;
}

typedef struct {
    int field_160;
    long field_160_b;
    double field_160_c;
    char name_160[64];
} StructType160;

int function_160(StructType160 *s, int param_a, double param_b, const char *param_c) {
    int local_160 = param_a * 160;
    double local_160_d = param_b * 160;
    char buf_160[128];
    snprintf(buf_160, sizeof(buf_160), "function_%d: %d, %f, %s", 160, local_160, local_160_d, param_c ? param_c : "null");
    return local_160 + (int)local_160_d;
}

typedef struct {
    int field_161;
    long field_161_b;
    double field_161_c;
    char name_161[64];
} StructType161;

int function_161(StructType161 *s, int param_a, double param_b, const char *param_c) {
    int local_161 = param_a * 161;
    double local_161_d = param_b * 161;
    char buf_161[128];
    snprintf(buf_161, sizeof(buf_161), "function_%d: %d, %f, %s", 161, local_161, local_161_d, param_c ? param_c : "null");
    return local_161 + (int)local_161_d;
}

typedef struct {
    int field_162;
    long field_162_b;
    double field_162_c;
    char name_162[64];
} StructType162;

int function_162(StructType162 *s, int param_a, double param_b, const char *param_c) {
    int local_162 = param_a * 162;
    double local_162_d = param_b * 162;
    char buf_162[128];
    snprintf(buf_162, sizeof(buf_162), "function_%d: %d, %f, %s", 162, local_162, local_162_d, param_c ? param_c : "null");
    return local_162 + (int)local_162_d;
}

typedef struct {
    int field_163;
    long field_163_b;
    double field_163_c;
    char name_163[64];
} StructType163;

int function_163(StructType163 *s, int param_a, double param_b, const char *param_c) {
    int local_163 = param_a * 163;
    double local_163_d = param_b * 163;
    char buf_163[128];
    snprintf(buf_163, sizeof(buf_163), "function_%d: %d, %f, %s", 163, local_163, local_163_d, param_c ? param_c : "null");
    return local_163 + (int)local_163_d;
}

typedef struct {
    int field_164;
    long field_164_b;
    double field_164_c;
    char name_164[64];
} StructType164;

int function_164(StructType164 *s, int param_a, double param_b, const char *param_c) {
    int local_164 = param_a * 164;
    double local_164_d = param_b * 164;
    char buf_164[128];
    snprintf(buf_164, sizeof(buf_164), "function_%d: %d, %f, %s", 164, local_164, local_164_d, param_c ? param_c : "null");
    return local_164 + (int)local_164_d;
}

typedef struct {
    int field_165;
    long field_165_b;
    double field_165_c;
    char name_165[64];
} StructType165;

int function_165(StructType165 *s, int param_a, double param_b, const char *param_c) {
    int local_165 = param_a * 165;
    double local_165_d = param_b * 165;
    char buf_165[128];
    snprintf(buf_165, sizeof(buf_165), "function_%d: %d, %f, %s", 165, local_165, local_165_d, param_c ? param_c : "null");
    return local_165 + (int)local_165_d;
}

typedef struct {
    int field_166;
    long field_166_b;
    double field_166_c;
    char name_166[64];
} StructType166;

int function_166(StructType166 *s, int param_a, double param_b, const char *param_c) {
    int local_166 = param_a * 166;
    double local_166_d = param_b * 166;
    char buf_166[128];
    snprintf(buf_166, sizeof(buf_166), "function_%d: %d, %f, %s", 166, local_166, local_166_d, param_c ? param_c : "null");
    return local_166 + (int)local_166_d;
}

typedef struct {
    int field_167;
    long field_167_b;
    double field_167_c;
    char name_167[64];
} StructType167;

int function_167(StructType167 *s, int param_a, double param_b, const char *param_c) {
    int local_167 = param_a * 167;
    double local_167_d = param_b * 167;
    char buf_167[128];
    snprintf(buf_167, sizeof(buf_167), "function_%d: %d, %f, %s", 167, local_167, local_167_d, param_c ? param_c : "null");
    return local_167 + (int)local_167_d;
}

typedef struct {
    int field_168;
    long field_168_b;
    double field_168_c;
    char name_168[64];
} StructType168;

int function_168(StructType168 *s, int param_a, double param_b, const char *param_c) {
    int local_168 = param_a * 168;
    double local_168_d = param_b * 168;
    char buf_168[128];
    snprintf(buf_168, sizeof(buf_168), "function_%d: %d, %f, %s", 168, local_168, local_168_d, param_c ? param_c : "null");
    return local_168 + (int)local_168_d;
}

typedef struct {
    int field_169;
    long field_169_b;
    double field_169_c;
    char name_169[64];
} StructType169;

int function_169(StructType169 *s, int param_a, double param_b, const char *param_c) {
    int local_169 = param_a * 169;
    double local_169_d = param_b * 169;
    char buf_169[128];
    snprintf(buf_169, sizeof(buf_169), "function_%d: %d, %f, %s", 169, local_169, local_169_d, param_c ? param_c : "null");
    return local_169 + (int)local_169_d;
}

typedef struct {
    int field_170;
    long field_170_b;
    double field_170_c;
    char name_170[64];
} StructType170;

int function_170(StructType170 *s, int param_a, double param_b, const char *param_c) {
    int local_170 = param_a * 170;
    double local_170_d = param_b * 170;
    char buf_170[128];
    snprintf(buf_170, sizeof(buf_170), "function_%d: %d, %f, %s", 170, local_170, local_170_d, param_c ? param_c : "null");
    return local_170 + (int)local_170_d;
}

typedef struct {
    int field_171;
    long field_171_b;
    double field_171_c;
    char name_171[64];
} StructType171;

int function_171(StructType171 *s, int param_a, double param_b, const char *param_c) {
    int local_171 = param_a * 171;
    double local_171_d = param_b * 171;
    char buf_171[128];
    snprintf(buf_171, sizeof(buf_171), "function_%d: %d, %f, %s", 171, local_171, local_171_d, param_c ? param_c : "null");
    return local_171 + (int)local_171_d;
}

typedef struct {
    int field_172;
    long field_172_b;
    double field_172_c;
    char name_172[64];
} StructType172;

int function_172(StructType172 *s, int param_a, double param_b, const char *param_c) {
    int local_172 = param_a * 172;
    double local_172_d = param_b * 172;
    char buf_172[128];
    snprintf(buf_172, sizeof(buf_172), "function_%d: %d, %f, %s", 172, local_172, local_172_d, param_c ? param_c : "null");
    return local_172 + (int)local_172_d;
}

typedef struct {
    int field_173;
    long field_173_b;
    double field_173_c;
    char name_173[64];
} StructType173;

int function_173(StructType173 *s, int param_a, double param_b, const char *param_c) {
    int local_173 = param_a * 173;
    double local_173_d = param_b * 173;
    char buf_173[128];
    snprintf(buf_173, sizeof(buf_173), "function_%d: %d, %f, %s", 173, local_173, local_173_d, param_c ? param_c : "null");
    return local_173 + (int)local_173_d;
}

typedef struct {
    int field_174;
    long field_174_b;
    double field_174_c;
    char name_174[64];
} StructType174;

int function_174(StructType174 *s, int param_a, double param_b, const char *param_c) {
    int local_174 = param_a * 174;
    double local_174_d = param_b * 174;
    char buf_174[128];
    snprintf(buf_174, sizeof(buf_174), "function_%d: %d, %f, %s", 174, local_174, local_174_d, param_c ? param_c : "null");
    return local_174 + (int)local_174_d;
}

typedef struct {
    int field_175;
    long field_175_b;
    double field_175_c;
    char name_175[64];
} StructType175;

int function_175(StructType175 *s, int param_a, double param_b, const char *param_c) {
    int local_175 = param_a * 175;
    double local_175_d = param_b * 175;
    char buf_175[128];
    snprintf(buf_175, sizeof(buf_175), "function_%d: %d, %f, %s", 175, local_175, local_175_d, param_c ? param_c : "null");
    return local_175 + (int)local_175_d;
}

typedef struct {
    int field_176;
    long field_176_b;
    double field_176_c;
    char name_176[64];
} StructType176;

int function_176(StructType176 *s, int param_a, double param_b, const char *param_c) {
    int local_176 = param_a * 176;
    double local_176_d = param_b * 176;
    char buf_176[128];
    snprintf(buf_176, sizeof(buf_176), "function_%d: %d, %f, %s", 176, local_176, local_176_d, param_c ? param_c : "null");
    return local_176 + (int)local_176_d;
}

typedef struct {
    int field_177;
    long field_177_b;
    double field_177_c;
    char name_177[64];
} StructType177;

int function_177(StructType177 *s, int param_a, double param_b, const char *param_c) {
    int local_177 = param_a * 177;
    double local_177_d = param_b * 177;
    char buf_177[128];
    snprintf(buf_177, sizeof(buf_177), "function_%d: %d, %f, %s", 177, local_177, local_177_d, param_c ? param_c : "null");
    return local_177 + (int)local_177_d;
}

typedef struct {
    int field_178;
    long field_178_b;
    double field_178_c;
    char name_178[64];
} StructType178;

int function_178(StructType178 *s, int param_a, double param_b, const char *param_c) {
    int local_178 = param_a * 178;
    double local_178_d = param_b * 178;
    char buf_178[128];
    snprintf(buf_178, sizeof(buf_178), "function_%d: %d, %f, %s", 178, local_178, local_178_d, param_c ? param_c : "null");
    return local_178 + (int)local_178_d;
}

typedef struct {
    int field_179;
    long field_179_b;
    double field_179_c;
    char name_179[64];
} StructType179;

int function_179(StructType179 *s, int param_a, double param_b, const char *param_c) {
    int local_179 = param_a * 179;
    double local_179_d = param_b * 179;
    char buf_179[128];
    snprintf(buf_179, sizeof(buf_179), "function_%d: %d, %f, %s", 179, local_179, local_179_d, param_c ? param_c : "null");
    return local_179 + (int)local_179_d;
}

typedef struct {
    int field_180;
    long field_180_b;
    double field_180_c;
    char name_180[64];
} StructType180;

int function_180(StructType180 *s, int param_a, double param_b, const char *param_c) {
    int local_180 = param_a * 180;
    double local_180_d = param_b * 180;
    char buf_180[128];
    snprintf(buf_180, sizeof(buf_180), "function_%d: %d, %f, %s", 180, local_180, local_180_d, param_c ? param_c : "null");
    return local_180 + (int)local_180_d;
}

typedef struct {
    int field_181;
    long field_181_b;
    double field_181_c;
    char name_181[64];
} StructType181;

int function_181(StructType181 *s, int param_a, double param_b, const char *param_c) {
    int local_181 = param_a * 181;
    double local_181_d = param_b * 181;
    char buf_181[128];
    snprintf(buf_181, sizeof(buf_181), "function_%d: %d, %f, %s", 181, local_181, local_181_d, param_c ? param_c : "null");
    return local_181 + (int)local_181_d;
}

typedef struct {
    int field_182;
    long field_182_b;
    double field_182_c;
    char name_182[64];
} StructType182;

int function_182(StructType182 *s, int param_a, double param_b, const char *param_c) {
    int local_182 = param_a * 182;
    double local_182_d = param_b * 182;
    char buf_182[128];
    snprintf(buf_182, sizeof(buf_182), "function_%d: %d, %f, %s", 182, local_182, local_182_d, param_c ? param_c : "null");
    return local_182 + (int)local_182_d;
}

typedef struct {
    int field_183;
    long field_183_b;
    double field_183_c;
    char name_183[64];
} StructType183;

int function_183(StructType183 *s, int param_a, double param_b, const char *param_c) {
    int local_183 = param_a * 183;
    double local_183_d = param_b * 183;
    char buf_183[128];
    snprintf(buf_183, sizeof(buf_183), "function_%d: %d, %f, %s", 183, local_183, local_183_d, param_c ? param_c : "null");
    return local_183 + (int)local_183_d;
}

typedef struct {
    int field_184;
    long field_184_b;
    double field_184_c;
    char name_184[64];
} StructType184;

int function_184(StructType184 *s, int param_a, double param_b, const char *param_c) {
    int local_184 = param_a * 184;
    double local_184_d = param_b * 184;
    char buf_184[128];
    snprintf(buf_184, sizeof(buf_184), "function_%d: %d, %f, %s", 184, local_184, local_184_d, param_c ? param_c : "null");
    return local_184 + (int)local_184_d;
}

typedef struct {
    int field_185;
    long field_185_b;
    double field_185_c;
    char name_185[64];
} StructType185;

int function_185(StructType185 *s, int param_a, double param_b, const char *param_c) {
    int local_185 = param_a * 185;
    double local_185_d = param_b * 185;
    char buf_185[128];
    snprintf(buf_185, sizeof(buf_185), "function_%d: %d, %f, %s", 185, local_185, local_185_d, param_c ? param_c : "null");
    return local_185 + (int)local_185_d;
}

typedef struct {
    int field_186;
    long field_186_b;
    double field_186_c;
    char name_186[64];
} StructType186;

int function_186(StructType186 *s, int param_a, double param_b, const char *param_c) {
    int local_186 = param_a * 186;
    double local_186_d = param_b * 186;
    char buf_186[128];
    snprintf(buf_186, sizeof(buf_186), "function_%d: %d, %f, %s", 186, local_186, local_186_d, param_c ? param_c : "null");
    return local_186 + (int)local_186_d;
}

typedef struct {
    int field_187;
    long field_187_b;
    double field_187_c;
    char name_187[64];
} StructType187;

int function_187(StructType187 *s, int param_a, double param_b, const char *param_c) {
    int local_187 = param_a * 187;
    double local_187_d = param_b * 187;
    char buf_187[128];
    snprintf(buf_187, sizeof(buf_187), "function_%d: %d, %f, %s", 187, local_187, local_187_d, param_c ? param_c : "null");
    return local_187 + (int)local_187_d;
}

typedef struct {
    int field_188;
    long field_188_b;
    double field_188_c;
    char name_188[64];
} StructType188;

int function_188(StructType188 *s, int param_a, double param_b, const char *param_c) {
    int local_188 = param_a * 188;
    double local_188_d = param_b * 188;
    char buf_188[128];
    snprintf(buf_188, sizeof(buf_188), "function_%d: %d, %f, %s", 188, local_188, local_188_d, param_c ? param_c : "null");
    return local_188 + (int)local_188_d;
}

typedef struct {
    int field_189;
    long field_189_b;
    double field_189_c;
    char name_189[64];
} StructType189;

int function_189(StructType189 *s, int param_a, double param_b, const char *param_c) {
    int local_189 = param_a * 189;
    double local_189_d = param_b * 189;
    char buf_189[128];
    snprintf(buf_189, sizeof(buf_189), "function_%d: %d, %f, %s", 189, local_189, local_189_d, param_c ? param_c : "null");
    return local_189 + (int)local_189_d;
}

typedef struct {
    int field_190;
    long field_190_b;
    double field_190_c;
    char name_190[64];
} StructType190;

int function_190(StructType190 *s, int param_a, double param_b, const char *param_c) {
    int local_190 = param_a * 190;
    double local_190_d = param_b * 190;
    char buf_190[128];
    snprintf(buf_190, sizeof(buf_190), "function_%d: %d, %f, %s", 190, local_190, local_190_d, param_c ? param_c : "null");
    return local_190 + (int)local_190_d;
}

typedef struct {
    int field_191;
    long field_191_b;
    double field_191_c;
    char name_191[64];
} StructType191;

int function_191(StructType191 *s, int param_a, double param_b, const char *param_c) {
    int local_191 = param_a * 191;
    double local_191_d = param_b * 191;
    char buf_191[128];
    snprintf(buf_191, sizeof(buf_191), "function_%d: %d, %f, %s", 191, local_191, local_191_d, param_c ? param_c : "null");
    return local_191 + (int)local_191_d;
}

typedef struct {
    int field_192;
    long field_192_b;
    double field_192_c;
    char name_192[64];
} StructType192;

int function_192(StructType192 *s, int param_a, double param_b, const char *param_c) {
    int local_192 = param_a * 192;
    double local_192_d = param_b * 192;
    char buf_192[128];
    snprintf(buf_192, sizeof(buf_192), "function_%d: %d, %f, %s", 192, local_192, local_192_d, param_c ? param_c : "null");
    return local_192 + (int)local_192_d;
}

typedef struct {
    int field_193;
    long field_193_b;
    double field_193_c;
    char name_193[64];
} StructType193;

int function_193(StructType193 *s, int param_a, double param_b, const char *param_c) {
    int local_193 = param_a * 193;
    double local_193_d = param_b * 193;
    char buf_193[128];
    snprintf(buf_193, sizeof(buf_193), "function_%d: %d, %f, %s", 193, local_193, local_193_d, param_c ? param_c : "null");
    return local_193 + (int)local_193_d;
}

typedef struct {
    int field_194;
    long field_194_b;
    double field_194_c;
    char name_194[64];
} StructType194;

int function_194(StructType194 *s, int param_a, double param_b, const char *param_c) {
    int local_194 = param_a * 194;
    double local_194_d = param_b * 194;
    char buf_194[128];
    snprintf(buf_194, sizeof(buf_194), "function_%d: %d, %f, %s", 194, local_194, local_194_d, param_c ? param_c : "null");
    return local_194 + (int)local_194_d;
}

typedef struct {
    int field_195;
    long field_195_b;
    double field_195_c;
    char name_195[64];
} StructType195;

int function_195(StructType195 *s, int param_a, double param_b, const char *param_c) {
    int local_195 = param_a * 195;
    double local_195_d = param_b * 195;
    char buf_195[128];
    snprintf(buf_195, sizeof(buf_195), "function_%d: %d, %f, %s", 195, local_195, local_195_d, param_c ? param_c : "null");
    return local_195 + (int)local_195_d;
}

typedef struct {
    int field_196;
    long field_196_b;
    double field_196_c;
    char name_196[64];
} StructType196;

int function_196(StructType196 *s, int param_a, double param_b, const char *param_c) {
    int local_196 = param_a * 196;
    double local_196_d = param_b * 196;
    char buf_196[128];
    snprintf(buf_196, sizeof(buf_196), "function_%d: %d, %f, %s", 196, local_196, local_196_d, param_c ? param_c : "null");
    return local_196 + (int)local_196_d;
}

typedef struct {
    int field_197;
    long field_197_b;
    double field_197_c;
    char name_197[64];
} StructType197;

int function_197(StructType197 *s, int param_a, double param_b, const char *param_c) {
    int local_197 = param_a * 197;
    double local_197_d = param_b * 197;
    char buf_197[128];
    snprintf(buf_197, sizeof(buf_197), "function_%d: %d, %f, %s", 197, local_197, local_197_d, param_c ? param_c : "null");
    return local_197 + (int)local_197_d;
}

typedef struct {
    int field_198;
    long field_198_b;
    double field_198_c;
    char name_198[64];
} StructType198;

int function_198(StructType198 *s, int param_a, double param_b, const char *param_c) {
    int local_198 = param_a * 198;
    double local_198_d = param_b * 198;
    char buf_198[128];
    snprintf(buf_198, sizeof(buf_198), "function_%d: %d, %f, %s", 198, local_198, local_198_d, param_c ? param_c : "null");
    return local_198 + (int)local_198_d;
}

typedef struct {
    int field_199;
    long field_199_b;
    double field_199_c;
    char name_199[64];
} StructType199;

int function_199(StructType199 *s, int param_a, double param_b, const char *param_c) {
    int local_199 = param_a * 199;
    double local_199_d = param_b * 199;
    char buf_199[128];
    snprintf(buf_199, sizeof(buf_199), "function_%d: %d, %f, %s", 199, local_199, local_199_d, param_c ? param_c : "null");
    return local_199 + (int)local_199_d;
}

typedef struct {
    int field_200;
    long field_200_b;
    double field_200_c;
    char name_200[64];
} StructType200;

int function_200(StructType200 *s, int param_a, double param_b, const char *param_c) {
    int local_200 = param_a * 200;
    double local_200_d = param_b * 200;
    char buf_200[128];
    snprintf(buf_200, sizeof(buf_200), "function_%d: %d, %f, %s", 200, local_200, local_200_d, param_c ? param_c : "null");
    return local_200 + (int)local_200_d;
}

typedef struct {
    int field_201;
    long field_201_b;
    double field_201_c;
    char name_201[64];
} StructType201;

int function_201(StructType201 *s, int param_a, double param_b, const char *param_c) {
    int local_201 = param_a * 201;
    double local_201_d = param_b * 201;
    char buf_201[128];
    snprintf(buf_201, sizeof(buf_201), "function_%d: %d, %f, %s", 201, local_201, local_201_d, param_c ? param_c : "null");
    return local_201 + (int)local_201_d;
}

typedef struct {
    int field_202;
    long field_202_b;
    double field_202_c;
    char name_202[64];
} StructType202;

int function_202(StructType202 *s, int param_a, double param_b, const char *param_c) {
    int local_202 = param_a * 202;
    double local_202_d = param_b * 202;
    char buf_202[128];
    snprintf(buf_202, sizeof(buf_202), "function_%d: %d, %f, %s", 202, local_202, local_202_d, param_c ? param_c : "null");
    return local_202 + (int)local_202_d;
}

typedef struct {
    int field_203;
    long field_203_b;
    double field_203_c;
    char name_203[64];
} StructType203;

int function_203(StructType203 *s, int param_a, double param_b, const char *param_c) {
    int local_203 = param_a * 203;
    double local_203_d = param_b * 203;
    char buf_203[128];
    snprintf(buf_203, sizeof(buf_203), "function_%d: %d, %f, %s", 203, local_203, local_203_d, param_c ? param_c : "null");
    return local_203 + (int)local_203_d;
}

typedef struct {
    int field_204;
    long field_204_b;
    double field_204_c;
    char name_204[64];
} StructType204;

int function_204(StructType204 *s, int param_a, double param_b, const char *param_c) {
    int local_204 = param_a * 204;
    double local_204_d = param_b * 204;
    char buf_204[128];
    snprintf(buf_204, sizeof(buf_204), "function_%d: %d, %f, %s", 204, local_204, local_204_d, param_c ? param_c : "null");
    return local_204 + (int)local_204_d;
}

typedef struct {
    int field_205;
    long field_205_b;
    double field_205_c;
    char name_205[64];
} StructType205;

int function_205(StructType205 *s, int param_a, double param_b, const char *param_c) {
    int local_205 = param_a * 205;
    double local_205_d = param_b * 205;
    char buf_205[128];
    snprintf(buf_205, sizeof(buf_205), "function_%d: %d, %f, %s", 205, local_205, local_205_d, param_c ? param_c : "null");
    return local_205 + (int)local_205_d;
}

typedef struct {
    int field_206;
    long field_206_b;
    double field_206_c;
    char name_206[64];
} StructType206;

int function_206(StructType206 *s, int param_a, double param_b, const char *param_c) {
    int local_206 = param_a * 206;
    double local_206_d = param_b * 206;
    char buf_206[128];
    snprintf(buf_206, sizeof(buf_206), "function_%d: %d, %f, %s", 206, local_206, local_206_d, param_c ? param_c : "null");
    return local_206 + (int)local_206_d;
}

typedef struct {
    int field_207;
    long field_207_b;
    double field_207_c;
    char name_207[64];
} StructType207;

int function_207(StructType207 *s, int param_a, double param_b, const char *param_c) {
    int local_207 = param_a * 207;
    double local_207_d = param_b * 207;
    char buf_207[128];
    snprintf(buf_207, sizeof(buf_207), "function_%d: %d, %f, %s", 207, local_207, local_207_d, param_c ? param_c : "null");
    return local_207 + (int)local_207_d;
}

typedef struct {
    int field_208;
    long field_208_b;
    double field_208_c;
    char name_208[64];
} StructType208;

int function_208(StructType208 *s, int param_a, double param_b, const char *param_c) {
    int local_208 = param_a * 208;
    double local_208_d = param_b * 208;
    char buf_208[128];
    snprintf(buf_208, sizeof(buf_208), "function_%d: %d, %f, %s", 208, local_208, local_208_d, param_c ? param_c : "null");
    return local_208 + (int)local_208_d;
}

typedef struct {
    int field_209;
    long field_209_b;
    double field_209_c;
    char name_209[64];
} StructType209;

int function_209(StructType209 *s, int param_a, double param_b, const char *param_c) {
    int local_209 = param_a * 209;
    double local_209_d = param_b * 209;
    char buf_209[128];
    snprintf(buf_209, sizeof(buf_209), "function_%d: %d, %f, %s", 209, local_209, local_209_d, param_c ? param_c : "null");
    return local_209 + (int)local_209_d;
}

typedef struct {
    int field_210;
    long field_210_b;
    double field_210_c;
    char name_210[64];
} StructType210;

int function_210(StructType210 *s, int param_a, double param_b, const char *param_c) {
    int local_210 = param_a * 210;
    double local_210_d = param_b * 210;
    char buf_210[128];
    snprintf(buf_210, sizeof(buf_210), "function_%d: %d, %f, %s", 210, local_210, local_210_d, param_c ? param_c : "null");
    return local_210 + (int)local_210_d;
}

typedef struct {
    int field_211;
    long field_211_b;
    double field_211_c;
    char name_211[64];
} StructType211;

int function_211(StructType211 *s, int param_a, double param_b, const char *param_c) {
    int local_211 = param_a * 211;
    double local_211_d = param_b * 211;
    char buf_211[128];
    snprintf(buf_211, sizeof(buf_211), "function_%d: %d, %f, %s", 211, local_211, local_211_d, param_c ? param_c : "null");
    return local_211 + (int)local_211_d;
}

typedef struct {
    int field_212;
    long field_212_b;
    double field_212_c;
    char name_212[64];
} StructType212;

int function_212(StructType212 *s, int param_a, double param_b, const char *param_c) {
    int local_212 = param_a * 212;
    double local_212_d = param_b * 212;
    char buf_212[128];
    snprintf(buf_212, sizeof(buf_212), "function_%d: %d, %f, %s", 212, local_212, local_212_d, param_c ? param_c : "null");
    return local_212 + (int)local_212_d;
}

typedef struct {
    int field_213;
    long field_213_b;
    double field_213_c;
    char name_213[64];
} StructType213;

int function_213(StructType213 *s, int param_a, double param_b, const char *param_c) {
    int local_213 = param_a * 213;
    double local_213_d = param_b * 213;
    char buf_213[128];
    snprintf(buf_213, sizeof(buf_213), "function_%d: %d, %f, %s", 213, local_213, local_213_d, param_c ? param_c : "null");
    return local_213 + (int)local_213_d;
}

typedef struct {
    int field_214;
    long field_214_b;
    double field_214_c;
    char name_214[64];
} StructType214;

int function_214(StructType214 *s, int param_a, double param_b, const char *param_c) {
    int local_214 = param_a * 214;
    double local_214_d = param_b * 214;
    char buf_214[128];
    snprintf(buf_214, sizeof(buf_214), "function_%d: %d, %f, %s", 214, local_214, local_214_d, param_c ? param_c : "null");
    return local_214 + (int)local_214_d;
}

typedef struct {
    int field_215;
    long field_215_b;
    double field_215_c;
    char name_215[64];
} StructType215;

int function_215(StructType215 *s, int param_a, double param_b, const char *param_c) {
    int local_215 = param_a * 215;
    double local_215_d = param_b * 215;
    char buf_215[128];
    snprintf(buf_215, sizeof(buf_215), "function_%d: %d, %f, %s", 215, local_215, local_215_d, param_c ? param_c : "null");
    return local_215 + (int)local_215_d;
}

typedef struct {
    int field_216;
    long field_216_b;
    double field_216_c;
    char name_216[64];
} StructType216;

int function_216(StructType216 *s, int param_a, double param_b, const char *param_c) {
    int local_216 = param_a * 216;
    double local_216_d = param_b * 216;
    char buf_216[128];
    snprintf(buf_216, sizeof(buf_216), "function_%d: %d, %f, %s", 216, local_216, local_216_d, param_c ? param_c : "null");
    return local_216 + (int)local_216_d;
}

typedef struct {
    int field_217;
    long field_217_b;
    double field_217_c;
    char name_217[64];
} StructType217;

int function_217(StructType217 *s, int param_a, double param_b, const char *param_c) {
    int local_217 = param_a * 217;
    double local_217_d = param_b * 217;
    char buf_217[128];
    snprintf(buf_217, sizeof(buf_217), "function_%d: %d, %f, %s", 217, local_217, local_217_d, param_c ? param_c : "null");
    return local_217 + (int)local_217_d;
}

typedef struct {
    int field_218;
    long field_218_b;
    double field_218_c;
    char name_218[64];
} StructType218;

int function_218(StructType218 *s, int param_a, double param_b, const char *param_c) {
    int local_218 = param_a * 218;
    double local_218_d = param_b * 218;
    char buf_218[128];
    snprintf(buf_218, sizeof(buf_218), "function_%d: %d, %f, %s", 218, local_218, local_218_d, param_c ? param_c : "null");
    return local_218 + (int)local_218_d;
}

typedef struct {
    int field_219;
    long field_219_b;
    double field_219_c;
    char name_219[64];
} StructType219;

int function_219(StructType219 *s, int param_a, double param_b, const char *param_c) {
    int local_219 = param_a * 219;
    double local_219_d = param_b * 219;
    char buf_219[128];
    snprintf(buf_219, sizeof(buf_219), "function_%d: %d, %f, %s", 219, local_219, local_219_d, param_c ? param_c : "null");
    return local_219 + (int)local_219_d;
}

typedef struct {
    int field_220;
    long field_220_b;
    double field_220_c;
    char name_220[64];
} StructType220;

int function_220(StructType220 *s, int param_a, double param_b, const char *param_c) {
    int local_220 = param_a * 220;
    double local_220_d = param_b * 220;
    char buf_220[128];
    snprintf(buf_220, sizeof(buf_220), "function_%d: %d, %f, %s", 220, local_220, local_220_d, param_c ? param_c : "null");
    return local_220 + (int)local_220_d;
}

typedef struct {
    int field_221;
    long field_221_b;
    double field_221_c;
    char name_221[64];
} StructType221;

int function_221(StructType221 *s, int param_a, double param_b, const char *param_c) {
    int local_221 = param_a * 221;
    double local_221_d = param_b * 221;
    char buf_221[128];
    snprintf(buf_221, sizeof(buf_221), "function_%d: %d, %f, %s", 221, local_221, local_221_d, param_c ? param_c : "null");
    return local_221 + (int)local_221_d;
}

typedef struct {
    int field_222;
    long field_222_b;
    double field_222_c;
    char name_222[64];
} StructType222;

int function_222(StructType222 *s, int param_a, double param_b, const char *param_c) {
    int local_222 = param_a * 222;
    double local_222_d = param_b * 222;
    char buf_222[128];
    snprintf(buf_222, sizeof(buf_222), "function_%d: %d, %f, %s", 222, local_222, local_222_d, param_c ? param_c : "null");
    return local_222 + (int)local_222_d;
}

typedef struct {
    int field_223;
    long field_223_b;
    double field_223_c;
    char name_223[64];
} StructType223;

int function_223(StructType223 *s, int param_a, double param_b, const char *param_c) {
    int local_223 = param_a * 223;
    double local_223_d = param_b * 223;
    char buf_223[128];
    snprintf(buf_223, sizeof(buf_223), "function_%d: %d, %f, %s", 223, local_223, local_223_d, param_c ? param_c : "null");
    return local_223 + (int)local_223_d;
}

typedef struct {
    int field_224;
    long field_224_b;
    double field_224_c;
    char name_224[64];
} StructType224;

int function_224(StructType224 *s, int param_a, double param_b, const char *param_c) {
    int local_224 = param_a * 224;
    double local_224_d = param_b * 224;
    char buf_224[128];
    snprintf(buf_224, sizeof(buf_224), "function_%d: %d, %f, %s", 224, local_224, local_224_d, param_c ? param_c : "null");
    return local_224 + (int)local_224_d;
}

typedef struct {
    int field_225;
    long field_225_b;
    double field_225_c;
    char name_225[64];
} StructType225;

int function_225(StructType225 *s, int param_a, double param_b, const char *param_c) {
    int local_225 = param_a * 225;
    double local_225_d = param_b * 225;
    char buf_225[128];
    snprintf(buf_225, sizeof(buf_225), "function_%d: %d, %f, %s", 225, local_225, local_225_d, param_c ? param_c : "null");
    return local_225 + (int)local_225_d;
}

typedef struct {
    int field_226;
    long field_226_b;
    double field_226_c;
    char name_226[64];
} StructType226;

int function_226(StructType226 *s, int param_a, double param_b, const char *param_c) {
    int local_226 = param_a * 226;
    double local_226_d = param_b * 226;
    char buf_226[128];
    snprintf(buf_226, sizeof(buf_226), "function_%d: %d, %f, %s", 226, local_226, local_226_d, param_c ? param_c : "null");
    return local_226 + (int)local_226_d;
}

typedef struct {
    int field_227;
    long field_227_b;
    double field_227_c;
    char name_227[64];
} StructType227;

int function_227(StructType227 *s, int param_a, double param_b, const char *param_c) {
    int local_227 = param_a * 227;
    double local_227_d = param_b * 227;
    char buf_227[128];
    snprintf(buf_227, sizeof(buf_227), "function_%d: %d, %f, %s", 227, local_227, local_227_d, param_c ? param_c : "null");
    return local_227 + (int)local_227_d;
}

typedef struct {
    int field_228;
    long field_228_b;
    double field_228_c;
    char name_228[64];
} StructType228;

int function_228(StructType228 *s, int param_a, double param_b, const char *param_c) {
    int local_228 = param_a * 228;
    double local_228_d = param_b * 228;
    char buf_228[128];
    snprintf(buf_228, sizeof(buf_228), "function_%d: %d, %f, %s", 228, local_228, local_228_d, param_c ? param_c : "null");
    return local_228 + (int)local_228_d;
}

typedef struct {
    int field_229;
    long field_229_b;
    double field_229_c;
    char name_229[64];
} StructType229;

int function_229(StructType229 *s, int param_a, double param_b, const char *param_c) {
    int local_229 = param_a * 229;
    double local_229_d = param_b * 229;
    char buf_229[128];
    snprintf(buf_229, sizeof(buf_229), "function_%d: %d, %f, %s", 229, local_229, local_229_d, param_c ? param_c : "null");
    return local_229 + (int)local_229_d;
}

typedef struct {
    int field_230;
    long field_230_b;
    double field_230_c;
    char name_230[64];
} StructType230;

int function_230(StructType230 *s, int param_a, double param_b, const char *param_c) {
    int local_230 = param_a * 230;
    double local_230_d = param_b * 230;
    char buf_230[128];
    snprintf(buf_230, sizeof(buf_230), "function_%d: %d, %f, %s", 230, local_230, local_230_d, param_c ? param_c : "null");
    return local_230 + (int)local_230_d;
}

typedef struct {
    int field_231;
    long field_231_b;
    double field_231_c;
    char name_231[64];
} StructType231;

int function_231(StructType231 *s, int param_a, double param_b, const char *param_c) {
    int local_231 = param_a * 231;
    double local_231_d = param_b * 231;
    char buf_231[128];
    snprintf(buf_231, sizeof(buf_231), "function_%d: %d, %f, %s", 231, local_231, local_231_d, param_c ? param_c : "null");
    return local_231 + (int)local_231_d;
}

typedef struct {
    int field_232;
    long field_232_b;
    double field_232_c;
    char name_232[64];
} StructType232;

int function_232(StructType232 *s, int param_a, double param_b, const char *param_c) {
    int local_232 = param_a * 232;
    double local_232_d = param_b * 232;
    char buf_232[128];
    snprintf(buf_232, sizeof(buf_232), "function_%d: %d, %f, %s", 232, local_232, local_232_d, param_c ? param_c : "null");
    return local_232 + (int)local_232_d;
}

typedef struct {
    int field_233;
    long field_233_b;
    double field_233_c;
    char name_233[64];
} StructType233;

int function_233(StructType233 *s, int param_a, double param_b, const char *param_c) {
    int local_233 = param_a * 233;
    double local_233_d = param_b * 233;
    char buf_233[128];
    snprintf(buf_233, sizeof(buf_233), "function_%d: %d, %f, %s", 233, local_233, local_233_d, param_c ? param_c : "null");
    return local_233 + (int)local_233_d;
}

typedef struct {
    int field_234;
    long field_234_b;
    double field_234_c;
    char name_234[64];
} StructType234;

int function_234(StructType234 *s, int param_a, double param_b, const char *param_c) {
    int local_234 = param_a * 234;
    double local_234_d = param_b * 234;
    char buf_234[128];
    snprintf(buf_234, sizeof(buf_234), "function_%d: %d, %f, %s", 234, local_234, local_234_d, param_c ? param_c : "null");
    return local_234 + (int)local_234_d;
}

typedef struct {
    int field_235;
    long field_235_b;
    double field_235_c;
    char name_235[64];
} StructType235;

int function_235(StructType235 *s, int param_a, double param_b, const char *param_c) {
    int local_235 = param_a * 235;
    double local_235_d = param_b * 235;
    char buf_235[128];
    snprintf(buf_235, sizeof(buf_235), "function_%d: %d, %f, %s", 235, local_235, local_235_d, param_c ? param_c : "null");
    return local_235 + (int)local_235_d;
}

typedef struct {
    int field_236;
    long field_236_b;
    double field_236_c;
    char name_236[64];
} StructType236;

int function_236(StructType236 *s, int param_a, double param_b, const char *param_c) {
    int local_236 = param_a * 236;
    double local_236_d = param_b * 236;
    char buf_236[128];
    snprintf(buf_236, sizeof(buf_236), "function_%d: %d, %f, %s", 236, local_236, local_236_d, param_c ? param_c : "null");
    return local_236 + (int)local_236_d;
}

typedef struct {
    int field_237;
    long field_237_b;
    double field_237_c;
    char name_237[64];
} StructType237;

int function_237(StructType237 *s, int param_a, double param_b, const char *param_c) {
    int local_237 = param_a * 237;
    double local_237_d = param_b * 237;
    char buf_237[128];
    snprintf(buf_237, sizeof(buf_237), "function_%d: %d, %f, %s", 237, local_237, local_237_d, param_c ? param_c : "null");
    return local_237 + (int)local_237_d;
}

typedef struct {
    int field_238;
    long field_238_b;
    double field_238_c;
    char name_238[64];
} StructType238;

int function_238(StructType238 *s, int param_a, double param_b, const char *param_c) {
    int local_238 = param_a * 238;
    double local_238_d = param_b * 238;
    char buf_238[128];
    snprintf(buf_238, sizeof(buf_238), "function_%d: %d, %f, %s", 238, local_238, local_238_d, param_c ? param_c : "null");
    return local_238 + (int)local_238_d;
}

typedef struct {
    int field_239;
    long field_239_b;
    double field_239_c;
    char name_239[64];
} StructType239;

int function_239(StructType239 *s, int param_a, double param_b, const char *param_c) {
    int local_239 = param_a * 239;
    double local_239_d = param_b * 239;
    char buf_239[128];
    snprintf(buf_239, sizeof(buf_239), "function_%d: %d, %f, %s", 239, local_239, local_239_d, param_c ? param_c : "null");
    return local_239 + (int)local_239_d;
}

typedef struct {
    int field_240;
    long field_240_b;
    double field_240_c;
    char name_240[64];
} StructType240;

int function_240(StructType240 *s, int param_a, double param_b, const char *param_c) {
    int local_240 = param_a * 240;
    double local_240_d = param_b * 240;
    char buf_240[128];
    snprintf(buf_240, sizeof(buf_240), "function_%d: %d, %f, %s", 240, local_240, local_240_d, param_c ? param_c : "null");
    return local_240 + (int)local_240_d;
}

typedef struct {
    int field_241;
    long field_241_b;
    double field_241_c;
    char name_241[64];
} StructType241;

int function_241(StructType241 *s, int param_a, double param_b, const char *param_c) {
    int local_241 = param_a * 241;
    double local_241_d = param_b * 241;
    char buf_241[128];
    snprintf(buf_241, sizeof(buf_241), "function_%d: %d, %f, %s", 241, local_241, local_241_d, param_c ? param_c : "null");
    return local_241 + (int)local_241_d;
}

typedef struct {
    int field_242;
    long field_242_b;
    double field_242_c;
    char name_242[64];
} StructType242;

int function_242(StructType242 *s, int param_a, double param_b, const char *param_c) {
    int local_242 = param_a * 242;
    double local_242_d = param_b * 242;
    char buf_242[128];
    snprintf(buf_242, sizeof(buf_242), "function_%d: %d, %f, %s", 242, local_242, local_242_d, param_c ? param_c : "null");
    return local_242 + (int)local_242_d;
}

typedef struct {
    int field_243;
    long field_243_b;
    double field_243_c;
    char name_243[64];
} StructType243;

int function_243(StructType243 *s, int param_a, double param_b, const char *param_c) {
    int local_243 = param_a * 243;
    double local_243_d = param_b * 243;
    char buf_243[128];
    snprintf(buf_243, sizeof(buf_243), "function_%d: %d, %f, %s", 243, local_243, local_243_d, param_c ? param_c : "null");
    return local_243 + (int)local_243_d;
}

typedef struct {
    int field_244;
    long field_244_b;
    double field_244_c;
    char name_244[64];
} StructType244;

int function_244(StructType244 *s, int param_a, double param_b, const char *param_c) {
    int local_244 = param_a * 244;
    double local_244_d = param_b * 244;
    char buf_244[128];
    snprintf(buf_244, sizeof(buf_244), "function_%d: %d, %f, %s", 244, local_244, local_244_d, param_c ? param_c : "null");
    return local_244 + (int)local_244_d;
}

typedef struct {
    int field_245;
    long field_245_b;
    double field_245_c;
    char name_245[64];
} StructType245;

int function_245(StructType245 *s, int param_a, double param_b, const char *param_c) {
    int local_245 = param_a * 245;
    double local_245_d = param_b * 245;
    char buf_245[128];
    snprintf(buf_245, sizeof(buf_245), "function_%d: %d, %f, %s", 245, local_245, local_245_d, param_c ? param_c : "null");
    return local_245 + (int)local_245_d;
}

typedef struct {
    int field_246;
    long field_246_b;
    double field_246_c;
    char name_246[64];
} StructType246;

int function_246(StructType246 *s, int param_a, double param_b, const char *param_c) {
    int local_246 = param_a * 246;
    double local_246_d = param_b * 246;
    char buf_246[128];
    snprintf(buf_246, sizeof(buf_246), "function_%d: %d, %f, %s", 246, local_246, local_246_d, param_c ? param_c : "null");
    return local_246 + (int)local_246_d;
}

typedef struct {
    int field_247;
    long field_247_b;
    double field_247_c;
    char name_247[64];
} StructType247;

int function_247(StructType247 *s, int param_a, double param_b, const char *param_c) {
    int local_247 = param_a * 247;
    double local_247_d = param_b * 247;
    char buf_247[128];
    snprintf(buf_247, sizeof(buf_247), "function_%d: %d, %f, %s", 247, local_247, local_247_d, param_c ? param_c : "null");
    return local_247 + (int)local_247_d;
}

typedef struct {
    int field_248;
    long field_248_b;
    double field_248_c;
    char name_248[64];
} StructType248;

int function_248(StructType248 *s, int param_a, double param_b, const char *param_c) {
    int local_248 = param_a * 248;
    double local_248_d = param_b * 248;
    char buf_248[128];
    snprintf(buf_248, sizeof(buf_248), "function_%d: %d, %f, %s", 248, local_248, local_248_d, param_c ? param_c : "null");
    return local_248 + (int)local_248_d;
}

typedef struct {
    int field_249;
    long field_249_b;
    double field_249_c;
    char name_249[64];
} StructType249;

int function_249(StructType249 *s, int param_a, double param_b, const char *param_c) {
    int local_249 = param_a * 249;
    double local_249_d = param_b * 249;
    char buf_249[128];
    snprintf(buf_249, sizeof(buf_249), "function_%d: %d, %f, %s", 249, local_249, local_249_d, param_c ? param_c : "null");
    return local_249 + (int)local_249_d;
}

typedef struct {
    int field_250;
    long field_250_b;
    double field_250_c;
    char name_250[64];
} StructType250;

int function_250(StructType250 *s, int param_a, double param_b, const char *param_c) {
    int local_250 = param_a * 250;
    double local_250_d = param_b * 250;
    char buf_250[128];
    snprintf(buf_250, sizeof(buf_250), "function_%d: %d, %f, %s", 250, local_250, local_250_d, param_c ? param_c : "null");
    return local_250 + (int)local_250_d;
}

typedef struct {
    int field_251;
    long field_251_b;
    double field_251_c;
    char name_251[64];
} StructType251;

int function_251(StructType251 *s, int param_a, double param_b, const char *param_c) {
    int local_251 = param_a * 251;
    double local_251_d = param_b * 251;
    char buf_251[128];
    snprintf(buf_251, sizeof(buf_251), "function_%d: %d, %f, %s", 251, local_251, local_251_d, param_c ? param_c : "null");
    return local_251 + (int)local_251_d;
}

typedef struct {
    int field_252;
    long field_252_b;
    double field_252_c;
    char name_252[64];
} StructType252;

int function_252(StructType252 *s, int param_a, double param_b, const char *param_c) {
    int local_252 = param_a * 252;
    double local_252_d = param_b * 252;
    char buf_252[128];
    snprintf(buf_252, sizeof(buf_252), "function_%d: %d, %f, %s", 252, local_252, local_252_d, param_c ? param_c : "null");
    return local_252 + (int)local_252_d;
}

typedef struct {
    int field_253;
    long field_253_b;
    double field_253_c;
    char name_253[64];
} StructType253;

int function_253(StructType253 *s, int param_a, double param_b, const char *param_c) {
    int local_253 = param_a * 253;
    double local_253_d = param_b * 253;
    char buf_253[128];
    snprintf(buf_253, sizeof(buf_253), "function_%d: %d, %f, %s", 253, local_253, local_253_d, param_c ? param_c : "null");
    return local_253 + (int)local_253_d;
}

typedef struct {
    int field_254;
    long field_254_b;
    double field_254_c;
    char name_254[64];
} StructType254;

int function_254(StructType254 *s, int param_a, double param_b, const char *param_c) {
    int local_254 = param_a * 254;
    double local_254_d = param_b * 254;
    char buf_254[128];
    snprintf(buf_254, sizeof(buf_254), "function_%d: %d, %f, %s", 254, local_254, local_254_d, param_c ? param_c : "null");
    return local_254 + (int)local_254_d;
}

typedef struct {
    int field_255;
    long field_255_b;
    double field_255_c;
    char name_255[64];
} StructType255;

int function_255(StructType255 *s, int param_a, double param_b, const char *param_c) {
    int local_255 = param_a * 255;
    double local_255_d = param_b * 255;
    char buf_255[128];
    snprintf(buf_255, sizeof(buf_255), "function_%d: %d, %f, %s", 255, local_255, local_255_d, param_c ? param_c : "null");
    return local_255 + (int)local_255_d;
}

typedef struct {
    int field_256;
    long field_256_b;
    double field_256_c;
    char name_256[64];
} StructType256;

int function_256(StructType256 *s, int param_a, double param_b, const char *param_c) {
    int local_256 = param_a * 256;
    double local_256_d = param_b * 256;
    char buf_256[128];
    snprintf(buf_256, sizeof(buf_256), "function_%d: %d, %f, %s", 256, local_256, local_256_d, param_c ? param_c : "null");
    return local_256 + (int)local_256_d;
}

typedef struct {
    int field_257;
    long field_257_b;
    double field_257_c;
    char name_257[64];
} StructType257;

int function_257(StructType257 *s, int param_a, double param_b, const char *param_c) {
    int local_257 = param_a * 257;
    double local_257_d = param_b * 257;
    char buf_257[128];
    snprintf(buf_257, sizeof(buf_257), "function_%d: %d, %f, %s", 257, local_257, local_257_d, param_c ? param_c : "null");
    return local_257 + (int)local_257_d;
}

typedef struct {
    int field_258;
    long field_258_b;
    double field_258_c;
    char name_258[64];
} StructType258;

int function_258(StructType258 *s, int param_a, double param_b, const char *param_c) {
    int local_258 = param_a * 258;
    double local_258_d = param_b * 258;
    char buf_258[128];
    snprintf(buf_258, sizeof(buf_258), "function_%d: %d, %f, %s", 258, local_258, local_258_d, param_c ? param_c : "null");
    return local_258 + (int)local_258_d;
}

typedef struct {
    int field_259;
    long field_259_b;
    double field_259_c;
    char name_259[64];
} StructType259;

int function_259(StructType259 *s, int param_a, double param_b, const char *param_c) {
    int local_259 = param_a * 259;
    double local_259_d = param_b * 259;
    char buf_259[128];
    snprintf(buf_259, sizeof(buf_259), "function_%d: %d, %f, %s", 259, local_259, local_259_d, param_c ? param_c : "null");
    return local_259 + (int)local_259_d;
}

typedef struct {
    int field_260;
    long field_260_b;
    double field_260_c;
    char name_260[64];
} StructType260;

int function_260(StructType260 *s, int param_a, double param_b, const char *param_c) {
    int local_260 = param_a * 260;
    double local_260_d = param_b * 260;
    char buf_260[128];
    snprintf(buf_260, sizeof(buf_260), "function_%d: %d, %f, %s", 260, local_260, local_260_d, param_c ? param_c : "null");
    return local_260 + (int)local_260_d;
}

typedef struct {
    int field_261;
    long field_261_b;
    double field_261_c;
    char name_261[64];
} StructType261;

int function_261(StructType261 *s, int param_a, double param_b, const char *param_c) {
    int local_261 = param_a * 261;
    double local_261_d = param_b * 261;
    char buf_261[128];
    snprintf(buf_261, sizeof(buf_261), "function_%d: %d, %f, %s", 261, local_261, local_261_d, param_c ? param_c : "null");
    return local_261 + (int)local_261_d;
}

typedef struct {
    int field_262;
    long field_262_b;
    double field_262_c;
    char name_262[64];
} StructType262;

int function_262(StructType262 *s, int param_a, double param_b, const char *param_c) {
    int local_262 = param_a * 262;
    double local_262_d = param_b * 262;
    char buf_262[128];
    snprintf(buf_262, sizeof(buf_262), "function_%d: %d, %f, %s", 262, local_262, local_262_d, param_c ? param_c : "null");
    return local_262 + (int)local_262_d;
}

typedef struct {
    int field_263;
    long field_263_b;
    double field_263_c;
    char name_263[64];
} StructType263;

int function_263(StructType263 *s, int param_a, double param_b, const char *param_c) {
    int local_263 = param_a * 263;
    double local_263_d = param_b * 263;
    char buf_263[128];
    snprintf(buf_263, sizeof(buf_263), "function_%d: %d, %f, %s", 263, local_263, local_263_d, param_c ? param_c : "null");
    return local_263 + (int)local_263_d;
}

typedef struct {
    int field_264;
    long field_264_b;
    double field_264_c;
    char name_264[64];
} StructType264;

int function_264(StructType264 *s, int param_a, double param_b, const char *param_c) {
    int local_264 = param_a * 264;
    double local_264_d = param_b * 264;
    char buf_264[128];
    snprintf(buf_264, sizeof(buf_264), "function_%d: %d, %f, %s", 264, local_264, local_264_d, param_c ? param_c : "null");
    return local_264 + (int)local_264_d;
}

typedef struct {
    int field_265;
    long field_265_b;
    double field_265_c;
    char name_265[64];
} StructType265;

int function_265(StructType265 *s, int param_a, double param_b, const char *param_c) {
    int local_265 = param_a * 265;
    double local_265_d = param_b * 265;
    char buf_265[128];
    snprintf(buf_265, sizeof(buf_265), "function_%d: %d, %f, %s", 265, local_265, local_265_d, param_c ? param_c : "null");
    return local_265 + (int)local_265_d;
}

typedef struct {
    int field_266;
    long field_266_b;
    double field_266_c;
    char name_266[64];
} StructType266;

int function_266(StructType266 *s, int param_a, double param_b, const char *param_c) {
    int local_266 = param_a * 266;
    double local_266_d = param_b * 266;
    char buf_266[128];
    snprintf(buf_266, sizeof(buf_266), "function_%d: %d, %f, %s", 266, local_266, local_266_d, param_c ? param_c : "null");
    return local_266 + (int)local_266_d;
}

typedef struct {
    int field_267;
    long field_267_b;
    double field_267_c;
    char name_267[64];
} StructType267;

int function_267(StructType267 *s, int param_a, double param_b, const char *param_c) {
    int local_267 = param_a * 267;
    double local_267_d = param_b * 267;
    char buf_267[128];
    snprintf(buf_267, sizeof(buf_267), "function_%d: %d, %f, %s", 267, local_267, local_267_d, param_c ? param_c : "null");
    return local_267 + (int)local_267_d;
}

typedef struct {
    int field_268;
    long field_268_b;
    double field_268_c;
    char name_268[64];
} StructType268;

int function_268(StructType268 *s, int param_a, double param_b, const char *param_c) {
    int local_268 = param_a * 268;
    double local_268_d = param_b * 268;
    char buf_268[128];
    snprintf(buf_268, sizeof(buf_268), "function_%d: %d, %f, %s", 268, local_268, local_268_d, param_c ? param_c : "null");
    return local_268 + (int)local_268_d;
}

typedef struct {
    int field_269;
    long field_269_b;
    double field_269_c;
    char name_269[64];
} StructType269;

int function_269(StructType269 *s, int param_a, double param_b, const char *param_c) {
    int local_269 = param_a * 269;
    double local_269_d = param_b * 269;
    char buf_269[128];
    snprintf(buf_269, sizeof(buf_269), "function_%d: %d, %f, %s", 269, local_269, local_269_d, param_c ? param_c : "null");
    return local_269 + (int)local_269_d;
}

typedef struct {
    int field_270;
    long field_270_b;
    double field_270_c;
    char name_270[64];
} StructType270;

int function_270(StructType270 *s, int param_a, double param_b, const char *param_c) {
    int local_270 = param_a * 270;
    double local_270_d = param_b * 270;
    char buf_270[128];
    snprintf(buf_270, sizeof(buf_270), "function_%d: %d, %f, %s", 270, local_270, local_270_d, param_c ? param_c : "null");
    return local_270 + (int)local_270_d;
}

typedef struct {
    int field_271;
    long field_271_b;
    double field_271_c;
    char name_271[64];
} StructType271;

int function_271(StructType271 *s, int param_a, double param_b, const char *param_c) {
    int local_271 = param_a * 271;
    double local_271_d = param_b * 271;
    char buf_271[128];
    snprintf(buf_271, sizeof(buf_271), "function_%d: %d, %f, %s", 271, local_271, local_271_d, param_c ? param_c : "null");
    return local_271 + (int)local_271_d;
}

typedef struct {
    int field_272;
    long field_272_b;
    double field_272_c;
    char name_272[64];
} StructType272;

int function_272(StructType272 *s, int param_a, double param_b, const char *param_c) {
    int local_272 = param_a * 272;
    double local_272_d = param_b * 272;
    char buf_272[128];
    snprintf(buf_272, sizeof(buf_272), "function_%d: %d, %f, %s", 272, local_272, local_272_d, param_c ? param_c : "null");
    return local_272 + (int)local_272_d;
}

typedef struct {
    int field_273;
    long field_273_b;
    double field_273_c;
    char name_273[64];
} StructType273;

int function_273(StructType273 *s, int param_a, double param_b, const char *param_c) {
    int local_273 = param_a * 273;
    double local_273_d = param_b * 273;
    char buf_273[128];
    snprintf(buf_273, sizeof(buf_273), "function_%d: %d, %f, %s", 273, local_273, local_273_d, param_c ? param_c : "null");
    return local_273 + (int)local_273_d;
}

typedef struct {
    int field_274;
    long field_274_b;
    double field_274_c;
    char name_274[64];
} StructType274;

int function_274(StructType274 *s, int param_a, double param_b, const char *param_c) {
    int local_274 = param_a * 274;
    double local_274_d = param_b * 274;
    char buf_274[128];
    snprintf(buf_274, sizeof(buf_274), "function_%d: %d, %f, %s", 274, local_274, local_274_d, param_c ? param_c : "null");
    return local_274 + (int)local_274_d;
}

typedef struct {
    int field_275;
    long field_275_b;
    double field_275_c;
    char name_275[64];
} StructType275;

int function_275(StructType275 *s, int param_a, double param_b, const char *param_c) {
    int local_275 = param_a * 275;
    double local_275_d = param_b * 275;
    char buf_275[128];
    snprintf(buf_275, sizeof(buf_275), "function_%d: %d, %f, %s", 275, local_275, local_275_d, param_c ? param_c : "null");
    return local_275 + (int)local_275_d;
}

typedef struct {
    int field_276;
    long field_276_b;
    double field_276_c;
    char name_276[64];
} StructType276;

int function_276(StructType276 *s, int param_a, double param_b, const char *param_c) {
    int local_276 = param_a * 276;
    double local_276_d = param_b * 276;
    char buf_276[128];
    snprintf(buf_276, sizeof(buf_276), "function_%d: %d, %f, %s", 276, local_276, local_276_d, param_c ? param_c : "null");
    return local_276 + (int)local_276_d;
}

typedef struct {
    int field_277;
    long field_277_b;
    double field_277_c;
    char name_277[64];
} StructType277;

int function_277(StructType277 *s, int param_a, double param_b, const char *param_c) {
    int local_277 = param_a * 277;
    double local_277_d = param_b * 277;
    char buf_277[128];
    snprintf(buf_277, sizeof(buf_277), "function_%d: %d, %f, %s", 277, local_277, local_277_d, param_c ? param_c : "null");
    return local_277 + (int)local_277_d;
}

typedef struct {
    int field_278;
    long field_278_b;
    double field_278_c;
    char name_278[64];
} StructType278;

int function_278(StructType278 *s, int param_a, double param_b, const char *param_c) {
    int local_278 = param_a * 278;
    double local_278_d = param_b * 278;
    char buf_278[128];
    snprintf(buf_278, sizeof(buf_278), "function_%d: %d, %f, %s", 278, local_278, local_278_d, param_c ? param_c : "null");
    return local_278 + (int)local_278_d;
}

typedef struct {
    int field_279;
    long field_279_b;
    double field_279_c;
    char name_279[64];
} StructType279;

int function_279(StructType279 *s, int param_a, double param_b, const char *param_c) {
    int local_279 = param_a * 279;
    double local_279_d = param_b * 279;
    char buf_279[128];
    snprintf(buf_279, sizeof(buf_279), "function_%d: %d, %f, %s", 279, local_279, local_279_d, param_c ? param_c : "null");
    return local_279 + (int)local_279_d;
}

typedef struct {
    int field_280;
    long field_280_b;
    double field_280_c;
    char name_280[64];
} StructType280;

int function_280(StructType280 *s, int param_a, double param_b, const char *param_c) {
    int local_280 = param_a * 280;
    double local_280_d = param_b * 280;
    char buf_280[128];
    snprintf(buf_280, sizeof(buf_280), "function_%d: %d, %f, %s", 280, local_280, local_280_d, param_c ? param_c : "null");
    return local_280 + (int)local_280_d;
}

typedef struct {
    int field_281;
    long field_281_b;
    double field_281_c;
    char name_281[64];
} StructType281;

int function_281(StructType281 *s, int param_a, double param_b, const char *param_c) {
    int local_281 = param_a * 281;
    double local_281_d = param_b * 281;
    char buf_281[128];
    snprintf(buf_281, sizeof(buf_281), "function_%d: %d, %f, %s", 281, local_281, local_281_d, param_c ? param_c : "null");
    return local_281 + (int)local_281_d;
}

typedef struct {
    int field_282;
    long field_282_b;
    double field_282_c;
    char name_282[64];
} StructType282;

int function_282(StructType282 *s, int param_a, double param_b, const char *param_c) {
    int local_282 = param_a * 282;
    double local_282_d = param_b * 282;
    char buf_282[128];
    snprintf(buf_282, sizeof(buf_282), "function_%d: %d, %f, %s", 282, local_282, local_282_d, param_c ? param_c : "null");
    return local_282 + (int)local_282_d;
}

typedef struct {
    int field_283;
    long field_283_b;
    double field_283_c;
    char name_283[64];
} StructType283;

int function_283(StructType283 *s, int param_a, double param_b, const char *param_c) {
    int local_283 = param_a * 283;
    double local_283_d = param_b * 283;
    char buf_283[128];
    snprintf(buf_283, sizeof(buf_283), "function_%d: %d, %f, %s", 283, local_283, local_283_d, param_c ? param_c : "null");
    return local_283 + (int)local_283_d;
}

typedef struct {
    int field_284;
    long field_284_b;
    double field_284_c;
    char name_284[64];
} StructType284;

int function_284(StructType284 *s, int param_a, double param_b, const char *param_c) {
    int local_284 = param_a * 284;
    double local_284_d = param_b * 284;
    char buf_284[128];
    snprintf(buf_284, sizeof(buf_284), "function_%d: %d, %f, %s", 284, local_284, local_284_d, param_c ? param_c : "null");
    return local_284 + (int)local_284_d;
}

typedef struct {
    int field_285;
    long field_285_b;
    double field_285_c;
    char name_285[64];
} StructType285;

int function_285(StructType285 *s, int param_a, double param_b, const char *param_c) {
    int local_285 = param_a * 285;
    double local_285_d = param_b * 285;
    char buf_285[128];
    snprintf(buf_285, sizeof(buf_285), "function_%d: %d, %f, %s", 285, local_285, local_285_d, param_c ? param_c : "null");
    return local_285 + (int)local_285_d;
}

typedef struct {
    int field_286;
    long field_286_b;
    double field_286_c;
    char name_286[64];
} StructType286;

int function_286(StructType286 *s, int param_a, double param_b, const char *param_c) {
    int local_286 = param_a * 286;
    double local_286_d = param_b * 286;
    char buf_286[128];
    snprintf(buf_286, sizeof(buf_286), "function_%d: %d, %f, %s", 286, local_286, local_286_d, param_c ? param_c : "null");
    return local_286 + (int)local_286_d;
}

typedef struct {
    int field_287;
    long field_287_b;
    double field_287_c;
    char name_287[64];
} StructType287;

int function_287(StructType287 *s, int param_a, double param_b, const char *param_c) {
    int local_287 = param_a * 287;
    double local_287_d = param_b * 287;
    char buf_287[128];
    snprintf(buf_287, sizeof(buf_287), "function_%d: %d, %f, %s", 287, local_287, local_287_d, param_c ? param_c : "null");
    return local_287 + (int)local_287_d;
}

typedef struct {
    int field_288;
    long field_288_b;
    double field_288_c;
    char name_288[64];
} StructType288;

int function_288(StructType288 *s, int param_a, double param_b, const char *param_c) {
    int local_288 = param_a * 288;
    double local_288_d = param_b * 288;
    char buf_288[128];
    snprintf(buf_288, sizeof(buf_288), "function_%d: %d, %f, %s", 288, local_288, local_288_d, param_c ? param_c : "null");
    return local_288 + (int)local_288_d;
}

typedef struct {
    int field_289;
    long field_289_b;
    double field_289_c;
    char name_289[64];
} StructType289;

int function_289(StructType289 *s, int param_a, double param_b, const char *param_c) {
    int local_289 = param_a * 289;
    double local_289_d = param_b * 289;
    char buf_289[128];
    snprintf(buf_289, sizeof(buf_289), "function_%d: %d, %f, %s", 289, local_289, local_289_d, param_c ? param_c : "null");
    return local_289 + (int)local_289_d;
}

typedef struct {
    int field_290;
    long field_290_b;
    double field_290_c;
    char name_290[64];
} StructType290;

int function_290(StructType290 *s, int param_a, double param_b, const char *param_c) {
    int local_290 = param_a * 290;
    double local_290_d = param_b * 290;
    char buf_290[128];
    snprintf(buf_290, sizeof(buf_290), "function_%d: %d, %f, %s", 290, local_290, local_290_d, param_c ? param_c : "null");
    return local_290 + (int)local_290_d;
}

typedef struct {
    int field_291;
    long field_291_b;
    double field_291_c;
    char name_291[64];
} StructType291;

int function_291(StructType291 *s, int param_a, double param_b, const char *param_c) {
    int local_291 = param_a * 291;
    double local_291_d = param_b * 291;
    char buf_291[128];
    snprintf(buf_291, sizeof(buf_291), "function_%d: %d, %f, %s", 291, local_291, local_291_d, param_c ? param_c : "null");
    return local_291 + (int)local_291_d;
}

typedef struct {
    int field_292;
    long field_292_b;
    double field_292_c;
    char name_292[64];
} StructType292;

int function_292(StructType292 *s, int param_a, double param_b, const char *param_c) {
    int local_292 = param_a * 292;
    double local_292_d = param_b * 292;
    char buf_292[128];
    snprintf(buf_292, sizeof(buf_292), "function_%d: %d, %f, %s", 292, local_292, local_292_d, param_c ? param_c : "null");
    return local_292 + (int)local_292_d;
}

typedef struct {
    int field_293;
    long field_293_b;
    double field_293_c;
    char name_293[64];
} StructType293;

int function_293(StructType293 *s, int param_a, double param_b, const char *param_c) {
    int local_293 = param_a * 293;
    double local_293_d = param_b * 293;
    char buf_293[128];
    snprintf(buf_293, sizeof(buf_293), "function_%d: %d, %f, %s", 293, local_293, local_293_d, param_c ? param_c : "null");
    return local_293 + (int)local_293_d;
}

typedef struct {
    int field_294;
    long field_294_b;
    double field_294_c;
    char name_294[64];
} StructType294;

int function_294(StructType294 *s, int param_a, double param_b, const char *param_c) {
    int local_294 = param_a * 294;
    double local_294_d = param_b * 294;
    char buf_294[128];
    snprintf(buf_294, sizeof(buf_294), "function_%d: %d, %f, %s", 294, local_294, local_294_d, param_c ? param_c : "null");
    return local_294 + (int)local_294_d;
}

typedef struct {
    int field_295;
    long field_295_b;
    double field_295_c;
    char name_295[64];
} StructType295;

int function_295(StructType295 *s, int param_a, double param_b, const char *param_c) {
    int local_295 = param_a * 295;
    double local_295_d = param_b * 295;
    char buf_295[128];
    snprintf(buf_295, sizeof(buf_295), "function_%d: %d, %f, %s", 295, local_295, local_295_d, param_c ? param_c : "null");
    return local_295 + (int)local_295_d;
}

typedef struct {
    int field_296;
    long field_296_b;
    double field_296_c;
    char name_296[64];
} StructType296;

int function_296(StructType296 *s, int param_a, double param_b, const char *param_c) {
    int local_296 = param_a * 296;
    double local_296_d = param_b * 296;
    char buf_296[128];
    snprintf(buf_296, sizeof(buf_296), "function_%d: %d, %f, %s", 296, local_296, local_296_d, param_c ? param_c : "null");
    return local_296 + (int)local_296_d;
}

typedef struct {
    int field_297;
    long field_297_b;
    double field_297_c;
    char name_297[64];
} StructType297;

int function_297(StructType297 *s, int param_a, double param_b, const char *param_c) {
    int local_297 = param_a * 297;
    double local_297_d = param_b * 297;
    char buf_297[128];
    snprintf(buf_297, sizeof(buf_297), "function_%d: %d, %f, %s", 297, local_297, local_297_d, param_c ? param_c : "null");
    return local_297 + (int)local_297_d;
}

typedef struct {
    int field_298;
    long field_298_b;
    double field_298_c;
    char name_298[64];
} StructType298;

int function_298(StructType298 *s, int param_a, double param_b, const char *param_c) {
    int local_298 = param_a * 298;
    double local_298_d = param_b * 298;
    char buf_298[128];
    snprintf(buf_298, sizeof(buf_298), "function_%d: %d, %f, %s", 298, local_298, local_298_d, param_c ? param_c : "null");
    return local_298 + (int)local_298_d;
}

typedef struct {
    int field_299;
    long field_299_b;
    double field_299_c;
    char name_299[64];
} StructType299;

int function_299(StructType299 *s, int param_a, double param_b, const char *param_c) {
    int local_299 = param_a * 299;
    double local_299_d = param_b * 299;
    char buf_299[128];
    snprintf(buf_299, sizeof(buf_299), "function_%d: %d, %f, %s", 299, local_299, local_299_d, param_c ? param_c : "null");
    return local_299 + (int)local_299_d;
}

typedef struct {
    int field_300;
    long field_300_b;
    double field_300_c;
    char name_300[64];
} StructType300;

int function_300(StructType300 *s, int param_a, double param_b, const char *param_c) {
    int local_300 = param_a * 300;
    double local_300_d = param_b * 300;
    char buf_300[128];
    snprintf(buf_300, sizeof(buf_300), "function_%d: %d, %f, %s", 300, local_300, local_300_d, param_c ? param_c : "null");
    return local_300 + (int)local_300_d;
}

typedef struct {
    int field_301;
    long field_301_b;
    double field_301_c;
    char name_301[64];
} StructType301;

int function_301(StructType301 *s, int param_a, double param_b, const char *param_c) {
    int local_301 = param_a * 301;
    double local_301_d = param_b * 301;
    char buf_301[128];
    snprintf(buf_301, sizeof(buf_301), "function_%d: %d, %f, %s", 301, local_301, local_301_d, param_c ? param_c : "null");
    return local_301 + (int)local_301_d;
}

typedef struct {
    int field_302;
    long field_302_b;
    double field_302_c;
    char name_302[64];
} StructType302;

int function_302(StructType302 *s, int param_a, double param_b, const char *param_c) {
    int local_302 = param_a * 302;
    double local_302_d = param_b * 302;
    char buf_302[128];
    snprintf(buf_302, sizeof(buf_302), "function_%d: %d, %f, %s", 302, local_302, local_302_d, param_c ? param_c : "null");
    return local_302 + (int)local_302_d;
}

typedef struct {
    int field_303;
    long field_303_b;
    double field_303_c;
    char name_303[64];
} StructType303;

int function_303(StructType303 *s, int param_a, double param_b, const char *param_c) {
    int local_303 = param_a * 303;
    double local_303_d = param_b * 303;
    char buf_303[128];
    snprintf(buf_303, sizeof(buf_303), "function_%d: %d, %f, %s", 303, local_303, local_303_d, param_c ? param_c : "null");
    return local_303 + (int)local_303_d;
}

typedef struct {
    int field_304;
    long field_304_b;
    double field_304_c;
    char name_304[64];
} StructType304;

int function_304(StructType304 *s, int param_a, double param_b, const char *param_c) {
    int local_304 = param_a * 304;
    double local_304_d = param_b * 304;
    char buf_304[128];
    snprintf(buf_304, sizeof(buf_304), "function_%d: %d, %f, %s", 304, local_304, local_304_d, param_c ? param_c : "null");
    return local_304 + (int)local_304_d;
}

typedef struct {
    int field_305;
    long field_305_b;
    double field_305_c;
    char name_305[64];
} StructType305;

int function_305(StructType305 *s, int param_a, double param_b, const char *param_c) {
    int local_305 = param_a * 305;
    double local_305_d = param_b * 305;
    char buf_305[128];
    snprintf(buf_305, sizeof(buf_305), "function_%d: %d, %f, %s", 305, local_305, local_305_d, param_c ? param_c : "null");
    return local_305 + (int)local_305_d;
}

typedef struct {
    int field_306;
    long field_306_b;
    double field_306_c;
    char name_306[64];
} StructType306;

int function_306(StructType306 *s, int param_a, double param_b, const char *param_c) {
    int local_306 = param_a * 306;
    double local_306_d = param_b * 306;
    char buf_306[128];
    snprintf(buf_306, sizeof(buf_306), "function_%d: %d, %f, %s", 306, local_306, local_306_d, param_c ? param_c : "null");
    return local_306 + (int)local_306_d;
}

typedef struct {
    int field_307;
    long field_307_b;
    double field_307_c;
    char name_307[64];
} StructType307;

int function_307(StructType307 *s, int param_a, double param_b, const char *param_c) {
    int local_307 = param_a * 307;
    double local_307_d = param_b * 307;
    char buf_307[128];
    snprintf(buf_307, sizeof(buf_307), "function_%d: %d, %f, %s", 307, local_307, local_307_d, param_c ? param_c : "null");
    return local_307 + (int)local_307_d;
}

typedef struct {
    int field_308;
    long field_308_b;
    double field_308_c;
    char name_308[64];
} StructType308;

int function_308(StructType308 *s, int param_a, double param_b, const char *param_c) {
    int local_308 = param_a * 308;
    double local_308_d = param_b * 308;
    char buf_308[128];
    snprintf(buf_308, sizeof(buf_308), "function_%d: %d, %f, %s", 308, local_308, local_308_d, param_c ? param_c : "null");
    return local_308 + (int)local_308_d;
}

typedef struct {
    int field_309;
    long field_309_b;
    double field_309_c;
    char name_309[64];
} StructType309;

int function_309(StructType309 *s, int param_a, double param_b, const char *param_c) {
    int local_309 = param_a * 309;
    double local_309_d = param_b * 309;
    char buf_309[128];
    snprintf(buf_309, sizeof(buf_309), "function_%d: %d, %f, %s", 309, local_309, local_309_d, param_c ? param_c : "null");
    return local_309 + (int)local_309_d;
}

typedef struct {
    int field_310;
    long field_310_b;
    double field_310_c;
    char name_310[64];
} StructType310;

int function_310(StructType310 *s, int param_a, double param_b, const char *param_c) {
    int local_310 = param_a * 310;
    double local_310_d = param_b * 310;
    char buf_310[128];
    snprintf(buf_310, sizeof(buf_310), "function_%d: %d, %f, %s", 310, local_310, local_310_d, param_c ? param_c : "null");
    return local_310 + (int)local_310_d;
}

typedef struct {
    int field_311;
    long field_311_b;
    double field_311_c;
    char name_311[64];
} StructType311;

int function_311(StructType311 *s, int param_a, double param_b, const char *param_c) {
    int local_311 = param_a * 311;
    double local_311_d = param_b * 311;
    char buf_311[128];
    snprintf(buf_311, sizeof(buf_311), "function_%d: %d, %f, %s", 311, local_311, local_311_d, param_c ? param_c : "null");
    return local_311 + (int)local_311_d;
}

typedef struct {
    int field_312;
    long field_312_b;
    double field_312_c;
    char name_312[64];
} StructType312;

int function_312(StructType312 *s, int param_a, double param_b, const char *param_c) {
    int local_312 = param_a * 312;
    double local_312_d = param_b * 312;
    char buf_312[128];
    snprintf(buf_312, sizeof(buf_312), "function_%d: %d, %f, %s", 312, local_312, local_312_d, param_c ? param_c : "null");
    return local_312 + (int)local_312_d;
}

typedef struct {
    int field_313;
    long field_313_b;
    double field_313_c;
    char name_313[64];
} StructType313;

int function_313(StructType313 *s, int param_a, double param_b, const char *param_c) {
    int local_313 = param_a * 313;
    double local_313_d = param_b * 313;
    char buf_313[128];
    snprintf(buf_313, sizeof(buf_313), "function_%d: %d, %f, %s", 313, local_313, local_313_d, param_c ? param_c : "null");
    return local_313 + (int)local_313_d;
}

typedef struct {
    int field_314;
    long field_314_b;
    double field_314_c;
    char name_314[64];
} StructType314;

int function_314(StructType314 *s, int param_a, double param_b, const char *param_c) {
    int local_314 = param_a * 314;
    double local_314_d = param_b * 314;
    char buf_314[128];
    snprintf(buf_314, sizeof(buf_314), "function_%d: %d, %f, %s", 314, local_314, local_314_d, param_c ? param_c : "null");
    return local_314 + (int)local_314_d;
}

typedef struct {
    int field_315;
    long field_315_b;
    double field_315_c;
    char name_315[64];
} StructType315;

int function_315(StructType315 *s, int param_a, double param_b, const char *param_c) {
    int local_315 = param_a * 315;
    double local_315_d = param_b * 315;
    char buf_315[128];
    snprintf(buf_315, sizeof(buf_315), "function_%d: %d, %f, %s", 315, local_315, local_315_d, param_c ? param_c : "null");
    return local_315 + (int)local_315_d;
}

typedef struct {
    int field_316;
    long field_316_b;
    double field_316_c;
    char name_316[64];
} StructType316;

int function_316(StructType316 *s, int param_a, double param_b, const char *param_c) {
    int local_316 = param_a * 316;
    double local_316_d = param_b * 316;
    char buf_316[128];
    snprintf(buf_316, sizeof(buf_316), "function_%d: %d, %f, %s", 316, local_316, local_316_d, param_c ? param_c : "null");
    return local_316 + (int)local_316_d;
}

typedef struct {
    int field_317;
    long field_317_b;
    double field_317_c;
    char name_317[64];
} StructType317;

int function_317(StructType317 *s, int param_a, double param_b, const char *param_c) {
    int local_317 = param_a * 317;
    double local_317_d = param_b * 317;
    char buf_317[128];
    snprintf(buf_317, sizeof(buf_317), "function_%d: %d, %f, %s", 317, local_317, local_317_d, param_c ? param_c : "null");
    return local_317 + (int)local_317_d;
}

typedef struct {
    int field_318;
    long field_318_b;
    double field_318_c;
    char name_318[64];
} StructType318;

int function_318(StructType318 *s, int param_a, double param_b, const char *param_c) {
    int local_318 = param_a * 318;
    double local_318_d = param_b * 318;
    char buf_318[128];
    snprintf(buf_318, sizeof(buf_318), "function_%d: %d, %f, %s", 318, local_318, local_318_d, param_c ? param_c : "null");
    return local_318 + (int)local_318_d;
}

typedef struct {
    int field_319;
    long field_319_b;
    double field_319_c;
    char name_319[64];
} StructType319;

int function_319(StructType319 *s, int param_a, double param_b, const char *param_c) {
    int local_319 = param_a * 319;
    double local_319_d = param_b * 319;
    char buf_319[128];
    snprintf(buf_319, sizeof(buf_319), "function_%d: %d, %f, %s", 319, local_319, local_319_d, param_c ? param_c : "null");
    return local_319 + (int)local_319_d;
}

typedef struct {
    int field_320;
    long field_320_b;
    double field_320_c;
    char name_320[64];
} StructType320;

int function_320(StructType320 *s, int param_a, double param_b, const char *param_c) {
    int local_320 = param_a * 320;
    double local_320_d = param_b * 320;
    char buf_320[128];
    snprintf(buf_320, sizeof(buf_320), "function_%d: %d, %f, %s", 320, local_320, local_320_d, param_c ? param_c : "null");
    return local_320 + (int)local_320_d;
}

typedef struct {
    int field_321;
    long field_321_b;
    double field_321_c;
    char name_321[64];
} StructType321;

int function_321(StructType321 *s, int param_a, double param_b, const char *param_c) {
    int local_321 = param_a * 321;
    double local_321_d = param_b * 321;
    char buf_321[128];
    snprintf(buf_321, sizeof(buf_321), "function_%d: %d, %f, %s", 321, local_321, local_321_d, param_c ? param_c : "null");
    return local_321 + (int)local_321_d;
}

typedef struct {
    int field_322;
    long field_322_b;
    double field_322_c;
    char name_322[64];
} StructType322;

int function_322(StructType322 *s, int param_a, double param_b, const char *param_c) {
    int local_322 = param_a * 322;
    double local_322_d = param_b * 322;
    char buf_322[128];
    snprintf(buf_322, sizeof(buf_322), "function_%d: %d, %f, %s", 322, local_322, local_322_d, param_c ? param_c : "null");
    return local_322 + (int)local_322_d;
}

typedef struct {
    int field_323;
    long field_323_b;
    double field_323_c;
    char name_323[64];
} StructType323;

int function_323(StructType323 *s, int param_a, double param_b, const char *param_c) {
    int local_323 = param_a * 323;
    double local_323_d = param_b * 323;
    char buf_323[128];
    snprintf(buf_323, sizeof(buf_323), "function_%d: %d, %f, %s", 323, local_323, local_323_d, param_c ? param_c : "null");
    return local_323 + (int)local_323_d;
}

typedef struct {
    int field_324;
    long field_324_b;
    double field_324_c;
    char name_324[64];
} StructType324;

int function_324(StructType324 *s, int param_a, double param_b, const char *param_c) {
    int local_324 = param_a * 324;
    double local_324_d = param_b * 324;
    char buf_324[128];
    snprintf(buf_324, sizeof(buf_324), "function_%d: %d, %f, %s", 324, local_324, local_324_d, param_c ? param_c : "null");
    return local_324 + (int)local_324_d;
}

typedef struct {
    int field_325;
    long field_325_b;
    double field_325_c;
    char name_325[64];
} StructType325;

int function_325(StructType325 *s, int param_a, double param_b, const char *param_c) {
    int local_325 = param_a * 325;
    double local_325_d = param_b * 325;
    char buf_325[128];
    snprintf(buf_325, sizeof(buf_325), "function_%d: %d, %f, %s", 325, local_325, local_325_d, param_c ? param_c : "null");
    return local_325 + (int)local_325_d;
}

typedef struct {
    int field_326;
    long field_326_b;
    double field_326_c;
    char name_326[64];
} StructType326;

int function_326(StructType326 *s, int param_a, double param_b, const char *param_c) {
    int local_326 = param_a * 326;
    double local_326_d = param_b * 326;
    char buf_326[128];
    snprintf(buf_326, sizeof(buf_326), "function_%d: %d, %f, %s", 326, local_326, local_326_d, param_c ? param_c : "null");
    return local_326 + (int)local_326_d;
}

typedef struct {
    int field_327;
    long field_327_b;
    double field_327_c;
    char name_327[64];
} StructType327;

int function_327(StructType327 *s, int param_a, double param_b, const char *param_c) {
    int local_327 = param_a * 327;
    double local_327_d = param_b * 327;
    char buf_327[128];
    snprintf(buf_327, sizeof(buf_327), "function_%d: %d, %f, %s", 327, local_327, local_327_d, param_c ? param_c : "null");
    return local_327 + (int)local_327_d;
}

typedef struct {
    int field_328;
    long field_328_b;
    double field_328_c;
    char name_328[64];
} StructType328;

int function_328(StructType328 *s, int param_a, double param_b, const char *param_c) {
    int local_328 = param_a * 328;
    double local_328_d = param_b * 328;
    char buf_328[128];
    snprintf(buf_328, sizeof(buf_328), "function_%d: %d, %f, %s", 328, local_328, local_328_d, param_c ? param_c : "null");
    return local_328 + (int)local_328_d;
}

typedef struct {
    int field_329;
    long field_329_b;
    double field_329_c;
    char name_329[64];
} StructType329;

int function_329(StructType329 *s, int param_a, double param_b, const char *param_c) {
    int local_329 = param_a * 329;
    double local_329_d = param_b * 329;
    char buf_329[128];
    snprintf(buf_329, sizeof(buf_329), "function_%d: %d, %f, %s", 329, local_329, local_329_d, param_c ? param_c : "null");
    return local_329 + (int)local_329_d;
}

typedef struct {
    int field_330;
    long field_330_b;
    double field_330_c;
    char name_330[64];
} StructType330;

int function_330(StructType330 *s, int param_a, double param_b, const char *param_c) {
    int local_330 = param_a * 330;
    double local_330_d = param_b * 330;
    char buf_330[128];
    snprintf(buf_330, sizeof(buf_330), "function_%d: %d, %f, %s", 330, local_330, local_330_d, param_c ? param_c : "null");
    return local_330 + (int)local_330_d;
}

typedef struct {
    int field_331;
    long field_331_b;
    double field_331_c;
    char name_331[64];
} StructType331;

int function_331(StructType331 *s, int param_a, double param_b, const char *param_c) {
    int local_331 = param_a * 331;
    double local_331_d = param_b * 331;
    char buf_331[128];
    snprintf(buf_331, sizeof(buf_331), "function_%d: %d, %f, %s", 331, local_331, local_331_d, param_c ? param_c : "null");
    return local_331 + (int)local_331_d;
}

typedef struct {
    int field_332;
    long field_332_b;
    double field_332_c;
    char name_332[64];
} StructType332;

int function_332(StructType332 *s, int param_a, double param_b, const char *param_c) {
    int local_332 = param_a * 332;
    double local_332_d = param_b * 332;
    char buf_332[128];
    snprintf(buf_332, sizeof(buf_332), "function_%d: %d, %f, %s", 332, local_332, local_332_d, param_c ? param_c : "null");
    return local_332 + (int)local_332_d;
}

typedef struct {
    int field_333;
    long field_333_b;
    double field_333_c;
    char name_333[64];
} StructType333;

int function_333(StructType333 *s, int param_a, double param_b, const char *param_c) {
    int local_333 = param_a * 333;
    double local_333_d = param_b * 333;
    char buf_333[128];
    snprintf(buf_333, sizeof(buf_333), "function_%d: %d, %f, %s", 333, local_333, local_333_d, param_c ? param_c : "null");
    return local_333 + (int)local_333_d;
}

typedef struct {
    int field_334;
    long field_334_b;
    double field_334_c;
    char name_334[64];
} StructType334;

int function_334(StructType334 *s, int param_a, double param_b, const char *param_c) {
    int local_334 = param_a * 334;
    double local_334_d = param_b * 334;
    char buf_334[128];
    snprintf(buf_334, sizeof(buf_334), "function_%d: %d, %f, %s", 334, local_334, local_334_d, param_c ? param_c : "null");
    return local_334 + (int)local_334_d;
}

typedef struct {
    int field_335;
    long field_335_b;
    double field_335_c;
    char name_335[64];
} StructType335;

int function_335(StructType335 *s, int param_a, double param_b, const char *param_c) {
    int local_335 = param_a * 335;
    double local_335_d = param_b * 335;
    char buf_335[128];
    snprintf(buf_335, sizeof(buf_335), "function_%d: %d, %f, %s", 335, local_335, local_335_d, param_c ? param_c : "null");
    return local_335 + (int)local_335_d;
}

typedef struct {
    int field_336;
    long field_336_b;
    double field_336_c;
    char name_336[64];
} StructType336;

int function_336(StructType336 *s, int param_a, double param_b, const char *param_c) {
    int local_336 = param_a * 336;
    double local_336_d = param_b * 336;
    char buf_336[128];
    snprintf(buf_336, sizeof(buf_336), "function_%d: %d, %f, %s", 336, local_336, local_336_d, param_c ? param_c : "null");
    return local_336 + (int)local_336_d;
}

typedef struct {
    int field_337;
    long field_337_b;
    double field_337_c;
    char name_337[64];
} StructType337;

int function_337(StructType337 *s, int param_a, double param_b, const char *param_c) {
    int local_337 = param_a * 337;
    double local_337_d = param_b * 337;
    char buf_337[128];
    snprintf(buf_337, sizeof(buf_337), "function_%d: %d, %f, %s", 337, local_337, local_337_d, param_c ? param_c : "null");
    return local_337 + (int)local_337_d;
}

typedef struct {
    int field_338;
    long field_338_b;
    double field_338_c;
    char name_338[64];
} StructType338;

int function_338(StructType338 *s, int param_a, double param_b, const char *param_c) {
    int local_338 = param_a * 338;
    double local_338_d = param_b * 338;
    char buf_338[128];
    snprintf(buf_338, sizeof(buf_338), "function_%d: %d, %f, %s", 338, local_338, local_338_d, param_c ? param_c : "null");
    return local_338 + (int)local_338_d;
}

typedef struct {
    int field_339;
    long field_339_b;
    double field_339_c;
    char name_339[64];
} StructType339;

int function_339(StructType339 *s, int param_a, double param_b, const char *param_c) {
    int local_339 = param_a * 339;
    double local_339_d = param_b * 339;
    char buf_339[128];
    snprintf(buf_339, sizeof(buf_339), "function_%d: %d, %f, %s", 339, local_339, local_339_d, param_c ? param_c : "null");
    return local_339 + (int)local_339_d;
}

typedef struct {
    int field_340;
    long field_340_b;
    double field_340_c;
    char name_340[64];
} StructType340;

int function_340(StructType340 *s, int param_a, double param_b, const char *param_c) {
    int local_340 = param_a * 340;
    double local_340_d = param_b * 340;
    char buf_340[128];
    snprintf(buf_340, sizeof(buf_340), "function_%d: %d, %f, %s", 340, local_340, local_340_d, param_c ? param_c : "null");
    return local_340 + (int)local_340_d;
}

typedef struct {
    int field_341;
    long field_341_b;
    double field_341_c;
    char name_341[64];
} StructType341;

int function_341(StructType341 *s, int param_a, double param_b, const char *param_c) {
    int local_341 = param_a * 341;
    double local_341_d = param_b * 341;
    char buf_341[128];
    snprintf(buf_341, sizeof(buf_341), "function_%d: %d, %f, %s", 341, local_341, local_341_d, param_c ? param_c : "null");
    return local_341 + (int)local_341_d;
}

typedef struct {
    int field_342;
    long field_342_b;
    double field_342_c;
    char name_342[64];
} StructType342;

int function_342(StructType342 *s, int param_a, double param_b, const char *param_c) {
    int local_342 = param_a * 342;
    double local_342_d = param_b * 342;
    char buf_342[128];
    snprintf(buf_342, sizeof(buf_342), "function_%d: %d, %f, %s", 342, local_342, local_342_d, param_c ? param_c : "null");
    return local_342 + (int)local_342_d;
}

typedef struct {
    int field_343;
    long field_343_b;
    double field_343_c;
    char name_343[64];
} StructType343;

int function_343(StructType343 *s, int param_a, double param_b, const char *param_c) {
    int local_343 = param_a * 343;
    double local_343_d = param_b * 343;
    char buf_343[128];
    snprintf(buf_343, sizeof(buf_343), "function_%d: %d, %f, %s", 343, local_343, local_343_d, param_c ? param_c : "null");
    return local_343 + (int)local_343_d;
}

typedef struct {
    int field_344;
    long field_344_b;
    double field_344_c;
    char name_344[64];
} StructType344;

int function_344(StructType344 *s, int param_a, double param_b, const char *param_c) {
    int local_344 = param_a * 344;
    double local_344_d = param_b * 344;
    char buf_344[128];
    snprintf(buf_344, sizeof(buf_344), "function_%d: %d, %f, %s", 344, local_344, local_344_d, param_c ? param_c : "null");
    return local_344 + (int)local_344_d;
}

typedef struct {
    int field_345;
    long field_345_b;
    double field_345_c;
    char name_345[64];
} StructType345;

int function_345(StructType345 *s, int param_a, double param_b, const char *param_c) {
    int local_345 = param_a * 345;
    double local_345_d = param_b * 345;
    char buf_345[128];
    snprintf(buf_345, sizeof(buf_345), "function_%d: %d, %f, %s", 345, local_345, local_345_d, param_c ? param_c : "null");
    return local_345 + (int)local_345_d;
}

typedef struct {
    int field_346;
    long field_346_b;
    double field_346_c;
    char name_346[64];
} StructType346;

int function_346(StructType346 *s, int param_a, double param_b, const char *param_c) {
    int local_346 = param_a * 346;
    double local_346_d = param_b * 346;
    char buf_346[128];
    snprintf(buf_346, sizeof(buf_346), "function_%d: %d, %f, %s", 346, local_346, local_346_d, param_c ? param_c : "null");
    return local_346 + (int)local_346_d;
}

typedef struct {
    int field_347;
    long field_347_b;
    double field_347_c;
    char name_347[64];
} StructType347;

int function_347(StructType347 *s, int param_a, double param_b, const char *param_c) {
    int local_347 = param_a * 347;
    double local_347_d = param_b * 347;
    char buf_347[128];
    snprintf(buf_347, sizeof(buf_347), "function_%d: %d, %f, %s", 347, local_347, local_347_d, param_c ? param_c : "null");
    return local_347 + (int)local_347_d;
}

typedef struct {
    int field_348;
    long field_348_b;
    double field_348_c;
    char name_348[64];
} StructType348;

int function_348(StructType348 *s, int param_a, double param_b, const char *param_c) {
    int local_348 = param_a * 348;
    double local_348_d = param_b * 348;
    char buf_348[128];
    snprintf(buf_348, sizeof(buf_348), "function_%d: %d, %f, %s", 348, local_348, local_348_d, param_c ? param_c : "null");
    return local_348 + (int)local_348_d;
}

typedef struct {
    int field_349;
    long field_349_b;
    double field_349_c;
    char name_349[64];
} StructType349;

int function_349(StructType349 *s, int param_a, double param_b, const char *param_c) {
    int local_349 = param_a * 349;
    double local_349_d = param_b * 349;
    char buf_349[128];
    snprintf(buf_349, sizeof(buf_349), "function_%d: %d, %f, %s", 349, local_349, local_349_d, param_c ? param_c : "null");
    return local_349 + (int)local_349_d;
}

typedef struct {
    int field_350;
    long field_350_b;
    double field_350_c;
    char name_350[64];
} StructType350;

int function_350(StructType350 *s, int param_a, double param_b, const char *param_c) {
    int local_350 = param_a * 350;
    double local_350_d = param_b * 350;
    char buf_350[128];
    snprintf(buf_350, sizeof(buf_350), "function_%d: %d, %f, %s", 350, local_350, local_350_d, param_c ? param_c : "null");
    return local_350 + (int)local_350_d;
}

typedef struct {
    int field_351;
    long field_351_b;
    double field_351_c;
    char name_351[64];
} StructType351;

int function_351(StructType351 *s, int param_a, double param_b, const char *param_c) {
    int local_351 = param_a * 351;
    double local_351_d = param_b * 351;
    char buf_351[128];
    snprintf(buf_351, sizeof(buf_351), "function_%d: %d, %f, %s", 351, local_351, local_351_d, param_c ? param_c : "null");
    return local_351 + (int)local_351_d;
}

typedef struct {
    int field_352;
    long field_352_b;
    double field_352_c;
    char name_352[64];
} StructType352;

int function_352(StructType352 *s, int param_a, double param_b, const char *param_c) {
    int local_352 = param_a * 352;
    double local_352_d = param_b * 352;
    char buf_352[128];
    snprintf(buf_352, sizeof(buf_352), "function_%d: %d, %f, %s", 352, local_352, local_352_d, param_c ? param_c : "null");
    return local_352 + (int)local_352_d;
}

typedef struct {
    int field_353;
    long field_353_b;
    double field_353_c;
    char name_353[64];
} StructType353;

int function_353(StructType353 *s, int param_a, double param_b, const char *param_c) {
    int local_353 = param_a * 353;
    double local_353_d = param_b * 353;
    char buf_353[128];
    snprintf(buf_353, sizeof(buf_353), "function_%d: %d, %f, %s", 353, local_353, local_353_d, param_c ? param_c : "null");
    return local_353 + (int)local_353_d;
}

typedef struct {
    int field_354;
    long field_354_b;
    double field_354_c;
    char name_354[64];
} StructType354;

int function_354(StructType354 *s, int param_a, double param_b, const char *param_c) {
    int local_354 = param_a * 354;
    double local_354_d = param_b * 354;
    char buf_354[128];
    snprintf(buf_354, sizeof(buf_354), "function_%d: %d, %f, %s", 354, local_354, local_354_d, param_c ? param_c : "null");
    return local_354 + (int)local_354_d;
}

typedef struct {
    int field_355;
    long field_355_b;
    double field_355_c;
    char name_355[64];
} StructType355;

int function_355(StructType355 *s, int param_a, double param_b, const char *param_c) {
    int local_355 = param_a * 355;
    double local_355_d = param_b * 355;
    char buf_355[128];
    snprintf(buf_355, sizeof(buf_355), "function_%d: %d, %f, %s", 355, local_355, local_355_d, param_c ? param_c : "null");
    return local_355 + (int)local_355_d;
}

typedef struct {
    int field_356;
    long field_356_b;
    double field_356_c;
    char name_356[64];
} StructType356;

int function_356(StructType356 *s, int param_a, double param_b, const char *param_c) {
    int local_356 = param_a * 356;
    double local_356_d = param_b * 356;
    char buf_356[128];
    snprintf(buf_356, sizeof(buf_356), "function_%d: %d, %f, %s", 356, local_356, local_356_d, param_c ? param_c : "null");
    return local_356 + (int)local_356_d;
}

typedef struct {
    int field_357;
    long field_357_b;
    double field_357_c;
    char name_357[64];
} StructType357;

int function_357(StructType357 *s, int param_a, double param_b, const char *param_c) {
    int local_357 = param_a * 357;
    double local_357_d = param_b * 357;
    char buf_357[128];
    snprintf(buf_357, sizeof(buf_357), "function_%d: %d, %f, %s", 357, local_357, local_357_d, param_c ? param_c : "null");
    return local_357 + (int)local_357_d;
}

typedef struct {
    int field_358;
    long field_358_b;
    double field_358_c;
    char name_358[64];
} StructType358;

int function_358(StructType358 *s, int param_a, double param_b, const char *param_c) {
    int local_358 = param_a * 358;
    double local_358_d = param_b * 358;
    char buf_358[128];
    snprintf(buf_358, sizeof(buf_358), "function_%d: %d, %f, %s", 358, local_358, local_358_d, param_c ? param_c : "null");
    return local_358 + (int)local_358_d;
}

typedef struct {
    int field_359;
    long field_359_b;
    double field_359_c;
    char name_359[64];
} StructType359;

int function_359(StructType359 *s, int param_a, double param_b, const char *param_c) {
    int local_359 = param_a * 359;
    double local_359_d = param_b * 359;
    char buf_359[128];
    snprintf(buf_359, sizeof(buf_359), "function_%d: %d, %f, %s", 359, local_359, local_359_d, param_c ? param_c : "null");
    return local_359 + (int)local_359_d;
}

typedef struct {
    int field_360;
    long field_360_b;
    double field_360_c;
    char name_360[64];
} StructType360;

int function_360(StructType360 *s, int param_a, double param_b, const char *param_c) {
    int local_360 = param_a * 360;
    double local_360_d = param_b * 360;
    char buf_360[128];
    snprintf(buf_360, sizeof(buf_360), "function_%d: %d, %f, %s", 360, local_360, local_360_d, param_c ? param_c : "null");
    return local_360 + (int)local_360_d;
}

typedef struct {
    int field_361;
    long field_361_b;
    double field_361_c;
    char name_361[64];
} StructType361;

int function_361(StructType361 *s, int param_a, double param_b, const char *param_c) {
    int local_361 = param_a * 361;
    double local_361_d = param_b * 361;
    char buf_361[128];
    snprintf(buf_361, sizeof(buf_361), "function_%d: %d, %f, %s", 361, local_361, local_361_d, param_c ? param_c : "null");
    return local_361 + (int)local_361_d;
}

typedef struct {
    int field_362;
    long field_362_b;
    double field_362_c;
    char name_362[64];
} StructType362;

int function_362(StructType362 *s, int param_a, double param_b, const char *param_c) {
    int local_362 = param_a * 362;
    double local_362_d = param_b * 362;
    char buf_362[128];
    snprintf(buf_362, sizeof(buf_362), "function_%d: %d, %f, %s", 362, local_362, local_362_d, param_c ? param_c : "null");
    return local_362 + (int)local_362_d;
}

typedef struct {
    int field_363;
    long field_363_b;
    double field_363_c;
    char name_363[64];
} StructType363;

int function_363(StructType363 *s, int param_a, double param_b, const char *param_c) {
    int local_363 = param_a * 363;
    double local_363_d = param_b * 363;
    char buf_363[128];
    snprintf(buf_363, sizeof(buf_363), "function_%d: %d, %f, %s", 363, local_363, local_363_d, param_c ? param_c : "null");
    return local_363 + (int)local_363_d;
}

typedef struct {
    int field_364;
    long field_364_b;
    double field_364_c;
    char name_364[64];
} StructType364;

int function_364(StructType364 *s, int param_a, double param_b, const char *param_c) {
    int local_364 = param_a * 364;
    double local_364_d = param_b * 364;
    char buf_364[128];
    snprintf(buf_364, sizeof(buf_364), "function_%d: %d, %f, %s", 364, local_364, local_364_d, param_c ? param_c : "null");
    return local_364 + (int)local_364_d;
}

typedef struct {
    int field_365;
    long field_365_b;
    double field_365_c;
    char name_365[64];
} StructType365;

int function_365(StructType365 *s, int param_a, double param_b, const char *param_c) {
    int local_365 = param_a * 365;
    double local_365_d = param_b * 365;
    char buf_365[128];
    snprintf(buf_365, sizeof(buf_365), "function_%d: %d, %f, %s", 365, local_365, local_365_d, param_c ? param_c : "null");
    return local_365 + (int)local_365_d;
}

typedef struct {
    int field_366;
    long field_366_b;
    double field_366_c;
    char name_366[64];
} StructType366;

int function_366(StructType366 *s, int param_a, double param_b, const char *param_c) {
    int local_366 = param_a * 366;
    double local_366_d = param_b * 366;
    char buf_366[128];
    snprintf(buf_366, sizeof(buf_366), "function_%d: %d, %f, %s", 366, local_366, local_366_d, param_c ? param_c : "null");
    return local_366 + (int)local_366_d;
}

typedef struct {
    int field_367;
    long field_367_b;
    double field_367_c;
    char name_367[64];
} StructType367;

int function_367(StructType367 *s, int param_a, double param_b, const char *param_c) {
    int local_367 = param_a * 367;
    double local_367_d = param_b * 367;
    char buf_367[128];
    snprintf(buf_367, sizeof(buf_367), "function_%d: %d, %f, %s", 367, local_367, local_367_d, param_c ? param_c : "null");
    return local_367 + (int)local_367_d;
}

typedef struct {
    int field_368;
    long field_368_b;
    double field_368_c;
    char name_368[64];
} StructType368;

int function_368(StructType368 *s, int param_a, double param_b, const char *param_c) {
    int local_368 = param_a * 368;
    double local_368_d = param_b * 368;
    char buf_368[128];
    snprintf(buf_368, sizeof(buf_368), "function_%d: %d, %f, %s", 368, local_368, local_368_d, param_c ? param_c : "null");
    return local_368 + (int)local_368_d;
}

typedef struct {
    int field_369;
    long field_369_b;
    double field_369_c;
    char name_369[64];
} StructType369;

int function_369(StructType369 *s, int param_a, double param_b, const char *param_c) {
    int local_369 = param_a * 369;
    double local_369_d = param_b * 369;
    char buf_369[128];
    snprintf(buf_369, sizeof(buf_369), "function_%d: %d, %f, %s", 369, local_369, local_369_d, param_c ? param_c : "null");
    return local_369 + (int)local_369_d;
}

typedef struct {
    int field_370;
    long field_370_b;
    double field_370_c;
    char name_370[64];
} StructType370;

int function_370(StructType370 *s, int param_a, double param_b, const char *param_c) {
    int local_370 = param_a * 370;
    double local_370_d = param_b * 370;
    char buf_370[128];
    snprintf(buf_370, sizeof(buf_370), "function_%d: %d, %f, %s", 370, local_370, local_370_d, param_c ? param_c : "null");
    return local_370 + (int)local_370_d;
}

typedef struct {
    int field_371;
    long field_371_b;
    double field_371_c;
    char name_371[64];
} StructType371;

int function_371(StructType371 *s, int param_a, double param_b, const char *param_c) {
    int local_371 = param_a * 371;
    double local_371_d = param_b * 371;
    char buf_371[128];
    snprintf(buf_371, sizeof(buf_371), "function_%d: %d, %f, %s", 371, local_371, local_371_d, param_c ? param_c : "null");
    return local_371 + (int)local_371_d;
}

typedef struct {
    int field_372;
    long field_372_b;
    double field_372_c;
    char name_372[64];
} StructType372;

int function_372(StructType372 *s, int param_a, double param_b, const char *param_c) {
    int local_372 = param_a * 372;
    double local_372_d = param_b * 372;
    char buf_372[128];
    snprintf(buf_372, sizeof(buf_372), "function_%d: %d, %f, %s", 372, local_372, local_372_d, param_c ? param_c : "null");
    return local_372 + (int)local_372_d;
}

typedef struct {
    int field_373;
    long field_373_b;
    double field_373_c;
    char name_373[64];
} StructType373;

int function_373(StructType373 *s, int param_a, double param_b, const char *param_c) {
    int local_373 = param_a * 373;
    double local_373_d = param_b * 373;
    char buf_373[128];
    snprintf(buf_373, sizeof(buf_373), "function_%d: %d, %f, %s", 373, local_373, local_373_d, param_c ? param_c : "null");
    return local_373 + (int)local_373_d;
}

typedef struct {
    int field_374;
    long field_374_b;
    double field_374_c;
    char name_374[64];
} StructType374;

int function_374(StructType374 *s, int param_a, double param_b, const char *param_c) {
    int local_374 = param_a * 374;
    double local_374_d = param_b * 374;
    char buf_374[128];
    snprintf(buf_374, sizeof(buf_374), "function_%d: %d, %f, %s", 374, local_374, local_374_d, param_c ? param_c : "null");
    return local_374 + (int)local_374_d;
}

typedef struct {
    int field_375;
    long field_375_b;
    double field_375_c;
    char name_375[64];
} StructType375;

int function_375(StructType375 *s, int param_a, double param_b, const char *param_c) {
    int local_375 = param_a * 375;
    double local_375_d = param_b * 375;
    char buf_375[128];
    snprintf(buf_375, sizeof(buf_375), "function_%d: %d, %f, %s", 375, local_375, local_375_d, param_c ? param_c : "null");
    return local_375 + (int)local_375_d;
}

typedef struct {
    int field_376;
    long field_376_b;
    double field_376_c;
    char name_376[64];
} StructType376;

int function_376(StructType376 *s, int param_a, double param_b, const char *param_c) {
    int local_376 = param_a * 376;
    double local_376_d = param_b * 376;
    char buf_376[128];
    snprintf(buf_376, sizeof(buf_376), "function_%d: %d, %f, %s", 376, local_376, local_376_d, param_c ? param_c : "null");
    return local_376 + (int)local_376_d;
}

typedef struct {
    int field_377;
    long field_377_b;
    double field_377_c;
    char name_377[64];
} StructType377;

int function_377(StructType377 *s, int param_a, double param_b, const char *param_c) {
    int local_377 = param_a * 377;
    double local_377_d = param_b * 377;
    char buf_377[128];
    snprintf(buf_377, sizeof(buf_377), "function_%d: %d, %f, %s", 377, local_377, local_377_d, param_c ? param_c : "null");
    return local_377 + (int)local_377_d;
}

typedef struct {
    int field_378;
    long field_378_b;
    double field_378_c;
    char name_378[64];
} StructType378;

int function_378(StructType378 *s, int param_a, double param_b, const char *param_c) {
    int local_378 = param_a * 378;
    double local_378_d = param_b * 378;
    char buf_378[128];
    snprintf(buf_378, sizeof(buf_378), "function_%d: %d, %f, %s", 378, local_378, local_378_d, param_c ? param_c : "null");
    return local_378 + (int)local_378_d;
}

typedef struct {
    int field_379;
    long field_379_b;
    double field_379_c;
    char name_379[64];
} StructType379;

int function_379(StructType379 *s, int param_a, double param_b, const char *param_c) {
    int local_379 = param_a * 379;
    double local_379_d = param_b * 379;
    char buf_379[128];
    snprintf(buf_379, sizeof(buf_379), "function_%d: %d, %f, %s", 379, local_379, local_379_d, param_c ? param_c : "null");
    return local_379 + (int)local_379_d;
}

typedef struct {
    int field_380;
    long field_380_b;
    double field_380_c;
    char name_380[64];
} StructType380;

int function_380(StructType380 *s, int param_a, double param_b, const char *param_c) {
    int local_380 = param_a * 380;
    double local_380_d = param_b * 380;
    char buf_380[128];
    snprintf(buf_380, sizeof(buf_380), "function_%d: %d, %f, %s", 380, local_380, local_380_d, param_c ? param_c : "null");
    return local_380 + (int)local_380_d;
}

typedef struct {
    int field_381;
    long field_381_b;
    double field_381_c;
    char name_381[64];
} StructType381;

int function_381(StructType381 *s, int param_a, double param_b, const char *param_c) {
    int local_381 = param_a * 381;
    double local_381_d = param_b * 381;
    char buf_381[128];
    snprintf(buf_381, sizeof(buf_381), "function_%d: %d, %f, %s", 381, local_381, local_381_d, param_c ? param_c : "null");
    return local_381 + (int)local_381_d;
}

typedef struct {
    int field_382;
    long field_382_b;
    double field_382_c;
    char name_382[64];
} StructType382;

int function_382(StructType382 *s, int param_a, double param_b, const char *param_c) {
    int local_382 = param_a * 382;
    double local_382_d = param_b * 382;
    char buf_382[128];
    snprintf(buf_382, sizeof(buf_382), "function_%d: %d, %f, %s", 382, local_382, local_382_d, param_c ? param_c : "null");
    return local_382 + (int)local_382_d;
}

typedef struct {
    int field_383;
    long field_383_b;
    double field_383_c;
    char name_383[64];
} StructType383;

int function_383(StructType383 *s, int param_a, double param_b, const char *param_c) {
    int local_383 = param_a * 383;
    double local_383_d = param_b * 383;
    char buf_383[128];
    snprintf(buf_383, sizeof(buf_383), "function_%d: %d, %f, %s", 383, local_383, local_383_d, param_c ? param_c : "null");
    return local_383 + (int)local_383_d;
}

typedef struct {
    int field_384;
    long field_384_b;
    double field_384_c;
    char name_384[64];
} StructType384;

int function_384(StructType384 *s, int param_a, double param_b, const char *param_c) {
    int local_384 = param_a * 384;
    double local_384_d = param_b * 384;
    char buf_384[128];
    snprintf(buf_384, sizeof(buf_384), "function_%d: %d, %f, %s", 384, local_384, local_384_d, param_c ? param_c : "null");
    return local_384 + (int)local_384_d;
}

typedef struct {
    int field_385;
    long field_385_b;
    double field_385_c;
    char name_385[64];
} StructType385;

int function_385(StructType385 *s, int param_a, double param_b, const char *param_c) {
    int local_385 = param_a * 385;
    double local_385_d = param_b * 385;
    char buf_385[128];
    snprintf(buf_385, sizeof(buf_385), "function_%d: %d, %f, %s", 385, local_385, local_385_d, param_c ? param_c : "null");
    return local_385 + (int)local_385_d;
}

typedef struct {
    int field_386;
    long field_386_b;
    double field_386_c;
    char name_386[64];
} StructType386;

int function_386(StructType386 *s, int param_a, double param_b, const char *param_c) {
    int local_386 = param_a * 386;
    double local_386_d = param_b * 386;
    char buf_386[128];
    snprintf(buf_386, sizeof(buf_386), "function_%d: %d, %f, %s", 386, local_386, local_386_d, param_c ? param_c : "null");
    return local_386 + (int)local_386_d;
}

typedef struct {
    int field_387;
    long field_387_b;
    double field_387_c;
    char name_387[64];
} StructType387;

int function_387(StructType387 *s, int param_a, double param_b, const char *param_c) {
    int local_387 = param_a * 387;
    double local_387_d = param_b * 387;
    char buf_387[128];
    snprintf(buf_387, sizeof(buf_387), "function_%d: %d, %f, %s", 387, local_387, local_387_d, param_c ? param_c : "null");
    return local_387 + (int)local_387_d;
}

typedef struct {
    int field_388;
    long field_388_b;
    double field_388_c;
    char name_388[64];
} StructType388;

int function_388(StructType388 *s, int param_a, double param_b, const char *param_c) {
    int local_388 = param_a * 388;
    double local_388_d = param_b * 388;
    char buf_388[128];
    snprintf(buf_388, sizeof(buf_388), "function_%d: %d, %f, %s", 388, local_388, local_388_d, param_c ? param_c : "null");
    return local_388 + (int)local_388_d;
}

typedef struct {
    int field_389;
    long field_389_b;
    double field_389_c;
    char name_389[64];
} StructType389;

int function_389(StructType389 *s, int param_a, double param_b, const char *param_c) {
    int local_389 = param_a * 389;
    double local_389_d = param_b * 389;
    char buf_389[128];
    snprintf(buf_389, sizeof(buf_389), "function_%d: %d, %f, %s", 389, local_389, local_389_d, param_c ? param_c : "null");
    return local_389 + (int)local_389_d;
}

typedef struct {
    int field_390;
    long field_390_b;
    double field_390_c;
    char name_390[64];
} StructType390;

int function_390(StructType390 *s, int param_a, double param_b, const char *param_c) {
    int local_390 = param_a * 390;
    double local_390_d = param_b * 390;
    char buf_390[128];
    snprintf(buf_390, sizeof(buf_390), "function_%d: %d, %f, %s", 390, local_390, local_390_d, param_c ? param_c : "null");
    return local_390 + (int)local_390_d;
}

typedef struct {
    int field_391;
    long field_391_b;
    double field_391_c;
    char name_391[64];
} StructType391;

int function_391(StructType391 *s, int param_a, double param_b, const char *param_c) {
    int local_391 = param_a * 391;
    double local_391_d = param_b * 391;
    char buf_391[128];
    snprintf(buf_391, sizeof(buf_391), "function_%d: %d, %f, %s", 391, local_391, local_391_d, param_c ? param_c : "null");
    return local_391 + (int)local_391_d;
}

typedef struct {
    int field_392;
    long field_392_b;
    double field_392_c;
    char name_392[64];
} StructType392;

int function_392(StructType392 *s, int param_a, double param_b, const char *param_c) {
    int local_392 = param_a * 392;
    double local_392_d = param_b * 392;
    char buf_392[128];
    snprintf(buf_392, sizeof(buf_392), "function_%d: %d, %f, %s", 392, local_392, local_392_d, param_c ? param_c : "null");
    return local_392 + (int)local_392_d;
}

typedef struct {
    int field_393;
    long field_393_b;
    double field_393_c;
    char name_393[64];
} StructType393;

int function_393(StructType393 *s, int param_a, double param_b, const char *param_c) {
    int local_393 = param_a * 393;
    double local_393_d = param_b * 393;
    char buf_393[128];
    snprintf(buf_393, sizeof(buf_393), "function_%d: %d, %f, %s", 393, local_393, local_393_d, param_c ? param_c : "null");
    return local_393 + (int)local_393_d;
}

typedef struct {
    int field_394;
    long field_394_b;
    double field_394_c;
    char name_394[64];
} StructType394;

int function_394(StructType394 *s, int param_a, double param_b, const char *param_c) {
    int local_394 = param_a * 394;
    double local_394_d = param_b * 394;
    char buf_394[128];
    snprintf(buf_394, sizeof(buf_394), "function_%d: %d, %f, %s", 394, local_394, local_394_d, param_c ? param_c : "null");
    return local_394 + (int)local_394_d;
}

typedef struct {
    int field_395;
    long field_395_b;
    double field_395_c;
    char name_395[64];
} StructType395;

int function_395(StructType395 *s, int param_a, double param_b, const char *param_c) {
    int local_395 = param_a * 395;
    double local_395_d = param_b * 395;
    char buf_395[128];
    snprintf(buf_395, sizeof(buf_395), "function_%d: %d, %f, %s", 395, local_395, local_395_d, param_c ? param_c : "null");
    return local_395 + (int)local_395_d;
}

typedef struct {
    int field_396;
    long field_396_b;
    double field_396_c;
    char name_396[64];
} StructType396;

int function_396(StructType396 *s, int param_a, double param_b, const char *param_c) {
    int local_396 = param_a * 396;
    double local_396_d = param_b * 396;
    char buf_396[128];
    snprintf(buf_396, sizeof(buf_396), "function_%d: %d, %f, %s", 396, local_396, local_396_d, param_c ? param_c : "null");
    return local_396 + (int)local_396_d;
}

typedef struct {
    int field_397;
    long field_397_b;
    double field_397_c;
    char name_397[64];
} StructType397;

int function_397(StructType397 *s, int param_a, double param_b, const char *param_c) {
    int local_397 = param_a * 397;
    double local_397_d = param_b * 397;
    char buf_397[128];
    snprintf(buf_397, sizeof(buf_397), "function_%d: %d, %f, %s", 397, local_397, local_397_d, param_c ? param_c : "null");
    return local_397 + (int)local_397_d;
}

typedef struct {
    int field_398;
    long field_398_b;
    double field_398_c;
    char name_398[64];
} StructType398;

int function_398(StructType398 *s, int param_a, double param_b, const char *param_c) {
    int local_398 = param_a * 398;
    double local_398_d = param_b * 398;
    char buf_398[128];
    snprintf(buf_398, sizeof(buf_398), "function_%d: %d, %f, %s", 398, local_398, local_398_d, param_c ? param_c : "null");
    return local_398 + (int)local_398_d;
}

typedef struct {
    int field_399;
    long field_399_b;
    double field_399_c;
    char name_399[64];
} StructType399;

int function_399(StructType399 *s, int param_a, double param_b, const char *param_c) {
    int local_399 = param_a * 399;
    double local_399_d = param_b * 399;
    char buf_399[128];
    snprintf(buf_399, sizeof(buf_399), "function_%d: %d, %f, %s", 399, local_399, local_399_d, param_c ? param_c : "null");
    return local_399 + (int)local_399_d;
}

typedef struct {
    int field_400;
    long field_400_b;
    double field_400_c;
    char name_400[64];
} StructType400;

int function_400(StructType400 *s, int param_a, double param_b, const char *param_c) {
    int local_400 = param_a * 400;
    double local_400_d = param_b * 400;
    char buf_400[128];
    snprintf(buf_400, sizeof(buf_400), "function_%d: %d, %f, %s", 400, local_400, local_400_d, param_c ? param_c : "null");
    return local_400 + (int)local_400_d;
}

typedef struct {
    int field_401;
    long field_401_b;
    double field_401_c;
    char name_401[64];
} StructType401;

int function_401(StructType401 *s, int param_a, double param_b, const char *param_c) {
    int local_401 = param_a * 401;
    double local_401_d = param_b * 401;
    char buf_401[128];
    snprintf(buf_401, sizeof(buf_401), "function_%d: %d, %f, %s", 401, local_401, local_401_d, param_c ? param_c : "null");
    return local_401 + (int)local_401_d;
}

typedef struct {
    int field_402;
    long field_402_b;
    double field_402_c;
    char name_402[64];
} StructType402;

int function_402(StructType402 *s, int param_a, double param_b, const char *param_c) {
    int local_402 = param_a * 402;
    double local_402_d = param_b * 402;
    char buf_402[128];
    snprintf(buf_402, sizeof(buf_402), "function_%d: %d, %f, %s", 402, local_402, local_402_d, param_c ? param_c : "null");
    return local_402 + (int)local_402_d;
}

typedef struct {
    int field_403;
    long field_403_b;
    double field_403_c;
    char name_403[64];
} StructType403;

int function_403(StructType403 *s, int param_a, double param_b, const char *param_c) {
    int local_403 = param_a * 403;
    double local_403_d = param_b * 403;
    char buf_403[128];
    snprintf(buf_403, sizeof(buf_403), "function_%d: %d, %f, %s", 403, local_403, local_403_d, param_c ? param_c : "null");
    return local_403 + (int)local_403_d;
}

typedef struct {
    int field_404;
    long field_404_b;
    double field_404_c;
    char name_404[64];
} StructType404;

int function_404(StructType404 *s, int param_a, double param_b, const char *param_c) {
    int local_404 = param_a * 404;
    double local_404_d = param_b * 404;
    char buf_404[128];
    snprintf(buf_404, sizeof(buf_404), "function_%d: %d, %f, %s", 404, local_404, local_404_d, param_c ? param_c : "null");
    return local_404 + (int)local_404_d;
}

typedef struct {
    int field_405;
    long field_405_b;
    double field_405_c;
    char name_405[64];
} StructType405;

int function_405(StructType405 *s, int param_a, double param_b, const char *param_c) {
    int local_405 = param_a * 405;
    double local_405_d = param_b * 405;
    char buf_405[128];
    snprintf(buf_405, sizeof(buf_405), "function_%d: %d, %f, %s", 405, local_405, local_405_d, param_c ? param_c : "null");
    return local_405 + (int)local_405_d;
}

typedef struct {
    int field_406;
    long field_406_b;
    double field_406_c;
    char name_406[64];
} StructType406;

int function_406(StructType406 *s, int param_a, double param_b, const char *param_c) {
    int local_406 = param_a * 406;
    double local_406_d = param_b * 406;
    char buf_406[128];
    snprintf(buf_406, sizeof(buf_406), "function_%d: %d, %f, %s", 406, local_406, local_406_d, param_c ? param_c : "null");
    return local_406 + (int)local_406_d;
}

typedef struct {
    int field_407;
    long field_407_b;
    double field_407_c;
    char name_407[64];
} StructType407;

int function_407(StructType407 *s, int param_a, double param_b, const char *param_c) {
    int local_407 = param_a * 407;
    double local_407_d = param_b * 407;
    char buf_407[128];
    snprintf(buf_407, sizeof(buf_407), "function_%d: %d, %f, %s", 407, local_407, local_407_d, param_c ? param_c : "null");
    return local_407 + (int)local_407_d;
}

typedef struct {
    int field_408;
    long field_408_b;
    double field_408_c;
    char name_408[64];
} StructType408;

int function_408(StructType408 *s, int param_a, double param_b, const char *param_c) {
    int local_408 = param_a * 408;
    double local_408_d = param_b * 408;
    char buf_408[128];
    snprintf(buf_408, sizeof(buf_408), "function_%d: %d, %f, %s", 408, local_408, local_408_d, param_c ? param_c : "null");
    return local_408 + (int)local_408_d;
}

typedef struct {
    int field_409;
    long field_409_b;
    double field_409_c;
    char name_409[64];
} StructType409;

int function_409(StructType409 *s, int param_a, double param_b, const char *param_c) {
    int local_409 = param_a * 409;
    double local_409_d = param_b * 409;
    char buf_409[128];
    snprintf(buf_409, sizeof(buf_409), "function_%d: %d, %f, %s", 409, local_409, local_409_d, param_c ? param_c : "null");
    return local_409 + (int)local_409_d;
}

typedef struct {
    int field_410;
    long field_410_b;
    double field_410_c;
    char name_410[64];
} StructType410;

int function_410(StructType410 *s, int param_a, double param_b, const char *param_c) {
    int local_410 = param_a * 410;
    double local_410_d = param_b * 410;
    char buf_410[128];
    snprintf(buf_410, sizeof(buf_410), "function_%d: %d, %f, %s", 410, local_410, local_410_d, param_c ? param_c : "null");
    return local_410 + (int)local_410_d;
}

typedef struct {
    int field_411;
    long field_411_b;
    double field_411_c;
    char name_411[64];
} StructType411;

int function_411(StructType411 *s, int param_a, double param_b, const char *param_c) {
    int local_411 = param_a * 411;
    double local_411_d = param_b * 411;
    char buf_411[128];
    snprintf(buf_411, sizeof(buf_411), "function_%d: %d, %f, %s", 411, local_411, local_411_d, param_c ? param_c : "null");
    return local_411 + (int)local_411_d;
}

typedef struct {
    int field_412;
    long field_412_b;
    double field_412_c;
    char name_412[64];
} StructType412;

int function_412(StructType412 *s, int param_a, double param_b, const char *param_c) {
    int local_412 = param_a * 412;
    double local_412_d = param_b * 412;
    char buf_412[128];
    snprintf(buf_412, sizeof(buf_412), "function_%d: %d, %f, %s", 412, local_412, local_412_d, param_c ? param_c : "null");
    return local_412 + (int)local_412_d;
}

typedef struct {
    int field_413;
    long field_413_b;
    double field_413_c;
    char name_413[64];
} StructType413;

int function_413(StructType413 *s, int param_a, double param_b, const char *param_c) {
    int local_413 = param_a * 413;
    double local_413_d = param_b * 413;
    char buf_413[128];
    snprintf(buf_413, sizeof(buf_413), "function_%d: %d, %f, %s", 413, local_413, local_413_d, param_c ? param_c : "null");
    return local_413 + (int)local_413_d;
}

typedef struct {
    int field_414;
    long field_414_b;
    double field_414_c;
    char name_414[64];
} StructType414;

int function_414(StructType414 *s, int param_a, double param_b, const char *param_c) {
    int local_414 = param_a * 414;
    double local_414_d = param_b * 414;
    char buf_414[128];
    snprintf(buf_414, sizeof(buf_414), "function_%d: %d, %f, %s", 414, local_414, local_414_d, param_c ? param_c : "null");
    return local_414 + (int)local_414_d;
}

typedef struct {
    int field_415;
    long field_415_b;
    double field_415_c;
    char name_415[64];
} StructType415;

int function_415(StructType415 *s, int param_a, double param_b, const char *param_c) {
    int local_415 = param_a * 415;
    double local_415_d = param_b * 415;
    char buf_415[128];
    snprintf(buf_415, sizeof(buf_415), "function_%d: %d, %f, %s", 415, local_415, local_415_d, param_c ? param_c : "null");
    return local_415 + (int)local_415_d;
}

typedef struct {
    int field_416;
    long field_416_b;
    double field_416_c;
    char name_416[64];
} StructType416;

int function_416(StructType416 *s, int param_a, double param_b, const char *param_c) {
    int local_416 = param_a * 416;
    double local_416_d = param_b * 416;
    char buf_416[128];
    snprintf(buf_416, sizeof(buf_416), "function_%d: %d, %f, %s", 416, local_416, local_416_d, param_c ? param_c : "null");
    return local_416 + (int)local_416_d;
}

typedef struct {
    int field_417;
    long field_417_b;
    double field_417_c;
    char name_417[64];
} StructType417;

int function_417(StructType417 *s, int param_a, double param_b, const char *param_c) {
    int local_417 = param_a * 417;
    double local_417_d = param_b * 417;
    char buf_417[128];
    snprintf(buf_417, sizeof(buf_417), "function_%d: %d, %f, %s", 417, local_417, local_417_d, param_c ? param_c : "null");
    return local_417 + (int)local_417_d;
}

typedef struct {
    int field_418;
    long field_418_b;
    double field_418_c;
    char name_418[64];
} StructType418;

int function_418(StructType418 *s, int param_a, double param_b, const char *param_c) {
    int local_418 = param_a * 418;
    double local_418_d = param_b * 418;
    char buf_418[128];
    snprintf(buf_418, sizeof(buf_418), "function_%d: %d, %f, %s", 418, local_418, local_418_d, param_c ? param_c : "null");
    return local_418 + (int)local_418_d;
}

typedef struct {
    int field_419;
    long field_419_b;
    double field_419_c;
    char name_419[64];
} StructType419;

int function_419(StructType419 *s, int param_a, double param_b, const char *param_c) {
    int local_419 = param_a * 419;
    double local_419_d = param_b * 419;
    char buf_419[128];
    snprintf(buf_419, sizeof(buf_419), "function_%d: %d, %f, %s", 419, local_419, local_419_d, param_c ? param_c : "null");
    return local_419 + (int)local_419_d;
}

typedef struct {
    int field_420;
    long field_420_b;
    double field_420_c;
    char name_420[64];
} StructType420;

int function_420(StructType420 *s, int param_a, double param_b, const char *param_c) {
    int local_420 = param_a * 420;
    double local_420_d = param_b * 420;
    char buf_420[128];
    snprintf(buf_420, sizeof(buf_420), "function_%d: %d, %f, %s", 420, local_420, local_420_d, param_c ? param_c : "null");
    return local_420 + (int)local_420_d;
}

typedef struct {
    int field_421;
    long field_421_b;
    double field_421_c;
    char name_421[64];
} StructType421;

int function_421(StructType421 *s, int param_a, double param_b, const char *param_c) {
    int local_421 = param_a * 421;
    double local_421_d = param_b * 421;
    char buf_421[128];
    snprintf(buf_421, sizeof(buf_421), "function_%d: %d, %f, %s", 421, local_421, local_421_d, param_c ? param_c : "null");
    return local_421 + (int)local_421_d;
}

typedef struct {
    int field_422;
    long field_422_b;
    double field_422_c;
    char name_422[64];
} StructType422;

int function_422(StructType422 *s, int param_a, double param_b, const char *param_c) {
    int local_422 = param_a * 422;
    double local_422_d = param_b * 422;
    char buf_422[128];
    snprintf(buf_422, sizeof(buf_422), "function_%d: %d, %f, %s", 422, local_422, local_422_d, param_c ? param_c : "null");
    return local_422 + (int)local_422_d;
}

typedef struct {
    int field_423;
    long field_423_b;
    double field_423_c;
    char name_423[64];
} StructType423;

int function_423(StructType423 *s, int param_a, double param_b, const char *param_c) {
    int local_423 = param_a * 423;
    double local_423_d = param_b * 423;
    char buf_423[128];
    snprintf(buf_423, sizeof(buf_423), "function_%d: %d, %f, %s", 423, local_423, local_423_d, param_c ? param_c : "null");
    return local_423 + (int)local_423_d;
}

typedef struct {
    int field_424;
    long field_424_b;
    double field_424_c;
    char name_424[64];
} StructType424;

int function_424(StructType424 *s, int param_a, double param_b, const char *param_c) {
    int local_424 = param_a * 424;
    double local_424_d = param_b * 424;
    char buf_424[128];
    snprintf(buf_424, sizeof(buf_424), "function_%d: %d, %f, %s", 424, local_424, local_424_d, param_c ? param_c : "null");
    return local_424 + (int)local_424_d;
}

typedef struct {
    int field_425;
    long field_425_b;
    double field_425_c;
    char name_425[64];
} StructType425;

int function_425(StructType425 *s, int param_a, double param_b, const char *param_c) {
    int local_425 = param_a * 425;
    double local_425_d = param_b * 425;
    char buf_425[128];
    snprintf(buf_425, sizeof(buf_425), "function_%d: %d, %f, %s", 425, local_425, local_425_d, param_c ? param_c : "null");
    return local_425 + (int)local_425_d;
}

typedef struct {
    int field_426;
    long field_426_b;
    double field_426_c;
    char name_426[64];
} StructType426;

int function_426(StructType426 *s, int param_a, double param_b, const char *param_c) {
    int local_426 = param_a * 426;
    double local_426_d = param_b * 426;
    char buf_426[128];
    snprintf(buf_426, sizeof(buf_426), "function_%d: %d, %f, %s", 426, local_426, local_426_d, param_c ? param_c : "null");
    return local_426 + (int)local_426_d;
}

typedef struct {
    int field_427;
    long field_427_b;
    double field_427_c;
    char name_427[64];
} StructType427;

int function_427(StructType427 *s, int param_a, double param_b, const char *param_c) {
    int local_427 = param_a * 427;
    double local_427_d = param_b * 427;
    char buf_427[128];
    snprintf(buf_427, sizeof(buf_427), "function_%d: %d, %f, %s", 427, local_427, local_427_d, param_c ? param_c : "null");
    return local_427 + (int)local_427_d;
}

typedef struct {
    int field_428;
    long field_428_b;
    double field_428_c;
    char name_428[64];
} StructType428;

int function_428(StructType428 *s, int param_a, double param_b, const char *param_c) {
    int local_428 = param_a * 428;
    double local_428_d = param_b * 428;
    char buf_428[128];
    snprintf(buf_428, sizeof(buf_428), "function_%d: %d, %f, %s", 428, local_428, local_428_d, param_c ? param_c : "null");
    return local_428 + (int)local_428_d;
}

typedef struct {
    int field_429;
    long field_429_b;
    double field_429_c;
    char name_429[64];
} StructType429;

int function_429(StructType429 *s, int param_a, double param_b, const char *param_c) {
    int local_429 = param_a * 429;
    double local_429_d = param_b * 429;
    char buf_429[128];
    snprintf(buf_429, sizeof(buf_429), "function_%d: %d, %f, %s", 429, local_429, local_429_d, param_c ? param_c : "null");
    return local_429 + (int)local_429_d;
}

typedef struct {
    int field_430;
    long field_430_b;
    double field_430_c;
    char name_430[64];
} StructType430;

int function_430(StructType430 *s, int param_a, double param_b, const char *param_c) {
    int local_430 = param_a * 430;
    double local_430_d = param_b * 430;
    char buf_430[128];
    snprintf(buf_430, sizeof(buf_430), "function_%d: %d, %f, %s", 430, local_430, local_430_d, param_c ? param_c : "null");
    return local_430 + (int)local_430_d;
}

typedef struct {
    int field_431;
    long field_431_b;
    double field_431_c;
    char name_431[64];
} StructType431;

int function_431(StructType431 *s, int param_a, double param_b, const char *param_c) {
    int local_431 = param_a * 431;
    double local_431_d = param_b * 431;
    char buf_431[128];
    snprintf(buf_431, sizeof(buf_431), "function_%d: %d, %f, %s", 431, local_431, local_431_d, param_c ? param_c : "null");
    return local_431 + (int)local_431_d;
}

typedef struct {
    int field_432;
    long field_432_b;
    double field_432_c;
    char name_432[64];
} StructType432;

int function_432(StructType432 *s, int param_a, double param_b, const char *param_c) {
    int local_432 = param_a * 432;
    double local_432_d = param_b * 432;
    char buf_432[128];
    snprintf(buf_432, sizeof(buf_432), "function_%d: %d, %f, %s", 432, local_432, local_432_d, param_c ? param_c : "null");
    return local_432 + (int)local_432_d;
}

typedef struct {
    int field_433;
    long field_433_b;
    double field_433_c;
    char name_433[64];
} StructType433;

int function_433(StructType433 *s, int param_a, double param_b, const char *param_c) {
    int local_433 = param_a * 433;
    double local_433_d = param_b * 433;
    char buf_433[128];
    snprintf(buf_433, sizeof(buf_433), "function_%d: %d, %f, %s", 433, local_433, local_433_d, param_c ? param_c : "null");
    return local_433 + (int)local_433_d;
}

typedef struct {
    int field_434;
    long field_434_b;
    double field_434_c;
    char name_434[64];
} StructType434;

int function_434(StructType434 *s, int param_a, double param_b, const char *param_c) {
    int local_434 = param_a * 434;
    double local_434_d = param_b * 434;
    char buf_434[128];
    snprintf(buf_434, sizeof(buf_434), "function_%d: %d, %f, %s", 434, local_434, local_434_d, param_c ? param_c : "null");
    return local_434 + (int)local_434_d;
}

typedef struct {
    int field_435;
    long field_435_b;
    double field_435_c;
    char name_435[64];
} StructType435;

int function_435(StructType435 *s, int param_a, double param_b, const char *param_c) {
    int local_435 = param_a * 435;
    double local_435_d = param_b * 435;
    char buf_435[128];
    snprintf(buf_435, sizeof(buf_435), "function_%d: %d, %f, %s", 435, local_435, local_435_d, param_c ? param_c : "null");
    return local_435 + (int)local_435_d;
}

typedef struct {
    int field_436;
    long field_436_b;
    double field_436_c;
    char name_436[64];
} StructType436;

int function_436(StructType436 *s, int param_a, double param_b, const char *param_c) {
    int local_436 = param_a * 436;
    double local_436_d = param_b * 436;
    char buf_436[128];
    snprintf(buf_436, sizeof(buf_436), "function_%d: %d, %f, %s", 436, local_436, local_436_d, param_c ? param_c : "null");
    return local_436 + (int)local_436_d;
}

typedef struct {
    int field_437;
    long field_437_b;
    double field_437_c;
    char name_437[64];
} StructType437;

int function_437(StructType437 *s, int param_a, double param_b, const char *param_c) {
    int local_437 = param_a * 437;
    double local_437_d = param_b * 437;
    char buf_437[128];
    snprintf(buf_437, sizeof(buf_437), "function_%d: %d, %f, %s", 437, local_437, local_437_d, param_c ? param_c : "null");
    return local_437 + (int)local_437_d;
}

typedef struct {
    int field_438;
    long field_438_b;
    double field_438_c;
    char name_438[64];
} StructType438;

int function_438(StructType438 *s, int param_a, double param_b, const char *param_c) {
    int local_438 = param_a * 438;
    double local_438_d = param_b * 438;
    char buf_438[128];
    snprintf(buf_438, sizeof(buf_438), "function_%d: %d, %f, %s", 438, local_438, local_438_d, param_c ? param_c : "null");
    return local_438 + (int)local_438_d;
}

typedef struct {
    int field_439;
    long field_439_b;
    double field_439_c;
    char name_439[64];
} StructType439;

int function_439(StructType439 *s, int param_a, double param_b, const char *param_c) {
    int local_439 = param_a * 439;
    double local_439_d = param_b * 439;
    char buf_439[128];
    snprintf(buf_439, sizeof(buf_439), "function_%d: %d, %f, %s", 439, local_439, local_439_d, param_c ? param_c : "null");
    return local_439 + (int)local_439_d;
}

typedef struct {
    int field_440;
    long field_440_b;
    double field_440_c;
    char name_440[64];
} StructType440;

int function_440(StructType440 *s, int param_a, double param_b, const char *param_c) {
    int local_440 = param_a * 440;
    double local_440_d = param_b * 440;
    char buf_440[128];
    snprintf(buf_440, sizeof(buf_440), "function_%d: %d, %f, %s", 440, local_440, local_440_d, param_c ? param_c : "null");
    return local_440 + (int)local_440_d;
}

typedef struct {
    int field_441;
    long field_441_b;
    double field_441_c;
    char name_441[64];
} StructType441;

int function_441(StructType441 *s, int param_a, double param_b, const char *param_c) {
    int local_441 = param_a * 441;
    double local_441_d = param_b * 441;
    char buf_441[128];
    snprintf(buf_441, sizeof(buf_441), "function_%d: %d, %f, %s", 441, local_441, local_441_d, param_c ? param_c : "null");
    return local_441 + (int)local_441_d;
}

typedef struct {
    int field_442;
    long field_442_b;
    double field_442_c;
    char name_442[64];
} StructType442;

int function_442(StructType442 *s, int param_a, double param_b, const char *param_c) {
    int local_442 = param_a * 442;
    double local_442_d = param_b * 442;
    char buf_442[128];
    snprintf(buf_442, sizeof(buf_442), "function_%d: %d, %f, %s", 442, local_442, local_442_d, param_c ? param_c : "null");
    return local_442 + (int)local_442_d;
}

typedef struct {
    int field_443;
    long field_443_b;
    double field_443_c;
    char name_443[64];
} StructType443;

int function_443(StructType443 *s, int param_a, double param_b, const char *param_c) {
    int local_443 = param_a * 443;
    double local_443_d = param_b * 443;
    char buf_443[128];
    snprintf(buf_443, sizeof(buf_443), "function_%d: %d, %f, %s", 443, local_443, local_443_d, param_c ? param_c : "null");
    return local_443 + (int)local_443_d;
}

typedef struct {
    int field_444;
    long field_444_b;
    double field_444_c;
    char name_444[64];
} StructType444;

int function_444(StructType444 *s, int param_a, double param_b, const char *param_c) {
    int local_444 = param_a * 444;
    double local_444_d = param_b * 444;
    char buf_444[128];
    snprintf(buf_444, sizeof(buf_444), "function_%d: %d, %f, %s", 444, local_444, local_444_d, param_c ? param_c : "null");
    return local_444 + (int)local_444_d;
}

typedef struct {
    int field_445;
    long field_445_b;
    double field_445_c;
    char name_445[64];
} StructType445;

int function_445(StructType445 *s, int param_a, double param_b, const char *param_c) {
    int local_445 = param_a * 445;
    double local_445_d = param_b * 445;
    char buf_445[128];
    snprintf(buf_445, sizeof(buf_445), "function_%d: %d, %f, %s", 445, local_445, local_445_d, param_c ? param_c : "null");
    return local_445 + (int)local_445_d;
}

typedef struct {
    int field_446;
    long field_446_b;
    double field_446_c;
    char name_446[64];
} StructType446;

int function_446(StructType446 *s, int param_a, double param_b, const char *param_c) {
    int local_446 = param_a * 446;
    double local_446_d = param_b * 446;
    char buf_446[128];
    snprintf(buf_446, sizeof(buf_446), "function_%d: %d, %f, %s", 446, local_446, local_446_d, param_c ? param_c : "null");
    return local_446 + (int)local_446_d;
}

typedef struct {
    int field_447;
    long field_447_b;
    double field_447_c;
    char name_447[64];
} StructType447;

int function_447(StructType447 *s, int param_a, double param_b, const char *param_c) {
    int local_447 = param_a * 447;
    double local_447_d = param_b * 447;
    char buf_447[128];
    snprintf(buf_447, sizeof(buf_447), "function_%d: %d, %f, %s", 447, local_447, local_447_d, param_c ? param_c : "null");
    return local_447 + (int)local_447_d;
}

typedef struct {
    int field_448;
    long field_448_b;
    double field_448_c;
    char name_448[64];
} StructType448;

int function_448(StructType448 *s, int param_a, double param_b, const char *param_c) {
    int local_448 = param_a * 448;
    double local_448_d = param_b * 448;
    char buf_448[128];
    snprintf(buf_448, sizeof(buf_448), "function_%d: %d, %f, %s", 448, local_448, local_448_d, param_c ? param_c : "null");
    return local_448 + (int)local_448_d;
}

typedef struct {
    int field_449;
    long field_449_b;
    double field_449_c;
    char name_449[64];
} StructType449;

int function_449(StructType449 *s, int param_a, double param_b, const char *param_c) {
    int local_449 = param_a * 449;
    double local_449_d = param_b * 449;
    char buf_449[128];
    snprintf(buf_449, sizeof(buf_449), "function_%d: %d, %f, %s", 449, local_449, local_449_d, param_c ? param_c : "null");
    return local_449 + (int)local_449_d;
}

typedef struct {
    int field_450;
    long field_450_b;
    double field_450_c;
    char name_450[64];
} StructType450;

int function_450(StructType450 *s, int param_a, double param_b, const char *param_c) {
    int local_450 = param_a * 450;
    double local_450_d = param_b * 450;
    char buf_450[128];
    snprintf(buf_450, sizeof(buf_450), "function_%d: %d, %f, %s", 450, local_450, local_450_d, param_c ? param_c : "null");
    return local_450 + (int)local_450_d;
}

typedef struct {
    int field_451;
    long field_451_b;
    double field_451_c;
    char name_451[64];
} StructType451;

int function_451(StructType451 *s, int param_a, double param_b, const char *param_c) {
    int local_451 = param_a * 451;
    double local_451_d = param_b * 451;
    char buf_451[128];
    snprintf(buf_451, sizeof(buf_451), "function_%d: %d, %f, %s", 451, local_451, local_451_d, param_c ? param_c : "null");
    return local_451 + (int)local_451_d;
}

typedef struct {
    int field_452;
    long field_452_b;
    double field_452_c;
    char name_452[64];
} StructType452;

int function_452(StructType452 *s, int param_a, double param_b, const char *param_c) {
    int local_452 = param_a * 452;
    double local_452_d = param_b * 452;
    char buf_452[128];
    snprintf(buf_452, sizeof(buf_452), "function_%d: %d, %f, %s", 452, local_452, local_452_d, param_c ? param_c : "null");
    return local_452 + (int)local_452_d;
}

typedef struct {
    int field_453;
    long field_453_b;
    double field_453_c;
    char name_453[64];
} StructType453;

int function_453(StructType453 *s, int param_a, double param_b, const char *param_c) {
    int local_453 = param_a * 453;
    double local_453_d = param_b * 453;
    char buf_453[128];
    snprintf(buf_453, sizeof(buf_453), "function_%d: %d, %f, %s", 453, local_453, local_453_d, param_c ? param_c : "null");
    return local_453 + (int)local_453_d;
}

typedef struct {
    int field_454;
    long field_454_b;
    double field_454_c;
    char name_454[64];
} StructType454;

int function_454(StructType454 *s, int param_a, double param_b, const char *param_c) {
    int local_454 = param_a * 454;
    double local_454_d = param_b * 454;
    char buf_454[128];
    snprintf(buf_454, sizeof(buf_454), "function_%d: %d, %f, %s", 454, local_454, local_454_d, param_c ? param_c : "null");
    return local_454 + (int)local_454_d;
}

typedef struct {
    int field_455;
    long field_455_b;
    double field_455_c;
    char name_455[64];
} StructType455;

int function_455(StructType455 *s, int param_a, double param_b, const char *param_c) {
    int local_455 = param_a * 455;
    double local_455_d = param_b * 455;
    char buf_455[128];
    snprintf(buf_455, sizeof(buf_455), "function_%d: %d, %f, %s", 455, local_455, local_455_d, param_c ? param_c : "null");
    return local_455 + (int)local_455_d;
}

typedef struct {
    int field_456;
    long field_456_b;
    double field_456_c;
    char name_456[64];
} StructType456;

int function_456(StructType456 *s, int param_a, double param_b, const char *param_c) {
    int local_456 = param_a * 456;
    double local_456_d = param_b * 456;
    char buf_456[128];
    snprintf(buf_456, sizeof(buf_456), "function_%d: %d, %f, %s", 456, local_456, local_456_d, param_c ? param_c : "null");
    return local_456 + (int)local_456_d;
}

typedef struct {
    int field_457;
    long field_457_b;
    double field_457_c;
    char name_457[64];
} StructType457;

int function_457(StructType457 *s, int param_a, double param_b, const char *param_c) {
    int local_457 = param_a * 457;
    double local_457_d = param_b * 457;
    char buf_457[128];
    snprintf(buf_457, sizeof(buf_457), "function_%d: %d, %f, %s", 457, local_457, local_457_d, param_c ? param_c : "null");
    return local_457 + (int)local_457_d;
}

typedef struct {
    int field_458;
    long field_458_b;
    double field_458_c;
    char name_458[64];
} StructType458;

int function_458(StructType458 *s, int param_a, double param_b, const char *param_c) {
    int local_458 = param_a * 458;
    double local_458_d = param_b * 458;
    char buf_458[128];
    snprintf(buf_458, sizeof(buf_458), "function_%d: %d, %f, %s", 458, local_458, local_458_d, param_c ? param_c : "null");
    return local_458 + (int)local_458_d;
}

typedef struct {
    int field_459;
    long field_459_b;
    double field_459_c;
    char name_459[64];
} StructType459;

int function_459(StructType459 *s, int param_a, double param_b, const char *param_c) {
    int local_459 = param_a * 459;
    double local_459_d = param_b * 459;
    char buf_459[128];
    snprintf(buf_459, sizeof(buf_459), "function_%d: %d, %f, %s", 459, local_459, local_459_d, param_c ? param_c : "null");
    return local_459 + (int)local_459_d;
}

typedef struct {
    int field_460;
    long field_460_b;
    double field_460_c;
    char name_460[64];
} StructType460;

int function_460(StructType460 *s, int param_a, double param_b, const char *param_c) {
    int local_460 = param_a * 460;
    double local_460_d = param_b * 460;
    char buf_460[128];
    snprintf(buf_460, sizeof(buf_460), "function_%d: %d, %f, %s", 460, local_460, local_460_d, param_c ? param_c : "null");
    return local_460 + (int)local_460_d;
}

typedef struct {
    int field_461;
    long field_461_b;
    double field_461_c;
    char name_461[64];
} StructType461;

int function_461(StructType461 *s, int param_a, double param_b, const char *param_c) {
    int local_461 = param_a * 461;
    double local_461_d = param_b * 461;
    char buf_461[128];
    snprintf(buf_461, sizeof(buf_461), "function_%d: %d, %f, %s", 461, local_461, local_461_d, param_c ? param_c : "null");
    return local_461 + (int)local_461_d;
}

typedef struct {
    int field_462;
    long field_462_b;
    double field_462_c;
    char name_462[64];
} StructType462;

int function_462(StructType462 *s, int param_a, double param_b, const char *param_c) {
    int local_462 = param_a * 462;
    double local_462_d = param_b * 462;
    char buf_462[128];
    snprintf(buf_462, sizeof(buf_462), "function_%d: %d, %f, %s", 462, local_462, local_462_d, param_c ? param_c : "null");
    return local_462 + (int)local_462_d;
}

typedef struct {
    int field_463;
    long field_463_b;
    double field_463_c;
    char name_463[64];
} StructType463;

int function_463(StructType463 *s, int param_a, double param_b, const char *param_c) {
    int local_463 = param_a * 463;
    double local_463_d = param_b * 463;
    char buf_463[128];
    snprintf(buf_463, sizeof(buf_463), "function_%d: %d, %f, %s", 463, local_463, local_463_d, param_c ? param_c : "null");
    return local_463 + (int)local_463_d;
}

typedef struct {
    int field_464;
    long field_464_b;
    double field_464_c;
    char name_464[64];
} StructType464;

int function_464(StructType464 *s, int param_a, double param_b, const char *param_c) {
    int local_464 = param_a * 464;
    double local_464_d = param_b * 464;
    char buf_464[128];
    snprintf(buf_464, sizeof(buf_464), "function_%d: %d, %f, %s", 464, local_464, local_464_d, param_c ? param_c : "null");
    return local_464 + (int)local_464_d;
}

typedef struct {
    int field_465;
    long field_465_b;
    double field_465_c;
    char name_465[64];
} StructType465;

int function_465(StructType465 *s, int param_a, double param_b, const char *param_c) {
    int local_465 = param_a * 465;
    double local_465_d = param_b * 465;
    char buf_465[128];
    snprintf(buf_465, sizeof(buf_465), "function_%d: %d, %f, %s", 465, local_465, local_465_d, param_c ? param_c : "null");
    return local_465 + (int)local_465_d;
}

typedef struct {
    int field_466;
    long field_466_b;
    double field_466_c;
    char name_466[64];
} StructType466;

int function_466(StructType466 *s, int param_a, double param_b, const char *param_c) {
    int local_466 = param_a * 466;
    double local_466_d = param_b * 466;
    char buf_466[128];
    snprintf(buf_466, sizeof(buf_466), "function_%d: %d, %f, %s", 466, local_466, local_466_d, param_c ? param_c : "null");
    return local_466 + (int)local_466_d;
}

typedef struct {
    int field_467;
    long field_467_b;
    double field_467_c;
    char name_467[64];
} StructType467;

int function_467(StructType467 *s, int param_a, double param_b, const char *param_c) {
    int local_467 = param_a * 467;
    double local_467_d = param_b * 467;
    char buf_467[128];
    snprintf(buf_467, sizeof(buf_467), "function_%d: %d, %f, %s", 467, local_467, local_467_d, param_c ? param_c : "null");
    return local_467 + (int)local_467_d;
}

typedef struct {
    int field_468;
    long field_468_b;
    double field_468_c;
    char name_468[64];
} StructType468;

int function_468(StructType468 *s, int param_a, double param_b, const char *param_c) {
    int local_468 = param_a * 468;
    double local_468_d = param_b * 468;
    char buf_468[128];
    snprintf(buf_468, sizeof(buf_468), "function_%d: %d, %f, %s", 468, local_468, local_468_d, param_c ? param_c : "null");
    return local_468 + (int)local_468_d;
}

typedef struct {
    int field_469;
    long field_469_b;
    double field_469_c;
    char name_469[64];
} StructType469;

int function_469(StructType469 *s, int param_a, double param_b, const char *param_c) {
    int local_469 = param_a * 469;
    double local_469_d = param_b * 469;
    char buf_469[128];
    snprintf(buf_469, sizeof(buf_469), "function_%d: %d, %f, %s", 469, local_469, local_469_d, param_c ? param_c : "null");
    return local_469 + (int)local_469_d;
}

typedef struct {
    int field_470;
    long field_470_b;
    double field_470_c;
    char name_470[64];
} StructType470;

int function_470(StructType470 *s, int param_a, double param_b, const char *param_c) {
    int local_470 = param_a * 470;
    double local_470_d = param_b * 470;
    char buf_470[128];
    snprintf(buf_470, sizeof(buf_470), "function_%d: %d, %f, %s", 470, local_470, local_470_d, param_c ? param_c : "null");
    return local_470 + (int)local_470_d;
}

typedef struct {
    int field_471;
    long field_471_b;
    double field_471_c;
    char name_471[64];
} StructType471;

int function_471(StructType471 *s, int param_a, double param_b, const char *param_c) {
    int local_471 = param_a * 471;
    double local_471_d = param_b * 471;
    char buf_471[128];
    snprintf(buf_471, sizeof(buf_471), "function_%d: %d, %f, %s", 471, local_471, local_471_d, param_c ? param_c : "null");
    return local_471 + (int)local_471_d;
}

typedef struct {
    int field_472;
    long field_472_b;
    double field_472_c;
    char name_472[64];
} StructType472;

int function_472(StructType472 *s, int param_a, double param_b, const char *param_c) {
    int local_472 = param_a * 472;
    double local_472_d = param_b * 472;
    char buf_472[128];
    snprintf(buf_472, sizeof(buf_472), "function_%d: %d, %f, %s", 472, local_472, local_472_d, param_c ? param_c : "null");
    return local_472 + (int)local_472_d;
}

typedef struct {
    int field_473;
    long field_473_b;
    double field_473_c;
    char name_473[64];
} StructType473;

int function_473(StructType473 *s, int param_a, double param_b, const char *param_c) {
    int local_473 = param_a * 473;
    double local_473_d = param_b * 473;
    char buf_473[128];
    snprintf(buf_473, sizeof(buf_473), "function_%d: %d, %f, %s", 473, local_473, local_473_d, param_c ? param_c : "null");
    return local_473 + (int)local_473_d;
}

typedef struct {
    int field_474;
    long field_474_b;
    double field_474_c;
    char name_474[64];
} StructType474;

int function_474(StructType474 *s, int param_a, double param_b, const char *param_c) {
    int local_474 = param_a * 474;
    double local_474_d = param_b * 474;
    char buf_474[128];
    snprintf(buf_474, sizeof(buf_474), "function_%d: %d, %f, %s", 474, local_474, local_474_d, param_c ? param_c : "null");
    return local_474 + (int)local_474_d;
}

typedef struct {
    int field_475;
    long field_475_b;
    double field_475_c;
    char name_475[64];
} StructType475;

int function_475(StructType475 *s, int param_a, double param_b, const char *param_c) {
    int local_475 = param_a * 475;
    double local_475_d = param_b * 475;
    char buf_475[128];
    snprintf(buf_475, sizeof(buf_475), "function_%d: %d, %f, %s", 475, local_475, local_475_d, param_c ? param_c : "null");
    return local_475 + (int)local_475_d;
}

typedef struct {
    int field_476;
    long field_476_b;
    double field_476_c;
    char name_476[64];
} StructType476;

int function_476(StructType476 *s, int param_a, double param_b, const char *param_c) {
    int local_476 = param_a * 476;
    double local_476_d = param_b * 476;
    char buf_476[128];
    snprintf(buf_476, sizeof(buf_476), "function_%d: %d, %f, %s", 476, local_476, local_476_d, param_c ? param_c : "null");
    return local_476 + (int)local_476_d;
}

typedef struct {
    int field_477;
    long field_477_b;
    double field_477_c;
    char name_477[64];
} StructType477;

int function_477(StructType477 *s, int param_a, double param_b, const char *param_c) {
    int local_477 = param_a * 477;
    double local_477_d = param_b * 477;
    char buf_477[128];
    snprintf(buf_477, sizeof(buf_477), "function_%d: %d, %f, %s", 477, local_477, local_477_d, param_c ? param_c : "null");
    return local_477 + (int)local_477_d;
}

typedef struct {
    int field_478;
    long field_478_b;
    double field_478_c;
    char name_478[64];
} StructType478;

int function_478(StructType478 *s, int param_a, double param_b, const char *param_c) {
    int local_478 = param_a * 478;
    double local_478_d = param_b * 478;
    char buf_478[128];
    snprintf(buf_478, sizeof(buf_478), "function_%d: %d, %f, %s", 478, local_478, local_478_d, param_c ? param_c : "null");
    return local_478 + (int)local_478_d;
}

typedef struct {
    int field_479;
    long field_479_b;
    double field_479_c;
    char name_479[64];
} StructType479;

int function_479(StructType479 *s, int param_a, double param_b, const char *param_c) {
    int local_479 = param_a * 479;
    double local_479_d = param_b * 479;
    char buf_479[128];
    snprintf(buf_479, sizeof(buf_479), "function_%d: %d, %f, %s", 479, local_479, local_479_d, param_c ? param_c : "null");
    return local_479 + (int)local_479_d;
}

typedef struct {
    int field_480;
    long field_480_b;
    double field_480_c;
    char name_480[64];
} StructType480;

int function_480(StructType480 *s, int param_a, double param_b, const char *param_c) {
    int local_480 = param_a * 480;
    double local_480_d = param_b * 480;
    char buf_480[128];
    snprintf(buf_480, sizeof(buf_480), "function_%d: %d, %f, %s", 480, local_480, local_480_d, param_c ? param_c : "null");
    return local_480 + (int)local_480_d;
}

typedef struct {
    int field_481;
    long field_481_b;
    double field_481_c;
    char name_481[64];
} StructType481;

int function_481(StructType481 *s, int param_a, double param_b, const char *param_c) {
    int local_481 = param_a * 481;
    double local_481_d = param_b * 481;
    char buf_481[128];
    snprintf(buf_481, sizeof(buf_481), "function_%d: %d, %f, %s", 481, local_481, local_481_d, param_c ? param_c : "null");
    return local_481 + (int)local_481_d;
}

typedef struct {
    int field_482;
    long field_482_b;
    double field_482_c;
    char name_482[64];
} StructType482;

int function_482(StructType482 *s, int param_a, double param_b, const char *param_c) {
    int local_482 = param_a * 482;
    double local_482_d = param_b * 482;
    char buf_482[128];
    snprintf(buf_482, sizeof(buf_482), "function_%d: %d, %f, %s", 482, local_482, local_482_d, param_c ? param_c : "null");
    return local_482 + (int)local_482_d;
}

typedef struct {
    int field_483;
    long field_483_b;
    double field_483_c;
    char name_483[64];
} StructType483;

int function_483(StructType483 *s, int param_a, double param_b, const char *param_c) {
    int local_483 = param_a * 483;
    double local_483_d = param_b * 483;
    char buf_483[128];
    snprintf(buf_483, sizeof(buf_483), "function_%d: %d, %f, %s", 483, local_483, local_483_d, param_c ? param_c : "null");
    return local_483 + (int)local_483_d;
}

typedef struct {
    int field_484;
    long field_484_b;
    double field_484_c;
    char name_484[64];
} StructType484;

int function_484(StructType484 *s, int param_a, double param_b, const char *param_c) {
    int local_484 = param_a * 484;
    double local_484_d = param_b * 484;
    char buf_484[128];
    snprintf(buf_484, sizeof(buf_484), "function_%d: %d, %f, %s", 484, local_484, local_484_d, param_c ? param_c : "null");
    return local_484 + (int)local_484_d;
}

typedef struct {
    int field_485;
    long field_485_b;
    double field_485_c;
    char name_485[64];
} StructType485;

int function_485(StructType485 *s, int param_a, double param_b, const char *param_c) {
    int local_485 = param_a * 485;
    double local_485_d = param_b * 485;
    char buf_485[128];
    snprintf(buf_485, sizeof(buf_485), "function_%d: %d, %f, %s", 485, local_485, local_485_d, param_c ? param_c : "null");
    return local_485 + (int)local_485_d;
}

typedef struct {
    int field_486;
    long field_486_b;
    double field_486_c;
    char name_486[64];
} StructType486;

int function_486(StructType486 *s, int param_a, double param_b, const char *param_c) {
    int local_486 = param_a * 486;
    double local_486_d = param_b * 486;
    char buf_486[128];
    snprintf(buf_486, sizeof(buf_486), "function_%d: %d, %f, %s", 486, local_486, local_486_d, param_c ? param_c : "null");
    return local_486 + (int)local_486_d;
}

typedef struct {
    int field_487;
    long field_487_b;
    double field_487_c;
    char name_487[64];
} StructType487;

int function_487(StructType487 *s, int param_a, double param_b, const char *param_c) {
    int local_487 = param_a * 487;
    double local_487_d = param_b * 487;
    char buf_487[128];
    snprintf(buf_487, sizeof(buf_487), "function_%d: %d, %f, %s", 487, local_487, local_487_d, param_c ? param_c : "null");
    return local_487 + (int)local_487_d;
}

typedef struct {
    int field_488;
    long field_488_b;
    double field_488_c;
    char name_488[64];
} StructType488;

int function_488(StructType488 *s, int param_a, double param_b, const char *param_c) {
    int local_488 = param_a * 488;
    double local_488_d = param_b * 488;
    char buf_488[128];
    snprintf(buf_488, sizeof(buf_488), "function_%d: %d, %f, %s", 488, local_488, local_488_d, param_c ? param_c : "null");
    return local_488 + (int)local_488_d;
}

typedef struct {
    int field_489;
    long field_489_b;
    double field_489_c;
    char name_489[64];
} StructType489;

int function_489(StructType489 *s, int param_a, double param_b, const char *param_c) {
    int local_489 = param_a * 489;
    double local_489_d = param_b * 489;
    char buf_489[128];
    snprintf(buf_489, sizeof(buf_489), "function_%d: %d, %f, %s", 489, local_489, local_489_d, param_c ? param_c : "null");
    return local_489 + (int)local_489_d;
}

typedef struct {
    int field_490;
    long field_490_b;
    double field_490_c;
    char name_490[64];
} StructType490;

int function_490(StructType490 *s, int param_a, double param_b, const char *param_c) {
    int local_490 = param_a * 490;
    double local_490_d = param_b * 490;
    char buf_490[128];
    snprintf(buf_490, sizeof(buf_490), "function_%d: %d, %f, %s", 490, local_490, local_490_d, param_c ? param_c : "null");
    return local_490 + (int)local_490_d;
}

typedef struct {
    int field_491;
    long field_491_b;
    double field_491_c;
    char name_491[64];
} StructType491;

int function_491(StructType491 *s, int param_a, double param_b, const char *param_c) {
    int local_491 = param_a * 491;
    double local_491_d = param_b * 491;
    char buf_491[128];
    snprintf(buf_491, sizeof(buf_491), "function_%d: %d, %f, %s", 491, local_491, local_491_d, param_c ? param_c : "null");
    return local_491 + (int)local_491_d;
}

typedef struct {
    int field_492;
    long field_492_b;
    double field_492_c;
    char name_492[64];
} StructType492;

int function_492(StructType492 *s, int param_a, double param_b, const char *param_c) {
    int local_492 = param_a * 492;
    double local_492_d = param_b * 492;
    char buf_492[128];
    snprintf(buf_492, sizeof(buf_492), "function_%d: %d, %f, %s", 492, local_492, local_492_d, param_c ? param_c : "null");
    return local_492 + (int)local_492_d;
}

typedef struct {
    int field_493;
    long field_493_b;
    double field_493_c;
    char name_493[64];
} StructType493;

int function_493(StructType493 *s, int param_a, double param_b, const char *param_c) {
    int local_493 = param_a * 493;
    double local_493_d = param_b * 493;
    char buf_493[128];
    snprintf(buf_493, sizeof(buf_493), "function_%d: %d, %f, %s", 493, local_493, local_493_d, param_c ? param_c : "null");
    return local_493 + (int)local_493_d;
}

typedef struct {
    int field_494;
    long field_494_b;
    double field_494_c;
    char name_494[64];
} StructType494;

int function_494(StructType494 *s, int param_a, double param_b, const char *param_c) {
    int local_494 = param_a * 494;
    double local_494_d = param_b * 494;
    char buf_494[128];
    snprintf(buf_494, sizeof(buf_494), "function_%d: %d, %f, %s", 494, local_494, local_494_d, param_c ? param_c : "null");
    return local_494 + (int)local_494_d;
}

typedef struct {
    int field_495;
    long field_495_b;
    double field_495_c;
    char name_495[64];
} StructType495;

int function_495(StructType495 *s, int param_a, double param_b, const char *param_c) {
    int local_495 = param_a * 495;
    double local_495_d = param_b * 495;
    char buf_495[128];
    snprintf(buf_495, sizeof(buf_495), "function_%d: %d, %f, %s", 495, local_495, local_495_d, param_c ? param_c : "null");
    return local_495 + (int)local_495_d;
}

typedef struct {
    int field_496;
    long field_496_b;
    double field_496_c;
    char name_496[64];
} StructType496;

int function_496(StructType496 *s, int param_a, double param_b, const char *param_c) {
    int local_496 = param_a * 496;
    double local_496_d = param_b * 496;
    char buf_496[128];
    snprintf(buf_496, sizeof(buf_496), "function_%d: %d, %f, %s", 496, local_496, local_496_d, param_c ? param_c : "null");
    return local_496 + (int)local_496_d;
}

typedef struct {
    int field_497;
    long field_497_b;
    double field_497_c;
    char name_497[64];
} StructType497;

int function_497(StructType497 *s, int param_a, double param_b, const char *param_c) {
    int local_497 = param_a * 497;
    double local_497_d = param_b * 497;
    char buf_497[128];
    snprintf(buf_497, sizeof(buf_497), "function_%d: %d, %f, %s", 497, local_497, local_497_d, param_c ? param_c : "null");
    return local_497 + (int)local_497_d;
}

typedef struct {
    int field_498;
    long field_498_b;
    double field_498_c;
    char name_498[64];
} StructType498;

int function_498(StructType498 *s, int param_a, double param_b, const char *param_c) {
    int local_498 = param_a * 498;
    double local_498_d = param_b * 498;
    char buf_498[128];
    snprintf(buf_498, sizeof(buf_498), "function_%d: %d, %f, %s", 498, local_498, local_498_d, param_c ? param_c : "null");
    return local_498 + (int)local_498_d;
}

typedef struct {
    int field_499;
    long field_499_b;
    double field_499_c;
    char name_499[64];
} StructType499;

int function_499(StructType499 *s, int param_a, double param_b, const char *param_c) {
    int local_499 = param_a * 499;
    double local_499_d = param_b * 499;
    char buf_499[128];
    snprintf(buf_499, sizeof(buf_499), "function_%d: %d, %f, %s", 499, local_499, local_499_d, param_c ? param_c : "null");
    return local_499 + (int)local_499_d;
}

typedef struct {
    int field_500;
    long field_500_b;
    double field_500_c;
    char name_500[64];
} StructType500;

int function_500(StructType500 *s, int param_a, double param_b, const char *param_c) {
    int local_500 = param_a * 500;
    double local_500_d = param_b * 500;
    char buf_500[128];
    snprintf(buf_500, sizeof(buf_500), "function_%d: %d, %f, %s", 500, local_500, local_500_d, param_c ? param_c : "null");
    return local_500 + (int)local_500_d;
}

typedef struct {
    int field_501;
    long field_501_b;
    double field_501_c;
    char name_501[64];
} StructType501;

int function_501(StructType501 *s, int param_a, double param_b, const char *param_c) {
    int local_501 = param_a * 501;
    double local_501_d = param_b * 501;
    char buf_501[128];
    snprintf(buf_501, sizeof(buf_501), "function_%d: %d, %f, %s", 501, local_501, local_501_d, param_c ? param_c : "null");
    return local_501 + (int)local_501_d;
}

typedef struct {
    int field_502;
    long field_502_b;
    double field_502_c;
    char name_502[64];
} StructType502;

int function_502(StructType502 *s, int param_a, double param_b, const char *param_c) {
    int local_502 = param_a * 502;
    double local_502_d = param_b * 502;
    char buf_502[128];
    snprintf(buf_502, sizeof(buf_502), "function_%d: %d, %f, %s", 502, local_502, local_502_d, param_c ? param_c : "null");
    return local_502 + (int)local_502_d;
}

typedef struct {
    int field_503;
    long field_503_b;
    double field_503_c;
    char name_503[64];
} StructType503;

int function_503(StructType503 *s, int param_a, double param_b, const char *param_c) {
    int local_503 = param_a * 503;
    double local_503_d = param_b * 503;
    char buf_503[128];
    snprintf(buf_503, sizeof(buf_503), "function_%d: %d, %f, %s", 503, local_503, local_503_d, param_c ? param_c : "null");
    return local_503 + (int)local_503_d;
}

typedef struct {
    int field_504;
    long field_504_b;
    double field_504_c;
    char name_504[64];
} StructType504;

int function_504(StructType504 *s, int param_a, double param_b, const char *param_c) {
    int local_504 = param_a * 504;
    double local_504_d = param_b * 504;
    char buf_504[128];
    snprintf(buf_504, sizeof(buf_504), "function_%d: %d, %f, %s", 504, local_504, local_504_d, param_c ? param_c : "null");
    return local_504 + (int)local_504_d;
}

typedef struct {
    int field_505;
    long field_505_b;
    double field_505_c;
    char name_505[64];
} StructType505;

int function_505(StructType505 *s, int param_a, double param_b, const char *param_c) {
    int local_505 = param_a * 505;
    double local_505_d = param_b * 505;
    char buf_505[128];
    snprintf(buf_505, sizeof(buf_505), "function_%d: %d, %f, %s", 505, local_505, local_505_d, param_c ? param_c : "null");
    return local_505 + (int)local_505_d;
}

typedef struct {
    int field_506;
    long field_506_b;
    double field_506_c;
    char name_506[64];
} StructType506;

int function_506(StructType506 *s, int param_a, double param_b, const char *param_c) {
    int local_506 = param_a * 506;
    double local_506_d = param_b * 506;
    char buf_506[128];
    snprintf(buf_506, sizeof(buf_506), "function_%d: %d, %f, %s", 506, local_506, local_506_d, param_c ? param_c : "null");
    return local_506 + (int)local_506_d;
}

typedef struct {
    int field_507;
    long field_507_b;
    double field_507_c;
    char name_507[64];
} StructType507;

int function_507(StructType507 *s, int param_a, double param_b, const char *param_c) {
    int local_507 = param_a * 507;
    double local_507_d = param_b * 507;
    char buf_507[128];
    snprintf(buf_507, sizeof(buf_507), "function_%d: %d, %f, %s", 507, local_507, local_507_d, param_c ? param_c : "null");
    return local_507 + (int)local_507_d;
}

typedef struct {
    int field_508;
    long field_508_b;
    double field_508_c;
    char name_508[64];
} StructType508;

int function_508(StructType508 *s, int param_a, double param_b, const char *param_c) {
    int local_508 = param_a * 508;
    double local_508_d = param_b * 508;
    char buf_508[128];
    snprintf(buf_508, sizeof(buf_508), "function_%d: %d, %f, %s", 508, local_508, local_508_d, param_c ? param_c : "null");
    return local_508 + (int)local_508_d;
}

typedef struct {
    int field_509;
    long field_509_b;
    double field_509_c;
    char name_509[64];
} StructType509;

int function_509(StructType509 *s, int param_a, double param_b, const char *param_c) {
    int local_509 = param_a * 509;
    double local_509_d = param_b * 509;
    char buf_509[128];
    snprintf(buf_509, sizeof(buf_509), "function_%d: %d, %f, %s", 509, local_509, local_509_d, param_c ? param_c : "null");
    return local_509 + (int)local_509_d;
}

typedef struct {
    int field_510;
    long field_510_b;
    double field_510_c;
    char name_510[64];
} StructType510;

int function_510(StructType510 *s, int param_a, double param_b, const char *param_c) {
    int local_510 = param_a * 510;
    double local_510_d = param_b * 510;
    char buf_510[128];
    snprintf(buf_510, sizeof(buf_510), "function_%d: %d, %f, %s", 510, local_510, local_510_d, param_c ? param_c : "null");
    return local_510 + (int)local_510_d;
}

typedef struct {
    int field_511;
    long field_511_b;
    double field_511_c;
    char name_511[64];
} StructType511;

int function_511(StructType511 *s, int param_a, double param_b, const char *param_c) {
    int local_511 = param_a * 511;
    double local_511_d = param_b * 511;
    char buf_511[128];
    snprintf(buf_511, sizeof(buf_511), "function_%d: %d, %f, %s", 511, local_511, local_511_d, param_c ? param_c : "null");
    return local_511 + (int)local_511_d;
}

typedef struct {
    int field_512;
    long field_512_b;
    double field_512_c;
    char name_512[64];
} StructType512;

int function_512(StructType512 *s, int param_a, double param_b, const char *param_c) {
    int local_512 = param_a * 512;
    double local_512_d = param_b * 512;
    char buf_512[128];
    snprintf(buf_512, sizeof(buf_512), "function_%d: %d, %f, %s", 512, local_512, local_512_d, param_c ? param_c : "null");
    return local_512 + (int)local_512_d;
}

typedef struct {
    int field_513;
    long field_513_b;
    double field_513_c;
    char name_513[64];
} StructType513;

int function_513(StructType513 *s, int param_a, double param_b, const char *param_c) {
    int local_513 = param_a * 513;
    double local_513_d = param_b * 513;
    char buf_513[128];
    snprintf(buf_513, sizeof(buf_513), "function_%d: %d, %f, %s", 513, local_513, local_513_d, param_c ? param_c : "null");
    return local_513 + (int)local_513_d;
}

typedef struct {
    int field_514;
    long field_514_b;
    double field_514_c;
    char name_514[64];
} StructType514;

int function_514(StructType514 *s, int param_a, double param_b, const char *param_c) {
    int local_514 = param_a * 514;
    double local_514_d = param_b * 514;
    char buf_514[128];
    snprintf(buf_514, sizeof(buf_514), "function_%d: %d, %f, %s", 514, local_514, local_514_d, param_c ? param_c : "null");
    return local_514 + (int)local_514_d;
}

typedef struct {
    int field_515;
    long field_515_b;
    double field_515_c;
    char name_515[64];
} StructType515;

int function_515(StructType515 *s, int param_a, double param_b, const char *param_c) {
    int local_515 = param_a * 515;
    double local_515_d = param_b * 515;
    char buf_515[128];
    snprintf(buf_515, sizeof(buf_515), "function_%d: %d, %f, %s", 515, local_515, local_515_d, param_c ? param_c : "null");
    return local_515 + (int)local_515_d;
}

typedef struct {
    int field_516;
    long field_516_b;
    double field_516_c;
    char name_516[64];
} StructType516;

int function_516(StructType516 *s, int param_a, double param_b, const char *param_c) {
    int local_516 = param_a * 516;
    double local_516_d = param_b * 516;
    char buf_516[128];
    snprintf(buf_516, sizeof(buf_516), "function_%d: %d, %f, %s", 516, local_516, local_516_d, param_c ? param_c : "null");
    return local_516 + (int)local_516_d;
}

typedef struct {
    int field_517;
    long field_517_b;
    double field_517_c;
    char name_517[64];
} StructType517;

int function_517(StructType517 *s, int param_a, double param_b, const char *param_c) {
    int local_517 = param_a * 517;
    double local_517_d = param_b * 517;
    char buf_517[128];
    snprintf(buf_517, sizeof(buf_517), "function_%d: %d, %f, %s", 517, local_517, local_517_d, param_c ? param_c : "null");
    return local_517 + (int)local_517_d;
}

typedef struct {
    int field_518;
    long field_518_b;
    double field_518_c;
    char name_518[64];
} StructType518;

int function_518(StructType518 *s, int param_a, double param_b, const char *param_c) {
    int local_518 = param_a * 518;
    double local_518_d = param_b * 518;
    char buf_518[128];
    snprintf(buf_518, sizeof(buf_518), "function_%d: %d, %f, %s", 518, local_518, local_518_d, param_c ? param_c : "null");
    return local_518 + (int)local_518_d;
}

typedef struct {
    int field_519;
    long field_519_b;
    double field_519_c;
    char name_519[64];
} StructType519;

int function_519(StructType519 *s, int param_a, double param_b, const char *param_c) {
    int local_519 = param_a * 519;
    double local_519_d = param_b * 519;
    char buf_519[128];
    snprintf(buf_519, sizeof(buf_519), "function_%d: %d, %f, %s", 519, local_519, local_519_d, param_c ? param_c : "null");
    return local_519 + (int)local_519_d;
}

typedef struct {
    int field_520;
    long field_520_b;
    double field_520_c;
    char name_520[64];
} StructType520;

int function_520(StructType520 *s, int param_a, double param_b, const char *param_c) {
    int local_520 = param_a * 520;
    double local_520_d = param_b * 520;
    char buf_520[128];
    snprintf(buf_520, sizeof(buf_520), "function_%d: %d, %f, %s", 520, local_520, local_520_d, param_c ? param_c : "null");
    return local_520 + (int)local_520_d;
}

typedef struct {
    int field_521;
    long field_521_b;
    double field_521_c;
    char name_521[64];
} StructType521;

int function_521(StructType521 *s, int param_a, double param_b, const char *param_c) {
    int local_521 = param_a * 521;
    double local_521_d = param_b * 521;
    char buf_521[128];
    snprintf(buf_521, sizeof(buf_521), "function_%d: %d, %f, %s", 521, local_521, local_521_d, param_c ? param_c : "null");
    return local_521 + (int)local_521_d;
}

typedef struct {
    int field_522;
    long field_522_b;
    double field_522_c;
    char name_522[64];
} StructType522;

int function_522(StructType522 *s, int param_a, double param_b, const char *param_c) {
    int local_522 = param_a * 522;
    double local_522_d = param_b * 522;
    char buf_522[128];
    snprintf(buf_522, sizeof(buf_522), "function_%d: %d, %f, %s", 522, local_522, local_522_d, param_c ? param_c : "null");
    return local_522 + (int)local_522_d;
}

typedef struct {
    int field_523;
    long field_523_b;
    double field_523_c;
    char name_523[64];
} StructType523;

int function_523(StructType523 *s, int param_a, double param_b, const char *param_c) {
    int local_523 = param_a * 523;
    double local_523_d = param_b * 523;
    char buf_523[128];
    snprintf(buf_523, sizeof(buf_523), "function_%d: %d, %f, %s", 523, local_523, local_523_d, param_c ? param_c : "null");
    return local_523 + (int)local_523_d;
}

typedef struct {
    int field_524;
    long field_524_b;
    double field_524_c;
    char name_524[64];
} StructType524;

int function_524(StructType524 *s, int param_a, double param_b, const char *param_c) {
    int local_524 = param_a * 524;
    double local_524_d = param_b * 524;
    char buf_524[128];
    snprintf(buf_524, sizeof(buf_524), "function_%d: %d, %f, %s", 524, local_524, local_524_d, param_c ? param_c : "null");
    return local_524 + (int)local_524_d;
}

typedef struct {
    int field_525;
    long field_525_b;
    double field_525_c;
    char name_525[64];
} StructType525;

int function_525(StructType525 *s, int param_a, double param_b, const char *param_c) {
    int local_525 = param_a * 525;
    double local_525_d = param_b * 525;
    char buf_525[128];
    snprintf(buf_525, sizeof(buf_525), "function_%d: %d, %f, %s", 525, local_525, local_525_d, param_c ? param_c : "null");
    return local_525 + (int)local_525_d;
}

typedef struct {
    int field_526;
    long field_526_b;
    double field_526_c;
    char name_526[64];
} StructType526;

int function_526(StructType526 *s, int param_a, double param_b, const char *param_c) {
    int local_526 = param_a * 526;
    double local_526_d = param_b * 526;
    char buf_526[128];
    snprintf(buf_526, sizeof(buf_526), "function_%d: %d, %f, %s", 526, local_526, local_526_d, param_c ? param_c : "null");
    return local_526 + (int)local_526_d;
}

typedef struct {
    int field_527;
    long field_527_b;
    double field_527_c;
    char name_527[64];
} StructType527;

int function_527(StructType527 *s, int param_a, double param_b, const char *param_c) {
    int local_527 = param_a * 527;
    double local_527_d = param_b * 527;
    char buf_527[128];
    snprintf(buf_527, sizeof(buf_527), "function_%d: %d, %f, %s", 527, local_527, local_527_d, param_c ? param_c : "null");
    return local_527 + (int)local_527_d;
}

typedef struct {
    int field_528;
    long field_528_b;
    double field_528_c;
    char name_528[64];
} StructType528;

int function_528(StructType528 *s, int param_a, double param_b, const char *param_c) {
    int local_528 = param_a * 528;
    double local_528_d = param_b * 528;
    char buf_528[128];
    snprintf(buf_528, sizeof(buf_528), "function_%d: %d, %f, %s", 528, local_528, local_528_d, param_c ? param_c : "null");
    return local_528 + (int)local_528_d;
}

typedef struct {
    int field_529;
    long field_529_b;
    double field_529_c;
    char name_529[64];
} StructType529;

int function_529(StructType529 *s, int param_a, double param_b, const char *param_c) {
    int local_529 = param_a * 529;
    double local_529_d = param_b * 529;
    char buf_529[128];
    snprintf(buf_529, sizeof(buf_529), "function_%d: %d, %f, %s", 529, local_529, local_529_d, param_c ? param_c : "null");
    return local_529 + (int)local_529_d;
}

typedef struct {
    int field_530;
    long field_530_b;
    double field_530_c;
    char name_530[64];
} StructType530;

int function_530(StructType530 *s, int param_a, double param_b, const char *param_c) {
    int local_530 = param_a * 530;
    double local_530_d = param_b * 530;
    char buf_530[128];
    snprintf(buf_530, sizeof(buf_530), "function_%d: %d, %f, %s", 530, local_530, local_530_d, param_c ? param_c : "null");
    return local_530 + (int)local_530_d;
}

typedef struct {
    int field_531;
    long field_531_b;
    double field_531_c;
    char name_531[64];
} StructType531;

int function_531(StructType531 *s, int param_a, double param_b, const char *param_c) {
    int local_531 = param_a * 531;
    double local_531_d = param_b * 531;
    char buf_531[128];
    snprintf(buf_531, sizeof(buf_531), "function_%d: %d, %f, %s", 531, local_531, local_531_d, param_c ? param_c : "null");
    return local_531 + (int)local_531_d;
}

typedef struct {
    int field_532;
    long field_532_b;
    double field_532_c;
    char name_532[64];
} StructType532;

int function_532(StructType532 *s, int param_a, double param_b, const char *param_c) {
    int local_532 = param_a * 532;
    double local_532_d = param_b * 532;
    char buf_532[128];
    snprintf(buf_532, sizeof(buf_532), "function_%d: %d, %f, %s", 532, local_532, local_532_d, param_c ? param_c : "null");
    return local_532 + (int)local_532_d;
}

typedef struct {
    int field_533;
    long field_533_b;
    double field_533_c;
    char name_533[64];
} StructType533;

int function_533(StructType533 *s, int param_a, double param_b, const char *param_c) {
    int local_533 = param_a * 533;
    double local_533_d = param_b * 533;
    char buf_533[128];
    snprintf(buf_533, sizeof(buf_533), "function_%d: %d, %f, %s", 533, local_533, local_533_d, param_c ? param_c : "null");
    return local_533 + (int)local_533_d;
}

typedef struct {
    int field_534;
    long field_534_b;
    double field_534_c;
    char name_534[64];
} StructType534;

int function_534(StructType534 *s, int param_a, double param_b, const char *param_c) {
    int local_534 = param_a * 534;
    double local_534_d = param_b * 534;
    char buf_534[128];
    snprintf(buf_534, sizeof(buf_534), "function_%d: %d, %f, %s", 534, local_534, local_534_d, param_c ? param_c : "null");
    return local_534 + (int)local_534_d;
}

typedef struct {
    int field_535;
    long field_535_b;
    double field_535_c;
    char name_535[64];
} StructType535;

int function_535(StructType535 *s, int param_a, double param_b, const char *param_c) {
    int local_535 = param_a * 535;
    double local_535_d = param_b * 535;
    char buf_535[128];
    snprintf(buf_535, sizeof(buf_535), "function_%d: %d, %f, %s", 535, local_535, local_535_d, param_c ? param_c : "null");
    return local_535 + (int)local_535_d;
}

typedef struct {
    int field_536;
    long field_536_b;
    double field_536_c;
    char name_536[64];
} StructType536;

int function_536(StructType536 *s, int param_a, double param_b, const char *param_c) {
    int local_536 = param_a * 536;
    double local_536_d = param_b * 536;
    char buf_536[128];
    snprintf(buf_536, sizeof(buf_536), "function_%d: %d, %f, %s", 536, local_536, local_536_d, param_c ? param_c : "null");
    return local_536 + (int)local_536_d;
}

typedef struct {
    int field_537;
    long field_537_b;
    double field_537_c;
    char name_537[64];
} StructType537;

int function_537(StructType537 *s, int param_a, double param_b, const char *param_c) {
    int local_537 = param_a * 537;
    double local_537_d = param_b * 537;
    char buf_537[128];
    snprintf(buf_537, sizeof(buf_537), "function_%d: %d, %f, %s", 537, local_537, local_537_d, param_c ? param_c : "null");
    return local_537 + (int)local_537_d;
}

typedef struct {
    int field_538;
    long field_538_b;
    double field_538_c;
    char name_538[64];
} StructType538;

int function_538(StructType538 *s, int param_a, double param_b, const char *param_c) {
    int local_538 = param_a * 538;
    double local_538_d = param_b * 538;
    char buf_538[128];
    snprintf(buf_538, sizeof(buf_538), "function_%d: %d, %f, %s", 538, local_538, local_538_d, param_c ? param_c : "null");
    return local_538 + (int)local_538_d;
}

typedef struct {
    int field_539;
    long field_539_b;
    double field_539_c;
    char name_539[64];
} StructType539;

int function_539(StructType539 *s, int param_a, double param_b, const char *param_c) {
    int local_539 = param_a * 539;
    double local_539_d = param_b * 539;
    char buf_539[128];
    snprintf(buf_539, sizeof(buf_539), "function_%d: %d, %f, %s", 539, local_539, local_539_d, param_c ? param_c : "null");
    return local_539 + (int)local_539_d;
}

typedef struct {
    int field_540;
    long field_540_b;
    double field_540_c;
    char name_540[64];
} StructType540;

int function_540(StructType540 *s, int param_a, double param_b, const char *param_c) {
    int local_540 = param_a * 540;
    double local_540_d = param_b * 540;
    char buf_540[128];
    snprintf(buf_540, sizeof(buf_540), "function_%d: %d, %f, %s", 540, local_540, local_540_d, param_c ? param_c : "null");
    return local_540 + (int)local_540_d;
}

typedef struct {
    int field_541;
    long field_541_b;
    double field_541_c;
    char name_541[64];
} StructType541;

int function_541(StructType541 *s, int param_a, double param_b, const char *param_c) {
    int local_541 = param_a * 541;
    double local_541_d = param_b * 541;
    char buf_541[128];
    snprintf(buf_541, sizeof(buf_541), "function_%d: %d, %f, %s", 541, local_541, local_541_d, param_c ? param_c : "null");
    return local_541 + (int)local_541_d;
}

typedef struct {
    int field_542;
    long field_542_b;
    double field_542_c;
    char name_542[64];
} StructType542;

int function_542(StructType542 *s, int param_a, double param_b, const char *param_c) {
    int local_542 = param_a * 542;
    double local_542_d = param_b * 542;
    char buf_542[128];
    snprintf(buf_542, sizeof(buf_542), "function_%d: %d, %f, %s", 542, local_542, local_542_d, param_c ? param_c : "null");
    return local_542 + (int)local_542_d;
}

typedef struct {
    int field_543;
    long field_543_b;
    double field_543_c;
    char name_543[64];
} StructType543;

int function_543(StructType543 *s, int param_a, double param_b, const char *param_c) {
    int local_543 = param_a * 543;
    double local_543_d = param_b * 543;
    char buf_543[128];
    snprintf(buf_543, sizeof(buf_543), "function_%d: %d, %f, %s", 543, local_543, local_543_d, param_c ? param_c : "null");
    return local_543 + (int)local_543_d;
}

typedef struct {
    int field_544;
    long field_544_b;
    double field_544_c;
    char name_544[64];
} StructType544;

int function_544(StructType544 *s, int param_a, double param_b, const char *param_c) {
    int local_544 = param_a * 544;
    double local_544_d = param_b * 544;
    char buf_544[128];
    snprintf(buf_544, sizeof(buf_544), "function_%d: %d, %f, %s", 544, local_544, local_544_d, param_c ? param_c : "null");
    return local_544 + (int)local_544_d;
}

typedef struct {
    int field_545;
    long field_545_b;
    double field_545_c;
    char name_545[64];
} StructType545;

int function_545(StructType545 *s, int param_a, double param_b, const char *param_c) {
    int local_545 = param_a * 545;
    double local_545_d = param_b * 545;
    char buf_545[128];
    snprintf(buf_545, sizeof(buf_545), "function_%d: %d, %f, %s", 545, local_545, local_545_d, param_c ? param_c : "null");
    return local_545 + (int)local_545_d;
}

typedef struct {
    int field_546;
    long field_546_b;
    double field_546_c;
    char name_546[64];
} StructType546;

int function_546(StructType546 *s, int param_a, double param_b, const char *param_c) {
    int local_546 = param_a * 546;
    double local_546_d = param_b * 546;
    char buf_546[128];
    snprintf(buf_546, sizeof(buf_546), "function_%d: %d, %f, %s", 546, local_546, local_546_d, param_c ? param_c : "null");
    return local_546 + (int)local_546_d;
}

typedef struct {
    int field_547;
    long field_547_b;
    double field_547_c;
    char name_547[64];
} StructType547;

int function_547(StructType547 *s, int param_a, double param_b, const char *param_c) {
    int local_547 = param_a * 547;
    double local_547_d = param_b * 547;
    char buf_547[128];
    snprintf(buf_547, sizeof(buf_547), "function_%d: %d, %f, %s", 547, local_547, local_547_d, param_c ? param_c : "null");
    return local_547 + (int)local_547_d;
}

typedef struct {
    int field_548;
    long field_548_b;
    double field_548_c;
    char name_548[64];
} StructType548;

int function_548(StructType548 *s, int param_a, double param_b, const char *param_c) {
    int local_548 = param_a * 548;
    double local_548_d = param_b * 548;
    char buf_548[128];
    snprintf(buf_548, sizeof(buf_548), "function_%d: %d, %f, %s", 548, local_548, local_548_d, param_c ? param_c : "null");
    return local_548 + (int)local_548_d;
}

typedef struct {
    int field_549;
    long field_549_b;
    double field_549_c;
    char name_549[64];
} StructType549;

int function_549(StructType549 *s, int param_a, double param_b, const char *param_c) {
    int local_549 = param_a * 549;
    double local_549_d = param_b * 549;
    char buf_549[128];
    snprintf(buf_549, sizeof(buf_549), "function_%d: %d, %f, %s", 549, local_549, local_549_d, param_c ? param_c : "null");
    return local_549 + (int)local_549_d;
}

typedef struct {
    int field_550;
    long field_550_b;
    double field_550_c;
    char name_550[64];
} StructType550;

int function_550(StructType550 *s, int param_a, double param_b, const char *param_c) {
    int local_550 = param_a * 550;
    double local_550_d = param_b * 550;
    char buf_550[128];
    snprintf(buf_550, sizeof(buf_550), "function_%d: %d, %f, %s", 550, local_550, local_550_d, param_c ? param_c : "null");
    return local_550 + (int)local_550_d;
}

typedef struct {
    int field_551;
    long field_551_b;
    double field_551_c;
    char name_551[64];
} StructType551;

int function_551(StructType551 *s, int param_a, double param_b, const char *param_c) {
    int local_551 = param_a * 551;
    double local_551_d = param_b * 551;
    char buf_551[128];
    snprintf(buf_551, sizeof(buf_551), "function_%d: %d, %f, %s", 551, local_551, local_551_d, param_c ? param_c : "null");
    return local_551 + (int)local_551_d;
}

typedef struct {
    int field_552;
    long field_552_b;
    double field_552_c;
    char name_552[64];
} StructType552;

int function_552(StructType552 *s, int param_a, double param_b, const char *param_c) {
    int local_552 = param_a * 552;
    double local_552_d = param_b * 552;
    char buf_552[128];
    snprintf(buf_552, sizeof(buf_552), "function_%d: %d, %f, %s", 552, local_552, local_552_d, param_c ? param_c : "null");
    return local_552 + (int)local_552_d;
}

typedef struct {
    int field_553;
    long field_553_b;
    double field_553_c;
    char name_553[64];
} StructType553;

int function_553(StructType553 *s, int param_a, double param_b, const char *param_c) {
    int local_553 = param_a * 553;
    double local_553_d = param_b * 553;
    char buf_553[128];
    snprintf(buf_553, sizeof(buf_553), "function_%d: %d, %f, %s", 553, local_553, local_553_d, param_c ? param_c : "null");
    return local_553 + (int)local_553_d;
}

typedef struct {
    int field_554;
    long field_554_b;
    double field_554_c;
    char name_554[64];
} StructType554;

int function_554(StructType554 *s, int param_a, double param_b, const char *param_c) {
    int local_554 = param_a * 554;
    double local_554_d = param_b * 554;
    char buf_554[128];
    snprintf(buf_554, sizeof(buf_554), "function_%d: %d, %f, %s", 554, local_554, local_554_d, param_c ? param_c : "null");
    return local_554 + (int)local_554_d;
}

typedef struct {
    int field_555;
    long field_555_b;
    double field_555_c;
    char name_555[64];
} StructType555;

int function_555(StructType555 *s, int param_a, double param_b, const char *param_c) {
    int local_555 = param_a * 555;
    double local_555_d = param_b * 555;
    char buf_555[128];
    snprintf(buf_555, sizeof(buf_555), "function_%d: %d, %f, %s", 555, local_555, local_555_d, param_c ? param_c : "null");
    return local_555 + (int)local_555_d;
}

typedef struct {
    int field_556;
    long field_556_b;
    double field_556_c;
    char name_556[64];
} StructType556;

int function_556(StructType556 *s, int param_a, double param_b, const char *param_c) {
    int local_556 = param_a * 556;
    double local_556_d = param_b * 556;
    char buf_556[128];
    snprintf(buf_556, sizeof(buf_556), "function_%d: %d, %f, %s", 556, local_556, local_556_d, param_c ? param_c : "null");
    return local_556 + (int)local_556_d;
}

typedef struct {
    int field_557;
    long field_557_b;
    double field_557_c;
    char name_557[64];
} StructType557;

int function_557(StructType557 *s, int param_a, double param_b, const char *param_c) {
    int local_557 = param_a * 557;
    double local_557_d = param_b * 557;
    char buf_557[128];
    snprintf(buf_557, sizeof(buf_557), "function_%d: %d, %f, %s", 557, local_557, local_557_d, param_c ? param_c : "null");
    return local_557 + (int)local_557_d;
}

typedef struct {
    int field_558;
    long field_558_b;
    double field_558_c;
    char name_558[64];
} StructType558;

int function_558(StructType558 *s, int param_a, double param_b, const char *param_c) {
    int local_558 = param_a * 558;
    double local_558_d = param_b * 558;
    char buf_558[128];
    snprintf(buf_558, sizeof(buf_558), "function_%d: %d, %f, %s", 558, local_558, local_558_d, param_c ? param_c : "null");
    return local_558 + (int)local_558_d;
}

typedef struct {
    int field_559;
    long field_559_b;
    double field_559_c;
    char name_559[64];
} StructType559;

int function_559(StructType559 *s, int param_a, double param_b, const char *param_c) {
    int local_559 = param_a * 559;
    double local_559_d = param_b * 559;
    char buf_559[128];
    snprintf(buf_559, sizeof(buf_559), "function_%d: %d, %f, %s", 559, local_559, local_559_d, param_c ? param_c : "null");
    return local_559 + (int)local_559_d;
}

typedef struct {
    int field_560;
    long field_560_b;
    double field_560_c;
    char name_560[64];
} StructType560;

int function_560(StructType560 *s, int param_a, double param_b, const char *param_c) {
    int local_560 = param_a * 560;
    double local_560_d = param_b * 560;
    char buf_560[128];
    snprintf(buf_560, sizeof(buf_560), "function_%d: %d, %f, %s", 560, local_560, local_560_d, param_c ? param_c : "null");
    return local_560 + (int)local_560_d;
}

typedef struct {
    int field_561;
    long field_561_b;
    double field_561_c;
    char name_561[64];
} StructType561;

int function_561(StructType561 *s, int param_a, double param_b, const char *param_c) {
    int local_561 = param_a * 561;
    double local_561_d = param_b * 561;
    char buf_561[128];
    snprintf(buf_561, sizeof(buf_561), "function_%d: %d, %f, %s", 561, local_561, local_561_d, param_c ? param_c : "null");
    return local_561 + (int)local_561_d;
}

typedef struct {
    int field_562;
    long field_562_b;
    double field_562_c;
    char name_562[64];
} StructType562;

int function_562(StructType562 *s, int param_a, double param_b, const char *param_c) {
    int local_562 = param_a * 562;
    double local_562_d = param_b * 562;
    char buf_562[128];
    snprintf(buf_562, sizeof(buf_562), "function_%d: %d, %f, %s", 562, local_562, local_562_d, param_c ? param_c : "null");
    return local_562 + (int)local_562_d;
}

typedef struct {
    int field_563;
    long field_563_b;
    double field_563_c;
    char name_563[64];
} StructType563;

int function_563(StructType563 *s, int param_a, double param_b, const char *param_c) {
    int local_563 = param_a * 563;
    double local_563_d = param_b * 563;
    char buf_563[128];
    snprintf(buf_563, sizeof(buf_563), "function_%d: %d, %f, %s", 563, local_563, local_563_d, param_c ? param_c : "null");
    return local_563 + (int)local_563_d;
}

typedef struct {
    int field_564;
    long field_564_b;
    double field_564_c;
    char name_564[64];
} StructType564;

int function_564(StructType564 *s, int param_a, double param_b, const char *param_c) {
    int local_564 = param_a * 564;
    double local_564_d = param_b * 564;
    char buf_564[128];
    snprintf(buf_564, sizeof(buf_564), "function_%d: %d, %f, %s", 564, local_564, local_564_d, param_c ? param_c : "null");
    return local_564 + (int)local_564_d;
}

typedef struct {
    int field_565;
    long field_565_b;
    double field_565_c;
    char name_565[64];
} StructType565;

int function_565(StructType565 *s, int param_a, double param_b, const char *param_c) {
    int local_565 = param_a * 565;
    double local_565_d = param_b * 565;
    char buf_565[128];
    snprintf(buf_565, sizeof(buf_565), "function_%d: %d, %f, %s", 565, local_565, local_565_d, param_c ? param_c : "null");
    return local_565 + (int)local_565_d;
}

typedef struct {
    int field_566;
    long field_566_b;
    double field_566_c;
    char name_566[64];
} StructType566;

int function_566(StructType566 *s, int param_a, double param_b, const char *param_c) {
    int local_566 = param_a * 566;
    double local_566_d = param_b * 566;
    char buf_566[128];
    snprintf(buf_566, sizeof(buf_566), "function_%d: %d, %f, %s", 566, local_566, local_566_d, param_c ? param_c : "null");
    return local_566 + (int)local_566_d;
}

typedef struct {
    int field_567;
    long field_567_b;
    double field_567_c;
    char name_567[64];
} StructType567;

int function_567(StructType567 *s, int param_a, double param_b, const char *param_c) {
    int local_567 = param_a * 567;
    double local_567_d = param_b * 567;
    char buf_567[128];
    snprintf(buf_567, sizeof(buf_567), "function_%d: %d, %f, %s", 567, local_567, local_567_d, param_c ? param_c : "null");
    return local_567 + (int)local_567_d;
}

typedef struct {
    int field_568;
    long field_568_b;
    double field_568_c;
    char name_568[64];
} StructType568;

int function_568(StructType568 *s, int param_a, double param_b, const char *param_c) {
    int local_568 = param_a * 568;
    double local_568_d = param_b * 568;
    char buf_568[128];
    snprintf(buf_568, sizeof(buf_568), "function_%d: %d, %f, %s", 568, local_568, local_568_d, param_c ? param_c : "null");
    return local_568 + (int)local_568_d;
}

typedef struct {
    int field_569;
    long field_569_b;
    double field_569_c;
    char name_569[64];
} StructType569;

int function_569(StructType569 *s, int param_a, double param_b, const char *param_c) {
    int local_569 = param_a * 569;
    double local_569_d = param_b * 569;
    char buf_569[128];
    snprintf(buf_569, sizeof(buf_569), "function_%d: %d, %f, %s", 569, local_569, local_569_d, param_c ? param_c : "null");
    return local_569 + (int)local_569_d;
}

typedef struct {
    int field_570;
    long field_570_b;
    double field_570_c;
    char name_570[64];
} StructType570;

int function_570(StructType570 *s, int param_a, double param_b, const char *param_c) {
    int local_570 = param_a * 570;
    double local_570_d = param_b * 570;
    char buf_570[128];
    snprintf(buf_570, sizeof(buf_570), "function_%d: %d, %f, %s", 570, local_570, local_570_d, param_c ? param_c : "null");
    return local_570 + (int)local_570_d;
}

typedef struct {
    int field_571;
    long field_571_b;
    double field_571_c;
    char name_571[64];
} StructType571;

int function_571(StructType571 *s, int param_a, double param_b, const char *param_c) {
    int local_571 = param_a * 571;
    double local_571_d = param_b * 571;
    char buf_571[128];
    snprintf(buf_571, sizeof(buf_571), "function_%d: %d, %f, %s", 571, local_571, local_571_d, param_c ? param_c : "null");
    return local_571 + (int)local_571_d;
}

typedef struct {
    int field_572;
    long field_572_b;
    double field_572_c;
    char name_572[64];
} StructType572;

int function_572(StructType572 *s, int param_a, double param_b, const char *param_c) {
    int local_572 = param_a * 572;
    double local_572_d = param_b * 572;
    char buf_572[128];
    snprintf(buf_572, sizeof(buf_572), "function_%d: %d, %f, %s", 572, local_572, local_572_d, param_c ? param_c : "null");
    return local_572 + (int)local_572_d;
}

typedef struct {
    int field_573;
    long field_573_b;
    double field_573_c;
    char name_573[64];
} StructType573;

int function_573(StructType573 *s, int param_a, double param_b, const char *param_c) {
    int local_573 = param_a * 573;
    double local_573_d = param_b * 573;
    char buf_573[128];
    snprintf(buf_573, sizeof(buf_573), "function_%d: %d, %f, %s", 573, local_573, local_573_d, param_c ? param_c : "null");
    return local_573 + (int)local_573_d;
}

typedef struct {
    int field_574;
    long field_574_b;
    double field_574_c;
    char name_574[64];
} StructType574;

int function_574(StructType574 *s, int param_a, double param_b, const char *param_c) {
    int local_574 = param_a * 574;
    double local_574_d = param_b * 574;
    char buf_574[128];
    snprintf(buf_574, sizeof(buf_574), "function_%d: %d, %f, %s", 574, local_574, local_574_d, param_c ? param_c : "null");
    return local_574 + (int)local_574_d;
}

typedef struct {
    int field_575;
    long field_575_b;
    double field_575_c;
    char name_575[64];
} StructType575;

int function_575(StructType575 *s, int param_a, double param_b, const char *param_c) {
    int local_575 = param_a * 575;
    double local_575_d = param_b * 575;
    char buf_575[128];
    snprintf(buf_575, sizeof(buf_575), "function_%d: %d, %f, %s", 575, local_575, local_575_d, param_c ? param_c : "null");
    return local_575 + (int)local_575_d;
}

typedef struct {
    int field_576;
    long field_576_b;
    double field_576_c;
    char name_576[64];
} StructType576;

int function_576(StructType576 *s, int param_a, double param_b, const char *param_c) {
    int local_576 = param_a * 576;
    double local_576_d = param_b * 576;
    char buf_576[128];
    snprintf(buf_576, sizeof(buf_576), "function_%d: %d, %f, %s", 576, local_576, local_576_d, param_c ? param_c : "null");
    return local_576 + (int)local_576_d;
}

typedef struct {
    int field_577;
    long field_577_b;
    double field_577_c;
    char name_577[64];
} StructType577;

int function_577(StructType577 *s, int param_a, double param_b, const char *param_c) {
    int local_577 = param_a * 577;
    double local_577_d = param_b * 577;
    char buf_577[128];
    snprintf(buf_577, sizeof(buf_577), "function_%d: %d, %f, %s", 577, local_577, local_577_d, param_c ? param_c : "null");
    return local_577 + (int)local_577_d;
}

typedef struct {
    int field_578;
    long field_578_b;
    double field_578_c;
    char name_578[64];
} StructType578;

int function_578(StructType578 *s, int param_a, double param_b, const char *param_c) {
    int local_578 = param_a * 578;
    double local_578_d = param_b * 578;
    char buf_578[128];
    snprintf(buf_578, sizeof(buf_578), "function_%d: %d, %f, %s", 578, local_578, local_578_d, param_c ? param_c : "null");
    return local_578 + (int)local_578_d;
}

typedef struct {
    int field_579;
    long field_579_b;
    double field_579_c;
    char name_579[64];
} StructType579;

int function_579(StructType579 *s, int param_a, double param_b, const char *param_c) {
    int local_579 = param_a * 579;
    double local_579_d = param_b * 579;
    char buf_579[128];
    snprintf(buf_579, sizeof(buf_579), "function_%d: %d, %f, %s", 579, local_579, local_579_d, param_c ? param_c : "null");
    return local_579 + (int)local_579_d;
}

typedef struct {
    int field_580;
    long field_580_b;
    double field_580_c;
    char name_580[64];
} StructType580;

int function_580(StructType580 *s, int param_a, double param_b, const char *param_c) {
    int local_580 = param_a * 580;
    double local_580_d = param_b * 580;
    char buf_580[128];
    snprintf(buf_580, sizeof(buf_580), "function_%d: %d, %f, %s", 580, local_580, local_580_d, param_c ? param_c : "null");
    return local_580 + (int)local_580_d;
}

typedef struct {
    int field_581;
    long field_581_b;
    double field_581_c;
    char name_581[64];
} StructType581;

int function_581(StructType581 *s, int param_a, double param_b, const char *param_c) {
    int local_581 = param_a * 581;
    double local_581_d = param_b * 581;
    char buf_581[128];
    snprintf(buf_581, sizeof(buf_581), "function_%d: %d, %f, %s", 581, local_581, local_581_d, param_c ? param_c : "null");
    return local_581 + (int)local_581_d;
}

typedef struct {
    int field_582;
    long field_582_b;
    double field_582_c;
    char name_582[64];
} StructType582;

int function_582(StructType582 *s, int param_a, double param_b, const char *param_c) {
    int local_582 = param_a * 582;
    double local_582_d = param_b * 582;
    char buf_582[128];
    snprintf(buf_582, sizeof(buf_582), "function_%d: %d, %f, %s", 582, local_582, local_582_d, param_c ? param_c : "null");
    return local_582 + (int)local_582_d;
}

typedef struct {
    int field_583;
    long field_583_b;
    double field_583_c;
    char name_583[64];
} StructType583;

int function_583(StructType583 *s, int param_a, double param_b, const char *param_c) {
    int local_583 = param_a * 583;
    double local_583_d = param_b * 583;
    char buf_583[128];
    snprintf(buf_583, sizeof(buf_583), "function_%d: %d, %f, %s", 583, local_583, local_583_d, param_c ? param_c : "null");
    return local_583 + (int)local_583_d;
}

typedef struct {
    int field_584;
    long field_584_b;
    double field_584_c;
    char name_584[64];
} StructType584;

int function_584(StructType584 *s, int param_a, double param_b, const char *param_c) {
    int local_584 = param_a * 584;
    double local_584_d = param_b * 584;
    char buf_584[128];
    snprintf(buf_584, sizeof(buf_584), "function_%d: %d, %f, %s", 584, local_584, local_584_d, param_c ? param_c : "null");
    return local_584 + (int)local_584_d;
}

typedef struct {
    int field_585;
    long field_585_b;
    double field_585_c;
    char name_585[64];
} StructType585;

int function_585(StructType585 *s, int param_a, double param_b, const char *param_c) {
    int local_585 = param_a * 585;
    double local_585_d = param_b * 585;
    char buf_585[128];
    snprintf(buf_585, sizeof(buf_585), "function_%d: %d, %f, %s", 585, local_585, local_585_d, param_c ? param_c : "null");
    return local_585 + (int)local_585_d;
}

typedef struct {
    int field_586;
    long field_586_b;
    double field_586_c;
    char name_586[64];
} StructType586;

int function_586(StructType586 *s, int param_a, double param_b, const char *param_c) {
    int local_586 = param_a * 586;
    double local_586_d = param_b * 586;
    char buf_586[128];
    snprintf(buf_586, sizeof(buf_586), "function_%d: %d, %f, %s", 586, local_586, local_586_d, param_c ? param_c : "null");
    return local_586 + (int)local_586_d;
}

typedef struct {
    int field_587;
    long field_587_b;
    double field_587_c;
    char name_587[64];
} StructType587;

int function_587(StructType587 *s, int param_a, double param_b, const char *param_c) {
    int local_587 = param_a * 587;
    double local_587_d = param_b * 587;
    char buf_587[128];
    snprintf(buf_587, sizeof(buf_587), "function_%d: %d, %f, %s", 587, local_587, local_587_d, param_c ? param_c : "null");
    return local_587 + (int)local_587_d;
}

typedef struct {
    int field_588;
    long field_588_b;
    double field_588_c;
    char name_588[64];
} StructType588;

int function_588(StructType588 *s, int param_a, double param_b, const char *param_c) {
    int local_588 = param_a * 588;
    double local_588_d = param_b * 588;
    char buf_588[128];
    snprintf(buf_588, sizeof(buf_588), "function_%d: %d, %f, %s", 588, local_588, local_588_d, param_c ? param_c : "null");
    return local_588 + (int)local_588_d;
}

typedef struct {
    int field_589;
    long field_589_b;
    double field_589_c;
    char name_589[64];
} StructType589;

int function_589(StructType589 *s, int param_a, double param_b, const char *param_c) {
    int local_589 = param_a * 589;
    double local_589_d = param_b * 589;
    char buf_589[128];
    snprintf(buf_589, sizeof(buf_589), "function_%d: %d, %f, %s", 589, local_589, local_589_d, param_c ? param_c : "null");
    return local_589 + (int)local_589_d;
}

typedef struct {
    int field_590;
    long field_590_b;
    double field_590_c;
    char name_590[64];
} StructType590;

int function_590(StructType590 *s, int param_a, double param_b, const char *param_c) {
    int local_590 = param_a * 590;
    double local_590_d = param_b * 590;
    char buf_590[128];
    snprintf(buf_590, sizeof(buf_590), "function_%d: %d, %f, %s", 590, local_590, local_590_d, param_c ? param_c : "null");
    return local_590 + (int)local_590_d;
}

typedef struct {
    int field_591;
    long field_591_b;
    double field_591_c;
    char name_591[64];
} StructType591;

int function_591(StructType591 *s, int param_a, double param_b, const char *param_c) {
    int local_591 = param_a * 591;
    double local_591_d = param_b * 591;
    char buf_591[128];
    snprintf(buf_591, sizeof(buf_591), "function_%d: %d, %f, %s", 591, local_591, local_591_d, param_c ? param_c : "null");
    return local_591 + (int)local_591_d;
}

typedef struct {
    int field_592;
    long field_592_b;
    double field_592_c;
    char name_592[64];
} StructType592;

int function_592(StructType592 *s, int param_a, double param_b, const char *param_c) {
    int local_592 = param_a * 592;
    double local_592_d = param_b * 592;
    char buf_592[128];
    snprintf(buf_592, sizeof(buf_592), "function_%d: %d, %f, %s", 592, local_592, local_592_d, param_c ? param_c : "null");
    return local_592 + (int)local_592_d;
}

typedef struct {
    int field_593;
    long field_593_b;
    double field_593_c;
    char name_593[64];
} StructType593;

int function_593(StructType593 *s, int param_a, double param_b, const char *param_c) {
    int local_593 = param_a * 593;
    double local_593_d = param_b * 593;
    char buf_593[128];
    snprintf(buf_593, sizeof(buf_593), "function_%d: %d, %f, %s", 593, local_593, local_593_d, param_c ? param_c : "null");
    return local_593 + (int)local_593_d;
}

typedef struct {
    int field_594;
    long field_594_b;
    double field_594_c;
    char name_594[64];
} StructType594;

int function_594(StructType594 *s, int param_a, double param_b, const char *param_c) {
    int local_594 = param_a * 594;
    double local_594_d = param_b * 594;
    char buf_594[128];
    snprintf(buf_594, sizeof(buf_594), "function_%d: %d, %f, %s", 594, local_594, local_594_d, param_c ? param_c : "null");
    return local_594 + (int)local_594_d;
}

typedef struct {
    int field_595;
    long field_595_b;
    double field_595_c;
    char name_595[64];
} StructType595;

int function_595(StructType595 *s, int param_a, double param_b, const char *param_c) {
    int local_595 = param_a * 595;
    double local_595_d = param_b * 595;
    char buf_595[128];
    snprintf(buf_595, sizeof(buf_595), "function_%d: %d, %f, %s", 595, local_595, local_595_d, param_c ? param_c : "null");
    return local_595 + (int)local_595_d;
}

typedef struct {
    int field_596;
    long field_596_b;
    double field_596_c;
    char name_596[64];
} StructType596;

int function_596(StructType596 *s, int param_a, double param_b, const char *param_c) {
    int local_596 = param_a * 596;
    double local_596_d = param_b * 596;
    char buf_596[128];
    snprintf(buf_596, sizeof(buf_596), "function_%d: %d, %f, %s", 596, local_596, local_596_d, param_c ? param_c : "null");
    return local_596 + (int)local_596_d;
}

typedef struct {
    int field_597;
    long field_597_b;
    double field_597_c;
    char name_597[64];
} StructType597;

int function_597(StructType597 *s, int param_a, double param_b, const char *param_c) {
    int local_597 = param_a * 597;
    double local_597_d = param_b * 597;
    char buf_597[128];
    snprintf(buf_597, sizeof(buf_597), "function_%d: %d, %f, %s", 597, local_597, local_597_d, param_c ? param_c : "null");
    return local_597 + (int)local_597_d;
}

typedef struct {
    int field_598;
    long field_598_b;
    double field_598_c;
    char name_598[64];
} StructType598;

int function_598(StructType598 *s, int param_a, double param_b, const char *param_c) {
    int local_598 = param_a * 598;
    double local_598_d = param_b * 598;
    char buf_598[128];
    snprintf(buf_598, sizeof(buf_598), "function_%d: %d, %f, %s", 598, local_598, local_598_d, param_c ? param_c : "null");
    return local_598 + (int)local_598_d;
}

typedef struct {
    int field_599;
    long field_599_b;
    double field_599_c;
    char name_599[64];
} StructType599;

int function_599(StructType599 *s, int param_a, double param_b, const char *param_c) {
    int local_599 = param_a * 599;
    double local_599_d = param_b * 599;
    char buf_599[128];
    snprintf(buf_599, sizeof(buf_599), "function_%d: %d, %f, %s", 599, local_599, local_599_d, param_c ? param_c : "null");
    return local_599 + (int)local_599_d;
}

typedef struct {
    int field_600;
    long field_600_b;
    double field_600_c;
    char name_600[64];
} StructType600;

int function_600(StructType600 *s, int param_a, double param_b, const char *param_c) {
    int local_600 = param_a * 600;
    double local_600_d = param_b * 600;
    char buf_600[128];
    snprintf(buf_600, sizeof(buf_600), "function_%d: %d, %f, %s", 600, local_600, local_600_d, param_c ? param_c : "null");
    return local_600 + (int)local_600_d;
}

typedef struct {
    int field_601;
    long field_601_b;
    double field_601_c;
    char name_601[64];
} StructType601;

int function_601(StructType601 *s, int param_a, double param_b, const char *param_c) {
    int local_601 = param_a * 601;
    double local_601_d = param_b * 601;
    char buf_601[128];
    snprintf(buf_601, sizeof(buf_601), "function_%d: %d, %f, %s", 601, local_601, local_601_d, param_c ? param_c : "null");
    return local_601 + (int)local_601_d;
}

typedef struct {
    int field_602;
    long field_602_b;
    double field_602_c;
    char name_602[64];
} StructType602;

int function_602(StructType602 *s, int param_a, double param_b, const char *param_c) {
    int local_602 = param_a * 602;
    double local_602_d = param_b * 602;
    char buf_602[128];
    snprintf(buf_602, sizeof(buf_602), "function_%d: %d, %f, %s", 602, local_602, local_602_d, param_c ? param_c : "null");
    return local_602 + (int)local_602_d;
}

typedef struct {
    int field_603;
    long field_603_b;
    double field_603_c;
    char name_603[64];
} StructType603;

int function_603(StructType603 *s, int param_a, double param_b, const char *param_c) {
    int local_603 = param_a * 603;
    double local_603_d = param_b * 603;
    char buf_603[128];
    snprintf(buf_603, sizeof(buf_603), "function_%d: %d, %f, %s", 603, local_603, local_603_d, param_c ? param_c : "null");
    return local_603 + (int)local_603_d;
}

typedef struct {
    int field_604;
    long field_604_b;
    double field_604_c;
    char name_604[64];
} StructType604;

int function_604(StructType604 *s, int param_a, double param_b, const char *param_c) {
    int local_604 = param_a * 604;
    double local_604_d = param_b * 604;
    char buf_604[128];
    snprintf(buf_604, sizeof(buf_604), "function_%d: %d, %f, %s", 604, local_604, local_604_d, param_c ? param_c : "null");
    return local_604 + (int)local_604_d;
}

typedef struct {
    int field_605;
    long field_605_b;
    double field_605_c;
    char name_605[64];
} StructType605;

int function_605(StructType605 *s, int param_a, double param_b, const char *param_c) {
    int local_605 = param_a * 605;
    double local_605_d = param_b * 605;
    char buf_605[128];
    snprintf(buf_605, sizeof(buf_605), "function_%d: %d, %f, %s", 605, local_605, local_605_d, param_c ? param_c : "null");
    return local_605 + (int)local_605_d;
}

typedef struct {
    int field_606;
    long field_606_b;
    double field_606_c;
    char name_606[64];
} StructType606;

int function_606(StructType606 *s, int param_a, double param_b, const char *param_c) {
    int local_606 = param_a * 606;
    double local_606_d = param_b * 606;
    char buf_606[128];
    snprintf(buf_606, sizeof(buf_606), "function_%d: %d, %f, %s", 606, local_606, local_606_d, param_c ? param_c : "null");
    return local_606 + (int)local_606_d;
}

typedef struct {
    int field_607;
    long field_607_b;
    double field_607_c;
    char name_607[64];
} StructType607;

int function_607(StructType607 *s, int param_a, double param_b, const char *param_c) {
    int local_607 = param_a * 607;
    double local_607_d = param_b * 607;
    char buf_607[128];
    snprintf(buf_607, sizeof(buf_607), "function_%d: %d, %f, %s", 607, local_607, local_607_d, param_c ? param_c : "null");
    return local_607 + (int)local_607_d;
}

typedef struct {
    int field_608;
    long field_608_b;
    double field_608_c;
    char name_608[64];
} StructType608;

int function_608(StructType608 *s, int param_a, double param_b, const char *param_c) {
    int local_608 = param_a * 608;
    double local_608_d = param_b * 608;
    char buf_608[128];
    snprintf(buf_608, sizeof(buf_608), "function_%d: %d, %f, %s", 608, local_608, local_608_d, param_c ? param_c : "null");
    return local_608 + (int)local_608_d;
}

typedef struct {
    int field_609;
    long field_609_b;
    double field_609_c;
    char name_609[64];
} StructType609;

int function_609(StructType609 *s, int param_a, double param_b, const char *param_c) {
    int local_609 = param_a * 609;
    double local_609_d = param_b * 609;
    char buf_609[128];
    snprintf(buf_609, sizeof(buf_609), "function_%d: %d, %f, %s", 609, local_609, local_609_d, param_c ? param_c : "null");
    return local_609 + (int)local_609_d;
}

typedef struct {
    int field_610;
    long field_610_b;
    double field_610_c;
    char name_610[64];
} StructType610;

int function_610(StructType610 *s, int param_a, double param_b, const char *param_c) {
    int local_610 = param_a * 610;
    double local_610_d = param_b * 610;
    char buf_610[128];
    snprintf(buf_610, sizeof(buf_610), "function_%d: %d, %f, %s", 610, local_610, local_610_d, param_c ? param_c : "null");
    return local_610 + (int)local_610_d;
}

typedef struct {
    int field_611;
    long field_611_b;
    double field_611_c;
    char name_611[64];
} StructType611;

int function_611(StructType611 *s, int param_a, double param_b, const char *param_c) {
    int local_611 = param_a * 611;
    double local_611_d = param_b * 611;
    char buf_611[128];
    snprintf(buf_611, sizeof(buf_611), "function_%d: %d, %f, %s", 611, local_611, local_611_d, param_c ? param_c : "null");
    return local_611 + (int)local_611_d;
}

typedef struct {
    int field_612;
    long field_612_b;
    double field_612_c;
    char name_612[64];
} StructType612;

int function_612(StructType612 *s, int param_a, double param_b, const char *param_c) {
    int local_612 = param_a * 612;
    double local_612_d = param_b * 612;
    char buf_612[128];
    snprintf(buf_612, sizeof(buf_612), "function_%d: %d, %f, %s", 612, local_612, local_612_d, param_c ? param_c : "null");
    return local_612 + (int)local_612_d;
}

typedef struct {
    int field_613;
    long field_613_b;
    double field_613_c;
    char name_613[64];
} StructType613;

int function_613(StructType613 *s, int param_a, double param_b, const char *param_c) {
    int local_613 = param_a * 613;
    double local_613_d = param_b * 613;
    char buf_613[128];
    snprintf(buf_613, sizeof(buf_613), "function_%d: %d, %f, %s", 613, local_613, local_613_d, param_c ? param_c : "null");
    return local_613 + (int)local_613_d;
}

typedef struct {
    int field_614;
    long field_614_b;
    double field_614_c;
    char name_614[64];
} StructType614;

int function_614(StructType614 *s, int param_a, double param_b, const char *param_c) {
    int local_614 = param_a * 614;
    double local_614_d = param_b * 614;
    char buf_614[128];
    snprintf(buf_614, sizeof(buf_614), "function_%d: %d, %f, %s", 614, local_614, local_614_d, param_c ? param_c : "null");
    return local_614 + (int)local_614_d;
}

typedef struct {
    int field_615;
    long field_615_b;
    double field_615_c;
    char name_615[64];
} StructType615;

int function_615(StructType615 *s, int param_a, double param_b, const char *param_c) {
    int local_615 = param_a * 615;
    double local_615_d = param_b * 615;
    char buf_615[128];
    snprintf(buf_615, sizeof(buf_615), "function_%d: %d, %f, %s", 615, local_615, local_615_d, param_c ? param_c : "null");
    return local_615 + (int)local_615_d;
}

typedef struct {
    int field_616;
    long field_616_b;
    double field_616_c;
    char name_616[64];
} StructType616;

int function_616(StructType616 *s, int param_a, double param_b, const char *param_c) {
    int local_616 = param_a * 616;
    double local_616_d = param_b * 616;
    char buf_616[128];
    snprintf(buf_616, sizeof(buf_616), "function_%d: %d, %f, %s", 616, local_616, local_616_d, param_c ? param_c : "null");
    return local_616 + (int)local_616_d;
}

typedef struct {
    int field_617;
    long field_617_b;
    double field_617_c;
    char name_617[64];
} StructType617;

int function_617(StructType617 *s, int param_a, double param_b, const char *param_c) {
    int local_617 = param_a * 617;
    double local_617_d = param_b * 617;
    char buf_617[128];
    snprintf(buf_617, sizeof(buf_617), "function_%d: %d, %f, %s", 617, local_617, local_617_d, param_c ? param_c : "null");
    return local_617 + (int)local_617_d;
}

typedef struct {
    int field_618;
    long field_618_b;
    double field_618_c;
    char name_618[64];
} StructType618;

int function_618(StructType618 *s, int param_a, double param_b, const char *param_c) {
    int local_618 = param_a * 618;
    double local_618_d = param_b * 618;
    char buf_618[128];
    snprintf(buf_618, sizeof(buf_618), "function_%d: %d, %f, %s", 618, local_618, local_618_d, param_c ? param_c : "null");
    return local_618 + (int)local_618_d;
}

typedef struct {
    int field_619;
    long field_619_b;
    double field_619_c;
    char name_619[64];
} StructType619;

int function_619(StructType619 *s, int param_a, double param_b, const char *param_c) {
    int local_619 = param_a * 619;
    double local_619_d = param_b * 619;
    char buf_619[128];
    snprintf(buf_619, sizeof(buf_619), "function_%d: %d, %f, %s", 619, local_619, local_619_d, param_c ? param_c : "null");
    return local_619 + (int)local_619_d;
}

typedef struct {
    int field_620;
    long field_620_b;
    double field_620_c;
    char name_620[64];
} StructType620;

int function_620(StructType620 *s, int param_a, double param_b, const char *param_c) {
    int local_620 = param_a * 620;
    double local_620_d = param_b * 620;
    char buf_620[128];
    snprintf(buf_620, sizeof(buf_620), "function_%d: %d, %f, %s", 620, local_620, local_620_d, param_c ? param_c : "null");
    return local_620 + (int)local_620_d;
}

typedef struct {
    int field_621;
    long field_621_b;
    double field_621_c;
    char name_621[64];
} StructType621;

int function_621(StructType621 *s, int param_a, double param_b, const char *param_c) {
    int local_621 = param_a * 621;
    double local_621_d = param_b * 621;
    char buf_621[128];
    snprintf(buf_621, sizeof(buf_621), "function_%d: %d, %f, %s", 621, local_621, local_621_d, param_c ? param_c : "null");
    return local_621 + (int)local_621_d;
}

typedef struct {
    int field_622;
    long field_622_b;
    double field_622_c;
    char name_622[64];
} StructType622;

int function_622(StructType622 *s, int param_a, double param_b, const char *param_c) {
    int local_622 = param_a * 622;
    double local_622_d = param_b * 622;
    char buf_622[128];
    snprintf(buf_622, sizeof(buf_622), "function_%d: %d, %f, %s", 622, local_622, local_622_d, param_c ? param_c : "null");
    return local_622 + (int)local_622_d;
}

typedef struct {
    int field_623;
    long field_623_b;
    double field_623_c;
    char name_623[64];
} StructType623;

int function_623(StructType623 *s, int param_a, double param_b, const char *param_c) {
    int local_623 = param_a * 623;
    double local_623_d = param_b * 623;
    char buf_623[128];
    snprintf(buf_623, sizeof(buf_623), "function_%d: %d, %f, %s", 623, local_623, local_623_d, param_c ? param_c : "null");
    return local_623 + (int)local_623_d;
}

typedef struct {
    int field_624;
    long field_624_b;
    double field_624_c;
    char name_624[64];
} StructType624;

int function_624(StructType624 *s, int param_a, double param_b, const char *param_c) {
    int local_624 = param_a * 624;
    double local_624_d = param_b * 624;
    char buf_624[128];
    snprintf(buf_624, sizeof(buf_624), "function_%d: %d, %f, %s", 624, local_624, local_624_d, param_c ? param_c : "null");
    return local_624 + (int)local_624_d;
}

typedef struct {
    int field_625;
    long field_625_b;
    double field_625_c;
    char name_625[64];
} StructType625;

int function_625(StructType625 *s, int param_a, double param_b, const char *param_c) {
    int local_625 = param_a * 625;
    double local_625_d = param_b * 625;
    char buf_625[128];
    snprintf(buf_625, sizeof(buf_625), "function_%d: %d, %f, %s", 625, local_625, local_625_d, param_c ? param_c : "null");
    return local_625 + (int)local_625_d;
}

typedef struct {
    int field_626;
    long field_626_b;
    double field_626_c;
    char name_626[64];
} StructType626;

int function_626(StructType626 *s, int param_a, double param_b, const char *param_c) {
    int local_626 = param_a * 626;
    double local_626_d = param_b * 626;
    char buf_626[128];
    snprintf(buf_626, sizeof(buf_626), "function_%d: %d, %f, %s", 626, local_626, local_626_d, param_c ? param_c : "null");
    return local_626 + (int)local_626_d;
}

typedef struct {
    int field_627;
    long field_627_b;
    double field_627_c;
    char name_627[64];
} StructType627;

int function_627(StructType627 *s, int param_a, double param_b, const char *param_c) {
    int local_627 = param_a * 627;
    double local_627_d = param_b * 627;
    char buf_627[128];
    snprintf(buf_627, sizeof(buf_627), "function_%d: %d, %f, %s", 627, local_627, local_627_d, param_c ? param_c : "null");
    return local_627 + (int)local_627_d;
}

typedef struct {
    int field_628;
    long field_628_b;
    double field_628_c;
    char name_628[64];
} StructType628;

int function_628(StructType628 *s, int param_a, double param_b, const char *param_c) {
    int local_628 = param_a * 628;
    double local_628_d = param_b * 628;
    char buf_628[128];
    snprintf(buf_628, sizeof(buf_628), "function_%d: %d, %f, %s", 628, local_628, local_628_d, param_c ? param_c : "null");
    return local_628 + (int)local_628_d;
}

typedef struct {
    int field_629;
    long field_629_b;
    double field_629_c;
    char name_629[64];
} StructType629;

int function_629(StructType629 *s, int param_a, double param_b, const char *param_c) {
    int local_629 = param_a * 629;
    double local_629_d = param_b * 629;
    char buf_629[128];
    snprintf(buf_629, sizeof(buf_629), "function_%d: %d, %f, %s", 629, local_629, local_629_d, param_c ? param_c : "null");
    return local_629 + (int)local_629_d;
}

typedef struct {
    int field_630;
    long field_630_b;
    double field_630_c;
    char name_630[64];
} StructType630;

int function_630(StructType630 *s, int param_a, double param_b, const char *param_c) {
    int local_630 = param_a * 630;
    double local_630_d = param_b * 630;
    char buf_630[128];
    snprintf(buf_630, sizeof(buf_630), "function_%d: %d, %f, %s", 630, local_630, local_630_d, param_c ? param_c : "null");
    return local_630 + (int)local_630_d;
}

typedef struct {
    int field_631;
    long field_631_b;
    double field_631_c;
    char name_631[64];
} StructType631;

int function_631(StructType631 *s, int param_a, double param_b, const char *param_c) {
    int local_631 = param_a * 631;
    double local_631_d = param_b * 631;
    char buf_631[128];
    snprintf(buf_631, sizeof(buf_631), "function_%d: %d, %f, %s", 631, local_631, local_631_d, param_c ? param_c : "null");
    return local_631 + (int)local_631_d;
}

typedef struct {
    int field_632;
    long field_632_b;
    double field_632_c;
    char name_632[64];
} StructType632;

int function_632(StructType632 *s, int param_a, double param_b, const char *param_c) {
    int local_632 = param_a * 632;
    double local_632_d = param_b * 632;
    char buf_632[128];
    snprintf(buf_632, sizeof(buf_632), "function_%d: %d, %f, %s", 632, local_632, local_632_d, param_c ? param_c : "null");
    return local_632 + (int)local_632_d;
}

typedef struct {
    int field_633;
    long field_633_b;
    double field_633_c;
    char name_633[64];
} StructType633;

int function_633(StructType633 *s, int param_a, double param_b, const char *param_c) {
    int local_633 = param_a * 633;
    double local_633_d = param_b * 633;
    char buf_633[128];
    snprintf(buf_633, sizeof(buf_633), "function_%d: %d, %f, %s", 633, local_633, local_633_d, param_c ? param_c : "null");
    return local_633 + (int)local_633_d;
}

typedef struct {
    int field_634;
    long field_634_b;
    double field_634_c;
    char name_634[64];
} StructType634;

int function_634(StructType634 *s, int param_a, double param_b, const char *param_c) {
    int local_634 = param_a * 634;
    double local_634_d = param_b * 634;
    char buf_634[128];
    snprintf(buf_634, sizeof(buf_634), "function_%d: %d, %f, %s", 634, local_634, local_634_d, param_c ? param_c : "null");
    return local_634 + (int)local_634_d;
}

typedef struct {
    int field_635;
    long field_635_b;
    double field_635_c;
    char name_635[64];
} StructType635;

int function_635(StructType635 *s, int param_a, double param_b, const char *param_c) {
    int local_635 = param_a * 635;
    double local_635_d = param_b * 635;
    char buf_635[128];
    snprintf(buf_635, sizeof(buf_635), "function_%d: %d, %f, %s", 635, local_635, local_635_d, param_c ? param_c : "null");
    return local_635 + (int)local_635_d;
}

typedef struct {
    int field_636;
    long field_636_b;
    double field_636_c;
    char name_636[64];
} StructType636;

int function_636(StructType636 *s, int param_a, double param_b, const char *param_c) {
    int local_636 = param_a * 636;
    double local_636_d = param_b * 636;
    char buf_636[128];
    snprintf(buf_636, sizeof(buf_636), "function_%d: %d, %f, %s", 636, local_636, local_636_d, param_c ? param_c : "null");
    return local_636 + (int)local_636_d;
}

typedef struct {
    int field_637;
    long field_637_b;
    double field_637_c;
    char name_637[64];
} StructType637;

int function_637(StructType637 *s, int param_a, double param_b, const char *param_c) {
    int local_637 = param_a * 637;
    double local_637_d = param_b * 637;
    char buf_637[128];
    snprintf(buf_637, sizeof(buf_637), "function_%d: %d, %f, %s", 637, local_637, local_637_d, param_c ? param_c : "null");
    return local_637 + (int)local_637_d;
}

typedef struct {
    int field_638;
    long field_638_b;
    double field_638_c;
    char name_638[64];
} StructType638;

int function_638(StructType638 *s, int param_a, double param_b, const char *param_c) {
    int local_638 = param_a * 638;
    double local_638_d = param_b * 638;
    char buf_638[128];
    snprintf(buf_638, sizeof(buf_638), "function_%d: %d, %f, %s", 638, local_638, local_638_d, param_c ? param_c : "null");
    return local_638 + (int)local_638_d;
}

typedef struct {
    int field_639;
    long field_639_b;
    double field_639_c;
    char name_639[64];
} StructType639;

int function_639(StructType639 *s, int param_a, double param_b, const char *param_c) {
    int local_639 = param_a * 639;
    double local_639_d = param_b * 639;
    char buf_639[128];
    snprintf(buf_639, sizeof(buf_639), "function_%d: %d, %f, %s", 639, local_639, local_639_d, param_c ? param_c : "null");
    return local_639 + (int)local_639_d;
}

typedef struct {
    int field_640;
    long field_640_b;
    double field_640_c;
    char name_640[64];
} StructType640;

int function_640(StructType640 *s, int param_a, double param_b, const char *param_c) {
    int local_640 = param_a * 640;
    double local_640_d = param_b * 640;
    char buf_640[128];
    snprintf(buf_640, sizeof(buf_640), "function_%d: %d, %f, %s", 640, local_640, local_640_d, param_c ? param_c : "null");
    return local_640 + (int)local_640_d;
}

typedef struct {
    int field_641;
    long field_641_b;
    double field_641_c;
    char name_641[64];
} StructType641;

int function_641(StructType641 *s, int param_a, double param_b, const char *param_c) {
    int local_641 = param_a * 641;
    double local_641_d = param_b * 641;
    char buf_641[128];
    snprintf(buf_641, sizeof(buf_641), "function_%d: %d, %f, %s", 641, local_641, local_641_d, param_c ? param_c : "null");
    return local_641 + (int)local_641_d;
}

typedef struct {
    int field_642;
    long field_642_b;
    double field_642_c;
    char name_642[64];
} StructType642;

int function_642(StructType642 *s, int param_a, double param_b, const char *param_c) {
    int local_642 = param_a * 642;
    double local_642_d = param_b * 642;
    char buf_642[128];
    snprintf(buf_642, sizeof(buf_642), "function_%d: %d, %f, %s", 642, local_642, local_642_d, param_c ? param_c : "null");
    return local_642 + (int)local_642_d;
}

typedef struct {
    int field_643;
    long field_643_b;
    double field_643_c;
    char name_643[64];
} StructType643;

int function_643(StructType643 *s, int param_a, double param_b, const char *param_c) {
    int local_643 = param_a * 643;
    double local_643_d = param_b * 643;
    char buf_643[128];
    snprintf(buf_643, sizeof(buf_643), "function_%d: %d, %f, %s", 643, local_643, local_643_d, param_c ? param_c : "null");
    return local_643 + (int)local_643_d;
}

typedef struct {
    int field_644;
    long field_644_b;
    double field_644_c;
    char name_644[64];
} StructType644;

int function_644(StructType644 *s, int param_a, double param_b, const char *param_c) {
    int local_644 = param_a * 644;
    double local_644_d = param_b * 644;
    char buf_644[128];
    snprintf(buf_644, sizeof(buf_644), "function_%d: %d, %f, %s", 644, local_644, local_644_d, param_c ? param_c : "null");
    return local_644 + (int)local_644_d;
}

typedef struct {
    int field_645;
    long field_645_b;
    double field_645_c;
    char name_645[64];
} StructType645;

int function_645(StructType645 *s, int param_a, double param_b, const char *param_c) {
    int local_645 = param_a * 645;
    double local_645_d = param_b * 645;
    char buf_645[128];
    snprintf(buf_645, sizeof(buf_645), "function_%d: %d, %f, %s", 645, local_645, local_645_d, param_c ? param_c : "null");
    return local_645 + (int)local_645_d;
}

typedef struct {
    int field_646;
    long field_646_b;
    double field_646_c;
    char name_646[64];
} StructType646;

int function_646(StructType646 *s, int param_a, double param_b, const char *param_c) {
    int local_646 = param_a * 646;
    double local_646_d = param_b * 646;
    char buf_646[128];
    snprintf(buf_646, sizeof(buf_646), "function_%d: %d, %f, %s", 646, local_646, local_646_d, param_c ? param_c : "null");
    return local_646 + (int)local_646_d;
}

typedef struct {
    int field_647;
    long field_647_b;
    double field_647_c;
    char name_647[64];
} StructType647;

int function_647(StructType647 *s, int param_a, double param_b, const char *param_c) {
    int local_647 = param_a * 647;
    double local_647_d = param_b * 647;
    char buf_647[128];
    snprintf(buf_647, sizeof(buf_647), "function_%d: %d, %f, %s", 647, local_647, local_647_d, param_c ? param_c : "null");
    return local_647 + (int)local_647_d;
}

typedef struct {
    int field_648;
    long field_648_b;
    double field_648_c;
    char name_648[64];
} StructType648;

int function_648(StructType648 *s, int param_a, double param_b, const char *param_c) {
    int local_648 = param_a * 648;
    double local_648_d = param_b * 648;
    char buf_648[128];
    snprintf(buf_648, sizeof(buf_648), "function_%d: %d, %f, %s", 648, local_648, local_648_d, param_c ? param_c : "null");
    return local_648 + (int)local_648_d;
}

typedef struct {
    int field_649;
    long field_649_b;
    double field_649_c;
    char name_649[64];
} StructType649;

int function_649(StructType649 *s, int param_a, double param_b, const char *param_c) {
    int local_649 = param_a * 649;
    double local_649_d = param_b * 649;
    char buf_649[128];
    snprintf(buf_649, sizeof(buf_649), "function_%d: %d, %f, %s", 649, local_649, local_649_d, param_c ? param_c : "null");
    return local_649 + (int)local_649_d;
}

typedef struct {
    int field_650;
    long field_650_b;
    double field_650_c;
    char name_650[64];
} StructType650;

int function_650(StructType650 *s, int param_a, double param_b, const char *param_c) {
    int local_650 = param_a * 650;
    double local_650_d = param_b * 650;
    char buf_650[128];
    snprintf(buf_650, sizeof(buf_650), "function_%d: %d, %f, %s", 650, local_650, local_650_d, param_c ? param_c : "null");
    return local_650 + (int)local_650_d;
}

typedef struct {
    int field_651;
    long field_651_b;
    double field_651_c;
    char name_651[64];
} StructType651;

int function_651(StructType651 *s, int param_a, double param_b, const char *param_c) {
    int local_651 = param_a * 651;
    double local_651_d = param_b * 651;
    char buf_651[128];
    snprintf(buf_651, sizeof(buf_651), "function_%d: %d, %f, %s", 651, local_651, local_651_d, param_c ? param_c : "null");
    return local_651 + (int)local_651_d;
}

typedef struct {
    int field_652;
    long field_652_b;
    double field_652_c;
    char name_652[64];
} StructType652;

int function_652(StructType652 *s, int param_a, double param_b, const char *param_c) {
    int local_652 = param_a * 652;
    double local_652_d = param_b * 652;
    char buf_652[128];
    snprintf(buf_652, sizeof(buf_652), "function_%d: %d, %f, %s", 652, local_652, local_652_d, param_c ? param_c : "null");
    return local_652 + (int)local_652_d;
}

typedef struct {
    int field_653;
    long field_653_b;
    double field_653_c;
    char name_653[64];
} StructType653;

int function_653(StructType653 *s, int param_a, double param_b, const char *param_c) {
    int local_653 = param_a * 653;
    double local_653_d = param_b * 653;
    char buf_653[128];
    snprintf(buf_653, sizeof(buf_653), "function_%d: %d, %f, %s", 653, local_653, local_653_d, param_c ? param_c : "null");
    return local_653 + (int)local_653_d;
}

typedef struct {
    int field_654;
    long field_654_b;
    double field_654_c;
    char name_654[64];
} StructType654;

int function_654(StructType654 *s, int param_a, double param_b, const char *param_c) {
    int local_654 = param_a * 654;
    double local_654_d = param_b * 654;
    char buf_654[128];
    snprintf(buf_654, sizeof(buf_654), "function_%d: %d, %f, %s", 654, local_654, local_654_d, param_c ? param_c : "null");
    return local_654 + (int)local_654_d;
}

typedef struct {
    int field_655;
    long field_655_b;
    double field_655_c;
    char name_655[64];
} StructType655;

int function_655(StructType655 *s, int param_a, double param_b, const char *param_c) {
    int local_655 = param_a * 655;
    double local_655_d = param_b * 655;
    char buf_655[128];
    snprintf(buf_655, sizeof(buf_655), "function_%d: %d, %f, %s", 655, local_655, local_655_d, param_c ? param_c : "null");
    return local_655 + (int)local_655_d;
}

typedef struct {
    int field_656;
    long field_656_b;
    double field_656_c;
    char name_656[64];
} StructType656;

int function_656(StructType656 *s, int param_a, double param_b, const char *param_c) {
    int local_656 = param_a * 656;
    double local_656_d = param_b * 656;
    char buf_656[128];
    snprintf(buf_656, sizeof(buf_656), "function_%d: %d, %f, %s", 656, local_656, local_656_d, param_c ? param_c : "null");
    return local_656 + (int)local_656_d;
}

typedef struct {
    int field_657;
    long field_657_b;
    double field_657_c;
    char name_657[64];
} StructType657;

int function_657(StructType657 *s, int param_a, double param_b, const char *param_c) {
    int local_657 = param_a * 657;
    double local_657_d = param_b * 657;
    char buf_657[128];
    snprintf(buf_657, sizeof(buf_657), "function_%d: %d, %f, %s", 657, local_657, local_657_d, param_c ? param_c : "null");
    return local_657 + (int)local_657_d;
}

typedef struct {
    int field_658;
    long field_658_b;
    double field_658_c;
    char name_658[64];
} StructType658;

int function_658(StructType658 *s, int param_a, double param_b, const char *param_c) {
    int local_658 = param_a * 658;
    double local_658_d = param_b * 658;
    char buf_658[128];
    snprintf(buf_658, sizeof(buf_658), "function_%d: %d, %f, %s", 658, local_658, local_658_d, param_c ? param_c : "null");
    return local_658 + (int)local_658_d;
}

typedef struct {
    int field_659;
    long field_659_b;
    double field_659_c;
    char name_659[64];
} StructType659;

int function_659(StructType659 *s, int param_a, double param_b, const char *param_c) {
    int local_659 = param_a * 659;
    double local_659_d = param_b * 659;
    char buf_659[128];
    snprintf(buf_659, sizeof(buf_659), "function_%d: %d, %f, %s", 659, local_659, local_659_d, param_c ? param_c : "null");
    return local_659 + (int)local_659_d;
}

typedef struct {
    int field_660;
    long field_660_b;
    double field_660_c;
    char name_660[64];
} StructType660;

int function_660(StructType660 *s, int param_a, double param_b, const char *param_c) {
    int local_660 = param_a * 660;
    double local_660_d = param_b * 660;
    char buf_660[128];
    snprintf(buf_660, sizeof(buf_660), "function_%d: %d, %f, %s", 660, local_660, local_660_d, param_c ? param_c : "null");
    return local_660 + (int)local_660_d;
}

typedef struct {
    int field_661;
    long field_661_b;
    double field_661_c;
    char name_661[64];
} StructType661;

int function_661(StructType661 *s, int param_a, double param_b, const char *param_c) {
    int local_661 = param_a * 661;
    double local_661_d = param_b * 661;
    char buf_661[128];
    snprintf(buf_661, sizeof(buf_661), "function_%d: %d, %f, %s", 661, local_661, local_661_d, param_c ? param_c : "null");
    return local_661 + (int)local_661_d;
}

typedef struct {
    int field_662;
    long field_662_b;
    double field_662_c;
    char name_662[64];
} StructType662;

int function_662(StructType662 *s, int param_a, double param_b, const char *param_c) {
    int local_662 = param_a * 662;
    double local_662_d = param_b * 662;
    char buf_662[128];
    snprintf(buf_662, sizeof(buf_662), "function_%d: %d, %f, %s", 662, local_662, local_662_d, param_c ? param_c : "null");
    return local_662 + (int)local_662_d;
}

typedef struct {
    int field_663;
    long field_663_b;
    double field_663_c;
    char name_663[64];
} StructType663;

int function_663(StructType663 *s, int param_a, double param_b, const char *param_c) {
    int local_663 = param_a * 663;
    double local_663_d = param_b * 663;
    char buf_663[128];
    snprintf(buf_663, sizeof(buf_663), "function_%d: %d, %f, %s", 663, local_663, local_663_d, param_c ? param_c : "null");
    return local_663 + (int)local_663_d;
}

typedef struct {
    int field_664;
    long field_664_b;
    double field_664_c;
    char name_664[64];
} StructType664;

int function_664(StructType664 *s, int param_a, double param_b, const char *param_c) {
    int local_664 = param_a * 664;
    double local_664_d = param_b * 664;
    char buf_664[128];
    snprintf(buf_664, sizeof(buf_664), "function_%d: %d, %f, %s", 664, local_664, local_664_d, param_c ? param_c : "null");
    return local_664 + (int)local_664_d;
}

typedef struct {
    int field_665;
    long field_665_b;
    double field_665_c;
    char name_665[64];
} StructType665;

int function_665(StructType665 *s, int param_a, double param_b, const char *param_c) {
    int local_665 = param_a * 665;
    double local_665_d = param_b * 665;
    char buf_665[128];
    snprintf(buf_665, sizeof(buf_665), "function_%d: %d, %f, %s", 665, local_665, local_665_d, param_c ? param_c : "null");
    return local_665 + (int)local_665_d;
}

typedef struct {
    int field_666;
    long field_666_b;
    double field_666_c;
    char name_666[64];
} StructType666;

int function_666(StructType666 *s, int param_a, double param_b, const char *param_c) {
    int local_666 = param_a * 666;
    double local_666_d = param_b * 666;
    char buf_666[128];
    snprintf(buf_666, sizeof(buf_666), "function_%d: %d, %f, %s", 666, local_666, local_666_d, param_c ? param_c : "null");
    return local_666 + (int)local_666_d;
}

typedef struct {
    int field_667;
    long field_667_b;
    double field_667_c;
    char name_667[64];
} StructType667;

int function_667(StructType667 *s, int param_a, double param_b, const char *param_c) {
    int local_667 = param_a * 667;
    double local_667_d = param_b * 667;
    char buf_667[128];
    snprintf(buf_667, sizeof(buf_667), "function_%d: %d, %f, %s", 667, local_667, local_667_d, param_c ? param_c : "null");
    return local_667 + (int)local_667_d;
}

typedef struct {
    int field_668;
    long field_668_b;
    double field_668_c;
    char name_668[64];
} StructType668;

int function_668(StructType668 *s, int param_a, double param_b, const char *param_c) {
    int local_668 = param_a * 668;
    double local_668_d = param_b * 668;
    char buf_668[128];
    snprintf(buf_668, sizeof(buf_668), "function_%d: %d, %f, %s", 668, local_668, local_668_d, param_c ? param_c : "null");
    return local_668 + (int)local_668_d;
}

typedef struct {
    int field_669;
    long field_669_b;
    double field_669_c;
    char name_669[64];
} StructType669;

int function_669(StructType669 *s, int param_a, double param_b, const char *param_c) {
    int local_669 = param_a * 669;
    double local_669_d = param_b * 669;
    char buf_669[128];
    snprintf(buf_669, sizeof(buf_669), "function_%d: %d, %f, %s", 669, local_669, local_669_d, param_c ? param_c : "null");
    return local_669 + (int)local_669_d;
}

typedef struct {
    int field_670;
    long field_670_b;
    double field_670_c;
    char name_670[64];
} StructType670;

int function_670(StructType670 *s, int param_a, double param_b, const char *param_c) {
    int local_670 = param_a * 670;
    double local_670_d = param_b * 670;
    char buf_670[128];
    snprintf(buf_670, sizeof(buf_670), "function_%d: %d, %f, %s", 670, local_670, local_670_d, param_c ? param_c : "null");
    return local_670 + (int)local_670_d;
}

typedef struct {
    int field_671;
    long field_671_b;
    double field_671_c;
    char name_671[64];
} StructType671;

int function_671(StructType671 *s, int param_a, double param_b, const char *param_c) {
    int local_671 = param_a * 671;
    double local_671_d = param_b * 671;
    char buf_671[128];
    snprintf(buf_671, sizeof(buf_671), "function_%d: %d, %f, %s", 671, local_671, local_671_d, param_c ? param_c : "null");
    return local_671 + (int)local_671_d;
}

typedef struct {
    int field_672;
    long field_672_b;
    double field_672_c;
    char name_672[64];
} StructType672;

int function_672(StructType672 *s, int param_a, double param_b, const char *param_c) {
    int local_672 = param_a * 672;
    double local_672_d = param_b * 672;
    char buf_672[128];
    snprintf(buf_672, sizeof(buf_672), "function_%d: %d, %f, %s", 672, local_672, local_672_d, param_c ? param_c : "null");
    return local_672 + (int)local_672_d;
}

typedef struct {
    int field_673;
    long field_673_b;
    double field_673_c;
    char name_673[64];
} StructType673;

int function_673(StructType673 *s, int param_a, double param_b, const char *param_c) {
    int local_673 = param_a * 673;
    double local_673_d = param_b * 673;
    char buf_673[128];
    snprintf(buf_673, sizeof(buf_673), "function_%d: %d, %f, %s", 673, local_673, local_673_d, param_c ? param_c : "null");
    return local_673 + (int)local_673_d;
}

typedef struct {
    int field_674;
    long field_674_b;
    double field_674_c;
    char name_674[64];
} StructType674;

int function_674(StructType674 *s, int param_a, double param_b, const char *param_c) {
    int local_674 = param_a * 674;
    double local_674_d = param_b * 674;
    char buf_674[128];
    snprintf(buf_674, sizeof(buf_674), "function_%d: %d, %f, %s", 674, local_674, local_674_d, param_c ? param_c : "null");
    return local_674 + (int)local_674_d;
}

typedef struct {
    int field_675;
    long field_675_b;
    double field_675_c;
    char name_675[64];
} StructType675;

int function_675(StructType675 *s, int param_a, double param_b, const char *param_c) {
    int local_675 = param_a * 675;
    double local_675_d = param_b * 675;
    char buf_675[128];
    snprintf(buf_675, sizeof(buf_675), "function_%d: %d, %f, %s", 675, local_675, local_675_d, param_c ? param_c : "null");
    return local_675 + (int)local_675_d;
}

typedef struct {
    int field_676;
    long field_676_b;
    double field_676_c;
    char name_676[64];
} StructType676;

int function_676(StructType676 *s, int param_a, double param_b, const char *param_c) {
    int local_676 = param_a * 676;
    double local_676_d = param_b * 676;
    char buf_676[128];
    snprintf(buf_676, sizeof(buf_676), "function_%d: %d, %f, %s", 676, local_676, local_676_d, param_c ? param_c : "null");
    return local_676 + (int)local_676_d;
}

typedef struct {
    int field_677;
    long field_677_b;
    double field_677_c;
    char name_677[64];
} StructType677;

int function_677(StructType677 *s, int param_a, double param_b, const char *param_c) {
    int local_677 = param_a * 677;
    double local_677_d = param_b * 677;
    char buf_677[128];
    snprintf(buf_677, sizeof(buf_677), "function_%d: %d, %f, %s", 677, local_677, local_677_d, param_c ? param_c : "null");
    return local_677 + (int)local_677_d;
}

typedef struct {
    int field_678;
    long field_678_b;
    double field_678_c;
    char name_678[64];
} StructType678;

int function_678(StructType678 *s, int param_a, double param_b, const char *param_c) {
    int local_678 = param_a * 678;
    double local_678_d = param_b * 678;
    char buf_678[128];
    snprintf(buf_678, sizeof(buf_678), "function_%d: %d, %f, %s", 678, local_678, local_678_d, param_c ? param_c : "null");
    return local_678 + (int)local_678_d;
}

typedef struct {
    int field_679;
    long field_679_b;
    double field_679_c;
    char name_679[64];
} StructType679;

int function_679(StructType679 *s, int param_a, double param_b, const char *param_c) {
    int local_679 = param_a * 679;
    double local_679_d = param_b * 679;
    char buf_679[128];
    snprintf(buf_679, sizeof(buf_679), "function_%d: %d, %f, %s", 679, local_679, local_679_d, param_c ? param_c : "null");
    return local_679 + (int)local_679_d;
}

typedef struct {
    int field_680;
    long field_680_b;
    double field_680_c;
    char name_680[64];
} StructType680;

int function_680(StructType680 *s, int param_a, double param_b, const char *param_c) {
    int local_680 = param_a * 680;
    double local_680_d = param_b * 680;
    char buf_680[128];
    snprintf(buf_680, sizeof(buf_680), "function_%d: %d, %f, %s", 680, local_680, local_680_d, param_c ? param_c : "null");
    return local_680 + (int)local_680_d;
}

typedef struct {
    int field_681;
    long field_681_b;
    double field_681_c;
    char name_681[64];
} StructType681;

int function_681(StructType681 *s, int param_a, double param_b, const char *param_c) {
    int local_681 = param_a * 681;
    double local_681_d = param_b * 681;
    char buf_681[128];
    snprintf(buf_681, sizeof(buf_681), "function_%d: %d, %f, %s", 681, local_681, local_681_d, param_c ? param_c : "null");
    return local_681 + (int)local_681_d;
}

typedef struct {
    int field_682;
    long field_682_b;
    double field_682_c;
    char name_682[64];
} StructType682;

int function_682(StructType682 *s, int param_a, double param_b, const char *param_c) {
    int local_682 = param_a * 682;
    double local_682_d = param_b * 682;
    char buf_682[128];
    snprintf(buf_682, sizeof(buf_682), "function_%d: %d, %f, %s", 682, local_682, local_682_d, param_c ? param_c : "null");
    return local_682 + (int)local_682_d;
}

typedef struct {
    int field_683;
    long field_683_b;
    double field_683_c;
    char name_683[64];
} StructType683;

int function_683(StructType683 *s, int param_a, double param_b, const char *param_c) {
    int local_683 = param_a * 683;
    double local_683_d = param_b * 683;
    char buf_683[128];
    snprintf(buf_683, sizeof(buf_683), "function_%d: %d, %f, %s", 683, local_683, local_683_d, param_c ? param_c : "null");
    return local_683 + (int)local_683_d;
}

typedef struct {
    int field_684;
    long field_684_b;
    double field_684_c;
    char name_684[64];
} StructType684;

int function_684(StructType684 *s, int param_a, double param_b, const char *param_c) {
    int local_684 = param_a * 684;
    double local_684_d = param_b * 684;
    char buf_684[128];
    snprintf(buf_684, sizeof(buf_684), "function_%d: %d, %f, %s", 684, local_684, local_684_d, param_c ? param_c : "null");
    return local_684 + (int)local_684_d;
}

typedef struct {
    int field_685;
    long field_685_b;
    double field_685_c;
    char name_685[64];
} StructType685;

int function_685(StructType685 *s, int param_a, double param_b, const char *param_c) {
    int local_685 = param_a * 685;
    double local_685_d = param_b * 685;
    char buf_685[128];
    snprintf(buf_685, sizeof(buf_685), "function_%d: %d, %f, %s", 685, local_685, local_685_d, param_c ? param_c : "null");
    return local_685 + (int)local_685_d;
}

typedef struct {
    int field_686;
    long field_686_b;
    double field_686_c;
    char name_686[64];
} StructType686;

int function_686(StructType686 *s, int param_a, double param_b, const char *param_c) {
    int local_686 = param_a * 686;
    double local_686_d = param_b * 686;
    char buf_686[128];
    snprintf(buf_686, sizeof(buf_686), "function_%d: %d, %f, %s", 686, local_686, local_686_d, param_c ? param_c : "null");
    return local_686 + (int)local_686_d;
}

typedef struct {
    int field_687;
    long field_687_b;
    double field_687_c;
    char name_687[64];
} StructType687;

int function_687(StructType687 *s, int param_a, double param_b, const char *param_c) {
    int local_687 = param_a * 687;
    double local_687_d = param_b * 687;
    char buf_687[128];
    snprintf(buf_687, sizeof(buf_687), "function_%d: %d, %f, %s", 687, local_687, local_687_d, param_c ? param_c : "null");
    return local_687 + (int)local_687_d;
}

typedef struct {
    int field_688;
    long field_688_b;
    double field_688_c;
    char name_688[64];
} StructType688;

int function_688(StructType688 *s, int param_a, double param_b, const char *param_c) {
    int local_688 = param_a * 688;
    double local_688_d = param_b * 688;
    char buf_688[128];
    snprintf(buf_688, sizeof(buf_688), "function_%d: %d, %f, %s", 688, local_688, local_688_d, param_c ? param_c : "null");
    return local_688 + (int)local_688_d;
}

typedef struct {
    int field_689;
    long field_689_b;
    double field_689_c;
    char name_689[64];
} StructType689;

int function_689(StructType689 *s, int param_a, double param_b, const char *param_c) {
    int local_689 = param_a * 689;
    double local_689_d = param_b * 689;
    char buf_689[128];
    snprintf(buf_689, sizeof(buf_689), "function_%d: %d, %f, %s", 689, local_689, local_689_d, param_c ? param_c : "null");
    return local_689 + (int)local_689_d;
}

typedef struct {
    int field_690;
    long field_690_b;
    double field_690_c;
    char name_690[64];
} StructType690;

int function_690(StructType690 *s, int param_a, double param_b, const char *param_c) {
    int local_690 = param_a * 690;
    double local_690_d = param_b * 690;
    char buf_690[128];
    snprintf(buf_690, sizeof(buf_690), "function_%d: %d, %f, %s", 690, local_690, local_690_d, param_c ? param_c : "null");
    return local_690 + (int)local_690_d;
}

typedef struct {
    int field_691;
    long field_691_b;
    double field_691_c;
    char name_691[64];
} StructType691;

int function_691(StructType691 *s, int param_a, double param_b, const char *param_c) {
    int local_691 = param_a * 691;
    double local_691_d = param_b * 691;
    char buf_691[128];
    snprintf(buf_691, sizeof(buf_691), "function_%d: %d, %f, %s", 691, local_691, local_691_d, param_c ? param_c : "null");
    return local_691 + (int)local_691_d;
}

typedef struct {
    int field_692;
    long field_692_b;
    double field_692_c;
    char name_692[64];
} StructType692;

int function_692(StructType692 *s, int param_a, double param_b, const char *param_c) {
    int local_692 = param_a * 692;
    double local_692_d = param_b * 692;
    char buf_692[128];
    snprintf(buf_692, sizeof(buf_692), "function_%d: %d, %f, %s", 692, local_692, local_692_d, param_c ? param_c : "null");
    return local_692 + (int)local_692_d;
}

typedef struct {
    int field_693;
    long field_693_b;
    double field_693_c;
    char name_693[64];
} StructType693;

int function_693(StructType693 *s, int param_a, double param_b, const char *param_c) {
    int local_693 = param_a * 693;
    double local_693_d = param_b * 693;
    char buf_693[128];
    snprintf(buf_693, sizeof(buf_693), "function_%d: %d, %f, %s", 693, local_693, local_693_d, param_c ? param_c : "null");
    return local_693 + (int)local_693_d;
}

typedef struct {
    int field_694;
    long field_694_b;
    double field_694_c;
    char name_694[64];
} StructType694;

int function_694(StructType694 *s, int param_a, double param_b, const char *param_c) {
    int local_694 = param_a * 694;
    double local_694_d = param_b * 694;
    char buf_694[128];
    snprintf(buf_694, sizeof(buf_694), "function_%d: %d, %f, %s", 694, local_694, local_694_d, param_c ? param_c : "null");
    return local_694 + (int)local_694_d;
}

typedef struct {
    int field_695;
    long field_695_b;
    double field_695_c;
    char name_695[64];
} StructType695;

int function_695(StructType695 *s, int param_a, double param_b, const char *param_c) {
    int local_695 = param_a * 695;
    double local_695_d = param_b * 695;
    char buf_695[128];
    snprintf(buf_695, sizeof(buf_695), "function_%d: %d, %f, %s", 695, local_695, local_695_d, param_c ? param_c : "null");
    return local_695 + (int)local_695_d;
}

typedef struct {
    int field_696;
    long field_696_b;
    double field_696_c;
    char name_696[64];
} StructType696;

int function_696(StructType696 *s, int param_a, double param_b, const char *param_c) {
    int local_696 = param_a * 696;
    double local_696_d = param_b * 696;
    char buf_696[128];
    snprintf(buf_696, sizeof(buf_696), "function_%d: %d, %f, %s", 696, local_696, local_696_d, param_c ? param_c : "null");
    return local_696 + (int)local_696_d;
}

typedef struct {
    int field_697;
    long field_697_b;
    double field_697_c;
    char name_697[64];
} StructType697;

int function_697(StructType697 *s, int param_a, double param_b, const char *param_c) {
    int local_697 = param_a * 697;
    double local_697_d = param_b * 697;
    char buf_697[128];
    snprintf(buf_697, sizeof(buf_697), "function_%d: %d, %f, %s", 697, local_697, local_697_d, param_c ? param_c : "null");
    return local_697 + (int)local_697_d;
}

typedef struct {
    int field_698;
    long field_698_b;
    double field_698_c;
    char name_698[64];
} StructType698;

int function_698(StructType698 *s, int param_a, double param_b, const char *param_c) {
    int local_698 = param_a * 698;
    double local_698_d = param_b * 698;
    char buf_698[128];
    snprintf(buf_698, sizeof(buf_698), "function_%d: %d, %f, %s", 698, local_698, local_698_d, param_c ? param_c : "null");
    return local_698 + (int)local_698_d;
}

typedef struct {
    int field_699;
    long field_699_b;
    double field_699_c;
    char name_699[64];
} StructType699;

int function_699(StructType699 *s, int param_a, double param_b, const char *param_c) {
    int local_699 = param_a * 699;
    double local_699_d = param_b * 699;
    char buf_699[128];
    snprintf(buf_699, sizeof(buf_699), "function_%d: %d, %f, %s", 699, local_699, local_699_d, param_c ? param_c : "null");
    return local_699 + (int)local_699_d;
}

typedef struct {
    int field_700;
    long field_700_b;
    double field_700_c;
    char name_700[64];
} StructType700;

int function_700(StructType700 *s, int param_a, double param_b, const char *param_c) {
    int local_700 = param_a * 700;
    double local_700_d = param_b * 700;
    char buf_700[128];
    snprintf(buf_700, sizeof(buf_700), "function_%d: %d, %f, %s", 700, local_700, local_700_d, param_c ? param_c : "null");
    return local_700 + (int)local_700_d;
}

typedef struct {
    int field_701;
    long field_701_b;
    double field_701_c;
    char name_701[64];
} StructType701;

int function_701(StructType701 *s, int param_a, double param_b, const char *param_c) {
    int local_701 = param_a * 701;
    double local_701_d = param_b * 701;
    char buf_701[128];
    snprintf(buf_701, sizeof(buf_701), "function_%d: %d, %f, %s", 701, local_701, local_701_d, param_c ? param_c : "null");
    return local_701 + (int)local_701_d;
}

typedef struct {
    int field_702;
    long field_702_b;
    double field_702_c;
    char name_702[64];
} StructType702;

int function_702(StructType702 *s, int param_a, double param_b, const char *param_c) {
    int local_702 = param_a * 702;
    double local_702_d = param_b * 702;
    char buf_702[128];
    snprintf(buf_702, sizeof(buf_702), "function_%d: %d, %f, %s", 702, local_702, local_702_d, param_c ? param_c : "null");
    return local_702 + (int)local_702_d;
}

typedef struct {
    int field_703;
    long field_703_b;
    double field_703_c;
    char name_703[64];
} StructType703;

int function_703(StructType703 *s, int param_a, double param_b, const char *param_c) {
    int local_703 = param_a * 703;
    double local_703_d = param_b * 703;
    char buf_703[128];
    snprintf(buf_703, sizeof(buf_703), "function_%d: %d, %f, %s", 703, local_703, local_703_d, param_c ? param_c : "null");
    return local_703 + (int)local_703_d;
}

typedef struct {
    int field_704;
    long field_704_b;
    double field_704_c;
    char name_704[64];
} StructType704;

int function_704(StructType704 *s, int param_a, double param_b, const char *param_c) {
    int local_704 = param_a * 704;
    double local_704_d = param_b * 704;
    char buf_704[128];
    snprintf(buf_704, sizeof(buf_704), "function_%d: %d, %f, %s", 704, local_704, local_704_d, param_c ? param_c : "null");
    return local_704 + (int)local_704_d;
}

typedef struct {
    int field_705;
    long field_705_b;
    double field_705_c;
    char name_705[64];
} StructType705;

int function_705(StructType705 *s, int param_a, double param_b, const char *param_c) {
    int local_705 = param_a * 705;
    double local_705_d = param_b * 705;
    char buf_705[128];
    snprintf(buf_705, sizeof(buf_705), "function_%d: %d, %f, %s", 705, local_705, local_705_d, param_c ? param_c : "null");
    return local_705 + (int)local_705_d;
}

typedef struct {
    int field_706;
    long field_706_b;
    double field_706_c;
    char name_706[64];
} StructType706;

int function_706(StructType706 *s, int param_a, double param_b, const char *param_c) {
    int local_706 = param_a * 706;
    double local_706_d = param_b * 706;
    char buf_706[128];
    snprintf(buf_706, sizeof(buf_706), "function_%d: %d, %f, %s", 706, local_706, local_706_d, param_c ? param_c : "null");
    return local_706 + (int)local_706_d;
}

typedef struct {
    int field_707;
    long field_707_b;
    double field_707_c;
    char name_707[64];
} StructType707;

int function_707(StructType707 *s, int param_a, double param_b, const char *param_c) {
    int local_707 = param_a * 707;
    double local_707_d = param_b * 707;
    char buf_707[128];
    snprintf(buf_707, sizeof(buf_707), "function_%d: %d, %f, %s", 707, local_707, local_707_d, param_c ? param_c : "null");
    return local_707 + (int)local_707_d;
}

typedef struct {
    int field_708;
    long field_708_b;
    double field_708_c;
    char name_708[64];
} StructType708;

int function_708(StructType708 *s, int param_a, double param_b, const char *param_c) {
    int local_708 = param_a * 708;
    double local_708_d = param_b * 708;
    char buf_708[128];
    snprintf(buf_708, sizeof(buf_708), "function_%d: %d, %f, %s", 708, local_708, local_708_d, param_c ? param_c : "null");
    return local_708 + (int)local_708_d;
}

typedef struct {
    int field_709;
    long field_709_b;
    double field_709_c;
    char name_709[64];
} StructType709;

int function_709(StructType709 *s, int param_a, double param_b, const char *param_c) {
    int local_709 = param_a * 709;
    double local_709_d = param_b * 709;
    char buf_709[128];
    snprintf(buf_709, sizeof(buf_709), "function_%d: %d, %f, %s", 709, local_709, local_709_d, param_c ? param_c : "null");
    return local_709 + (int)local_709_d;
}

typedef struct {
    int field_710;
    long field_710_b;
    double field_710_c;
    char name_710[64];
} StructType710;

int function_710(StructType710 *s, int param_a, double param_b, const char *param_c) {
    int local_710 = param_a * 710;
    double local_710_d = param_b * 710;
    char buf_710[128];
    snprintf(buf_710, sizeof(buf_710), "function_%d: %d, %f, %s", 710, local_710, local_710_d, param_c ? param_c : "null");
    return local_710 + (int)local_710_d;
}

typedef struct {
    int field_711;
    long field_711_b;
    double field_711_c;
    char name_711[64];
} StructType711;

int function_711(StructType711 *s, int param_a, double param_b, const char *param_c) {
    int local_711 = param_a * 711;
    double local_711_d = param_b * 711;
    char buf_711[128];
    snprintf(buf_711, sizeof(buf_711), "function_%d: %d, %f, %s", 711, local_711, local_711_d, param_c ? param_c : "null");
    return local_711 + (int)local_711_d;
}

typedef struct {
    int field_712;
    long field_712_b;
    double field_712_c;
    char name_712[64];
} StructType712;

int function_712(StructType712 *s, int param_a, double param_b, const char *param_c) {
    int local_712 = param_a * 712;
    double local_712_d = param_b * 712;
    char buf_712[128];
    snprintf(buf_712, sizeof(buf_712), "function_%d: %d, %f, %s", 712, local_712, local_712_d, param_c ? param_c : "null");
    return local_712 + (int)local_712_d;
}

typedef struct {
    int field_713;
    long field_713_b;
    double field_713_c;
    char name_713[64];
} StructType713;

int function_713(StructType713 *s, int param_a, double param_b, const char *param_c) {
    int local_713 = param_a * 713;
    double local_713_d = param_b * 713;
    char buf_713[128];
    snprintf(buf_713, sizeof(buf_713), "function_%d: %d, %f, %s", 713, local_713, local_713_d, param_c ? param_c : "null");
    return local_713 + (int)local_713_d;
}

typedef struct {
    int field_714;
    long field_714_b;
    double field_714_c;
    char name_714[64];
} StructType714;

int function_714(StructType714 *s, int param_a, double param_b, const char *param_c) {
    int local_714 = param_a * 714;
    double local_714_d = param_b * 714;
    char buf_714[128];
    snprintf(buf_714, sizeof(buf_714), "function_%d: %d, %f, %s", 714, local_714, local_714_d, param_c ? param_c : "null");
    return local_714 + (int)local_714_d;
}

typedef struct {
    int field_715;
    long field_715_b;
    double field_715_c;
    char name_715[64];
} StructType715;

int function_715(StructType715 *s, int param_a, double param_b, const char *param_c) {
    int local_715 = param_a * 715;
    double local_715_d = param_b * 715;
    char buf_715[128];
    snprintf(buf_715, sizeof(buf_715), "function_%d: %d, %f, %s", 715, local_715, local_715_d, param_c ? param_c : "null");
    return local_715 + (int)local_715_d;
}

typedef struct {
    int field_716;
    long field_716_b;
    double field_716_c;
    char name_716[64];
} StructType716;

int function_716(StructType716 *s, int param_a, double param_b, const char *param_c) {
    int local_716 = param_a * 716;
    double local_716_d = param_b * 716;
    char buf_716[128];
    snprintf(buf_716, sizeof(buf_716), "function_%d: %d, %f, %s", 716, local_716, local_716_d, param_c ? param_c : "null");
    return local_716 + (int)local_716_d;
}

typedef struct {
    int field_717;
    long field_717_b;
    double field_717_c;
    char name_717[64];
} StructType717;

int function_717(StructType717 *s, int param_a, double param_b, const char *param_c) {
    int local_717 = param_a * 717;
    double local_717_d = param_b * 717;
    char buf_717[128];
    snprintf(buf_717, sizeof(buf_717), "function_%d: %d, %f, %s", 717, local_717, local_717_d, param_c ? param_c : "null");
    return local_717 + (int)local_717_d;
}

typedef struct {
    int field_718;
    long field_718_b;
    double field_718_c;
    char name_718[64];
} StructType718;

int function_718(StructType718 *s, int param_a, double param_b, const char *param_c) {
    int local_718 = param_a * 718;
    double local_718_d = param_b * 718;
    char buf_718[128];
    snprintf(buf_718, sizeof(buf_718), "function_%d: %d, %f, %s", 718, local_718, local_718_d, param_c ? param_c : "null");
    return local_718 + (int)local_718_d;
}

typedef struct {
    int field_719;
    long field_719_b;
    double field_719_c;
    char name_719[64];
} StructType719;

int function_719(StructType719 *s, int param_a, double param_b, const char *param_c) {
    int local_719 = param_a * 719;
    double local_719_d = param_b * 719;
    char buf_719[128];
    snprintf(buf_719, sizeof(buf_719), "function_%d: %d, %f, %s", 719, local_719, local_719_d, param_c ? param_c : "null");
    return local_719 + (int)local_719_d;
}

typedef struct {
    int field_720;
    long field_720_b;
    double field_720_c;
    char name_720[64];
} StructType720;

int function_720(StructType720 *s, int param_a, double param_b, const char *param_c) {
    int local_720 = param_a * 720;
    double local_720_d = param_b * 720;
    char buf_720[128];
    snprintf(buf_720, sizeof(buf_720), "function_%d: %d, %f, %s", 720, local_720, local_720_d, param_c ? param_c : "null");
    return local_720 + (int)local_720_d;
}

typedef struct {
    int field_721;
    long field_721_b;
    double field_721_c;
    char name_721[64];
} StructType721;

int function_721(StructType721 *s, int param_a, double param_b, const char *param_c) {
    int local_721 = param_a * 721;
    double local_721_d = param_b * 721;
    char buf_721[128];
    snprintf(buf_721, sizeof(buf_721), "function_%d: %d, %f, %s", 721, local_721, local_721_d, param_c ? param_c : "null");
    return local_721 + (int)local_721_d;
}

typedef struct {
    int field_722;
    long field_722_b;
    double field_722_c;
    char name_722[64];
} StructType722;

int function_722(StructType722 *s, int param_a, double param_b, const char *param_c) {
    int local_722 = param_a * 722;
    double local_722_d = param_b * 722;
    char buf_722[128];
    snprintf(buf_722, sizeof(buf_722), "function_%d: %d, %f, %s", 722, local_722, local_722_d, param_c ? param_c : "null");
    return local_722 + (int)local_722_d;
}

typedef struct {
    int field_723;
    long field_723_b;
    double field_723_c;
    char name_723[64];
} StructType723;

int function_723(StructType723 *s, int param_a, double param_b, const char *param_c) {
    int local_723 = param_a * 723;
    double local_723_d = param_b * 723;
    char buf_723[128];
    snprintf(buf_723, sizeof(buf_723), "function_%d: %d, %f, %s", 723, local_723, local_723_d, param_c ? param_c : "null");
    return local_723 + (int)local_723_d;
}

typedef struct {
    int field_724;
    long field_724_b;
    double field_724_c;
    char name_724[64];
} StructType724;

int function_724(StructType724 *s, int param_a, double param_b, const char *param_c) {
    int local_724 = param_a * 724;
    double local_724_d = param_b * 724;
    char buf_724[128];
    snprintf(buf_724, sizeof(buf_724), "function_%d: %d, %f, %s", 724, local_724, local_724_d, param_c ? param_c : "null");
    return local_724 + (int)local_724_d;
}

typedef struct {
    int field_725;
    long field_725_b;
    double field_725_c;
    char name_725[64];
} StructType725;

int function_725(StructType725 *s, int param_a, double param_b, const char *param_c) {
    int local_725 = param_a * 725;
    double local_725_d = param_b * 725;
    char buf_725[128];
    snprintf(buf_725, sizeof(buf_725), "function_%d: %d, %f, %s", 725, local_725, local_725_d, param_c ? param_c : "null");
    return local_725 + (int)local_725_d;
}

typedef struct {
    int field_726;
    long field_726_b;
    double field_726_c;
    char name_726[64];
} StructType726;

int function_726(StructType726 *s, int param_a, double param_b, const char *param_c) {
    int local_726 = param_a * 726;
    double local_726_d = param_b * 726;
    char buf_726[128];
    snprintf(buf_726, sizeof(buf_726), "function_%d: %d, %f, %s", 726, local_726, local_726_d, param_c ? param_c : "null");
    return local_726 + (int)local_726_d;
}

typedef struct {
    int field_727;
    long field_727_b;
    double field_727_c;
    char name_727[64];
} StructType727;

int function_727(StructType727 *s, int param_a, double param_b, const char *param_c) {
    int local_727 = param_a * 727;
    double local_727_d = param_b * 727;
    char buf_727[128];
    snprintf(buf_727, sizeof(buf_727), "function_%d: %d, %f, %s", 727, local_727, local_727_d, param_c ? param_c : "null");
    return local_727 + (int)local_727_d;
}

typedef struct {
    int field_728;
    long field_728_b;
    double field_728_c;
    char name_728[64];
} StructType728;

int function_728(StructType728 *s, int param_a, double param_b, const char *param_c) {
    int local_728 = param_a * 728;
    double local_728_d = param_b * 728;
    char buf_728[128];
    snprintf(buf_728, sizeof(buf_728), "function_%d: %d, %f, %s", 728, local_728, local_728_d, param_c ? param_c : "null");
    return local_728 + (int)local_728_d;
}

typedef struct {
    int field_729;
    long field_729_b;
    double field_729_c;
    char name_729[64];
} StructType729;

int function_729(StructType729 *s, int param_a, double param_b, const char *param_c) {
    int local_729 = param_a * 729;
    double local_729_d = param_b * 729;
    char buf_729[128];
    snprintf(buf_729, sizeof(buf_729), "function_%d: %d, %f, %s", 729, local_729, local_729_d, param_c ? param_c : "null");
    return local_729 + (int)local_729_d;
}

typedef struct {
    int field_730;
    long field_730_b;
    double field_730_c;
    char name_730[64];
} StructType730;

int function_730(StructType730 *s, int param_a, double param_b, const char *param_c) {
    int local_730 = param_a * 730;
    double local_730_d = param_b * 730;
    char buf_730[128];
    snprintf(buf_730, sizeof(buf_730), "function_%d: %d, %f, %s", 730, local_730, local_730_d, param_c ? param_c : "null");
    return local_730 + (int)local_730_d;
}

typedef struct {
    int field_731;
    long field_731_b;
    double field_731_c;
    char name_731[64];
} StructType731;

int function_731(StructType731 *s, int param_a, double param_b, const char *param_c) {
    int local_731 = param_a * 731;
    double local_731_d = param_b * 731;
    char buf_731[128];
    snprintf(buf_731, sizeof(buf_731), "function_%d: %d, %f, %s", 731, local_731, local_731_d, param_c ? param_c : "null");
    return local_731 + (int)local_731_d;
}

typedef struct {
    int field_732;
    long field_732_b;
    double field_732_c;
    char name_732[64];
} StructType732;

int function_732(StructType732 *s, int param_a, double param_b, const char *param_c) {
    int local_732 = param_a * 732;
    double local_732_d = param_b * 732;
    char buf_732[128];
    snprintf(buf_732, sizeof(buf_732), "function_%d: %d, %f, %s", 732, local_732, local_732_d, param_c ? param_c : "null");
    return local_732 + (int)local_732_d;
}

typedef struct {
    int field_733;
    long field_733_b;
    double field_733_c;
    char name_733[64];
} StructType733;

int function_733(StructType733 *s, int param_a, double param_b, const char *param_c) {
    int local_733 = param_a * 733;
    double local_733_d = param_b * 733;
    char buf_733[128];
    snprintf(buf_733, sizeof(buf_733), "function_%d: %d, %f, %s", 733, local_733, local_733_d, param_c ? param_c : "null");
    return local_733 + (int)local_733_d;
}

typedef struct {
    int field_734;
    long field_734_b;
    double field_734_c;
    char name_734[64];
} StructType734;

int function_734(StructType734 *s, int param_a, double param_b, const char *param_c) {
    int local_734 = param_a * 734;
    double local_734_d = param_b * 734;
    char buf_734[128];
    snprintf(buf_734, sizeof(buf_734), "function_%d: %d, %f, %s", 734, local_734, local_734_d, param_c ? param_c : "null");
    return local_734 + (int)local_734_d;
}

typedef struct {
    int field_735;
    long field_735_b;
    double field_735_c;
    char name_735[64];
} StructType735;

int function_735(StructType735 *s, int param_a, double param_b, const char *param_c) {
    int local_735 = param_a * 735;
    double local_735_d = param_b * 735;
    char buf_735[128];
    snprintf(buf_735, sizeof(buf_735), "function_%d: %d, %f, %s", 735, local_735, local_735_d, param_c ? param_c : "null");
    return local_735 + (int)local_735_d;
}

typedef struct {
    int field_736;
    long field_736_b;
    double field_736_c;
    char name_736[64];
} StructType736;

int function_736(StructType736 *s, int param_a, double param_b, const char *param_c) {
    int local_736 = param_a * 736;
    double local_736_d = param_b * 736;
    char buf_736[128];
    snprintf(buf_736, sizeof(buf_736), "function_%d: %d, %f, %s", 736, local_736, local_736_d, param_c ? param_c : "null");
    return local_736 + (int)local_736_d;
}

typedef struct {
    int field_737;
    long field_737_b;
    double field_737_c;
    char name_737[64];
} StructType737;

int function_737(StructType737 *s, int param_a, double param_b, const char *param_c) {
    int local_737 = param_a * 737;
    double local_737_d = param_b * 737;
    char buf_737[128];
    snprintf(buf_737, sizeof(buf_737), "function_%d: %d, %f, %s", 737, local_737, local_737_d, param_c ? param_c : "null");
    return local_737 + (int)local_737_d;
}

typedef struct {
    int field_738;
    long field_738_b;
    double field_738_c;
    char name_738[64];
} StructType738;

int function_738(StructType738 *s, int param_a, double param_b, const char *param_c) {
    int local_738 = param_a * 738;
    double local_738_d = param_b * 738;
    char buf_738[128];
    snprintf(buf_738, sizeof(buf_738), "function_%d: %d, %f, %s", 738, local_738, local_738_d, param_c ? param_c : "null");
    return local_738 + (int)local_738_d;
}

typedef struct {
    int field_739;
    long field_739_b;
    double field_739_c;
    char name_739[64];
} StructType739;

int function_739(StructType739 *s, int param_a, double param_b, const char *param_c) {
    int local_739 = param_a * 739;
    double local_739_d = param_b * 739;
    char buf_739[128];
    snprintf(buf_739, sizeof(buf_739), "function_%d: %d, %f, %s", 739, local_739, local_739_d, param_c ? param_c : "null");
    return local_739 + (int)local_739_d;
}

typedef struct {
    int field_740;
    long field_740_b;
    double field_740_c;
    char name_740[64];
} StructType740;

int function_740(StructType740 *s, int param_a, double param_b, const char *param_c) {
    int local_740 = param_a * 740;
    double local_740_d = param_b * 740;
    char buf_740[128];
    snprintf(buf_740, sizeof(buf_740), "function_%d: %d, %f, %s", 740, local_740, local_740_d, param_c ? param_c : "null");
    return local_740 + (int)local_740_d;
}

typedef struct {
    int field_741;
    long field_741_b;
    double field_741_c;
    char name_741[64];
} StructType741;

int function_741(StructType741 *s, int param_a, double param_b, const char *param_c) {
    int local_741 = param_a * 741;
    double local_741_d = param_b * 741;
    char buf_741[128];
    snprintf(buf_741, sizeof(buf_741), "function_%d: %d, %f, %s", 741, local_741, local_741_d, param_c ? param_c : "null");
    return local_741 + (int)local_741_d;
}

typedef struct {
    int field_742;
    long field_742_b;
    double field_742_c;
    char name_742[64];
} StructType742;

int function_742(StructType742 *s, int param_a, double param_b, const char *param_c) {
    int local_742 = param_a * 742;
    double local_742_d = param_b * 742;
    char buf_742[128];
    snprintf(buf_742, sizeof(buf_742), "function_%d: %d, %f, %s", 742, local_742, local_742_d, param_c ? param_c : "null");
    return local_742 + (int)local_742_d;
}

typedef struct {
    int field_743;
    long field_743_b;
    double field_743_c;
    char name_743[64];
} StructType743;

int function_743(StructType743 *s, int param_a, double param_b, const char *param_c) {
    int local_743 = param_a * 743;
    double local_743_d = param_b * 743;
    char buf_743[128];
    snprintf(buf_743, sizeof(buf_743), "function_%d: %d, %f, %s", 743, local_743, local_743_d, param_c ? param_c : "null");
    return local_743 + (int)local_743_d;
}

typedef struct {
    int field_744;
    long field_744_b;
    double field_744_c;
    char name_744[64];
} StructType744;

int function_744(StructType744 *s, int param_a, double param_b, const char *param_c) {
    int local_744 = param_a * 744;
    double local_744_d = param_b * 744;
    char buf_744[128];
    snprintf(buf_744, sizeof(buf_744), "function_%d: %d, %f, %s", 744, local_744, local_744_d, param_c ? param_c : "null");
    return local_744 + (int)local_744_d;
}

typedef struct {
    int field_745;
    long field_745_b;
    double field_745_c;
    char name_745[64];
} StructType745;

int function_745(StructType745 *s, int param_a, double param_b, const char *param_c) {
    int local_745 = param_a * 745;
    double local_745_d = param_b * 745;
    char buf_745[128];
    snprintf(buf_745, sizeof(buf_745), "function_%d: %d, %f, %s", 745, local_745, local_745_d, param_c ? param_c : "null");
    return local_745 + (int)local_745_d;
}

typedef struct {
    int field_746;
    long field_746_b;
    double field_746_c;
    char name_746[64];
} StructType746;

int function_746(StructType746 *s, int param_a, double param_b, const char *param_c) {
    int local_746 = param_a * 746;
    double local_746_d = param_b * 746;
    char buf_746[128];
    snprintf(buf_746, sizeof(buf_746), "function_%d: %d, %f, %s", 746, local_746, local_746_d, param_c ? param_c : "null");
    return local_746 + (int)local_746_d;
}

typedef struct {
    int field_747;
    long field_747_b;
    double field_747_c;
    char name_747[64];
} StructType747;

int function_747(StructType747 *s, int param_a, double param_b, const char *param_c) {
    int local_747 = param_a * 747;
    double local_747_d = param_b * 747;
    char buf_747[128];
    snprintf(buf_747, sizeof(buf_747), "function_%d: %d, %f, %s", 747, local_747, local_747_d, param_c ? param_c : "null");
    return local_747 + (int)local_747_d;
}

typedef struct {
    int field_748;
    long field_748_b;
    double field_748_c;
    char name_748[64];
} StructType748;

int function_748(StructType748 *s, int param_a, double param_b, const char *param_c) {
    int local_748 = param_a * 748;
    double local_748_d = param_b * 748;
    char buf_748[128];
    snprintf(buf_748, sizeof(buf_748), "function_%d: %d, %f, %s", 748, local_748, local_748_d, param_c ? param_c : "null");
    return local_748 + (int)local_748_d;
}

typedef struct {
    int field_749;
    long field_749_b;
    double field_749_c;
    char name_749[64];
} StructType749;

int function_749(StructType749 *s, int param_a, double param_b, const char *param_c) {
    int local_749 = param_a * 749;
    double local_749_d = param_b * 749;
    char buf_749[128];
    snprintf(buf_749, sizeof(buf_749), "function_%d: %d, %f, %s", 749, local_749, local_749_d, param_c ? param_c : "null");
    return local_749 + (int)local_749_d;
}

typedef struct {
    int field_750;
    long field_750_b;
    double field_750_c;
    char name_750[64];
} StructType750;

int function_750(StructType750 *s, int param_a, double param_b, const char *param_c) {
    int local_750 = param_a * 750;
    double local_750_d = param_b * 750;
    char buf_750[128];
    snprintf(buf_750, sizeof(buf_750), "function_%d: %d, %f, %s", 750, local_750, local_750_d, param_c ? param_c : "null");
    return local_750 + (int)local_750_d;
}

typedef struct {
    int field_751;
    long field_751_b;
    double field_751_c;
    char name_751[64];
} StructType751;

int function_751(StructType751 *s, int param_a, double param_b, const char *param_c) {
    int local_751 = param_a * 751;
    double local_751_d = param_b * 751;
    char buf_751[128];
    snprintf(buf_751, sizeof(buf_751), "function_%d: %d, %f, %s", 751, local_751, local_751_d, param_c ? param_c : "null");
    return local_751 + (int)local_751_d;
}

typedef struct {
    int field_752;
    long field_752_b;
    double field_752_c;
    char name_752[64];
} StructType752;

int function_752(StructType752 *s, int param_a, double param_b, const char *param_c) {
    int local_752 = param_a * 752;
    double local_752_d = param_b * 752;
    char buf_752[128];
    snprintf(buf_752, sizeof(buf_752), "function_%d: %d, %f, %s", 752, local_752, local_752_d, param_c ? param_c : "null");
    return local_752 + (int)local_752_d;
}

typedef struct {
    int field_753;
    long field_753_b;
    double field_753_c;
    char name_753[64];
} StructType753;

int function_753(StructType753 *s, int param_a, double param_b, const char *param_c) {
    int local_753 = param_a * 753;
    double local_753_d = param_b * 753;
    char buf_753[128];
    snprintf(buf_753, sizeof(buf_753), "function_%d: %d, %f, %s", 753, local_753, local_753_d, param_c ? param_c : "null");
    return local_753 + (int)local_753_d;
}

typedef struct {
    int field_754;
    long field_754_b;
    double field_754_c;
    char name_754[64];
} StructType754;

int function_754(StructType754 *s, int param_a, double param_b, const char *param_c) {
    int local_754 = param_a * 754;
    double local_754_d = param_b * 754;
    char buf_754[128];
    snprintf(buf_754, sizeof(buf_754), "function_%d: %d, %f, %s", 754, local_754, local_754_d, param_c ? param_c : "null");
    return local_754 + (int)local_754_d;
}

typedef struct {
    int field_755;
    long field_755_b;
    double field_755_c;
    char name_755[64];
} StructType755;

int function_755(StructType755 *s, int param_a, double param_b, const char *param_c) {
    int local_755 = param_a * 755;
    double local_755_d = param_b * 755;
    char buf_755[128];
    snprintf(buf_755, sizeof(buf_755), "function_%d: %d, %f, %s", 755, local_755, local_755_d, param_c ? param_c : "null");
    return local_755 + (int)local_755_d;
}

typedef struct {
    int field_756;
    long field_756_b;
    double field_756_c;
    char name_756[64];
} StructType756;

int function_756(StructType756 *s, int param_a, double param_b, const char *param_c) {
    int local_756 = param_a * 756;
    double local_756_d = param_b * 756;
    char buf_756[128];
    snprintf(buf_756, sizeof(buf_756), "function_%d: %d, %f, %s", 756, local_756, local_756_d, param_c ? param_c : "null");
    return local_756 + (int)local_756_d;
}

typedef struct {
    int field_757;
    long field_757_b;
    double field_757_c;
    char name_757[64];
} StructType757;

int function_757(StructType757 *s, int param_a, double param_b, const char *param_c) {
    int local_757 = param_a * 757;
    double local_757_d = param_b * 757;
    char buf_757[128];
    snprintf(buf_757, sizeof(buf_757), "function_%d: %d, %f, %s", 757, local_757, local_757_d, param_c ? param_c : "null");
    return local_757 + (int)local_757_d;
}

typedef struct {
    int field_758;
    long field_758_b;
    double field_758_c;
    char name_758[64];
} StructType758;

int function_758(StructType758 *s, int param_a, double param_b, const char *param_c) {
    int local_758 = param_a * 758;
    double local_758_d = param_b * 758;
    char buf_758[128];
    snprintf(buf_758, sizeof(buf_758), "function_%d: %d, %f, %s", 758, local_758, local_758_d, param_c ? param_c : "null");
    return local_758 + (int)local_758_d;
}

typedef struct {
    int field_759;
    long field_759_b;
    double field_759_c;
    char name_759[64];
} StructType759;

int function_759(StructType759 *s, int param_a, double param_b, const char *param_c) {
    int local_759 = param_a * 759;
    double local_759_d = param_b * 759;
    char buf_759[128];
    snprintf(buf_759, sizeof(buf_759), "function_%d: %d, %f, %s", 759, local_759, local_759_d, param_c ? param_c : "null");
    return local_759 + (int)local_759_d;
}

typedef struct {
    int field_760;
    long field_760_b;
    double field_760_c;
    char name_760[64];
} StructType760;

int function_760(StructType760 *s, int param_a, double param_b, const char *param_c) {
    int local_760 = param_a * 760;
    double local_760_d = param_b * 760;
    char buf_760[128];
    snprintf(buf_760, sizeof(buf_760), "function_%d: %d, %f, %s", 760, local_760, local_760_d, param_c ? param_c : "null");
    return local_760 + (int)local_760_d;
}

typedef struct {
    int field_761;
    long field_761_b;
    double field_761_c;
    char name_761[64];
} StructType761;

int function_761(StructType761 *s, int param_a, double param_b, const char *param_c) {
    int local_761 = param_a * 761;
    double local_761_d = param_b * 761;
    char buf_761[128];
    snprintf(buf_761, sizeof(buf_761), "function_%d: %d, %f, %s", 761, local_761, local_761_d, param_c ? param_c : "null");
    return local_761 + (int)local_761_d;
}

typedef struct {
    int field_762;
    long field_762_b;
    double field_762_c;
    char name_762[64];
} StructType762;

int function_762(StructType762 *s, int param_a, double param_b, const char *param_c) {
    int local_762 = param_a * 762;
    double local_762_d = param_b * 762;
    char buf_762[128];
    snprintf(buf_762, sizeof(buf_762), "function_%d: %d, %f, %s", 762, local_762, local_762_d, param_c ? param_c : "null");
    return local_762 + (int)local_762_d;
}

typedef struct {
    int field_763;
    long field_763_b;
    double field_763_c;
    char name_763[64];
} StructType763;

int function_763(StructType763 *s, int param_a, double param_b, const char *param_c) {
    int local_763 = param_a * 763;
    double local_763_d = param_b * 763;
    char buf_763[128];
    snprintf(buf_763, sizeof(buf_763), "function_%d: %d, %f, %s", 763, local_763, local_763_d, param_c ? param_c : "null");
    return local_763 + (int)local_763_d;
}

typedef struct {
    int field_764;
    long field_764_b;
    double field_764_c;
    char name_764[64];
} StructType764;

int function_764(StructType764 *s, int param_a, double param_b, const char *param_c) {
    int local_764 = param_a * 764;
    double local_764_d = param_b * 764;
    char buf_764[128];
    snprintf(buf_764, sizeof(buf_764), "function_%d: %d, %f, %s", 764, local_764, local_764_d, param_c ? param_c : "null");
    return local_764 + (int)local_764_d;
}

typedef struct {
    int field_765;
    long field_765_b;
    double field_765_c;
    char name_765[64];
} StructType765;

int function_765(StructType765 *s, int param_a, double param_b, const char *param_c) {
    int local_765 = param_a * 765;
    double local_765_d = param_b * 765;
    char buf_765[128];
    snprintf(buf_765, sizeof(buf_765), "function_%d: %d, %f, %s", 765, local_765, local_765_d, param_c ? param_c : "null");
    return local_765 + (int)local_765_d;
}

typedef struct {
    int field_766;
    long field_766_b;
    double field_766_c;
    char name_766[64];
} StructType766;

int function_766(StructType766 *s, int param_a, double param_b, const char *param_c) {
    int local_766 = param_a * 766;
    double local_766_d = param_b * 766;
    char buf_766[128];
    snprintf(buf_766, sizeof(buf_766), "function_%d: %d, %f, %s", 766, local_766, local_766_d, param_c ? param_c : "null");
    return local_766 + (int)local_766_d;
}

typedef struct {
    int field_767;
    long field_767_b;
    double field_767_c;
    char name_767[64];
} StructType767;

int function_767(StructType767 *s, int param_a, double param_b, const char *param_c) {
    int local_767 = param_a * 767;
    double local_767_d = param_b * 767;
    char buf_767[128];
    snprintf(buf_767, sizeof(buf_767), "function_%d: %d, %f, %s", 767, local_767, local_767_d, param_c ? param_c : "null");
    return local_767 + (int)local_767_d;
}

typedef struct {
    int field_768;
    long field_768_b;
    double field_768_c;
    char name_768[64];
} StructType768;

int function_768(StructType768 *s, int param_a, double param_b, const char *param_c) {
    int local_768 = param_a * 768;
    double local_768_d = param_b * 768;
    char buf_768[128];
    snprintf(buf_768, sizeof(buf_768), "function_%d: %d, %f, %s", 768, local_768, local_768_d, param_c ? param_c : "null");
    return local_768 + (int)local_768_d;
}

typedef struct {
    int field_769;
    long field_769_b;
    double field_769_c;
    char name_769[64];
} StructType769;

int function_769(StructType769 *s, int param_a, double param_b, const char *param_c) {
    int local_769 = param_a * 769;
    double local_769_d = param_b * 769;
    char buf_769[128];
    snprintf(buf_769, sizeof(buf_769), "function_%d: %d, %f, %s", 769, local_769, local_769_d, param_c ? param_c : "null");
    return local_769 + (int)local_769_d;
}

typedef struct {
    int field_770;
    long field_770_b;
    double field_770_c;
    char name_770[64];
} StructType770;

int function_770(StructType770 *s, int param_a, double param_b, const char *param_c) {
    int local_770 = param_a * 770;
    double local_770_d = param_b * 770;
    char buf_770[128];
    snprintf(buf_770, sizeof(buf_770), "function_%d: %d, %f, %s", 770, local_770, local_770_d, param_c ? param_c : "null");
    return local_770 + (int)local_770_d;
}

typedef struct {
    int field_771;
    long field_771_b;
    double field_771_c;
    char name_771[64];
} StructType771;

int function_771(StructType771 *s, int param_a, double param_b, const char *param_c) {
    int local_771 = param_a * 771;
    double local_771_d = param_b * 771;
    char buf_771[128];
    snprintf(buf_771, sizeof(buf_771), "function_%d: %d, %f, %s", 771, local_771, local_771_d, param_c ? param_c : "null");
    return local_771 + (int)local_771_d;
}

typedef struct {
    int field_772;
    long field_772_b;
    double field_772_c;
    char name_772[64];
} StructType772;

int function_772(StructType772 *s, int param_a, double param_b, const char *param_c) {
    int local_772 = param_a * 772;
    double local_772_d = param_b * 772;
    char buf_772[128];
    snprintf(buf_772, sizeof(buf_772), "function_%d: %d, %f, %s", 772, local_772, local_772_d, param_c ? param_c : "null");
    return local_772 + (int)local_772_d;
}

typedef struct {
    int field_773;
    long field_773_b;
    double field_773_c;
    char name_773[64];
} StructType773;

int function_773(StructType773 *s, int param_a, double param_b, const char *param_c) {
    int local_773 = param_a * 773;
    double local_773_d = param_b * 773;
    char buf_773[128];
    snprintf(buf_773, sizeof(buf_773), "function_%d: %d, %f, %s", 773, local_773, local_773_d, param_c ? param_c : "null");
    return local_773 + (int)local_773_d;
}

typedef struct {
    int field_774;
    long field_774_b;
    double field_774_c;
    char name_774[64];
} StructType774;

int function_774(StructType774 *s, int param_a, double param_b, const char *param_c) {
    int local_774 = param_a * 774;
    double local_774_d = param_b * 774;
    char buf_774[128];
    snprintf(buf_774, sizeof(buf_774), "function_%d: %d, %f, %s", 774, local_774, local_774_d, param_c ? param_c : "null");
    return local_774 + (int)local_774_d;
}

typedef struct {
    int field_775;
    long field_775_b;
    double field_775_c;
    char name_775[64];
} StructType775;

int function_775(StructType775 *s, int param_a, double param_b, const char *param_c) {
    int local_775 = param_a * 775;
    double local_775_d = param_b * 775;
    char buf_775[128];
    snprintf(buf_775, sizeof(buf_775), "function_%d: %d, %f, %s", 775, local_775, local_775_d, param_c ? param_c : "null");
    return local_775 + (int)local_775_d;
}

typedef struct {
    int field_776;
    long field_776_b;
    double field_776_c;
    char name_776[64];
} StructType776;

int function_776(StructType776 *s, int param_a, double param_b, const char *param_c) {
    int local_776 = param_a * 776;
    double local_776_d = param_b * 776;
    char buf_776[128];
    snprintf(buf_776, sizeof(buf_776), "function_%d: %d, %f, %s", 776, local_776, local_776_d, param_c ? param_c : "null");
    return local_776 + (int)local_776_d;
}

typedef struct {
    int field_777;
    long field_777_b;
    double field_777_c;
    char name_777[64];
} StructType777;

int function_777(StructType777 *s, int param_a, double param_b, const char *param_c) {
    int local_777 = param_a * 777;
    double local_777_d = param_b * 777;
    char buf_777[128];
    snprintf(buf_777, sizeof(buf_777), "function_%d: %d, %f, %s", 777, local_777, local_777_d, param_c ? param_c : "null");
    return local_777 + (int)local_777_d;
}

typedef struct {
    int field_778;
    long field_778_b;
    double field_778_c;
    char name_778[64];
} StructType778;

int function_778(StructType778 *s, int param_a, double param_b, const char *param_c) {
    int local_778 = param_a * 778;
    double local_778_d = param_b * 778;
    char buf_778[128];
    snprintf(buf_778, sizeof(buf_778), "function_%d: %d, %f, %s", 778, local_778, local_778_d, param_c ? param_c : "null");
    return local_778 + (int)local_778_d;
}

typedef struct {
    int field_779;
    long field_779_b;
    double field_779_c;
    char name_779[64];
} StructType779;

int function_779(StructType779 *s, int param_a, double param_b, const char *param_c) {
    int local_779 = param_a * 779;
    double local_779_d = param_b * 779;
    char buf_779[128];
    snprintf(buf_779, sizeof(buf_779), "function_%d: %d, %f, %s", 779, local_779, local_779_d, param_c ? param_c : "null");
    return local_779 + (int)local_779_d;
}

typedef struct {
    int field_780;
    long field_780_b;
    double field_780_c;
    char name_780[64];
} StructType780;

int function_780(StructType780 *s, int param_a, double param_b, const char *param_c) {
    int local_780 = param_a * 780;
    double local_780_d = param_b * 780;
    char buf_780[128];
    snprintf(buf_780, sizeof(buf_780), "function_%d: %d, %f, %s", 780, local_780, local_780_d, param_c ? param_c : "null");
    return local_780 + (int)local_780_d;
}

typedef struct {
    int field_781;
    long field_781_b;
    double field_781_c;
    char name_781[64];
} StructType781;

int function_781(StructType781 *s, int param_a, double param_b, const char *param_c) {
    int local_781 = param_a * 781;
    double local_781_d = param_b * 781;
    char buf_781[128];
    snprintf(buf_781, sizeof(buf_781), "function_%d: %d, %f, %s", 781, local_781, local_781_d, param_c ? param_c : "null");
    return local_781 + (int)local_781_d;
}

typedef struct {
    int field_782;
    long field_782_b;
    double field_782_c;
    char name_782[64];
} StructType782;

int function_782(StructType782 *s, int param_a, double param_b, const char *param_c) {
    int local_782 = param_a * 782;
    double local_782_d = param_b * 782;
    char buf_782[128];
    snprintf(buf_782, sizeof(buf_782), "function_%d: %d, %f, %s", 782, local_782, local_782_d, param_c ? param_c : "null");
    return local_782 + (int)local_782_d;
}

typedef struct {
    int field_783;
    long field_783_b;
    double field_783_c;
    char name_783[64];
} StructType783;

int function_783(StructType783 *s, int param_a, double param_b, const char *param_c) {
    int local_783 = param_a * 783;
    double local_783_d = param_b * 783;
    char buf_783[128];
    snprintf(buf_783, sizeof(buf_783), "function_%d: %d, %f, %s", 783, local_783, local_783_d, param_c ? param_c : "null");
    return local_783 + (int)local_783_d;
}

typedef struct {
    int field_784;
    long field_784_b;
    double field_784_c;
    char name_784[64];
} StructType784;

int function_784(StructType784 *s, int param_a, double param_b, const char *param_c) {
    int local_784 = param_a * 784;
    double local_784_d = param_b * 784;
    char buf_784[128];
    snprintf(buf_784, sizeof(buf_784), "function_%d: %d, %f, %s", 784, local_784, local_784_d, param_c ? param_c : "null");
    return local_784 + (int)local_784_d;
}

typedef struct {
    int field_785;
    long field_785_b;
    double field_785_c;
    char name_785[64];
} StructType785;

int function_785(StructType785 *s, int param_a, double param_b, const char *param_c) {
    int local_785 = param_a * 785;
    double local_785_d = param_b * 785;
    char buf_785[128];
    snprintf(buf_785, sizeof(buf_785), "function_%d: %d, %f, %s", 785, local_785, local_785_d, param_c ? param_c : "null");
    return local_785 + (int)local_785_d;
}

typedef struct {
    int field_786;
    long field_786_b;
    double field_786_c;
    char name_786[64];
} StructType786;

int function_786(StructType786 *s, int param_a, double param_b, const char *param_c) {
    int local_786 = param_a * 786;
    double local_786_d = param_b * 786;
    char buf_786[128];
    snprintf(buf_786, sizeof(buf_786), "function_%d: %d, %f, %s", 786, local_786, local_786_d, param_c ? param_c : "null");
    return local_786 + (int)local_786_d;
}

typedef struct {
    int field_787;
    long field_787_b;
    double field_787_c;
    char name_787[64];
} StructType787;

int function_787(StructType787 *s, int param_a, double param_b, const char *param_c) {
    int local_787 = param_a * 787;
    double local_787_d = param_b * 787;
    char buf_787[128];
    snprintf(buf_787, sizeof(buf_787), "function_%d: %d, %f, %s", 787, local_787, local_787_d, param_c ? param_c : "null");
    return local_787 + (int)local_787_d;
}

typedef struct {
    int field_788;
    long field_788_b;
    double field_788_c;
    char name_788[64];
} StructType788;

int function_788(StructType788 *s, int param_a, double param_b, const char *param_c) {
    int local_788 = param_a * 788;
    double local_788_d = param_b * 788;
    char buf_788[128];
    snprintf(buf_788, sizeof(buf_788), "function_%d: %d, %f, %s", 788, local_788, local_788_d, param_c ? param_c : "null");
    return local_788 + (int)local_788_d;
}

typedef struct {
    int field_789;
    long field_789_b;
    double field_789_c;
    char name_789[64];
} StructType789;

int function_789(StructType789 *s, int param_a, double param_b, const char *param_c) {
    int local_789 = param_a * 789;
    double local_789_d = param_b * 789;
    char buf_789[128];
    snprintf(buf_789, sizeof(buf_789), "function_%d: %d, %f, %s", 789, local_789, local_789_d, param_c ? param_c : "null");
    return local_789 + (int)local_789_d;
}

typedef struct {
    int field_790;
    long field_790_b;
    double field_790_c;
    char name_790[64];
} StructType790;

int function_790(StructType790 *s, int param_a, double param_b, const char *param_c) {
    int local_790 = param_a * 790;
    double local_790_d = param_b * 790;
    char buf_790[128];
    snprintf(buf_790, sizeof(buf_790), "function_%d: %d, %f, %s", 790, local_790, local_790_d, param_c ? param_c : "null");
    return local_790 + (int)local_790_d;
}

typedef struct {
    int field_791;
    long field_791_b;
    double field_791_c;
    char name_791[64];
} StructType791;

int function_791(StructType791 *s, int param_a, double param_b, const char *param_c) {
    int local_791 = param_a * 791;
    double local_791_d = param_b * 791;
    char buf_791[128];
    snprintf(buf_791, sizeof(buf_791), "function_%d: %d, %f, %s", 791, local_791, local_791_d, param_c ? param_c : "null");
    return local_791 + (int)local_791_d;
}

typedef struct {
    int field_792;
    long field_792_b;
    double field_792_c;
    char name_792[64];
} StructType792;

int function_792(StructType792 *s, int param_a, double param_b, const char *param_c) {
    int local_792 = param_a * 792;
    double local_792_d = param_b * 792;
    char buf_792[128];
    snprintf(buf_792, sizeof(buf_792), "function_%d: %d, %f, %s", 792, local_792, local_792_d, param_c ? param_c : "null");
    return local_792 + (int)local_792_d;
}

typedef struct {
    int field_793;
    long field_793_b;
    double field_793_c;
    char name_793[64];
} StructType793;

int function_793(StructType793 *s, int param_a, double param_b, const char *param_c) {
    int local_793 = param_a * 793;
    double local_793_d = param_b * 793;
    char buf_793[128];
    snprintf(buf_793, sizeof(buf_793), "function_%d: %d, %f, %s", 793, local_793, local_793_d, param_c ? param_c : "null");
    return local_793 + (int)local_793_d;
}

typedef struct {
    int field_794;
    long field_794_b;
    double field_794_c;
    char name_794[64];
} StructType794;

int function_794(StructType794 *s, int param_a, double param_b, const char *param_c) {
    int local_794 = param_a * 794;
    double local_794_d = param_b * 794;
    char buf_794[128];
    snprintf(buf_794, sizeof(buf_794), "function_%d: %d, %f, %s", 794, local_794, local_794_d, param_c ? param_c : "null");
    return local_794 + (int)local_794_d;
}

typedef struct {
    int field_795;
    long field_795_b;
    double field_795_c;
    char name_795[64];
} StructType795;

int function_795(StructType795 *s, int param_a, double param_b, const char *param_c) {
    int local_795 = param_a * 795;
    double local_795_d = param_b * 795;
    char buf_795[128];
    snprintf(buf_795, sizeof(buf_795), "function_%d: %d, %f, %s", 795, local_795, local_795_d, param_c ? param_c : "null");
    return local_795 + (int)local_795_d;
}

typedef struct {
    int field_796;
    long field_796_b;
    double field_796_c;
    char name_796[64];
} StructType796;

int function_796(StructType796 *s, int param_a, double param_b, const char *param_c) {
    int local_796 = param_a * 796;
    double local_796_d = param_b * 796;
    char buf_796[128];
    snprintf(buf_796, sizeof(buf_796), "function_%d: %d, %f, %s", 796, local_796, local_796_d, param_c ? param_c : "null");
    return local_796 + (int)local_796_d;
}

typedef struct {
    int field_797;
    long field_797_b;
    double field_797_c;
    char name_797[64];
} StructType797;

int function_797(StructType797 *s, int param_a, double param_b, const char *param_c) {
    int local_797 = param_a * 797;
    double local_797_d = param_b * 797;
    char buf_797[128];
    snprintf(buf_797, sizeof(buf_797), "function_%d: %d, %f, %s", 797, local_797, local_797_d, param_c ? param_c : "null");
    return local_797 + (int)local_797_d;
}

typedef struct {
    int field_798;
    long field_798_b;
    double field_798_c;
    char name_798[64];
} StructType798;

int function_798(StructType798 *s, int param_a, double param_b, const char *param_c) {
    int local_798 = param_a * 798;
    double local_798_d = param_b * 798;
    char buf_798[128];
    snprintf(buf_798, sizeof(buf_798), "function_%d: %d, %f, %s", 798, local_798, local_798_d, param_c ? param_c : "null");
    return local_798 + (int)local_798_d;
}

typedef struct {
    int field_799;
    long field_799_b;
    double field_799_c;
    char name_799[64];
} StructType799;

int function_799(StructType799 *s, int param_a, double param_b, const char *param_c) {
    int local_799 = param_a * 799;
    double local_799_d = param_b * 799;
    char buf_799[128];
    snprintf(buf_799, sizeof(buf_799), "function_%d: %d, %f, %s", 799, local_799, local_799_d, param_c ? param_c : "null");
    return local_799 + (int)local_799_d;
}

typedef struct {
    int field_800;
    long field_800_b;
    double field_800_c;
    char name_800[64];
} StructType800;

int function_800(StructType800 *s, int param_a, double param_b, const char *param_c) {
    int local_800 = param_a * 800;
    double local_800_d = param_b * 800;
    char buf_800[128];
    snprintf(buf_800, sizeof(buf_800), "function_%d: %d, %f, %s", 800, local_800, local_800_d, param_c ? param_c : "null");
    return local_800 + (int)local_800_d;
}

typedef struct {
    int field_801;
    long field_801_b;
    double field_801_c;
    char name_801[64];
} StructType801;

int function_801(StructType801 *s, int param_a, double param_b, const char *param_c) {
    int local_801 = param_a * 801;
    double local_801_d = param_b * 801;
    char buf_801[128];
    snprintf(buf_801, sizeof(buf_801), "function_%d: %d, %f, %s", 801, local_801, local_801_d, param_c ? param_c : "null");
    return local_801 + (int)local_801_d;
}

typedef struct {
    int field_802;
    long field_802_b;
    double field_802_c;
    char name_802[64];
} StructType802;

int function_802(StructType802 *s, int param_a, double param_b, const char *param_c) {
    int local_802 = param_a * 802;
    double local_802_d = param_b * 802;
    char buf_802[128];
    snprintf(buf_802, sizeof(buf_802), "function_%d: %d, %f, %s", 802, local_802, local_802_d, param_c ? param_c : "null");
    return local_802 + (int)local_802_d;
}

typedef struct {
    int field_803;
    long field_803_b;
    double field_803_c;
    char name_803[64];
} StructType803;

int function_803(StructType803 *s, int param_a, double param_b, const char *param_c) {
    int local_803 = param_a * 803;
    double local_803_d = param_b * 803;
    char buf_803[128];
    snprintf(buf_803, sizeof(buf_803), "function_%d: %d, %f, %s", 803, local_803, local_803_d, param_c ? param_c : "null");
    return local_803 + (int)local_803_d;
}

typedef struct {
    int field_804;
    long field_804_b;
    double field_804_c;
    char name_804[64];
} StructType804;

int function_804(StructType804 *s, int param_a, double param_b, const char *param_c) {
    int local_804 = param_a * 804;
    double local_804_d = param_b * 804;
    char buf_804[128];
    snprintf(buf_804, sizeof(buf_804), "function_%d: %d, %f, %s", 804, local_804, local_804_d, param_c ? param_c : "null");
    return local_804 + (int)local_804_d;
}

typedef struct {
    int field_805;
    long field_805_b;
    double field_805_c;
    char name_805[64];
} StructType805;

int function_805(StructType805 *s, int param_a, double param_b, const char *param_c) {
    int local_805 = param_a * 805;
    double local_805_d = param_b * 805;
    char buf_805[128];
    snprintf(buf_805, sizeof(buf_805), "function_%d: %d, %f, %s", 805, local_805, local_805_d, param_c ? param_c : "null");
    return local_805 + (int)local_805_d;
}

typedef struct {
    int field_806;
    long field_806_b;
    double field_806_c;
    char name_806[64];
} StructType806;

int function_806(StructType806 *s, int param_a, double param_b, const char *param_c) {
    int local_806 = param_a * 806;
    double local_806_d = param_b * 806;
    char buf_806[128];
    snprintf(buf_806, sizeof(buf_806), "function_%d: %d, %f, %s", 806, local_806, local_806_d, param_c ? param_c : "null");
    return local_806 + (int)local_806_d;
}

typedef struct {
    int field_807;
    long field_807_b;
    double field_807_c;
    char name_807[64];
} StructType807;

int function_807(StructType807 *s, int param_a, double param_b, const char *param_c) {
    int local_807 = param_a * 807;
    double local_807_d = param_b * 807;
    char buf_807[128];
    snprintf(buf_807, sizeof(buf_807), "function_%d: %d, %f, %s", 807, local_807, local_807_d, param_c ? param_c : "null");
    return local_807 + (int)local_807_d;
}

typedef struct {
    int field_808;
    long field_808_b;
    double field_808_c;
    char name_808[64];
} StructType808;

int function_808(StructType808 *s, int param_a, double param_b, const char *param_c) {
    int local_808 = param_a * 808;
    double local_808_d = param_b * 808;
    char buf_808[128];
    snprintf(buf_808, sizeof(buf_808), "function_%d: %d, %f, %s", 808, local_808, local_808_d, param_c ? param_c : "null");
    return local_808 + (int)local_808_d;
}

typedef struct {
    int field_809;
    long field_809_b;
    double field_809_c;
    char name_809[64];
} StructType809;

int function_809(StructType809 *s, int param_a, double param_b, const char *param_c) {
    int local_809 = param_a * 809;
    double local_809_d = param_b * 809;
    char buf_809[128];
    snprintf(buf_809, sizeof(buf_809), "function_%d: %d, %f, %s", 809, local_809, local_809_d, param_c ? param_c : "null");
    return local_809 + (int)local_809_d;
}

typedef struct {
    int field_810;
    long field_810_b;
    double field_810_c;
    char name_810[64];
} StructType810;

int function_810(StructType810 *s, int param_a, double param_b, const char *param_c) {
    int local_810 = param_a * 810;
    double local_810_d = param_b * 810;
    char buf_810[128];
    snprintf(buf_810, sizeof(buf_810), "function_%d: %d, %f, %s", 810, local_810, local_810_d, param_c ? param_c : "null");
    return local_810 + (int)local_810_d;
}

typedef struct {
    int field_811;
    long field_811_b;
    double field_811_c;
    char name_811[64];
} StructType811;

int function_811(StructType811 *s, int param_a, double param_b, const char *param_c) {
    int local_811 = param_a * 811;
    double local_811_d = param_b * 811;
    char buf_811[128];
    snprintf(buf_811, sizeof(buf_811), "function_%d: %d, %f, %s", 811, local_811, local_811_d, param_c ? param_c : "null");
    return local_811 + (int)local_811_d;
}

typedef struct {
    int field_812;
    long field_812_b;
    double field_812_c;
    char name_812[64];
} StructType812;

int function_812(StructType812 *s, int param_a, double param_b, const char *param_c) {
    int local_812 = param_a * 812;
    double local_812_d = param_b * 812;
    char buf_812[128];
    snprintf(buf_812, sizeof(buf_812), "function_%d: %d, %f, %s", 812, local_812, local_812_d, param_c ? param_c : "null");
    return local_812 + (int)local_812_d;
}

typedef struct {
    int field_813;
    long field_813_b;
    double field_813_c;
    char name_813[64];
} StructType813;

int function_813(StructType813 *s, int param_a, double param_b, const char *param_c) {
    int local_813 = param_a * 813;
    double local_813_d = param_b * 813;
    char buf_813[128];
    snprintf(buf_813, sizeof(buf_813), "function_%d: %d, %f, %s", 813, local_813, local_813_d, param_c ? param_c : "null");
    return local_813 + (int)local_813_d;
}

typedef struct {
    int field_814;
    long field_814_b;
    double field_814_c;
    char name_814[64];
} StructType814;

int function_814(StructType814 *s, int param_a, double param_b, const char *param_c) {
    int local_814 = param_a * 814;
    double local_814_d = param_b * 814;
    char buf_814[128];
    snprintf(buf_814, sizeof(buf_814), "function_%d: %d, %f, %s", 814, local_814, local_814_d, param_c ? param_c : "null");
    return local_814 + (int)local_814_d;
}

typedef struct {
    int field_815;
    long field_815_b;
    double field_815_c;
    char name_815[64];
} StructType815;

int function_815(StructType815 *s, int param_a, double param_b, const char *param_c) {
    int local_815 = param_a * 815;
    double local_815_d = param_b * 815;
    char buf_815[128];
    snprintf(buf_815, sizeof(buf_815), "function_%d: %d, %f, %s", 815, local_815, local_815_d, param_c ? param_c : "null");
    return local_815 + (int)local_815_d;
}

typedef struct {
    int field_816;
    long field_816_b;
    double field_816_c;
    char name_816[64];
} StructType816;

int function_816(StructType816 *s, int param_a, double param_b, const char *param_c) {
    int local_816 = param_a * 816;
    double local_816_d = param_b * 816;
    char buf_816[128];
    snprintf(buf_816, sizeof(buf_816), "function_%d: %d, %f, %s", 816, local_816, local_816_d, param_c ? param_c : "null");
    return local_816 + (int)local_816_d;
}

typedef struct {
    int field_817;
    long field_817_b;
    double field_817_c;
    char name_817[64];
} StructType817;

int function_817(StructType817 *s, int param_a, double param_b, const char *param_c) {
    int local_817 = param_a * 817;
    double local_817_d = param_b * 817;
    char buf_817[128];
    snprintf(buf_817, sizeof(buf_817), "function_%d: %d, %f, %s", 817, local_817, local_817_d, param_c ? param_c : "null");
    return local_817 + (int)local_817_d;
}

typedef struct {
    int field_818;
    long field_818_b;
    double field_818_c;
    char name_818[64];
} StructType818;

int function_818(StructType818 *s, int param_a, double param_b, const char *param_c) {
    int local_818 = param_a * 818;
    double local_818_d = param_b * 818;
    char buf_818[128];
    snprintf(buf_818, sizeof(buf_818), "function_%d: %d, %f, %s", 818, local_818, local_818_d, param_c ? param_c : "null");
    return local_818 + (int)local_818_d;
}

typedef struct {
    int field_819;
    long field_819_b;
    double field_819_c;
    char name_819[64];
} StructType819;

int function_819(StructType819 *s, int param_a, double param_b, const char *param_c) {
    int local_819 = param_a * 819;
    double local_819_d = param_b * 819;
    char buf_819[128];
    snprintf(buf_819, sizeof(buf_819), "function_%d: %d, %f, %s", 819, local_819, local_819_d, param_c ? param_c : "null");
    return local_819 + (int)local_819_d;
}

typedef struct {
    int field_820;
    long field_820_b;
    double field_820_c;
    char name_820[64];
} StructType820;

int function_820(StructType820 *s, int param_a, double param_b, const char *param_c) {
    int local_820 = param_a * 820;
    double local_820_d = param_b * 820;
    char buf_820[128];
    snprintf(buf_820, sizeof(buf_820), "function_%d: %d, %f, %s", 820, local_820, local_820_d, param_c ? param_c : "null");
    return local_820 + (int)local_820_d;
}

typedef struct {
    int field_821;
    long field_821_b;
    double field_821_c;
    char name_821[64];
} StructType821;

int function_821(StructType821 *s, int param_a, double param_b, const char *param_c) {
    int local_821 = param_a * 821;
    double local_821_d = param_b * 821;
    char buf_821[128];
    snprintf(buf_821, sizeof(buf_821), "function_%d: %d, %f, %s", 821, local_821, local_821_d, param_c ? param_c : "null");
    return local_821 + (int)local_821_d;
}

typedef struct {
    int field_822;
    long field_822_b;
    double field_822_c;
    char name_822[64];
} StructType822;

int function_822(StructType822 *s, int param_a, double param_b, const char *param_c) {
    int local_822 = param_a * 822;
    double local_822_d = param_b * 822;
    char buf_822[128];
    snprintf(buf_822, sizeof(buf_822), "function_%d: %d, %f, %s", 822, local_822, local_822_d, param_c ? param_c : "null");
    return local_822 + (int)local_822_d;
}

typedef struct {
    int field_823;
    long field_823_b;
    double field_823_c;
    char name_823[64];
} StructType823;

int function_823(StructType823 *s, int param_a, double param_b, const char *param_c) {
    int local_823 = param_a * 823;
    double local_823_d = param_b * 823;
    char buf_823[128];
    snprintf(buf_823, sizeof(buf_823), "function_%d: %d, %f, %s", 823, local_823, local_823_d, param_c ? param_c : "null");
    return local_823 + (int)local_823_d;
}

typedef struct {
    int field_824;
    long field_824_b;
    double field_824_c;
    char name_824[64];
} StructType824;

int function_824(StructType824 *s, int param_a, double param_b, const char *param_c) {
    int local_824 = param_a * 824;
    double local_824_d = param_b * 824;
    char buf_824[128];
    snprintf(buf_824, sizeof(buf_824), "function_%d: %d, %f, %s", 824, local_824, local_824_d, param_c ? param_c : "null");
    return local_824 + (int)local_824_d;
}

typedef struct {
    int field_825;
    long field_825_b;
    double field_825_c;
    char name_825[64];
} StructType825;

int function_825(StructType825 *s, int param_a, double param_b, const char *param_c) {
    int local_825 = param_a * 825;
    double local_825_d = param_b * 825;
    char buf_825[128];
    snprintf(buf_825, sizeof(buf_825), "function_%d: %d, %f, %s", 825, local_825, local_825_d, param_c ? param_c : "null");
    return local_825 + (int)local_825_d;
}

typedef struct {
    int field_826;
    long field_826_b;
    double field_826_c;
    char name_826[64];
} StructType826;

int function_826(StructType826 *s, int param_a, double param_b, const char *param_c) {
    int local_826 = param_a * 826;
    double local_826_d = param_b * 826;
    char buf_826[128];
    snprintf(buf_826, sizeof(buf_826), "function_%d: %d, %f, %s", 826, local_826, local_826_d, param_c ? param_c : "null");
    return local_826 + (int)local_826_d;
}

typedef struct {
    int field_827;
    long field_827_b;
    double field_827_c;
    char name_827[64];
} StructType827;

int function_827(StructType827 *s, int param_a, double param_b, const char *param_c) {
    int local_827 = param_a * 827;
    double local_827_d = param_b * 827;
    char buf_827[128];
    snprintf(buf_827, sizeof(buf_827), "function_%d: %d, %f, %s", 827, local_827, local_827_d, param_c ? param_c : "null");
    return local_827 + (int)local_827_d;
}

typedef struct {
    int field_828;
    long field_828_b;
    double field_828_c;
    char name_828[64];
} StructType828;

int function_828(StructType828 *s, int param_a, double param_b, const char *param_c) {
    int local_828 = param_a * 828;
    double local_828_d = param_b * 828;
    char buf_828[128];
    snprintf(buf_828, sizeof(buf_828), "function_%d: %d, %f, %s", 828, local_828, local_828_d, param_c ? param_c : "null");
    return local_828 + (int)local_828_d;
}

typedef struct {
    int field_829;
    long field_829_b;
    double field_829_c;
    char name_829[64];
} StructType829;

int function_829(StructType829 *s, int param_a, double param_b, const char *param_c) {
    int local_829 = param_a * 829;
    double local_829_d = param_b * 829;
    char buf_829[128];
    snprintf(buf_829, sizeof(buf_829), "function_%d: %d, %f, %s", 829, local_829, local_829_d, param_c ? param_c : "null");
    return local_829 + (int)local_829_d;
}

typedef struct {
    int field_830;
    long field_830_b;
    double field_830_c;
    char name_830[64];
} StructType830;

int function_830(StructType830 *s, int param_a, double param_b, const char *param_c) {
    int local_830 = param_a * 830;
    double local_830_d = param_b * 830;
    char buf_830[128];
    snprintf(buf_830, sizeof(buf_830), "function_%d: %d, %f, %s", 830, local_830, local_830_d, param_c ? param_c : "null");
    return local_830 + (int)local_830_d;
}

typedef struct {
    int field_831;
    long field_831_b;
    double field_831_c;
    char name_831[64];
} StructType831;

int function_831(StructType831 *s, int param_a, double param_b, const char *param_c) {
    int local_831 = param_a * 831;
    double local_831_d = param_b * 831;
    char buf_831[128];
    snprintf(buf_831, sizeof(buf_831), "function_%d: %d, %f, %s", 831, local_831, local_831_d, param_c ? param_c : "null");
    return local_831 + (int)local_831_d;
}

typedef struct {
    int field_832;
    long field_832_b;
    double field_832_c;
    char name_832[64];
} StructType832;

int function_832(StructType832 *s, int param_a, double param_b, const char *param_c) {
    int local_832 = param_a * 832;
    double local_832_d = param_b * 832;
    char buf_832[128];
    snprintf(buf_832, sizeof(buf_832), "function_%d: %d, %f, %s", 832, local_832, local_832_d, param_c ? param_c : "null");
    return local_832 + (int)local_832_d;
}

typedef struct {
    int field_833;
    long field_833_b;
    double field_833_c;
    char name_833[64];
} StructType833;

int function_833(StructType833 *s, int param_a, double param_b, const char *param_c) {
    int local_833 = param_a * 833;
    double local_833_d = param_b * 833;
    char buf_833[128];
    snprintf(buf_833, sizeof(buf_833), "function_%d: %d, %f, %s", 833, local_833, local_833_d, param_c ? param_c : "null");
    return local_833 + (int)local_833_d;
}

typedef struct {
    int field_834;
    long field_834_b;
    double field_834_c;
    char name_834[64];
} StructType834;

int function_834(StructType834 *s, int param_a, double param_b, const char *param_c) {
    int local_834 = param_a * 834;
    double local_834_d = param_b * 834;
    char buf_834[128];
    snprintf(buf_834, sizeof(buf_834), "function_%d: %d, %f, %s", 834, local_834, local_834_d, param_c ? param_c : "null");
    return local_834 + (int)local_834_d;
}

typedef struct {
    int field_835;
    long field_835_b;
    double field_835_c;
    char name_835[64];
} StructType835;

int function_835(StructType835 *s, int param_a, double param_b, const char *param_c) {
    int local_835 = param_a * 835;
    double local_835_d = param_b * 835;
    char buf_835[128];
    snprintf(buf_835, sizeof(buf_835), "function_%d: %d, %f, %s", 835, local_835, local_835_d, param_c ? param_c : "null");
    return local_835 + (int)local_835_d;
}

typedef struct {
    int field_836;
    long field_836_b;
    double field_836_c;
    char name_836[64];
} StructType836;

int function_836(StructType836 *s, int param_a, double param_b, const char *param_c) {
    int local_836 = param_a * 836;
    double local_836_d = param_b * 836;
    char buf_836[128];
    snprintf(buf_836, sizeof(buf_836), "function_%d: %d, %f, %s", 836, local_836, local_836_d, param_c ? param_c : "null");
    return local_836 + (int)local_836_d;
}

typedef struct {
    int field_837;
    long field_837_b;
    double field_837_c;
    char name_837[64];
} StructType837;

int function_837(StructType837 *s, int param_a, double param_b, const char *param_c) {
    int local_837 = param_a * 837;
    double local_837_d = param_b * 837;
    char buf_837[128];
    snprintf(buf_837, sizeof(buf_837), "function_%d: %d, %f, %s", 837, local_837, local_837_d, param_c ? param_c : "null");
    return local_837 + (int)local_837_d;
}

typedef struct {
    int field_838;
    long field_838_b;
    double field_838_c;
    char name_838[64];
} StructType838;

int function_838(StructType838 *s, int param_a, double param_b, const char *param_c) {
    int local_838 = param_a * 838;
    double local_838_d = param_b * 838;
    char buf_838[128];
    snprintf(buf_838, sizeof(buf_838), "function_%d: %d, %f, %s", 838, local_838, local_838_d, param_c ? param_c : "null");
    return local_838 + (int)local_838_d;
}

typedef struct {
    int field_839;
    long field_839_b;
    double field_839_c;
    char name_839[64];
} StructType839;

int function_839(StructType839 *s, int param_a, double param_b, const char *param_c) {
    int local_839 = param_a * 839;
    double local_839_d = param_b * 839;
    char buf_839[128];
    snprintf(buf_839, sizeof(buf_839), "function_%d: %d, %f, %s", 839, local_839, local_839_d, param_c ? param_c : "null");
    return local_839 + (int)local_839_d;
}

typedef struct {
    int field_840;
    long field_840_b;
    double field_840_c;
    char name_840[64];
} StructType840;

int function_840(StructType840 *s, int param_a, double param_b, const char *param_c) {
    int local_840 = param_a * 840;
    double local_840_d = param_b * 840;
    char buf_840[128];
    snprintf(buf_840, sizeof(buf_840), "function_%d: %d, %f, %s", 840, local_840, local_840_d, param_c ? param_c : "null");
    return local_840 + (int)local_840_d;
}

typedef struct {
    int field_841;
    long field_841_b;
    double field_841_c;
    char name_841[64];
} StructType841;

int function_841(StructType841 *s, int param_a, double param_b, const char *param_c) {
    int local_841 = param_a * 841;
    double local_841_d = param_b * 841;
    char buf_841[128];
    snprintf(buf_841, sizeof(buf_841), "function_%d: %d, %f, %s", 841, local_841, local_841_d, param_c ? param_c : "null");
    return local_841 + (int)local_841_d;
}

typedef struct {
    int field_842;
    long field_842_b;
    double field_842_c;
    char name_842[64];
} StructType842;

int function_842(StructType842 *s, int param_a, double param_b, const char *param_c) {
    int local_842 = param_a * 842;
    double local_842_d = param_b * 842;
    char buf_842[128];
    snprintf(buf_842, sizeof(buf_842), "function_%d: %d, %f, %s", 842, local_842, local_842_d, param_c ? param_c : "null");
    return local_842 + (int)local_842_d;
}

typedef struct {
    int field_843;
    long field_843_b;
    double field_843_c;
    char name_843[64];
} StructType843;

int function_843(StructType843 *s, int param_a, double param_b, const char *param_c) {
    int local_843 = param_a * 843;
    double local_843_d = param_b * 843;
    char buf_843[128];
    snprintf(buf_843, sizeof(buf_843), "function_%d: %d, %f, %s", 843, local_843, local_843_d, param_c ? param_c : "null");
    return local_843 + (int)local_843_d;
}

typedef struct {
    int field_844;
    long field_844_b;
    double field_844_c;
    char name_844[64];
} StructType844;

int function_844(StructType844 *s, int param_a, double param_b, const char *param_c) {
    int local_844 = param_a * 844;
    double local_844_d = param_b * 844;
    char buf_844[128];
    snprintf(buf_844, sizeof(buf_844), "function_%d: %d, %f, %s", 844, local_844, local_844_d, param_c ? param_c : "null");
    return local_844 + (int)local_844_d;
}

typedef struct {
    int field_845;
    long field_845_b;
    double field_845_c;
    char name_845[64];
} StructType845;

int function_845(StructType845 *s, int param_a, double param_b, const char *param_c) {
    int local_845 = param_a * 845;
    double local_845_d = param_b * 845;
    char buf_845[128];
    snprintf(buf_845, sizeof(buf_845), "function_%d: %d, %f, %s", 845, local_845, local_845_d, param_c ? param_c : "null");
    return local_845 + (int)local_845_d;
}

typedef struct {
    int field_846;
    long field_846_b;
    double field_846_c;
    char name_846[64];
} StructType846;

int function_846(StructType846 *s, int param_a, double param_b, const char *param_c) {
    int local_846 = param_a * 846;
    double local_846_d = param_b * 846;
    char buf_846[128];
    snprintf(buf_846, sizeof(buf_846), "function_%d: %d, %f, %s", 846, local_846, local_846_d, param_c ? param_c : "null");
    return local_846 + (int)local_846_d;
}

typedef struct {
    int field_847;
    long field_847_b;
    double field_847_c;
    char name_847[64];
} StructType847;

int function_847(StructType847 *s, int param_a, double param_b, const char *param_c) {
    int local_847 = param_a * 847;
    double local_847_d = param_b * 847;
    char buf_847[128];
    snprintf(buf_847, sizeof(buf_847), "function_%d: %d, %f, %s", 847, local_847, local_847_d, param_c ? param_c : "null");
    return local_847 + (int)local_847_d;
}

typedef struct {
    int field_848;
    long field_848_b;
    double field_848_c;
    char name_848[64];
} StructType848;

int function_848(StructType848 *s, int param_a, double param_b, const char *param_c) {
    int local_848 = param_a * 848;
    double local_848_d = param_b * 848;
    char buf_848[128];
    snprintf(buf_848, sizeof(buf_848), "function_%d: %d, %f, %s", 848, local_848, local_848_d, param_c ? param_c : "null");
    return local_848 + (int)local_848_d;
}

typedef struct {
    int field_849;
    long field_849_b;
    double field_849_c;
    char name_849[64];
} StructType849;

int function_849(StructType849 *s, int param_a, double param_b, const char *param_c) {
    int local_849 = param_a * 849;
    double local_849_d = param_b * 849;
    char buf_849[128];
    snprintf(buf_849, sizeof(buf_849), "function_%d: %d, %f, %s", 849, local_849, local_849_d, param_c ? param_c : "null");
    return local_849 + (int)local_849_d;
}

typedef struct {
    int field_850;
    long field_850_b;
    double field_850_c;
    char name_850[64];
} StructType850;

int function_850(StructType850 *s, int param_a, double param_b, const char *param_c) {
    int local_850 = param_a * 850;
    double local_850_d = param_b * 850;
    char buf_850[128];
    snprintf(buf_850, sizeof(buf_850), "function_%d: %d, %f, %s", 850, local_850, local_850_d, param_c ? param_c : "null");
    return local_850 + (int)local_850_d;
}

typedef struct {
    int field_851;
    long field_851_b;
    double field_851_c;
    char name_851[64];
} StructType851;

int function_851(StructType851 *s, int param_a, double param_b, const char *param_c) {
    int local_851 = param_a * 851;
    double local_851_d = param_b * 851;
    char buf_851[128];
    snprintf(buf_851, sizeof(buf_851), "function_%d: %d, %f, %s", 851, local_851, local_851_d, param_c ? param_c : "null");
    return local_851 + (int)local_851_d;
}

typedef struct {
    int field_852;
    long field_852_b;
    double field_852_c;
    char name_852[64];
} StructType852;

int function_852(StructType852 *s, int param_a, double param_b, const char *param_c) {
    int local_852 = param_a * 852;
    double local_852_d = param_b * 852;
    char buf_852[128];
    snprintf(buf_852, sizeof(buf_852), "function_%d: %d, %f, %s", 852, local_852, local_852_d, param_c ? param_c : "null");
    return local_852 + (int)local_852_d;
}

typedef struct {
    int field_853;
    long field_853_b;
    double field_853_c;
    char name_853[64];
} StructType853;

int function_853(StructType853 *s, int param_a, double param_b, const char *param_c) {
    int local_853 = param_a * 853;
    double local_853_d = param_b * 853;
    char buf_853[128];
    snprintf(buf_853, sizeof(buf_853), "function_%d: %d, %f, %s", 853, local_853, local_853_d, param_c ? param_c : "null");
    return local_853 + (int)local_853_d;
}

typedef struct {
    int field_854;
    long field_854_b;
    double field_854_c;
    char name_854[64];
} StructType854;

int function_854(StructType854 *s, int param_a, double param_b, const char *param_c) {
    int local_854 = param_a * 854;
    double local_854_d = param_b * 854;
    char buf_854[128];
    snprintf(buf_854, sizeof(buf_854), "function_%d: %d, %f, %s", 854, local_854, local_854_d, param_c ? param_c : "null");
    return local_854 + (int)local_854_d;
}

typedef struct {
    int field_855;
    long field_855_b;
    double field_855_c;
    char name_855[64];
} StructType855;

int function_855(StructType855 *s, int param_a, double param_b, const char *param_c) {
    int local_855 = param_a * 855;
    double local_855_d = param_b * 855;
    char buf_855[128];
    snprintf(buf_855, sizeof(buf_855), "function_%d: %d, %f, %s", 855, local_855, local_855_d, param_c ? param_c : "null");
    return local_855 + (int)local_855_d;
}

typedef struct {
    int field_856;
    long field_856_b;
    double field_856_c;
    char name_856[64];
} StructType856;

int function_856(StructType856 *s, int param_a, double param_b, const char *param_c) {
    int local_856 = param_a * 856;
    double local_856_d = param_b * 856;
    char buf_856[128];
    snprintf(buf_856, sizeof(buf_856), "function_%d: %d, %f, %s", 856, local_856, local_856_d, param_c ? param_c : "null");
    return local_856 + (int)local_856_d;
}

typedef struct {
    int field_857;
    long field_857_b;
    double field_857_c;
    char name_857[64];
} StructType857;

int function_857(StructType857 *s, int param_a, double param_b, const char *param_c) {
    int local_857 = param_a * 857;
    double local_857_d = param_b * 857;
    char buf_857[128];
    snprintf(buf_857, sizeof(buf_857), "function_%d: %d, %f, %s", 857, local_857, local_857_d, param_c ? param_c : "null");
    return local_857 + (int)local_857_d;
}

typedef struct {
    int field_858;
    long field_858_b;
    double field_858_c;
    char name_858[64];
} StructType858;

int function_858(StructType858 *s, int param_a, double param_b, const char *param_c) {
    int local_858 = param_a * 858;
    double local_858_d = param_b * 858;
    char buf_858[128];
    snprintf(buf_858, sizeof(buf_858), "function_%d: %d, %f, %s", 858, local_858, local_858_d, param_c ? param_c : "null");
    return local_858 + (int)local_858_d;
}

typedef struct {
    int field_859;
    long field_859_b;
    double field_859_c;
    char name_859[64];
} StructType859;

int function_859(StructType859 *s, int param_a, double param_b, const char *param_c) {
    int local_859 = param_a * 859;
    double local_859_d = param_b * 859;
    char buf_859[128];
    snprintf(buf_859, sizeof(buf_859), "function_%d: %d, %f, %s", 859, local_859, local_859_d, param_c ? param_c : "null");
    return local_859 + (int)local_859_d;
}

typedef struct {
    int field_860;
    long field_860_b;
    double field_860_c;
    char name_860[64];
} StructType860;

int function_860(StructType860 *s, int param_a, double param_b, const char *param_c) {
    int local_860 = param_a * 860;
    double local_860_d = param_b * 860;
    char buf_860[128];
    snprintf(buf_860, sizeof(buf_860), "function_%d: %d, %f, %s", 860, local_860, local_860_d, param_c ? param_c : "null");
    return local_860 + (int)local_860_d;
}

typedef struct {
    int field_861;
    long field_861_b;
    double field_861_c;
    char name_861[64];
} StructType861;

int function_861(StructType861 *s, int param_a, double param_b, const char *param_c) {
    int local_861 = param_a * 861;
    double local_861_d = param_b * 861;
    char buf_861[128];
    snprintf(buf_861, sizeof(buf_861), "function_%d: %d, %f, %s", 861, local_861, local_861_d, param_c ? param_c : "null");
    return local_861 + (int)local_861_d;
}

typedef struct {
    int field_862;
    long field_862_b;
    double field_862_c;
    char name_862[64];
} StructType862;

int function_862(StructType862 *s, int param_a, double param_b, const char *param_c) {
    int local_862 = param_a * 862;
    double local_862_d = param_b * 862;
    char buf_862[128];
    snprintf(buf_862, sizeof(buf_862), "function_%d: %d, %f, %s", 862, local_862, local_862_d, param_c ? param_c : "null");
    return local_862 + (int)local_862_d;
}

typedef struct {
    int field_863;
    long field_863_b;
    double field_863_c;
    char name_863[64];
} StructType863;

int function_863(StructType863 *s, int param_a, double param_b, const char *param_c) {
    int local_863 = param_a * 863;
    double local_863_d = param_b * 863;
    char buf_863[128];
    snprintf(buf_863, sizeof(buf_863), "function_%d: %d, %f, %s", 863, local_863, local_863_d, param_c ? param_c : "null");
    return local_863 + (int)local_863_d;
}

typedef struct {
    int field_864;
    long field_864_b;
    double field_864_c;
    char name_864[64];
} StructType864;

int function_864(StructType864 *s, int param_a, double param_b, const char *param_c) {
    int local_864 = param_a * 864;
    double local_864_d = param_b * 864;
    char buf_864[128];
    snprintf(buf_864, sizeof(buf_864), "function_%d: %d, %f, %s", 864, local_864, local_864_d, param_c ? param_c : "null");
    return local_864 + (int)local_864_d;
}

typedef struct {
    int field_865;
    long field_865_b;
    double field_865_c;
    char name_865[64];
} StructType865;

int function_865(StructType865 *s, int param_a, double param_b, const char *param_c) {
    int local_865 = param_a * 865;
    double local_865_d = param_b * 865;
    char buf_865[128];
    snprintf(buf_865, sizeof(buf_865), "function_%d: %d, %f, %s", 865, local_865, local_865_d, param_c ? param_c : "null");
    return local_865 + (int)local_865_d;
}

typedef struct {
    int field_866;
    long field_866_b;
    double field_866_c;
    char name_866[64];
} StructType866;

int function_866(StructType866 *s, int param_a, double param_b, const char *param_c) {
    int local_866 = param_a * 866;
    double local_866_d = param_b * 866;
    char buf_866[128];
    snprintf(buf_866, sizeof(buf_866), "function_%d: %d, %f, %s", 866, local_866, local_866_d, param_c ? param_c : "null");
    return local_866 + (int)local_866_d;
}

typedef struct {
    int field_867;
    long field_867_b;
    double field_867_c;
    char name_867[64];
} StructType867;

int function_867(StructType867 *s, int param_a, double param_b, const char *param_c) {
    int local_867 = param_a * 867;
    double local_867_d = param_b * 867;
    char buf_867[128];
    snprintf(buf_867, sizeof(buf_867), "function_%d: %d, %f, %s", 867, local_867, local_867_d, param_c ? param_c : "null");
    return local_867 + (int)local_867_d;
}

typedef struct {
    int field_868;
    long field_868_b;
    double field_868_c;
    char name_868[64];
} StructType868;

int function_868(StructType868 *s, int param_a, double param_b, const char *param_c) {
    int local_868 = param_a * 868;
    double local_868_d = param_b * 868;
    char buf_868[128];
    snprintf(buf_868, sizeof(buf_868), "function_%d: %d, %f, %s", 868, local_868, local_868_d, param_c ? param_c : "null");
    return local_868 + (int)local_868_d;
}

typedef struct {
    int field_869;
    long field_869_b;
    double field_869_c;
    char name_869[64];
} StructType869;

int function_869(StructType869 *s, int param_a, double param_b, const char *param_c) {
    int local_869 = param_a * 869;
    double local_869_d = param_b * 869;
    char buf_869[128];
    snprintf(buf_869, sizeof(buf_869), "function_%d: %d, %f, %s", 869, local_869, local_869_d, param_c ? param_c : "null");
    return local_869 + (int)local_869_d;
}

typedef struct {
    int field_870;
    long field_870_b;
    double field_870_c;
    char name_870[64];
} StructType870;

int function_870(StructType870 *s, int param_a, double param_b, const char *param_c) {
    int local_870 = param_a * 870;
    double local_870_d = param_b * 870;
    char buf_870[128];
    snprintf(buf_870, sizeof(buf_870), "function_%d: %d, %f, %s", 870, local_870, local_870_d, param_c ? param_c : "null");
    return local_870 + (int)local_870_d;
}

typedef struct {
    int field_871;
    long field_871_b;
    double field_871_c;
    char name_871[64];
} StructType871;

int function_871(StructType871 *s, int param_a, double param_b, const char *param_c) {
    int local_871 = param_a * 871;
    double local_871_d = param_b * 871;
    char buf_871[128];
    snprintf(buf_871, sizeof(buf_871), "function_%d: %d, %f, %s", 871, local_871, local_871_d, param_c ? param_c : "null");
    return local_871 + (int)local_871_d;
}

typedef struct {
    int field_872;
    long field_872_b;
    double field_872_c;
    char name_872[64];
} StructType872;

int function_872(StructType872 *s, int param_a, double param_b, const char *param_c) {
    int local_872 = param_a * 872;
    double local_872_d = param_b * 872;
    char buf_872[128];
    snprintf(buf_872, sizeof(buf_872), "function_%d: %d, %f, %s", 872, local_872, local_872_d, param_c ? param_c : "null");
    return local_872 + (int)local_872_d;
}

typedef struct {
    int field_873;
    long field_873_b;
    double field_873_c;
    char name_873[64];
} StructType873;

int function_873(StructType873 *s, int param_a, double param_b, const char *param_c) {
    int local_873 = param_a * 873;
    double local_873_d = param_b * 873;
    char buf_873[128];
    snprintf(buf_873, sizeof(buf_873), "function_%d: %d, %f, %s", 873, local_873, local_873_d, param_c ? param_c : "null");
    return local_873 + (int)local_873_d;
}

typedef struct {
    int field_874;
    long field_874_b;
    double field_874_c;
    char name_874[64];
} StructType874;

int function_874(StructType874 *s, int param_a, double param_b, const char *param_c) {
    int local_874 = param_a * 874;
    double local_874_d = param_b * 874;
    char buf_874[128];
    snprintf(buf_874, sizeof(buf_874), "function_%d: %d, %f, %s", 874, local_874, local_874_d, param_c ? param_c : "null");
    return local_874 + (int)local_874_d;
}

typedef struct {
    int field_875;
    long field_875_b;
    double field_875_c;
    char name_875[64];
} StructType875;

int function_875(StructType875 *s, int param_a, double param_b, const char *param_c) {
    int local_875 = param_a * 875;
    double local_875_d = param_b * 875;
    char buf_875[128];
    snprintf(buf_875, sizeof(buf_875), "function_%d: %d, %f, %s", 875, local_875, local_875_d, param_c ? param_c : "null");
    return local_875 + (int)local_875_d;
}

typedef struct {
    int field_876;
    long field_876_b;
    double field_876_c;
    char name_876[64];
} StructType876;

int function_876(StructType876 *s, int param_a, double param_b, const char *param_c) {
    int local_876 = param_a * 876;
    double local_876_d = param_b * 876;
    char buf_876[128];
    snprintf(buf_876, sizeof(buf_876), "function_%d: %d, %f, %s", 876, local_876, local_876_d, param_c ? param_c : "null");
    return local_876 + (int)local_876_d;
}

typedef struct {
    int field_877;
    long field_877_b;
    double field_877_c;
    char name_877[64];
} StructType877;

int function_877(StructType877 *s, int param_a, double param_b, const char *param_c) {
    int local_877 = param_a * 877;
    double local_877_d = param_b * 877;
    char buf_877[128];
    snprintf(buf_877, sizeof(buf_877), "function_%d: %d, %f, %s", 877, local_877, local_877_d, param_c ? param_c : "null");
    return local_877 + (int)local_877_d;
}

typedef struct {
    int field_878;
    long field_878_b;
    double field_878_c;
    char name_878[64];
} StructType878;

int function_878(StructType878 *s, int param_a, double param_b, const char *param_c) {
    int local_878 = param_a * 878;
    double local_878_d = param_b * 878;
    char buf_878[128];
    snprintf(buf_878, sizeof(buf_878), "function_%d: %d, %f, %s", 878, local_878, local_878_d, param_c ? param_c : "null");
    return local_878 + (int)local_878_d;
}

typedef struct {
    int field_879;
    long field_879_b;
    double field_879_c;
    char name_879[64];
} StructType879;

int function_879(StructType879 *s, int param_a, double param_b, const char *param_c) {
    int local_879 = param_a * 879;
    double local_879_d = param_b * 879;
    char buf_879[128];
    snprintf(buf_879, sizeof(buf_879), "function_%d: %d, %f, %s", 879, local_879, local_879_d, param_c ? param_c : "null");
    return local_879 + (int)local_879_d;
}

typedef struct {
    int field_880;
    long field_880_b;
    double field_880_c;
    char name_880[64];
} StructType880;

int function_880(StructType880 *s, int param_a, double param_b, const char *param_c) {
    int local_880 = param_a * 880;
    double local_880_d = param_b * 880;
    char buf_880[128];
    snprintf(buf_880, sizeof(buf_880), "function_%d: %d, %f, %s", 880, local_880, local_880_d, param_c ? param_c : "null");
    return local_880 + (int)local_880_d;
}

typedef struct {
    int field_881;
    long field_881_b;
    double field_881_c;
    char name_881[64];
} StructType881;

int function_881(StructType881 *s, int param_a, double param_b, const char *param_c) {
    int local_881 = param_a * 881;
    double local_881_d = param_b * 881;
    char buf_881[128];
    snprintf(buf_881, sizeof(buf_881), "function_%d: %d, %f, %s", 881, local_881, local_881_d, param_c ? param_c : "null");
    return local_881 + (int)local_881_d;
}

typedef struct {
    int field_882;
    long field_882_b;
    double field_882_c;
    char name_882[64];
} StructType882;

int function_882(StructType882 *s, int param_a, double param_b, const char *param_c) {
    int local_882 = param_a * 882;
    double local_882_d = param_b * 882;
    char buf_882[128];
    snprintf(buf_882, sizeof(buf_882), "function_%d: %d, %f, %s", 882, local_882, local_882_d, param_c ? param_c : "null");
    return local_882 + (int)local_882_d;
}

typedef struct {
    int field_883;
    long field_883_b;
    double field_883_c;
    char name_883[64];
} StructType883;

int function_883(StructType883 *s, int param_a, double param_b, const char *param_c) {
    int local_883 = param_a * 883;
    double local_883_d = param_b * 883;
    char buf_883[128];
    snprintf(buf_883, sizeof(buf_883), "function_%d: %d, %f, %s", 883, local_883, local_883_d, param_c ? param_c : "null");
    return local_883 + (int)local_883_d;
}

typedef struct {
    int field_884;
    long field_884_b;
    double field_884_c;
    char name_884[64];
} StructType884;

int function_884(StructType884 *s, int param_a, double param_b, const char *param_c) {
    int local_884 = param_a * 884;
    double local_884_d = param_b * 884;
    char buf_884[128];
    snprintf(buf_884, sizeof(buf_884), "function_%d: %d, %f, %s", 884, local_884, local_884_d, param_c ? param_c : "null");
    return local_884 + (int)local_884_d;
}

typedef struct {
    int field_885;
    long field_885_b;
    double field_885_c;
    char name_885[64];
} StructType885;

int function_885(StructType885 *s, int param_a, double param_b, const char *param_c) {
    int local_885 = param_a * 885;
    double local_885_d = param_b * 885;
    char buf_885[128];
    snprintf(buf_885, sizeof(buf_885), "function_%d: %d, %f, %s", 885, local_885, local_885_d, param_c ? param_c : "null");
    return local_885 + (int)local_885_d;
}

typedef struct {
    int field_886;
    long field_886_b;
    double field_886_c;
    char name_886[64];
} StructType886;

int function_886(StructType886 *s, int param_a, double param_b, const char *param_c) {
    int local_886 = param_a * 886;
    double local_886_d = param_b * 886;
    char buf_886[128];
    snprintf(buf_886, sizeof(buf_886), "function_%d: %d, %f, %s", 886, local_886, local_886_d, param_c ? param_c : "null");
    return local_886 + (int)local_886_d;
}

typedef struct {
    int field_887;
    long field_887_b;
    double field_887_c;
    char name_887[64];
} StructType887;

int function_887(StructType887 *s, int param_a, double param_b, const char *param_c) {
    int local_887 = param_a * 887;
    double local_887_d = param_b * 887;
    char buf_887[128];
    snprintf(buf_887, sizeof(buf_887), "function_%d: %d, %f, %s", 887, local_887, local_887_d, param_c ? param_c : "null");
    return local_887 + (int)local_887_d;
}

typedef struct {
    int field_888;
    long field_888_b;
    double field_888_c;
    char name_888[64];
} StructType888;

int function_888(StructType888 *s, int param_a, double param_b, const char *param_c) {
    int local_888 = param_a * 888;
    double local_888_d = param_b * 888;
    char buf_888[128];
    snprintf(buf_888, sizeof(buf_888), "function_%d: %d, %f, %s", 888, local_888, local_888_d, param_c ? param_c : "null");
    return local_888 + (int)local_888_d;
}

typedef struct {
    int field_889;
    long field_889_b;
    double field_889_c;
    char name_889[64];
} StructType889;

int function_889(StructType889 *s, int param_a, double param_b, const char *param_c) {
    int local_889 = param_a * 889;
    double local_889_d = param_b * 889;
    char buf_889[128];
    snprintf(buf_889, sizeof(buf_889), "function_%d: %d, %f, %s", 889, local_889, local_889_d, param_c ? param_c : "null");
    return local_889 + (int)local_889_d;
}

typedef struct {
    int field_890;
    long field_890_b;
    double field_890_c;
    char name_890[64];
} StructType890;

int function_890(StructType890 *s, int param_a, double param_b, const char *param_c) {
    int local_890 = param_a * 890;
    double local_890_d = param_b * 890;
    char buf_890[128];
    snprintf(buf_890, sizeof(buf_890), "function_%d: %d, %f, %s", 890, local_890, local_890_d, param_c ? param_c : "null");
    return local_890 + (int)local_890_d;
}

typedef struct {
    int field_891;
    long field_891_b;
    double field_891_c;
    char name_891[64];
} StructType891;

int function_891(StructType891 *s, int param_a, double param_b, const char *param_c) {
    int local_891 = param_a * 891;
    double local_891_d = param_b * 891;
    char buf_891[128];
    snprintf(buf_891, sizeof(buf_891), "function_%d: %d, %f, %s", 891, local_891, local_891_d, param_c ? param_c : "null");
    return local_891 + (int)local_891_d;
}

typedef struct {
    int field_892;
    long field_892_b;
    double field_892_c;
    char name_892[64];
} StructType892;

int function_892(StructType892 *s, int param_a, double param_b, const char *param_c) {
    int local_892 = param_a * 892;
    double local_892_d = param_b * 892;
    char buf_892[128];
    snprintf(buf_892, sizeof(buf_892), "function_%d: %d, %f, %s", 892, local_892, local_892_d, param_c ? param_c : "null");
    return local_892 + (int)local_892_d;
}

typedef struct {
    int field_893;
    long field_893_b;
    double field_893_c;
    char name_893[64];
} StructType893;

int function_893(StructType893 *s, int param_a, double param_b, const char *param_c) {
    int local_893 = param_a * 893;
    double local_893_d = param_b * 893;
    char buf_893[128];
    snprintf(buf_893, sizeof(buf_893), "function_%d: %d, %f, %s", 893, local_893, local_893_d, param_c ? param_c : "null");
    return local_893 + (int)local_893_d;
}

typedef struct {
    int field_894;
    long field_894_b;
    double field_894_c;
    char name_894[64];
} StructType894;

int function_894(StructType894 *s, int param_a, double param_b, const char *param_c) {
    int local_894 = param_a * 894;
    double local_894_d = param_b * 894;
    char buf_894[128];
    snprintf(buf_894, sizeof(buf_894), "function_%d: %d, %f, %s", 894, local_894, local_894_d, param_c ? param_c : "null");
    return local_894 + (int)local_894_d;
}

typedef struct {
    int field_895;
    long field_895_b;
    double field_895_c;
    char name_895[64];
} StructType895;

int function_895(StructType895 *s, int param_a, double param_b, const char *param_c) {
    int local_895 = param_a * 895;
    double local_895_d = param_b * 895;
    char buf_895[128];
    snprintf(buf_895, sizeof(buf_895), "function_%d: %d, %f, %s", 895, local_895, local_895_d, param_c ? param_c : "null");
    return local_895 + (int)local_895_d;
}

typedef struct {
    int field_896;
    long field_896_b;
    double field_896_c;
    char name_896[64];
} StructType896;

int function_896(StructType896 *s, int param_a, double param_b, const char *param_c) {
    int local_896 = param_a * 896;
    double local_896_d = param_b * 896;
    char buf_896[128];
    snprintf(buf_896, sizeof(buf_896), "function_%d: %d, %f, %s", 896, local_896, local_896_d, param_c ? param_c : "null");
    return local_896 + (int)local_896_d;
}

typedef struct {
    int field_897;
    long field_897_b;
    double field_897_c;
    char name_897[64];
} StructType897;

int function_897(StructType897 *s, int param_a, double param_b, const char *param_c) {
    int local_897 = param_a * 897;
    double local_897_d = param_b * 897;
    char buf_897[128];
    snprintf(buf_897, sizeof(buf_897), "function_%d: %d, %f, %s", 897, local_897, local_897_d, param_c ? param_c : "null");
    return local_897 + (int)local_897_d;
}

typedef struct {
    int field_898;
    long field_898_b;
    double field_898_c;
    char name_898[64];
} StructType898;

int function_898(StructType898 *s, int param_a, double param_b, const char *param_c) {
    int local_898 = param_a * 898;
    double local_898_d = param_b * 898;
    char buf_898[128];
    snprintf(buf_898, sizeof(buf_898), "function_%d: %d, %f, %s", 898, local_898, local_898_d, param_c ? param_c : "null");
    return local_898 + (int)local_898_d;
}

typedef struct {
    int field_899;
    long field_899_b;
    double field_899_c;
    char name_899[64];
} StructType899;

int function_899(StructType899 *s, int param_a, double param_b, const char *param_c) {
    int local_899 = param_a * 899;
    double local_899_d = param_b * 899;
    char buf_899[128];
    snprintf(buf_899, sizeof(buf_899), "function_%d: %d, %f, %s", 899, local_899, local_899_d, param_c ? param_c : "null");
    return local_899 + (int)local_899_d;
}

typedef struct {
    int field_900;
    long field_900_b;
    double field_900_c;
    char name_900[64];
} StructType900;

int function_900(StructType900 *s, int param_a, double param_b, const char *param_c) {
    int local_900 = param_a * 900;
    double local_900_d = param_b * 900;
    char buf_900[128];
    snprintf(buf_900, sizeof(buf_900), "function_%d: %d, %f, %s", 900, local_900, local_900_d, param_c ? param_c : "null");
    return local_900 + (int)local_900_d;
}

typedef struct {
    int field_901;
    long field_901_b;
    double field_901_c;
    char name_901[64];
} StructType901;

int function_901(StructType901 *s, int param_a, double param_b, const char *param_c) {
    int local_901 = param_a * 901;
    double local_901_d = param_b * 901;
    char buf_901[128];
    snprintf(buf_901, sizeof(buf_901), "function_%d: %d, %f, %s", 901, local_901, local_901_d, param_c ? param_c : "null");
    return local_901 + (int)local_901_d;
}

typedef struct {
    int field_902;
    long field_902_b;
    double field_902_c;
    char name_902[64];
} StructType902;

int function_902(StructType902 *s, int param_a, double param_b, const char *param_c) {
    int local_902 = param_a * 902;
    double local_902_d = param_b * 902;
    char buf_902[128];
    snprintf(buf_902, sizeof(buf_902), "function_%d: %d, %f, %s", 902, local_902, local_902_d, param_c ? param_c : "null");
    return local_902 + (int)local_902_d;
}

typedef struct {
    int field_903;
    long field_903_b;
    double field_903_c;
    char name_903[64];
} StructType903;

int function_903(StructType903 *s, int param_a, double param_b, const char *param_c) {
    int local_903 = param_a * 903;
    double local_903_d = param_b * 903;
    char buf_903[128];
    snprintf(buf_903, sizeof(buf_903), "function_%d: %d, %f, %s", 903, local_903, local_903_d, param_c ? param_c : "null");
    return local_903 + (int)local_903_d;
}

typedef struct {
    int field_904;
    long field_904_b;
    double field_904_c;
    char name_904[64];
} StructType904;

int function_904(StructType904 *s, int param_a, double param_b, const char *param_c) {
    int local_904 = param_a * 904;
    double local_904_d = param_b * 904;
    char buf_904[128];
    snprintf(buf_904, sizeof(buf_904), "function_%d: %d, %f, %s", 904, local_904, local_904_d, param_c ? param_c : "null");
    return local_904 + (int)local_904_d;
}

typedef struct {
    int field_905;
    long field_905_b;
    double field_905_c;
    char name_905[64];
} StructType905;

int function_905(StructType905 *s, int param_a, double param_b, const char *param_c) {
    int local_905 = param_a * 905;
    double local_905_d = param_b * 905;
    char buf_905[128];
    snprintf(buf_905, sizeof(buf_905), "function_%d: %d, %f, %s", 905, local_905, local_905_d, param_c ? param_c : "null");
    return local_905 + (int)local_905_d;
}

typedef struct {
    int field_906;
    long field_906_b;
    double field_906_c;
    char name_906[64];
} StructType906;

int function_906(StructType906 *s, int param_a, double param_b, const char *param_c) {
    int local_906 = param_a * 906;
    double local_906_d = param_b * 906;
    char buf_906[128];
    snprintf(buf_906, sizeof(buf_906), "function_%d: %d, %f, %s", 906, local_906, local_906_d, param_c ? param_c : "null");
    return local_906 + (int)local_906_d;
}

typedef struct {
    int field_907;
    long field_907_b;
    double field_907_c;
    char name_907[64];
} StructType907;

int function_907(StructType907 *s, int param_a, double param_b, const char *param_c) {
    int local_907 = param_a * 907;
    double local_907_d = param_b * 907;
    char buf_907[128];
    snprintf(buf_907, sizeof(buf_907), "function_%d: %d, %f, %s", 907, local_907, local_907_d, param_c ? param_c : "null");
    return local_907 + (int)local_907_d;
}

typedef struct {
    int field_908;
    long field_908_b;
    double field_908_c;
    char name_908[64];
} StructType908;

int function_908(StructType908 *s, int param_a, double param_b, const char *param_c) {
    int local_908 = param_a * 908;
    double local_908_d = param_b * 908;
    char buf_908[128];
    snprintf(buf_908, sizeof(buf_908), "function_%d: %d, %f, %s", 908, local_908, local_908_d, param_c ? param_c : "null");
    return local_908 + (int)local_908_d;
}

typedef struct {
    int field_909;
    long field_909_b;
    double field_909_c;
    char name_909[64];
} StructType909;

int function_909(StructType909 *s, int param_a, double param_b, const char *param_c) {
    int local_909 = param_a * 909;
    double local_909_d = param_b * 909;
    char buf_909[128];
    snprintf(buf_909, sizeof(buf_909), "function_%d: %d, %f, %s", 909, local_909, local_909_d, param_c ? param_c : "null");
    return local_909 + (int)local_909_d;
}

typedef struct {
    int field_910;
    long field_910_b;
    double field_910_c;
    char name_910[64];
} StructType910;

int function_910(StructType910 *s, int param_a, double param_b, const char *param_c) {
    int local_910 = param_a * 910;
    double local_910_d = param_b * 910;
    char buf_910[128];
    snprintf(buf_910, sizeof(buf_910), "function_%d: %d, %f, %s", 910, local_910, local_910_d, param_c ? param_c : "null");
    return local_910 + (int)local_910_d;
}

typedef struct {
    int field_911;
    long field_911_b;
    double field_911_c;
    char name_911[64];
} StructType911;

int function_911(StructType911 *s, int param_a, double param_b, const char *param_c) {
    int local_911 = param_a * 911;
    double local_911_d = param_b * 911;
    char buf_911[128];
    snprintf(buf_911, sizeof(buf_911), "function_%d: %d, %f, %s", 911, local_911, local_911_d, param_c ? param_c : "null");
    return local_911 + (int)local_911_d;
}

typedef struct {
    int field_912;
    long field_912_b;
    double field_912_c;
    char name_912[64];
} StructType912;

int function_912(StructType912 *s, int param_a, double param_b, const char *param_c) {
    int local_912 = param_a * 912;
    double local_912_d = param_b * 912;
    char buf_912[128];
    snprintf(buf_912, sizeof(buf_912), "function_%d: %d, %f, %s", 912, local_912, local_912_d, param_c ? param_c : "null");
    return local_912 + (int)local_912_d;
}

typedef struct {
    int field_913;
    long field_913_b;
    double field_913_c;
    char name_913[64];
} StructType913;

int function_913(StructType913 *s, int param_a, double param_b, const char *param_c) {
    int local_913 = param_a * 913;
    double local_913_d = param_b * 913;
    char buf_913[128];
    snprintf(buf_913, sizeof(buf_913), "function_%d: %d, %f, %s", 913, local_913, local_913_d, param_c ? param_c : "null");
    return local_913 + (int)local_913_d;
}

typedef struct {
    int field_914;
    long field_914_b;
    double field_914_c;
    char name_914[64];
} StructType914;

int function_914(StructType914 *s, int param_a, double param_b, const char *param_c) {
    int local_914 = param_a * 914;
    double local_914_d = param_b * 914;
    char buf_914[128];
    snprintf(buf_914, sizeof(buf_914), "function_%d: %d, %f, %s", 914, local_914, local_914_d, param_c ? param_c : "null");
    return local_914 + (int)local_914_d;
}

typedef struct {
    int field_915;
    long field_915_b;
    double field_915_c;
    char name_915[64];
} StructType915;

int function_915(StructType915 *s, int param_a, double param_b, const char *param_c) {
    int local_915 = param_a * 915;
    double local_915_d = param_b * 915;
    char buf_915[128];
    snprintf(buf_915, sizeof(buf_915), "function_%d: %d, %f, %s", 915, local_915, local_915_d, param_c ? param_c : "null");
    return local_915 + (int)local_915_d;
}

typedef struct {
    int field_916;
    long field_916_b;
    double field_916_c;
    char name_916[64];
} StructType916;

int function_916(StructType916 *s, int param_a, double param_b, const char *param_c) {
    int local_916 = param_a * 916;
    double local_916_d = param_b * 916;
    char buf_916[128];
    snprintf(buf_916, sizeof(buf_916), "function_%d: %d, %f, %s", 916, local_916, local_916_d, param_c ? param_c : "null");
    return local_916 + (int)local_916_d;
}

typedef struct {
    int field_917;
    long field_917_b;
    double field_917_c;
    char name_917[64];
} StructType917;

int function_917(StructType917 *s, int param_a, double param_b, const char *param_c) {
    int local_917 = param_a * 917;
    double local_917_d = param_b * 917;
    char buf_917[128];
    snprintf(buf_917, sizeof(buf_917), "function_%d: %d, %f, %s", 917, local_917, local_917_d, param_c ? param_c : "null");
    return local_917 + (int)local_917_d;
}

typedef struct {
    int field_918;
    long field_918_b;
    double field_918_c;
    char name_918[64];
} StructType918;

int function_918(StructType918 *s, int param_a, double param_b, const char *param_c) {
    int local_918 = param_a * 918;
    double local_918_d = param_b * 918;
    char buf_918[128];
    snprintf(buf_918, sizeof(buf_918), "function_%d: %d, %f, %s", 918, local_918, local_918_d, param_c ? param_c : "null");
    return local_918 + (int)local_918_d;
}

typedef struct {
    int field_919;
    long field_919_b;
    double field_919_c;
    char name_919[64];
} StructType919;

int function_919(StructType919 *s, int param_a, double param_b, const char *param_c) {
    int local_919 = param_a * 919;
    double local_919_d = param_b * 919;
    char buf_919[128];
    snprintf(buf_919, sizeof(buf_919), "function_%d: %d, %f, %s", 919, local_919, local_919_d, param_c ? param_c : "null");
    return local_919 + (int)local_919_d;
}

typedef struct {
    int field_920;
    long field_920_b;
    double field_920_c;
    char name_920[64];
} StructType920;

int function_920(StructType920 *s, int param_a, double param_b, const char *param_c) {
    int local_920 = param_a * 920;
    double local_920_d = param_b * 920;
    char buf_920[128];
    snprintf(buf_920, sizeof(buf_920), "function_%d: %d, %f, %s", 920, local_920, local_920_d, param_c ? param_c : "null");
    return local_920 + (int)local_920_d;
}

typedef struct {
    int field_921;
    long field_921_b;
    double field_921_c;
    char name_921[64];
} StructType921;

int function_921(StructType921 *s, int param_a, double param_b, const char *param_c) {
    int local_921 = param_a * 921;
    double local_921_d = param_b * 921;
    char buf_921[128];
    snprintf(buf_921, sizeof(buf_921), "function_%d: %d, %f, %s", 921, local_921, local_921_d, param_c ? param_c : "null");
    return local_921 + (int)local_921_d;
}

typedef struct {
    int field_922;
    long field_922_b;
    double field_922_c;
    char name_922[64];
} StructType922;

int function_922(StructType922 *s, int param_a, double param_b, const char *param_c) {
    int local_922 = param_a * 922;
    double local_922_d = param_b * 922;
    char buf_922[128];
    snprintf(buf_922, sizeof(buf_922), "function_%d: %d, %f, %s", 922, local_922, local_922_d, param_c ? param_c : "null");
    return local_922 + (int)local_922_d;
}

typedef struct {
    int field_923;
    long field_923_b;
    double field_923_c;
    char name_923[64];
} StructType923;

int function_923(StructType923 *s, int param_a, double param_b, const char *param_c) {
    int local_923 = param_a * 923;
    double local_923_d = param_b * 923;
    char buf_923[128];
    snprintf(buf_923, sizeof(buf_923), "function_%d: %d, %f, %s", 923, local_923, local_923_d, param_c ? param_c : "null");
    return local_923 + (int)local_923_d;
}

typedef struct {
    int field_924;
    long field_924_b;
    double field_924_c;
    char name_924[64];
} StructType924;

int function_924(StructType924 *s, int param_a, double param_b, const char *param_c) {
    int local_924 = param_a * 924;
    double local_924_d = param_b * 924;
    char buf_924[128];
    snprintf(buf_924, sizeof(buf_924), "function_%d: %d, %f, %s", 924, local_924, local_924_d, param_c ? param_c : "null");
    return local_924 + (int)local_924_d;
}

typedef struct {
    int field_925;
    long field_925_b;
    double field_925_c;
    char name_925[64];
} StructType925;

int function_925(StructType925 *s, int param_a, double param_b, const char *param_c) {
    int local_925 = param_a * 925;
    double local_925_d = param_b * 925;
    char buf_925[128];
    snprintf(buf_925, sizeof(buf_925), "function_%d: %d, %f, %s", 925, local_925, local_925_d, param_c ? param_c : "null");
    return local_925 + (int)local_925_d;
}

typedef struct {
    int field_926;
    long field_926_b;
    double field_926_c;
    char name_926[64];
} StructType926;

int function_926(StructType926 *s, int param_a, double param_b, const char *param_c) {
    int local_926 = param_a * 926;
    double local_926_d = param_b * 926;
    char buf_926[128];
    snprintf(buf_926, sizeof(buf_926), "function_%d: %d, %f, %s", 926, local_926, local_926_d, param_c ? param_c : "null");
    return local_926 + (int)local_926_d;
}

typedef struct {
    int field_927;
    long field_927_b;
    double field_927_c;
    char name_927[64];
} StructType927;

int function_927(StructType927 *s, int param_a, double param_b, const char *param_c) {
    int local_927 = param_a * 927;
    double local_927_d = param_b * 927;
    char buf_927[128];
    snprintf(buf_927, sizeof(buf_927), "function_%d: %d, %f, %s", 927, local_927, local_927_d, param_c ? param_c : "null");
    return local_927 + (int)local_927_d;
}

typedef struct {
    int field_928;
    long field_928_b;
    double field_928_c;
    char name_928[64];
} StructType928;

int function_928(StructType928 *s, int param_a, double param_b, const char *param_c) {
    int local_928 = param_a * 928;
    double local_928_d = param_b * 928;
    char buf_928[128];
    snprintf(buf_928, sizeof(buf_928), "function_%d: %d, %f, %s", 928, local_928, local_928_d, param_c ? param_c : "null");
    return local_928 + (int)local_928_d;
}

typedef struct {
    int field_929;
    long field_929_b;
    double field_929_c;
    char name_929[64];
} StructType929;

int function_929(StructType929 *s, int param_a, double param_b, const char *param_c) {
    int local_929 = param_a * 929;
    double local_929_d = param_b * 929;
    char buf_929[128];
    snprintf(buf_929, sizeof(buf_929), "function_%d: %d, %f, %s", 929, local_929, local_929_d, param_c ? param_c : "null");
    return local_929 + (int)local_929_d;
}

typedef struct {
    int field_930;
    long field_930_b;
    double field_930_c;
    char name_930[64];
} StructType930;

int function_930(StructType930 *s, int param_a, double param_b, const char *param_c) {
    int local_930 = param_a * 930;
    double local_930_d = param_b * 930;
    char buf_930[128];
    snprintf(buf_930, sizeof(buf_930), "function_%d: %d, %f, %s", 930, local_930, local_930_d, param_c ? param_c : "null");
    return local_930 + (int)local_930_d;
}

typedef struct {
    int field_931;
    long field_931_b;
    double field_931_c;
    char name_931[64];
} StructType931;

int function_931(StructType931 *s, int param_a, double param_b, const char *param_c) {
    int local_931 = param_a * 931;
    double local_931_d = param_b * 931;
    char buf_931[128];
    snprintf(buf_931, sizeof(buf_931), "function_%d: %d, %f, %s", 931, local_931, local_931_d, param_c ? param_c : "null");
    return local_931 + (int)local_931_d;
}

typedef struct {
    int field_932;
    long field_932_b;
    double field_932_c;
    char name_932[64];
} StructType932;

int function_932(StructType932 *s, int param_a, double param_b, const char *param_c) {
    int local_932 = param_a * 932;
    double local_932_d = param_b * 932;
    char buf_932[128];
    snprintf(buf_932, sizeof(buf_932), "function_%d: %d, %f, %s", 932, local_932, local_932_d, param_c ? param_c : "null");
    return local_932 + (int)local_932_d;
}

typedef struct {
    int field_933;
    long field_933_b;
    double field_933_c;
    char name_933[64];
} StructType933;

int function_933(StructType933 *s, int param_a, double param_b, const char *param_c) {
    int local_933 = param_a * 933;
    double local_933_d = param_b * 933;
    char buf_933[128];
    snprintf(buf_933, sizeof(buf_933), "function_%d: %d, %f, %s", 933, local_933, local_933_d, param_c ? param_c : "null");
    return local_933 + (int)local_933_d;
}

typedef struct {
    int field_934;
    long field_934_b;
    double field_934_c;
    char name_934[64];
} StructType934;

int function_934(StructType934 *s, int param_a, double param_b, const char *param_c) {
    int local_934 = param_a * 934;
    double local_934_d = param_b * 934;
    char buf_934[128];
    snprintf(buf_934, sizeof(buf_934), "function_%d: %d, %f, %s", 934, local_934, local_934_d, param_c ? param_c : "null");
    return local_934 + (int)local_934_d;
}

typedef struct {
    int field_935;
    long field_935_b;
    double field_935_c;
    char name_935[64];
} StructType935;

int function_935(StructType935 *s, int param_a, double param_b, const char *param_c) {
    int local_935 = param_a * 935;
    double local_935_d = param_b * 935;
    char buf_935[128];
    snprintf(buf_935, sizeof(buf_935), "function_%d: %d, %f, %s", 935, local_935, local_935_d, param_c ? param_c : "null");
    return local_935 + (int)local_935_d;
}

typedef struct {
    int field_936;
    long field_936_b;
    double field_936_c;
    char name_936[64];
} StructType936;

int function_936(StructType936 *s, int param_a, double param_b, const char *param_c) {
    int local_936 = param_a * 936;
    double local_936_d = param_b * 936;
    char buf_936[128];
    snprintf(buf_936, sizeof(buf_936), "function_%d: %d, %f, %s", 936, local_936, local_936_d, param_c ? param_c : "null");
    return local_936 + (int)local_936_d;
}

typedef struct {
    int field_937;
    long field_937_b;
    double field_937_c;
    char name_937[64];
} StructType937;

int function_937(StructType937 *s, int param_a, double param_b, const char *param_c) {
    int local_937 = param_a * 937;
    double local_937_d = param_b * 937;
    char buf_937[128];
    snprintf(buf_937, sizeof(buf_937), "function_%d: %d, %f, %s", 937, local_937, local_937_d, param_c ? param_c : "null");
    return local_937 + (int)local_937_d;
}

typedef struct {
    int field_938;
    long field_938_b;
    double field_938_c;
    char name_938[64];
} StructType938;

int function_938(StructType938 *s, int param_a, double param_b, const char *param_c) {
    int local_938 = param_a * 938;
    double local_938_d = param_b * 938;
    char buf_938[128];
    snprintf(buf_938, sizeof(buf_938), "function_%d: %d, %f, %s", 938, local_938, local_938_d, param_c ? param_c : "null");
    return local_938 + (int)local_938_d;
}

typedef struct {
    int field_939;
    long field_939_b;
    double field_939_c;
    char name_939[64];
} StructType939;

int function_939(StructType939 *s, int param_a, double param_b, const char *param_c) {
    int local_939 = param_a * 939;
    double local_939_d = param_b * 939;
    char buf_939[128];
    snprintf(buf_939, sizeof(buf_939), "function_%d: %d, %f, %s", 939, local_939, local_939_d, param_c ? param_c : "null");
    return local_939 + (int)local_939_d;
}

typedef struct {
    int field_940;
    long field_940_b;
    double field_940_c;
    char name_940[64];
} StructType940;

int function_940(StructType940 *s, int param_a, double param_b, const char *param_c) {
    int local_940 = param_a * 940;
    double local_940_d = param_b * 940;
    char buf_940[128];
    snprintf(buf_940, sizeof(buf_940), "function_%d: %d, %f, %s", 940, local_940, local_940_d, param_c ? param_c : "null");
    return local_940 + (int)local_940_d;
}

typedef struct {
    int field_941;
    long field_941_b;
    double field_941_c;
    char name_941[64];
} StructType941;

int function_941(StructType941 *s, int param_a, double param_b, const char *param_c) {
    int local_941 = param_a * 941;
    double local_941_d = param_b * 941;
    char buf_941[128];
    snprintf(buf_941, sizeof(buf_941), "function_%d: %d, %f, %s", 941, local_941, local_941_d, param_c ? param_c : "null");
    return local_941 + (int)local_941_d;
}

typedef struct {
    int field_942;
    long field_942_b;
    double field_942_c;
    char name_942[64];
} StructType942;

int function_942(StructType942 *s, int param_a, double param_b, const char *param_c) {
    int local_942 = param_a * 942;
    double local_942_d = param_b * 942;
    char buf_942[128];
    snprintf(buf_942, sizeof(buf_942), "function_%d: %d, %f, %s", 942, local_942, local_942_d, param_c ? param_c : "null");
    return local_942 + (int)local_942_d;
}

typedef struct {
    int field_943;
    long field_943_b;
    double field_943_c;
    char name_943[64];
} StructType943;

int function_943(StructType943 *s, int param_a, double param_b, const char *param_c) {
    int local_943 = param_a * 943;
    double local_943_d = param_b * 943;
    char buf_943[128];
    snprintf(buf_943, sizeof(buf_943), "function_%d: %d, %f, %s", 943, local_943, local_943_d, param_c ? param_c : "null");
    return local_943 + (int)local_943_d;
}

typedef struct {
    int field_944;
    long field_944_b;
    double field_944_c;
    char name_944[64];
} StructType944;

int function_944(StructType944 *s, int param_a, double param_b, const char *param_c) {
    int local_944 = param_a * 944;
    double local_944_d = param_b * 944;
    char buf_944[128];
    snprintf(buf_944, sizeof(buf_944), "function_%d: %d, %f, %s", 944, local_944, local_944_d, param_c ? param_c : "null");
    return local_944 + (int)local_944_d;
}

typedef struct {
    int field_945;
    long field_945_b;
    double field_945_c;
    char name_945[64];
} StructType945;

int function_945(StructType945 *s, int param_a, double param_b, const char *param_c) {
    int local_945 = param_a * 945;
    double local_945_d = param_b * 945;
    char buf_945[128];
    snprintf(buf_945, sizeof(buf_945), "function_%d: %d, %f, %s", 945, local_945, local_945_d, param_c ? param_c : "null");
    return local_945 + (int)local_945_d;
}

typedef struct {
    int field_946;
    long field_946_b;
    double field_946_c;
    char name_946[64];
} StructType946;

int function_946(StructType946 *s, int param_a, double param_b, const char *param_c) {
    int local_946 = param_a * 946;
    double local_946_d = param_b * 946;
    char buf_946[128];
    snprintf(buf_946, sizeof(buf_946), "function_%d: %d, %f, %s", 946, local_946, local_946_d, param_c ? param_c : "null");
    return local_946 + (int)local_946_d;
}

typedef struct {
    int field_947;
    long field_947_b;
    double field_947_c;
    char name_947[64];
} StructType947;

int function_947(StructType947 *s, int param_a, double param_b, const char *param_c) {
    int local_947 = param_a * 947;
    double local_947_d = param_b * 947;
    char buf_947[128];
    snprintf(buf_947, sizeof(buf_947), "function_%d: %d, %f, %s", 947, local_947, local_947_d, param_c ? param_c : "null");
    return local_947 + (int)local_947_d;
}

typedef struct {
    int field_948;
    long field_948_b;
    double field_948_c;
    char name_948[64];
} StructType948;

int function_948(StructType948 *s, int param_a, double param_b, const char *param_c) {
    int local_948 = param_a * 948;
    double local_948_d = param_b * 948;
    char buf_948[128];
    snprintf(buf_948, sizeof(buf_948), "function_%d: %d, %f, %s", 948, local_948, local_948_d, param_c ? param_c : "null");
    return local_948 + (int)local_948_d;
}

typedef struct {
    int field_949;
    long field_949_b;
    double field_949_c;
    char name_949[64];
} StructType949;

int function_949(StructType949 *s, int param_a, double param_b, const char *param_c) {
    int local_949 = param_a * 949;
    double local_949_d = param_b * 949;
    char buf_949[128];
    snprintf(buf_949, sizeof(buf_949), "function_%d: %d, %f, %s", 949, local_949, local_949_d, param_c ? param_c : "null");
    return local_949 + (int)local_949_d;
}

typedef struct {
    int field_950;
    long field_950_b;
    double field_950_c;
    char name_950[64];
} StructType950;

int function_950(StructType950 *s, int param_a, double param_b, const char *param_c) {
    int local_950 = param_a * 950;
    double local_950_d = param_b * 950;
    char buf_950[128];
    snprintf(buf_950, sizeof(buf_950), "function_%d: %d, %f, %s", 950, local_950, local_950_d, param_c ? param_c : "null");
    return local_950 + (int)local_950_d;
}

typedef struct {
    int field_951;
    long field_951_b;
    double field_951_c;
    char name_951[64];
} StructType951;

int function_951(StructType951 *s, int param_a, double param_b, const char *param_c) {
    int local_951 = param_a * 951;
    double local_951_d = param_b * 951;
    char buf_951[128];
    snprintf(buf_951, sizeof(buf_951), "function_%d: %d, %f, %s", 951, local_951, local_951_d, param_c ? param_c : "null");
    return local_951 + (int)local_951_d;
}

typedef struct {
    int field_952;
    long field_952_b;
    double field_952_c;
    char name_952[64];
} StructType952;

int function_952(StructType952 *s, int param_a, double param_b, const char *param_c) {
    int local_952 = param_a * 952;
    double local_952_d = param_b * 952;
    char buf_952[128];
    snprintf(buf_952, sizeof(buf_952), "function_%d: %d, %f, %s", 952, local_952, local_952_d, param_c ? param_c : "null");
    return local_952 + (int)local_952_d;
}

typedef struct {
    int field_953;
    long field_953_b;
    double field_953_c;
    char name_953[64];
} StructType953;

int function_953(StructType953 *s, int param_a, double param_b, const char *param_c) {
    int local_953 = param_a * 953;
    double local_953_d = param_b * 953;
    char buf_953[128];
    snprintf(buf_953, sizeof(buf_953), "function_%d: %d, %f, %s", 953, local_953, local_953_d, param_c ? param_c : "null");
    return local_953 + (int)local_953_d;
}

typedef struct {
    int field_954;
    long field_954_b;
    double field_954_c;
    char name_954[64];
} StructType954;

int function_954(StructType954 *s, int param_a, double param_b, const char *param_c) {
    int local_954 = param_a * 954;
    double local_954_d = param_b * 954;
    char buf_954[128];
    snprintf(buf_954, sizeof(buf_954), "function_%d: %d, %f, %s", 954, local_954, local_954_d, param_c ? param_c : "null");
    return local_954 + (int)local_954_d;
}

typedef struct {
    int field_955;
    long field_955_b;
    double field_955_c;
    char name_955[64];
} StructType955;

int function_955(StructType955 *s, int param_a, double param_b, const char *param_c) {
    int local_955 = param_a * 955;
    double local_955_d = param_b * 955;
    char buf_955[128];
    snprintf(buf_955, sizeof(buf_955), "function_%d: %d, %f, %s", 955, local_955, local_955_d, param_c ? param_c : "null");
    return local_955 + (int)local_955_d;
}

typedef struct {
    int field_956;
    long field_956_b;
    double field_956_c;
    char name_956[64];
} StructType956;

int function_956(StructType956 *s, int param_a, double param_b, const char *param_c) {
    int local_956 = param_a * 956;
    double local_956_d = param_b * 956;
    char buf_956[128];
    snprintf(buf_956, sizeof(buf_956), "function_%d: %d, %f, %s", 956, local_956, local_956_d, param_c ? param_c : "null");
    return local_956 + (int)local_956_d;
}

typedef struct {
    int field_957;
    long field_957_b;
    double field_957_c;
    char name_957[64];
} StructType957;

int function_957(StructType957 *s, int param_a, double param_b, const char *param_c) {
    int local_957 = param_a * 957;
    double local_957_d = param_b * 957;
    char buf_957[128];
    snprintf(buf_957, sizeof(buf_957), "function_%d: %d, %f, %s", 957, local_957, local_957_d, param_c ? param_c : "null");
    return local_957 + (int)local_957_d;
}

typedef struct {
    int field_958;
    long field_958_b;
    double field_958_c;
    char name_958[64];
} StructType958;

int function_958(StructType958 *s, int param_a, double param_b, const char *param_c) {
    int local_958 = param_a * 958;
    double local_958_d = param_b * 958;
    char buf_958[128];
    snprintf(buf_958, sizeof(buf_958), "function_%d: %d, %f, %s", 958, local_958, local_958_d, param_c ? param_c : "null");
    return local_958 + (int)local_958_d;
}

typedef struct {
    int field_959;
    long field_959_b;
    double field_959_c;
    char name_959[64];
} StructType959;

int function_959(StructType959 *s, int param_a, double param_b, const char *param_c) {
    int local_959 = param_a * 959;
    double local_959_d = param_b * 959;
    char buf_959[128];
    snprintf(buf_959, sizeof(buf_959), "function_%d: %d, %f, %s", 959, local_959, local_959_d, param_c ? param_c : "null");
    return local_959 + (int)local_959_d;
}

typedef struct {
    int field_960;
    long field_960_b;
    double field_960_c;
    char name_960[64];
} StructType960;

int function_960(StructType960 *s, int param_a, double param_b, const char *param_c) {
    int local_960 = param_a * 960;
    double local_960_d = param_b * 960;
    char buf_960[128];
    snprintf(buf_960, sizeof(buf_960), "function_%d: %d, %f, %s", 960, local_960, local_960_d, param_c ? param_c : "null");
    return local_960 + (int)local_960_d;
}

typedef struct {
    int field_961;
    long field_961_b;
    double field_961_c;
    char name_961[64];
} StructType961;

int function_961(StructType961 *s, int param_a, double param_b, const char *param_c) {
    int local_961 = param_a * 961;
    double local_961_d = param_b * 961;
    char buf_961[128];
    snprintf(buf_961, sizeof(buf_961), "function_%d: %d, %f, %s", 961, local_961, local_961_d, param_c ? param_c : "null");
    return local_961 + (int)local_961_d;
}

typedef struct {
    int field_962;
    long field_962_b;
    double field_962_c;
    char name_962[64];
} StructType962;

int function_962(StructType962 *s, int param_a, double param_b, const char *param_c) {
    int local_962 = param_a * 962;
    double local_962_d = param_b * 962;
    char buf_962[128];
    snprintf(buf_962, sizeof(buf_962), "function_%d: %d, %f, %s", 962, local_962, local_962_d, param_c ? param_c : "null");
    return local_962 + (int)local_962_d;
}

typedef struct {
    int field_963;
    long field_963_b;
    double field_963_c;
    char name_963[64];
} StructType963;

int function_963(StructType963 *s, int param_a, double param_b, const char *param_c) {
    int local_963 = param_a * 963;
    double local_963_d = param_b * 963;
    char buf_963[128];
    snprintf(buf_963, sizeof(buf_963), "function_%d: %d, %f, %s", 963, local_963, local_963_d, param_c ? param_c : "null");
    return local_963 + (int)local_963_d;
}

typedef struct {
    int field_964;
    long field_964_b;
    double field_964_c;
    char name_964[64];
} StructType964;

int function_964(StructType964 *s, int param_a, double param_b, const char *param_c) {
    int local_964 = param_a * 964;
    double local_964_d = param_b * 964;
    char buf_964[128];
    snprintf(buf_964, sizeof(buf_964), "function_%d: %d, %f, %s", 964, local_964, local_964_d, param_c ? param_c : "null");
    return local_964 + (int)local_964_d;
}

typedef struct {
    int field_965;
    long field_965_b;
    double field_965_c;
    char name_965[64];
} StructType965;

int function_965(StructType965 *s, int param_a, double param_b, const char *param_c) {
    int local_965 = param_a * 965;
    double local_965_d = param_b * 965;
    char buf_965[128];
    snprintf(buf_965, sizeof(buf_965), "function_%d: %d, %f, %s", 965, local_965, local_965_d, param_c ? param_c : "null");
    return local_965 + (int)local_965_d;
}

typedef struct {
    int field_966;
    long field_966_b;
    double field_966_c;
    char name_966[64];
} StructType966;

int function_966(StructType966 *s, int param_a, double param_b, const char *param_c) {
    int local_966 = param_a * 966;
    double local_966_d = param_b * 966;
    char buf_966[128];
    snprintf(buf_966, sizeof(buf_966), "function_%d: %d, %f, %s", 966, local_966, local_966_d, param_c ? param_c : "null");
    return local_966 + (int)local_966_d;
}

typedef struct {
    int field_967;
    long field_967_b;
    double field_967_c;
    char name_967[64];
} StructType967;

int function_967(StructType967 *s, int param_a, double param_b, const char *param_c) {
    int local_967 = param_a * 967;
    double local_967_d = param_b * 967;
    char buf_967[128];
    snprintf(buf_967, sizeof(buf_967), "function_%d: %d, %f, %s", 967, local_967, local_967_d, param_c ? param_c : "null");
    return local_967 + (int)local_967_d;
}

typedef struct {
    int field_968;
    long field_968_b;
    double field_968_c;
    char name_968[64];
} StructType968;

int function_968(StructType968 *s, int param_a, double param_b, const char *param_c) {
    int local_968 = param_a * 968;
    double local_968_d = param_b * 968;
    char buf_968[128];
    snprintf(buf_968, sizeof(buf_968), "function_%d: %d, %f, %s", 968, local_968, local_968_d, param_c ? param_c : "null");
    return local_968 + (int)local_968_d;
}

typedef struct {
    int field_969;
    long field_969_b;
    double field_969_c;
    char name_969[64];
} StructType969;

int function_969(StructType969 *s, int param_a, double param_b, const char *param_c) {
    int local_969 = param_a * 969;
    double local_969_d = param_b * 969;
    char buf_969[128];
    snprintf(buf_969, sizeof(buf_969), "function_%d: %d, %f, %s", 969, local_969, local_969_d, param_c ? param_c : "null");
    return local_969 + (int)local_969_d;
}

typedef struct {
    int field_970;
    long field_970_b;
    double field_970_c;
    char name_970[64];
} StructType970;

int function_970(StructType970 *s, int param_a, double param_b, const char *param_c) {
    int local_970 = param_a * 970;
    double local_970_d = param_b * 970;
    char buf_970[128];
    snprintf(buf_970, sizeof(buf_970), "function_%d: %d, %f, %s", 970, local_970, local_970_d, param_c ? param_c : "null");
    return local_970 + (int)local_970_d;
}

typedef struct {
    int field_971;
    long field_971_b;
    double field_971_c;
    char name_971[64];
} StructType971;

int function_971(StructType971 *s, int param_a, double param_b, const char *param_c) {
    int local_971 = param_a * 971;
    double local_971_d = param_b * 971;
    char buf_971[128];
    snprintf(buf_971, sizeof(buf_971), "function_%d: %d, %f, %s", 971, local_971, local_971_d, param_c ? param_c : "null");
    return local_971 + (int)local_971_d;
}

typedef struct {
    int field_972;
    long field_972_b;
    double field_972_c;
    char name_972[64];
} StructType972;

int function_972(StructType972 *s, int param_a, double param_b, const char *param_c) {
    int local_972 = param_a * 972;
    double local_972_d = param_b * 972;
    char buf_972[128];
    snprintf(buf_972, sizeof(buf_972), "function_%d: %d, %f, %s", 972, local_972, local_972_d, param_c ? param_c : "null");
    return local_972 + (int)local_972_d;
}

typedef struct {
    int field_973;
    long field_973_b;
    double field_973_c;
    char name_973[64];
} StructType973;

int function_973(StructType973 *s, int param_a, double param_b, const char *param_c) {
    int local_973 = param_a * 973;
    double local_973_d = param_b * 973;
    char buf_973[128];
    snprintf(buf_973, sizeof(buf_973), "function_%d: %d, %f, %s", 973, local_973, local_973_d, param_c ? param_c : "null");
    return local_973 + (int)local_973_d;
}

typedef struct {
    int field_974;
    long field_974_b;
    double field_974_c;
    char name_974[64];
} StructType974;

int function_974(StructType974 *s, int param_a, double param_b, const char *param_c) {
    int local_974 = param_a * 974;
    double local_974_d = param_b * 974;
    char buf_974[128];
    snprintf(buf_974, sizeof(buf_974), "function_%d: %d, %f, %s", 974, local_974, local_974_d, param_c ? param_c : "null");
    return local_974 + (int)local_974_d;
}

typedef struct {
    int field_975;
    long field_975_b;
    double field_975_c;
    char name_975[64];
} StructType975;

int function_975(StructType975 *s, int param_a, double param_b, const char *param_c) {
    int local_975 = param_a * 975;
    double local_975_d = param_b * 975;
    char buf_975[128];
    snprintf(buf_975, sizeof(buf_975), "function_%d: %d, %f, %s", 975, local_975, local_975_d, param_c ? param_c : "null");
    return local_975 + (int)local_975_d;
}

typedef struct {
    int field_976;
    long field_976_b;
    double field_976_c;
    char name_976[64];
} StructType976;

int function_976(StructType976 *s, int param_a, double param_b, const char *param_c) {
    int local_976 = param_a * 976;
    double local_976_d = param_b * 976;
    char buf_976[128];
    snprintf(buf_976, sizeof(buf_976), "function_%d: %d, %f, %s", 976, local_976, local_976_d, param_c ? param_c : "null");
    return local_976 + (int)local_976_d;
}

typedef struct {
    int field_977;
    long field_977_b;
    double field_977_c;
    char name_977[64];
} StructType977;

int function_977(StructType977 *s, int param_a, double param_b, const char *param_c) {
    int local_977 = param_a * 977;
    double local_977_d = param_b * 977;
    char buf_977[128];
    snprintf(buf_977, sizeof(buf_977), "function_%d: %d, %f, %s", 977, local_977, local_977_d, param_c ? param_c : "null");
    return local_977 + (int)local_977_d;
}

typedef struct {
    int field_978;
    long field_978_b;
    double field_978_c;
    char name_978[64];
} StructType978;

int function_978(StructType978 *s, int param_a, double param_b, const char *param_c) {
    int local_978 = param_a * 978;
    double local_978_d = param_b * 978;
    char buf_978[128];
    snprintf(buf_978, sizeof(buf_978), "function_%d: %d, %f, %s", 978, local_978, local_978_d, param_c ? param_c : "null");
    return local_978 + (int)local_978_d;
}

typedef struct {
    int field_979;
    long field_979_b;
    double field_979_c;
    char name_979[64];
} StructType979;

int function_979(StructType979 *s, int param_a, double param_b, const char *param_c) {
    int local_979 = param_a * 979;
    double local_979_d = param_b * 979;
    char buf_979[128];
    snprintf(buf_979, sizeof(buf_979), "function_%d: %d, %f, %s", 979, local_979, local_979_d, param_c ? param_c : "null");
    return local_979 + (int)local_979_d;
}

typedef struct {
    int field_980;
    long field_980_b;
    double field_980_c;
    char name_980[64];
} StructType980;

int function_980(StructType980 *s, int param_a, double param_b, const char *param_c) {
    int local_980 = param_a * 980;
    double local_980_d = param_b * 980;
    char buf_980[128];
    snprintf(buf_980, sizeof(buf_980), "function_%d: %d, %f, %s", 980, local_980, local_980_d, param_c ? param_c : "null");
    return local_980 + (int)local_980_d;
}

typedef struct {
    int field_981;
    long field_981_b;
    double field_981_c;
    char name_981[64];
} StructType981;

int function_981(StructType981 *s, int param_a, double param_b, const char *param_c) {
    int local_981 = param_a * 981;
    double local_981_d = param_b * 981;
    char buf_981[128];
    snprintf(buf_981, sizeof(buf_981), "function_%d: %d, %f, %s", 981, local_981, local_981_d, param_c ? param_c : "null");
    return local_981 + (int)local_981_d;
}

typedef struct {
    int field_982;
    long field_982_b;
    double field_982_c;
    char name_982[64];
} StructType982;

int function_982(StructType982 *s, int param_a, double param_b, const char *param_c) {
    int local_982 = param_a * 982;
    double local_982_d = param_b * 982;
    char buf_982[128];
    snprintf(buf_982, sizeof(buf_982), "function_%d: %d, %f, %s", 982, local_982, local_982_d, param_c ? param_c : "null");
    return local_982 + (int)local_982_d;
}

typedef struct {
    int field_983;
    long field_983_b;
    double field_983_c;
    char name_983[64];
} StructType983;

int function_983(StructType983 *s, int param_a, double param_b, const char *param_c) {
    int local_983 = param_a * 983;
    double local_983_d = param_b * 983;
    char buf_983[128];
    snprintf(buf_983, sizeof(buf_983), "function_%d: %d, %f, %s", 983, local_983, local_983_d, param_c ? param_c : "null");
    return local_983 + (int)local_983_d;
}

typedef struct {
    int field_984;
    long field_984_b;
    double field_984_c;
    char name_984[64];
} StructType984;

int function_984(StructType984 *s, int param_a, double param_b, const char *param_c) {
    int local_984 = param_a * 984;
    double local_984_d = param_b * 984;
    char buf_984[128];
    snprintf(buf_984, sizeof(buf_984), "function_%d: %d, %f, %s", 984, local_984, local_984_d, param_c ? param_c : "null");
    return local_984 + (int)local_984_d;
}

typedef struct {
    int field_985;
    long field_985_b;
    double field_985_c;
    char name_985[64];
} StructType985;

int function_985(StructType985 *s, int param_a, double param_b, const char *param_c) {
    int local_985 = param_a * 985;
    double local_985_d = param_b * 985;
    char buf_985[128];
    snprintf(buf_985, sizeof(buf_985), "function_%d: %d, %f, %s", 985, local_985, local_985_d, param_c ? param_c : "null");
    return local_985 + (int)local_985_d;
}

typedef struct {
    int field_986;
    long field_986_b;
    double field_986_c;
    char name_986[64];
} StructType986;

int function_986(StructType986 *s, int param_a, double param_b, const char *param_c) {
    int local_986 = param_a * 986;
    double local_986_d = param_b * 986;
    char buf_986[128];
    snprintf(buf_986, sizeof(buf_986), "function_%d: %d, %f, %s", 986, local_986, local_986_d, param_c ? param_c : "null");
    return local_986 + (int)local_986_d;
}

typedef struct {
    int field_987;
    long field_987_b;
    double field_987_c;
    char name_987[64];
} StructType987;

int function_987(StructType987 *s, int param_a, double param_b, const char *param_c) {
    int local_987 = param_a * 987;
    double local_987_d = param_b * 987;
    char buf_987[128];
    snprintf(buf_987, sizeof(buf_987), "function_%d: %d, %f, %s", 987, local_987, local_987_d, param_c ? param_c : "null");
    return local_987 + (int)local_987_d;
}

typedef struct {
    int field_988;
    long field_988_b;
    double field_988_c;
    char name_988[64];
} StructType988;

int function_988(StructType988 *s, int param_a, double param_b, const char *param_c) {
    int local_988 = param_a * 988;
    double local_988_d = param_b * 988;
    char buf_988[128];
    snprintf(buf_988, sizeof(buf_988), "function_%d: %d, %f, %s", 988, local_988, local_988_d, param_c ? param_c : "null");
    return local_988 + (int)local_988_d;
}

typedef struct {
    int field_989;
    long field_989_b;
    double field_989_c;
    char name_989[64];
} StructType989;

int function_989(StructType989 *s, int param_a, double param_b, const char *param_c) {
    int local_989 = param_a * 989;
    double local_989_d = param_b * 989;
    char buf_989[128];
    snprintf(buf_989, sizeof(buf_989), "function_%d: %d, %f, %s", 989, local_989, local_989_d, param_c ? param_c : "null");
    return local_989 + (int)local_989_d;
}

typedef struct {
    int field_990;
    long field_990_b;
    double field_990_c;
    char name_990[64];
} StructType990;

int function_990(StructType990 *s, int param_a, double param_b, const char *param_c) {
    int local_990 = param_a * 990;
    double local_990_d = param_b * 990;
    char buf_990[128];
    snprintf(buf_990, sizeof(buf_990), "function_%d: %d, %f, %s", 990, local_990, local_990_d, param_c ? param_c : "null");
    return local_990 + (int)local_990_d;
}

typedef struct {
    int field_991;
    long field_991_b;
    double field_991_c;
    char name_991[64];
} StructType991;

int function_991(StructType991 *s, int param_a, double param_b, const char *param_c) {
    int local_991 = param_a * 991;
    double local_991_d = param_b * 991;
    char buf_991[128];
    snprintf(buf_991, sizeof(buf_991), "function_%d: %d, %f, %s", 991, local_991, local_991_d, param_c ? param_c : "null");
    return local_991 + (int)local_991_d;
}

typedef struct {
    int field_992;
    long field_992_b;
    double field_992_c;
    char name_992[64];
} StructType992;

int function_992(StructType992 *s, int param_a, double param_b, const char *param_c) {
    int local_992 = param_a * 992;
    double local_992_d = param_b * 992;
    char buf_992[128];
    snprintf(buf_992, sizeof(buf_992), "function_%d: %d, %f, %s", 992, local_992, local_992_d, param_c ? param_c : "null");
    return local_992 + (int)local_992_d;
}

typedef struct {
    int field_993;
    long field_993_b;
    double field_993_c;
    char name_993[64];
} StructType993;

int function_993(StructType993 *s, int param_a, double param_b, const char *param_c) {
    int local_993 = param_a * 993;
    double local_993_d = param_b * 993;
    char buf_993[128];
    snprintf(buf_993, sizeof(buf_993), "function_%d: %d, %f, %s", 993, local_993, local_993_d, param_c ? param_c : "null");
    return local_993 + (int)local_993_d;
}

typedef struct {
    int field_994;
    long field_994_b;
    double field_994_c;
    char name_994[64];
} StructType994;

int function_994(StructType994 *s, int param_a, double param_b, const char *param_c) {
    int local_994 = param_a * 994;
    double local_994_d = param_b * 994;
    char buf_994[128];
    snprintf(buf_994, sizeof(buf_994), "function_%d: %d, %f, %s", 994, local_994, local_994_d, param_c ? param_c : "null");
    return local_994 + (int)local_994_d;
}

typedef struct {
    int field_995;
    long field_995_b;
    double field_995_c;
    char name_995[64];
} StructType995;

int function_995(StructType995 *s, int param_a, double param_b, const char *param_c) {
    int local_995 = param_a * 995;
    double local_995_d = param_b * 995;
    char buf_995[128];
    snprintf(buf_995, sizeof(buf_995), "function_%d: %d, %f, %s", 995, local_995, local_995_d, param_c ? param_c : "null");
    return local_995 + (int)local_995_d;
}

typedef struct {
    int field_996;
    long field_996_b;
    double field_996_c;
    char name_996[64];
} StructType996;

int function_996(StructType996 *s, int param_a, double param_b, const char *param_c) {
    int local_996 = param_a * 996;
    double local_996_d = param_b * 996;
    char buf_996[128];
    snprintf(buf_996, sizeof(buf_996), "function_%d: %d, %f, %s", 996, local_996, local_996_d, param_c ? param_c : "null");
    return local_996 + (int)local_996_d;
}

typedef struct {
    int field_997;
    long field_997_b;
    double field_997_c;
    char name_997[64];
} StructType997;

int function_997(StructType997 *s, int param_a, double param_b, const char *param_c) {
    int local_997 = param_a * 997;
    double local_997_d = param_b * 997;
    char buf_997[128];
    snprintf(buf_997, sizeof(buf_997), "function_%d: %d, %f, %s", 997, local_997, local_997_d, param_c ? param_c : "null");
    return local_997 + (int)local_997_d;
}

typedef struct {
    int field_998;
    long field_998_b;
    double field_998_c;
    char name_998[64];
} StructType998;

int function_998(StructType998 *s, int param_a, double param_b, const char *param_c) {
    int local_998 = param_a * 998;
    double local_998_d = param_b * 998;
    char buf_998[128];
    snprintf(buf_998, sizeof(buf_998), "function_%d: %d, %f, %s", 998, local_998, local_998_d, param_c ? param_c : "null");
    return local_998 + (int)local_998_d;
}

typedef struct {
    int field_999;
    long field_999_b;
    double field_999_c;
    char name_999[64];
} StructType999;

int function_999(StructType999 *s, int param_a, double param_b, const char *param_c) {
    int local_999 = param_a * 999;
    double local_999_d = param_b * 999;
    char buf_999[128];
    snprintf(buf_999, sizeof(buf_999), "function_%d: %d, %f, %s", 999, local_999, local_999_d, param_c ? param_c : "null");
    return local_999 + (int)local_999_d;
}

typedef struct {
    int field_1000;
    long field_1000_b;
    double field_1000_c;
    char name_1000[64];
} StructType1000;

int function_1000(StructType1000 *s, int param_a, double param_b, const char *param_c) {
    int local_1000 = param_a * 1000;
    double local_1000_d = param_b * 1000;
    char buf_1000[128];
    snprintf(buf_1000, sizeof(buf_1000), "function_%d: %d, %f, %s", 1000, local_1000, local_1000_d, param_c ? param_c : "null");
    return local_1000 + (int)local_1000_d;
}

typedef struct {
    int field_1001;
    long field_1001_b;
    double field_1001_c;
    char name_1001[64];
} StructType1001;

int function_1001(StructType1001 *s, int param_a, double param_b, const char *param_c) {
    int local_1001 = param_a * 1001;
    double local_1001_d = param_b * 1001;
    char buf_1001[128];
    snprintf(buf_1001, sizeof(buf_1001), "function_%d: %d, %f, %s", 1001, local_1001, local_1001_d, param_c ? param_c : "null");
    return local_1001 + (int)local_1001_d;
}

typedef struct {
    int field_1002;
    long field_1002_b;
    double field_1002_c;
    char name_1002[64];
} StructType1002;

int function_1002(StructType1002 *s, int param_a, double param_b, const char *param_c) {
    int local_1002 = param_a * 1002;
    double local_1002_d = param_b * 1002;
    char buf_1002[128];
    snprintf(buf_1002, sizeof(buf_1002), "function_%d: %d, %f, %s", 1002, local_1002, local_1002_d, param_c ? param_c : "null");
    return local_1002 + (int)local_1002_d;
}

typedef struct {
    int field_1003;
    long field_1003_b;
    double field_1003_c;
    char name_1003[64];
} StructType1003;

int function_1003(StructType1003 *s, int param_a, double param_b, const char *param_c) {
    int local_1003 = param_a * 1003;
    double local_1003_d = param_b * 1003;
    char buf_1003[128];
    snprintf(buf_1003, sizeof(buf_1003), "function_%d: %d, %f, %s", 1003, local_1003, local_1003_d, param_c ? param_c : "null");
    return local_1003 + (int)local_1003_d;
}

typedef struct {
    int field_1004;
    long field_1004_b;
    double field_1004_c;
    char name_1004[64];
} StructType1004;

int function_1004(StructType1004 *s, int param_a, double param_b, const char *param_c) {
    int local_1004 = param_a * 1004;
    double local_1004_d = param_b * 1004;
    char buf_1004[128];
    snprintf(buf_1004, sizeof(buf_1004), "function_%d: %d, %f, %s", 1004, local_1004, local_1004_d, param_c ? param_c : "null");
    return local_1004 + (int)local_1004_d;
}

typedef struct {
    int field_1005;
    long field_1005_b;
    double field_1005_c;
    char name_1005[64];
} StructType1005;

int function_1005(StructType1005 *s, int param_a, double param_b, const char *param_c) {
    int local_1005 = param_a * 1005;
    double local_1005_d = param_b * 1005;
    char buf_1005[128];
    snprintf(buf_1005, sizeof(buf_1005), "function_%d: %d, %f, %s", 1005, local_1005, local_1005_d, param_c ? param_c : "null");
    return local_1005 + (int)local_1005_d;
}

typedef struct {
    int field_1006;
    long field_1006_b;
    double field_1006_c;
    char name_1006[64];
} StructType1006;

int function_1006(StructType1006 *s, int param_a, double param_b, const char *param_c) {
    int local_1006 = param_a * 1006;
    double local_1006_d = param_b * 1006;
    char buf_1006[128];
    snprintf(buf_1006, sizeof(buf_1006), "function_%d: %d, %f, %s", 1006, local_1006, local_1006_d, param_c ? param_c : "null");
    return local_1006 + (int)local_1006_d;
}

typedef struct {
    int field_1007;
    long field_1007_b;
    double field_1007_c;
    char name_1007[64];
} StructType1007;

int function_1007(StructType1007 *s, int param_a, double param_b, const char *param_c) {
    int local_1007 = param_a * 1007;
    double local_1007_d = param_b * 1007;
    char buf_1007[128];
    snprintf(buf_1007, sizeof(buf_1007), "function_%d: %d, %f, %s", 1007, local_1007, local_1007_d, param_c ? param_c : "null");
    return local_1007 + (int)local_1007_d;
}

typedef struct {
    int field_1008;
    long field_1008_b;
    double field_1008_c;
    char name_1008[64];
} StructType1008;

int function_1008(StructType1008 *s, int param_a, double param_b, const char *param_c) {
    int local_1008 = param_a * 1008;
    double local_1008_d = param_b * 1008;
    char buf_1008[128];
    snprintf(buf_1008, sizeof(buf_1008), "function_%d: %d, %f, %s", 1008, local_1008, local_1008_d, param_c ? param_c : "null");
    return local_1008 + (int)local_1008_d;
}

typedef struct {
    int field_1009;
    long field_1009_b;
    double field_1009_c;
    char name_1009[64];
} StructType1009;

int function_1009(StructType1009 *s, int param_a, double param_b, const char *param_c) {
    int local_1009 = param_a * 1009;
    double local_1009_d = param_b * 1009;
    char buf_1009[128];
    snprintf(buf_1009, sizeof(buf_1009), "function_%d: %d, %f, %s", 1009, local_1009, local_1009_d, param_c ? param_c : "null");
    return local_1009 + (int)local_1009_d;
}

typedef struct {
    int field_1010;
    long field_1010_b;
    double field_1010_c;
    char name_1010[64];
} StructType1010;

int function_1010(StructType1010 *s, int param_a, double param_b, const char *param_c) {
    int local_1010 = param_a * 1010;
    double local_1010_d = param_b * 1010;
    char buf_1010[128];
    snprintf(buf_1010, sizeof(buf_1010), "function_%d: %d, %f, %s", 1010, local_1010, local_1010_d, param_c ? param_c : "null");
    return local_1010 + (int)local_1010_d;
}

typedef struct {
    int field_1011;
    long field_1011_b;
    double field_1011_c;
    char name_1011[64];
} StructType1011;

int function_1011(StructType1011 *s, int param_a, double param_b, const char *param_c) {
    int local_1011 = param_a * 1011;
    double local_1011_d = param_b * 1011;
    char buf_1011[128];
    snprintf(buf_1011, sizeof(buf_1011), "function_%d: %d, %f, %s", 1011, local_1011, local_1011_d, param_c ? param_c : "null");
    return local_1011 + (int)local_1011_d;
}

typedef struct {
    int field_1012;
    long field_1012_b;
    double field_1012_c;
    char name_1012[64];
} StructType1012;

int function_1012(StructType1012 *s, int param_a, double param_b, const char *param_c) {
    int local_1012 = param_a * 1012;
    double local_1012_d = param_b * 1012;
    char buf_1012[128];
    snprintf(buf_1012, sizeof(buf_1012), "function_%d: %d, %f, %s", 1012, local_1012, local_1012_d, param_c ? param_c : "null");
    return local_1012 + (int)local_1012_d;
}

typedef struct {
    int field_1013;
    long field_1013_b;
    double field_1013_c;
    char name_1013[64];
} StructType1013;

int function_1013(StructType1013 *s, int param_a, double param_b, const char *param_c) {
    int local_1013 = param_a * 1013;
    double local_1013_d = param_b * 1013;
    char buf_1013[128];
    snprintf(buf_1013, sizeof(buf_1013), "function_%d: %d, %f, %s", 1013, local_1013, local_1013_d, param_c ? param_c : "null");
    return local_1013 + (int)local_1013_d;
}

typedef struct {
    int field_1014;
    long field_1014_b;
    double field_1014_c;
    char name_1014[64];
} StructType1014;

int function_1014(StructType1014 *s, int param_a, double param_b, const char *param_c) {
    int local_1014 = param_a * 1014;
    double local_1014_d = param_b * 1014;
    char buf_1014[128];
    snprintf(buf_1014, sizeof(buf_1014), "function_%d: %d, %f, %s", 1014, local_1014, local_1014_d, param_c ? param_c : "null");
    return local_1014 + (int)local_1014_d;
}

typedef struct {
    int field_1015;
    long field_1015_b;
    double field_1015_c;
    char name_1015[64];
} StructType1015;

int function_1015(StructType1015 *s, int param_a, double param_b, const char *param_c) {
    int local_1015 = param_a * 1015;
    double local_1015_d = param_b * 1015;
    char buf_1015[128];
    snprintf(buf_1015, sizeof(buf_1015), "function_%d: %d, %f, %s", 1015, local_1015, local_1015_d, param_c ? param_c : "null");
    return local_1015 + (int)local_1015_d;
}

typedef struct {
    int field_1016;
    long field_1016_b;
    double field_1016_c;
    char name_1016[64];
} StructType1016;

int function_1016(StructType1016 *s, int param_a, double param_b, const char *param_c) {
    int local_1016 = param_a * 1016;
    double local_1016_d = param_b * 1016;
    char buf_1016[128];
    snprintf(buf_1016, sizeof(buf_1016), "function_%d: %d, %f, %s", 1016, local_1016, local_1016_d, param_c ? param_c : "null");
    return local_1016 + (int)local_1016_d;
}

typedef struct {
    int field_1017;
    long field_1017_b;
    double field_1017_c;
    char name_1017[64];
} StructType1017;

int function_1017(StructType1017 *s, int param_a, double param_b, const char *param_c) {
    int local_1017 = param_a * 1017;
    double local_1017_d = param_b * 1017;
    char buf_1017[128];
    snprintf(buf_1017, sizeof(buf_1017), "function_%d: %d, %f, %s", 1017, local_1017, local_1017_d, param_c ? param_c : "null");
    return local_1017 + (int)local_1017_d;
}

typedef struct {
    int field_1018;
    long field_1018_b;
    double field_1018_c;
    char name_1018[64];
} StructType1018;

int function_1018(StructType1018 *s, int param_a, double param_b, const char *param_c) {
    int local_1018 = param_a * 1018;
    double local_1018_d = param_b * 1018;
    char buf_1018[128];
    snprintf(buf_1018, sizeof(buf_1018), "function_%d: %d, %f, %s", 1018, local_1018, local_1018_d, param_c ? param_c : "null");
    return local_1018 + (int)local_1018_d;
}

typedef struct {
    int field_1019;
    long field_1019_b;
    double field_1019_c;
    char name_1019[64];
} StructType1019;

int function_1019(StructType1019 *s, int param_a, double param_b, const char *param_c) {
    int local_1019 = param_a * 1019;
    double local_1019_d = param_b * 1019;
    char buf_1019[128];
    snprintf(buf_1019, sizeof(buf_1019), "function_%d: %d, %f, %s", 1019, local_1019, local_1019_d, param_c ? param_c : "null");
    return local_1019 + (int)local_1019_d;
}

typedef struct {
    int field_1020;
    long field_1020_b;
    double field_1020_c;
    char name_1020[64];
} StructType1020;

int function_1020(StructType1020 *s, int param_a, double param_b, const char *param_c) {
    int local_1020 = param_a * 1020;
    double local_1020_d = param_b * 1020;
    char buf_1020[128];
    snprintf(buf_1020, sizeof(buf_1020), "function_%d: %d, %f, %s", 1020, local_1020, local_1020_d, param_c ? param_c : "null");
    return local_1020 + (int)local_1020_d;
}

typedef struct {
    int field_1021;
    long field_1021_b;
    double field_1021_c;
    char name_1021[64];
} StructType1021;

int function_1021(StructType1021 *s, int param_a, double param_b, const char *param_c) {
    int local_1021 = param_a * 1021;
    double local_1021_d = param_b * 1021;
    char buf_1021[128];
    snprintf(buf_1021, sizeof(buf_1021), "function_%d: %d, %f, %s", 1021, local_1021, local_1021_d, param_c ? param_c : "null");
    return local_1021 + (int)local_1021_d;
}

typedef struct {
    int field_1022;
    long field_1022_b;
    double field_1022_c;
    char name_1022[64];
} StructType1022;

int function_1022(StructType1022 *s, int param_a, double param_b, const char *param_c) {
    int local_1022 = param_a * 1022;
    double local_1022_d = param_b * 1022;
    char buf_1022[128];
    snprintf(buf_1022, sizeof(buf_1022), "function_%d: %d, %f, %s", 1022, local_1022, local_1022_d, param_c ? param_c : "null");
    return local_1022 + (int)local_1022_d;
}

typedef struct {
    int field_1023;
    long field_1023_b;
    double field_1023_c;
    char name_1023[64];
} StructType1023;

int function_1023(StructType1023 *s, int param_a, double param_b, const char *param_c) {
    int local_1023 = param_a * 1023;
    double local_1023_d = param_b * 1023;
    char buf_1023[128];
    snprintf(buf_1023, sizeof(buf_1023), "function_%d: %d, %f, %s", 1023, local_1023, local_1023_d, param_c ? param_c : "null");
    return local_1023 + (int)local_1023_d;
}

typedef struct {
    int field_1024;
    long field_1024_b;
    double field_1024_c;
    char name_1024[64];
} StructType1024;

int function_1024(StructType1024 *s, int param_a, double param_b, const char *param_c) {
    int local_1024 = param_a * 1024;
    double local_1024_d = param_b * 1024;
    char buf_1024[128];
    snprintf(buf_1024, sizeof(buf_1024), "function_%d: %d, %f, %s", 1024, local_1024, local_1024_d, param_c ? param_c : "null");
    return local_1024 + (int)local_1024_d;
}

typedef struct {
    int field_1025;
    long field_1025_b;
    double field_1025_c;
    char name_1025[64];
} StructType1025;

int function_1025(StructType1025 *s, int param_a, double param_b, const char *param_c) {
    int local_1025 = param_a * 1025;
    double local_1025_d = param_b * 1025;
    char buf_1025[128];
    snprintf(buf_1025, sizeof(buf_1025), "function_%d: %d, %f, %s", 1025, local_1025, local_1025_d, param_c ? param_c : "null");
    return local_1025 + (int)local_1025_d;
}

typedef struct {
    int field_1026;
    long field_1026_b;
    double field_1026_c;
    char name_1026[64];
} StructType1026;

int function_1026(StructType1026 *s, int param_a, double param_b, const char *param_c) {
    int local_1026 = param_a * 1026;
    double local_1026_d = param_b * 1026;
    char buf_1026[128];
    snprintf(buf_1026, sizeof(buf_1026), "function_%d: %d, %f, %s", 1026, local_1026, local_1026_d, param_c ? param_c : "null");
    return local_1026 + (int)local_1026_d;
}

typedef struct {
    int field_1027;
    long field_1027_b;
    double field_1027_c;
    char name_1027[64];
} StructType1027;

int function_1027(StructType1027 *s, int param_a, double param_b, const char *param_c) {
    int local_1027 = param_a * 1027;
    double local_1027_d = param_b * 1027;
    char buf_1027[128];
    snprintf(buf_1027, sizeof(buf_1027), "function_%d: %d, %f, %s", 1027, local_1027, local_1027_d, param_c ? param_c : "null");
    return local_1027 + (int)local_1027_d;
}

typedef struct {
    int field_1028;
    long field_1028_b;
    double field_1028_c;
    char name_1028[64];
} StructType1028;

int function_1028(StructType1028 *s, int param_a, double param_b, const char *param_c) {
    int local_1028 = param_a * 1028;
    double local_1028_d = param_b * 1028;
    char buf_1028[128];
    snprintf(buf_1028, sizeof(buf_1028), "function_%d: %d, %f, %s", 1028, local_1028, local_1028_d, param_c ? param_c : "null");
    return local_1028 + (int)local_1028_d;
}

typedef struct {
    int field_1029;
    long field_1029_b;
    double field_1029_c;
    char name_1029[64];
} StructType1029;

int function_1029(StructType1029 *s, int param_a, double param_b, const char *param_c) {
    int local_1029 = param_a * 1029;
    double local_1029_d = param_b * 1029;
    char buf_1029[128];
    snprintf(buf_1029, sizeof(buf_1029), "function_%d: %d, %f, %s", 1029, local_1029, local_1029_d, param_c ? param_c : "null");
    return local_1029 + (int)local_1029_d;
}

typedef struct {
    int field_1030;
    long field_1030_b;
    double field_1030_c;
    char name_1030[64];
} StructType1030;

int function_1030(StructType1030 *s, int param_a, double param_b, const char *param_c) {
    int local_1030 = param_a * 1030;
    double local_1030_d = param_b * 1030;
    char buf_1030[128];
    snprintf(buf_1030, sizeof(buf_1030), "function_%d: %d, %f, %s", 1030, local_1030, local_1030_d, param_c ? param_c : "null");
    return local_1030 + (int)local_1030_d;
}

typedef struct {
    int field_1031;
    long field_1031_b;
    double field_1031_c;
    char name_1031[64];
} StructType1031;

int function_1031(StructType1031 *s, int param_a, double param_b, const char *param_c) {
    int local_1031 = param_a * 1031;
    double local_1031_d = param_b * 1031;
    char buf_1031[128];
    snprintf(buf_1031, sizeof(buf_1031), "function_%d: %d, %f, %s", 1031, local_1031, local_1031_d, param_c ? param_c : "null");
    return local_1031 + (int)local_1031_d;
}

typedef struct {
    int field_1032;
    long field_1032_b;
    double field_1032_c;
    char name_1032[64];
} StructType1032;

int function_1032(StructType1032 *s, int param_a, double param_b, const char *param_c) {
    int local_1032 = param_a * 1032;
    double local_1032_d = param_b * 1032;
    char buf_1032[128];
    snprintf(buf_1032, sizeof(buf_1032), "function_%d: %d, %f, %s", 1032, local_1032, local_1032_d, param_c ? param_c : "null");
    return local_1032 + (int)local_1032_d;
}

typedef struct {
    int field_1033;
    long field_1033_b;
    double field_1033_c;
    char name_1033[64];
} StructType1033;

int function_1033(StructType1033 *s, int param_a, double param_b, const char *param_c) {
    int local_1033 = param_a * 1033;
    double local_1033_d = param_b * 1033;
    char buf_1033[128];
    snprintf(buf_1033, sizeof(buf_1033), "function_%d: %d, %f, %s", 1033, local_1033, local_1033_d, param_c ? param_c : "null");
    return local_1033 + (int)local_1033_d;
}

typedef struct {
    int field_1034;
    long field_1034_b;
    double field_1034_c;
    char name_1034[64];
} StructType1034;

int function_1034(StructType1034 *s, int param_a, double param_b, const char *param_c) {
    int local_1034 = param_a * 1034;
    double local_1034_d = param_b * 1034;
    char buf_1034[128];
    snprintf(buf_1034, sizeof(buf_1034), "function_%d: %d, %f, %s", 1034, local_1034, local_1034_d, param_c ? param_c : "null");
    return local_1034 + (int)local_1034_d;
}

typedef struct {
    int field_1035;
    long field_1035_b;
    double field_1035_c;
    char name_1035[64];
} StructType1035;

int function_1035(StructType1035 *s, int param_a, double param_b, const char *param_c) {
    int local_1035 = param_a * 1035;
    double local_1035_d = param_b * 1035;
    char buf_1035[128];
    snprintf(buf_1035, sizeof(buf_1035), "function_%d: %d, %f, %s", 1035, local_1035, local_1035_d, param_c ? param_c : "null");
    return local_1035 + (int)local_1035_d;
}

typedef struct {
    int field_1036;
    long field_1036_b;
    double field_1036_c;
    char name_1036[64];
} StructType1036;

int function_1036(StructType1036 *s, int param_a, double param_b, const char *param_c) {
    int local_1036 = param_a * 1036;
    double local_1036_d = param_b * 1036;
    char buf_1036[128];
    snprintf(buf_1036, sizeof(buf_1036), "function_%d: %d, %f, %s", 1036, local_1036, local_1036_d, param_c ? param_c : "null");
    return local_1036 + (int)local_1036_d;
}

typedef struct {
    int field_1037;
    long field_1037_b;
    double field_1037_c;
    char name_1037[64];
} StructType1037;

int function_1037(StructType1037 *s, int param_a, double param_b, const char *param_c) {
    int local_1037 = param_a * 1037;
    double local_1037_d = param_b * 1037;
    char buf_1037[128];
    snprintf(buf_1037, sizeof(buf_1037), "function_%d: %d, %f, %s", 1037, local_1037, local_1037_d, param_c ? param_c : "null");
    return local_1037 + (int)local_1037_d;
}

typedef struct {
    int field_1038;
    long field_1038_b;
    double field_1038_c;
    char name_1038[64];
} StructType1038;

int function_1038(StructType1038 *s, int param_a, double param_b, const char *param_c) {
    int local_1038 = param_a * 1038;
    double local_1038_d = param_b * 1038;
    char buf_1038[128];
    snprintf(buf_1038, sizeof(buf_1038), "function_%d: %d, %f, %s", 1038, local_1038, local_1038_d, param_c ? param_c : "null");
    return local_1038 + (int)local_1038_d;
}

typedef struct {
    int field_1039;
    long field_1039_b;
    double field_1039_c;
    char name_1039[64];
} StructType1039;

int function_1039(StructType1039 *s, int param_a, double param_b, const char *param_c) {
    int local_1039 = param_a * 1039;
    double local_1039_d = param_b * 1039;
    char buf_1039[128];
    snprintf(buf_1039, sizeof(buf_1039), "function_%d: %d, %f, %s", 1039, local_1039, local_1039_d, param_c ? param_c : "null");
    return local_1039 + (int)local_1039_d;
}

typedef struct {
    int field_1040;
    long field_1040_b;
    double field_1040_c;
    char name_1040[64];
} StructType1040;

int function_1040(StructType1040 *s, int param_a, double param_b, const char *param_c) {
    int local_1040 = param_a * 1040;
    double local_1040_d = param_b * 1040;
    char buf_1040[128];
    snprintf(buf_1040, sizeof(buf_1040), "function_%d: %d, %f, %s", 1040, local_1040, local_1040_d, param_c ? param_c : "null");
    return local_1040 + (int)local_1040_d;
}

typedef struct {
    int field_1041;
    long field_1041_b;
    double field_1041_c;
    char name_1041[64];
} StructType1041;

int function_1041(StructType1041 *s, int param_a, double param_b, const char *param_c) {
    int local_1041 = param_a * 1041;
    double local_1041_d = param_b * 1041;
    char buf_1041[128];
    snprintf(buf_1041, sizeof(buf_1041), "function_%d: %d, %f, %s", 1041, local_1041, local_1041_d, param_c ? param_c : "null");
    return local_1041 + (int)local_1041_d;
}

typedef struct {
    int field_1042;
    long field_1042_b;
    double field_1042_c;
    char name_1042[64];
} StructType1042;

int function_1042(StructType1042 *s, int param_a, double param_b, const char *param_c) {
    int local_1042 = param_a * 1042;
    double local_1042_d = param_b * 1042;
    char buf_1042[128];
    snprintf(buf_1042, sizeof(buf_1042), "function_%d: %d, %f, %s", 1042, local_1042, local_1042_d, param_c ? param_c : "null");
    return local_1042 + (int)local_1042_d;
}

typedef struct {
    int field_1043;
    long field_1043_b;
    double field_1043_c;
    char name_1043[64];
} StructType1043;

int function_1043(StructType1043 *s, int param_a, double param_b, const char *param_c) {
    int local_1043 = param_a * 1043;
    double local_1043_d = param_b * 1043;
    char buf_1043[128];
    snprintf(buf_1043, sizeof(buf_1043), "function_%d: %d, %f, %s", 1043, local_1043, local_1043_d, param_c ? param_c : "null");
    return local_1043 + (int)local_1043_d;
}

typedef struct {
    int field_1044;
    long field_1044_b;
    double field_1044_c;
    char name_1044[64];
} StructType1044;

int function_1044(StructType1044 *s, int param_a, double param_b, const char *param_c) {
    int local_1044 = param_a * 1044;
    double local_1044_d = param_b * 1044;
    char buf_1044[128];
    snprintf(buf_1044, sizeof(buf_1044), "function_%d: %d, %f, %s", 1044, local_1044, local_1044_d, param_c ? param_c : "null");
    return local_1044 + (int)local_1044_d;
}

typedef struct {
    int field_1045;
    long field_1045_b;
    double field_1045_c;
    char name_1045[64];
} StructType1045;

int function_1045(StructType1045 *s, int param_a, double param_b, const char *param_c) {
    int local_1045 = param_a * 1045;
    double local_1045_d = param_b * 1045;
    char buf_1045[128];
    snprintf(buf_1045, sizeof(buf_1045), "function_%d: %d, %f, %s", 1045, local_1045, local_1045_d, param_c ? param_c : "null");
    return local_1045 + (int)local_1045_d;
}

typedef struct {
    int field_1046;
    long field_1046_b;
    double field_1046_c;
    char name_1046[64];
} StructType1046;

int function_1046(StructType1046 *s, int param_a, double param_b, const char *param_c) {
    int local_1046 = param_a * 1046;
    double local_1046_d = param_b * 1046;
    char buf_1046[128];
    snprintf(buf_1046, sizeof(buf_1046), "function_%d: %d, %f, %s", 1046, local_1046, local_1046_d, param_c ? param_c : "null");
    return local_1046 + (int)local_1046_d;
}

typedef struct {
    int field_1047;
    long field_1047_b;
    double field_1047_c;
    char name_1047[64];
} StructType1047;

int function_1047(StructType1047 *s, int param_a, double param_b, const char *param_c) {
    int local_1047 = param_a * 1047;
    double local_1047_d = param_b * 1047;
    char buf_1047[128];
    snprintf(buf_1047, sizeof(buf_1047), "function_%d: %d, %f, %s", 1047, local_1047, local_1047_d, param_c ? param_c : "null");
    return local_1047 + (int)local_1047_d;
}

typedef struct {
    int field_1048;
    long field_1048_b;
    double field_1048_c;
    char name_1048[64];
} StructType1048;

int function_1048(StructType1048 *s, int param_a, double param_b, const char *param_c) {
    int local_1048 = param_a * 1048;
    double local_1048_d = param_b * 1048;
    char buf_1048[128];
    snprintf(buf_1048, sizeof(buf_1048), "function_%d: %d, %f, %s", 1048, local_1048, local_1048_d, param_c ? param_c : "null");
    return local_1048 + (int)local_1048_d;
}

typedef struct {
    int field_1049;
    long field_1049_b;
    double field_1049_c;
    char name_1049[64];
} StructType1049;

int function_1049(StructType1049 *s, int param_a, double param_b, const char *param_c) {
    int local_1049 = param_a * 1049;
    double local_1049_d = param_b * 1049;
    char buf_1049[128];
    snprintf(buf_1049, sizeof(buf_1049), "function_%d: %d, %f, %s", 1049, local_1049, local_1049_d, param_c ? param_c : "null");
    return local_1049 + (int)local_1049_d;
}

typedef struct {
    int field_1050;
    long field_1050_b;
    double field_1050_c;
    char name_1050[64];
} StructType1050;

int function_1050(StructType1050 *s, int param_a, double param_b, const char *param_c) {
    int local_1050 = param_a * 1050;
    double local_1050_d = param_b * 1050;
    char buf_1050[128];
    snprintf(buf_1050, sizeof(buf_1050), "function_%d: %d, %f, %s", 1050, local_1050, local_1050_d, param_c ? param_c : "null");
    return local_1050 + (int)local_1050_d;
}

typedef struct {
    int field_1051;
    long field_1051_b;
    double field_1051_c;
    char name_1051[64];
} StructType1051;

int function_1051(StructType1051 *s, int param_a, double param_b, const char *param_c) {
    int local_1051 = param_a * 1051;
    double local_1051_d = param_b * 1051;
    char buf_1051[128];
    snprintf(buf_1051, sizeof(buf_1051), "function_%d: %d, %f, %s", 1051, local_1051, local_1051_d, param_c ? param_c : "null");
    return local_1051 + (int)local_1051_d;
}

typedef struct {
    int field_1052;
    long field_1052_b;
    double field_1052_c;
    char name_1052[64];
} StructType1052;

int function_1052(StructType1052 *s, int param_a, double param_b, const char *param_c) {
    int local_1052 = param_a * 1052;
    double local_1052_d = param_b * 1052;
    char buf_1052[128];
    snprintf(buf_1052, sizeof(buf_1052), "function_%d: %d, %f, %s", 1052, local_1052, local_1052_d, param_c ? param_c : "null");
    return local_1052 + (int)local_1052_d;
}

typedef struct {
    int field_1053;
    long field_1053_b;
    double field_1053_c;
    char name_1053[64];
} StructType1053;

int function_1053(StructType1053 *s, int param_a, double param_b, const char *param_c) {
    int local_1053 = param_a * 1053;
    double local_1053_d = param_b * 1053;
    char buf_1053[128];
    snprintf(buf_1053, sizeof(buf_1053), "function_%d: %d, %f, %s", 1053, local_1053, local_1053_d, param_c ? param_c : "null");
    return local_1053 + (int)local_1053_d;
}

typedef struct {
    int field_1054;
    long field_1054_b;
    double field_1054_c;
    char name_1054[64];
} StructType1054;

int function_1054(StructType1054 *s, int param_a, double param_b, const char *param_c) {
    int local_1054 = param_a * 1054;
    double local_1054_d = param_b * 1054;
    char buf_1054[128];
    snprintf(buf_1054, sizeof(buf_1054), "function_%d: %d, %f, %s", 1054, local_1054, local_1054_d, param_c ? param_c : "null");
    return local_1054 + (int)local_1054_d;
}

typedef struct {
    int field_1055;
    long field_1055_b;
    double field_1055_c;
    char name_1055[64];
} StructType1055;

int function_1055(StructType1055 *s, int param_a, double param_b, const char *param_c) {
    int local_1055 = param_a * 1055;
    double local_1055_d = param_b * 1055;
    char buf_1055[128];
    snprintf(buf_1055, sizeof(buf_1055), "function_%d: %d, %f, %s", 1055, local_1055, local_1055_d, param_c ? param_c : "null");
    return local_1055 + (int)local_1055_d;
}

typedef struct {
    int field_1056;
    long field_1056_b;
    double field_1056_c;
    char name_1056[64];
} StructType1056;

int function_1056(StructType1056 *s, int param_a, double param_b, const char *param_c) {
    int local_1056 = param_a * 1056;
    double local_1056_d = param_b * 1056;
    char buf_1056[128];
    snprintf(buf_1056, sizeof(buf_1056), "function_%d: %d, %f, %s", 1056, local_1056, local_1056_d, param_c ? param_c : "null");
    return local_1056 + (int)local_1056_d;
}

typedef struct {
    int field_1057;
    long field_1057_b;
    double field_1057_c;
    char name_1057[64];
} StructType1057;

int function_1057(StructType1057 *s, int param_a, double param_b, const char *param_c) {
    int local_1057 = param_a * 1057;
    double local_1057_d = param_b * 1057;
    char buf_1057[128];
    snprintf(buf_1057, sizeof(buf_1057), "function_%d: %d, %f, %s", 1057, local_1057, local_1057_d, param_c ? param_c : "null");
    return local_1057 + (int)local_1057_d;
}

typedef struct {
    int field_1058;
    long field_1058_b;
    double field_1058_c;
    char name_1058[64];
} StructType1058;

int function_1058(StructType1058 *s, int param_a, double param_b, const char *param_c) {
    int local_1058 = param_a * 1058;
    double local_1058_d = param_b * 1058;
    char buf_1058[128];
    snprintf(buf_1058, sizeof(buf_1058), "function_%d: %d, %f, %s", 1058, local_1058, local_1058_d, param_c ? param_c : "null");
    return local_1058 + (int)local_1058_d;
}

typedef struct {
    int field_1059;
    long field_1059_b;
    double field_1059_c;
    char name_1059[64];
} StructType1059;

int function_1059(StructType1059 *s, int param_a, double param_b, const char *param_c) {
    int local_1059 = param_a * 1059;
    double local_1059_d = param_b * 1059;
    char buf_1059[128];
    snprintf(buf_1059, sizeof(buf_1059), "function_%d: %d, %f, %s", 1059, local_1059, local_1059_d, param_c ? param_c : "null");
    return local_1059 + (int)local_1059_d;
}

typedef struct {
    int field_1060;
    long field_1060_b;
    double field_1060_c;
    char name_1060[64];
} StructType1060;

int function_1060(StructType1060 *s, int param_a, double param_b, const char *param_c) {
    int local_1060 = param_a * 1060;
    double local_1060_d = param_b * 1060;
    char buf_1060[128];
    snprintf(buf_1060, sizeof(buf_1060), "function_%d: %d, %f, %s", 1060, local_1060, local_1060_d, param_c ? param_c : "null");
    return local_1060 + (int)local_1060_d;
}

typedef struct {
    int field_1061;
    long field_1061_b;
    double field_1061_c;
    char name_1061[64];
} StructType1061;

int function_1061(StructType1061 *s, int param_a, double param_b, const char *param_c) {
    int local_1061 = param_a * 1061;
    double local_1061_d = param_b * 1061;
    char buf_1061[128];
    snprintf(buf_1061, sizeof(buf_1061), "function_%d: %d, %f, %s", 1061, local_1061, local_1061_d, param_c ? param_c : "null");
    return local_1061 + (int)local_1061_d;
}

typedef struct {
    int field_1062;
    long field_1062_b;
    double field_1062_c;
    char name_1062[64];
} StructType1062;

int function_1062(StructType1062 *s, int param_a, double param_b, const char *param_c) {
    int local_1062 = param_a * 1062;
    double local_1062_d = param_b * 1062;
    char buf_1062[128];
    snprintf(buf_1062, sizeof(buf_1062), "function_%d: %d, %f, %s", 1062, local_1062, local_1062_d, param_c ? param_c : "null");
    return local_1062 + (int)local_1062_d;
}

typedef struct {
    int field_1063;
    long field_1063_b;
    double field_1063_c;
    char name_1063[64];
} StructType1063;

int function_1063(StructType1063 *s, int param_a, double param_b, const char *param_c) {
    int local_1063 = param_a * 1063;
    double local_1063_d = param_b * 1063;
    char buf_1063[128];
    snprintf(buf_1063, sizeof(buf_1063), "function_%d: %d, %f, %s", 1063, local_1063, local_1063_d, param_c ? param_c : "null");
    return local_1063 + (int)local_1063_d;
}

typedef struct {
    int field_1064;
    long field_1064_b;
    double field_1064_c;
    char name_1064[64];
} StructType1064;

int function_1064(StructType1064 *s, int param_a, double param_b, const char *param_c) {
    int local_1064 = param_a * 1064;
    double local_1064_d = param_b * 1064;
    char buf_1064[128];
    snprintf(buf_1064, sizeof(buf_1064), "function_%d: %d, %f, %s", 1064, local_1064, local_1064_d, param_c ? param_c : "null");
    return local_1064 + (int)local_1064_d;
}

typedef struct {
    int field_1065;
    long field_1065_b;
    double field_1065_c;
    char name_1065[64];
} StructType1065;

int function_1065(StructType1065 *s, int param_a, double param_b, const char *param_c) {
    int local_1065 = param_a * 1065;
    double local_1065_d = param_b * 1065;
    char buf_1065[128];
    snprintf(buf_1065, sizeof(buf_1065), "function_%d: %d, %f, %s", 1065, local_1065, local_1065_d, param_c ? param_c : "null");
    return local_1065 + (int)local_1065_d;
}

typedef struct {
    int field_1066;
    long field_1066_b;
    double field_1066_c;
    char name_1066[64];
} StructType1066;

int function_1066(StructType1066 *s, int param_a, double param_b, const char *param_c) {
    int local_1066 = param_a * 1066;
    double local_1066_d = param_b * 1066;
    char buf_1066[128];
    snprintf(buf_1066, sizeof(buf_1066), "function_%d: %d, %f, %s", 1066, local_1066, local_1066_d, param_c ? param_c : "null");
    return local_1066 + (int)local_1066_d;
}

typedef struct {
    int field_1067;
    long field_1067_b;
    double field_1067_c;
    char name_1067[64];
} StructType1067;

int function_1067(StructType1067 *s, int param_a, double param_b, const char *param_c) {
    int local_1067 = param_a * 1067;
    double local_1067_d = param_b * 1067;
    char buf_1067[128];
    snprintf(buf_1067, sizeof(buf_1067), "function_%d: %d, %f, %s", 1067, local_1067, local_1067_d, param_c ? param_c : "null");
    return local_1067 + (int)local_1067_d;
}

typedef struct {
    int field_1068;
    long field_1068_b;
    double field_1068_c;
    char name_1068[64];
} StructType1068;

int function_1068(StructType1068 *s, int param_a, double param_b, const char *param_c) {
    int local_1068 = param_a * 1068;
    double local_1068_d = param_b * 1068;
    char buf_1068[128];
    snprintf(buf_1068, sizeof(buf_1068), "function_%d: %d, %f, %s", 1068, local_1068, local_1068_d, param_c ? param_c : "null");
    return local_1068 + (int)local_1068_d;
}

typedef struct {
    int field_1069;
    long field_1069_b;
    double field_1069_c;
    char name_1069[64];
} StructType1069;

int function_1069(StructType1069 *s, int param_a, double param_b, const char *param_c) {
    int local_1069 = param_a * 1069;
    double local_1069_d = param_b * 1069;
    char buf_1069[128];
    snprintf(buf_1069, sizeof(buf_1069), "function_%d: %d, %f, %s", 1069, local_1069, local_1069_d, param_c ? param_c : "null");
    return local_1069 + (int)local_1069_d;
}

typedef struct {
    int field_1070;
    long field_1070_b;
    double field_1070_c;
    char name_1070[64];
} StructType1070;

int function_1070(StructType1070 *s, int param_a, double param_b, const char *param_c) {
    int local_1070 = param_a * 1070;
    double local_1070_d = param_b * 1070;
    char buf_1070[128];
    snprintf(buf_1070, sizeof(buf_1070), "function_%d: %d, %f, %s", 1070, local_1070, local_1070_d, param_c ? param_c : "null");
    return local_1070 + (int)local_1070_d;
}

typedef struct {
    int field_1071;
    long field_1071_b;
    double field_1071_c;
    char name_1071[64];
} StructType1071;

int function_1071(StructType1071 *s, int param_a, double param_b, const char *param_c) {
    int local_1071 = param_a * 1071;
    double local_1071_d = param_b * 1071;
    char buf_1071[128];
    snprintf(buf_1071, sizeof(buf_1071), "function_%d: %d, %f, %s", 1071, local_1071, local_1071_d, param_c ? param_c : "null");
    return local_1071 + (int)local_1071_d;
}

typedef struct {
    int field_1072;
    long field_1072_b;
    double field_1072_c;
    char name_1072[64];
} StructType1072;

int function_1072(StructType1072 *s, int param_a, double param_b, const char *param_c) {
    int local_1072 = param_a * 1072;
    double local_1072_d = param_b * 1072;
    char buf_1072[128];
    snprintf(buf_1072, sizeof(buf_1072), "function_%d: %d, %f, %s", 1072, local_1072, local_1072_d, param_c ? param_c : "null");
    return local_1072 + (int)local_1072_d;
}

typedef struct {
    int field_1073;
    long field_1073_b;
    double field_1073_c;
    char name_1073[64];
} StructType1073;

int function_1073(StructType1073 *s, int param_a, double param_b, const char *param_c) {
    int local_1073 = param_a * 1073;
    double local_1073_d = param_b * 1073;
    char buf_1073[128];
    snprintf(buf_1073, sizeof(buf_1073), "function_%d: %d, %f, %s", 1073, local_1073, local_1073_d, param_c ? param_c : "null");
    return local_1073 + (int)local_1073_d;
}

typedef struct {
    int field_1074;
    long field_1074_b;
    double field_1074_c;
    char name_1074[64];
} StructType1074;

int function_1074(StructType1074 *s, int param_a, double param_b, const char *param_c) {
    int local_1074 = param_a * 1074;
    double local_1074_d = param_b * 1074;
    char buf_1074[128];
    snprintf(buf_1074, sizeof(buf_1074), "function_%d: %d, %f, %s", 1074, local_1074, local_1074_d, param_c ? param_c : "null");
    return local_1074 + (int)local_1074_d;
}

typedef struct {
    int field_1075;
    long field_1075_b;
    double field_1075_c;
    char name_1075[64];
} StructType1075;

int function_1075(StructType1075 *s, int param_a, double param_b, const char *param_c) {
    int local_1075 = param_a * 1075;
    double local_1075_d = param_b * 1075;
    char buf_1075[128];
    snprintf(buf_1075, sizeof(buf_1075), "function_%d: %d, %f, %s", 1075, local_1075, local_1075_d, param_c ? param_c : "null");
    return local_1075 + (int)local_1075_d;
}

typedef struct {
    int field_1076;
    long field_1076_b;
    double field_1076_c;
    char name_1076[64];
} StructType1076;

int function_1076(StructType1076 *s, int param_a, double param_b, const char *param_c) {
    int local_1076 = param_a * 1076;
    double local_1076_d = param_b * 1076;
    char buf_1076[128];
    snprintf(buf_1076, sizeof(buf_1076), "function_%d: %d, %f, %s", 1076, local_1076, local_1076_d, param_c ? param_c : "null");
    return local_1076 + (int)local_1076_d;
}

typedef struct {
    int field_1077;
    long field_1077_b;
    double field_1077_c;
    char name_1077[64];
} StructType1077;

int function_1077(StructType1077 *s, int param_a, double param_b, const char *param_c) {
    int local_1077 = param_a * 1077;
    double local_1077_d = param_b * 1077;
    char buf_1077[128];
    snprintf(buf_1077, sizeof(buf_1077), "function_%d: %d, %f, %s", 1077, local_1077, local_1077_d, param_c ? param_c : "null");
    return local_1077 + (int)local_1077_d;
}

typedef struct {
    int field_1078;
    long field_1078_b;
    double field_1078_c;
    char name_1078[64];
} StructType1078;

int function_1078(StructType1078 *s, int param_a, double param_b, const char *param_c) {
    int local_1078 = param_a * 1078;
    double local_1078_d = param_b * 1078;
    char buf_1078[128];
    snprintf(buf_1078, sizeof(buf_1078), "function_%d: %d, %f, %s", 1078, local_1078, local_1078_d, param_c ? param_c : "null");
    return local_1078 + (int)local_1078_d;
}

typedef struct {
    int field_1079;
    long field_1079_b;
    double field_1079_c;
    char name_1079[64];
} StructType1079;

int function_1079(StructType1079 *s, int param_a, double param_b, const char *param_c) {
    int local_1079 = param_a * 1079;
    double local_1079_d = param_b * 1079;
    char buf_1079[128];
    snprintf(buf_1079, sizeof(buf_1079), "function_%d: %d, %f, %s", 1079, local_1079, local_1079_d, param_c ? param_c : "null");
    return local_1079 + (int)local_1079_d;
}

typedef struct {
    int field_1080;
    long field_1080_b;
    double field_1080_c;
    char name_1080[64];
} StructType1080;

int function_1080(StructType1080 *s, int param_a, double param_b, const char *param_c) {
    int local_1080 = param_a * 1080;
    double local_1080_d = param_b * 1080;
    char buf_1080[128];
    snprintf(buf_1080, sizeof(buf_1080), "function_%d: %d, %f, %s", 1080, local_1080, local_1080_d, param_c ? param_c : "null");
    return local_1080 + (int)local_1080_d;
}

typedef struct {
    int field_1081;
    long field_1081_b;
    double field_1081_c;
    char name_1081[64];
} StructType1081;

int function_1081(StructType1081 *s, int param_a, double param_b, const char *param_c) {
    int local_1081 = param_a * 1081;
    double local_1081_d = param_b * 1081;
    char buf_1081[128];
    snprintf(buf_1081, sizeof(buf_1081), "function_%d: %d, %f, %s", 1081, local_1081, local_1081_d, param_c ? param_c : "null");
    return local_1081 + (int)local_1081_d;
}

typedef struct {
    int field_1082;
    long field_1082_b;
    double field_1082_c;
    char name_1082[64];
} StructType1082;

int function_1082(StructType1082 *s, int param_a, double param_b, const char *param_c) {
    int local_1082 = param_a * 1082;
    double local_1082_d = param_b * 1082;
    char buf_1082[128];
    snprintf(buf_1082, sizeof(buf_1082), "function_%d: %d, %f, %s", 1082, local_1082, local_1082_d, param_c ? param_c : "null");
    return local_1082 + (int)local_1082_d;
}

typedef struct {
    int field_1083;
    long field_1083_b;
    double field_1083_c;
    char name_1083[64];
} StructType1083;

int function_1083(StructType1083 *s, int param_a, double param_b, const char *param_c) {
    int local_1083 = param_a * 1083;
    double local_1083_d = param_b * 1083;
    char buf_1083[128];
    snprintf(buf_1083, sizeof(buf_1083), "function_%d: %d, %f, %s", 1083, local_1083, local_1083_d, param_c ? param_c : "null");
    return local_1083 + (int)local_1083_d;
}

typedef struct {
    int field_1084;
    long field_1084_b;
    double field_1084_c;
    char name_1084[64];
} StructType1084;

int function_1084(StructType1084 *s, int param_a, double param_b, const char *param_c) {
    int local_1084 = param_a * 1084;
    double local_1084_d = param_b * 1084;
    char buf_1084[128];
    snprintf(buf_1084, sizeof(buf_1084), "function_%d: %d, %f, %s", 1084, local_1084, local_1084_d, param_c ? param_c : "null");
    return local_1084 + (int)local_1084_d;
}

typedef struct {
    int field_1085;
    long field_1085_b;
    double field_1085_c;
    char name_1085[64];
} StructType1085;

int function_1085(StructType1085 *s, int param_a, double param_b, const char *param_c) {
    int local_1085 = param_a * 1085;
    double local_1085_d = param_b * 1085;
    char buf_1085[128];
    snprintf(buf_1085, sizeof(buf_1085), "function_%d: %d, %f, %s", 1085, local_1085, local_1085_d, param_c ? param_c : "null");
    return local_1085 + (int)local_1085_d;
}

typedef struct {
    int field_1086;
    long field_1086_b;
    double field_1086_c;
    char name_1086[64];
} StructType1086;

int function_1086(StructType1086 *s, int param_a, double param_b, const char *param_c) {
    int local_1086 = param_a * 1086;
    double local_1086_d = param_b * 1086;
    char buf_1086[128];
    snprintf(buf_1086, sizeof(buf_1086), "function_%d: %d, %f, %s", 1086, local_1086, local_1086_d, param_c ? param_c : "null");
    return local_1086 + (int)local_1086_d;
}

typedef struct {
    int field_1087;
    long field_1087_b;
    double field_1087_c;
    char name_1087[64];
} StructType1087;

int function_1087(StructType1087 *s, int param_a, double param_b, const char *param_c) {
    int local_1087 = param_a * 1087;
    double local_1087_d = param_b * 1087;
    char buf_1087[128];
    snprintf(buf_1087, sizeof(buf_1087), "function_%d: %d, %f, %s", 1087, local_1087, local_1087_d, param_c ? param_c : "null");
    return local_1087 + (int)local_1087_d;
}

typedef struct {
    int field_1088;
    long field_1088_b;
    double field_1088_c;
    char name_1088[64];
} StructType1088;

int function_1088(StructType1088 *s, int param_a, double param_b, const char *param_c) {
    int local_1088 = param_a * 1088;
    double local_1088_d = param_b * 1088;
    char buf_1088[128];
    snprintf(buf_1088, sizeof(buf_1088), "function_%d: %d, %f, %s", 1088, local_1088, local_1088_d, param_c ? param_c : "null");
    return local_1088 + (int)local_1088_d;
}

typedef struct {
    int field_1089;
    long field_1089_b;
    double field_1089_c;
    char name_1089[64];
} StructType1089;

int function_1089(StructType1089 *s, int param_a, double param_b, const char *param_c) {
    int local_1089 = param_a * 1089;
    double local_1089_d = param_b * 1089;
    char buf_1089[128];
    snprintf(buf_1089, sizeof(buf_1089), "function_%d: %d, %f, %s", 1089, local_1089, local_1089_d, param_c ? param_c : "null");
    return local_1089 + (int)local_1089_d;
}

typedef struct {
    int field_1090;
    long field_1090_b;
    double field_1090_c;
    char name_1090[64];
} StructType1090;

int function_1090(StructType1090 *s, int param_a, double param_b, const char *param_c) {
    int local_1090 = param_a * 1090;
    double local_1090_d = param_b * 1090;
    char buf_1090[128];
    snprintf(buf_1090, sizeof(buf_1090), "function_%d: %d, %f, %s", 1090, local_1090, local_1090_d, param_c ? param_c : "null");
    return local_1090 + (int)local_1090_d;
}

typedef struct {
    int field_1091;
    long field_1091_b;
    double field_1091_c;
    char name_1091[64];
} StructType1091;

int function_1091(StructType1091 *s, int param_a, double param_b, const char *param_c) {
    int local_1091 = param_a * 1091;
    double local_1091_d = param_b * 1091;
    char buf_1091[128];
    snprintf(buf_1091, sizeof(buf_1091), "function_%d: %d, %f, %s", 1091, local_1091, local_1091_d, param_c ? param_c : "null");
    return local_1091 + (int)local_1091_d;
}

typedef struct {
    int field_1092;
    long field_1092_b;
    double field_1092_c;
    char name_1092[64];
} StructType1092;

int function_1092(StructType1092 *s, int param_a, double param_b, const char *param_c) {
    int local_1092 = param_a * 1092;
    double local_1092_d = param_b * 1092;
    char buf_1092[128];
    snprintf(buf_1092, sizeof(buf_1092), "function_%d: %d, %f, %s", 1092, local_1092, local_1092_d, param_c ? param_c : "null");
    return local_1092 + (int)local_1092_d;
}

typedef struct {
    int field_1093;
    long field_1093_b;
    double field_1093_c;
    char name_1093[64];
} StructType1093;

int function_1093(StructType1093 *s, int param_a, double param_b, const char *param_c) {
    int local_1093 = param_a * 1093;
    double local_1093_d = param_b * 1093;
    char buf_1093[128];
    snprintf(buf_1093, sizeof(buf_1093), "function_%d: %d, %f, %s", 1093, local_1093, local_1093_d, param_c ? param_c : "null");
    return local_1093 + (int)local_1093_d;
}

typedef struct {
    int field_1094;
    long field_1094_b;
    double field_1094_c;
    char name_1094[64];
} StructType1094;

int function_1094(StructType1094 *s, int param_a, double param_b, const char *param_c) {
    int local_1094 = param_a * 1094;
    double local_1094_d = param_b * 1094;
    char buf_1094[128];
    snprintf(buf_1094, sizeof(buf_1094), "function_%d: %d, %f, %s", 1094, local_1094, local_1094_d, param_c ? param_c : "null");
    return local_1094 + (int)local_1094_d;
}

typedef struct {
    int field_1095;
    long field_1095_b;
    double field_1095_c;
    char name_1095[64];
} StructType1095;

int function_1095(StructType1095 *s, int param_a, double param_b, const char *param_c) {
    int local_1095 = param_a * 1095;
    double local_1095_d = param_b * 1095;
    char buf_1095[128];
    snprintf(buf_1095, sizeof(buf_1095), "function_%d: %d, %f, %s", 1095, local_1095, local_1095_d, param_c ? param_c : "null");
    return local_1095 + (int)local_1095_d;
}

typedef struct {
    int field_1096;
    long field_1096_b;
    double field_1096_c;
    char name_1096[64];
} StructType1096;

int function_1096(StructType1096 *s, int param_a, double param_b, const char *param_c) {
    int local_1096 = param_a * 1096;
    double local_1096_d = param_b * 1096;
    char buf_1096[128];
    snprintf(buf_1096, sizeof(buf_1096), "function_%d: %d, %f, %s", 1096, local_1096, local_1096_d, param_c ? param_c : "null");
    return local_1096 + (int)local_1096_d;
}

typedef struct {
    int field_1097;
    long field_1097_b;
    double field_1097_c;
    char name_1097[64];
} StructType1097;

int function_1097(StructType1097 *s, int param_a, double param_b, const char *param_c) {
    int local_1097 = param_a * 1097;
    double local_1097_d = param_b * 1097;
    char buf_1097[128];
    snprintf(buf_1097, sizeof(buf_1097), "function_%d: %d, %f, %s", 1097, local_1097, local_1097_d, param_c ? param_c : "null");
    return local_1097 + (int)local_1097_d;
}

typedef struct {
    int field_1098;
    long field_1098_b;
    double field_1098_c;
    char name_1098[64];
} StructType1098;

int function_1098(StructType1098 *s, int param_a, double param_b, const char *param_c) {
    int local_1098 = param_a * 1098;
    double local_1098_d = param_b * 1098;
    char buf_1098[128];
    snprintf(buf_1098, sizeof(buf_1098), "function_%d: %d, %f, %s", 1098, local_1098, local_1098_d, param_c ? param_c : "null");
    return local_1098 + (int)local_1098_d;
}

typedef struct {
    int field_1099;
    long field_1099_b;
    double field_1099_c;
    char name_1099[64];
} StructType1099;

int function_1099(StructType1099 *s, int param_a, double param_b, const char *param_c) {
    int local_1099 = param_a * 1099;
    double local_1099_d = param_b * 1099;
    char buf_1099[128];
    snprintf(buf_1099, sizeof(buf_1099), "function_%d: %d, %f, %s", 1099, local_1099, local_1099_d, param_c ? param_c : "null");
    return local_1099 + (int)local_1099_d;
}

typedef struct {
    int field_1100;
    long field_1100_b;
    double field_1100_c;
    char name_1100[64];
} StructType1100;

int function_1100(StructType1100 *s, int param_a, double param_b, const char *param_c) {
    int local_1100 = param_a * 1100;
    double local_1100_d = param_b * 1100;
    char buf_1100[128];
    snprintf(buf_1100, sizeof(buf_1100), "function_%d: %d, %f, %s", 1100, local_1100, local_1100_d, param_c ? param_c : "null");
    return local_1100 + (int)local_1100_d;
}

typedef struct {
    int field_1101;
    long field_1101_b;
    double field_1101_c;
    char name_1101[64];
} StructType1101;

int function_1101(StructType1101 *s, int param_a, double param_b, const char *param_c) {
    int local_1101 = param_a * 1101;
    double local_1101_d = param_b * 1101;
    char buf_1101[128];
    snprintf(buf_1101, sizeof(buf_1101), "function_%d: %d, %f, %s", 1101, local_1101, local_1101_d, param_c ? param_c : "null");
    return local_1101 + (int)local_1101_d;
}

typedef struct {
    int field_1102;
    long field_1102_b;
    double field_1102_c;
    char name_1102[64];
} StructType1102;

int function_1102(StructType1102 *s, int param_a, double param_b, const char *param_c) {
    int local_1102 = param_a * 1102;
    double local_1102_d = param_b * 1102;
    char buf_1102[128];
    snprintf(buf_1102, sizeof(buf_1102), "function_%d: %d, %f, %s", 1102, local_1102, local_1102_d, param_c ? param_c : "null");
    return local_1102 + (int)local_1102_d;
}

typedef struct {
    int field_1103;
    long field_1103_b;
    double field_1103_c;
    char name_1103[64];
} StructType1103;

int function_1103(StructType1103 *s, int param_a, double param_b, const char *param_c) {
    int local_1103 = param_a * 1103;
    double local_1103_d = param_b * 1103;
    char buf_1103[128];
    snprintf(buf_1103, sizeof(buf_1103), "function_%d: %d, %f, %s", 1103, local_1103, local_1103_d, param_c ? param_c : "null");
    return local_1103 + (int)local_1103_d;
}

typedef struct {
    int field_1104;
    long field_1104_b;
    double field_1104_c;
    char name_1104[64];
} StructType1104;

int function_1104(StructType1104 *s, int param_a, double param_b, const char *param_c) {
    int local_1104 = param_a * 1104;
    double local_1104_d = param_b * 1104;
    char buf_1104[128];
    snprintf(buf_1104, sizeof(buf_1104), "function_%d: %d, %f, %s", 1104, local_1104, local_1104_d, param_c ? param_c : "null");
    return local_1104 + (int)local_1104_d;
}

typedef struct {
    int field_1105;
    long field_1105_b;
    double field_1105_c;
    char name_1105[64];
} StructType1105;

int function_1105(StructType1105 *s, int param_a, double param_b, const char *param_c) {
    int local_1105 = param_a * 1105;
    double local_1105_d = param_b * 1105;
    char buf_1105[128];
    snprintf(buf_1105, sizeof(buf_1105), "function_%d: %d, %f, %s", 1105, local_1105, local_1105_d, param_c ? param_c : "null");
    return local_1105 + (int)local_1105_d;
}

typedef struct {
    int field_1106;
    long field_1106_b;
    double field_1106_c;
    char name_1106[64];
} StructType1106;

int function_1106(StructType1106 *s, int param_a, double param_b, const char *param_c) {
    int local_1106 = param_a * 1106;
    double local_1106_d = param_b * 1106;
    char buf_1106[128];
    snprintf(buf_1106, sizeof(buf_1106), "function_%d: %d, %f, %s", 1106, local_1106, local_1106_d, param_c ? param_c : "null");
    return local_1106 + (int)local_1106_d;
}

typedef struct {
    int field_1107;
    long field_1107_b;
    double field_1107_c;
    char name_1107[64];
} StructType1107;

int function_1107(StructType1107 *s, int param_a, double param_b, const char *param_c) {
    int local_1107 = param_a * 1107;
    double local_1107_d = param_b * 1107;
    char buf_1107[128];
    snprintf(buf_1107, sizeof(buf_1107), "function_%d: %d, %f, %s", 1107, local_1107, local_1107_d, param_c ? param_c : "null");
    return local_1107 + (int)local_1107_d;
}

typedef struct {
    int field_1108;
    long field_1108_b;
    double field_1108_c;
    char name_1108[64];
} StructType1108;

int function_1108(StructType1108 *s, int param_a, double param_b, const char *param_c) {
    int local_1108 = param_a * 1108;
    double local_1108_d = param_b * 1108;
    char buf_1108[128];
    snprintf(buf_1108, sizeof(buf_1108), "function_%d: %d, %f, %s", 1108, local_1108, local_1108_d, param_c ? param_c : "null");
    return local_1108 + (int)local_1108_d;
}

typedef struct {
    int field_1109;
    long field_1109_b;
    double field_1109_c;
    char name_1109[64];
} StructType1109;

int function_1109(StructType1109 *s, int param_a, double param_b, const char *param_c) {
    int local_1109 = param_a * 1109;
    double local_1109_d = param_b * 1109;
    char buf_1109[128];
    snprintf(buf_1109, sizeof(buf_1109), "function_%d: %d, %f, %s", 1109, local_1109, local_1109_d, param_c ? param_c : "null");
    return local_1109 + (int)local_1109_d;
}

typedef struct {
    int field_1110;
    long field_1110_b;
    double field_1110_c;
    char name_1110[64];
} StructType1110;

int function_1110(StructType1110 *s, int param_a, double param_b, const char *param_c) {
    int local_1110 = param_a * 1110;
    double local_1110_d = param_b * 1110;
    char buf_1110[128];
    snprintf(buf_1110, sizeof(buf_1110), "function_%d: %d, %f, %s", 1110, local_1110, local_1110_d, param_c ? param_c : "null");
    return local_1110 + (int)local_1110_d;
}

typedef struct {
    int field_1111;
    long field_1111_b;
    double field_1111_c;
    char name_1111[64];
} StructType1111;

int function_1111(StructType1111 *s, int param_a, double param_b, const char *param_c) {
    int local_1111 = param_a * 1111;
    double local_1111_d = param_b * 1111;
    char buf_1111[128];
    snprintf(buf_1111, sizeof(buf_1111), "function_%d: %d, %f, %s", 1111, local_1111, local_1111_d, param_c ? param_c : "null");
    return local_1111 + (int)local_1111_d;
}

typedef struct {
    int field_1112;
    long field_1112_b;
    double field_1112_c;
    char name_1112[64];
} StructType1112;

int function_1112(StructType1112 *s, int param_a, double param_b, const char *param_c) {
    int local_1112 = param_a * 1112;
    double local_1112_d = param_b * 1112;
    char buf_1112[128];
    snprintf(buf_1112, sizeof(buf_1112), "function_%d: %d, %f, %s", 1112, local_1112, local_1112_d, param_c ? param_c : "null");
    return local_1112 + (int)local_1112_d;
}

typedef struct {
    int field_1113;
    long field_1113_b;
    double field_1113_c;
    char name_1113[64];
} StructType1113;

int function_1113(StructType1113 *s, int param_a, double param_b, const char *param_c) {
    int local_1113 = param_a * 1113;
    double local_1113_d = param_b * 1113;
    char buf_1113[128];
    snprintf(buf_1113, sizeof(buf_1113), "function_%d: %d, %f, %s", 1113, local_1113, local_1113_d, param_c ? param_c : "null");
    return local_1113 + (int)local_1113_d;
}

typedef struct {
    int field_1114;
    long field_1114_b;
    double field_1114_c;
    char name_1114[64];
} StructType1114;

int function_1114(StructType1114 *s, int param_a, double param_b, const char *param_c) {
    int local_1114 = param_a * 1114;
    double local_1114_d = param_b * 1114;
    char buf_1114[128];
    snprintf(buf_1114, sizeof(buf_1114), "function_%d: %d, %f, %s", 1114, local_1114, local_1114_d, param_c ? param_c : "null");
    return local_1114 + (int)local_1114_d;
}

typedef struct {
    int field_1115;
    long field_1115_b;
    double field_1115_c;
    char name_1115[64];
} StructType1115;

int function_1115(StructType1115 *s, int param_a, double param_b, const char *param_c) {
    int local_1115 = param_a * 1115;
    double local_1115_d = param_b * 1115;
    char buf_1115[128];
    snprintf(buf_1115, sizeof(buf_1115), "function_%d: %d, %f, %s", 1115, local_1115, local_1115_d, param_c ? param_c : "null");
    return local_1115 + (int)local_1115_d;
}

typedef struct {
    int field_1116;
    long field_1116_b;
    double field_1116_c;
    char name_1116[64];
} StructType1116;

int function_1116(StructType1116 *s, int param_a, double param_b, const char *param_c) {
    int local_1116 = param_a * 1116;
    double local_1116_d = param_b * 1116;
    char buf_1116[128];
    snprintf(buf_1116, sizeof(buf_1116), "function_%d: %d, %f, %s", 1116, local_1116, local_1116_d, param_c ? param_c : "null");
    return local_1116 + (int)local_1116_d;
}

typedef struct {
    int field_1117;
    long field_1117_b;
    double field_1117_c;
    char name_1117[64];
} StructType1117;

int function_1117(StructType1117 *s, int param_a, double param_b, const char *param_c) {
    int local_1117 = param_a * 1117;
    double local_1117_d = param_b * 1117;
    char buf_1117[128];
    snprintf(buf_1117, sizeof(buf_1117), "function_%d: %d, %f, %s", 1117, local_1117, local_1117_d, param_c ? param_c : "null");
    return local_1117 + (int)local_1117_d;
}

typedef struct {
    int field_1118;
    long field_1118_b;
    double field_1118_c;
    char name_1118[64];
} StructType1118;

int function_1118(StructType1118 *s, int param_a, double param_b, const char *param_c) {
    int local_1118 = param_a * 1118;
    double local_1118_d = param_b * 1118;
    char buf_1118[128];
    snprintf(buf_1118, sizeof(buf_1118), "function_%d: %d, %f, %s", 1118, local_1118, local_1118_d, param_c ? param_c : "null");
    return local_1118 + (int)local_1118_d;
}

typedef struct {
    int field_1119;
    long field_1119_b;
    double field_1119_c;
    char name_1119[64];
} StructType1119;

int function_1119(StructType1119 *s, int param_a, double param_b, const char *param_c) {
    int local_1119 = param_a * 1119;
    double local_1119_d = param_b * 1119;
    char buf_1119[128];
    snprintf(buf_1119, sizeof(buf_1119), "function_%d: %d, %f, %s", 1119, local_1119, local_1119_d, param_c ? param_c : "null");
    return local_1119 + (int)local_1119_d;
}

typedef struct {
    int field_1120;
    long field_1120_b;
    double field_1120_c;
    char name_1120[64];
} StructType1120;

int function_1120(StructType1120 *s, int param_a, double param_b, const char *param_c) {
    int local_1120 = param_a * 1120;
    double local_1120_d = param_b * 1120;
    char buf_1120[128];
    snprintf(buf_1120, sizeof(buf_1120), "function_%d: %d, %f, %s", 1120, local_1120, local_1120_d, param_c ? param_c : "null");
    return local_1120 + (int)local_1120_d;
}

typedef struct {
    int field_1121;
    long field_1121_b;
    double field_1121_c;
    char name_1121[64];
} StructType1121;

int function_1121(StructType1121 *s, int param_a, double param_b, const char *param_c) {
    int local_1121 = param_a * 1121;
    double local_1121_d = param_b * 1121;
    char buf_1121[128];
    snprintf(buf_1121, sizeof(buf_1121), "function_%d: %d, %f, %s", 1121, local_1121, local_1121_d, param_c ? param_c : "null");
    return local_1121 + (int)local_1121_d;
}

typedef struct {
    int field_1122;
    long field_1122_b;
    double field_1122_c;
    char name_1122[64];
} StructType1122;

int function_1122(StructType1122 *s, int param_a, double param_b, const char *param_c) {
    int local_1122 = param_a * 1122;
    double local_1122_d = param_b * 1122;
    char buf_1122[128];
    snprintf(buf_1122, sizeof(buf_1122), "function_%d: %d, %f, %s", 1122, local_1122, local_1122_d, param_c ? param_c : "null");
    return local_1122 + (int)local_1122_d;
}

typedef struct {
    int field_1123;
    long field_1123_b;
    double field_1123_c;
    char name_1123[64];
} StructType1123;

int function_1123(StructType1123 *s, int param_a, double param_b, const char *param_c) {
    int local_1123 = param_a * 1123;
    double local_1123_d = param_b * 1123;
    char buf_1123[128];
    snprintf(buf_1123, sizeof(buf_1123), "function_%d: %d, %f, %s", 1123, local_1123, local_1123_d, param_c ? param_c : "null");
    return local_1123 + (int)local_1123_d;
}

typedef struct {
    int field_1124;
    long field_1124_b;
    double field_1124_c;
    char name_1124[64];
} StructType1124;

int function_1124(StructType1124 *s, int param_a, double param_b, const char *param_c) {
    int local_1124 = param_a * 1124;
    double local_1124_d = param_b * 1124;
    char buf_1124[128];
    snprintf(buf_1124, sizeof(buf_1124), "function_%d: %d, %f, %s", 1124, local_1124, local_1124_d, param_c ? param_c : "null");
    return local_1124 + (int)local_1124_d;
}

typedef struct {
    int field_1125;
    long field_1125_b;
    double field_1125_c;
    char name_1125[64];
} StructType1125;

int function_1125(StructType1125 *s, int param_a, double param_b, const char *param_c) {
    int local_1125 = param_a * 1125;
    double local_1125_d = param_b * 1125;
    char buf_1125[128];
    snprintf(buf_1125, sizeof(buf_1125), "function_%d: %d, %f, %s", 1125, local_1125, local_1125_d, param_c ? param_c : "null");
    return local_1125 + (int)local_1125_d;
}

typedef struct {
    int field_1126;
    long field_1126_b;
    double field_1126_c;
    char name_1126[64];
} StructType1126;

int function_1126(StructType1126 *s, int param_a, double param_b, const char *param_c) {
    int local_1126 = param_a * 1126;
    double local_1126_d = param_b * 1126;
    char buf_1126[128];
    snprintf(buf_1126, sizeof(buf_1126), "function_%d: %d, %f, %s", 1126, local_1126, local_1126_d, param_c ? param_c : "null");
    return local_1126 + (int)local_1126_d;
}

typedef struct {
    int field_1127;
    long field_1127_b;
    double field_1127_c;
    char name_1127[64];
} StructType1127;

int function_1127(StructType1127 *s, int param_a, double param_b, const char *param_c) {
    int local_1127 = param_a * 1127;
    double local_1127_d = param_b * 1127;
    char buf_1127[128];
    snprintf(buf_1127, sizeof(buf_1127), "function_%d: %d, %f, %s", 1127, local_1127, local_1127_d, param_c ? param_c : "null");
    return local_1127 + (int)local_1127_d;
}

typedef struct {
    int field_1128;
    long field_1128_b;
    double field_1128_c;
    char name_1128[64];
} StructType1128;

int function_1128(StructType1128 *s, int param_a, double param_b, const char *param_c) {
    int local_1128 = param_a * 1128;
    double local_1128_d = param_b * 1128;
    char buf_1128[128];
    snprintf(buf_1128, sizeof(buf_1128), "function_%d: %d, %f, %s", 1128, local_1128, local_1128_d, param_c ? param_c : "null");
    return local_1128 + (int)local_1128_d;
}

typedef struct {
    int field_1129;
    long field_1129_b;
    double field_1129_c;
    char name_1129[64];
} StructType1129;

int function_1129(StructType1129 *s, int param_a, double param_b, const char *param_c) {
    int local_1129 = param_a * 1129;
    double local_1129_d = param_b * 1129;
    char buf_1129[128];
    snprintf(buf_1129, sizeof(buf_1129), "function_%d: %d, %f, %s", 1129, local_1129, local_1129_d, param_c ? param_c : "null");
    return local_1129 + (int)local_1129_d;
}

typedef struct {
    int field_1130;
    long field_1130_b;
    double field_1130_c;
    char name_1130[64];
} StructType1130;

int function_1130(StructType1130 *s, int param_a, double param_b, const char *param_c) {
    int local_1130 = param_a * 1130;
    double local_1130_d = param_b * 1130;
    char buf_1130[128];
    snprintf(buf_1130, sizeof(buf_1130), "function_%d: %d, %f, %s", 1130, local_1130, local_1130_d, param_c ? param_c : "null");
    return local_1130 + (int)local_1130_d;
}

typedef struct {
    int field_1131;
    long field_1131_b;
    double field_1131_c;
    char name_1131[64];
} StructType1131;

int function_1131(StructType1131 *s, int param_a, double param_b, const char *param_c) {
    int local_1131 = param_a * 1131;
    double local_1131_d = param_b * 1131;
    char buf_1131[128];
    snprintf(buf_1131, sizeof(buf_1131), "function_%d: %d, %f, %s", 1131, local_1131, local_1131_d, param_c ? param_c : "null");
    return local_1131 + (int)local_1131_d;
}

typedef struct {
    int field_1132;
    long field_1132_b;
    double field_1132_c;
    char name_1132[64];
} StructType1132;

int function_1132(StructType1132 *s, int param_a, double param_b, const char *param_c) {
    int local_1132 = param_a * 1132;
    double local_1132_d = param_b * 1132;
    char buf_1132[128];
    snprintf(buf_1132, sizeof(buf_1132), "function_%d: %d, %f, %s", 1132, local_1132, local_1132_d, param_c ? param_c : "null");
    return local_1132 + (int)local_1132_d;
}

typedef struct {
    int field_1133;
    long field_1133_b;
    double field_1133_c;
    char name_1133[64];
} StructType1133;

int function_1133(StructType1133 *s, int param_a, double param_b, const char *param_c) {
    int local_1133 = param_a * 1133;
    double local_1133_d = param_b * 1133;
    char buf_1133[128];
    snprintf(buf_1133, sizeof(buf_1133), "function_%d: %d, %f, %s", 1133, local_1133, local_1133_d, param_c ? param_c : "null");
    return local_1133 + (int)local_1133_d;
}

typedef struct {
    int field_1134;
    long field_1134_b;
    double field_1134_c;
    char name_1134[64];
} StructType1134;

int function_1134(StructType1134 *s, int param_a, double param_b, const char *param_c) {
    int local_1134 = param_a * 1134;
    double local_1134_d = param_b * 1134;
    char buf_1134[128];
    snprintf(buf_1134, sizeof(buf_1134), "function_%d: %d, %f, %s", 1134, local_1134, local_1134_d, param_c ? param_c : "null");
    return local_1134 + (int)local_1134_d;
}

typedef struct {
    int field_1135;
    long field_1135_b;
    double field_1135_c;
    char name_1135[64];
} StructType1135;

int function_1135(StructType1135 *s, int param_a, double param_b, const char *param_c) {
    int local_1135 = param_a * 1135;
    double local_1135_d = param_b * 1135;
    char buf_1135[128];
    snprintf(buf_1135, sizeof(buf_1135), "function_%d: %d, %f, %s", 1135, local_1135, local_1135_d, param_c ? param_c : "null");
    return local_1135 + (int)local_1135_d;
}

typedef struct {
    int field_1136;
    long field_1136_b;
    double field_1136_c;
    char name_1136[64];
} StructType1136;

int function_1136(StructType1136 *s, int param_a, double param_b, const char *param_c) {
    int local_1136 = param_a * 1136;
    double local_1136_d = param_b * 1136;
    char buf_1136[128];
    snprintf(buf_1136, sizeof(buf_1136), "function_%d: %d, %f, %s", 1136, local_1136, local_1136_d, param_c ? param_c : "null");
    return local_1136 + (int)local_1136_d;
}

typedef struct {
    int field_1137;
    long field_1137_b;
    double field_1137_c;
    char name_1137[64];
} StructType1137;

int function_1137(StructType1137 *s, int param_a, double param_b, const char *param_c) {
    int local_1137 = param_a * 1137;
    double local_1137_d = param_b * 1137;
    char buf_1137[128];
    snprintf(buf_1137, sizeof(buf_1137), "function_%d: %d, %f, %s", 1137, local_1137, local_1137_d, param_c ? param_c : "null");
    return local_1137 + (int)local_1137_d;
}

typedef struct {
    int field_1138;
    long field_1138_b;
    double field_1138_c;
    char name_1138[64];
} StructType1138;

int function_1138(StructType1138 *s, int param_a, double param_b, const char *param_c) {
    int local_1138 = param_a * 1138;
    double local_1138_d = param_b * 1138;
    char buf_1138[128];
    snprintf(buf_1138, sizeof(buf_1138), "function_%d: %d, %f, %s", 1138, local_1138, local_1138_d, param_c ? param_c : "null");
    return local_1138 + (int)local_1138_d;
}

typedef struct {
    int field_1139;
    long field_1139_b;
    double field_1139_c;
    char name_1139[64];
} StructType1139;

int function_1139(StructType1139 *s, int param_a, double param_b, const char *param_c) {
    int local_1139 = param_a * 1139;
    double local_1139_d = param_b * 1139;
    char buf_1139[128];
    snprintf(buf_1139, sizeof(buf_1139), "function_%d: %d, %f, %s", 1139, local_1139, local_1139_d, param_c ? param_c : "null");
    return local_1139 + (int)local_1139_d;
}

typedef struct {
    int field_1140;
    long field_1140_b;
    double field_1140_c;
    char name_1140[64];
} StructType1140;

int function_1140(StructType1140 *s, int param_a, double param_b, const char *param_c) {
    int local_1140 = param_a * 1140;
    double local_1140_d = param_b * 1140;
    char buf_1140[128];
    snprintf(buf_1140, sizeof(buf_1140), "function_%d: %d, %f, %s", 1140, local_1140, local_1140_d, param_c ? param_c : "null");
    return local_1140 + (int)local_1140_d;
}

typedef struct {
    int field_1141;
    long field_1141_b;
    double field_1141_c;
    char name_1141[64];
} StructType1141;

int function_1141(StructType1141 *s, int param_a, double param_b, const char *param_c) {
    int local_1141 = param_a * 1141;
    double local_1141_d = param_b * 1141;
    char buf_1141[128];
    snprintf(buf_1141, sizeof(buf_1141), "function_%d: %d, %f, %s", 1141, local_1141, local_1141_d, param_c ? param_c : "null");
    return local_1141 + (int)local_1141_d;
}

typedef struct {
    int field_1142;
    long field_1142_b;
    double field_1142_c;
    char name_1142[64];
} StructType1142;

int function_1142(StructType1142 *s, int param_a, double param_b, const char *param_c) {
    int local_1142 = param_a * 1142;
    double local_1142_d = param_b * 1142;
    char buf_1142[128];
    snprintf(buf_1142, sizeof(buf_1142), "function_%d: %d, %f, %s", 1142, local_1142, local_1142_d, param_c ? param_c : "null");
    return local_1142 + (int)local_1142_d;
}

typedef struct {
    int field_1143;
    long field_1143_b;
    double field_1143_c;
    char name_1143[64];
} StructType1143;

int function_1143(StructType1143 *s, int param_a, double param_b, const char *param_c) {
    int local_1143 = param_a * 1143;
    double local_1143_d = param_b * 1143;
    char buf_1143[128];
    snprintf(buf_1143, sizeof(buf_1143), "function_%d: %d, %f, %s", 1143, local_1143, local_1143_d, param_c ? param_c : "null");
    return local_1143 + (int)local_1143_d;
}

typedef struct {
    int field_1144;
    long field_1144_b;
    double field_1144_c;
    char name_1144[64];
} StructType1144;

int function_1144(StructType1144 *s, int param_a, double param_b, const char *param_c) {
    int local_1144 = param_a * 1144;
    double local_1144_d = param_b * 1144;
    char buf_1144[128];
    snprintf(buf_1144, sizeof(buf_1144), "function_%d: %d, %f, %s", 1144, local_1144, local_1144_d, param_c ? param_c : "null");
    return local_1144 + (int)local_1144_d;
}

typedef struct {
    int field_1145;
    long field_1145_b;
    double field_1145_c;
    char name_1145[64];
} StructType1145;

int function_1145(StructType1145 *s, int param_a, double param_b, const char *param_c) {
    int local_1145 = param_a * 1145;
    double local_1145_d = param_b * 1145;
    char buf_1145[128];
    snprintf(buf_1145, sizeof(buf_1145), "function_%d: %d, %f, %s", 1145, local_1145, local_1145_d, param_c ? param_c : "null");
    return local_1145 + (int)local_1145_d;
}

typedef struct {
    int field_1146;
    long field_1146_b;
    double field_1146_c;
    char name_1146[64];
} StructType1146;

int function_1146(StructType1146 *s, int param_a, double param_b, const char *param_c) {
    int local_1146 = param_a * 1146;
    double local_1146_d = param_b * 1146;
    char buf_1146[128];
    snprintf(buf_1146, sizeof(buf_1146), "function_%d: %d, %f, %s", 1146, local_1146, local_1146_d, param_c ? param_c : "null");
    return local_1146 + (int)local_1146_d;
}

typedef struct {
    int field_1147;
    long field_1147_b;
    double field_1147_c;
    char name_1147[64];
} StructType1147;

int function_1147(StructType1147 *s, int param_a, double param_b, const char *param_c) {
    int local_1147 = param_a * 1147;
    double local_1147_d = param_b * 1147;
    char buf_1147[128];
    snprintf(buf_1147, sizeof(buf_1147), "function_%d: %d, %f, %s", 1147, local_1147, local_1147_d, param_c ? param_c : "null");
    return local_1147 + (int)local_1147_d;
}

typedef struct {
    int field_1148;
    long field_1148_b;
    double field_1148_c;
    char name_1148[64];
} StructType1148;

int function_1148(StructType1148 *s, int param_a, double param_b, const char *param_c) {
    int local_1148 = param_a * 1148;
    double local_1148_d = param_b * 1148;
    char buf_1148[128];
    snprintf(buf_1148, sizeof(buf_1148), "function_%d: %d, %f, %s", 1148, local_1148, local_1148_d, param_c ? param_c : "null");
    return local_1148 + (int)local_1148_d;
}

typedef struct {
    int field_1149;
    long field_1149_b;
    double field_1149_c;
    char name_1149[64];
} StructType1149;

int function_1149(StructType1149 *s, int param_a, double param_b, const char *param_c) {
    int local_1149 = param_a * 1149;
    double local_1149_d = param_b * 1149;
    char buf_1149[128];
    snprintf(buf_1149, sizeof(buf_1149), "function_%d: %d, %f, %s", 1149, local_1149, local_1149_d, param_c ? param_c : "null");
    return local_1149 + (int)local_1149_d;
}

typedef struct {
    int field_1150;
    long field_1150_b;
    double field_1150_c;
    char name_1150[64];
} StructType1150;

int function_1150(StructType1150 *s, int param_a, double param_b, const char *param_c) {
    int local_1150 = param_a * 1150;
    double local_1150_d = param_b * 1150;
    char buf_1150[128];
    snprintf(buf_1150, sizeof(buf_1150), "function_%d: %d, %f, %s", 1150, local_1150, local_1150_d, param_c ? param_c : "null");
    return local_1150 + (int)local_1150_d;
}

typedef struct {
    int field_1151;
    long field_1151_b;
    double field_1151_c;
    char name_1151[64];
} StructType1151;

int function_1151(StructType1151 *s, int param_a, double param_b, const char *param_c) {
    int local_1151 = param_a * 1151;
    double local_1151_d = param_b * 1151;
    char buf_1151[128];
    snprintf(buf_1151, sizeof(buf_1151), "function_%d: %d, %f, %s", 1151, local_1151, local_1151_d, param_c ? param_c : "null");
    return local_1151 + (int)local_1151_d;
}

typedef struct {
    int field_1152;
    long field_1152_b;
    double field_1152_c;
    char name_1152[64];
} StructType1152;

int function_1152(StructType1152 *s, int param_a, double param_b, const char *param_c) {
    int local_1152 = param_a * 1152;
    double local_1152_d = param_b * 1152;
    char buf_1152[128];
    snprintf(buf_1152, sizeof(buf_1152), "function_%d: %d, %f, %s", 1152, local_1152, local_1152_d, param_c ? param_c : "null");
    return local_1152 + (int)local_1152_d;
}

typedef struct {
    int field_1153;
    long field_1153_b;
    double field_1153_c;
    char name_1153[64];
} StructType1153;

int function_1153(StructType1153 *s, int param_a, double param_b, const char *param_c) {
    int local_1153 = param_a * 1153;
    double local_1153_d = param_b * 1153;
    char buf_1153[128];
    snprintf(buf_1153, sizeof(buf_1153), "function_%d: %d, %f, %s", 1153, local_1153, local_1153_d, param_c ? param_c : "null");
    return local_1153 + (int)local_1153_d;
}

typedef struct {
    int field_1154;
    long field_1154_b;
    double field_1154_c;
    char name_1154[64];
} StructType1154;

int function_1154(StructType1154 *s, int param_a, double param_b, const char *param_c) {
    int local_1154 = param_a * 1154;
    double local_1154_d = param_b * 1154;
    char buf_1154[128];
    snprintf(buf_1154, sizeof(buf_1154), "function_%d: %d, %f, %s", 1154, local_1154, local_1154_d, param_c ? param_c : "null");
    return local_1154 + (int)local_1154_d;
}

typedef struct {
    int field_1155;
    long field_1155_b;
    double field_1155_c;
    char name_1155[64];
} StructType1155;

int function_1155(StructType1155 *s, int param_a, double param_b, const char *param_c) {
    int local_1155 = param_a * 1155;
    double local_1155_d = param_b * 1155;
    char buf_1155[128];
    snprintf(buf_1155, sizeof(buf_1155), "function_%d: %d, %f, %s", 1155, local_1155, local_1155_d, param_c ? param_c : "null");
    return local_1155 + (int)local_1155_d;
}

typedef struct {
    int field_1156;
    long field_1156_b;
    double field_1156_c;
    char name_1156[64];
} StructType1156;

int function_1156(StructType1156 *s, int param_a, double param_b, const char *param_c) {
    int local_1156 = param_a * 1156;
    double local_1156_d = param_b * 1156;
    char buf_1156[128];
    snprintf(buf_1156, sizeof(buf_1156), "function_%d: %d, %f, %s", 1156, local_1156, local_1156_d, param_c ? param_c : "null");
    return local_1156 + (int)local_1156_d;
}

typedef struct {
    int field_1157;
    long field_1157_b;
    double field_1157_c;
    char name_1157[64];
} StructType1157;

int function_1157(StructType1157 *s, int param_a, double param_b, const char *param_c) {
    int local_1157 = param_a * 1157;
    double local_1157_d = param_b * 1157;
    char buf_1157[128];
    snprintf(buf_1157, sizeof(buf_1157), "function_%d: %d, %f, %s", 1157, local_1157, local_1157_d, param_c ? param_c : "null");
    return local_1157 + (int)local_1157_d;
}

typedef struct {
    int field_1158;
    long field_1158_b;
    double field_1158_c;
    char name_1158[64];
} StructType1158;

int function_1158(StructType1158 *s, int param_a, double param_b, const char *param_c) {
    int local_1158 = param_a * 1158;
    double local_1158_d = param_b * 1158;
    char buf_1158[128];
    snprintf(buf_1158, sizeof(buf_1158), "function_%d: %d, %f, %s", 1158, local_1158, local_1158_d, param_c ? param_c : "null");
    return local_1158 + (int)local_1158_d;
}

typedef struct {
    int field_1159;
    long field_1159_b;
    double field_1159_c;
    char name_1159[64];
} StructType1159;

int function_1159(StructType1159 *s, int param_a, double param_b, const char *param_c) {
    int local_1159 = param_a * 1159;
    double local_1159_d = param_b * 1159;
    char buf_1159[128];
    snprintf(buf_1159, sizeof(buf_1159), "function_%d: %d, %f, %s", 1159, local_1159, local_1159_d, param_c ? param_c : "null");
    return local_1159 + (int)local_1159_d;
}

typedef struct {
    int field_1160;
    long field_1160_b;
    double field_1160_c;
    char name_1160[64];
} StructType1160;

int function_1160(StructType1160 *s, int param_a, double param_b, const char *param_c) {
    int local_1160 = param_a * 1160;
    double local_1160_d = param_b * 1160;
    char buf_1160[128];
    snprintf(buf_1160, sizeof(buf_1160), "function_%d: %d, %f, %s", 1160, local_1160, local_1160_d, param_c ? param_c : "null");
    return local_1160 + (int)local_1160_d;
}

typedef struct {
    int field_1161;
    long field_1161_b;
    double field_1161_c;
    char name_1161[64];
} StructType1161;

int function_1161(StructType1161 *s, int param_a, double param_b, const char *param_c) {
    int local_1161 = param_a * 1161;
    double local_1161_d = param_b * 1161;
    char buf_1161[128];
    snprintf(buf_1161, sizeof(buf_1161), "function_%d: %d, %f, %s", 1161, local_1161, local_1161_d, param_c ? param_c : "null");
    return local_1161 + (int)local_1161_d;
}

typedef struct {
    int field_1162;
    long field_1162_b;
    double field_1162_c;
    char name_1162[64];
} StructType1162;

int function_1162(StructType1162 *s, int param_a, double param_b, const char *param_c) {
    int local_1162 = param_a * 1162;
    double local_1162_d = param_b * 1162;
    char buf_1162[128];
    snprintf(buf_1162, sizeof(buf_1162), "function_%d: %d, %f, %s", 1162, local_1162, local_1162_d, param_c ? param_c : "null");
    return local_1162 + (int)local_1162_d;
}

typedef struct {
    int field_1163;
    long field_1163_b;
    double field_1163_c;
    char name_1163[64];
} StructType1163;

int function_1163(StructType1163 *s, int param_a, double param_b, const char *param_c) {
    int local_1163 = param_a * 1163;
    double local_1163_d = param_b * 1163;
    char buf_1163[128];
    snprintf(buf_1163, sizeof(buf_1163), "function_%d: %d, %f, %s", 1163, local_1163, local_1163_d, param_c ? param_c : "null");
    return local_1163 + (int)local_1163_d;
}

typedef struct {
    int field_1164;
    long field_1164_b;
    double field_1164_c;
    char name_1164[64];
} StructType1164;

int function_1164(StructType1164 *s, int param_a, double param_b, const char *param_c) {
    int local_1164 = param_a * 1164;
    double local_1164_d = param_b * 1164;
    char buf_1164[128];
    snprintf(buf_1164, sizeof(buf_1164), "function_%d: %d, %f, %s", 1164, local_1164, local_1164_d, param_c ? param_c : "null");
    return local_1164 + (int)local_1164_d;
}

typedef struct {
    int field_1165;
    long field_1165_b;
    double field_1165_c;
    char name_1165[64];
} StructType1165;

int function_1165(StructType1165 *s, int param_a, double param_b, const char *param_c) {
    int local_1165 = param_a * 1165;
    double local_1165_d = param_b * 1165;
    char buf_1165[128];
    snprintf(buf_1165, sizeof(buf_1165), "function_%d: %d, %f, %s", 1165, local_1165, local_1165_d, param_c ? param_c : "null");
    return local_1165 + (int)local_1165_d;
}

typedef struct {
    int field_1166;
    long field_1166_b;
    double field_1166_c;
    char name_1166[64];
} StructType1166;

int function_1166(StructType1166 *s, int param_a, double param_b, const char *param_c) {
    int local_1166 = param_a * 1166;
    double local_1166_d = param_b * 1166;
    char buf_1166[128];
    snprintf(buf_1166, sizeof(buf_1166), "function_%d: %d, %f, %s", 1166, local_1166, local_1166_d, param_c ? param_c : "null");
    return local_1166 + (int)local_1166_d;
}

typedef struct {
    int field_1167;
    long field_1167_b;
    double field_1167_c;
    char name_1167[64];
} StructType1167;

int function_1167(StructType1167 *s, int param_a, double param_b, const char *param_c) {
    int local_1167 = param_a * 1167;
    double local_1167_d = param_b * 1167;
    char buf_1167[128];
    snprintf(buf_1167, sizeof(buf_1167), "function_%d: %d, %f, %s", 1167, local_1167, local_1167_d, param_c ? param_c : "null");
    return local_1167 + (int)local_1167_d;
}

typedef struct {
    int field_1168;
    long field_1168_b;
    double field_1168_c;
    char name_1168[64];
} StructType1168;

int function_1168(StructType1168 *s, int param_a, double param_b, const char *param_c) {
    int local_1168 = param_a * 1168;
    double local_1168_d = param_b * 1168;
    char buf_1168[128];
    snprintf(buf_1168, sizeof(buf_1168), "function_%d: %d, %f, %s", 1168, local_1168, local_1168_d, param_c ? param_c : "null");
    return local_1168 + (int)local_1168_d;
}

typedef struct {
    int field_1169;
    long field_1169_b;
    double field_1169_c;
    char name_1169[64];
} StructType1169;

int function_1169(StructType1169 *s, int param_a, double param_b, const char *param_c) {
    int local_1169 = param_a * 1169;
    double local_1169_d = param_b * 1169;
    char buf_1169[128];
    snprintf(buf_1169, sizeof(buf_1169), "function_%d: %d, %f, %s", 1169, local_1169, local_1169_d, param_c ? param_c : "null");
    return local_1169 + (int)local_1169_d;
}

typedef struct {
    int field_1170;
    long field_1170_b;
    double field_1170_c;
    char name_1170[64];
} StructType1170;

int function_1170(StructType1170 *s, int param_a, double param_b, const char *param_c) {
    int local_1170 = param_a * 1170;
    double local_1170_d = param_b * 1170;
    char buf_1170[128];
    snprintf(buf_1170, sizeof(buf_1170), "function_%d: %d, %f, %s", 1170, local_1170, local_1170_d, param_c ? param_c : "null");
    return local_1170 + (int)local_1170_d;
}

typedef struct {
    int field_1171;
    long field_1171_b;
    double field_1171_c;
    char name_1171[64];
} StructType1171;

int function_1171(StructType1171 *s, int param_a, double param_b, const char *param_c) {
    int local_1171 = param_a * 1171;
    double local_1171_d = param_b * 1171;
    char buf_1171[128];
    snprintf(buf_1171, sizeof(buf_1171), "function_%d: %d, %f, %s", 1171, local_1171, local_1171_d, param_c ? param_c : "null");
    return local_1171 + (int)local_1171_d;
}

typedef struct {
    int field_1172;
    long field_1172_b;
    double field_1172_c;
    char name_1172[64];
} StructType1172;

int function_1172(StructType1172 *s, int param_a, double param_b, const char *param_c) {
    int local_1172 = param_a * 1172;
    double local_1172_d = param_b * 1172;
    char buf_1172[128];
    snprintf(buf_1172, sizeof(buf_1172), "function_%d: %d, %f, %s", 1172, local_1172, local_1172_d, param_c ? param_c : "null");
    return local_1172 + (int)local_1172_d;
}

typedef struct {
    int field_1173;
    long field_1173_b;
    double field_1173_c;
    char name_1173[64];
} StructType1173;

int function_1173(StructType1173 *s, int param_a, double param_b, const char *param_c) {
    int local_1173 = param_a * 1173;
    double local_1173_d = param_b * 1173;
    char buf_1173[128];
    snprintf(buf_1173, sizeof(buf_1173), "function_%d: %d, %f, %s", 1173, local_1173, local_1173_d, param_c ? param_c : "null");
    return local_1173 + (int)local_1173_d;
}

typedef struct {
    int field_1174;
    long field_1174_b;
    double field_1174_c;
    char name_1174[64];
} StructType1174;

int function_1174(StructType1174 *s, int param_a, double param_b, const char *param_c) {
    int local_1174 = param_a * 1174;
    double local_1174_d = param_b * 1174;
    char buf_1174[128];
    snprintf(buf_1174, sizeof(buf_1174), "function_%d: %d, %f, %s", 1174, local_1174, local_1174_d, param_c ? param_c : "null");
    return local_1174 + (int)local_1174_d;
}

typedef struct {
    int field_1175;
    long field_1175_b;
    double field_1175_c;
    char name_1175[64];
} StructType1175;

int function_1175(StructType1175 *s, int param_a, double param_b, const char *param_c) {
    int local_1175 = param_a * 1175;
    double local_1175_d = param_b * 1175;
    char buf_1175[128];
    snprintf(buf_1175, sizeof(buf_1175), "function_%d: %d, %f, %s", 1175, local_1175, local_1175_d, param_c ? param_c : "null");
    return local_1175 + (int)local_1175_d;
}

typedef struct {
    int field_1176;
    long field_1176_b;
    double field_1176_c;
    char name_1176[64];
} StructType1176;

int function_1176(StructType1176 *s, int param_a, double param_b, const char *param_c) {
    int local_1176 = param_a * 1176;
    double local_1176_d = param_b * 1176;
    char buf_1176[128];
    snprintf(buf_1176, sizeof(buf_1176), "function_%d: %d, %f, %s", 1176, local_1176, local_1176_d, param_c ? param_c : "null");
    return local_1176 + (int)local_1176_d;
}

typedef struct {
    int field_1177;
    long field_1177_b;
    double field_1177_c;
    char name_1177[64];
} StructType1177;

int function_1177(StructType1177 *s, int param_a, double param_b, const char *param_c) {
    int local_1177 = param_a * 1177;
    double local_1177_d = param_b * 1177;
    char buf_1177[128];
    snprintf(buf_1177, sizeof(buf_1177), "function_%d: %d, %f, %s", 1177, local_1177, local_1177_d, param_c ? param_c : "null");
    return local_1177 + (int)local_1177_d;
}

typedef struct {
    int field_1178;
    long field_1178_b;
    double field_1178_c;
    char name_1178[64];
} StructType1178;

int function_1178(StructType1178 *s, int param_a, double param_b, const char *param_c) {
    int local_1178 = param_a * 1178;
    double local_1178_d = param_b * 1178;
    char buf_1178[128];
    snprintf(buf_1178, sizeof(buf_1178), "function_%d: %d, %f, %s", 1178, local_1178, local_1178_d, param_c ? param_c : "null");
    return local_1178 + (int)local_1178_d;
}

typedef struct {
    int field_1179;
    long field_1179_b;
    double field_1179_c;
    char name_1179[64];
} StructType1179;

int function_1179(StructType1179 *s, int param_a, double param_b, const char *param_c) {
    int local_1179 = param_a * 1179;
    double local_1179_d = param_b * 1179;
    char buf_1179[128];
    snprintf(buf_1179, sizeof(buf_1179), "function_%d: %d, %f, %s", 1179, local_1179, local_1179_d, param_c ? param_c : "null");
    return local_1179 + (int)local_1179_d;
}

typedef struct {
    int field_1180;
    long field_1180_b;
    double field_1180_c;
    char name_1180[64];
} StructType1180;

int function_1180(StructType1180 *s, int param_a, double param_b, const char *param_c) {
    int local_1180 = param_a * 1180;
    double local_1180_d = param_b * 1180;
    char buf_1180[128];
    snprintf(buf_1180, sizeof(buf_1180), "function_%d: %d, %f, %s", 1180, local_1180, local_1180_d, param_c ? param_c : "null");
    return local_1180 + (int)local_1180_d;
}

typedef struct {
    int field_1181;
    long field_1181_b;
    double field_1181_c;
    char name_1181[64];
} StructType1181;

int function_1181(StructType1181 *s, int param_a, double param_b, const char *param_c) {
    int local_1181 = param_a * 1181;
    double local_1181_d = param_b * 1181;
    char buf_1181[128];
    snprintf(buf_1181, sizeof(buf_1181), "function_%d: %d, %f, %s", 1181, local_1181, local_1181_d, param_c ? param_c : "null");
    return local_1181 + (int)local_1181_d;
}

typedef struct {
    int field_1182;
    long field_1182_b;
    double field_1182_c;
    char name_1182[64];
} StructType1182;

int function_1182(StructType1182 *s, int param_a, double param_b, const char *param_c) {
    int local_1182 = param_a * 1182;
    double local_1182_d = param_b * 1182;
    char buf_1182[128];
    snprintf(buf_1182, sizeof(buf_1182), "function_%d: %d, %f, %s", 1182, local_1182, local_1182_d, param_c ? param_c : "null");
    return local_1182 + (int)local_1182_d;
}

typedef struct {
    int field_1183;
    long field_1183_b;
    double field_1183_c;
    char name_1183[64];
} StructType1183;

int function_1183(StructType1183 *s, int param_a, double param_b, const char *param_c) {
    int local_1183 = param_a * 1183;
    double local_1183_d = param_b * 1183;
    char buf_1183[128];
    snprintf(buf_1183, sizeof(buf_1183), "function_%d: %d, %f, %s", 1183, local_1183, local_1183_d, param_c ? param_c : "null");
    return local_1183 + (int)local_1183_d;
}

typedef struct {
    int field_1184;
    long field_1184_b;
    double field_1184_c;
    char name_1184[64];
} StructType1184;

int function_1184(StructType1184 *s, int param_a, double param_b, const char *param_c) {
    int local_1184 = param_a * 1184;
    double local_1184_d = param_b * 1184;
    char buf_1184[128];
    snprintf(buf_1184, sizeof(buf_1184), "function_%d: %d, %f, %s", 1184, local_1184, local_1184_d, param_c ? param_c : "null");
    return local_1184 + (int)local_1184_d;
}

typedef struct {
    int field_1185;
    long field_1185_b;
    double field_1185_c;
    char name_1185[64];
} StructType1185;

int function_1185(StructType1185 *s, int param_a, double param_b, const char *param_c) {
    int local_1185 = param_a * 1185;
    double local_1185_d = param_b * 1185;
    char buf_1185[128];
    snprintf(buf_1185, sizeof(buf_1185), "function_%d: %d, %f, %s", 1185, local_1185, local_1185_d, param_c ? param_c : "null");
    return local_1185 + (int)local_1185_d;
}

typedef struct {
    int field_1186;
    long field_1186_b;
    double field_1186_c;
    char name_1186[64];
} StructType1186;

int function_1186(StructType1186 *s, int param_a, double param_b, const char *param_c) {
    int local_1186 = param_a * 1186;
    double local_1186_d = param_b * 1186;
    char buf_1186[128];
    snprintf(buf_1186, sizeof(buf_1186), "function_%d: %d, %f, %s", 1186, local_1186, local_1186_d, param_c ? param_c : "null");
    return local_1186 + (int)local_1186_d;
}

typedef struct {
    int field_1187;
    long field_1187_b;
    double field_1187_c;
    char name_1187[64];
} StructType1187;

int function_1187(StructType1187 *s, int param_a, double param_b, const char *param_c) {
    int local_1187 = param_a * 1187;
    double local_1187_d = param_b * 1187;
    char buf_1187[128];
    snprintf(buf_1187, sizeof(buf_1187), "function_%d: %d, %f, %s", 1187, local_1187, local_1187_d, param_c ? param_c : "null");
    return local_1187 + (int)local_1187_d;
}

typedef struct {
    int field_1188;
    long field_1188_b;
    double field_1188_c;
    char name_1188[64];
} StructType1188;

int function_1188(StructType1188 *s, int param_a, double param_b, const char *param_c) {
    int local_1188 = param_a * 1188;
    double local_1188_d = param_b * 1188;
    char buf_1188[128];
    snprintf(buf_1188, sizeof(buf_1188), "function_%d: %d, %f, %s", 1188, local_1188, local_1188_d, param_c ? param_c : "null");
    return local_1188 + (int)local_1188_d;
}

typedef struct {
    int field_1189;
    long field_1189_b;
    double field_1189_c;
    char name_1189[64];
} StructType1189;

int function_1189(StructType1189 *s, int param_a, double param_b, const char *param_c) {
    int local_1189 = param_a * 1189;
    double local_1189_d = param_b * 1189;
    char buf_1189[128];
    snprintf(buf_1189, sizeof(buf_1189), "function_%d: %d, %f, %s", 1189, local_1189, local_1189_d, param_c ? param_c : "null");
    return local_1189 + (int)local_1189_d;
}

typedef struct {
    int field_1190;
    long field_1190_b;
    double field_1190_c;
    char name_1190[64];
} StructType1190;

int function_1190(StructType1190 *s, int param_a, double param_b, const char *param_c) {
    int local_1190 = param_a * 1190;
    double local_1190_d = param_b * 1190;
    char buf_1190[128];
    snprintf(buf_1190, sizeof(buf_1190), "function_%d: %d, %f, %s", 1190, local_1190, local_1190_d, param_c ? param_c : "null");
    return local_1190 + (int)local_1190_d;
}

typedef struct {
    int field_1191;
    long field_1191_b;
    double field_1191_c;
    char name_1191[64];
} StructType1191;

int function_1191(StructType1191 *s, int param_a, double param_b, const char *param_c) {
    int local_1191 = param_a * 1191;
    double local_1191_d = param_b * 1191;
    char buf_1191[128];
    snprintf(buf_1191, sizeof(buf_1191), "function_%d: %d, %f, %s", 1191, local_1191, local_1191_d, param_c ? param_c : "null");
    return local_1191 + (int)local_1191_d;
}

typedef struct {
    int field_1192;
    long field_1192_b;
    double field_1192_c;
    char name_1192[64];
} StructType1192;

int function_1192(StructType1192 *s, int param_a, double param_b, const char *param_c) {
    int local_1192 = param_a * 1192;
    double local_1192_d = param_b * 1192;
    char buf_1192[128];
    snprintf(buf_1192, sizeof(buf_1192), "function_%d: %d, %f, %s", 1192, local_1192, local_1192_d, param_c ? param_c : "null");
    return local_1192 + (int)local_1192_d;
}

typedef struct {
    int field_1193;
    long field_1193_b;
    double field_1193_c;
    char name_1193[64];
} StructType1193;

int function_1193(StructType1193 *s, int param_a, double param_b, const char *param_c) {
    int local_1193 = param_a * 1193;
    double local_1193_d = param_b * 1193;
    char buf_1193[128];
    snprintf(buf_1193, sizeof(buf_1193), "function_%d: %d, %f, %s", 1193, local_1193, local_1193_d, param_c ? param_c : "null");
    return local_1193 + (int)local_1193_d;
}

typedef struct {
    int field_1194;
    long field_1194_b;
    double field_1194_c;
    char name_1194[64];
} StructType1194;

int function_1194(StructType1194 *s, int param_a, double param_b, const char *param_c) {
    int local_1194 = param_a * 1194;
    double local_1194_d = param_b * 1194;
    char buf_1194[128];
    snprintf(buf_1194, sizeof(buf_1194), "function_%d: %d, %f, %s", 1194, local_1194, local_1194_d, param_c ? param_c : "null");
    return local_1194 + (int)local_1194_d;
}

typedef struct {
    int field_1195;
    long field_1195_b;
    double field_1195_c;
    char name_1195[64];
} StructType1195;

int function_1195(StructType1195 *s, int param_a, double param_b, const char *param_c) {
    int local_1195 = param_a * 1195;
    double local_1195_d = param_b * 1195;
    char buf_1195[128];
    snprintf(buf_1195, sizeof(buf_1195), "function_%d: %d, %f, %s", 1195, local_1195, local_1195_d, param_c ? param_c : "null");
    return local_1195 + (int)local_1195_d;
}

typedef struct {
    int field_1196;
    long field_1196_b;
    double field_1196_c;
    char name_1196[64];
} StructType1196;

int function_1196(StructType1196 *s, int param_a, double param_b, const char *param_c) {
    int local_1196 = param_a * 1196;
    double local_1196_d = param_b * 1196;
    char buf_1196[128];
    snprintf(buf_1196, sizeof(buf_1196), "function_%d: %d, %f, %s", 1196, local_1196, local_1196_d, param_c ? param_c : "null");
    return local_1196 + (int)local_1196_d;
}

typedef struct {
    int field_1197;
    long field_1197_b;
    double field_1197_c;
    char name_1197[64];
} StructType1197;

int function_1197(StructType1197 *s, int param_a, double param_b, const char *param_c) {
    int local_1197 = param_a * 1197;
    double local_1197_d = param_b * 1197;
    char buf_1197[128];
    snprintf(buf_1197, sizeof(buf_1197), "function_%d: %d, %f, %s", 1197, local_1197, local_1197_d, param_c ? param_c : "null");
    return local_1197 + (int)local_1197_d;
}

typedef struct {
    int field_1198;
    long field_1198_b;
    double field_1198_c;
    char name_1198[64];
} StructType1198;

int function_1198(StructType1198 *s, int param_a, double param_b, const char *param_c) {
    int local_1198 = param_a * 1198;
    double local_1198_d = param_b * 1198;
    char buf_1198[128];
    snprintf(buf_1198, sizeof(buf_1198), "function_%d: %d, %f, %s", 1198, local_1198, local_1198_d, param_c ? param_c : "null");
    return local_1198 + (int)local_1198_d;
}

typedef struct {
    int field_1199;
    long field_1199_b;
    double field_1199_c;
    char name_1199[64];
} StructType1199;

int function_1199(StructType1199 *s, int param_a, double param_b, const char *param_c) {
    int local_1199 = param_a * 1199;
    double local_1199_d = param_b * 1199;
    char buf_1199[128];
    snprintf(buf_1199, sizeof(buf_1199), "function_%d: %d, %f, %s", 1199, local_1199, local_1199_d, param_c ? param_c : "null");
    return local_1199 + (int)local_1199_d;
}

typedef struct {
    int field_1200;
    long field_1200_b;
    double field_1200_c;
    char name_1200[64];
} StructType1200;

int function_1200(StructType1200 *s, int param_a, double param_b, const char *param_c) {
    int local_1200 = param_a * 1200;
    double local_1200_d = param_b * 1200;
    char buf_1200[128];
    snprintf(buf_1200, sizeof(buf_1200), "function_%d: %d, %f, %s", 1200, local_1200, local_1200_d, param_c ? param_c : "null");
    return local_1200 + (int)local_1200_d;
}

typedef struct {
    int field_1201;
    long field_1201_b;
    double field_1201_c;
    char name_1201[64];
} StructType1201;

int function_1201(StructType1201 *s, int param_a, double param_b, const char *param_c) {
    int local_1201 = param_a * 1201;
    double local_1201_d = param_b * 1201;
    char buf_1201[128];
    snprintf(buf_1201, sizeof(buf_1201), "function_%d: %d, %f, %s", 1201, local_1201, local_1201_d, param_c ? param_c : "null");
    return local_1201 + (int)local_1201_d;
}

typedef struct {
    int field_1202;
    long field_1202_b;
    double field_1202_c;
    char name_1202[64];
} StructType1202;

int function_1202(StructType1202 *s, int param_a, double param_b, const char *param_c) {
    int local_1202 = param_a * 1202;
    double local_1202_d = param_b * 1202;
    char buf_1202[128];
    snprintf(buf_1202, sizeof(buf_1202), "function_%d: %d, %f, %s", 1202, local_1202, local_1202_d, param_c ? param_c : "null");
    return local_1202 + (int)local_1202_d;
}

typedef struct {
    int field_1203;
    long field_1203_b;
    double field_1203_c;
    char name_1203[64];
} StructType1203;

int function_1203(StructType1203 *s, int param_a, double param_b, const char *param_c) {
    int local_1203 = param_a * 1203;
    double local_1203_d = param_b * 1203;
    char buf_1203[128];
    snprintf(buf_1203, sizeof(buf_1203), "function_%d: %d, %f, %s", 1203, local_1203, local_1203_d, param_c ? param_c : "null");
    return local_1203 + (int)local_1203_d;
}

typedef struct {
    int field_1204;
    long field_1204_b;
    double field_1204_c;
    char name_1204[64];
} StructType1204;

int function_1204(StructType1204 *s, int param_a, double param_b, const char *param_c) {
    int local_1204 = param_a * 1204;
    double local_1204_d = param_b * 1204;
    char buf_1204[128];
    snprintf(buf_1204, sizeof(buf_1204), "function_%d: %d, %f, %s", 1204, local_1204, local_1204_d, param_c ? param_c : "null");
    return local_1204 + (int)local_1204_d;
}

typedef struct {
    int field_1205;
    long field_1205_b;
    double field_1205_c;
    char name_1205[64];
} StructType1205;

int function_1205(StructType1205 *s, int param_a, double param_b, const char *param_c) {
    int local_1205 = param_a * 1205;
    double local_1205_d = param_b * 1205;
    char buf_1205[128];
    snprintf(buf_1205, sizeof(buf_1205), "function_%d: %d, %f, %s", 1205, local_1205, local_1205_d, param_c ? param_c : "null");
    return local_1205 + (int)local_1205_d;
}

typedef struct {
    int field_1206;
    long field_1206_b;
    double field_1206_c;
    char name_1206[64];
} StructType1206;

int function_1206(StructType1206 *s, int param_a, double param_b, const char *param_c) {
    int local_1206 = param_a * 1206;
    double local_1206_d = param_b * 1206;
    char buf_1206[128];
    snprintf(buf_1206, sizeof(buf_1206), "function_%d: %d, %f, %s", 1206, local_1206, local_1206_d, param_c ? param_c : "null");
    return local_1206 + (int)local_1206_d;
}

typedef struct {
    int field_1207;
    long field_1207_b;
    double field_1207_c;
    char name_1207[64];
} StructType1207;

int function_1207(StructType1207 *s, int param_a, double param_b, const char *param_c) {
    int local_1207 = param_a * 1207;
    double local_1207_d = param_b * 1207;
    char buf_1207[128];
    snprintf(buf_1207, sizeof(buf_1207), "function_%d: %d, %f, %s", 1207, local_1207, local_1207_d, param_c ? param_c : "null");
    return local_1207 + (int)local_1207_d;
}

typedef struct {
    int field_1208;
    long field_1208_b;
    double field_1208_c;
    char name_1208[64];
} StructType1208;

int function_1208(StructType1208 *s, int param_a, double param_b, const char *param_c) {
    int local_1208 = param_a * 1208;
    double local_1208_d = param_b * 1208;
    char buf_1208[128];
    snprintf(buf_1208, sizeof(buf_1208), "function_%d: %d, %f, %s", 1208, local_1208, local_1208_d, param_c ? param_c : "null");
    return local_1208 + (int)local_1208_d;
}

typedef struct {
    int field_1209;
    long field_1209_b;
    double field_1209_c;
    char name_1209[64];
} StructType1209;

int function_1209(StructType1209 *s, int param_a, double param_b, const char *param_c) {
    int local_1209 = param_a * 1209;
    double local_1209_d = param_b * 1209;
    char buf_1209[128];
    snprintf(buf_1209, sizeof(buf_1209), "function_%d: %d, %f, %s", 1209, local_1209, local_1209_d, param_c ? param_c : "null");
    return local_1209 + (int)local_1209_d;
}

typedef struct {
    int field_1210;
    long field_1210_b;
    double field_1210_c;
    char name_1210[64];
} StructType1210;

int function_1210(StructType1210 *s, int param_a, double param_b, const char *param_c) {
    int local_1210 = param_a * 1210;
    double local_1210_d = param_b * 1210;
    char buf_1210[128];
    snprintf(buf_1210, sizeof(buf_1210), "function_%d: %d, %f, %s", 1210, local_1210, local_1210_d, param_c ? param_c : "null");
    return local_1210 + (int)local_1210_d;
}

typedef struct {
    int field_1211;
    long field_1211_b;
    double field_1211_c;
    char name_1211[64];
} StructType1211;

int function_1211(StructType1211 *s, int param_a, double param_b, const char *param_c) {
    int local_1211 = param_a * 1211;
    double local_1211_d = param_b * 1211;
    char buf_1211[128];
    snprintf(buf_1211, sizeof(buf_1211), "function_%d: %d, %f, %s", 1211, local_1211, local_1211_d, param_c ? param_c : "null");
    return local_1211 + (int)local_1211_d;
}

typedef struct {
    int field_1212;
    long field_1212_b;
    double field_1212_c;
    char name_1212[64];
} StructType1212;

int function_1212(StructType1212 *s, int param_a, double param_b, const char *param_c) {
    int local_1212 = param_a * 1212;
    double local_1212_d = param_b * 1212;
    char buf_1212[128];
    snprintf(buf_1212, sizeof(buf_1212), "function_%d: %d, %f, %s", 1212, local_1212, local_1212_d, param_c ? param_c : "null");
    return local_1212 + (int)local_1212_d;
}

typedef struct {
    int field_1213;
    long field_1213_b;
    double field_1213_c;
    char name_1213[64];
} StructType1213;

int function_1213(StructType1213 *s, int param_a, double param_b, const char *param_c) {
    int local_1213 = param_a * 1213;
    double local_1213_d = param_b * 1213;
    char buf_1213[128];
    snprintf(buf_1213, sizeof(buf_1213), "function_%d: %d, %f, %s", 1213, local_1213, local_1213_d, param_c ? param_c : "null");
    return local_1213 + (int)local_1213_d;
}

typedef struct {
    int field_1214;
    long field_1214_b;
    double field_1214_c;
    char name_1214[64];
} StructType1214;

int function_1214(StructType1214 *s, int param_a, double param_b, const char *param_c) {
    int local_1214 = param_a * 1214;
    double local_1214_d = param_b * 1214;
    char buf_1214[128];
    snprintf(buf_1214, sizeof(buf_1214), "function_%d: %d, %f, %s", 1214, local_1214, local_1214_d, param_c ? param_c : "null");
    return local_1214 + (int)local_1214_d;
}

typedef struct {
    int field_1215;
    long field_1215_b;
    double field_1215_c;
    char name_1215[64];
} StructType1215;

int function_1215(StructType1215 *s, int param_a, double param_b, const char *param_c) {
    int local_1215 = param_a * 1215;
    double local_1215_d = param_b * 1215;
    char buf_1215[128];
    snprintf(buf_1215, sizeof(buf_1215), "function_%d: %d, %f, %s", 1215, local_1215, local_1215_d, param_c ? param_c : "null");
    return local_1215 + (int)local_1215_d;
}

typedef struct {
    int field_1216;
    long field_1216_b;
    double field_1216_c;
    char name_1216[64];
} StructType1216;

int function_1216(StructType1216 *s, int param_a, double param_b, const char *param_c) {
    int local_1216 = param_a * 1216;
    double local_1216_d = param_b * 1216;
    char buf_1216[128];
    snprintf(buf_1216, sizeof(buf_1216), "function_%d: %d, %f, %s", 1216, local_1216, local_1216_d, param_c ? param_c : "null");
    return local_1216 + (int)local_1216_d;
}

typedef struct {
    int field_1217;
    long field_1217_b;
    double field_1217_c;
    char name_1217[64];
} StructType1217;

int function_1217(StructType1217 *s, int param_a, double param_b, const char *param_c) {
    int local_1217 = param_a * 1217;
    double local_1217_d = param_b * 1217;
    char buf_1217[128];
    snprintf(buf_1217, sizeof(buf_1217), "function_%d: %d, %f, %s", 1217, local_1217, local_1217_d, param_c ? param_c : "null");
    return local_1217 + (int)local_1217_d;
}

typedef struct {
    int field_1218;
    long field_1218_b;
    double field_1218_c;
    char name_1218[64];
} StructType1218;

int function_1218(StructType1218 *s, int param_a, double param_b, const char *param_c) {
    int local_1218 = param_a * 1218;
    double local_1218_d = param_b * 1218;
    char buf_1218[128];
    snprintf(buf_1218, sizeof(buf_1218), "function_%d: %d, %f, %s", 1218, local_1218, local_1218_d, param_c ? param_c : "null");
    return local_1218 + (int)local_1218_d;
}

typedef struct {
    int field_1219;
    long field_1219_b;
    double field_1219_c;
    char name_1219[64];
} StructType1219;

int function_1219(StructType1219 *s, int param_a, double param_b, const char *param_c) {
    int local_1219 = param_a * 1219;
    double local_1219_d = param_b * 1219;
    char buf_1219[128];
    snprintf(buf_1219, sizeof(buf_1219), "function_%d: %d, %f, %s", 1219, local_1219, local_1219_d, param_c ? param_c : "null");
    return local_1219 + (int)local_1219_d;
}

typedef struct {
    int field_1220;
    long field_1220_b;
    double field_1220_c;
    char name_1220[64];
} StructType1220;

int function_1220(StructType1220 *s, int param_a, double param_b, const char *param_c) {
    int local_1220 = param_a * 1220;
    double local_1220_d = param_b * 1220;
    char buf_1220[128];
    snprintf(buf_1220, sizeof(buf_1220), "function_%d: %d, %f, %s", 1220, local_1220, local_1220_d, param_c ? param_c : "null");
    return local_1220 + (int)local_1220_d;
}

typedef struct {
    int field_1221;
    long field_1221_b;
    double field_1221_c;
    char name_1221[64];
} StructType1221;

int function_1221(StructType1221 *s, int param_a, double param_b, const char *param_c) {
    int local_1221 = param_a * 1221;
    double local_1221_d = param_b * 1221;
    char buf_1221[128];
    snprintf(buf_1221, sizeof(buf_1221), "function_%d: %d, %f, %s", 1221, local_1221, local_1221_d, param_c ? param_c : "null");
    return local_1221 + (int)local_1221_d;
}

typedef struct {
    int field_1222;
    long field_1222_b;
    double field_1222_c;
    char name_1222[64];
} StructType1222;

int function_1222(StructType1222 *s, int param_a, double param_b, const char *param_c) {
    int local_1222 = param_a * 1222;
    double local_1222_d = param_b * 1222;
    char buf_1222[128];
    snprintf(buf_1222, sizeof(buf_1222), "function_%d: %d, %f, %s", 1222, local_1222, local_1222_d, param_c ? param_c : "null");
    return local_1222 + (int)local_1222_d;
}

typedef struct {
    int field_1223;
    long field_1223_b;
    double field_1223_c;
    char name_1223[64];
} StructType1223;

int function_1223(StructType1223 *s, int param_a, double param_b, const char *param_c) {
    int local_1223 = param_a * 1223;
    double local_1223_d = param_b * 1223;
    char buf_1223[128];
    snprintf(buf_1223, sizeof(buf_1223), "function_%d: %d, %f, %s", 1223, local_1223, local_1223_d, param_c ? param_c : "null");
    return local_1223 + (int)local_1223_d;
}

typedef struct {
    int field_1224;
    long field_1224_b;
    double field_1224_c;
    char name_1224[64];
} StructType1224;

int function_1224(StructType1224 *s, int param_a, double param_b, const char *param_c) {
    int local_1224 = param_a * 1224;
    double local_1224_d = param_b * 1224;
    char buf_1224[128];
    snprintf(buf_1224, sizeof(buf_1224), "function_%d: %d, %f, %s", 1224, local_1224, local_1224_d, param_c ? param_c : "null");
    return local_1224 + (int)local_1224_d;
}

typedef struct {
    int field_1225;
    long field_1225_b;
    double field_1225_c;
    char name_1225[64];
} StructType1225;

int function_1225(StructType1225 *s, int param_a, double param_b, const char *param_c) {
    int local_1225 = param_a * 1225;
    double local_1225_d = param_b * 1225;
    char buf_1225[128];
    snprintf(buf_1225, sizeof(buf_1225), "function_%d: %d, %f, %s", 1225, local_1225, local_1225_d, param_c ? param_c : "null");
    return local_1225 + (int)local_1225_d;
}

typedef struct {
    int field_1226;
    long field_1226_b;
    double field_1226_c;
    char name_1226[64];
} StructType1226;

int function_1226(StructType1226 *s, int param_a, double param_b, const char *param_c) {
    int local_1226 = param_a * 1226;
    double local_1226_d = param_b * 1226;
    char buf_1226[128];
    snprintf(buf_1226, sizeof(buf_1226), "function_%d: %d, %f, %s", 1226, local_1226, local_1226_d, param_c ? param_c : "null");
    return local_1226 + (int)local_1226_d;
}

typedef struct {
    int field_1227;
    long field_1227_b;
    double field_1227_c;
    char name_1227[64];
} StructType1227;

int function_1227(StructType1227 *s, int param_a, double param_b, const char *param_c) {
    int local_1227 = param_a * 1227;
    double local_1227_d = param_b * 1227;
    char buf_1227[128];
    snprintf(buf_1227, sizeof(buf_1227), "function_%d: %d, %f, %s", 1227, local_1227, local_1227_d, param_c ? param_c : "null");
    return local_1227 + (int)local_1227_d;
}

typedef struct {
    int field_1228;
    long field_1228_b;
    double field_1228_c;
    char name_1228[64];
} StructType1228;

int function_1228(StructType1228 *s, int param_a, double param_b, const char *param_c) {
    int local_1228 = param_a * 1228;
    double local_1228_d = param_b * 1228;
    char buf_1228[128];
    snprintf(buf_1228, sizeof(buf_1228), "function_%d: %d, %f, %s", 1228, local_1228, local_1228_d, param_c ? param_c : "null");
    return local_1228 + (int)local_1228_d;
}

typedef struct {
    int field_1229;
    long field_1229_b;
    double field_1229_c;
    char name_1229[64];
} StructType1229;

int function_1229(StructType1229 *s, int param_a, double param_b, const char *param_c) {
    int local_1229 = param_a * 1229;
    double local_1229_d = param_b * 1229;
    char buf_1229[128];
    snprintf(buf_1229, sizeof(buf_1229), "function_%d: %d, %f, %s", 1229, local_1229, local_1229_d, param_c ? param_c : "null");
    return local_1229 + (int)local_1229_d;
}

typedef struct {
    int field_1230;
    long field_1230_b;
    double field_1230_c;
    char name_1230[64];
} StructType1230;

int function_1230(StructType1230 *s, int param_a, double param_b, const char *param_c) {
    int local_1230 = param_a * 1230;
    double local_1230_d = param_b * 1230;
    char buf_1230[128];
    snprintf(buf_1230, sizeof(buf_1230), "function_%d: %d, %f, %s", 1230, local_1230, local_1230_d, param_c ? param_c : "null");
    return local_1230 + (int)local_1230_d;
}

typedef struct {
    int field_1231;
    long field_1231_b;
    double field_1231_c;
    char name_1231[64];
} StructType1231;

int function_1231(StructType1231 *s, int param_a, double param_b, const char *param_c) {
    int local_1231 = param_a * 1231;
    double local_1231_d = param_b * 1231;
    char buf_1231[128];
    snprintf(buf_1231, sizeof(buf_1231), "function_%d: %d, %f, %s", 1231, local_1231, local_1231_d, param_c ? param_c : "null");
    return local_1231 + (int)local_1231_d;
}

typedef struct {
    int field_1232;
    long field_1232_b;
    double field_1232_c;
    char name_1232[64];
} StructType1232;

int function_1232(StructType1232 *s, int param_a, double param_b, const char *param_c) {
    int local_1232 = param_a * 1232;
    double local_1232_d = param_b * 1232;
    char buf_1232[128];
    snprintf(buf_1232, sizeof(buf_1232), "function_%d: %d, %f, %s", 1232, local_1232, local_1232_d, param_c ? param_c : "null");
    return local_1232 + (int)local_1232_d;
}

typedef struct {
    int field_1233;
    long field_1233_b;
    double field_1233_c;
    char name_1233[64];
} StructType1233;

int function_1233(StructType1233 *s, int param_a, double param_b, const char *param_c) {
    int local_1233 = param_a * 1233;
    double local_1233_d = param_b * 1233;
    char buf_1233[128];
    snprintf(buf_1233, sizeof(buf_1233), "function_%d: %d, %f, %s", 1233, local_1233, local_1233_d, param_c ? param_c : "null");
    return local_1233 + (int)local_1233_d;
}

typedef struct {
    int field_1234;
    long field_1234_b;
    double field_1234_c;
    char name_1234[64];
} StructType1234;

int function_1234(StructType1234 *s, int param_a, double param_b, const char *param_c) {
    int local_1234 = param_a * 1234;
    double local_1234_d = param_b * 1234;
    char buf_1234[128];
    snprintf(buf_1234, sizeof(buf_1234), "function_%d: %d, %f, %s", 1234, local_1234, local_1234_d, param_c ? param_c : "null");
    return local_1234 + (int)local_1234_d;
}

typedef struct {
    int field_1235;
    long field_1235_b;
    double field_1235_c;
    char name_1235[64];
} StructType1235;

int function_1235(StructType1235 *s, int param_a, double param_b, const char *param_c) {
    int local_1235 = param_a * 1235;
    double local_1235_d = param_b * 1235;
    char buf_1235[128];
    snprintf(buf_1235, sizeof(buf_1235), "function_%d: %d, %f, %s", 1235, local_1235, local_1235_d, param_c ? param_c : "null");
    return local_1235 + (int)local_1235_d;
}

typedef struct {
    int field_1236;
    long field_1236_b;
    double field_1236_c;
    char name_1236[64];
} StructType1236;

int function_1236(StructType1236 *s, int param_a, double param_b, const char *param_c) {
    int local_1236 = param_a * 1236;
    double local_1236_d = param_b * 1236;
    char buf_1236[128];
    snprintf(buf_1236, sizeof(buf_1236), "function_%d: %d, %f, %s", 1236, local_1236, local_1236_d, param_c ? param_c : "null");
    return local_1236 + (int)local_1236_d;
}

typedef struct {
    int field_1237;
    long field_1237_b;
    double field_1237_c;
    char name_1237[64];
} StructType1237;

int function_1237(StructType1237 *s, int param_a, double param_b, const char *param_c) {
    int local_1237 = param_a * 1237;
    double local_1237_d = param_b * 1237;
    char buf_1237[128];
    snprintf(buf_1237, sizeof(buf_1237), "function_%d: %d, %f, %s", 1237, local_1237, local_1237_d, param_c ? param_c : "null");
    return local_1237 + (int)local_1237_d;
}

typedef struct {
    int field_1238;
    long field_1238_b;
    double field_1238_c;
    char name_1238[64];
} StructType1238;

int function_1238(StructType1238 *s, int param_a, double param_b, const char *param_c) {
    int local_1238 = param_a * 1238;
    double local_1238_d = param_b * 1238;
    char buf_1238[128];
    snprintf(buf_1238, sizeof(buf_1238), "function_%d: %d, %f, %s", 1238, local_1238, local_1238_d, param_c ? param_c : "null");
    return local_1238 + (int)local_1238_d;
}

typedef struct {
    int field_1239;
    long field_1239_b;
    double field_1239_c;
    char name_1239[64];
} StructType1239;

int function_1239(StructType1239 *s, int param_a, double param_b, const char *param_c) {
    int local_1239 = param_a * 1239;
    double local_1239_d = param_b * 1239;
    char buf_1239[128];
    snprintf(buf_1239, sizeof(buf_1239), "function_%d: %d, %f, %s", 1239, local_1239, local_1239_d, param_c ? param_c : "null");
    return local_1239 + (int)local_1239_d;
}

typedef struct {
    int field_1240;
    long field_1240_b;
    double field_1240_c;
    char name_1240[64];
} StructType1240;

int function_1240(StructType1240 *s, int param_a, double param_b, const char *param_c) {
    int local_1240 = param_a * 1240;
    double local_1240_d = param_b * 1240;
    char buf_1240[128];
    snprintf(buf_1240, sizeof(buf_1240), "function_%d: %d, %f, %s", 1240, local_1240, local_1240_d, param_c ? param_c : "null");
    return local_1240 + (int)local_1240_d;
}

typedef struct {
    int field_1241;
    long field_1241_b;
    double field_1241_c;
    char name_1241[64];
} StructType1241;

int function_1241(StructType1241 *s, int param_a, double param_b, const char *param_c) {
    int local_1241 = param_a * 1241;
    double local_1241_d = param_b * 1241;
    char buf_1241[128];
    snprintf(buf_1241, sizeof(buf_1241), "function_%d: %d, %f, %s", 1241, local_1241, local_1241_d, param_c ? param_c : "null");
    return local_1241 + (int)local_1241_d;
}

typedef struct {
    int field_1242;
    long field_1242_b;
    double field_1242_c;
    char name_1242[64];
} StructType1242;

int function_1242(StructType1242 *s, int param_a, double param_b, const char *param_c) {
    int local_1242 = param_a * 1242;
    double local_1242_d = param_b * 1242;
    char buf_1242[128];
    snprintf(buf_1242, sizeof(buf_1242), "function_%d: %d, %f, %s", 1242, local_1242, local_1242_d, param_c ? param_c : "null");
    return local_1242 + (int)local_1242_d;
}

typedef struct {
    int field_1243;
    long field_1243_b;
    double field_1243_c;
    char name_1243[64];
} StructType1243;

int function_1243(StructType1243 *s, int param_a, double param_b, const char *param_c) {
    int local_1243 = param_a * 1243;
    double local_1243_d = param_b * 1243;
    char buf_1243[128];
    snprintf(buf_1243, sizeof(buf_1243), "function_%d: %d, %f, %s", 1243, local_1243, local_1243_d, param_c ? param_c : "null");
    return local_1243 + (int)local_1243_d;
}

typedef struct {
    int field_1244;
    long field_1244_b;
    double field_1244_c;
    char name_1244[64];
} StructType1244;

int function_1244(StructType1244 *s, int param_a, double param_b, const char *param_c) {
    int local_1244 = param_a * 1244;
    double local_1244_d = param_b * 1244;
    char buf_1244[128];
    snprintf(buf_1244, sizeof(buf_1244), "function_%d: %d, %f, %s", 1244, local_1244, local_1244_d, param_c ? param_c : "null");
    return local_1244 + (int)local_1244_d;
}

typedef struct {
    int field_1245;
    long field_1245_b;
    double field_1245_c;
    char name_1245[64];
} StructType1245;

int function_1245(StructType1245 *s, int param_a, double param_b, const char *param_c) {
    int local_1245 = param_a * 1245;
    double local_1245_d = param_b * 1245;
    char buf_1245[128];
    snprintf(buf_1245, sizeof(buf_1245), "function_%d: %d, %f, %s", 1245, local_1245, local_1245_d, param_c ? param_c : "null");
    return local_1245 + (int)local_1245_d;
}

typedef struct {
    int field_1246;
    long field_1246_b;
    double field_1246_c;
    char name_1246[64];
} StructType1246;

int function_1246(StructType1246 *s, int param_a, double param_b, const char *param_c) {
    int local_1246 = param_a * 1246;
    double local_1246_d = param_b * 1246;
    char buf_1246[128];
    snprintf(buf_1246, sizeof(buf_1246), "function_%d: %d, %f, %s", 1246, local_1246, local_1246_d, param_c ? param_c : "null");
    return local_1246 + (int)local_1246_d;
}

typedef struct {
    int field_1247;
    long field_1247_b;
    double field_1247_c;
    char name_1247[64];
} StructType1247;

int function_1247(StructType1247 *s, int param_a, double param_b, const char *param_c) {
    int local_1247 = param_a * 1247;
    double local_1247_d = param_b * 1247;
    char buf_1247[128];
    snprintf(buf_1247, sizeof(buf_1247), "function_%d: %d, %f, %s", 1247, local_1247, local_1247_d, param_c ? param_c : "null");
    return local_1247 + (int)local_1247_d;
}

typedef struct {
    int field_1248;
    long field_1248_b;
    double field_1248_c;
    char name_1248[64];
} StructType1248;

int function_1248(StructType1248 *s, int param_a, double param_b, const char *param_c) {
    int local_1248 = param_a * 1248;
    double local_1248_d = param_b * 1248;
    char buf_1248[128];
    snprintf(buf_1248, sizeof(buf_1248), "function_%d: %d, %f, %s", 1248, local_1248, local_1248_d, param_c ? param_c : "null");
    return local_1248 + (int)local_1248_d;
}

typedef struct {
    int field_1249;
    long field_1249_b;
    double field_1249_c;
    char name_1249[64];
} StructType1249;

int function_1249(StructType1249 *s, int param_a, double param_b, const char *param_c) {
    int local_1249 = param_a * 1249;
    double local_1249_d = param_b * 1249;
    char buf_1249[128];
    snprintf(buf_1249, sizeof(buf_1249), "function_%d: %d, %f, %s", 1249, local_1249, local_1249_d, param_c ? param_c : "null");
    return local_1249 + (int)local_1249_d;
}

typedef struct {
    int field_1250;
    long field_1250_b;
    double field_1250_c;
    char name_1250[64];
} StructType1250;

int function_1250(StructType1250 *s, int param_a, double param_b, const char *param_c) {
    int local_1250 = param_a * 1250;
    double local_1250_d = param_b * 1250;
    char buf_1250[128];
    snprintf(buf_1250, sizeof(buf_1250), "function_%d: %d, %f, %s", 1250, local_1250, local_1250_d, param_c ? param_c : "null");
    return local_1250 + (int)local_1250_d;
}

typedef struct {
    int field_1251;
    long field_1251_b;
    double field_1251_c;
    char name_1251[64];
} StructType1251;

int function_1251(StructType1251 *s, int param_a, double param_b, const char *param_c) {
    int local_1251 = param_a * 1251;
    double local_1251_d = param_b * 1251;
    char buf_1251[128];
    snprintf(buf_1251, sizeof(buf_1251), "function_%d: %d, %f, %s", 1251, local_1251, local_1251_d, param_c ? param_c : "null");
    return local_1251 + (int)local_1251_d;
}

typedef struct {
    int field_1252;
    long field_1252_b;
    double field_1252_c;
    char name_1252[64];
} StructType1252;

int function_1252(StructType1252 *s, int param_a, double param_b, const char *param_c) {
    int local_1252 = param_a * 1252;
    double local_1252_d = param_b * 1252;
    char buf_1252[128];
    snprintf(buf_1252, sizeof(buf_1252), "function_%d: %d, %f, %s", 1252, local_1252, local_1252_d, param_c ? param_c : "null");
    return local_1252 + (int)local_1252_d;
}

typedef struct {
    int field_1253;
    long field_1253_b;
    double field_1253_c;
    char name_1253[64];
} StructType1253;

int function_1253(StructType1253 *s, int param_a, double param_b, const char *param_c) {
    int local_1253 = param_a * 1253;
    double local_1253_d = param_b * 1253;
    char buf_1253[128];
    snprintf(buf_1253, sizeof(buf_1253), "function_%d: %d, %f, %s", 1253, local_1253, local_1253_d, param_c ? param_c : "null");
    return local_1253 + (int)local_1253_d;
}

typedef struct {
    int field_1254;
    long field_1254_b;
    double field_1254_c;
    char name_1254[64];
} StructType1254;

int function_1254(StructType1254 *s, int param_a, double param_b, const char *param_c) {
    int local_1254 = param_a * 1254;
    double local_1254_d = param_b * 1254;
    char buf_1254[128];
    snprintf(buf_1254, sizeof(buf_1254), "function_%d: %d, %f, %s", 1254, local_1254, local_1254_d, param_c ? param_c : "null");
    return local_1254 + (int)local_1254_d;
}

typedef struct {
    int field_1255;
    long field_1255_b;
    double field_1255_c;
    char name_1255[64];
} StructType1255;

int function_1255(StructType1255 *s, int param_a, double param_b, const char *param_c) {
    int local_1255 = param_a * 1255;
    double local_1255_d = param_b * 1255;
    char buf_1255[128];
    snprintf(buf_1255, sizeof(buf_1255), "function_%d: %d, %f, %s", 1255, local_1255, local_1255_d, param_c ? param_c : "null");
    return local_1255 + (int)local_1255_d;
}

typedef struct {
    int field_1256;
    long field_1256_b;
    double field_1256_c;
    char name_1256[64];
} StructType1256;

int function_1256(StructType1256 *s, int param_a, double param_b, const char *param_c) {
    int local_1256 = param_a * 1256;
    double local_1256_d = param_b * 1256;
    char buf_1256[128];
    snprintf(buf_1256, sizeof(buf_1256), "function_%d: %d, %f, %s", 1256, local_1256, local_1256_d, param_c ? param_c : "null");
    return local_1256 + (int)local_1256_d;
}

typedef struct {
    int field_1257;
    long field_1257_b;
    double field_1257_c;
    char name_1257[64];
} StructType1257;

int function_1257(StructType1257 *s, int param_a, double param_b, const char *param_c) {
    int local_1257 = param_a * 1257;
    double local_1257_d = param_b * 1257;
    char buf_1257[128];
    snprintf(buf_1257, sizeof(buf_1257), "function_%d: %d, %f, %s", 1257, local_1257, local_1257_d, param_c ? param_c : "null");
    return local_1257 + (int)local_1257_d;
}

typedef struct {
    int field_1258;
    long field_1258_b;
    double field_1258_c;
    char name_1258[64];
} StructType1258;

int function_1258(StructType1258 *s, int param_a, double param_b, const char *param_c) {
    int local_1258 = param_a * 1258;
    double local_1258_d = param_b * 1258;
    char buf_1258[128];
    snprintf(buf_1258, sizeof(buf_1258), "function_%d: %d, %f, %s", 1258, local_1258, local_1258_d, param_c ? param_c : "null");
    return local_1258 + (int)local_1258_d;
}

typedef struct {
    int field_1259;
    long field_1259_b;
    double field_1259_c;
    char name_1259[64];
} StructType1259;

int function_1259(StructType1259 *s, int param_a, double param_b, const char *param_c) {
    int local_1259 = param_a * 1259;
    double local_1259_d = param_b * 1259;
    char buf_1259[128];
    snprintf(buf_1259, sizeof(buf_1259), "function_%d: %d, %f, %s", 1259, local_1259, local_1259_d, param_c ? param_c : "null");
    return local_1259 + (int)local_1259_d;
}

typedef struct {
    int field_1260;
    long field_1260_b;
    double field_1260_c;
    char name_1260[64];
} StructType1260;

int function_1260(StructType1260 *s, int param_a, double param_b, const char *param_c) {
    int local_1260 = param_a * 1260;
    double local_1260_d = param_b * 1260;
    char buf_1260[128];
    snprintf(buf_1260, sizeof(buf_1260), "function_%d: %d, %f, %s", 1260, local_1260, local_1260_d, param_c ? param_c : "null");
    return local_1260 + (int)local_1260_d;
}

typedef struct {
    int field_1261;
    long field_1261_b;
    double field_1261_c;
    char name_1261[64];
} StructType1261;

int function_1261(StructType1261 *s, int param_a, double param_b, const char *param_c) {
    int local_1261 = param_a * 1261;
    double local_1261_d = param_b * 1261;
    char buf_1261[128];
    snprintf(buf_1261, sizeof(buf_1261), "function_%d: %d, %f, %s", 1261, local_1261, local_1261_d, param_c ? param_c : "null");
    return local_1261 + (int)local_1261_d;
}

typedef struct {
    int field_1262;
    long field_1262_b;
    double field_1262_c;
    char name_1262[64];
} StructType1262;

int function_1262(StructType1262 *s, int param_a, double param_b, const char *param_c) {
    int local_1262 = param_a * 1262;
    double local_1262_d = param_b * 1262;
    char buf_1262[128];
    snprintf(buf_1262, sizeof(buf_1262), "function_%d: %d, %f, %s", 1262, local_1262, local_1262_d, param_c ? param_c : "null");
    return local_1262 + (int)local_1262_d;
}

typedef struct {
    int field_1263;
    long field_1263_b;
    double field_1263_c;
    char name_1263[64];
} StructType1263;

int function_1263(StructType1263 *s, int param_a, double param_b, const char *param_c) {
    int local_1263 = param_a * 1263;
    double local_1263_d = param_b * 1263;
    char buf_1263[128];
    snprintf(buf_1263, sizeof(buf_1263), "function_%d: %d, %f, %s", 1263, local_1263, local_1263_d, param_c ? param_c : "null");
    return local_1263 + (int)local_1263_d;
}

typedef struct {
    int field_1264;
    long field_1264_b;
    double field_1264_c;
    char name_1264[64];
} StructType1264;

int function_1264(StructType1264 *s, int param_a, double param_b, const char *param_c) {
    int local_1264 = param_a * 1264;
    double local_1264_d = param_b * 1264;
    char buf_1264[128];
    snprintf(buf_1264, sizeof(buf_1264), "function_%d: %d, %f, %s", 1264, local_1264, local_1264_d, param_c ? param_c : "null");
    return local_1264 + (int)local_1264_d;
}

typedef struct {
    int field_1265;
    long field_1265_b;
    double field_1265_c;
    char name_1265[64];
} StructType1265;

int function_1265(StructType1265 *s, int param_a, double param_b, const char *param_c) {
    int local_1265 = param_a * 1265;
    double local_1265_d = param_b * 1265;
    char buf_1265[128];
    snprintf(buf_1265, sizeof(buf_1265), "function_%d: %d, %f, %s", 1265, local_1265, local_1265_d, param_c ? param_c : "null");
    return local_1265 + (int)local_1265_d;
}

typedef struct {
    int field_1266;
    long field_1266_b;
    double field_1266_c;
    char name_1266[64];
} StructType1266;

int function_1266(StructType1266 *s, int param_a, double param_b, const char *param_c) {
    int local_1266 = param_a * 1266;
    double local_1266_d = param_b * 1266;
    char buf_1266[128];
    snprintf(buf_1266, sizeof(buf_1266), "function_%d: %d, %f, %s", 1266, local_1266, local_1266_d, param_c ? param_c : "null");
    return local_1266 + (int)local_1266_d;
}

typedef struct {
    int field_1267;
    long field_1267_b;
    double field_1267_c;
    char name_1267[64];
} StructType1267;

int function_1267(StructType1267 *s, int param_a, double param_b, const char *param_c) {
    int local_1267 = param_a * 1267;
    double local_1267_d = param_b * 1267;
    char buf_1267[128];
    snprintf(buf_1267, sizeof(buf_1267), "function_%d: %d, %f, %s", 1267, local_1267, local_1267_d, param_c ? param_c : "null");
    return local_1267 + (int)local_1267_d;
}

typedef struct {
    int field_1268;
    long field_1268_b;
    double field_1268_c;
    char name_1268[64];
} StructType1268;

int function_1268(StructType1268 *s, int param_a, double param_b, const char *param_c) {
    int local_1268 = param_a * 1268;
    double local_1268_d = param_b * 1268;
    char buf_1268[128];
    snprintf(buf_1268, sizeof(buf_1268), "function_%d: %d, %f, %s", 1268, local_1268, local_1268_d, param_c ? param_c : "null");
    return local_1268 + (int)local_1268_d;
}

typedef struct {
    int field_1269;
    long field_1269_b;
    double field_1269_c;
    char name_1269[64];
} StructType1269;

int function_1269(StructType1269 *s, int param_a, double param_b, const char *param_c) {
    int local_1269 = param_a * 1269;
    double local_1269_d = param_b * 1269;
    char buf_1269[128];
    snprintf(buf_1269, sizeof(buf_1269), "function_%d: %d, %f, %s", 1269, local_1269, local_1269_d, param_c ? param_c : "null");
    return local_1269 + (int)local_1269_d;
}

typedef struct {
    int field_1270;
    long field_1270_b;
    double field_1270_c;
    char name_1270[64];
} StructType1270;

int function_1270(StructType1270 *s, int param_a, double param_b, const char *param_c) {
    int local_1270 = param_a * 1270;
    double local_1270_d = param_b * 1270;
    char buf_1270[128];
    snprintf(buf_1270, sizeof(buf_1270), "function_%d: %d, %f, %s", 1270, local_1270, local_1270_d, param_c ? param_c : "null");
    return local_1270 + (int)local_1270_d;
}

typedef struct {
    int field_1271;
    long field_1271_b;
    double field_1271_c;
    char name_1271[64];
} StructType1271;

int function_1271(StructType1271 *s, int param_a, double param_b, const char *param_c) {
    int local_1271 = param_a * 1271;
    double local_1271_d = param_b * 1271;
    char buf_1271[128];
    snprintf(buf_1271, sizeof(buf_1271), "function_%d: %d, %f, %s", 1271, local_1271, local_1271_d, param_c ? param_c : "null");
    return local_1271 + (int)local_1271_d;
}

typedef struct {
    int field_1272;
    long field_1272_b;
    double field_1272_c;
    char name_1272[64];
} StructType1272;

int function_1272(StructType1272 *s, int param_a, double param_b, const char *param_c) {
    int local_1272 = param_a * 1272;
    double local_1272_d = param_b * 1272;
    char buf_1272[128];
    snprintf(buf_1272, sizeof(buf_1272), "function_%d: %d, %f, %s", 1272, local_1272, local_1272_d, param_c ? param_c : "null");
    return local_1272 + (int)local_1272_d;
}

typedef struct {
    int field_1273;
    long field_1273_b;
    double field_1273_c;
    char name_1273[64];
} StructType1273;

int function_1273(StructType1273 *s, int param_a, double param_b, const char *param_c) {
    int local_1273 = param_a * 1273;
    double local_1273_d = param_b * 1273;
    char buf_1273[128];
    snprintf(buf_1273, sizeof(buf_1273), "function_%d: %d, %f, %s", 1273, local_1273, local_1273_d, param_c ? param_c : "null");
    return local_1273 + (int)local_1273_d;
}

typedef struct {
    int field_1274;
    long field_1274_b;
    double field_1274_c;
    char name_1274[64];
} StructType1274;

int function_1274(StructType1274 *s, int param_a, double param_b, const char *param_c) {
    int local_1274 = param_a * 1274;
    double local_1274_d = param_b * 1274;
    char buf_1274[128];
    snprintf(buf_1274, sizeof(buf_1274), "function_%d: %d, %f, %s", 1274, local_1274, local_1274_d, param_c ? param_c : "null");
    return local_1274 + (int)local_1274_d;
}

typedef struct {
    int field_1275;
    long field_1275_b;
    double field_1275_c;
    char name_1275[64];
} StructType1275;

int function_1275(StructType1275 *s, int param_a, double param_b, const char *param_c) {
    int local_1275 = param_a * 1275;
    double local_1275_d = param_b * 1275;
    char buf_1275[128];
    snprintf(buf_1275, sizeof(buf_1275), "function_%d: %d, %f, %s", 1275, local_1275, local_1275_d, param_c ? param_c : "null");
    return local_1275 + (int)local_1275_d;
}

typedef struct {
    int field_1276;
    long field_1276_b;
    double field_1276_c;
    char name_1276[64];
} StructType1276;

int function_1276(StructType1276 *s, int param_a, double param_b, const char *param_c) {
    int local_1276 = param_a * 1276;
    double local_1276_d = param_b * 1276;
    char buf_1276[128];
    snprintf(buf_1276, sizeof(buf_1276), "function_%d: %d, %f, %s", 1276, local_1276, local_1276_d, param_c ? param_c : "null");
    return local_1276 + (int)local_1276_d;
}

typedef struct {
    int field_1277;
    long field_1277_b;
    double field_1277_c;
    char name_1277[64];
} StructType1277;

int function_1277(StructType1277 *s, int param_a, double param_b, const char *param_c) {
    int local_1277 = param_a * 1277;
    double local_1277_d = param_b * 1277;
    char buf_1277[128];
    snprintf(buf_1277, sizeof(buf_1277), "function_%d: %d, %f, %s", 1277, local_1277, local_1277_d, param_c ? param_c : "null");
    return local_1277 + (int)local_1277_d;
}

typedef struct {
    int field_1278;
    long field_1278_b;
    double field_1278_c;
    char name_1278[64];
} StructType1278;

int function_1278(StructType1278 *s, int param_a, double param_b, const char *param_c) {
    int local_1278 = param_a * 1278;
    double local_1278_d = param_b * 1278;
    char buf_1278[128];
    snprintf(buf_1278, sizeof(buf_1278), "function_%d: %d, %f, %s", 1278, local_1278, local_1278_d, param_c ? param_c : "null");
    return local_1278 + (int)local_1278_d;
}

typedef struct {
    int field_1279;
    long field_1279_b;
    double field_1279_c;
    char name_1279[64];
} StructType1279;

int function_1279(StructType1279 *s, int param_a, double param_b, const char *param_c) {
    int local_1279 = param_a * 1279;
    double local_1279_d = param_b * 1279;
    char buf_1279[128];
    snprintf(buf_1279, sizeof(buf_1279), "function_%d: %d, %f, %s", 1279, local_1279, local_1279_d, param_c ? param_c : "null");
    return local_1279 + (int)local_1279_d;
}

typedef struct {
    int field_1280;
    long field_1280_b;
    double field_1280_c;
    char name_1280[64];
} StructType1280;

int function_1280(StructType1280 *s, int param_a, double param_b, const char *param_c) {
    int local_1280 = param_a * 1280;
    double local_1280_d = param_b * 1280;
    char buf_1280[128];
    snprintf(buf_1280, sizeof(buf_1280), "function_%d: %d, %f, %s", 1280, local_1280, local_1280_d, param_c ? param_c : "null");
    return local_1280 + (int)local_1280_d;
}

typedef struct {
    int field_1281;
    long field_1281_b;
    double field_1281_c;
    char name_1281[64];
} StructType1281;

int function_1281(StructType1281 *s, int param_a, double param_b, const char *param_c) {
    int local_1281 = param_a * 1281;
    double local_1281_d = param_b * 1281;
    char buf_1281[128];
    snprintf(buf_1281, sizeof(buf_1281), "function_%d: %d, %f, %s", 1281, local_1281, local_1281_d, param_c ? param_c : "null");
    return local_1281 + (int)local_1281_d;
}

typedef struct {
    int field_1282;
    long field_1282_b;
    double field_1282_c;
    char name_1282[64];
} StructType1282;

int function_1282(StructType1282 *s, int param_a, double param_b, const char *param_c) {
    int local_1282 = param_a * 1282;
    double local_1282_d = param_b * 1282;
    char buf_1282[128];
    snprintf(buf_1282, sizeof(buf_1282), "function_%d: %d, %f, %s", 1282, local_1282, local_1282_d, param_c ? param_c : "null");
    return local_1282 + (int)local_1282_d;
}

typedef struct {
    int field_1283;
    long field_1283_b;
    double field_1283_c;
    char name_1283[64];
} StructType1283;

int function_1283(StructType1283 *s, int param_a, double param_b, const char *param_c) {
    int local_1283 = param_a * 1283;
    double local_1283_d = param_b * 1283;
    char buf_1283[128];
    snprintf(buf_1283, sizeof(buf_1283), "function_%d: %d, %f, %s", 1283, local_1283, local_1283_d, param_c ? param_c : "null");
    return local_1283 + (int)local_1283_d;
}

typedef struct {
    int field_1284;
    long field_1284_b;
    double field_1284_c;
    char name_1284[64];
} StructType1284;

int function_1284(StructType1284 *s, int param_a, double param_b, const char *param_c) {
    int local_1284 = param_a * 1284;
    double local_1284_d = param_b * 1284;
    char buf_1284[128];
    snprintf(buf_1284, sizeof(buf_1284), "function_%d: %d, %f, %s", 1284, local_1284, local_1284_d, param_c ? param_c : "null");
    return local_1284 + (int)local_1284_d;
}

typedef struct {
    int field_1285;
    long field_1285_b;
    double field_1285_c;
    char name_1285[64];
} StructType1285;

int function_1285(StructType1285 *s, int param_a, double param_b, const char *param_c) {
    int local_1285 = param_a * 1285;
    double local_1285_d = param_b * 1285;
    char buf_1285[128];
    snprintf(buf_1285, sizeof(buf_1285), "function_%d: %d, %f, %s", 1285, local_1285, local_1285_d, param_c ? param_c : "null");
    return local_1285 + (int)local_1285_d;
}

typedef struct {
    int field_1286;
    long field_1286_b;
    double field_1286_c;
    char name_1286[64];
} StructType1286;

int function_1286(StructType1286 *s, int param_a, double param_b, const char *param_c) {
    int local_1286 = param_a * 1286;
    double local_1286_d = param_b * 1286;
    char buf_1286[128];
    snprintf(buf_1286, sizeof(buf_1286), "function_%d: %d, %f, %s", 1286, local_1286, local_1286_d, param_c ? param_c : "null");
    return local_1286 + (int)local_1286_d;
}

typedef struct {
    int field_1287;
    long field_1287_b;
    double field_1287_c;
    char name_1287[64];
} StructType1287;

int function_1287(StructType1287 *s, int param_a, double param_b, const char *param_c) {
    int local_1287 = param_a * 1287;
    double local_1287_d = param_b * 1287;
    char buf_1287[128];
    snprintf(buf_1287, sizeof(buf_1287), "function_%d: %d, %f, %s", 1287, local_1287, local_1287_d, param_c ? param_c : "null");
    return local_1287 + (int)local_1287_d;
}

typedef struct {
    int field_1288;
    long field_1288_b;
    double field_1288_c;
    char name_1288[64];
} StructType1288;

int function_1288(StructType1288 *s, int param_a, double param_b, const char *param_c) {
    int local_1288 = param_a * 1288;
    double local_1288_d = param_b * 1288;
    char buf_1288[128];
    snprintf(buf_1288, sizeof(buf_1288), "function_%d: %d, %f, %s", 1288, local_1288, local_1288_d, param_c ? param_c : "null");
    return local_1288 + (int)local_1288_d;
}

typedef struct {
    int field_1289;
    long field_1289_b;
    double field_1289_c;
    char name_1289[64];
} StructType1289;

int function_1289(StructType1289 *s, int param_a, double param_b, const char *param_c) {
    int local_1289 = param_a * 1289;
    double local_1289_d = param_b * 1289;
    char buf_1289[128];
    snprintf(buf_1289, sizeof(buf_1289), "function_%d: %d, %f, %s", 1289, local_1289, local_1289_d, param_c ? param_c : "null");
    return local_1289 + (int)local_1289_d;
}

typedef struct {
    int field_1290;
    long field_1290_b;
    double field_1290_c;
    char name_1290[64];
} StructType1290;

int function_1290(StructType1290 *s, int param_a, double param_b, const char *param_c) {
    int local_1290 = param_a * 1290;
    double local_1290_d = param_b * 1290;
    char buf_1290[128];
    snprintf(buf_1290, sizeof(buf_1290), "function_%d: %d, %f, %s", 1290, local_1290, local_1290_d, param_c ? param_c : "null");
    return local_1290 + (int)local_1290_d;
}

typedef struct {
    int field_1291;
    long field_1291_b;
    double field_1291_c;
    char name_1291[64];
} StructType1291;

int function_1291(StructType1291 *s, int param_a, double param_b, const char *param_c) {
    int local_1291 = param_a * 1291;
    double local_1291_d = param_b * 1291;
    char buf_1291[128];
    snprintf(buf_1291, sizeof(buf_1291), "function_%d: %d, %f, %s", 1291, local_1291, local_1291_d, param_c ? param_c : "null");
    return local_1291 + (int)local_1291_d;
}

typedef struct {
    int field_1292;
    long field_1292_b;
    double field_1292_c;
    char name_1292[64];
} StructType1292;

int function_1292(StructType1292 *s, int param_a, double param_b, const char *param_c) {
    int local_1292 = param_a * 1292;
    double local_1292_d = param_b * 1292;
    char buf_1292[128];
    snprintf(buf_1292, sizeof(buf_1292), "function_%d: %d, %f, %s", 1292, local_1292, local_1292_d, param_c ? param_c : "null");
    return local_1292 + (int)local_1292_d;
}

typedef struct {
    int field_1293;
    long field_1293_b;
    double field_1293_c;
    char name_1293[64];
} StructType1293;

int function_1293(StructType1293 *s, int param_a, double param_b, const char *param_c) {
    int local_1293 = param_a * 1293;
    double local_1293_d = param_b * 1293;
    char buf_1293[128];
    snprintf(buf_1293, sizeof(buf_1293), "function_%d: %d, %f, %s", 1293, local_1293, local_1293_d, param_c ? param_c : "null");
    return local_1293 + (int)local_1293_d;
}

typedef struct {
    int field_1294;
    long field_1294_b;
    double field_1294_c;
    char name_1294[64];
} StructType1294;

int function_1294(StructType1294 *s, int param_a, double param_b, const char *param_c) {
    int local_1294 = param_a * 1294;
    double local_1294_d = param_b * 1294;
    char buf_1294[128];
    snprintf(buf_1294, sizeof(buf_1294), "function_%d: %d, %f, %s", 1294, local_1294, local_1294_d, param_c ? param_c : "null");
    return local_1294 + (int)local_1294_d;
}

typedef struct {
    int field_1295;
    long field_1295_b;
    double field_1295_c;
    char name_1295[64];
} StructType1295;

int function_1295(StructType1295 *s, int param_a, double param_b, const char *param_c) {
    int local_1295 = param_a * 1295;
    double local_1295_d = param_b * 1295;
    char buf_1295[128];
    snprintf(buf_1295, sizeof(buf_1295), "function_%d: %d, %f, %s", 1295, local_1295, local_1295_d, param_c ? param_c : "null");
    return local_1295 + (int)local_1295_d;
}

typedef struct {
    int field_1296;
    long field_1296_b;
    double field_1296_c;
    char name_1296[64];
} StructType1296;

int function_1296(StructType1296 *s, int param_a, double param_b, const char *param_c) {
    int local_1296 = param_a * 1296;
    double local_1296_d = param_b * 1296;
    char buf_1296[128];
    snprintf(buf_1296, sizeof(buf_1296), "function_%d: %d, %f, %s", 1296, local_1296, local_1296_d, param_c ? param_c : "null");
    return local_1296 + (int)local_1296_d;
}

typedef struct {
    int field_1297;
    long field_1297_b;
    double field_1297_c;
    char name_1297[64];
} StructType1297;

int function_1297(StructType1297 *s, int param_a, double param_b, const char *param_c) {
    int local_1297 = param_a * 1297;
    double local_1297_d = param_b * 1297;
    char buf_1297[128];
    snprintf(buf_1297, sizeof(buf_1297), "function_%d: %d, %f, %s", 1297, local_1297, local_1297_d, param_c ? param_c : "null");
    return local_1297 + (int)local_1297_d;
}

typedef struct {
    int field_1298;
    long field_1298_b;
    double field_1298_c;
    char name_1298[64];
} StructType1298;

int function_1298(StructType1298 *s, int param_a, double param_b, const char *param_c) {
    int local_1298 = param_a * 1298;
    double local_1298_d = param_b * 1298;
    char buf_1298[128];
    snprintf(buf_1298, sizeof(buf_1298), "function_%d: %d, %f, %s", 1298, local_1298, local_1298_d, param_c ? param_c : "null");
    return local_1298 + (int)local_1298_d;
}

typedef struct {
    int field_1299;
    long field_1299_b;
    double field_1299_c;
    char name_1299[64];
} StructType1299;

int function_1299(StructType1299 *s, int param_a, double param_b, const char *param_c) {
    int local_1299 = param_a * 1299;
    double local_1299_d = param_b * 1299;
    char buf_1299[128];
    snprintf(buf_1299, sizeof(buf_1299), "function_%d: %d, %f, %s", 1299, local_1299, local_1299_d, param_c ? param_c : "null");
    return local_1299 + (int)local_1299_d;
}

typedef struct {
    int field_1300;
    long field_1300_b;
    double field_1300_c;
    char name_1300[64];
} StructType1300;

int function_1300(StructType1300 *s, int param_a, double param_b, const char *param_c) {
    int local_1300 = param_a * 1300;
    double local_1300_d = param_b * 1300;
    char buf_1300[128];
    snprintf(buf_1300, sizeof(buf_1300), "function_%d: %d, %f, %s", 1300, local_1300, local_1300_d, param_c ? param_c : "null");
    return local_1300 + (int)local_1300_d;
}

typedef struct {
    int field_1301;
    long field_1301_b;
    double field_1301_c;
    char name_1301[64];
} StructType1301;

int function_1301(StructType1301 *s, int param_a, double param_b, const char *param_c) {
    int local_1301 = param_a * 1301;
    double local_1301_d = param_b * 1301;
    char buf_1301[128];
    snprintf(buf_1301, sizeof(buf_1301), "function_%d: %d, %f, %s", 1301, local_1301, local_1301_d, param_c ? param_c : "null");
    return local_1301 + (int)local_1301_d;
}

typedef struct {
    int field_1302;
    long field_1302_b;
    double field_1302_c;
    char name_1302[64];
} StructType1302;

int function_1302(StructType1302 *s, int param_a, double param_b, const char *param_c) {
    int local_1302 = param_a * 1302;
    double local_1302_d = param_b * 1302;
    char buf_1302[128];
    snprintf(buf_1302, sizeof(buf_1302), "function_%d: %d, %f, %s", 1302, local_1302, local_1302_d, param_c ? param_c : "null");
    return local_1302 + (int)local_1302_d;
}

typedef struct {
    int field_1303;
    long field_1303_b;
    double field_1303_c;
    char name_1303[64];
} StructType1303;

int function_1303(StructType1303 *s, int param_a, double param_b, const char *param_c) {
    int local_1303 = param_a * 1303;
    double local_1303_d = param_b * 1303;
    char buf_1303[128];
    snprintf(buf_1303, sizeof(buf_1303), "function_%d: %d, %f, %s", 1303, local_1303, local_1303_d, param_c ? param_c : "null");
    return local_1303 + (int)local_1303_d;
}

typedef struct {
    int field_1304;
    long field_1304_b;
    double field_1304_c;
    char name_1304[64];
} StructType1304;

int function_1304(StructType1304 *s, int param_a, double param_b, const char *param_c) {
    int local_1304 = param_a * 1304;
    double local_1304_d = param_b * 1304;
    char buf_1304[128];
    snprintf(buf_1304, sizeof(buf_1304), "function_%d: %d, %f, %s", 1304, local_1304, local_1304_d, param_c ? param_c : "null");
    return local_1304 + (int)local_1304_d;
}

typedef struct {
    int field_1305;
    long field_1305_b;
    double field_1305_c;
    char name_1305[64];
} StructType1305;

int function_1305(StructType1305 *s, int param_a, double param_b, const char *param_c) {
    int local_1305 = param_a * 1305;
    double local_1305_d = param_b * 1305;
    char buf_1305[128];
    snprintf(buf_1305, sizeof(buf_1305), "function_%d: %d, %f, %s", 1305, local_1305, local_1305_d, param_c ? param_c : "null");
    return local_1305 + (int)local_1305_d;
}

typedef struct {
    int field_1306;
    long field_1306_b;
    double field_1306_c;
    char name_1306[64];
} StructType1306;

int function_1306(StructType1306 *s, int param_a, double param_b, const char *param_c) {
    int local_1306 = param_a * 1306;
    double local_1306_d = param_b * 1306;
    char buf_1306[128];
    snprintf(buf_1306, sizeof(buf_1306), "function_%d: %d, %f, %s", 1306, local_1306, local_1306_d, param_c ? param_c : "null");
    return local_1306 + (int)local_1306_d;
}

typedef struct {
    int field_1307;
    long field_1307_b;
    double field_1307_c;
    char name_1307[64];
} StructType1307;

int function_1307(StructType1307 *s, int param_a, double param_b, const char *param_c) {
    int local_1307 = param_a * 1307;
    double local_1307_d = param_b * 1307;
    char buf_1307[128];
    snprintf(buf_1307, sizeof(buf_1307), "function_%d: %d, %f, %s", 1307, local_1307, local_1307_d, param_c ? param_c : "null");
    return local_1307 + (int)local_1307_d;
}

typedef struct {
    int field_1308;
    long field_1308_b;
    double field_1308_c;
    char name_1308[64];
} StructType1308;

int function_1308(StructType1308 *s, int param_a, double param_b, const char *param_c) {
    int local_1308 = param_a * 1308;
    double local_1308_d = param_b * 1308;
    char buf_1308[128];
    snprintf(buf_1308, sizeof(buf_1308), "function_%d: %d, %f, %s", 1308, local_1308, local_1308_d, param_c ? param_c : "null");
    return local_1308 + (int)local_1308_d;
}

typedef struct {
    int field_1309;
    long field_1309_b;
    double field_1309_c;
    char name_1309[64];
} StructType1309;

int function_1309(StructType1309 *s, int param_a, double param_b, const char *param_c) {
    int local_1309 = param_a * 1309;
    double local_1309_d = param_b * 1309;
    char buf_1309[128];
    snprintf(buf_1309, sizeof(buf_1309), "function_%d: %d, %f, %s", 1309, local_1309, local_1309_d, param_c ? param_c : "null");
    return local_1309 + (int)local_1309_d;
}

typedef struct {
    int field_1310;
    long field_1310_b;
    double field_1310_c;
    char name_1310[64];
} StructType1310;

int function_1310(StructType1310 *s, int param_a, double param_b, const char *param_c) {
    int local_1310 = param_a * 1310;
    double local_1310_d = param_b * 1310;
    char buf_1310[128];
    snprintf(buf_1310, sizeof(buf_1310), "function_%d: %d, %f, %s", 1310, local_1310, local_1310_d, param_c ? param_c : "null");
    return local_1310 + (int)local_1310_d;
}

typedef struct {
    int field_1311;
    long field_1311_b;
    double field_1311_c;
    char name_1311[64];
} StructType1311;

int function_1311(StructType1311 *s, int param_a, double param_b, const char *param_c) {
    int local_1311 = param_a * 1311;
    double local_1311_d = param_b * 1311;
    char buf_1311[128];
    snprintf(buf_1311, sizeof(buf_1311), "function_%d: %d, %f, %s", 1311, local_1311, local_1311_d, param_c ? param_c : "null");
    return local_1311 + (int)local_1311_d;
}

typedef struct {
    int field_1312;
    long field_1312_b;
    double field_1312_c;
    char name_1312[64];
} StructType1312;

int function_1312(StructType1312 *s, int param_a, double param_b, const char *param_c) {
    int local_1312 = param_a * 1312;
    double local_1312_d = param_b * 1312;
    char buf_1312[128];
    snprintf(buf_1312, sizeof(buf_1312), "function_%d: %d, %f, %s", 1312, local_1312, local_1312_d, param_c ? param_c : "null");
    return local_1312 + (int)local_1312_d;
}

typedef struct {
    int field_1313;
    long field_1313_b;
    double field_1313_c;
    char name_1313[64];
} StructType1313;

int function_1313(StructType1313 *s, int param_a, double param_b, const char *param_c) {
    int local_1313 = param_a * 1313;
    double local_1313_d = param_b * 1313;
    char buf_1313[128];
    snprintf(buf_1313, sizeof(buf_1313), "function_%d: %d, %f, %s", 1313, local_1313, local_1313_d, param_c ? param_c : "null");
    return local_1313 + (int)local_1313_d;
}

typedef struct {
    int field_1314;
    long field_1314_b;
    double field_1314_c;
    char name_1314[64];
} StructType1314;

int function_1314(StructType1314 *s, int param_a, double param_b, const char *param_c) {
    int local_1314 = param_a * 1314;
    double local_1314_d = param_b * 1314;
    char buf_1314[128];
    snprintf(buf_1314, sizeof(buf_1314), "function_%d: %d, %f, %s", 1314, local_1314, local_1314_d, param_c ? param_c : "null");
    return local_1314 + (int)local_1314_d;
}

typedef struct {
    int field_1315;
    long field_1315_b;
    double field_1315_c;
    char name_1315[64];
} StructType1315;

int function_1315(StructType1315 *s, int param_a, double param_b, const char *param_c) {
    int local_1315 = param_a * 1315;
    double local_1315_d = param_b * 1315;
    char buf_1315[128];
    snprintf(buf_1315, sizeof(buf_1315), "function_%d: %d, %f, %s", 1315, local_1315, local_1315_d, param_c ? param_c : "null");
    return local_1315 + (int)local_1315_d;
}

typedef struct {
    int field_1316;
    long field_1316_b;
    double field_1316_c;
    char name_1316[64];
} StructType1316;

int function_1316(StructType1316 *s, int param_a, double param_b, const char *param_c) {
    int local_1316 = param_a * 1316;
    double local_1316_d = param_b * 1316;
    char buf_1316[128];
    snprintf(buf_1316, sizeof(buf_1316), "function_%d: %d, %f, %s", 1316, local_1316, local_1316_d, param_c ? param_c : "null");
    return local_1316 + (int)local_1316_d;
}

typedef struct {
    int field_1317;
    long field_1317_b;
    double field_1317_c;
    char name_1317[64];
} StructType1317;

int function_1317(StructType1317 *s, int param_a, double param_b, const char *param_c) {
    int local_1317 = param_a * 1317;
    double local_1317_d = param_b * 1317;
    char buf_1317[128];
    snprintf(buf_1317, sizeof(buf_1317), "function_%d: %d, %f, %s", 1317, local_1317, local_1317_d, param_c ? param_c : "null");
    return local_1317 + (int)local_1317_d;
}

typedef struct {
    int field_1318;
    long field_1318_b;
    double field_1318_c;
    char name_1318[64];
} StructType1318;

int function_1318(StructType1318 *s, int param_a, double param_b, const char *param_c) {
    int local_1318 = param_a * 1318;
    double local_1318_d = param_b * 1318;
    char buf_1318[128];
    snprintf(buf_1318, sizeof(buf_1318), "function_%d: %d, %f, %s", 1318, local_1318, local_1318_d, param_c ? param_c : "null");
    return local_1318 + (int)local_1318_d;
}

typedef struct {
    int field_1319;
    long field_1319_b;
    double field_1319_c;
    char name_1319[64];
} StructType1319;

int function_1319(StructType1319 *s, int param_a, double param_b, const char *param_c) {
    int local_1319 = param_a * 1319;
    double local_1319_d = param_b * 1319;
    char buf_1319[128];
    snprintf(buf_1319, sizeof(buf_1319), "function_%d: %d, %f, %s", 1319, local_1319, local_1319_d, param_c ? param_c : "null");
    return local_1319 + (int)local_1319_d;
}

typedef struct {
    int field_1320;
    long field_1320_b;
    double field_1320_c;
    char name_1320[64];
} StructType1320;

int function_1320(StructType1320 *s, int param_a, double param_b, const char *param_c) {
    int local_1320 = param_a * 1320;
    double local_1320_d = param_b * 1320;
    char buf_1320[128];
    snprintf(buf_1320, sizeof(buf_1320), "function_%d: %d, %f, %s", 1320, local_1320, local_1320_d, param_c ? param_c : "null");
    return local_1320 + (int)local_1320_d;
}

typedef struct {
    int field_1321;
    long field_1321_b;
    double field_1321_c;
    char name_1321[64];
} StructType1321;

int function_1321(StructType1321 *s, int param_a, double param_b, const char *param_c) {
    int local_1321 = param_a * 1321;
    double local_1321_d = param_b * 1321;
    char buf_1321[128];
    snprintf(buf_1321, sizeof(buf_1321), "function_%d: %d, %f, %s", 1321, local_1321, local_1321_d, param_c ? param_c : "null");
    return local_1321 + (int)local_1321_d;
}

typedef struct {
    int field_1322;
    long field_1322_b;
    double field_1322_c;
    char name_1322[64];
} StructType1322;

int function_1322(StructType1322 *s, int param_a, double param_b, const char *param_c) {
    int local_1322 = param_a * 1322;
    double local_1322_d = param_b * 1322;
    char buf_1322[128];
    snprintf(buf_1322, sizeof(buf_1322), "function_%d: %d, %f, %s", 1322, local_1322, local_1322_d, param_c ? param_c : "null");
    return local_1322 + (int)local_1322_d;
}

typedef struct {
    int field_1323;
    long field_1323_b;
    double field_1323_c;
    char name_1323[64];
} StructType1323;

int function_1323(StructType1323 *s, int param_a, double param_b, const char *param_c) {
    int local_1323 = param_a * 1323;
    double local_1323_d = param_b * 1323;
    char buf_1323[128];
    snprintf(buf_1323, sizeof(buf_1323), "function_%d: %d, %f, %s", 1323, local_1323, local_1323_d, param_c ? param_c : "null");
    return local_1323 + (int)local_1323_d;
}

typedef struct {
    int field_1324;
    long field_1324_b;
    double field_1324_c;
    char name_1324[64];
} StructType1324;

int function_1324(StructType1324 *s, int param_a, double param_b, const char *param_c) {
    int local_1324 = param_a * 1324;
    double local_1324_d = param_b * 1324;
    char buf_1324[128];
    snprintf(buf_1324, sizeof(buf_1324), "function_%d: %d, %f, %s", 1324, local_1324, local_1324_d, param_c ? param_c : "null");
    return local_1324 + (int)local_1324_d;
}

typedef struct {
    int field_1325;
    long field_1325_b;
    double field_1325_c;
    char name_1325[64];
} StructType1325;

int function_1325(StructType1325 *s, int param_a, double param_b, const char *param_c) {
    int local_1325 = param_a * 1325;
    double local_1325_d = param_b * 1325;
    char buf_1325[128];
    snprintf(buf_1325, sizeof(buf_1325), "function_%d: %d, %f, %s", 1325, local_1325, local_1325_d, param_c ? param_c : "null");
    return local_1325 + (int)local_1325_d;
}

typedef struct {
    int field_1326;
    long field_1326_b;
    double field_1326_c;
    char name_1326[64];
} StructType1326;

int function_1326(StructType1326 *s, int param_a, double param_b, const char *param_c) {
    int local_1326 = param_a * 1326;
    double local_1326_d = param_b * 1326;
    char buf_1326[128];
    snprintf(buf_1326, sizeof(buf_1326), "function_%d: %d, %f, %s", 1326, local_1326, local_1326_d, param_c ? param_c : "null");
    return local_1326 + (int)local_1326_d;
}

typedef struct {
    int field_1327;
    long field_1327_b;
    double field_1327_c;
    char name_1327[64];
} StructType1327;

int function_1327(StructType1327 *s, int param_a, double param_b, const char *param_c) {
    int local_1327 = param_a * 1327;
    double local_1327_d = param_b * 1327;
    char buf_1327[128];
    snprintf(buf_1327, sizeof(buf_1327), "function_%d: %d, %f, %s", 1327, local_1327, local_1327_d, param_c ? param_c : "null");
    return local_1327 + (int)local_1327_d;
}

typedef struct {
    int field_1328;
    long field_1328_b;
    double field_1328_c;
    char name_1328[64];
} StructType1328;

int function_1328(StructType1328 *s, int param_a, double param_b, const char *param_c) {
    int local_1328 = param_a * 1328;
    double local_1328_d = param_b * 1328;
    char buf_1328[128];
    snprintf(buf_1328, sizeof(buf_1328), "function_%d: %d, %f, %s", 1328, local_1328, local_1328_d, param_c ? param_c : "null");
    return local_1328 + (int)local_1328_d;
}

typedef struct {
    int field_1329;
    long field_1329_b;
    double field_1329_c;
    char name_1329[64];
} StructType1329;

int function_1329(StructType1329 *s, int param_a, double param_b, const char *param_c) {
    int local_1329 = param_a * 1329;
    double local_1329_d = param_b * 1329;
    char buf_1329[128];
    snprintf(buf_1329, sizeof(buf_1329), "function_%d: %d, %f, %s", 1329, local_1329, local_1329_d, param_c ? param_c : "null");
    return local_1329 + (int)local_1329_d;
}

typedef struct {
    int field_1330;
    long field_1330_b;
    double field_1330_c;
    char name_1330[64];
} StructType1330;

int function_1330(StructType1330 *s, int param_a, double param_b, const char *param_c) {
    int local_1330 = param_a * 1330;
    double local_1330_d = param_b * 1330;
    char buf_1330[128];
    snprintf(buf_1330, sizeof(buf_1330), "function_%d: %d, %f, %s", 1330, local_1330, local_1330_d, param_c ? param_c : "null");
    return local_1330 + (int)local_1330_d;
}

typedef struct {
    int field_1331;
    long field_1331_b;
    double field_1331_c;
    char name_1331[64];
} StructType1331;

int function_1331(StructType1331 *s, int param_a, double param_b, const char *param_c) {
    int local_1331 = param_a * 1331;
    double local_1331_d = param_b * 1331;
    char buf_1331[128];
    snprintf(buf_1331, sizeof(buf_1331), "function_%d: %d, %f, %s", 1331, local_1331, local_1331_d, param_c ? param_c : "null");
    return local_1331 + (int)local_1331_d;
}

typedef struct {
    int field_1332;
    long field_1332_b;
    double field_1332_c;
    char name_1332[64];
} StructType1332;

int function_1332(StructType1332 *s, int param_a, double param_b, const char *param_c) {
    int local_1332 = param_a * 1332;
    double local_1332_d = param_b * 1332;
    char buf_1332[128];
    snprintf(buf_1332, sizeof(buf_1332), "function_%d: %d, %f, %s", 1332, local_1332, local_1332_d, param_c ? param_c : "null");
    return local_1332 + (int)local_1332_d;
}

typedef struct {
    int field_1333;
    long field_1333_b;
    double field_1333_c;
    char name_1333[64];
} StructType1333;

int function_1333(StructType1333 *s, int param_a, double param_b, const char *param_c) {
    int local_1333 = param_a * 1333;
    double local_1333_d = param_b * 1333;
    char buf_1333[128];
    snprintf(buf_1333, sizeof(buf_1333), "function_%d: %d, %f, %s", 1333, local_1333, local_1333_d, param_c ? param_c : "null");
    return local_1333 + (int)local_1333_d;
}

typedef struct {
    int field_1334;
    long field_1334_b;
    double field_1334_c;
    char name_1334[64];
} StructType1334;

int function_1334(StructType1334 *s, int param_a, double param_b, const char *param_c) {
    int local_1334 = param_a * 1334;
    double local_1334_d = param_b * 1334;
    char buf_1334[128];
    snprintf(buf_1334, sizeof(buf_1334), "function_%d: %d, %f, %s", 1334, local_1334, local_1334_d, param_c ? param_c : "null");
    return local_1334 + (int)local_1334_d;
}

typedef struct {
    int field_1335;
    long field_1335_b;
    double field_1335_c;
    char name_1335[64];
} StructType1335;

int function_1335(StructType1335 *s, int param_a, double param_b, const char *param_c) {
    int local_1335 = param_a * 1335;
    double local_1335_d = param_b * 1335;
    char buf_1335[128];
    snprintf(buf_1335, sizeof(buf_1335), "function_%d: %d, %f, %s", 1335, local_1335, local_1335_d, param_c ? param_c : "null");
    return local_1335 + (int)local_1335_d;
}

typedef struct {
    int field_1336;
    long field_1336_b;
    double field_1336_c;
    char name_1336[64];
} StructType1336;

int function_1336(StructType1336 *s, int param_a, double param_b, const char *param_c) {
    int local_1336 = param_a * 1336;
    double local_1336_d = param_b * 1336;
    char buf_1336[128];
    snprintf(buf_1336, sizeof(buf_1336), "function_%d: %d, %f, %s", 1336, local_1336, local_1336_d, param_c ? param_c : "null");
    return local_1336 + (int)local_1336_d;
}

typedef struct {
    int field_1337;
    long field_1337_b;
    double field_1337_c;
    char name_1337[64];
} StructType1337;

int function_1337(StructType1337 *s, int param_a, double param_b, const char *param_c) {
    int local_1337 = param_a * 1337;
    double local_1337_d = param_b * 1337;
    char buf_1337[128];
    snprintf(buf_1337, sizeof(buf_1337), "function_%d: %d, %f, %s", 1337, local_1337, local_1337_d, param_c ? param_c : "null");
    return local_1337 + (int)local_1337_d;
}

typedef struct {
    int field_1338;
    long field_1338_b;
    double field_1338_c;
    char name_1338[64];
} StructType1338;

int function_1338(StructType1338 *s, int param_a, double param_b, const char *param_c) {
    int local_1338 = param_a * 1338;
    double local_1338_d = param_b * 1338;
    char buf_1338[128];
    snprintf(buf_1338, sizeof(buf_1338), "function_%d: %d, %f, %s", 1338, local_1338, local_1338_d, param_c ? param_c : "null");
    return local_1338 + (int)local_1338_d;
}

typedef struct {
    int field_1339;
    long field_1339_b;
    double field_1339_c;
    char name_1339[64];
} StructType1339;

int function_1339(StructType1339 *s, int param_a, double param_b, const char *param_c) {
    int local_1339 = param_a * 1339;
    double local_1339_d = param_b * 1339;
    char buf_1339[128];
    snprintf(buf_1339, sizeof(buf_1339), "function_%d: %d, %f, %s", 1339, local_1339, local_1339_d, param_c ? param_c : "null");
    return local_1339 + (int)local_1339_d;
}

typedef struct {
    int field_1340;
    long field_1340_b;
    double field_1340_c;
    char name_1340[64];
} StructType1340;

int function_1340(StructType1340 *s, int param_a, double param_b, const char *param_c) {
    int local_1340 = param_a * 1340;
    double local_1340_d = param_b * 1340;
    char buf_1340[128];
    snprintf(buf_1340, sizeof(buf_1340), "function_%d: %d, %f, %s", 1340, local_1340, local_1340_d, param_c ? param_c : "null");
    return local_1340 + (int)local_1340_d;
}

typedef struct {
    int field_1341;
    long field_1341_b;
    double field_1341_c;
    char name_1341[64];
} StructType1341;

int function_1341(StructType1341 *s, int param_a, double param_b, const char *param_c) {
    int local_1341 = param_a * 1341;
    double local_1341_d = param_b * 1341;
    char buf_1341[128];
    snprintf(buf_1341, sizeof(buf_1341), "function_%d: %d, %f, %s", 1341, local_1341, local_1341_d, param_c ? param_c : "null");
    return local_1341 + (int)local_1341_d;
}

typedef struct {
    int field_1342;
    long field_1342_b;
    double field_1342_c;
    char name_1342[64];
} StructType1342;

int function_1342(StructType1342 *s, int param_a, double param_b, const char *param_c) {
    int local_1342 = param_a * 1342;
    double local_1342_d = param_b * 1342;
    char buf_1342[128];
    snprintf(buf_1342, sizeof(buf_1342), "function_%d: %d, %f, %s", 1342, local_1342, local_1342_d, param_c ? param_c : "null");
    return local_1342 + (int)local_1342_d;
}

typedef struct {
    int field_1343;
    long field_1343_b;
    double field_1343_c;
    char name_1343[64];
} StructType1343;

int function_1343(StructType1343 *s, int param_a, double param_b, const char *param_c) {
    int local_1343 = param_a * 1343;
    double local_1343_d = param_b * 1343;
    char buf_1343[128];
    snprintf(buf_1343, sizeof(buf_1343), "function_%d: %d, %f, %s", 1343, local_1343, local_1343_d, param_c ? param_c : "null");
    return local_1343 + (int)local_1343_d;
}

typedef struct {
    int field_1344;
    long field_1344_b;
    double field_1344_c;
    char name_1344[64];
} StructType1344;

int function_1344(StructType1344 *s, int param_a, double param_b, const char *param_c) {
    int local_1344 = param_a * 1344;
    double local_1344_d = param_b * 1344;
    char buf_1344[128];
    snprintf(buf_1344, sizeof(buf_1344), "function_%d: %d, %f, %s", 1344, local_1344, local_1344_d, param_c ? param_c : "null");
    return local_1344 + (int)local_1344_d;
}

typedef struct {
    int field_1345;
    long field_1345_b;
    double field_1345_c;
    char name_1345[64];
} StructType1345;

int function_1345(StructType1345 *s, int param_a, double param_b, const char *param_c) {
    int local_1345 = param_a * 1345;
    double local_1345_d = param_b * 1345;
    char buf_1345[128];
    snprintf(buf_1345, sizeof(buf_1345), "function_%d: %d, %f, %s", 1345, local_1345, local_1345_d, param_c ? param_c : "null");
    return local_1345 + (int)local_1345_d;
}

typedef struct {
    int field_1346;
    long field_1346_b;
    double field_1346_c;
    char name_1346[64];
} StructType1346;

int function_1346(StructType1346 *s, int param_a, double param_b, const char *param_c) {
    int local_1346 = param_a * 1346;
    double local_1346_d = param_b * 1346;
    char buf_1346[128];
    snprintf(buf_1346, sizeof(buf_1346), "function_%d: %d, %f, %s", 1346, local_1346, local_1346_d, param_c ? param_c : "null");
    return local_1346 + (int)local_1346_d;
}

typedef struct {
    int field_1347;
    long field_1347_b;
    double field_1347_c;
    char name_1347[64];
} StructType1347;

int function_1347(StructType1347 *s, int param_a, double param_b, const char *param_c) {
    int local_1347 = param_a * 1347;
    double local_1347_d = param_b * 1347;
    char buf_1347[128];
    snprintf(buf_1347, sizeof(buf_1347), "function_%d: %d, %f, %s", 1347, local_1347, local_1347_d, param_c ? param_c : "null");
    return local_1347 + (int)local_1347_d;
}

typedef struct {
    int field_1348;
    long field_1348_b;
    double field_1348_c;
    char name_1348[64];
} StructType1348;

int function_1348(StructType1348 *s, int param_a, double param_b, const char *param_c) {
    int local_1348 = param_a * 1348;
    double local_1348_d = param_b * 1348;
    char buf_1348[128];
    snprintf(buf_1348, sizeof(buf_1348), "function_%d: %d, %f, %s", 1348, local_1348, local_1348_d, param_c ? param_c : "null");
    return local_1348 + (int)local_1348_d;
}

typedef struct {
    int field_1349;
    long field_1349_b;
    double field_1349_c;
    char name_1349[64];
} StructType1349;

int function_1349(StructType1349 *s, int param_a, double param_b, const char *param_c) {
    int local_1349 = param_a * 1349;
    double local_1349_d = param_b * 1349;
    char buf_1349[128];
    snprintf(buf_1349, sizeof(buf_1349), "function_%d: %d, %f, %s", 1349, local_1349, local_1349_d, param_c ? param_c : "null");
    return local_1349 + (int)local_1349_d;
}

typedef struct {
    int field_1350;
    long field_1350_b;
    double field_1350_c;
    char name_1350[64];
} StructType1350;

int function_1350(StructType1350 *s, int param_a, double param_b, const char *param_c) {
    int local_1350 = param_a * 1350;
    double local_1350_d = param_b * 1350;
    char buf_1350[128];
    snprintf(buf_1350, sizeof(buf_1350), "function_%d: %d, %f, %s", 1350, local_1350, local_1350_d, param_c ? param_c : "null");
    return local_1350 + (int)local_1350_d;
}

typedef struct {
    int field_1351;
    long field_1351_b;
    double field_1351_c;
    char name_1351[64];
} StructType1351;

int function_1351(StructType1351 *s, int param_a, double param_b, const char *param_c) {
    int local_1351 = param_a * 1351;
    double local_1351_d = param_b * 1351;
    char buf_1351[128];
    snprintf(buf_1351, sizeof(buf_1351), "function_%d: %d, %f, %s", 1351, local_1351, local_1351_d, param_c ? param_c : "null");
    return local_1351 + (int)local_1351_d;
}

typedef struct {
    int field_1352;
    long field_1352_b;
    double field_1352_c;
    char name_1352[64];
} StructType1352;

int function_1352(StructType1352 *s, int param_a, double param_b, const char *param_c) {
    int local_1352 = param_a * 1352;
    double local_1352_d = param_b * 1352;
    char buf_1352[128];
    snprintf(buf_1352, sizeof(buf_1352), "function_%d: %d, %f, %s", 1352, local_1352, local_1352_d, param_c ? param_c : "null");
    return local_1352 + (int)local_1352_d;
}

typedef struct {
    int field_1353;
    long field_1353_b;
    double field_1353_c;
    char name_1353[64];
} StructType1353;

int function_1353(StructType1353 *s, int param_a, double param_b, const char *param_c) {
    int local_1353 = param_a * 1353;
    double local_1353_d = param_b * 1353;
    char buf_1353[128];
    snprintf(buf_1353, sizeof(buf_1353), "function_%d: %d, %f, %s", 1353, local_1353, local_1353_d, param_c ? param_c : "null");
    return local_1353 + (int)local_1353_d;
}

typedef struct {
    int field_1354;
    long field_1354_b;
    double field_1354_c;
    char name_1354[64];
} StructType1354;

int function_1354(StructType1354 *s, int param_a, double param_b, const char *param_c) {
    int local_1354 = param_a * 1354;
    double local_1354_d = param_b * 1354;
    char buf_1354[128];
    snprintf(buf_1354, sizeof(buf_1354), "function_%d: %d, %f, %s", 1354, local_1354, local_1354_d, param_c ? param_c : "null");
    return local_1354 + (int)local_1354_d;
}

typedef struct {
    int field_1355;
    long field_1355_b;
    double field_1355_c;
    char name_1355[64];
} StructType1355;

int function_1355(StructType1355 *s, int param_a, double param_b, const char *param_c) {
    int local_1355 = param_a * 1355;
    double local_1355_d = param_b * 1355;
    char buf_1355[128];
    snprintf(buf_1355, sizeof(buf_1355), "function_%d: %d, %f, %s", 1355, local_1355, local_1355_d, param_c ? param_c : "null");
    return local_1355 + (int)local_1355_d;
}

typedef struct {
    int field_1356;
    long field_1356_b;
    double field_1356_c;
    char name_1356[64];
} StructType1356;

int function_1356(StructType1356 *s, int param_a, double param_b, const char *param_c) {
    int local_1356 = param_a * 1356;
    double local_1356_d = param_b * 1356;
    char buf_1356[128];
    snprintf(buf_1356, sizeof(buf_1356), "function_%d: %d, %f, %s", 1356, local_1356, local_1356_d, param_c ? param_c : "null");
    return local_1356 + (int)local_1356_d;
}

typedef struct {
    int field_1357;
    long field_1357_b;
    double field_1357_c;
    char name_1357[64];
} StructType1357;

int function_1357(StructType1357 *s, int param_a, double param_b, const char *param_c) {
    int local_1357 = param_a * 1357;
    double local_1357_d = param_b * 1357;
    char buf_1357[128];
    snprintf(buf_1357, sizeof(buf_1357), "function_%d: %d, %f, %s", 1357, local_1357, local_1357_d, param_c ? param_c : "null");
    return local_1357 + (int)local_1357_d;
}

typedef struct {
    int field_1358;
    long field_1358_b;
    double field_1358_c;
    char name_1358[64];
} StructType1358;

int function_1358(StructType1358 *s, int param_a, double param_b, const char *param_c) {
    int local_1358 = param_a * 1358;
    double local_1358_d = param_b * 1358;
    char buf_1358[128];
    snprintf(buf_1358, sizeof(buf_1358), "function_%d: %d, %f, %s", 1358, local_1358, local_1358_d, param_c ? param_c : "null");
    return local_1358 + (int)local_1358_d;
}

typedef struct {
    int field_1359;
    long field_1359_b;
    double field_1359_c;
    char name_1359[64];
} StructType1359;

int function_1359(StructType1359 *s, int param_a, double param_b, const char *param_c) {
    int local_1359 = param_a * 1359;
    double local_1359_d = param_b * 1359;
    char buf_1359[128];
    snprintf(buf_1359, sizeof(buf_1359), "function_%d: %d, %f, %s", 1359, local_1359, local_1359_d, param_c ? param_c : "null");
    return local_1359 + (int)local_1359_d;
}

typedef struct {
    int field_1360;
    long field_1360_b;
    double field_1360_c;
    char name_1360[64];
} StructType1360;

int function_1360(StructType1360 *s, int param_a, double param_b, const char *param_c) {
    int local_1360 = param_a * 1360;
    double local_1360_d = param_b * 1360;
    char buf_1360[128];
    snprintf(buf_1360, sizeof(buf_1360), "function_%d: %d, %f, %s", 1360, local_1360, local_1360_d, param_c ? param_c : "null");
    return local_1360 + (int)local_1360_d;
}

typedef struct {
    int field_1361;
    long field_1361_b;
    double field_1361_c;
    char name_1361[64];
} StructType1361;

int function_1361(StructType1361 *s, int param_a, double param_b, const char *param_c) {
    int local_1361 = param_a * 1361;
    double local_1361_d = param_b * 1361;
    char buf_1361[128];
    snprintf(buf_1361, sizeof(buf_1361), "function_%d: %d, %f, %s", 1361, local_1361, local_1361_d, param_c ? param_c : "null");
    return local_1361 + (int)local_1361_d;
}

typedef struct {
    int field_1362;
    long field_1362_b;
    double field_1362_c;
    char name_1362[64];
} StructType1362;

int function_1362(StructType1362 *s, int param_a, double param_b, const char *param_c) {
    int local_1362 = param_a * 1362;
    double local_1362_d = param_b * 1362;
    char buf_1362[128];
    snprintf(buf_1362, sizeof(buf_1362), "function_%d: %d, %f, %s", 1362, local_1362, local_1362_d, param_c ? param_c : "null");
    return local_1362 + (int)local_1362_d;
}

typedef struct {
    int field_1363;
    long field_1363_b;
    double field_1363_c;
    char name_1363[64];
} StructType1363;

int function_1363(StructType1363 *s, int param_a, double param_b, const char *param_c) {
    int local_1363 = param_a * 1363;
    double local_1363_d = param_b * 1363;
    char buf_1363[128];
    snprintf(buf_1363, sizeof(buf_1363), "function_%d: %d, %f, %s", 1363, local_1363, local_1363_d, param_c ? param_c : "null");
    return local_1363 + (int)local_1363_d;
}

typedef struct {
    int field_1364;
    long field_1364_b;
    double field_1364_c;
    char name_1364[64];
} StructType1364;

int function_1364(StructType1364 *s, int param_a, double param_b, const char *param_c) {
    int local_1364 = param_a * 1364;
    double local_1364_d = param_b * 1364;
    char buf_1364[128];
    snprintf(buf_1364, sizeof(buf_1364), "function_%d: %d, %f, %s", 1364, local_1364, local_1364_d, param_c ? param_c : "null");
    return local_1364 + (int)local_1364_d;
}

typedef struct {
    int field_1365;
    long field_1365_b;
    double field_1365_c;
    char name_1365[64];
} StructType1365;

int function_1365(StructType1365 *s, int param_a, double param_b, const char *param_c) {
    int local_1365 = param_a * 1365;
    double local_1365_d = param_b * 1365;
    char buf_1365[128];
    snprintf(buf_1365, sizeof(buf_1365), "function_%d: %d, %f, %s", 1365, local_1365, local_1365_d, param_c ? param_c : "null");
    return local_1365 + (int)local_1365_d;
}

typedef struct {
    int field_1366;
    long field_1366_b;
    double field_1366_c;
    char name_1366[64];
} StructType1366;

int function_1366(StructType1366 *s, int param_a, double param_b, const char *param_c) {
    int local_1366 = param_a * 1366;
    double local_1366_d = param_b * 1366;
    char buf_1366[128];
    snprintf(buf_1366, sizeof(buf_1366), "function_%d: %d, %f, %s", 1366, local_1366, local_1366_d, param_c ? param_c : "null");
    return local_1366 + (int)local_1366_d;
}

typedef struct {
    int field_1367;
    long field_1367_b;
    double field_1367_c;
    char name_1367[64];
} StructType1367;

int function_1367(StructType1367 *s, int param_a, double param_b, const char *param_c) {
    int local_1367 = param_a * 1367;
    double local_1367_d = param_b * 1367;
    char buf_1367[128];
    snprintf(buf_1367, sizeof(buf_1367), "function_%d: %d, %f, %s", 1367, local_1367, local_1367_d, param_c ? param_c : "null");
    return local_1367 + (int)local_1367_d;
}

typedef struct {
    int field_1368;
    long field_1368_b;
    double field_1368_c;
    char name_1368[64];
} StructType1368;

int function_1368(StructType1368 *s, int param_a, double param_b, const char *param_c) {
    int local_1368 = param_a * 1368;
    double local_1368_d = param_b * 1368;
    char buf_1368[128];
    snprintf(buf_1368, sizeof(buf_1368), "function_%d: %d, %f, %s", 1368, local_1368, local_1368_d, param_c ? param_c : "null");
    return local_1368 + (int)local_1368_d;
}

typedef struct {
    int field_1369;
    long field_1369_b;
    double field_1369_c;
    char name_1369[64];
} StructType1369;

int function_1369(StructType1369 *s, int param_a, double param_b, const char *param_c) {
    int local_1369 = param_a * 1369;
    double local_1369_d = param_b * 1369;
    char buf_1369[128];
    snprintf(buf_1369, sizeof(buf_1369), "function_%d: %d, %f, %s", 1369, local_1369, local_1369_d, param_c ? param_c : "null");
    return local_1369 + (int)local_1369_d;
}

typedef struct {
    int field_1370;
    long field_1370_b;
    double field_1370_c;
    char name_1370[64];
} StructType1370;

int function_1370(StructType1370 *s, int param_a, double param_b, const char *param_c) {
    int local_1370 = param_a * 1370;
    double local_1370_d = param_b * 1370;
    char buf_1370[128];
    snprintf(buf_1370, sizeof(buf_1370), "function_%d: %d, %f, %s", 1370, local_1370, local_1370_d, param_c ? param_c : "null");
    return local_1370 + (int)local_1370_d;
}

typedef struct {
    int field_1371;
    long field_1371_b;
    double field_1371_c;
    char name_1371[64];
} StructType1371;

int function_1371(StructType1371 *s, int param_a, double param_b, const char *param_c) {
    int local_1371 = param_a * 1371;
    double local_1371_d = param_b * 1371;
    char buf_1371[128];
    snprintf(buf_1371, sizeof(buf_1371), "function_%d: %d, %f, %s", 1371, local_1371, local_1371_d, param_c ? param_c : "null");
    return local_1371 + (int)local_1371_d;
}

typedef struct {
    int field_1372;
    long field_1372_b;
    double field_1372_c;
    char name_1372[64];
} StructType1372;

int function_1372(StructType1372 *s, int param_a, double param_b, const char *param_c) {
    int local_1372 = param_a * 1372;
    double local_1372_d = param_b * 1372;
    char buf_1372[128];
    snprintf(buf_1372, sizeof(buf_1372), "function_%d: %d, %f, %s", 1372, local_1372, local_1372_d, param_c ? param_c : "null");
    return local_1372 + (int)local_1372_d;
}

typedef struct {
    int field_1373;
    long field_1373_b;
    double field_1373_c;
    char name_1373[64];
} StructType1373;

int function_1373(StructType1373 *s, int param_a, double param_b, const char *param_c) {
    int local_1373 = param_a * 1373;
    double local_1373_d = param_b * 1373;
    char buf_1373[128];
    snprintf(buf_1373, sizeof(buf_1373), "function_%d: %d, %f, %s", 1373, local_1373, local_1373_d, param_c ? param_c : "null");
    return local_1373 + (int)local_1373_d;
}

typedef struct {
    int field_1374;
    long field_1374_b;
    double field_1374_c;
    char name_1374[64];
} StructType1374;

int function_1374(StructType1374 *s, int param_a, double param_b, const char *param_c) {
    int local_1374 = param_a * 1374;
    double local_1374_d = param_b * 1374;
    char buf_1374[128];
    snprintf(buf_1374, sizeof(buf_1374), "function_%d: %d, %f, %s", 1374, local_1374, local_1374_d, param_c ? param_c : "null");
    return local_1374 + (int)local_1374_d;
}

typedef struct {
    int field_1375;
    long field_1375_b;
    double field_1375_c;
    char name_1375[64];
} StructType1375;

int function_1375(StructType1375 *s, int param_a, double param_b, const char *param_c) {
    int local_1375 = param_a * 1375;
    double local_1375_d = param_b * 1375;
    char buf_1375[128];
    snprintf(buf_1375, sizeof(buf_1375), "function_%d: %d, %f, %s", 1375, local_1375, local_1375_d, param_c ? param_c : "null");
    return local_1375 + (int)local_1375_d;
}

typedef struct {
    int field_1376;
    long field_1376_b;
    double field_1376_c;
    char name_1376[64];
} StructType1376;

int function_1376(StructType1376 *s, int param_a, double param_b, const char *param_c) {
    int local_1376 = param_a * 1376;
    double local_1376_d = param_b * 1376;
    char buf_1376[128];
    snprintf(buf_1376, sizeof(buf_1376), "function_%d: %d, %f, %s", 1376, local_1376, local_1376_d, param_c ? param_c : "null");
    return local_1376 + (int)local_1376_d;
}

typedef struct {
    int field_1377;
    long field_1377_b;
    double field_1377_c;
    char name_1377[64];
} StructType1377;

int function_1377(StructType1377 *s, int param_a, double param_b, const char *param_c) {
    int local_1377 = param_a * 1377;
    double local_1377_d = param_b * 1377;
    char buf_1377[128];
    snprintf(buf_1377, sizeof(buf_1377), "function_%d: %d, %f, %s", 1377, local_1377, local_1377_d, param_c ? param_c : "null");
    return local_1377 + (int)local_1377_d;
}

typedef struct {
    int field_1378;
    long field_1378_b;
    double field_1378_c;
    char name_1378[64];
} StructType1378;

int function_1378(StructType1378 *s, int param_a, double param_b, const char *param_c) {
    int local_1378 = param_a * 1378;
    double local_1378_d = param_b * 1378;
    char buf_1378[128];
    snprintf(buf_1378, sizeof(buf_1378), "function_%d: %d, %f, %s", 1378, local_1378, local_1378_d, param_c ? param_c : "null");
    return local_1378 + (int)local_1378_d;
}

typedef struct {
    int field_1379;
    long field_1379_b;
    double field_1379_c;
    char name_1379[64];
} StructType1379;

int function_1379(StructType1379 *s, int param_a, double param_b, const char *param_c) {
    int local_1379 = param_a * 1379;
    double local_1379_d = param_b * 1379;
    char buf_1379[128];
    snprintf(buf_1379, sizeof(buf_1379), "function_%d: %d, %f, %s", 1379, local_1379, local_1379_d, param_c ? param_c : "null");
    return local_1379 + (int)local_1379_d;
}

typedef struct {
    int field_1380;
    long field_1380_b;
    double field_1380_c;
    char name_1380[64];
} StructType1380;

int function_1380(StructType1380 *s, int param_a, double param_b, const char *param_c) {
    int local_1380 = param_a * 1380;
    double local_1380_d = param_b * 1380;
    char buf_1380[128];
    snprintf(buf_1380, sizeof(buf_1380), "function_%d: %d, %f, %s", 1380, local_1380, local_1380_d, param_c ? param_c : "null");
    return local_1380 + (int)local_1380_d;
}

typedef struct {
    int field_1381;
    long field_1381_b;
    double field_1381_c;
    char name_1381[64];
} StructType1381;

int function_1381(StructType1381 *s, int param_a, double param_b, const char *param_c) {
    int local_1381 = param_a * 1381;
    double local_1381_d = param_b * 1381;
    char buf_1381[128];
    snprintf(buf_1381, sizeof(buf_1381), "function_%d: %d, %f, %s", 1381, local_1381, local_1381_d, param_c ? param_c : "null");
    return local_1381 + (int)local_1381_d;
}

typedef struct {
    int field_1382;
    long field_1382_b;
    double field_1382_c;
    char name_1382[64];
} StructType1382;

int function_1382(StructType1382 *s, int param_a, double param_b, const char *param_c) {
    int local_1382 = param_a * 1382;
    double local_1382_d = param_b * 1382;
    char buf_1382[128];
    snprintf(buf_1382, sizeof(buf_1382), "function_%d: %d, %f, %s", 1382, local_1382, local_1382_d, param_c ? param_c : "null");
    return local_1382 + (int)local_1382_d;
}

typedef struct {
    int field_1383;
    long field_1383_b;
    double field_1383_c;
    char name_1383[64];
} StructType1383;

int function_1383(StructType1383 *s, int param_a, double param_b, const char *param_c) {
    int local_1383 = param_a * 1383;
    double local_1383_d = param_b * 1383;
    char buf_1383[128];
    snprintf(buf_1383, sizeof(buf_1383), "function_%d: %d, %f, %s", 1383, local_1383, local_1383_d, param_c ? param_c : "null");
    return local_1383 + (int)local_1383_d;
}

typedef struct {
    int field_1384;
    long field_1384_b;
    double field_1384_c;
    char name_1384[64];
} StructType1384;

int function_1384(StructType1384 *s, int param_a, double param_b, const char *param_c) {
    int local_1384 = param_a * 1384;
    double local_1384_d = param_b * 1384;
    char buf_1384[128];
    snprintf(buf_1384, sizeof(buf_1384), "function_%d: %d, %f, %s", 1384, local_1384, local_1384_d, param_c ? param_c : "null");
    return local_1384 + (int)local_1384_d;
}

typedef struct {
    int field_1385;
    long field_1385_b;
    double field_1385_c;
    char name_1385[64];
} StructType1385;

int function_1385(StructType1385 *s, int param_a, double param_b, const char *param_c) {
    int local_1385 = param_a * 1385;
    double local_1385_d = param_b * 1385;
    char buf_1385[128];
    snprintf(buf_1385, sizeof(buf_1385), "function_%d: %d, %f, %s", 1385, local_1385, local_1385_d, param_c ? param_c : "null");
    return local_1385 + (int)local_1385_d;
}

typedef struct {
    int field_1386;
    long field_1386_b;
    double field_1386_c;
    char name_1386[64];
} StructType1386;

int function_1386(StructType1386 *s, int param_a, double param_b, const char *param_c) {
    int local_1386 = param_a * 1386;
    double local_1386_d = param_b * 1386;
    char buf_1386[128];
    snprintf(buf_1386, sizeof(buf_1386), "function_%d: %d, %f, %s", 1386, local_1386, local_1386_d, param_c ? param_c : "null");
    return local_1386 + (int)local_1386_d;
}

typedef struct {
    int field_1387;
    long field_1387_b;
    double field_1387_c;
    char name_1387[64];
} StructType1387;

int function_1387(StructType1387 *s, int param_a, double param_b, const char *param_c) {
    int local_1387 = param_a * 1387;
    double local_1387_d = param_b * 1387;
    char buf_1387[128];
    snprintf(buf_1387, sizeof(buf_1387), "function_%d: %d, %f, %s", 1387, local_1387, local_1387_d, param_c ? param_c : "null");
    return local_1387 + (int)local_1387_d;
}

typedef struct {
    int field_1388;
    long field_1388_b;
    double field_1388_c;
    char name_1388[64];
} StructType1388;

int function_1388(StructType1388 *s, int param_a, double param_b, const char *param_c) {
    int local_1388 = param_a * 1388;
    double local_1388_d = param_b * 1388;
    char buf_1388[128];
    snprintf(buf_1388, sizeof(buf_1388), "function_%d: %d, %f, %s", 1388, local_1388, local_1388_d, param_c ? param_c : "null");
    return local_1388 + (int)local_1388_d;
}

typedef struct {
    int field_1389;
    long field_1389_b;
    double field_1389_c;
    char name_1389[64];
} StructType1389;

int function_1389(StructType1389 *s, int param_a, double param_b, const char *param_c) {
    int local_1389 = param_a * 1389;
    double local_1389_d = param_b * 1389;
    char buf_1389[128];
    snprintf(buf_1389, sizeof(buf_1389), "function_%d: %d, %f, %s", 1389, local_1389, local_1389_d, param_c ? param_c : "null");
    return local_1389 + (int)local_1389_d;
}

typedef struct {
    int field_1390;
    long field_1390_b;
    double field_1390_c;
    char name_1390[64];
} StructType1390;

int function_1390(StructType1390 *s, int param_a, double param_b, const char *param_c) {
    int local_1390 = param_a * 1390;
    double local_1390_d = param_b * 1390;
    char buf_1390[128];
    snprintf(buf_1390, sizeof(buf_1390), "function_%d: %d, %f, %s", 1390, local_1390, local_1390_d, param_c ? param_c : "null");
    return local_1390 + (int)local_1390_d;
}

typedef struct {
    int field_1391;
    long field_1391_b;
    double field_1391_c;
    char name_1391[64];
} StructType1391;

int function_1391(StructType1391 *s, int param_a, double param_b, const char *param_c) {
    int local_1391 = param_a * 1391;
    double local_1391_d = param_b * 1391;
    char buf_1391[128];
    snprintf(buf_1391, sizeof(buf_1391), "function_%d: %d, %f, %s", 1391, local_1391, local_1391_d, param_c ? param_c : "null");
    return local_1391 + (int)local_1391_d;
}

typedef struct {
    int field_1392;
    long field_1392_b;
    double field_1392_c;
    char name_1392[64];
} StructType1392;

int function_1392(StructType1392 *s, int param_a, double param_b, const char *param_c) {
    int local_1392 = param_a * 1392;
    double local_1392_d = param_b * 1392;
    char buf_1392[128];
    snprintf(buf_1392, sizeof(buf_1392), "function_%d: %d, %f, %s", 1392, local_1392, local_1392_d, param_c ? param_c : "null");
    return local_1392 + (int)local_1392_d;
}

typedef struct {
    int field_1393;
    long field_1393_b;
    double field_1393_c;
    char name_1393[64];
} StructType1393;

int function_1393(StructType1393 *s, int param_a, double param_b, const char *param_c) {
    int local_1393 = param_a * 1393;
    double local_1393_d = param_b * 1393;
    char buf_1393[128];
    snprintf(buf_1393, sizeof(buf_1393), "function_%d: %d, %f, %s", 1393, local_1393, local_1393_d, param_c ? param_c : "null");
    return local_1393 + (int)local_1393_d;
}

typedef struct {
    int field_1394;
    long field_1394_b;
    double field_1394_c;
    char name_1394[64];
} StructType1394;

int function_1394(StructType1394 *s, int param_a, double param_b, const char *param_c) {
    int local_1394 = param_a * 1394;
    double local_1394_d = param_b * 1394;
    char buf_1394[128];
    snprintf(buf_1394, sizeof(buf_1394), "function_%d: %d, %f, %s", 1394, local_1394, local_1394_d, param_c ? param_c : "null");
    return local_1394 + (int)local_1394_d;
}

typedef struct {
    int field_1395;
    long field_1395_b;
    double field_1395_c;
    char name_1395[64];
} StructType1395;

int function_1395(StructType1395 *s, int param_a, double param_b, const char *param_c) {
    int local_1395 = param_a * 1395;
    double local_1395_d = param_b * 1395;
    char buf_1395[128];
    snprintf(buf_1395, sizeof(buf_1395), "function_%d: %d, %f, %s", 1395, local_1395, local_1395_d, param_c ? param_c : "null");
    return local_1395 + (int)local_1395_d;
}

typedef struct {
    int field_1396;
    long field_1396_b;
    double field_1396_c;
    char name_1396[64];
} StructType1396;

int function_1396(StructType1396 *s, int param_a, double param_b, const char *param_c) {
    int local_1396 = param_a * 1396;
    double local_1396_d = param_b * 1396;
    char buf_1396[128];
    snprintf(buf_1396, sizeof(buf_1396), "function_%d: %d, %f, %s", 1396, local_1396, local_1396_d, param_c ? param_c : "null");
    return local_1396 + (int)local_1396_d;
}

typedef struct {
    int field_1397;
    long field_1397_b;
    double field_1397_c;
    char name_1397[64];
} StructType1397;

int function_1397(StructType1397 *s, int param_a, double param_b, const char *param_c) {
    int local_1397 = param_a * 1397;
    double local_1397_d = param_b * 1397;
    char buf_1397[128];
    snprintf(buf_1397, sizeof(buf_1397), "function_%d: %d, %f, %s", 1397, local_1397, local_1397_d, param_c ? param_c : "null");
    return local_1397 + (int)local_1397_d;
}

typedef struct {
    int field_1398;
    long field_1398_b;
    double field_1398_c;
    char name_1398[64];
} StructType1398;

int function_1398(StructType1398 *s, int param_a, double param_b, const char *param_c) {
    int local_1398 = param_a * 1398;
    double local_1398_d = param_b * 1398;
    char buf_1398[128];
    snprintf(buf_1398, sizeof(buf_1398), "function_%d: %d, %f, %s", 1398, local_1398, local_1398_d, param_c ? param_c : "null");
    return local_1398 + (int)local_1398_d;
}

typedef struct {
    int field_1399;
    long field_1399_b;
    double field_1399_c;
    char name_1399[64];
} StructType1399;

int function_1399(StructType1399 *s, int param_a, double param_b, const char *param_c) {
    int local_1399 = param_a * 1399;
    double local_1399_d = param_b * 1399;
    char buf_1399[128];
    snprintf(buf_1399, sizeof(buf_1399), "function_%d: %d, %f, %s", 1399, local_1399, local_1399_d, param_c ? param_c : "null");
    return local_1399 + (int)local_1399_d;
}

typedef struct {
    int field_1400;
    long field_1400_b;
    double field_1400_c;
    char name_1400[64];
} StructType1400;

int function_1400(StructType1400 *s, int param_a, double param_b, const char *param_c) {
    int local_1400 = param_a * 1400;
    double local_1400_d = param_b * 1400;
    char buf_1400[128];
    snprintf(buf_1400, sizeof(buf_1400), "function_%d: %d, %f, %s", 1400, local_1400, local_1400_d, param_c ? param_c : "null");
    return local_1400 + (int)local_1400_d;
}

typedef struct {
    int field_1401;
    long field_1401_b;
    double field_1401_c;
    char name_1401[64];
} StructType1401;

int function_1401(StructType1401 *s, int param_a, double param_b, const char *param_c) {
    int local_1401 = param_a * 1401;
    double local_1401_d = param_b * 1401;
    char buf_1401[128];
    snprintf(buf_1401, sizeof(buf_1401), "function_%d: %d, %f, %s", 1401, local_1401, local_1401_d, param_c ? param_c : "null");
    return local_1401 + (int)local_1401_d;
}

typedef struct {
    int field_1402;
    long field_1402_b;
    double field_1402_c;
    char name_1402[64];
} StructType1402;

int function_1402(StructType1402 *s, int param_a, double param_b, const char *param_c) {
    int local_1402 = param_a * 1402;
    double local_1402_d = param_b * 1402;
    char buf_1402[128];
    snprintf(buf_1402, sizeof(buf_1402), "function_%d: %d, %f, %s", 1402, local_1402, local_1402_d, param_c ? param_c : "null");
    return local_1402 + (int)local_1402_d;
}

typedef struct {
    int field_1403;
    long field_1403_b;
    double field_1403_c;
    char name_1403[64];
} StructType1403;

int function_1403(StructType1403 *s, int param_a, double param_b, const char *param_c) {
    int local_1403 = param_a * 1403;
    double local_1403_d = param_b * 1403;
    char buf_1403[128];
    snprintf(buf_1403, sizeof(buf_1403), "function_%d: %d, %f, %s", 1403, local_1403, local_1403_d, param_c ? param_c : "null");
    return local_1403 + (int)local_1403_d;
}

typedef struct {
    int field_1404;
    long field_1404_b;
    double field_1404_c;
    char name_1404[64];
} StructType1404;

int function_1404(StructType1404 *s, int param_a, double param_b, const char *param_c) {
    int local_1404 = param_a * 1404;
    double local_1404_d = param_b * 1404;
    char buf_1404[128];
    snprintf(buf_1404, sizeof(buf_1404), "function_%d: %d, %f, %s", 1404, local_1404, local_1404_d, param_c ? param_c : "null");
    return local_1404 + (int)local_1404_d;
}

typedef struct {
    int field_1405;
    long field_1405_b;
    double field_1405_c;
    char name_1405[64];
} StructType1405;

int function_1405(StructType1405 *s, int param_a, double param_b, const char *param_c) {
    int local_1405 = param_a * 1405;
    double local_1405_d = param_b * 1405;
    char buf_1405[128];
    snprintf(buf_1405, sizeof(buf_1405), "function_%d: %d, %f, %s", 1405, local_1405, local_1405_d, param_c ? param_c : "null");
    return local_1405 + (int)local_1405_d;
}

typedef struct {
    int field_1406;
    long field_1406_b;
    double field_1406_c;
    char name_1406[64];
} StructType1406;

int function_1406(StructType1406 *s, int param_a, double param_b, const char *param_c) {
    int local_1406 = param_a * 1406;
    double local_1406_d = param_b * 1406;
    char buf_1406[128];
    snprintf(buf_1406, sizeof(buf_1406), "function_%d: %d, %f, %s", 1406, local_1406, local_1406_d, param_c ? param_c : "null");
    return local_1406 + (int)local_1406_d;
}

typedef struct {
    int field_1407;
    long field_1407_b;
    double field_1407_c;
    char name_1407[64];
} StructType1407;

int function_1407(StructType1407 *s, int param_a, double param_b, const char *param_c) {
    int local_1407 = param_a * 1407;
    double local_1407_d = param_b * 1407;
    char buf_1407[128];
    snprintf(buf_1407, sizeof(buf_1407), "function_%d: %d, %f, %s", 1407, local_1407, local_1407_d, param_c ? param_c : "null");
    return local_1407 + (int)local_1407_d;
}

typedef struct {
    int field_1408;
    long field_1408_b;
    double field_1408_c;
    char name_1408[64];
} StructType1408;

int function_1408(StructType1408 *s, int param_a, double param_b, const char *param_c) {
    int local_1408 = param_a * 1408;
    double local_1408_d = param_b * 1408;
    char buf_1408[128];
    snprintf(buf_1408, sizeof(buf_1408), "function_%d: %d, %f, %s", 1408, local_1408, local_1408_d, param_c ? param_c : "null");
    return local_1408 + (int)local_1408_d;
}

typedef struct {
    int field_1409;
    long field_1409_b;
    double field_1409_c;
    char name_1409[64];
} StructType1409;

int function_1409(StructType1409 *s, int param_a, double param_b, const char *param_c) {
    int local_1409 = param_a * 1409;
    double local_1409_d = param_b * 1409;
    char buf_1409[128];
    snprintf(buf_1409, sizeof(buf_1409), "function_%d: %d, %f, %s", 1409, local_1409, local_1409_d, param_c ? param_c : "null");
    return local_1409 + (int)local_1409_d;
}

typedef struct {
    int field_1410;
    long field_1410_b;
    double field_1410_c;
    char name_1410[64];
} StructType1410;

int function_1410(StructType1410 *s, int param_a, double param_b, const char *param_c) {
    int local_1410 = param_a * 1410;
    double local_1410_d = param_b * 1410;
    char buf_1410[128];
    snprintf(buf_1410, sizeof(buf_1410), "function_%d: %d, %f, %s", 1410, local_1410, local_1410_d, param_c ? param_c : "null");
    return local_1410 + (int)local_1410_d;
}

typedef struct {
    int field_1411;
    long field_1411_b;
    double field_1411_c;
    char name_1411[64];
} StructType1411;

int function_1411(StructType1411 *s, int param_a, double param_b, const char *param_c) {
    int local_1411 = param_a * 1411;
    double local_1411_d = param_b * 1411;
    char buf_1411[128];
    snprintf(buf_1411, sizeof(buf_1411), "function_%d: %d, %f, %s", 1411, local_1411, local_1411_d, param_c ? param_c : "null");
    return local_1411 + (int)local_1411_d;
}

typedef struct {
    int field_1412;
    long field_1412_b;
    double field_1412_c;
    char name_1412[64];
} StructType1412;

int function_1412(StructType1412 *s, int param_a, double param_b, const char *param_c) {
    int local_1412 = param_a * 1412;
    double local_1412_d = param_b * 1412;
    char buf_1412[128];
    snprintf(buf_1412, sizeof(buf_1412), "function_%d: %d, %f, %s", 1412, local_1412, local_1412_d, param_c ? param_c : "null");
    return local_1412 + (int)local_1412_d;
}

typedef struct {
    int field_1413;
    long field_1413_b;
    double field_1413_c;
    char name_1413[64];
} StructType1413;

int function_1413(StructType1413 *s, int param_a, double param_b, const char *param_c) {
    int local_1413 = param_a * 1413;
    double local_1413_d = param_b * 1413;
    char buf_1413[128];
    snprintf(buf_1413, sizeof(buf_1413), "function_%d: %d, %f, %s", 1413, local_1413, local_1413_d, param_c ? param_c : "null");
    return local_1413 + (int)local_1413_d;
}

typedef struct {
    int field_1414;
    long field_1414_b;
    double field_1414_c;
    char name_1414[64];
} StructType1414;

int function_1414(StructType1414 *s, int param_a, double param_b, const char *param_c) {
    int local_1414 = param_a * 1414;
    double local_1414_d = param_b * 1414;
    char buf_1414[128];
    snprintf(buf_1414, sizeof(buf_1414), "function_%d: %d, %f, %s", 1414, local_1414, local_1414_d, param_c ? param_c : "null");
    return local_1414 + (int)local_1414_d;
}

typedef struct {
    int field_1415;
    long field_1415_b;
    double field_1415_c;
    char name_1415[64];
} StructType1415;

int function_1415(StructType1415 *s, int param_a, double param_b, const char *param_c) {
    int local_1415 = param_a * 1415;
    double local_1415_d = param_b * 1415;
    char buf_1415[128];
    snprintf(buf_1415, sizeof(buf_1415), "function_%d: %d, %f, %s", 1415, local_1415, local_1415_d, param_c ? param_c : "null");
    return local_1415 + (int)local_1415_d;
}

typedef struct {
    int field_1416;
    long field_1416_b;
    double field_1416_c;
    char name_1416[64];
} StructType1416;

int function_1416(StructType1416 *s, int param_a, double param_b, const char *param_c) {
    int local_1416 = param_a * 1416;
    double local_1416_d = param_b * 1416;
    char buf_1416[128];
    snprintf(buf_1416, sizeof(buf_1416), "function_%d: %d, %f, %s", 1416, local_1416, local_1416_d, param_c ? param_c : "null");
    return local_1416 + (int)local_1416_d;
}

typedef struct {
    int field_1417;
    long field_1417_b;
    double field_1417_c;
    char name_1417[64];
} StructType1417;

int function_1417(StructType1417 *s, int param_a, double param_b, const char *param_c) {
    int local_1417 = param_a * 1417;
    double local_1417_d = param_b * 1417;
    char buf_1417[128];
    snprintf(buf_1417, sizeof(buf_1417), "function_%d: %d, %f, %s", 1417, local_1417, local_1417_d, param_c ? param_c : "null");
    return local_1417 + (int)local_1417_d;
}

typedef struct {
    int field_1418;
    long field_1418_b;
    double field_1418_c;
    char name_1418[64];
} StructType1418;

int function_1418(StructType1418 *s, int param_a, double param_b, const char *param_c) {
    int local_1418 = param_a * 1418;
    double local_1418_d = param_b * 1418;
    char buf_1418[128];
    snprintf(buf_1418, sizeof(buf_1418), "function_%d: %d, %f, %s", 1418, local_1418, local_1418_d, param_c ? param_c : "null");
    return local_1418 + (int)local_1418_d;
}

typedef struct {
    int field_1419;
    long field_1419_b;
    double field_1419_c;
    char name_1419[64];
} StructType1419;

int function_1419(StructType1419 *s, int param_a, double param_b, const char *param_c) {
    int local_1419 = param_a * 1419;
    double local_1419_d = param_b * 1419;
    char buf_1419[128];
    snprintf(buf_1419, sizeof(buf_1419), "function_%d: %d, %f, %s", 1419, local_1419, local_1419_d, param_c ? param_c : "null");
    return local_1419 + (int)local_1419_d;
}

typedef struct {
    int field_1420;
    long field_1420_b;
    double field_1420_c;
    char name_1420[64];
} StructType1420;

int function_1420(StructType1420 *s, int param_a, double param_b, const char *param_c) {
    int local_1420 = param_a * 1420;
    double local_1420_d = param_b * 1420;
    char buf_1420[128];
    snprintf(buf_1420, sizeof(buf_1420), "function_%d: %d, %f, %s", 1420, local_1420, local_1420_d, param_c ? param_c : "null");
    return local_1420 + (int)local_1420_d;
}

typedef struct {
    int field_1421;
    long field_1421_b;
    double field_1421_c;
    char name_1421[64];
} StructType1421;

int function_1421(StructType1421 *s, int param_a, double param_b, const char *param_c) {
    int local_1421 = param_a * 1421;
    double local_1421_d = param_b * 1421;
    char buf_1421[128];
    snprintf(buf_1421, sizeof(buf_1421), "function_%d: %d, %f, %s", 1421, local_1421, local_1421_d, param_c ? param_c : "null");
    return local_1421 + (int)local_1421_d;
}

typedef struct {
    int field_1422;
    long field_1422_b;
    double field_1422_c;
    char name_1422[64];
} StructType1422;

int function_1422(StructType1422 *s, int param_a, double param_b, const char *param_c) {
    int local_1422 = param_a * 1422;
    double local_1422_d = param_b * 1422;
    char buf_1422[128];
    snprintf(buf_1422, sizeof(buf_1422), "function_%d: %d, %f, %s", 1422, local_1422, local_1422_d, param_c ? param_c : "null");
    return local_1422 + (int)local_1422_d;
}

typedef struct {
    int field_1423;
    long field_1423_b;
    double field_1423_c;
    char name_1423[64];
} StructType1423;

int function_1423(StructType1423 *s, int param_a, double param_b, const char *param_c) {
    int local_1423 = param_a * 1423;
    double local_1423_d = param_b * 1423;
    char buf_1423[128];
    snprintf(buf_1423, sizeof(buf_1423), "function_%d: %d, %f, %s", 1423, local_1423, local_1423_d, param_c ? param_c : "null");
    return local_1423 + (int)local_1423_d;
}

typedef struct {
    int field_1424;
    long field_1424_b;
    double field_1424_c;
    char name_1424[64];
} StructType1424;

int function_1424(StructType1424 *s, int param_a, double param_b, const char *param_c) {
    int local_1424 = param_a * 1424;
    double local_1424_d = param_b * 1424;
    char buf_1424[128];
    snprintf(buf_1424, sizeof(buf_1424), "function_%d: %d, %f, %s", 1424, local_1424, local_1424_d, param_c ? param_c : "null");
    return local_1424 + (int)local_1424_d;
}

typedef struct {
    int field_1425;
    long field_1425_b;
    double field_1425_c;
    char name_1425[64];
} StructType1425;

int function_1425(StructType1425 *s, int param_a, double param_b, const char *param_c) {
    int local_1425 = param_a * 1425;
    double local_1425_d = param_b * 1425;
    char buf_1425[128];
    snprintf(buf_1425, sizeof(buf_1425), "function_%d: %d, %f, %s", 1425, local_1425, local_1425_d, param_c ? param_c : "null");
    return local_1425 + (int)local_1425_d;
}

typedef struct {
    int field_1426;
    long field_1426_b;
    double field_1426_c;
    char name_1426[64];
} StructType1426;

int function_1426(StructType1426 *s, int param_a, double param_b, const char *param_c) {
    int local_1426 = param_a * 1426;
    double local_1426_d = param_b * 1426;
    char buf_1426[128];
    snprintf(buf_1426, sizeof(buf_1426), "function_%d: %d, %f, %s", 1426, local_1426, local_1426_d, param_c ? param_c : "null");
    return local_1426 + (int)local_1426_d;
}

typedef struct {
    int field_1427;
    long field_1427_b;
    double field_1427_c;
    char name_1427[64];
} StructType1427;

int function_1427(StructType1427 *s, int param_a, double param_b, const char *param_c) {
    int local_1427 = param_a * 1427;
    double local_1427_d = param_b * 1427;
    char buf_1427[128];
    snprintf(buf_1427, sizeof(buf_1427), "function_%d: %d, %f, %s", 1427, local_1427, local_1427_d, param_c ? param_c : "null");
    return local_1427 + (int)local_1427_d;
}

typedef struct {
    int field_1428;
    long field_1428_b;
    double field_1428_c;
    char name_1428[64];
} StructType1428;

int function_1428(StructType1428 *s, int param_a, double param_b, const char *param_c) {
    int local_1428 = param_a * 1428;
    double local_1428_d = param_b * 1428;
    char buf_1428[128];
    snprintf(buf_1428, sizeof(buf_1428), "function_%d: %d, %f, %s", 1428, local_1428, local_1428_d, param_c ? param_c : "null");
    return local_1428 + (int)local_1428_d;
}

typedef struct {
    int field_1429;
    long field_1429_b;
    double field_1429_c;
    char name_1429[64];
} StructType1429;

int function_1429(StructType1429 *s, int param_a, double param_b, const char *param_c) {
    int local_1429 = param_a * 1429;
    double local_1429_d = param_b * 1429;
    char buf_1429[128];
    snprintf(buf_1429, sizeof(buf_1429), "function_%d: %d, %f, %s", 1429, local_1429, local_1429_d, param_c ? param_c : "null");
    return local_1429 + (int)local_1429_d;
}

typedef struct {
    int field_1430;
    long field_1430_b;
    double field_1430_c;
    char name_1430[64];
} StructType1430;

int function_1430(StructType1430 *s, int param_a, double param_b, const char *param_c) {
    int local_1430 = param_a * 1430;
    double local_1430_d = param_b * 1430;
    char buf_1430[128];
    snprintf(buf_1430, sizeof(buf_1430), "function_%d: %d, %f, %s", 1430, local_1430, local_1430_d, param_c ? param_c : "null");
    return local_1430 + (int)local_1430_d;
}

typedef struct {
    int field_1431;
    long field_1431_b;
    double field_1431_c;
    char name_1431[64];
} StructType1431;

int function_1431(StructType1431 *s, int param_a, double param_b, const char *param_c) {
    int local_1431 = param_a * 1431;
    double local_1431_d = param_b * 1431;
    char buf_1431[128];
    snprintf(buf_1431, sizeof(buf_1431), "function_%d: %d, %f, %s", 1431, local_1431, local_1431_d, param_c ? param_c : "null");
    return local_1431 + (int)local_1431_d;
}

typedef struct {
    int field_1432;
    long field_1432_b;
    double field_1432_c;
    char name_1432[64];
} StructType1432;

int function_1432(StructType1432 *s, int param_a, double param_b, const char *param_c) {
    int local_1432 = param_a * 1432;
    double local_1432_d = param_b * 1432;
    char buf_1432[128];
    snprintf(buf_1432, sizeof(buf_1432), "function_%d: %d, %f, %s", 1432, local_1432, local_1432_d, param_c ? param_c : "null");
    return local_1432 + (int)local_1432_d;
}

typedef struct {
    int field_1433;
    long field_1433_b;
    double field_1433_c;
    char name_1433[64];
} StructType1433;

int function_1433(StructType1433 *s, int param_a, double param_b, const char *param_c) {
    int local_1433 = param_a * 1433;
    double local_1433_d = param_b * 1433;
    char buf_1433[128];
    snprintf(buf_1433, sizeof(buf_1433), "function_%d: %d, %f, %s", 1433, local_1433, local_1433_d, param_c ? param_c : "null");
    return local_1433 + (int)local_1433_d;
}

typedef struct {
    int field_1434;
    long field_1434_b;
    double field_1434_c;
    char name_1434[64];
} StructType1434;

int function_1434(StructType1434 *s, int param_a, double param_b, const char *param_c) {
    int local_1434 = param_a * 1434;
    double local_1434_d = param_b * 1434;
    char buf_1434[128];
    snprintf(buf_1434, sizeof(buf_1434), "function_%d: %d, %f, %s", 1434, local_1434, local_1434_d, param_c ? param_c : "null");
    return local_1434 + (int)local_1434_d;
}

typedef struct {
    int field_1435;
    long field_1435_b;
    double field_1435_c;
    char name_1435[64];
} StructType1435;

int function_1435(StructType1435 *s, int param_a, double param_b, const char *param_c) {
    int local_1435 = param_a * 1435;
    double local_1435_d = param_b * 1435;
    char buf_1435[128];
    snprintf(buf_1435, sizeof(buf_1435), "function_%d: %d, %f, %s", 1435, local_1435, local_1435_d, param_c ? param_c : "null");
    return local_1435 + (int)local_1435_d;
}

typedef struct {
    int field_1436;
    long field_1436_b;
    double field_1436_c;
    char name_1436[64];
} StructType1436;

int function_1436(StructType1436 *s, int param_a, double param_b, const char *param_c) {
    int local_1436 = param_a * 1436;
    double local_1436_d = param_b * 1436;
    char buf_1436[128];
    snprintf(buf_1436, sizeof(buf_1436), "function_%d: %d, %f, %s", 1436, local_1436, local_1436_d, param_c ? param_c : "null");
    return local_1436 + (int)local_1436_d;
}

typedef struct {
    int field_1437;
    long field_1437_b;
    double field_1437_c;
    char name_1437[64];
} StructType1437;

int function_1437(StructType1437 *s, int param_a, double param_b, const char *param_c) {
    int local_1437 = param_a * 1437;
    double local_1437_d = param_b * 1437;
    char buf_1437[128];
    snprintf(buf_1437, sizeof(buf_1437), "function_%d: %d, %f, %s", 1437, local_1437, local_1437_d, param_c ? param_c : "null");
    return local_1437 + (int)local_1437_d;
}

typedef struct {
    int field_1438;
    long field_1438_b;
    double field_1438_c;
    char name_1438[64];
} StructType1438;

int function_1438(StructType1438 *s, int param_a, double param_b, const char *param_c) {
    int local_1438 = param_a * 1438;
    double local_1438_d = param_b * 1438;
    char buf_1438[128];
    snprintf(buf_1438, sizeof(buf_1438), "function_%d: %d, %f, %s", 1438, local_1438, local_1438_d, param_c ? param_c : "null");
    return local_1438 + (int)local_1438_d;
}

typedef struct {
    int field_1439;
    long field_1439_b;
    double field_1439_c;
    char name_1439[64];
} StructType1439;

int function_1439(StructType1439 *s, int param_a, double param_b, const char *param_c) {
    int local_1439 = param_a * 1439;
    double local_1439_d = param_b * 1439;
    char buf_1439[128];
    snprintf(buf_1439, sizeof(buf_1439), "function_%d: %d, %f, %s", 1439, local_1439, local_1439_d, param_c ? param_c : "null");
    return local_1439 + (int)local_1439_d;
}

typedef struct {
    int field_1440;
    long field_1440_b;
    double field_1440_c;
    char name_1440[64];
} StructType1440;

int function_1440(StructType1440 *s, int param_a, double param_b, const char *param_c) {
    int local_1440 = param_a * 1440;
    double local_1440_d = param_b * 1440;
    char buf_1440[128];
    snprintf(buf_1440, sizeof(buf_1440), "function_%d: %d, %f, %s", 1440, local_1440, local_1440_d, param_c ? param_c : "null");
    return local_1440 + (int)local_1440_d;
}

typedef struct {
    int field_1441;
    long field_1441_b;
    double field_1441_c;
    char name_1441[64];
} StructType1441;

int function_1441(StructType1441 *s, int param_a, double param_b, const char *param_c) {
    int local_1441 = param_a * 1441;
    double local_1441_d = param_b * 1441;
    char buf_1441[128];
    snprintf(buf_1441, sizeof(buf_1441), "function_%d: %d, %f, %s", 1441, local_1441, local_1441_d, param_c ? param_c : "null");
    return local_1441 + (int)local_1441_d;
}

typedef struct {
    int field_1442;
    long field_1442_b;
    double field_1442_c;
    char name_1442[64];
} StructType1442;

int function_1442(StructType1442 *s, int param_a, double param_b, const char *param_c) {
    int local_1442 = param_a * 1442;
    double local_1442_d = param_b * 1442;
    char buf_1442[128];
    snprintf(buf_1442, sizeof(buf_1442), "function_%d: %d, %f, %s", 1442, local_1442, local_1442_d, param_c ? param_c : "null");
    return local_1442 + (int)local_1442_d;
}

typedef struct {
    int field_1443;
    long field_1443_b;
    double field_1443_c;
    char name_1443[64];
} StructType1443;

int function_1443(StructType1443 *s, int param_a, double param_b, const char *param_c) {
    int local_1443 = param_a * 1443;
    double local_1443_d = param_b * 1443;
    char buf_1443[128];
    snprintf(buf_1443, sizeof(buf_1443), "function_%d: %d, %f, %s", 1443, local_1443, local_1443_d, param_c ? param_c : "null");
    return local_1443 + (int)local_1443_d;
}

typedef struct {
    int field_1444;
    long field_1444_b;
    double field_1444_c;
    char name_1444[64];
} StructType1444;

int function_1444(StructType1444 *s, int param_a, double param_b, const char *param_c) {
    int local_1444 = param_a * 1444;
    double local_1444_d = param_b * 1444;
    char buf_1444[128];
    snprintf(buf_1444, sizeof(buf_1444), "function_%d: %d, %f, %s", 1444, local_1444, local_1444_d, param_c ? param_c : "null");
    return local_1444 + (int)local_1444_d;
}

typedef struct {
    int field_1445;
    long field_1445_b;
    double field_1445_c;
    char name_1445[64];
} StructType1445;

int function_1445(StructType1445 *s, int param_a, double param_b, const char *param_c) {
    int local_1445 = param_a * 1445;
    double local_1445_d = param_b * 1445;
    char buf_1445[128];
    snprintf(buf_1445, sizeof(buf_1445), "function_%d: %d, %f, %s", 1445, local_1445, local_1445_d, param_c ? param_c : "null");
    return local_1445 + (int)local_1445_d;
}

typedef struct {
    int field_1446;
    long field_1446_b;
    double field_1446_c;
    char name_1446[64];
} StructType1446;

int function_1446(StructType1446 *s, int param_a, double param_b, const char *param_c) {
    int local_1446 = param_a * 1446;
    double local_1446_d = param_b * 1446;
    char buf_1446[128];
    snprintf(buf_1446, sizeof(buf_1446), "function_%d: %d, %f, %s", 1446, local_1446, local_1446_d, param_c ? param_c : "null");
    return local_1446 + (int)local_1446_d;
}

typedef struct {
    int field_1447;
    long field_1447_b;
    double field_1447_c;
    char name_1447[64];
} StructType1447;

int function_1447(StructType1447 *s, int param_a, double param_b, const char *param_c) {
    int local_1447 = param_a * 1447;
    double local_1447_d = param_b * 1447;
    char buf_1447[128];
    snprintf(buf_1447, sizeof(buf_1447), "function_%d: %d, %f, %s", 1447, local_1447, local_1447_d, param_c ? param_c : "null");
    return local_1447 + (int)local_1447_d;
}

typedef struct {
    int field_1448;
    long field_1448_b;
    double field_1448_c;
    char name_1448[64];
} StructType1448;

int function_1448(StructType1448 *s, int param_a, double param_b, const char *param_c) {
    int local_1448 = param_a * 1448;
    double local_1448_d = param_b * 1448;
    char buf_1448[128];
    snprintf(buf_1448, sizeof(buf_1448), "function_%d: %d, %f, %s", 1448, local_1448, local_1448_d, param_c ? param_c : "null");
    return local_1448 + (int)local_1448_d;
}

typedef struct {
    int field_1449;
    long field_1449_b;
    double field_1449_c;
    char name_1449[64];
} StructType1449;

int function_1449(StructType1449 *s, int param_a, double param_b, const char *param_c) {
    int local_1449 = param_a * 1449;
    double local_1449_d = param_b * 1449;
    char buf_1449[128];
    snprintf(buf_1449, sizeof(buf_1449), "function_%d: %d, %f, %s", 1449, local_1449, local_1449_d, param_c ? param_c : "null");
    return local_1449 + (int)local_1449_d;
}

typedef struct {
    int field_1450;
    long field_1450_b;
    double field_1450_c;
    char name_1450[64];
} StructType1450;

int function_1450(StructType1450 *s, int param_a, double param_b, const char *param_c) {
    int local_1450 = param_a * 1450;
    double local_1450_d = param_b * 1450;
    char buf_1450[128];
    snprintf(buf_1450, sizeof(buf_1450), "function_%d: %d, %f, %s", 1450, local_1450, local_1450_d, param_c ? param_c : "null");
    return local_1450 + (int)local_1450_d;
}

typedef struct {
    int field_1451;
    long field_1451_b;
    double field_1451_c;
    char name_1451[64];
} StructType1451;

int function_1451(StructType1451 *s, int param_a, double param_b, const char *param_c) {
    int local_1451 = param_a * 1451;
    double local_1451_d = param_b * 1451;
    char buf_1451[128];
    snprintf(buf_1451, sizeof(buf_1451), "function_%d: %d, %f, %s", 1451, local_1451, local_1451_d, param_c ? param_c : "null");
    return local_1451 + (int)local_1451_d;
}

typedef struct {
    int field_1452;
    long field_1452_b;
    double field_1452_c;
    char name_1452[64];
} StructType1452;

int function_1452(StructType1452 *s, int param_a, double param_b, const char *param_c) {
    int local_1452 = param_a * 1452;
    double local_1452_d = param_b * 1452;
    char buf_1452[128];
    snprintf(buf_1452, sizeof(buf_1452), "function_%d: %d, %f, %s", 1452, local_1452, local_1452_d, param_c ? param_c : "null");
    return local_1452 + (int)local_1452_d;
}

typedef struct {
    int field_1453;
    long field_1453_b;
    double field_1453_c;
    char name_1453[64];
} StructType1453;

int function_1453(StructType1453 *s, int param_a, double param_b, const char *param_c) {
    int local_1453 = param_a * 1453;
    double local_1453_d = param_b * 1453;
    char buf_1453[128];
    snprintf(buf_1453, sizeof(buf_1453), "function_%d: %d, %f, %s", 1453, local_1453, local_1453_d, param_c ? param_c : "null");
    return local_1453 + (int)local_1453_d;
}

typedef struct {
    int field_1454;
    long field_1454_b;
    double field_1454_c;
    char name_1454[64];
} StructType1454;

int function_1454(StructType1454 *s, int param_a, double param_b, const char *param_c) {
    int local_1454 = param_a * 1454;
    double local_1454_d = param_b * 1454;
    char buf_1454[128];
    snprintf(buf_1454, sizeof(buf_1454), "function_%d: %d, %f, %s", 1454, local_1454, local_1454_d, param_c ? param_c : "null");
    return local_1454 + (int)local_1454_d;
}

typedef struct {
    int field_1455;
    long field_1455_b;
    double field_1455_c;
    char name_1455[64];
} StructType1455;

int function_1455(StructType1455 *s, int param_a, double param_b, const char *param_c) {
    int local_1455 = param_a * 1455;
    double local_1455_d = param_b * 1455;
    char buf_1455[128];
    snprintf(buf_1455, sizeof(buf_1455), "function_%d: %d, %f, %s", 1455, local_1455, local_1455_d, param_c ? param_c : "null");
    return local_1455 + (int)local_1455_d;
}

typedef struct {
    int field_1456;
    long field_1456_b;
    double field_1456_c;
    char name_1456[64];
} StructType1456;

int function_1456(StructType1456 *s, int param_a, double param_b, const char *param_c) {
    int local_1456 = param_a * 1456;
    double local_1456_d = param_b * 1456;
    char buf_1456[128];
    snprintf(buf_1456, sizeof(buf_1456), "function_%d: %d, %f, %s", 1456, local_1456, local_1456_d, param_c ? param_c : "null");
    return local_1456 + (int)local_1456_d;
}

typedef struct {
    int field_1457;
    long field_1457_b;
    double field_1457_c;
    char name_1457[64];
} StructType1457;

int function_1457(StructType1457 *s, int param_a, double param_b, const char *param_c) {
    int local_1457 = param_a * 1457;
    double local_1457_d = param_b * 1457;
    char buf_1457[128];
    snprintf(buf_1457, sizeof(buf_1457), "function_%d: %d, %f, %s", 1457, local_1457, local_1457_d, param_c ? param_c : "null");
    return local_1457 + (int)local_1457_d;
}

typedef struct {
    int field_1458;
    long field_1458_b;
    double field_1458_c;
    char name_1458[64];
} StructType1458;

int function_1458(StructType1458 *s, int param_a, double param_b, const char *param_c) {
    int local_1458 = param_a * 1458;
    double local_1458_d = param_b * 1458;
    char buf_1458[128];
    snprintf(buf_1458, sizeof(buf_1458), "function_%d: %d, %f, %s", 1458, local_1458, local_1458_d, param_c ? param_c : "null");
    return local_1458 + (int)local_1458_d;
}

typedef struct {
    int field_1459;
    long field_1459_b;
    double field_1459_c;
    char name_1459[64];
} StructType1459;

int function_1459(StructType1459 *s, int param_a, double param_b, const char *param_c) {
    int local_1459 = param_a * 1459;
    double local_1459_d = param_b * 1459;
    char buf_1459[128];
    snprintf(buf_1459, sizeof(buf_1459), "function_%d: %d, %f, %s", 1459, local_1459, local_1459_d, param_c ? param_c : "null");
    return local_1459 + (int)local_1459_d;
}

typedef struct {
    int field_1460;
    long field_1460_b;
    double field_1460_c;
    char name_1460[64];
} StructType1460;

int function_1460(StructType1460 *s, int param_a, double param_b, const char *param_c) {
    int local_1460 = param_a * 1460;
    double local_1460_d = param_b * 1460;
    char buf_1460[128];
    snprintf(buf_1460, sizeof(buf_1460), "function_%d: %d, %f, %s", 1460, local_1460, local_1460_d, param_c ? param_c : "null");
    return local_1460 + (int)local_1460_d;
}

typedef struct {
    int field_1461;
    long field_1461_b;
    double field_1461_c;
    char name_1461[64];
} StructType1461;

int function_1461(StructType1461 *s, int param_a, double param_b, const char *param_c) {
    int local_1461 = param_a * 1461;
    double local_1461_d = param_b * 1461;
    char buf_1461[128];
    snprintf(buf_1461, sizeof(buf_1461), "function_%d: %d, %f, %s", 1461, local_1461, local_1461_d, param_c ? param_c : "null");
    return local_1461 + (int)local_1461_d;
}

typedef struct {
    int field_1462;
    long field_1462_b;
    double field_1462_c;
    char name_1462[64];
} StructType1462;

int function_1462(StructType1462 *s, int param_a, double param_b, const char *param_c) {
    int local_1462 = param_a * 1462;
    double local_1462_d = param_b * 1462;
    char buf_1462[128];
    snprintf(buf_1462, sizeof(buf_1462), "function_%d: %d, %f, %s", 1462, local_1462, local_1462_d, param_c ? param_c : "null");
    return local_1462 + (int)local_1462_d;
}

typedef struct {
    int field_1463;
    long field_1463_b;
    double field_1463_c;
    char name_1463[64];
} StructType1463;

int function_1463(StructType1463 *s, int param_a, double param_b, const char *param_c) {
    int local_1463 = param_a * 1463;
    double local_1463_d = param_b * 1463;
    char buf_1463[128];
    snprintf(buf_1463, sizeof(buf_1463), "function_%d: %d, %f, %s", 1463, local_1463, local_1463_d, param_c ? param_c : "null");
    return local_1463 + (int)local_1463_d;
}

typedef struct {
    int field_1464;
    long field_1464_b;
    double field_1464_c;
    char name_1464[64];
} StructType1464;

int function_1464(StructType1464 *s, int param_a, double param_b, const char *param_c) {
    int local_1464 = param_a * 1464;
    double local_1464_d = param_b * 1464;
    char buf_1464[128];
    snprintf(buf_1464, sizeof(buf_1464), "function_%d: %d, %f, %s", 1464, local_1464, local_1464_d, param_c ? param_c : "null");
    return local_1464 + (int)local_1464_d;
}

typedef struct {
    int field_1465;
    long field_1465_b;
    double field_1465_c;
    char name_1465[64];
} StructType1465;

int function_1465(StructType1465 *s, int param_a, double param_b, const char *param_c) {
    int local_1465 = param_a * 1465;
    double local_1465_d = param_b * 1465;
    char buf_1465[128];
    snprintf(buf_1465, sizeof(buf_1465), "function_%d: %d, %f, %s", 1465, local_1465, local_1465_d, param_c ? param_c : "null");
    return local_1465 + (int)local_1465_d;
}

typedef struct {
    int field_1466;
    long field_1466_b;
    double field_1466_c;
    char name_1466[64];
} StructType1466;

int function_1466(StructType1466 *s, int param_a, double param_b, const char *param_c) {
    int local_1466 = param_a * 1466;
    double local_1466_d = param_b * 1466;
    char buf_1466[128];
    snprintf(buf_1466, sizeof(buf_1466), "function_%d: %d, %f, %s", 1466, local_1466, local_1466_d, param_c ? param_c : "null");
    return local_1466 + (int)local_1466_d;
}

typedef struct {
    int field_1467;
    long field_1467_b;
    double field_1467_c;
    char name_1467[64];
} StructType1467;

int function_1467(StructType1467 *s, int param_a, double param_b, const char *param_c) {
    int local_1467 = param_a * 1467;
    double local_1467_d = param_b * 1467;
    char buf_1467[128];
    snprintf(buf_1467, sizeof(buf_1467), "function_%d: %d, %f, %s", 1467, local_1467, local_1467_d, param_c ? param_c : "null");
    return local_1467 + (int)local_1467_d;
}

typedef struct {
    int field_1468;
    long field_1468_b;
    double field_1468_c;
    char name_1468[64];
} StructType1468;

int function_1468(StructType1468 *s, int param_a, double param_b, const char *param_c) {
    int local_1468 = param_a * 1468;
    double local_1468_d = param_b * 1468;
    char buf_1468[128];
    snprintf(buf_1468, sizeof(buf_1468), "function_%d: %d, %f, %s", 1468, local_1468, local_1468_d, param_c ? param_c : "null");
    return local_1468 + (int)local_1468_d;
}

typedef struct {
    int field_1469;
    long field_1469_b;
    double field_1469_c;
    char name_1469[64];
} StructType1469;

int function_1469(StructType1469 *s, int param_a, double param_b, const char *param_c) {
    int local_1469 = param_a * 1469;
    double local_1469_d = param_b * 1469;
    char buf_1469[128];
    snprintf(buf_1469, sizeof(buf_1469), "function_%d: %d, %f, %s", 1469, local_1469, local_1469_d, param_c ? param_c : "null");
    return local_1469 + (int)local_1469_d;
}

typedef struct {
    int field_1470;
    long field_1470_b;
    double field_1470_c;
    char name_1470[64];
} StructType1470;

int function_1470(StructType1470 *s, int param_a, double param_b, const char *param_c) {
    int local_1470 = param_a * 1470;
    double local_1470_d = param_b * 1470;
    char buf_1470[128];
    snprintf(buf_1470, sizeof(buf_1470), "function_%d: %d, %f, %s", 1470, local_1470, local_1470_d, param_c ? param_c : "null");
    return local_1470 + (int)local_1470_d;
}

typedef struct {
    int field_1471;
    long field_1471_b;
    double field_1471_c;
    char name_1471[64];
} StructType1471;

int function_1471(StructType1471 *s, int param_a, double param_b, const char *param_c) {
    int local_1471 = param_a * 1471;
    double local_1471_d = param_b * 1471;
    char buf_1471[128];
    snprintf(buf_1471, sizeof(buf_1471), "function_%d: %d, %f, %s", 1471, local_1471, local_1471_d, param_c ? param_c : "null");
    return local_1471 + (int)local_1471_d;
}

typedef struct {
    int field_1472;
    long field_1472_b;
    double field_1472_c;
    char name_1472[64];
} StructType1472;

int function_1472(StructType1472 *s, int param_a, double param_b, const char *param_c) {
    int local_1472 = param_a * 1472;
    double local_1472_d = param_b * 1472;
    char buf_1472[128];
    snprintf(buf_1472, sizeof(buf_1472), "function_%d: %d, %f, %s", 1472, local_1472, local_1472_d, param_c ? param_c : "null");
    return local_1472 + (int)local_1472_d;
}

typedef struct {
    int field_1473;
    long field_1473_b;
    double field_1473_c;
    char name_1473[64];
} StructType1473;

int function_1473(StructType1473 *s, int param_a, double param_b, const char *param_c) {
    int local_1473 = param_a * 1473;
    double local_1473_d = param_b * 1473;
    char buf_1473[128];
    snprintf(buf_1473, sizeof(buf_1473), "function_%d: %d, %f, %s", 1473, local_1473, local_1473_d, param_c ? param_c : "null");
    return local_1473 + (int)local_1473_d;
}

typedef struct {
    int field_1474;
    long field_1474_b;
    double field_1474_c;
    char name_1474[64];
} StructType1474;

int function_1474(StructType1474 *s, int param_a, double param_b, const char *param_c) {
    int local_1474 = param_a * 1474;
    double local_1474_d = param_b * 1474;
    char buf_1474[128];
    snprintf(buf_1474, sizeof(buf_1474), "function_%d: %d, %f, %s", 1474, local_1474, local_1474_d, param_c ? param_c : "null");
    return local_1474 + (int)local_1474_d;
}

typedef struct {
    int field_1475;
    long field_1475_b;
    double field_1475_c;
    char name_1475[64];
} StructType1475;

int function_1475(StructType1475 *s, int param_a, double param_b, const char *param_c) {
    int local_1475 = param_a * 1475;
    double local_1475_d = param_b * 1475;
    char buf_1475[128];
    snprintf(buf_1475, sizeof(buf_1475), "function_%d: %d, %f, %s", 1475, local_1475, local_1475_d, param_c ? param_c : "null");
    return local_1475 + (int)local_1475_d;
}

typedef struct {
    int field_1476;
    long field_1476_b;
    double field_1476_c;
    char name_1476[64];
} StructType1476;

int function_1476(StructType1476 *s, int param_a, double param_b, const char *param_c) {
    int local_1476 = param_a * 1476;
    double local_1476_d = param_b * 1476;
    char buf_1476[128];
    snprintf(buf_1476, sizeof(buf_1476), "function_%d: %d, %f, %s", 1476, local_1476, local_1476_d, param_c ? param_c : "null");
    return local_1476 + (int)local_1476_d;
}

typedef struct {
    int field_1477;
    long field_1477_b;
    double field_1477_c;
    char name_1477[64];
} StructType1477;

int function_1477(StructType1477 *s, int param_a, double param_b, const char *param_c) {
    int local_1477 = param_a * 1477;
    double local_1477_d = param_b * 1477;
    char buf_1477[128];
    snprintf(buf_1477, sizeof(buf_1477), "function_%d: %d, %f, %s", 1477, local_1477, local_1477_d, param_c ? param_c : "null");
    return local_1477 + (int)local_1477_d;
}

typedef struct {
    int field_1478;
    long field_1478_b;
    double field_1478_c;
    char name_1478[64];
} StructType1478;

int function_1478(StructType1478 *s, int param_a, double param_b, const char *param_c) {
    int local_1478 = param_a * 1478;
    double local_1478_d = param_b * 1478;
    char buf_1478[128];
    snprintf(buf_1478, sizeof(buf_1478), "function_%d: %d, %f, %s", 1478, local_1478, local_1478_d, param_c ? param_c : "null");
    return local_1478 + (int)local_1478_d;
}

typedef struct {
    int field_1479;
    long field_1479_b;
    double field_1479_c;
    char name_1479[64];
} StructType1479;

int function_1479(StructType1479 *s, int param_a, double param_b, const char *param_c) {
    int local_1479 = param_a * 1479;
    double local_1479_d = param_b * 1479;
    char buf_1479[128];
    snprintf(buf_1479, sizeof(buf_1479), "function_%d: %d, %f, %s", 1479, local_1479, local_1479_d, param_c ? param_c : "null");
    return local_1479 + (int)local_1479_d;
}

typedef struct {
    int field_1480;
    long field_1480_b;
    double field_1480_c;
    char name_1480[64];
} StructType1480;

int function_1480(StructType1480 *s, int param_a, double param_b, const char *param_c) {
    int local_1480 = param_a * 1480;
    double local_1480_d = param_b * 1480;
    char buf_1480[128];
    snprintf(buf_1480, sizeof(buf_1480), "function_%d: %d, %f, %s", 1480, local_1480, local_1480_d, param_c ? param_c : "null");
    return local_1480 + (int)local_1480_d;
}

typedef struct {
    int field_1481;
    long field_1481_b;
    double field_1481_c;
    char name_1481[64];
} StructType1481;

int function_1481(StructType1481 *s, int param_a, double param_b, const char *param_c) {
    int local_1481 = param_a * 1481;
    double local_1481_d = param_b * 1481;
    char buf_1481[128];
    snprintf(buf_1481, sizeof(buf_1481), "function_%d: %d, %f, %s", 1481, local_1481, local_1481_d, param_c ? param_c : "null");
    return local_1481 + (int)local_1481_d;
}

typedef struct {
    int field_1482;
    long field_1482_b;
    double field_1482_c;
    char name_1482[64];
} StructType1482;

int function_1482(StructType1482 *s, int param_a, double param_b, const char *param_c) {
    int local_1482 = param_a * 1482;
    double local_1482_d = param_b * 1482;
    char buf_1482[128];
    snprintf(buf_1482, sizeof(buf_1482), "function_%d: %d, %f, %s", 1482, local_1482, local_1482_d, param_c ? param_c : "null");
    return local_1482 + (int)local_1482_d;
}

typedef struct {
    int field_1483;
    long field_1483_b;
    double field_1483_c;
    char name_1483[64];
} StructType1483;

int function_1483(StructType1483 *s, int param_a, double param_b, const char *param_c) {
    int local_1483 = param_a * 1483;
    double local_1483_d = param_b * 1483;
    char buf_1483[128];
    snprintf(buf_1483, sizeof(buf_1483), "function_%d: %d, %f, %s", 1483, local_1483, local_1483_d, param_c ? param_c : "null");
    return local_1483 + (int)local_1483_d;
}

typedef struct {
    int field_1484;
    long field_1484_b;
    double field_1484_c;
    char name_1484[64];
} StructType1484;

int function_1484(StructType1484 *s, int param_a, double param_b, const char *param_c) {
    int local_1484 = param_a * 1484;
    double local_1484_d = param_b * 1484;
    char buf_1484[128];
    snprintf(buf_1484, sizeof(buf_1484), "function_%d: %d, %f, %s", 1484, local_1484, local_1484_d, param_c ? param_c : "null");
    return local_1484 + (int)local_1484_d;
}

typedef struct {
    int field_1485;
    long field_1485_b;
    double field_1485_c;
    char name_1485[64];
} StructType1485;

int function_1485(StructType1485 *s, int param_a, double param_b, const char *param_c) {
    int local_1485 = param_a * 1485;
    double local_1485_d = param_b * 1485;
    char buf_1485[128];
    snprintf(buf_1485, sizeof(buf_1485), "function_%d: %d, %f, %s", 1485, local_1485, local_1485_d, param_c ? param_c : "null");
    return local_1485 + (int)local_1485_d;
}

typedef struct {
    int field_1486;
    long field_1486_b;
    double field_1486_c;
    char name_1486[64];
} StructType1486;

int function_1486(StructType1486 *s, int param_a, double param_b, const char *param_c) {
    int local_1486 = param_a * 1486;
    double local_1486_d = param_b * 1486;
    char buf_1486[128];
    snprintf(buf_1486, sizeof(buf_1486), "function_%d: %d, %f, %s", 1486, local_1486, local_1486_d, param_c ? param_c : "null");
    return local_1486 + (int)local_1486_d;
}

typedef struct {
    int field_1487;
    long field_1487_b;
    double field_1487_c;
    char name_1487[64];
} StructType1487;

int function_1487(StructType1487 *s, int param_a, double param_b, const char *param_c) {
    int local_1487 = param_a * 1487;
    double local_1487_d = param_b * 1487;
    char buf_1487[128];
    snprintf(buf_1487, sizeof(buf_1487), "function_%d: %d, %f, %s", 1487, local_1487, local_1487_d, param_c ? param_c : "null");
    return local_1487 + (int)local_1487_d;
}

typedef struct {
    int field_1488;
    long field_1488_b;
    double field_1488_c;
    char name_1488[64];
} StructType1488;

int function_1488(StructType1488 *s, int param_a, double param_b, const char *param_c) {
    int local_1488 = param_a * 1488;
    double local_1488_d = param_b * 1488;
    char buf_1488[128];
    snprintf(buf_1488, sizeof(buf_1488), "function_%d: %d, %f, %s", 1488, local_1488, local_1488_d, param_c ? param_c : "null");
    return local_1488 + (int)local_1488_d;
}

typedef struct {
    int field_1489;
    long field_1489_b;
    double field_1489_c;
    char name_1489[64];
} StructType1489;

int function_1489(StructType1489 *s, int param_a, double param_b, const char *param_c) {
    int local_1489 = param_a * 1489;
    double local_1489_d = param_b * 1489;
    char buf_1489[128];
    snprintf(buf_1489, sizeof(buf_1489), "function_%d: %d, %f, %s", 1489, local_1489, local_1489_d, param_c ? param_c : "null");
    return local_1489 + (int)local_1489_d;
}

typedef struct {
    int field_1490;
    long field_1490_b;
    double field_1490_c;
    char name_1490[64];
} StructType1490;

int function_1490(StructType1490 *s, int param_a, double param_b, const char *param_c) {
    int local_1490 = param_a * 1490;
    double local_1490_d = param_b * 1490;
    char buf_1490[128];
    snprintf(buf_1490, sizeof(buf_1490), "function_%d: %d, %f, %s", 1490, local_1490, local_1490_d, param_c ? param_c : "null");
    return local_1490 + (int)local_1490_d;
}

typedef struct {
    int field_1491;
    long field_1491_b;
    double field_1491_c;
    char name_1491[64];
} StructType1491;

int function_1491(StructType1491 *s, int param_a, double param_b, const char *param_c) {
    int local_1491 = param_a * 1491;
    double local_1491_d = param_b * 1491;
    char buf_1491[128];
    snprintf(buf_1491, sizeof(buf_1491), "function_%d: %d, %f, %s", 1491, local_1491, local_1491_d, param_c ? param_c : "null");
    return local_1491 + (int)local_1491_d;
}

typedef struct {
    int field_1492;
    long field_1492_b;
    double field_1492_c;
    char name_1492[64];
} StructType1492;

int function_1492(StructType1492 *s, int param_a, double param_b, const char *param_c) {
    int local_1492 = param_a * 1492;
    double local_1492_d = param_b * 1492;
    char buf_1492[128];
    snprintf(buf_1492, sizeof(buf_1492), "function_%d: %d, %f, %s", 1492, local_1492, local_1492_d, param_c ? param_c : "null");
    return local_1492 + (int)local_1492_d;
}

typedef struct {
    int field_1493;
    long field_1493_b;
    double field_1493_c;
    char name_1493[64];
} StructType1493;

int function_1493(StructType1493 *s, int param_a, double param_b, const char *param_c) {
    int local_1493 = param_a * 1493;
    double local_1493_d = param_b * 1493;
    char buf_1493[128];
    snprintf(buf_1493, sizeof(buf_1493), "function_%d: %d, %f, %s", 1493, local_1493, local_1493_d, param_c ? param_c : "null");
    return local_1493 + (int)local_1493_d;
}

typedef struct {
    int field_1494;
    long field_1494_b;
    double field_1494_c;
    char name_1494[64];
} StructType1494;

int function_1494(StructType1494 *s, int param_a, double param_b, const char *param_c) {
    int local_1494 = param_a * 1494;
    double local_1494_d = param_b * 1494;
    char buf_1494[128];
    snprintf(buf_1494, sizeof(buf_1494), "function_%d: %d, %f, %s", 1494, local_1494, local_1494_d, param_c ? param_c : "null");
    return local_1494 + (int)local_1494_d;
}

typedef struct {
    int field_1495;
    long field_1495_b;
    double field_1495_c;
    char name_1495[64];
} StructType1495;

int function_1495(StructType1495 *s, int param_a, double param_b, const char *param_c) {
    int local_1495 = param_a * 1495;
    double local_1495_d = param_b * 1495;
    char buf_1495[128];
    snprintf(buf_1495, sizeof(buf_1495), "function_%d: %d, %f, %s", 1495, local_1495, local_1495_d, param_c ? param_c : "null");
    return local_1495 + (int)local_1495_d;
}

typedef struct {
    int field_1496;
    long field_1496_b;
    double field_1496_c;
    char name_1496[64];
} StructType1496;

int function_1496(StructType1496 *s, int param_a, double param_b, const char *param_c) {
    int local_1496 = param_a * 1496;
    double local_1496_d = param_b * 1496;
    char buf_1496[128];
    snprintf(buf_1496, sizeof(buf_1496), "function_%d: %d, %f, %s", 1496, local_1496, local_1496_d, param_c ? param_c : "null");
    return local_1496 + (int)local_1496_d;
}

typedef struct {
    int field_1497;
    long field_1497_b;
    double field_1497_c;
    char name_1497[64];
} StructType1497;

int function_1497(StructType1497 *s, int param_a, double param_b, const char *param_c) {
    int local_1497 = param_a * 1497;
    double local_1497_d = param_b * 1497;
    char buf_1497[128];
    snprintf(buf_1497, sizeof(buf_1497), "function_%d: %d, %f, %s", 1497, local_1497, local_1497_d, param_c ? param_c : "null");
    return local_1497 + (int)local_1497_d;
}

typedef struct {
    int field_1498;
    long field_1498_b;
    double field_1498_c;
    char name_1498[64];
} StructType1498;

int function_1498(StructType1498 *s, int param_a, double param_b, const char *param_c) {
    int local_1498 = param_a * 1498;
    double local_1498_d = param_b * 1498;
    char buf_1498[128];
    snprintf(buf_1498, sizeof(buf_1498), "function_%d: %d, %f, %s", 1498, local_1498, local_1498_d, param_c ? param_c : "null");
    return local_1498 + (int)local_1498_d;
}

typedef struct {
    int field_1499;
    long field_1499_b;
    double field_1499_c;
    char name_1499[64];
} StructType1499;

int function_1499(StructType1499 *s, int param_a, double param_b, const char *param_c) {
    int local_1499 = param_a * 1499;
    double local_1499_d = param_b * 1499;
    char buf_1499[128];
    snprintf(buf_1499, sizeof(buf_1499), "function_%d: %d, %f, %s", 1499, local_1499, local_1499_d, param_c ? param_c : "null");
    return local_1499 + (int)local_1499_d;
}

typedef struct {
    int field_1500;
    long field_1500_b;
    double field_1500_c;
    char name_1500[64];
} StructType1500;

int function_1500(StructType1500 *s, int param_a, double param_b, const char *param_c) {
    int local_1500 = param_a * 1500;
    double local_1500_d = param_b * 1500;
    char buf_1500[128];
    snprintf(buf_1500, sizeof(buf_1500), "function_%d: %d, %f, %s", 1500, local_1500, local_1500_d, param_c ? param_c : "null");
    return local_1500 + (int)local_1500_d;
}

typedef struct {
    int field_1501;
    long field_1501_b;
    double field_1501_c;
    char name_1501[64];
} StructType1501;

int function_1501(StructType1501 *s, int param_a, double param_b, const char *param_c) {
    int local_1501 = param_a * 1501;
    double local_1501_d = param_b * 1501;
    char buf_1501[128];
    snprintf(buf_1501, sizeof(buf_1501), "function_%d: %d, %f, %s", 1501, local_1501, local_1501_d, param_c ? param_c : "null");
    return local_1501 + (int)local_1501_d;
}

typedef struct {
    int field_1502;
    long field_1502_b;
    double field_1502_c;
    char name_1502[64];
} StructType1502;

int function_1502(StructType1502 *s, int param_a, double param_b, const char *param_c) {
    int local_1502 = param_a * 1502;
    double local_1502_d = param_b * 1502;
    char buf_1502[128];
    snprintf(buf_1502, sizeof(buf_1502), "function_%d: %d, %f, %s", 1502, local_1502, local_1502_d, param_c ? param_c : "null");
    return local_1502 + (int)local_1502_d;
}

typedef struct {
    int field_1503;
    long field_1503_b;
    double field_1503_c;
    char name_1503[64];
} StructType1503;

int function_1503(StructType1503 *s, int param_a, double param_b, const char *param_c) {
    int local_1503 = param_a * 1503;
    double local_1503_d = param_b * 1503;
    char buf_1503[128];
    snprintf(buf_1503, sizeof(buf_1503), "function_%d: %d, %f, %s", 1503, local_1503, local_1503_d, param_c ? param_c : "null");
    return local_1503 + (int)local_1503_d;
}

typedef struct {
    int field_1504;
    long field_1504_b;
    double field_1504_c;
    char name_1504[64];
} StructType1504;

int function_1504(StructType1504 *s, int param_a, double param_b, const char *param_c) {
    int local_1504 = param_a * 1504;
    double local_1504_d = param_b * 1504;
    char buf_1504[128];
    snprintf(buf_1504, sizeof(buf_1504), "function_%d: %d, %f, %s", 1504, local_1504, local_1504_d, param_c ? param_c : "null");
    return local_1504 + (int)local_1504_d;
}

typedef struct {
    int field_1505;
    long field_1505_b;
    double field_1505_c;
    char name_1505[64];
} StructType1505;

int function_1505(StructType1505 *s, int param_a, double param_b, const char *param_c) {
    int local_1505 = param_a * 1505;
    double local_1505_d = param_b * 1505;
    char buf_1505[128];
    snprintf(buf_1505, sizeof(buf_1505), "function_%d: %d, %f, %s", 1505, local_1505, local_1505_d, param_c ? param_c : "null");
    return local_1505 + (int)local_1505_d;
}

typedef struct {
    int field_1506;
    long field_1506_b;
    double field_1506_c;
    char name_1506[64];
} StructType1506;

int function_1506(StructType1506 *s, int param_a, double param_b, const char *param_c) {
    int local_1506 = param_a * 1506;
    double local_1506_d = param_b * 1506;
    char buf_1506[128];
    snprintf(buf_1506, sizeof(buf_1506), "function_%d: %d, %f, %s", 1506, local_1506, local_1506_d, param_c ? param_c : "null");
    return local_1506 + (int)local_1506_d;
}

typedef struct {
    int field_1507;
    long field_1507_b;
    double field_1507_c;
    char name_1507[64];
} StructType1507;

int function_1507(StructType1507 *s, int param_a, double param_b, const char *param_c) {
    int local_1507 = param_a * 1507;
    double local_1507_d = param_b * 1507;
    char buf_1507[128];
    snprintf(buf_1507, sizeof(buf_1507), "function_%d: %d, %f, %s", 1507, local_1507, local_1507_d, param_c ? param_c : "null");
    return local_1507 + (int)local_1507_d;
}

typedef struct {
    int field_1508;
    long field_1508_b;
    double field_1508_c;
    char name_1508[64];
} StructType1508;

int function_1508(StructType1508 *s, int param_a, double param_b, const char *param_c) {
    int local_1508 = param_a * 1508;
    double local_1508_d = param_b * 1508;
    char buf_1508[128];
    snprintf(buf_1508, sizeof(buf_1508), "function_%d: %d, %f, %s", 1508, local_1508, local_1508_d, param_c ? param_c : "null");
    return local_1508 + (int)local_1508_d;
}

typedef struct {
    int field_1509;
    long field_1509_b;
    double field_1509_c;
    char name_1509[64];
} StructType1509;

int function_1509(StructType1509 *s, int param_a, double param_b, const char *param_c) {
    int local_1509 = param_a * 1509;
    double local_1509_d = param_b * 1509;
    char buf_1509[128];
    snprintf(buf_1509, sizeof(buf_1509), "function_%d: %d, %f, %s", 1509, local_1509, local_1509_d, param_c ? param_c : "null");
    return local_1509 + (int)local_1509_d;
}

typedef struct {
    int field_1510;
    long field_1510_b;
    double field_1510_c;
    char name_1510[64];
} StructType1510;

int function_1510(StructType1510 *s, int param_a, double param_b, const char *param_c) {
    int local_1510 = param_a * 1510;
    double local_1510_d = param_b * 1510;
    char buf_1510[128];
    snprintf(buf_1510, sizeof(buf_1510), "function_%d: %d, %f, %s", 1510, local_1510, local_1510_d, param_c ? param_c : "null");
    return local_1510 + (int)local_1510_d;
}

typedef struct {
    int field_1511;
    long field_1511_b;
    double field_1511_c;
    char name_1511[64];
} StructType1511;

int function_1511(StructType1511 *s, int param_a, double param_b, const char *param_c) {
    int local_1511 = param_a * 1511;
    double local_1511_d = param_b * 1511;
    char buf_1511[128];
    snprintf(buf_1511, sizeof(buf_1511), "function_%d: %d, %f, %s", 1511, local_1511, local_1511_d, param_c ? param_c : "null");
    return local_1511 + (int)local_1511_d;
}

typedef struct {
    int field_1512;
    long field_1512_b;
    double field_1512_c;
    char name_1512[64];
} StructType1512;

int function_1512(StructType1512 *s, int param_a, double param_b, const char *param_c) {
    int local_1512 = param_a * 1512;
    double local_1512_d = param_b * 1512;
    char buf_1512[128];
    snprintf(buf_1512, sizeof(buf_1512), "function_%d: %d, %f, %s", 1512, local_1512, local_1512_d, param_c ? param_c : "null");
    return local_1512 + (int)local_1512_d;
}

typedef struct {
    int field_1513;
    long field_1513_b;
    double field_1513_c;
    char name_1513[64];
} StructType1513;

int function_1513(StructType1513 *s, int param_a, double param_b, const char *param_c) {
    int local_1513 = param_a * 1513;
    double local_1513_d = param_b * 1513;
    char buf_1513[128];
    snprintf(buf_1513, sizeof(buf_1513), "function_%d: %d, %f, %s", 1513, local_1513, local_1513_d, param_c ? param_c : "null");
    return local_1513 + (int)local_1513_d;
}

typedef struct {
    int field_1514;
    long field_1514_b;
    double field_1514_c;
    char name_1514[64];
} StructType1514;

int function_1514(StructType1514 *s, int param_a, double param_b, const char *param_c) {
    int local_1514 = param_a * 1514;
    double local_1514_d = param_b * 1514;
    char buf_1514[128];
    snprintf(buf_1514, sizeof(buf_1514), "function_%d: %d, %f, %s", 1514, local_1514, local_1514_d, param_c ? param_c : "null");
    return local_1514 + (int)local_1514_d;
}

typedef struct {
    int field_1515;
    long field_1515_b;
    double field_1515_c;
    char name_1515[64];
} StructType1515;

int function_1515(StructType1515 *s, int param_a, double param_b, const char *param_c) {
    int local_1515 = param_a * 1515;
    double local_1515_d = param_b * 1515;
    char buf_1515[128];
    snprintf(buf_1515, sizeof(buf_1515), "function_%d: %d, %f, %s", 1515, local_1515, local_1515_d, param_c ? param_c : "null");
    return local_1515 + (int)local_1515_d;
}

typedef struct {
    int field_1516;
    long field_1516_b;
    double field_1516_c;
    char name_1516[64];
} StructType1516;

int function_1516(StructType1516 *s, int param_a, double param_b, const char *param_c) {
    int local_1516 = param_a * 1516;
    double local_1516_d = param_b * 1516;
    char buf_1516[128];
    snprintf(buf_1516, sizeof(buf_1516), "function_%d: %d, %f, %s", 1516, local_1516, local_1516_d, param_c ? param_c : "null");
    return local_1516 + (int)local_1516_d;
}

typedef struct {
    int field_1517;
    long field_1517_b;
    double field_1517_c;
    char name_1517[64];
} StructType1517;

int function_1517(StructType1517 *s, int param_a, double param_b, const char *param_c) {
    int local_1517 = param_a * 1517;
    double local_1517_d = param_b * 1517;
    char buf_1517[128];
    snprintf(buf_1517, sizeof(buf_1517), "function_%d: %d, %f, %s", 1517, local_1517, local_1517_d, param_c ? param_c : "null");
    return local_1517 + (int)local_1517_d;
}

typedef struct {
    int field_1518;
    long field_1518_b;
    double field_1518_c;
    char name_1518[64];
} StructType1518;

int function_1518(StructType1518 *s, int param_a, double param_b, const char *param_c) {
    int local_1518 = param_a * 1518;
    double local_1518_d = param_b * 1518;
    char buf_1518[128];
    snprintf(buf_1518, sizeof(buf_1518), "function_%d: %d, %f, %s", 1518, local_1518, local_1518_d, param_c ? param_c : "null");
    return local_1518 + (int)local_1518_d;
}

typedef struct {
    int field_1519;
    long field_1519_b;
    double field_1519_c;
    char name_1519[64];
} StructType1519;

int function_1519(StructType1519 *s, int param_a, double param_b, const char *param_c) {
    int local_1519 = param_a * 1519;
    double local_1519_d = param_b * 1519;
    char buf_1519[128];
    snprintf(buf_1519, sizeof(buf_1519), "function_%d: %d, %f, %s", 1519, local_1519, local_1519_d, param_c ? param_c : "null");
    return local_1519 + (int)local_1519_d;
}

typedef struct {
    int field_1520;
    long field_1520_b;
    double field_1520_c;
    char name_1520[64];
} StructType1520;

int function_1520(StructType1520 *s, int param_a, double param_b, const char *param_c) {
    int local_1520 = param_a * 1520;
    double local_1520_d = param_b * 1520;
    char buf_1520[128];
    snprintf(buf_1520, sizeof(buf_1520), "function_%d: %d, %f, %s", 1520, local_1520, local_1520_d, param_c ? param_c : "null");
    return local_1520 + (int)local_1520_d;
}

typedef struct {
    int field_1521;
    long field_1521_b;
    double field_1521_c;
    char name_1521[64];
} StructType1521;

int function_1521(StructType1521 *s, int param_a, double param_b, const char *param_c) {
    int local_1521 = param_a * 1521;
    double local_1521_d = param_b * 1521;
    char buf_1521[128];
    snprintf(buf_1521, sizeof(buf_1521), "function_%d: %d, %f, %s", 1521, local_1521, local_1521_d, param_c ? param_c : "null");
    return local_1521 + (int)local_1521_d;
}

typedef struct {
    int field_1522;
    long field_1522_b;
    double field_1522_c;
    char name_1522[64];
} StructType1522;

int function_1522(StructType1522 *s, int param_a, double param_b, const char *param_c) {
    int local_1522 = param_a * 1522;
    double local_1522_d = param_b * 1522;
    char buf_1522[128];
    snprintf(buf_1522, sizeof(buf_1522), "function_%d: %d, %f, %s", 1522, local_1522, local_1522_d, param_c ? param_c : "null");
    return local_1522 + (int)local_1522_d;
}

typedef struct {
    int field_1523;
    long field_1523_b;
    double field_1523_c;
    char name_1523[64];
} StructType1523;

int function_1523(StructType1523 *s, int param_a, double param_b, const char *param_c) {
    int local_1523 = param_a * 1523;
    double local_1523_d = param_b * 1523;
    char buf_1523[128];
    snprintf(buf_1523, sizeof(buf_1523), "function_%d: %d, %f, %s", 1523, local_1523, local_1523_d, param_c ? param_c : "null");
    return local_1523 + (int)local_1523_d;
}

typedef struct {
    int field_1524;
    long field_1524_b;
    double field_1524_c;
    char name_1524[64];
} StructType1524;

int function_1524(StructType1524 *s, int param_a, double param_b, const char *param_c) {
    int local_1524 = param_a * 1524;
    double local_1524_d = param_b * 1524;
    char buf_1524[128];
    snprintf(buf_1524, sizeof(buf_1524), "function_%d: %d, %f, %s", 1524, local_1524, local_1524_d, param_c ? param_c : "null");
    return local_1524 + (int)local_1524_d;
}

typedef struct {
    int field_1525;
    long field_1525_b;
    double field_1525_c;
    char name_1525[64];
} StructType1525;

int function_1525(StructType1525 *s, int param_a, double param_b, const char *param_c) {
    int local_1525 = param_a * 1525;
    double local_1525_d = param_b * 1525;
    char buf_1525[128];
    snprintf(buf_1525, sizeof(buf_1525), "function_%d: %d, %f, %s", 1525, local_1525, local_1525_d, param_c ? param_c : "null");
    return local_1525 + (int)local_1525_d;
}

typedef struct {
    int field_1526;
    long field_1526_b;
    double field_1526_c;
    char name_1526[64];
} StructType1526;

int function_1526(StructType1526 *s, int param_a, double param_b, const char *param_c) {
    int local_1526 = param_a * 1526;
    double local_1526_d = param_b * 1526;
    char buf_1526[128];
    snprintf(buf_1526, sizeof(buf_1526), "function_%d: %d, %f, %s", 1526, local_1526, local_1526_d, param_c ? param_c : "null");
    return local_1526 + (int)local_1526_d;
}

typedef struct {
    int field_1527;
    long field_1527_b;
    double field_1527_c;
    char name_1527[64];
} StructType1527;

int function_1527(StructType1527 *s, int param_a, double param_b, const char *param_c) {
    int local_1527 = param_a * 1527;
    double local_1527_d = param_b * 1527;
    char buf_1527[128];
    snprintf(buf_1527, sizeof(buf_1527), "function_%d: %d, %f, %s", 1527, local_1527, local_1527_d, param_c ? param_c : "null");
    return local_1527 + (int)local_1527_d;
}

typedef struct {
    int field_1528;
    long field_1528_b;
    double field_1528_c;
    char name_1528[64];
} StructType1528;

int function_1528(StructType1528 *s, int param_a, double param_b, const char *param_c) {
    int local_1528 = param_a * 1528;
    double local_1528_d = param_b * 1528;
    char buf_1528[128];
    snprintf(buf_1528, sizeof(buf_1528), "function_%d: %d, %f, %s", 1528, local_1528, local_1528_d, param_c ? param_c : "null");
    return local_1528 + (int)local_1528_d;
}

typedef struct {
    int field_1529;
    long field_1529_b;
    double field_1529_c;
    char name_1529[64];
} StructType1529;

int function_1529(StructType1529 *s, int param_a, double param_b, const char *param_c) {
    int local_1529 = param_a * 1529;
    double local_1529_d = param_b * 1529;
    char buf_1529[128];
    snprintf(buf_1529, sizeof(buf_1529), "function_%d: %d, %f, %s", 1529, local_1529, local_1529_d, param_c ? param_c : "null");
    return local_1529 + (int)local_1529_d;
}

typedef struct {
    int field_1530;
    long field_1530_b;
    double field_1530_c;
    char name_1530[64];
} StructType1530;

int function_1530(StructType1530 *s, int param_a, double param_b, const char *param_c) {
    int local_1530 = param_a * 1530;
    double local_1530_d = param_b * 1530;
    char buf_1530[128];
    snprintf(buf_1530, sizeof(buf_1530), "function_%d: %d, %f, %s", 1530, local_1530, local_1530_d, param_c ? param_c : "null");
    return local_1530 + (int)local_1530_d;
}

typedef struct {
    int field_1531;
    long field_1531_b;
    double field_1531_c;
    char name_1531[64];
} StructType1531;

int function_1531(StructType1531 *s, int param_a, double param_b, const char *param_c) {
    int local_1531 = param_a * 1531;
    double local_1531_d = param_b * 1531;
    char buf_1531[128];
    snprintf(buf_1531, sizeof(buf_1531), "function_%d: %d, %f, %s", 1531, local_1531, local_1531_d, param_c ? param_c : "null");
    return local_1531 + (int)local_1531_d;
}

typedef struct {
    int field_1532;
    long field_1532_b;
    double field_1532_c;
    char name_1532[64];
} StructType1532;

int function_1532(StructType1532 *s, int param_a, double param_b, const char *param_c) {
    int local_1532 = param_a * 1532;
    double local_1532_d = param_b * 1532;
    char buf_1532[128];
    snprintf(buf_1532, sizeof(buf_1532), "function_%d: %d, %f, %s", 1532, local_1532, local_1532_d, param_c ? param_c : "null");
    return local_1532 + (int)local_1532_d;
}

typedef struct {
    int field_1533;
    long field_1533_b;
    double field_1533_c;
    char name_1533[64];
} StructType1533;

int function_1533(StructType1533 *s, int param_a, double param_b, const char *param_c) {
    int local_1533 = param_a * 1533;
    double local_1533_d = param_b * 1533;
    char buf_1533[128];
    snprintf(buf_1533, sizeof(buf_1533), "function_%d: %d, %f, %s", 1533, local_1533, local_1533_d, param_c ? param_c : "null");
    return local_1533 + (int)local_1533_d;
}

typedef struct {
    int field_1534;
    long field_1534_b;
    double field_1534_c;
    char name_1534[64];
} StructType1534;

int function_1534(StructType1534 *s, int param_a, double param_b, const char *param_c) {
    int local_1534 = param_a * 1534;
    double local_1534_d = param_b * 1534;
    char buf_1534[128];
    snprintf(buf_1534, sizeof(buf_1534), "function_%d: %d, %f, %s", 1534, local_1534, local_1534_d, param_c ? param_c : "null");
    return local_1534 + (int)local_1534_d;
}

typedef struct {
    int field_1535;
    long field_1535_b;
    double field_1535_c;
    char name_1535[64];
} StructType1535;

int function_1535(StructType1535 *s, int param_a, double param_b, const char *param_c) {
    int local_1535 = param_a * 1535;
    double local_1535_d = param_b * 1535;
    char buf_1535[128];
    snprintf(buf_1535, sizeof(buf_1535), "function_%d: %d, %f, %s", 1535, local_1535, local_1535_d, param_c ? param_c : "null");
    return local_1535 + (int)local_1535_d;
}

typedef struct {
    int field_1536;
    long field_1536_b;
    double field_1536_c;
    char name_1536[64];
} StructType1536;

int function_1536(StructType1536 *s, int param_a, double param_b, const char *param_c) {
    int local_1536 = param_a * 1536;
    double local_1536_d = param_b * 1536;
    char buf_1536[128];
    snprintf(buf_1536, sizeof(buf_1536), "function_%d: %d, %f, %s", 1536, local_1536, local_1536_d, param_c ? param_c : "null");
    return local_1536 + (int)local_1536_d;
}

typedef struct {
    int field_1537;
    long field_1537_b;
    double field_1537_c;
    char name_1537[64];
} StructType1537;

int function_1537(StructType1537 *s, int param_a, double param_b, const char *param_c) {
    int local_1537 = param_a * 1537;
    double local_1537_d = param_b * 1537;
    char buf_1537[128];
    snprintf(buf_1537, sizeof(buf_1537), "function_%d: %d, %f, %s", 1537, local_1537, local_1537_d, param_c ? param_c : "null");
    return local_1537 + (int)local_1537_d;
}

typedef struct {
    int field_1538;
    long field_1538_b;
    double field_1538_c;
    char name_1538[64];
} StructType1538;

int function_1538(StructType1538 *s, int param_a, double param_b, const char *param_c) {
    int local_1538 = param_a * 1538;
    double local_1538_d = param_b * 1538;
    char buf_1538[128];
    snprintf(buf_1538, sizeof(buf_1538), "function_%d: %d, %f, %s", 1538, local_1538, local_1538_d, param_c ? param_c : "null");
    return local_1538 + (int)local_1538_d;
}

typedef struct {
    int field_1539;
    long field_1539_b;
    double field_1539_c;
    char name_1539[64];
} StructType1539;

int function_1539(StructType1539 *s, int param_a, double param_b, const char *param_c) {
    int local_1539 = param_a * 1539;
    double local_1539_d = param_b * 1539;
    char buf_1539[128];
    snprintf(buf_1539, sizeof(buf_1539), "function_%d: %d, %f, %s", 1539, local_1539, local_1539_d, param_c ? param_c : "null");
    return local_1539 + (int)local_1539_d;
}

typedef struct {
    int field_1540;
    long field_1540_b;
    double field_1540_c;
    char name_1540[64];
} StructType1540;

int function_1540(StructType1540 *s, int param_a, double param_b, const char *param_c) {
    int local_1540 = param_a * 1540;
    double local_1540_d = param_b * 1540;
    char buf_1540[128];
    snprintf(buf_1540, sizeof(buf_1540), "function_%d: %d, %f, %s", 1540, local_1540, local_1540_d, param_c ? param_c : "null");
    return local_1540 + (int)local_1540_d;
}

typedef struct {
    int field_1541;
    long field_1541_b;
    double field_1541_c;
    char name_1541[64];
} StructType1541;

int function_1541(StructType1541 *s, int param_a, double param_b, const char *param_c) {
    int local_1541 = param_a * 1541;
    double local_1541_d = param_b * 1541;
    char buf_1541[128];
    snprintf(buf_1541, sizeof(buf_1541), "function_%d: %d, %f, %s", 1541, local_1541, local_1541_d, param_c ? param_c : "null");
    return local_1541 + (int)local_1541_d;
}

typedef struct {
    int field_1542;
    long field_1542_b;
    double field_1542_c;
    char name_1542[64];
} StructType1542;

int function_1542(StructType1542 *s, int param_a, double param_b, const char *param_c) {
    int local_1542 = param_a * 1542;
    double local_1542_d = param_b * 1542;
    char buf_1542[128];
    snprintf(buf_1542, sizeof(buf_1542), "function_%d: %d, %f, %s", 1542, local_1542, local_1542_d, param_c ? param_c : "null");
    return local_1542 + (int)local_1542_d;
}

typedef struct {
    int field_1543;
    long field_1543_b;
    double field_1543_c;
    char name_1543[64];
} StructType1543;

int function_1543(StructType1543 *s, int param_a, double param_b, const char *param_c) {
    int local_1543 = param_a * 1543;
    double local_1543_d = param_b * 1543;
    char buf_1543[128];
    snprintf(buf_1543, sizeof(buf_1543), "function_%d: %d, %f, %s", 1543, local_1543, local_1543_d, param_c ? param_c : "null");
    return local_1543 + (int)local_1543_d;
}

typedef struct {
    int field_1544;
    long field_1544_b;
    double field_1544_c;
    char name_1544[64];
} StructType1544;

int function_1544(StructType1544 *s, int param_a, double param_b, const char *param_c) {
    int local_1544 = param_a * 1544;
    double local_1544_d = param_b * 1544;
    char buf_1544[128];
    snprintf(buf_1544, sizeof(buf_1544), "function_%d: %d, %f, %s", 1544, local_1544, local_1544_d, param_c ? param_c : "null");
    return local_1544 + (int)local_1544_d;
}

typedef struct {
    int field_1545;
    long field_1545_b;
    double field_1545_c;
    char name_1545[64];
} StructType1545;

int function_1545(StructType1545 *s, int param_a, double param_b, const char *param_c) {
    int local_1545 = param_a * 1545;
    double local_1545_d = param_b * 1545;
    char buf_1545[128];
    snprintf(buf_1545, sizeof(buf_1545), "function_%d: %d, %f, %s", 1545, local_1545, local_1545_d, param_c ? param_c : "null");
    return local_1545 + (int)local_1545_d;
}

typedef struct {
    int field_1546;
    long field_1546_b;
    double field_1546_c;
    char name_1546[64];
} StructType1546;

int function_1546(StructType1546 *s, int param_a, double param_b, const char *param_c) {
    int local_1546 = param_a * 1546;
    double local_1546_d = param_b * 1546;
    char buf_1546[128];
    snprintf(buf_1546, sizeof(buf_1546), "function_%d: %d, %f, %s", 1546, local_1546, local_1546_d, param_c ? param_c : "null");
    return local_1546 + (int)local_1546_d;
}

typedef struct {
    int field_1547;
    long field_1547_b;
    double field_1547_c;
    char name_1547[64];
} StructType1547;

int function_1547(StructType1547 *s, int param_a, double param_b, const char *param_c) {
    int local_1547 = param_a * 1547;
    double local_1547_d = param_b * 1547;
    char buf_1547[128];
    snprintf(buf_1547, sizeof(buf_1547), "function_%d: %d, %f, %s", 1547, local_1547, local_1547_d, param_c ? param_c : "null");
    return local_1547 + (int)local_1547_d;
}

typedef struct {
    int field_1548;
    long field_1548_b;
    double field_1548_c;
    char name_1548[64];
} StructType1548;

int function_1548(StructType1548 *s, int param_a, double param_b, const char *param_c) {
    int local_1548 = param_a * 1548;
    double local_1548_d = param_b * 1548;
    char buf_1548[128];
    snprintf(buf_1548, sizeof(buf_1548), "function_%d: %d, %f, %s", 1548, local_1548, local_1548_d, param_c ? param_c : "null");
    return local_1548 + (int)local_1548_d;
}

typedef struct {
    int field_1549;
    long field_1549_b;
    double field_1549_c;
    char name_1549[64];
} StructType1549;

int function_1549(StructType1549 *s, int param_a, double param_b, const char *param_c) {
    int local_1549 = param_a * 1549;
    double local_1549_d = param_b * 1549;
    char buf_1549[128];
    snprintf(buf_1549, sizeof(buf_1549), "function_%d: %d, %f, %s", 1549, local_1549, local_1549_d, param_c ? param_c : "null");
    return local_1549 + (int)local_1549_d;
}

typedef struct {
    int field_1550;
    long field_1550_b;
    double field_1550_c;
    char name_1550[64];
} StructType1550;

int function_1550(StructType1550 *s, int param_a, double param_b, const char *param_c) {
    int local_1550 = param_a * 1550;
    double local_1550_d = param_b * 1550;
    char buf_1550[128];
    snprintf(buf_1550, sizeof(buf_1550), "function_%d: %d, %f, %s", 1550, local_1550, local_1550_d, param_c ? param_c : "null");
    return local_1550 + (int)local_1550_d;
}

typedef struct {
    int field_1551;
    long field_1551_b;
    double field_1551_c;
    char name_1551[64];
} StructType1551;

int function_1551(StructType1551 *s, int param_a, double param_b, const char *param_c) {
    int local_1551 = param_a * 1551;
    double local_1551_d = param_b * 1551;
    char buf_1551[128];
    snprintf(buf_1551, sizeof(buf_1551), "function_%d: %d, %f, %s", 1551, local_1551, local_1551_d, param_c ? param_c : "null");
    return local_1551 + (int)local_1551_d;
}

typedef struct {
    int field_1552;
    long field_1552_b;
    double field_1552_c;
    char name_1552[64];
} StructType1552;

int function_1552(StructType1552 *s, int param_a, double param_b, const char *param_c) {
    int local_1552 = param_a * 1552;
    double local_1552_d = param_b * 1552;
    char buf_1552[128];
    snprintf(buf_1552, sizeof(buf_1552), "function_%d: %d, %f, %s", 1552, local_1552, local_1552_d, param_c ? param_c : "null");
    return local_1552 + (int)local_1552_d;
}

typedef struct {
    int field_1553;
    long field_1553_b;
    double field_1553_c;
    char name_1553[64];
} StructType1553;

int function_1553(StructType1553 *s, int param_a, double param_b, const char *param_c) {
    int local_1553 = param_a * 1553;
    double local_1553_d = param_b * 1553;
    char buf_1553[128];
    snprintf(buf_1553, sizeof(buf_1553), "function_%d: %d, %f, %s", 1553, local_1553, local_1553_d, param_c ? param_c : "null");
    return local_1553 + (int)local_1553_d;
}

typedef struct {
    int field_1554;
    long field_1554_b;
    double field_1554_c;
    char name_1554[64];
} StructType1554;

int function_1554(StructType1554 *s, int param_a, double param_b, const char *param_c) {
    int local_1554 = param_a * 1554;
    double local_1554_d = param_b * 1554;
    char buf_1554[128];
    snprintf(buf_1554, sizeof(buf_1554), "function_%d: %d, %f, %s", 1554, local_1554, local_1554_d, param_c ? param_c : "null");
    return local_1554 + (int)local_1554_d;
}

typedef struct {
    int field_1555;
    long field_1555_b;
    double field_1555_c;
    char name_1555[64];
} StructType1555;

int function_1555(StructType1555 *s, int param_a, double param_b, const char *param_c) {
    int local_1555 = param_a * 1555;
    double local_1555_d = param_b * 1555;
    char buf_1555[128];
    snprintf(buf_1555, sizeof(buf_1555), "function_%d: %d, %f, %s", 1555, local_1555, local_1555_d, param_c ? param_c : "null");
    return local_1555 + (int)local_1555_d;
}

typedef struct {
    int field_1556;
    long field_1556_b;
    double field_1556_c;
    char name_1556[64];
} StructType1556;

int function_1556(StructType1556 *s, int param_a, double param_b, const char *param_c) {
    int local_1556 = param_a * 1556;
    double local_1556_d = param_b * 1556;
    char buf_1556[128];
    snprintf(buf_1556, sizeof(buf_1556), "function_%d: %d, %f, %s", 1556, local_1556, local_1556_d, param_c ? param_c : "null");
    return local_1556 + (int)local_1556_d;
}

typedef struct {
    int field_1557;
    long field_1557_b;
    double field_1557_c;
    char name_1557[64];
} StructType1557;

int function_1557(StructType1557 *s, int param_a, double param_b, const char *param_c) {
    int local_1557 = param_a * 1557;
    double local_1557_d = param_b * 1557;
    char buf_1557[128];
    snprintf(buf_1557, sizeof(buf_1557), "function_%d: %d, %f, %s", 1557, local_1557, local_1557_d, param_c ? param_c : "null");
    return local_1557 + (int)local_1557_d;
}

typedef struct {
    int field_1558;
    long field_1558_b;
    double field_1558_c;
    char name_1558[64];
} StructType1558;

int function_1558(StructType1558 *s, int param_a, double param_b, const char *param_c) {
    int local_1558 = param_a * 1558;
    double local_1558_d = param_b * 1558;
    char buf_1558[128];
    snprintf(buf_1558, sizeof(buf_1558), "function_%d: %d, %f, %s", 1558, local_1558, local_1558_d, param_c ? param_c : "null");
    return local_1558 + (int)local_1558_d;
}

typedef struct {
    int field_1559;
    long field_1559_b;
    double field_1559_c;
    char name_1559[64];
} StructType1559;

int function_1559(StructType1559 *s, int param_a, double param_b, const char *param_c) {
    int local_1559 = param_a * 1559;
    double local_1559_d = param_b * 1559;
    char buf_1559[128];
    snprintf(buf_1559, sizeof(buf_1559), "function_%d: %d, %f, %s", 1559, local_1559, local_1559_d, param_c ? param_c : "null");
    return local_1559 + (int)local_1559_d;
}

typedef struct {
    int field_1560;
    long field_1560_b;
    double field_1560_c;
    char name_1560[64];
} StructType1560;

int function_1560(StructType1560 *s, int param_a, double param_b, const char *param_c) {
    int local_1560 = param_a * 1560;
    double local_1560_d = param_b * 1560;
    char buf_1560[128];
    snprintf(buf_1560, sizeof(buf_1560), "function_%d: %d, %f, %s", 1560, local_1560, local_1560_d, param_c ? param_c : "null");
    return local_1560 + (int)local_1560_d;
}

typedef struct {
    int field_1561;
    long field_1561_b;
    double field_1561_c;
    char name_1561[64];
} StructType1561;

int function_1561(StructType1561 *s, int param_a, double param_b, const char *param_c) {
    int local_1561 = param_a * 1561;
    double local_1561_d = param_b * 1561;
    char buf_1561[128];
    snprintf(buf_1561, sizeof(buf_1561), "function_%d: %d, %f, %s", 1561, local_1561, local_1561_d, param_c ? param_c : "null");
    return local_1561 + (int)local_1561_d;
}

typedef struct {
    int field_1562;
    long field_1562_b;
    double field_1562_c;
    char name_1562[64];
} StructType1562;

int function_1562(StructType1562 *s, int param_a, double param_b, const char *param_c) {
    int local_1562 = param_a * 1562;
    double local_1562_d = param_b * 1562;
    char buf_1562[128];
    snprintf(buf_1562, sizeof(buf_1562), "function_%d: %d, %f, %s", 1562, local_1562, local_1562_d, param_c ? param_c : "null");
    return local_1562 + (int)local_1562_d;
}

typedef struct {
    int field_1563;
    long field_1563_b;
    double field_1563_c;
    char name_1563[64];
} StructType1563;

int function_1563(StructType1563 *s, int param_a, double param_b, const char *param_c) {
    int local_1563 = param_a * 1563;
    double local_1563_d = param_b * 1563;
    char buf_1563[128];
    snprintf(buf_1563, sizeof(buf_1563), "function_%d: %d, %f, %s", 1563, local_1563, local_1563_d, param_c ? param_c : "null");
    return local_1563 + (int)local_1563_d;
}

typedef struct {
    int field_1564;
    long field_1564_b;
    double field_1564_c;
    char name_1564[64];
} StructType1564;

int function_1564(StructType1564 *s, int param_a, double param_b, const char *param_c) {
    int local_1564 = param_a * 1564;
    double local_1564_d = param_b * 1564;
    char buf_1564[128];
    snprintf(buf_1564, sizeof(buf_1564), "function_%d: %d, %f, %s", 1564, local_1564, local_1564_d, param_c ? param_c : "null");
    return local_1564 + (int)local_1564_d;
}

typedef struct {
    int field_1565;
    long field_1565_b;
    double field_1565_c;
    char name_1565[64];
} StructType1565;

int function_1565(StructType1565 *s, int param_a, double param_b, const char *param_c) {
    int local_1565 = param_a * 1565;
    double local_1565_d = param_b * 1565;
    char buf_1565[128];
    snprintf(buf_1565, sizeof(buf_1565), "function_%d: %d, %f, %s", 1565, local_1565, local_1565_d, param_c ? param_c : "null");
    return local_1565 + (int)local_1565_d;
}

typedef struct {
    int field_1566;
    long field_1566_b;
    double field_1566_c;
    char name_1566[64];
} StructType1566;

int function_1566(StructType1566 *s, int param_a, double param_b, const char *param_c) {
    int local_1566 = param_a * 1566;
    double local_1566_d = param_b * 1566;
    char buf_1566[128];
    snprintf(buf_1566, sizeof(buf_1566), "function_%d: %d, %f, %s", 1566, local_1566, local_1566_d, param_c ? param_c : "null");
    return local_1566 + (int)local_1566_d;
}

typedef struct {
    int field_1567;
    long field_1567_b;
    double field_1567_c;
    char name_1567[64];
} StructType1567;

int function_1567(StructType1567 *s, int param_a, double param_b, const char *param_c) {
    int local_1567 = param_a * 1567;
    double local_1567_d = param_b * 1567;
    char buf_1567[128];
    snprintf(buf_1567, sizeof(buf_1567), "function_%d: %d, %f, %s", 1567, local_1567, local_1567_d, param_c ? param_c : "null");
    return local_1567 + (int)local_1567_d;
}

typedef struct {
    int field_1568;
    long field_1568_b;
    double field_1568_c;
    char name_1568[64];
} StructType1568;

int function_1568(StructType1568 *s, int param_a, double param_b, const char *param_c) {
    int local_1568 = param_a * 1568;
    double local_1568_d = param_b * 1568;
    char buf_1568[128];
    snprintf(buf_1568, sizeof(buf_1568), "function_%d: %d, %f, %s", 1568, local_1568, local_1568_d, param_c ? param_c : "null");
    return local_1568 + (int)local_1568_d;
}

typedef struct {
    int field_1569;
    long field_1569_b;
    double field_1569_c;
    char name_1569[64];
} StructType1569;

int function_1569(StructType1569 *s, int param_a, double param_b, const char *param_c) {
    int local_1569 = param_a * 1569;
    double local_1569_d = param_b * 1569;
    char buf_1569[128];
    snprintf(buf_1569, sizeof(buf_1569), "function_%d: %d, %f, %s", 1569, local_1569, local_1569_d, param_c ? param_c : "null");
    return local_1569 + (int)local_1569_d;
}

typedef struct {
    int field_1570;
    long field_1570_b;
    double field_1570_c;
    char name_1570[64];
} StructType1570;

int function_1570(StructType1570 *s, int param_a, double param_b, const char *param_c) {
    int local_1570 = param_a * 1570;
    double local_1570_d = param_b * 1570;
    char buf_1570[128];
    snprintf(buf_1570, sizeof(buf_1570), "function_%d: %d, %f, %s", 1570, local_1570, local_1570_d, param_c ? param_c : "null");
    return local_1570 + (int)local_1570_d;
}

typedef struct {
    int field_1571;
    long field_1571_b;
    double field_1571_c;
    char name_1571[64];
} StructType1571;

int function_1571(StructType1571 *s, int param_a, double param_b, const char *param_c) {
    int local_1571 = param_a * 1571;
    double local_1571_d = param_b * 1571;
    char buf_1571[128];
    snprintf(buf_1571, sizeof(buf_1571), "function_%d: %d, %f, %s", 1571, local_1571, local_1571_d, param_c ? param_c : "null");
    return local_1571 + (int)local_1571_d;
}

typedef struct {
    int field_1572;
    long field_1572_b;
    double field_1572_c;
    char name_1572[64];
} StructType1572;

int function_1572(StructType1572 *s, int param_a, double param_b, const char *param_c) {
    int local_1572 = param_a * 1572;
    double local_1572_d = param_b * 1572;
    char buf_1572[128];
    snprintf(buf_1572, sizeof(buf_1572), "function_%d: %d, %f, %s", 1572, local_1572, local_1572_d, param_c ? param_c : "null");
    return local_1572 + (int)local_1572_d;
}

typedef struct {
    int field_1573;
    long field_1573_b;
    double field_1573_c;
    char name_1573[64];
} StructType1573;

int function_1573(StructType1573 *s, int param_a, double param_b, const char *param_c) {
    int local_1573 = param_a * 1573;
    double local_1573_d = param_b * 1573;
    char buf_1573[128];
    snprintf(buf_1573, sizeof(buf_1573), "function_%d: %d, %f, %s", 1573, local_1573, local_1573_d, param_c ? param_c : "null");
    return local_1573 + (int)local_1573_d;
}

typedef struct {
    int field_1574;
    long field_1574_b;
    double field_1574_c;
    char name_1574[64];
} StructType1574;

int function_1574(StructType1574 *s, int param_a, double param_b, const char *param_c) {
    int local_1574 = param_a * 1574;
    double local_1574_d = param_b * 1574;
    char buf_1574[128];
    snprintf(buf_1574, sizeof(buf_1574), "function_%d: %d, %f, %s", 1574, local_1574, local_1574_d, param_c ? param_c : "null");
    return local_1574 + (int)local_1574_d;
}

typedef struct {
    int field_1575;
    long field_1575_b;
    double field_1575_c;
    char name_1575[64];
} StructType1575;

int function_1575(StructType1575 *s, int param_a, double param_b, const char *param_c) {
    int local_1575 = param_a * 1575;
    double local_1575_d = param_b * 1575;
    char buf_1575[128];
    snprintf(buf_1575, sizeof(buf_1575), "function_%d: %d, %f, %s", 1575, local_1575, local_1575_d, param_c ? param_c : "null");
    return local_1575 + (int)local_1575_d;
}

typedef struct {
    int field_1576;
    long field_1576_b;
    double field_1576_c;
    char name_1576[64];
} StructType1576;

int function_1576(StructType1576 *s, int param_a, double param_b, const char *param_c) {
    int local_1576 = param_a * 1576;
    double local_1576_d = param_b * 1576;
    char buf_1576[128];
    snprintf(buf_1576, sizeof(buf_1576), "function_%d: %d, %f, %s", 1576, local_1576, local_1576_d, param_c ? param_c : "null");
    return local_1576 + (int)local_1576_d;
}

typedef struct {
    int field_1577;
    long field_1577_b;
    double field_1577_c;
    char name_1577[64];
} StructType1577;

int function_1577(StructType1577 *s, int param_a, double param_b, const char *param_c) {
    int local_1577 = param_a * 1577;
    double local_1577_d = param_b * 1577;
    char buf_1577[128];
    snprintf(buf_1577, sizeof(buf_1577), "function_%d: %d, %f, %s", 1577, local_1577, local_1577_d, param_c ? param_c : "null");
    return local_1577 + (int)local_1577_d;
}

typedef struct {
    int field_1578;
    long field_1578_b;
    double field_1578_c;
    char name_1578[64];
} StructType1578;

int function_1578(StructType1578 *s, int param_a, double param_b, const char *param_c) {
    int local_1578 = param_a * 1578;
    double local_1578_d = param_b * 1578;
    char buf_1578[128];
    snprintf(buf_1578, sizeof(buf_1578), "function_%d: %d, %f, %s", 1578, local_1578, local_1578_d, param_c ? param_c : "null");
    return local_1578 + (int)local_1578_d;
}

typedef struct {
    int field_1579;
    long field_1579_b;
    double field_1579_c;
    char name_1579[64];
} StructType1579;

int function_1579(StructType1579 *s, int param_a, double param_b, const char *param_c) {
    int local_1579 = param_a * 1579;
    double local_1579_d = param_b * 1579;
    char buf_1579[128];
    snprintf(buf_1579, sizeof(buf_1579), "function_%d: %d, %f, %s", 1579, local_1579, local_1579_d, param_c ? param_c : "null");
    return local_1579 + (int)local_1579_d;
}

typedef struct {
    int field_1580;
    long field_1580_b;
    double field_1580_c;
    char name_1580[64];
} StructType1580;

int function_1580(StructType1580 *s, int param_a, double param_b, const char *param_c) {
    int local_1580 = param_a * 1580;
    double local_1580_d = param_b * 1580;
    char buf_1580[128];
    snprintf(buf_1580, sizeof(buf_1580), "function_%d: %d, %f, %s", 1580, local_1580, local_1580_d, param_c ? param_c : "null");
    return local_1580 + (int)local_1580_d;
}

typedef struct {
    int field_1581;
    long field_1581_b;
    double field_1581_c;
    char name_1581[64];
} StructType1581;

int function_1581(StructType1581 *s, int param_a, double param_b, const char *param_c) {
    int local_1581 = param_a * 1581;
    double local_1581_d = param_b * 1581;
    char buf_1581[128];
    snprintf(buf_1581, sizeof(buf_1581), "function_%d: %d, %f, %s", 1581, local_1581, local_1581_d, param_c ? param_c : "null");
    return local_1581 + (int)local_1581_d;
}

typedef struct {
    int field_1582;
    long field_1582_b;
    double field_1582_c;
    char name_1582[64];
} StructType1582;

int function_1582(StructType1582 *s, int param_a, double param_b, const char *param_c) {
    int local_1582 = param_a * 1582;
    double local_1582_d = param_b * 1582;
    char buf_1582[128];
    snprintf(buf_1582, sizeof(buf_1582), "function_%d: %d, %f, %s", 1582, local_1582, local_1582_d, param_c ? param_c : "null");
    return local_1582 + (int)local_1582_d;
}

typedef struct {
    int field_1583;
    long field_1583_b;
    double field_1583_c;
    char name_1583[64];
} StructType1583;

int function_1583(StructType1583 *s, int param_a, double param_b, const char *param_c) {
    int local_1583 = param_a * 1583;
    double local_1583_d = param_b * 1583;
    char buf_1583[128];
    snprintf(buf_1583, sizeof(buf_1583), "function_%d: %d, %f, %s", 1583, local_1583, local_1583_d, param_c ? param_c : "null");
    return local_1583 + (int)local_1583_d;
}

typedef struct {
    int field_1584;
    long field_1584_b;
    double field_1584_c;
    char name_1584[64];
} StructType1584;

int function_1584(StructType1584 *s, int param_a, double param_b, const char *param_c) {
    int local_1584 = param_a * 1584;
    double local_1584_d = param_b * 1584;
    char buf_1584[128];
    snprintf(buf_1584, sizeof(buf_1584), "function_%d: %d, %f, %s", 1584, local_1584, local_1584_d, param_c ? param_c : "null");
    return local_1584 + (int)local_1584_d;
}

typedef struct {
    int field_1585;
    long field_1585_b;
    double field_1585_c;
    char name_1585[64];
} StructType1585;

int function_1585(StructType1585 *s, int param_a, double param_b, const char *param_c) {
    int local_1585 = param_a * 1585;
    double local_1585_d = param_b * 1585;
    char buf_1585[128];
    snprintf(buf_1585, sizeof(buf_1585), "function_%d: %d, %f, %s", 1585, local_1585, local_1585_d, param_c ? param_c : "null");
    return local_1585 + (int)local_1585_d;
}

typedef struct {
    int field_1586;
    long field_1586_b;
    double field_1586_c;
    char name_1586[64];
} StructType1586;

int function_1586(StructType1586 *s, int param_a, double param_b, const char *param_c) {
    int local_1586 = param_a * 1586;
    double local_1586_d = param_b * 1586;
    char buf_1586[128];
    snprintf(buf_1586, sizeof(buf_1586), "function_%d: %d, %f, %s", 1586, local_1586, local_1586_d, param_c ? param_c : "null");
    return local_1586 + (int)local_1586_d;
}

typedef struct {
    int field_1587;
    long field_1587_b;
    double field_1587_c;
    char name_1587[64];
} StructType1587;

int function_1587(StructType1587 *s, int param_a, double param_b, const char *param_c) {
    int local_1587 = param_a * 1587;
    double local_1587_d = param_b * 1587;
    char buf_1587[128];
    snprintf(buf_1587, sizeof(buf_1587), "function_%d: %d, %f, %s", 1587, local_1587, local_1587_d, param_c ? param_c : "null");
    return local_1587 + (int)local_1587_d;
}

typedef struct {
    int field_1588;
    long field_1588_b;
    double field_1588_c;
    char name_1588[64];
} StructType1588;

int function_1588(StructType1588 *s, int param_a, double param_b, const char *param_c) {
    int local_1588 = param_a * 1588;
    double local_1588_d = param_b * 1588;
    char buf_1588[128];
    snprintf(buf_1588, sizeof(buf_1588), "function_%d: %d, %f, %s", 1588, local_1588, local_1588_d, param_c ? param_c : "null");
    return local_1588 + (int)local_1588_d;
}

typedef struct {
    int field_1589;
    long field_1589_b;
    double field_1589_c;
    char name_1589[64];
} StructType1589;

int function_1589(StructType1589 *s, int param_a, double param_b, const char *param_c) {
    int local_1589 = param_a * 1589;
    double local_1589_d = param_b * 1589;
    char buf_1589[128];
    snprintf(buf_1589, sizeof(buf_1589), "function_%d: %d, %f, %s", 1589, local_1589, local_1589_d, param_c ? param_c : "null");
    return local_1589 + (int)local_1589_d;
}

typedef struct {
    int field_1590;
    long field_1590_b;
    double field_1590_c;
    char name_1590[64];
} StructType1590;

int function_1590(StructType1590 *s, int param_a, double param_b, const char *param_c) {
    int local_1590 = param_a * 1590;
    double local_1590_d = param_b * 1590;
    char buf_1590[128];
    snprintf(buf_1590, sizeof(buf_1590), "function_%d: %d, %f, %s", 1590, local_1590, local_1590_d, param_c ? param_c : "null");
    return local_1590 + (int)local_1590_d;
}

typedef struct {
    int field_1591;
    long field_1591_b;
    double field_1591_c;
    char name_1591[64];
} StructType1591;

int function_1591(StructType1591 *s, int param_a, double param_b, const char *param_c) {
    int local_1591 = param_a * 1591;
    double local_1591_d = param_b * 1591;
    char buf_1591[128];
    snprintf(buf_1591, sizeof(buf_1591), "function_%d: %d, %f, %s", 1591, local_1591, local_1591_d, param_c ? param_c : "null");
    return local_1591 + (int)local_1591_d;
}

typedef struct {
    int field_1592;
    long field_1592_b;
    double field_1592_c;
    char name_1592[64];
} StructType1592;

int function_1592(StructType1592 *s, int param_a, double param_b, const char *param_c) {
    int local_1592 = param_a * 1592;
    double local_1592_d = param_b * 1592;
    char buf_1592[128];
    snprintf(buf_1592, sizeof(buf_1592), "function_%d: %d, %f, %s", 1592, local_1592, local_1592_d, param_c ? param_c : "null");
    return local_1592 + (int)local_1592_d;
}

typedef struct {
    int field_1593;
    long field_1593_b;
    double field_1593_c;
    char name_1593[64];
} StructType1593;

int function_1593(StructType1593 *s, int param_a, double param_b, const char *param_c) {
    int local_1593 = param_a * 1593;
    double local_1593_d = param_b * 1593;
    char buf_1593[128];
    snprintf(buf_1593, sizeof(buf_1593), "function_%d: %d, %f, %s", 1593, local_1593, local_1593_d, param_c ? param_c : "null");
    return local_1593 + (int)local_1593_d;
}

typedef struct {
    int field_1594;
    long field_1594_b;
    double field_1594_c;
    char name_1594[64];
} StructType1594;

int function_1594(StructType1594 *s, int param_a, double param_b, const char *param_c) {
    int local_1594 = param_a * 1594;
    double local_1594_d = param_b * 1594;
    char buf_1594[128];
    snprintf(buf_1594, sizeof(buf_1594), "function_%d: %d, %f, %s", 1594, local_1594, local_1594_d, param_c ? param_c : "null");
    return local_1594 + (int)local_1594_d;
}

typedef struct {
    int field_1595;
    long field_1595_b;
    double field_1595_c;
    char name_1595[64];
} StructType1595;

int function_1595(StructType1595 *s, int param_a, double param_b, const char *param_c) {
    int local_1595 = param_a * 1595;
    double local_1595_d = param_b * 1595;
    char buf_1595[128];
    snprintf(buf_1595, sizeof(buf_1595), "function_%d: %d, %f, %s", 1595, local_1595, local_1595_d, param_c ? param_c : "null");
    return local_1595 + (int)local_1595_d;
}

typedef struct {
    int field_1596;
    long field_1596_b;
    double field_1596_c;
    char name_1596[64];
} StructType1596;

int function_1596(StructType1596 *s, int param_a, double param_b, const char *param_c) {
    int local_1596 = param_a * 1596;
    double local_1596_d = param_b * 1596;
    char buf_1596[128];
    snprintf(buf_1596, sizeof(buf_1596), "function_%d: %d, %f, %s", 1596, local_1596, local_1596_d, param_c ? param_c : "null");
    return local_1596 + (int)local_1596_d;
}

typedef struct {
    int field_1597;
    long field_1597_b;
    double field_1597_c;
    char name_1597[64];
} StructType1597;

int function_1597(StructType1597 *s, int param_a, double param_b, const char *param_c) {
    int local_1597 = param_a * 1597;
    double local_1597_d = param_b * 1597;
    char buf_1597[128];
    snprintf(buf_1597, sizeof(buf_1597), "function_%d: %d, %f, %s", 1597, local_1597, local_1597_d, param_c ? param_c : "null");
    return local_1597 + (int)local_1597_d;
}

typedef struct {
    int field_1598;
    long field_1598_b;
    double field_1598_c;
    char name_1598[64];
} StructType1598;

int function_1598(StructType1598 *s, int param_a, double param_b, const char *param_c) {
    int local_1598 = param_a * 1598;
    double local_1598_d = param_b * 1598;
    char buf_1598[128];
    snprintf(buf_1598, sizeof(buf_1598), "function_%d: %d, %f, %s", 1598, local_1598, local_1598_d, param_c ? param_c : "null");
    return local_1598 + (int)local_1598_d;
}

typedef struct {
    int field_1599;
    long field_1599_b;
    double field_1599_c;
    char name_1599[64];
} StructType1599;

int function_1599(StructType1599 *s, int param_a, double param_b, const char *param_c) {
    int local_1599 = param_a * 1599;
    double local_1599_d = param_b * 1599;
    char buf_1599[128];
    snprintf(buf_1599, sizeof(buf_1599), "function_%d: %d, %f, %s", 1599, local_1599, local_1599_d, param_c ? param_c : "null");
    return local_1599 + (int)local_1599_d;
}

typedef struct {
    int field_1600;
    long field_1600_b;
    double field_1600_c;
    char name_1600[64];
} StructType1600;

int function_1600(StructType1600 *s, int param_a, double param_b, const char *param_c) {
    int local_1600 = param_a * 1600;
    double local_1600_d = param_b * 1600;
    char buf_1600[128];
    snprintf(buf_1600, sizeof(buf_1600), "function_%d: %d, %f, %s", 1600, local_1600, local_1600_d, param_c ? param_c : "null");
    return local_1600 + (int)local_1600_d;
}

typedef struct {
    int field_1601;
    long field_1601_b;
    double field_1601_c;
    char name_1601[64];
} StructType1601;

int function_1601(StructType1601 *s, int param_a, double param_b, const char *param_c) {
    int local_1601 = param_a * 1601;
    double local_1601_d = param_b * 1601;
    char buf_1601[128];
    snprintf(buf_1601, sizeof(buf_1601), "function_%d: %d, %f, %s", 1601, local_1601, local_1601_d, param_c ? param_c : "null");
    return local_1601 + (int)local_1601_d;
}

typedef struct {
    int field_1602;
    long field_1602_b;
    double field_1602_c;
    char name_1602[64];
} StructType1602;

int function_1602(StructType1602 *s, int param_a, double param_b, const char *param_c) {
    int local_1602 = param_a * 1602;
    double local_1602_d = param_b * 1602;
    char buf_1602[128];
    snprintf(buf_1602, sizeof(buf_1602), "function_%d: %d, %f, %s", 1602, local_1602, local_1602_d, param_c ? param_c : "null");
    return local_1602 + (int)local_1602_d;
}

typedef struct {
    int field_1603;
    long field_1603_b;
    double field_1603_c;
    char name_1603[64];
} StructType1603;

int function_1603(StructType1603 *s, int param_a, double param_b, const char *param_c) {
    int local_1603 = param_a * 1603;
    double local_1603_d = param_b * 1603;
    char buf_1603[128];
    snprintf(buf_1603, sizeof(buf_1603), "function_%d: %d, %f, %s", 1603, local_1603, local_1603_d, param_c ? param_c : "null");
    return local_1603 + (int)local_1603_d;
}

typedef struct {
    int field_1604;
    long field_1604_b;
    double field_1604_c;
    char name_1604[64];
} StructType1604;

int function_1604(StructType1604 *s, int param_a, double param_b, const char *param_c) {
    int local_1604 = param_a * 1604;
    double local_1604_d = param_b * 1604;
    char buf_1604[128];
    snprintf(buf_1604, sizeof(buf_1604), "function_%d: %d, %f, %s", 1604, local_1604, local_1604_d, param_c ? param_c : "null");
    return local_1604 + (int)local_1604_d;
}

typedef struct {
    int field_1605;
    long field_1605_b;
    double field_1605_c;
    char name_1605[64];
} StructType1605;

int function_1605(StructType1605 *s, int param_a, double param_b, const char *param_c) {
    int local_1605 = param_a * 1605;
    double local_1605_d = param_b * 1605;
    char buf_1605[128];
    snprintf(buf_1605, sizeof(buf_1605), "function_%d: %d, %f, %s", 1605, local_1605, local_1605_d, param_c ? param_c : "null");
    return local_1605 + (int)local_1605_d;
}

typedef struct {
    int field_1606;
    long field_1606_b;
    double field_1606_c;
    char name_1606[64];
} StructType1606;

int function_1606(StructType1606 *s, int param_a, double param_b, const char *param_c) {
    int local_1606 = param_a * 1606;
    double local_1606_d = param_b * 1606;
    char buf_1606[128];
    snprintf(buf_1606, sizeof(buf_1606), "function_%d: %d, %f, %s", 1606, local_1606, local_1606_d, param_c ? param_c : "null");
    return local_1606 + (int)local_1606_d;
}

typedef struct {
    int field_1607;
    long field_1607_b;
    double field_1607_c;
    char name_1607[64];
} StructType1607;

int function_1607(StructType1607 *s, int param_a, double param_b, const char *param_c) {
    int local_1607 = param_a * 1607;
    double local_1607_d = param_b * 1607;
    char buf_1607[128];
    snprintf(buf_1607, sizeof(buf_1607), "function_%d: %d, %f, %s", 1607, local_1607, local_1607_d, param_c ? param_c : "null");
    return local_1607 + (int)local_1607_d;
}

typedef struct {
    int field_1608;
    long field_1608_b;
    double field_1608_c;
    char name_1608[64];
} StructType1608;

int function_1608(StructType1608 *s, int param_a, double param_b, const char *param_c) {
    int local_1608 = param_a * 1608;
    double local_1608_d = param_b * 1608;
    char buf_1608[128];
    snprintf(buf_1608, sizeof(buf_1608), "function_%d: %d, %f, %s", 1608, local_1608, local_1608_d, param_c ? param_c : "null");
    return local_1608 + (int)local_1608_d;
}

typedef struct {
    int field_1609;
    long field_1609_b;
    double field_1609_c;
    char name_1609[64];
} StructType1609;

int function_1609(StructType1609 *s, int param_a, double param_b, const char *param_c) {
    int local_1609 = param_a * 1609;
    double local_1609_d = param_b * 1609;
    char buf_1609[128];
    snprintf(buf_1609, sizeof(buf_1609), "function_%d: %d, %f, %s", 1609, local_1609, local_1609_d, param_c ? param_c : "null");
    return local_1609 + (int)local_1609_d;
}

typedef struct {
    int field_1610;
    long field_1610_b;
    double field_1610_c;
    char name_1610[64];
} StructType1610;

int function_1610(StructType1610 *s, int param_a, double param_b, const char *param_c) {
    int local_1610 = param_a * 1610;
    double local_1610_d = param_b * 1610;
    char buf_1610[128];
    snprintf(buf_1610, sizeof(buf_1610), "function_%d: %d, %f, %s", 1610, local_1610, local_1610_d, param_c ? param_c : "null");
    return local_1610 + (int)local_1610_d;
}

typedef struct {
    int field_1611;
    long field_1611_b;
    double field_1611_c;
    char name_1611[64];
} StructType1611;

int function_1611(StructType1611 *s, int param_a, double param_b, const char *param_c) {
    int local_1611 = param_a * 1611;
    double local_1611_d = param_b * 1611;
    char buf_1611[128];
    snprintf(buf_1611, sizeof(buf_1611), "function_%d: %d, %f, %s", 1611, local_1611, local_1611_d, param_c ? param_c : "null");
    return local_1611 + (int)local_1611_d;
}

typedef struct {
    int field_1612;
    long field_1612_b;
    double field_1612_c;
    char name_1612[64];
} StructType1612;

int function_1612(StructType1612 *s, int param_a, double param_b, const char *param_c) {
    int local_1612 = param_a * 1612;
    double local_1612_d = param_b * 1612;
    char buf_1612[128];
    snprintf(buf_1612, sizeof(buf_1612), "function_%d: %d, %f, %s", 1612, local_1612, local_1612_d, param_c ? param_c : "null");
    return local_1612 + (int)local_1612_d;
}

typedef struct {
    int field_1613;
    long field_1613_b;
    double field_1613_c;
    char name_1613[64];
} StructType1613;

int function_1613(StructType1613 *s, int param_a, double param_b, const char *param_c) {
    int local_1613 = param_a * 1613;
    double local_1613_d = param_b * 1613;
    char buf_1613[128];
    snprintf(buf_1613, sizeof(buf_1613), "function_%d: %d, %f, %s", 1613, local_1613, local_1613_d, param_c ? param_c : "null");
    return local_1613 + (int)local_1613_d;
}

typedef struct {
    int field_1614;
    long field_1614_b;
    double field_1614_c;
    char name_1614[64];
} StructType1614;

int function_1614(StructType1614 *s, int param_a, double param_b, const char *param_c) {
    int local_1614 = param_a * 1614;
    double local_1614_d = param_b * 1614;
    char buf_1614[128];
    snprintf(buf_1614, sizeof(buf_1614), "function_%d: %d, %f, %s", 1614, local_1614, local_1614_d, param_c ? param_c : "null");
    return local_1614 + (int)local_1614_d;
}

typedef struct {
    int field_1615;
    long field_1615_b;
    double field_1615_c;
    char name_1615[64];
} StructType1615;

int function_1615(StructType1615 *s, int param_a, double param_b, const char *param_c) {
    int local_1615 = param_a * 1615;
    double local_1615_d = param_b * 1615;
    char buf_1615[128];
    snprintf(buf_1615, sizeof(buf_1615), "function_%d: %d, %f, %s", 1615, local_1615, local_1615_d, param_c ? param_c : "null");
    return local_1615 + (int)local_1615_d;
}

typedef struct {
    int field_1616;
    long field_1616_b;
    double field_1616_c;
    char name_1616[64];
} StructType1616;

int function_1616(StructType1616 *s, int param_a, double param_b, const char *param_c) {
    int local_1616 = param_a * 1616;
    double local_1616_d = param_b * 1616;
    char buf_1616[128];
    snprintf(buf_1616, sizeof(buf_1616), "function_%d: %d, %f, %s", 1616, local_1616, local_1616_d, param_c ? param_c : "null");
    return local_1616 + (int)local_1616_d;
}

typedef struct {
    int field_1617;
    long field_1617_b;
    double field_1617_c;
    char name_1617[64];
} StructType1617;

int function_1617(StructType1617 *s, int param_a, double param_b, const char *param_c) {
    int local_1617 = param_a * 1617;
    double local_1617_d = param_b * 1617;
    char buf_1617[128];
    snprintf(buf_1617, sizeof(buf_1617), "function_%d: %d, %f, %s", 1617, local_1617, local_1617_d, param_c ? param_c : "null");
    return local_1617 + (int)local_1617_d;
}

typedef struct {
    int field_1618;
    long field_1618_b;
    double field_1618_c;
    char name_1618[64];
} StructType1618;

int function_1618(StructType1618 *s, int param_a, double param_b, const char *param_c) {
    int local_1618 = param_a * 1618;
    double local_1618_d = param_b * 1618;
    char buf_1618[128];
    snprintf(buf_1618, sizeof(buf_1618), "function_%d: %d, %f, %s", 1618, local_1618, local_1618_d, param_c ? param_c : "null");
    return local_1618 + (int)local_1618_d;
}

typedef struct {
    int field_1619;
    long field_1619_b;
    double field_1619_c;
    char name_1619[64];
} StructType1619;

int function_1619(StructType1619 *s, int param_a, double param_b, const char *param_c) {
    int local_1619 = param_a * 1619;
    double local_1619_d = param_b * 1619;
    char buf_1619[128];
    snprintf(buf_1619, sizeof(buf_1619), "function_%d: %d, %f, %s", 1619, local_1619, local_1619_d, param_c ? param_c : "null");
    return local_1619 + (int)local_1619_d;
}

typedef struct {
    int field_1620;
    long field_1620_b;
    double field_1620_c;
    char name_1620[64];
} StructType1620;

int function_1620(StructType1620 *s, int param_a, double param_b, const char *param_c) {
    int local_1620 = param_a * 1620;
    double local_1620_d = param_b * 1620;
    char buf_1620[128];
    snprintf(buf_1620, sizeof(buf_1620), "function_%d: %d, %f, %s", 1620, local_1620, local_1620_d, param_c ? param_c : "null");
    return local_1620 + (int)local_1620_d;
}

typedef struct {
    int field_1621;
    long field_1621_b;
    double field_1621_c;
    char name_1621[64];
} StructType1621;

int function_1621(StructType1621 *s, int param_a, double param_b, const char *param_c) {
    int local_1621 = param_a * 1621;
    double local_1621_d = param_b * 1621;
    char buf_1621[128];
    snprintf(buf_1621, sizeof(buf_1621), "function_%d: %d, %f, %s", 1621, local_1621, local_1621_d, param_c ? param_c : "null");
    return local_1621 + (int)local_1621_d;
}

typedef struct {
    int field_1622;
    long field_1622_b;
    double field_1622_c;
    char name_1622[64];
} StructType1622;

int function_1622(StructType1622 *s, int param_a, double param_b, const char *param_c) {
    int local_1622 = param_a * 1622;
    double local_1622_d = param_b * 1622;
    char buf_1622[128];
    snprintf(buf_1622, sizeof(buf_1622), "function_%d: %d, %f, %s", 1622, local_1622, local_1622_d, param_c ? param_c : "null");
    return local_1622 + (int)local_1622_d;
}

typedef struct {
    int field_1623;
    long field_1623_b;
    double field_1623_c;
    char name_1623[64];
} StructType1623;

int function_1623(StructType1623 *s, int param_a, double param_b, const char *param_c) {
    int local_1623 = param_a * 1623;
    double local_1623_d = param_b * 1623;
    char buf_1623[128];
    snprintf(buf_1623, sizeof(buf_1623), "function_%d: %d, %f, %s", 1623, local_1623, local_1623_d, param_c ? param_c : "null");
    return local_1623 + (int)local_1623_d;
}

typedef struct {
    int field_1624;
    long field_1624_b;
    double field_1624_c;
    char name_1624[64];
} StructType1624;

int function_1624(StructType1624 *s, int param_a, double param_b, const char *param_c) {
    int local_1624 = param_a * 1624;
    double local_1624_d = param_b * 1624;
    char buf_1624[128];
    snprintf(buf_1624, sizeof(buf_1624), "function_%d: %d, %f, %s", 1624, local_1624, local_1624_d, param_c ? param_c : "null");
    return local_1624 + (int)local_1624_d;
}

typedef struct {
    int field_1625;
    long field_1625_b;
    double field_1625_c;
    char name_1625[64];
} StructType1625;

int function_1625(StructType1625 *s, int param_a, double param_b, const char *param_c) {
    int local_1625 = param_a * 1625;
    double local_1625_d = param_b * 1625;
    char buf_1625[128];
    snprintf(buf_1625, sizeof(buf_1625), "function_%d: %d, %f, %s", 1625, local_1625, local_1625_d, param_c ? param_c : "null");
    return local_1625 + (int)local_1625_d;
}

typedef struct {
    int field_1626;
    long field_1626_b;
    double field_1626_c;
    char name_1626[64];
} StructType1626;

int function_1626(StructType1626 *s, int param_a, double param_b, const char *param_c) {
    int local_1626 = param_a * 1626;
    double local_1626_d = param_b * 1626;
    char buf_1626[128];
    snprintf(buf_1626, sizeof(buf_1626), "function_%d: %d, %f, %s", 1626, local_1626, local_1626_d, param_c ? param_c : "null");
    return local_1626 + (int)local_1626_d;
}

typedef struct {
    int field_1627;
    long field_1627_b;
    double field_1627_c;
    char name_1627[64];
} StructType1627;

int function_1627(StructType1627 *s, int param_a, double param_b, const char *param_c) {
    int local_1627 = param_a * 1627;
    double local_1627_d = param_b * 1627;
    char buf_1627[128];
    snprintf(buf_1627, sizeof(buf_1627), "function_%d: %d, %f, %s", 1627, local_1627, local_1627_d, param_c ? param_c : "null");
    return local_1627 + (int)local_1627_d;
}

typedef struct {
    int field_1628;
    long field_1628_b;
    double field_1628_c;
    char name_1628[64];
} StructType1628;

int function_1628(StructType1628 *s, int param_a, double param_b, const char *param_c) {
    int local_1628 = param_a * 1628;
    double local_1628_d = param_b * 1628;
    char buf_1628[128];
    snprintf(buf_1628, sizeof(buf_1628), "function_%d: %d, %f, %s", 1628, local_1628, local_1628_d, param_c ? param_c : "null");
    return local_1628 + (int)local_1628_d;
}

typedef struct {
    int field_1629;
    long field_1629_b;
    double field_1629_c;
    char name_1629[64];
} StructType1629;

int function_1629(StructType1629 *s, int param_a, double param_b, const char *param_c) {
    int local_1629 = param_a * 1629;
    double local_1629_d = param_b * 1629;
    char buf_1629[128];
    snprintf(buf_1629, sizeof(buf_1629), "function_%d: %d, %f, %s", 1629, local_1629, local_1629_d, param_c ? param_c : "null");
    return local_1629 + (int)local_1629_d;
}

typedef struct {
    int field_1630;
    long field_1630_b;
    double field_1630_c;
    char name_1630[64];
} StructType1630;

int function_1630(StructType1630 *s, int param_a, double param_b, const char *param_c) {
    int local_1630 = param_a * 1630;
    double local_1630_d = param_b * 1630;
    char buf_1630[128];
    snprintf(buf_1630, sizeof(buf_1630), "function_%d: %d, %f, %s", 1630, local_1630, local_1630_d, param_c ? param_c : "null");
    return local_1630 + (int)local_1630_d;
}

typedef struct {
    int field_1631;
    long field_1631_b;
    double field_1631_c;
    char name_1631[64];
} StructType1631;

int function_1631(StructType1631 *s, int param_a, double param_b, const char *param_c) {
    int local_1631 = param_a * 1631;
    double local_1631_d = param_b * 1631;
    char buf_1631[128];
    snprintf(buf_1631, sizeof(buf_1631), "function_%d: %d, %f, %s", 1631, local_1631, local_1631_d, param_c ? param_c : "null");
    return local_1631 + (int)local_1631_d;
}

typedef struct {
    int field_1632;
    long field_1632_b;
    double field_1632_c;
    char name_1632[64];
} StructType1632;

int function_1632(StructType1632 *s, int param_a, double param_b, const char *param_c) {
    int local_1632 = param_a * 1632;
    double local_1632_d = param_b * 1632;
    char buf_1632[128];
    snprintf(buf_1632, sizeof(buf_1632), "function_%d: %d, %f, %s", 1632, local_1632, local_1632_d, param_c ? param_c : "null");
    return local_1632 + (int)local_1632_d;
}

typedef struct {
    int field_1633;
    long field_1633_b;
    double field_1633_c;
    char name_1633[64];
} StructType1633;

int function_1633(StructType1633 *s, int param_a, double param_b, const char *param_c) {
    int local_1633 = param_a * 1633;
    double local_1633_d = param_b * 1633;
    char buf_1633[128];
    snprintf(buf_1633, sizeof(buf_1633), "function_%d: %d, %f, %s", 1633, local_1633, local_1633_d, param_c ? param_c : "null");
    return local_1633 + (int)local_1633_d;
}

typedef struct {
    int field_1634;
    long field_1634_b;
    double field_1634_c;
    char name_1634[64];
} StructType1634;

int function_1634(StructType1634 *s, int param_a, double param_b, const char *param_c) {
    int local_1634 = param_a * 1634;
    double local_1634_d = param_b * 1634;
    char buf_1634[128];
    snprintf(buf_1634, sizeof(buf_1634), "function_%d: %d, %f, %s", 1634, local_1634, local_1634_d, param_c ? param_c : "null");
    return local_1634 + (int)local_1634_d;
}

typedef struct {
    int field_1635;
    long field_1635_b;
    double field_1635_c;
    char name_1635[64];
} StructType1635;

int function_1635(StructType1635 *s, int param_a, double param_b, const char *param_c) {
    int local_1635 = param_a * 1635;
    double local_1635_d = param_b * 1635;
    char buf_1635[128];
    snprintf(buf_1635, sizeof(buf_1635), "function_%d: %d, %f, %s", 1635, local_1635, local_1635_d, param_c ? param_c : "null");
    return local_1635 + (int)local_1635_d;
}

typedef struct {
    int field_1636;
    long field_1636_b;
    double field_1636_c;
    char name_1636[64];
} StructType1636;

int function_1636(StructType1636 *s, int param_a, double param_b, const char *param_c) {
    int local_1636 = param_a * 1636;
    double local_1636_d = param_b * 1636;
    char buf_1636[128];
    snprintf(buf_1636, sizeof(buf_1636), "function_%d: %d, %f, %s", 1636, local_1636, local_1636_d, param_c ? param_c : "null");
    return local_1636 + (int)local_1636_d;
}

typedef struct {
    int field_1637;
    long field_1637_b;
    double field_1637_c;
    char name_1637[64];
} StructType1637;

int function_1637(StructType1637 *s, int param_a, double param_b, const char *param_c) {
    int local_1637 = param_a * 1637;
    double local_1637_d = param_b * 1637;
    char buf_1637[128];
    snprintf(buf_1637, sizeof(buf_1637), "function_%d: %d, %f, %s", 1637, local_1637, local_1637_d, param_c ? param_c : "null");
    return local_1637 + (int)local_1637_d;
}

typedef struct {
    int field_1638;
    long field_1638_b;
    double field_1638_c;
    char name_1638[64];
} StructType1638;

int function_1638(StructType1638 *s, int param_a, double param_b, const char *param_c) {
    int local_1638 = param_a * 1638;
    double local_1638_d = param_b * 1638;
    char buf_1638[128];
    snprintf(buf_1638, sizeof(buf_1638), "function_%d: %d, %f, %s", 1638, local_1638, local_1638_d, param_c ? param_c : "null");
    return local_1638 + (int)local_1638_d;
}

typedef struct {
    int field_1639;
    long field_1639_b;
    double field_1639_c;
    char name_1639[64];
} StructType1639;

int function_1639(StructType1639 *s, int param_a, double param_b, const char *param_c) {
    int local_1639 = param_a * 1639;
    double local_1639_d = param_b * 1639;
    char buf_1639[128];
    snprintf(buf_1639, sizeof(buf_1639), "function_%d: %d, %f, %s", 1639, local_1639, local_1639_d, param_c ? param_c : "null");
    return local_1639 + (int)local_1639_d;
}

typedef struct {
    int field_1640;
    long field_1640_b;
    double field_1640_c;
    char name_1640[64];
} StructType1640;

int function_1640(StructType1640 *s, int param_a, double param_b, const char *param_c) {
    int local_1640 = param_a * 1640;
    double local_1640_d = param_b * 1640;
    char buf_1640[128];
    snprintf(buf_1640, sizeof(buf_1640), "function_%d: %d, %f, %s", 1640, local_1640, local_1640_d, param_c ? param_c : "null");
    return local_1640 + (int)local_1640_d;
}

typedef struct {
    int field_1641;
    long field_1641_b;
    double field_1641_c;
    char name_1641[64];
} StructType1641;

int function_1641(StructType1641 *s, int param_a, double param_b, const char *param_c) {
    int local_1641 = param_a * 1641;
    double local_1641_d = param_b * 1641;
    char buf_1641[128];
    snprintf(buf_1641, sizeof(buf_1641), "function_%d: %d, %f, %s", 1641, local_1641, local_1641_d, param_c ? param_c : "null");
    return local_1641 + (int)local_1641_d;
}

typedef struct {
    int field_1642;
    long field_1642_b;
    double field_1642_c;
    char name_1642[64];
} StructType1642;

int function_1642(StructType1642 *s, int param_a, double param_b, const char *param_c) {
    int local_1642 = param_a * 1642;
    double local_1642_d = param_b * 1642;
    char buf_1642[128];
    snprintf(buf_1642, sizeof(buf_1642), "function_%d: %d, %f, %s", 1642, local_1642, local_1642_d, param_c ? param_c : "null");
    return local_1642 + (int)local_1642_d;
}

typedef struct {
    int field_1643;
    long field_1643_b;
    double field_1643_c;
    char name_1643[64];
} StructType1643;

int function_1643(StructType1643 *s, int param_a, double param_b, const char *param_c) {
    int local_1643 = param_a * 1643;
    double local_1643_d = param_b * 1643;
    char buf_1643[128];
    snprintf(buf_1643, sizeof(buf_1643), "function_%d: %d, %f, %s", 1643, local_1643, local_1643_d, param_c ? param_c : "null");
    return local_1643 + (int)local_1643_d;
}

typedef struct {
    int field_1644;
    long field_1644_b;
    double field_1644_c;
    char name_1644[64];
} StructType1644;

int function_1644(StructType1644 *s, int param_a, double param_b, const char *param_c) {
    int local_1644 = param_a * 1644;
    double local_1644_d = param_b * 1644;
    char buf_1644[128];
    snprintf(buf_1644, sizeof(buf_1644), "function_%d: %d, %f, %s", 1644, local_1644, local_1644_d, param_c ? param_c : "null");
    return local_1644 + (int)local_1644_d;
}

typedef struct {
    int field_1645;
    long field_1645_b;
    double field_1645_c;
    char name_1645[64];
} StructType1645;

int function_1645(StructType1645 *s, int param_a, double param_b, const char *param_c) {
    int local_1645 = param_a * 1645;
    double local_1645_d = param_b * 1645;
    char buf_1645[128];
    snprintf(buf_1645, sizeof(buf_1645), "function_%d: %d, %f, %s", 1645, local_1645, local_1645_d, param_c ? param_c : "null");
    return local_1645 + (int)local_1645_d;
}

typedef struct {
    int field_1646;
    long field_1646_b;
    double field_1646_c;
    char name_1646[64];
} StructType1646;

int function_1646(StructType1646 *s, int param_a, double param_b, const char *param_c) {
    int local_1646 = param_a * 1646;
    double local_1646_d = param_b * 1646;
    char buf_1646[128];
    snprintf(buf_1646, sizeof(buf_1646), "function_%d: %d, %f, %s", 1646, local_1646, local_1646_d, param_c ? param_c : "null");
    return local_1646 + (int)local_1646_d;
}

typedef struct {
    int field_1647;
    long field_1647_b;
    double field_1647_c;
    char name_1647[64];
} StructType1647;

int function_1647(StructType1647 *s, int param_a, double param_b, const char *param_c) {
    int local_1647 = param_a * 1647;
    double local_1647_d = param_b * 1647;
    char buf_1647[128];
    snprintf(buf_1647, sizeof(buf_1647), "function_%d: %d, %f, %s", 1647, local_1647, local_1647_d, param_c ? param_c : "null");
    return local_1647 + (int)local_1647_d;
}

typedef struct {
    int field_1648;
    long field_1648_b;
    double field_1648_c;
    char name_1648[64];
} StructType1648;

int function_1648(StructType1648 *s, int param_a, double param_b, const char *param_c) {
    int local_1648 = param_a * 1648;
    double local_1648_d = param_b * 1648;
    char buf_1648[128];
    snprintf(buf_1648, sizeof(buf_1648), "function_%d: %d, %f, %s", 1648, local_1648, local_1648_d, param_c ? param_c : "null");
    return local_1648 + (int)local_1648_d;
}

typedef struct {
    int field_1649;
    long field_1649_b;
    double field_1649_c;
    char name_1649[64];
} StructType1649;

int function_1649(StructType1649 *s, int param_a, double param_b, const char *param_c) {
    int local_1649 = param_a * 1649;
    double local_1649_d = param_b * 1649;
    char buf_1649[128];
    snprintf(buf_1649, sizeof(buf_1649), "function_%d: %d, %f, %s", 1649, local_1649, local_1649_d, param_c ? param_c : "null");
    return local_1649 + (int)local_1649_d;
}

typedef struct {
    int field_1650;
    long field_1650_b;
    double field_1650_c;
    char name_1650[64];
} StructType1650;

int function_1650(StructType1650 *s, int param_a, double param_b, const char *param_c) {
    int local_1650 = param_a * 1650;
    double local_1650_d = param_b * 1650;
    char buf_1650[128];
    snprintf(buf_1650, sizeof(buf_1650), "function_%d: %d, %f, %s", 1650, local_1650, local_1650_d, param_c ? param_c : "null");
    return local_1650 + (int)local_1650_d;
}

typedef struct {
    int field_1651;
    long field_1651_b;
    double field_1651_c;
    char name_1651[64];
} StructType1651;

int function_1651(StructType1651 *s, int param_a, double param_b, const char *param_c) {
    int local_1651 = param_a * 1651;
    double local_1651_d = param_b * 1651;
    char buf_1651[128];
    snprintf(buf_1651, sizeof(buf_1651), "function_%d: %d, %f, %s", 1651, local_1651, local_1651_d, param_c ? param_c : "null");
    return local_1651 + (int)local_1651_d;
}

typedef struct {
    int field_1652;
    long field_1652_b;
    double field_1652_c;
    char name_1652[64];
} StructType1652;

int function_1652(StructType1652 *s, int param_a, double param_b, const char *param_c) {
    int local_1652 = param_a * 1652;
    double local_1652_d = param_b * 1652;
    char buf_1652[128];
    snprintf(buf_1652, sizeof(buf_1652), "function_%d: %d, %f, %s", 1652, local_1652, local_1652_d, param_c ? param_c : "null");
    return local_1652 + (int)local_1652_d;
}

typedef struct {
    int field_1653;
    long field_1653_b;
    double field_1653_c;
    char name_1653[64];
} StructType1653;

int function_1653(StructType1653 *s, int param_a, double param_b, const char *param_c) {
    int local_1653 = param_a * 1653;
    double local_1653_d = param_b * 1653;
    char buf_1653[128];
    snprintf(buf_1653, sizeof(buf_1653), "function_%d: %d, %f, %s", 1653, local_1653, local_1653_d, param_c ? param_c : "null");
    return local_1653 + (int)local_1653_d;
}

typedef struct {
    int field_1654;
    long field_1654_b;
    double field_1654_c;
    char name_1654[64];
} StructType1654;

int function_1654(StructType1654 *s, int param_a, double param_b, const char *param_c) {
    int local_1654 = param_a * 1654;
    double local_1654_d = param_b * 1654;
    char buf_1654[128];
    snprintf(buf_1654, sizeof(buf_1654), "function_%d: %d, %f, %s", 1654, local_1654, local_1654_d, param_c ? param_c : "null");
    return local_1654 + (int)local_1654_d;
}

typedef struct {
    int field_1655;
    long field_1655_b;
    double field_1655_c;
    char name_1655[64];
} StructType1655;

int function_1655(StructType1655 *s, int param_a, double param_b, const char *param_c) {
    int local_1655 = param_a * 1655;
    double local_1655_d = param_b * 1655;
    char buf_1655[128];
    snprintf(buf_1655, sizeof(buf_1655), "function_%d: %d, %f, %s", 1655, local_1655, local_1655_d, param_c ? param_c : "null");
    return local_1655 + (int)local_1655_d;
}

typedef struct {
    int field_1656;
    long field_1656_b;
    double field_1656_c;
    char name_1656[64];
} StructType1656;

int function_1656(StructType1656 *s, int param_a, double param_b, const char *param_c) {
    int local_1656 = param_a * 1656;
    double local_1656_d = param_b * 1656;
    char buf_1656[128];
    snprintf(buf_1656, sizeof(buf_1656), "function_%d: %d, %f, %s", 1656, local_1656, local_1656_d, param_c ? param_c : "null");
    return local_1656 + (int)local_1656_d;
}

typedef struct {
    int field_1657;
    long field_1657_b;
    double field_1657_c;
    char name_1657[64];
} StructType1657;

int function_1657(StructType1657 *s, int param_a, double param_b, const char *param_c) {
    int local_1657 = param_a * 1657;
    double local_1657_d = param_b * 1657;
    char buf_1657[128];
    snprintf(buf_1657, sizeof(buf_1657), "function_%d: %d, %f, %s", 1657, local_1657, local_1657_d, param_c ? param_c : "null");
    return local_1657 + (int)local_1657_d;
}

typedef struct {
    int field_1658;
    long field_1658_b;
    double field_1658_c;
    char name_1658[64];
} StructType1658;

int function_1658(StructType1658 *s, int param_a, double param_b, const char *param_c) {
    int local_1658 = param_a * 1658;
    double local_1658_d = param_b * 1658;
    char buf_1658[128];
    snprintf(buf_1658, sizeof(buf_1658), "function_%d: %d, %f, %s", 1658, local_1658, local_1658_d, param_c ? param_c : "null");
    return local_1658 + (int)local_1658_d;
}

typedef struct {
    int field_1659;
    long field_1659_b;
    double field_1659_c;
    char name_1659[64];
} StructType1659;

int function_1659(StructType1659 *s, int param_a, double param_b, const char *param_c) {
    int local_1659 = param_a * 1659;
    double local_1659_d = param_b * 1659;
    char buf_1659[128];
    snprintf(buf_1659, sizeof(buf_1659), "function_%d: %d, %f, %s", 1659, local_1659, local_1659_d, param_c ? param_c : "null");
    return local_1659 + (int)local_1659_d;
}

typedef struct {
    int field_1660;
    long field_1660_b;
    double field_1660_c;
    char name_1660[64];
} StructType1660;

int function_1660(StructType1660 *s, int param_a, double param_b, const char *param_c) {
    int local_1660 = param_a * 1660;
    double local_1660_d = param_b * 1660;
    char buf_1660[128];
    snprintf(buf_1660, sizeof(buf_1660), "function_%d: %d, %f, %s", 1660, local_1660, local_1660_d, param_c ? param_c : "null");
    return local_1660 + (int)local_1660_d;
}

typedef struct {
    int field_1661;
    long field_1661_b;
    double field_1661_c;
    char name_1661[64];
} StructType1661;

int function_1661(StructType1661 *s, int param_a, double param_b, const char *param_c) {
    int local_1661 = param_a * 1661;
    double local_1661_d = param_b * 1661;
    char buf_1661[128];
    snprintf(buf_1661, sizeof(buf_1661), "function_%d: %d, %f, %s", 1661, local_1661, local_1661_d, param_c ? param_c : "null");
    return local_1661 + (int)local_1661_d;
}

typedef struct {
    int field_1662;
    long field_1662_b;
    double field_1662_c;
    char name_1662[64];
} StructType1662;

int function_1662(StructType1662 *s, int param_a, double param_b, const char *param_c) {
    int local_1662 = param_a * 1662;
    double local_1662_d = param_b * 1662;
    char buf_1662[128];
    snprintf(buf_1662, sizeof(buf_1662), "function_%d: %d, %f, %s", 1662, local_1662, local_1662_d, param_c ? param_c : "null");
    return local_1662 + (int)local_1662_d;
}

typedef struct {
    int field_1663;
    long field_1663_b;
    double field_1663_c;
    char name_1663[64];
} StructType1663;

int function_1663(StructType1663 *s, int param_a, double param_b, const char *param_c) {
    int local_1663 = param_a * 1663;
    double local_1663_d = param_b * 1663;
    char buf_1663[128];
    snprintf(buf_1663, sizeof(buf_1663), "function_%d: %d, %f, %s", 1663, local_1663, local_1663_d, param_c ? param_c : "null");
    return local_1663 + (int)local_1663_d;
}

typedef struct {
    int field_1664;
    long field_1664_b;
    double field_1664_c;
    char name_1664[64];
} StructType1664;

int function_1664(StructType1664 *s, int param_a, double param_b, const char *param_c) {
    int local_1664 = param_a * 1664;
    double local_1664_d = param_b * 1664;
    char buf_1664[128];
    snprintf(buf_1664, sizeof(buf_1664), "function_%d: %d, %f, %s", 1664, local_1664, local_1664_d, param_c ? param_c : "null");
    return local_1664 + (int)local_1664_d;
}

typedef struct {
    int field_1665;
    long field_1665_b;
    double field_1665_c;
    char name_1665[64];
} StructType1665;

int function_1665(StructType1665 *s, int param_a, double param_b, const char *param_c) {
    int local_1665 = param_a * 1665;
    double local_1665_d = param_b * 1665;
    char buf_1665[128];
    snprintf(buf_1665, sizeof(buf_1665), "function_%d: %d, %f, %s", 1665, local_1665, local_1665_d, param_c ? param_c : "null");
    return local_1665 + (int)local_1665_d;
}

typedef struct {
    int field_1666;
    long field_1666_b;
    double field_1666_c;
    char name_1666[64];
} StructType1666;

int function_1666(StructType1666 *s, int param_a, double param_b, const char *param_c) {
    int local_1666 = param_a * 1666;
    double local_1666_d = param_b * 1666;
    char buf_1666[128];
    snprintf(buf_1666, sizeof(buf_1666), "function_%d: %d, %f, %s", 1666, local_1666, local_1666_d, param_c ? param_c : "null");
    return local_1666 + (int)local_1666_d;
}

typedef struct {
    int field_1667;
    long field_1667_b;
    double field_1667_c;
    char name_1667[64];
} StructType1667;

int function_1667(StructType1667 *s, int param_a, double param_b, const char *param_c) {
    int local_1667 = param_a * 1667;
    double local_1667_d = param_b * 1667;
    char buf_1667[128];
    snprintf(buf_1667, sizeof(buf_1667), "function_%d: %d, %f, %s", 1667, local_1667, local_1667_d, param_c ? param_c : "null");
    return local_1667 + (int)local_1667_d;
}

typedef struct {
    int field_1668;
    long field_1668_b;
    double field_1668_c;
    char name_1668[64];
} StructType1668;

int function_1668(StructType1668 *s, int param_a, double param_b, const char *param_c) {
    int local_1668 = param_a * 1668;
    double local_1668_d = param_b * 1668;
    char buf_1668[128];
    snprintf(buf_1668, sizeof(buf_1668), "function_%d: %d, %f, %s", 1668, local_1668, local_1668_d, param_c ? param_c : "null");
    return local_1668 + (int)local_1668_d;
}

typedef struct {
    int field_1669;
    long field_1669_b;
    double field_1669_c;
    char name_1669[64];
} StructType1669;

int function_1669(StructType1669 *s, int param_a, double param_b, const char *param_c) {
    int local_1669 = param_a * 1669;
    double local_1669_d = param_b * 1669;
    char buf_1669[128];
    snprintf(buf_1669, sizeof(buf_1669), "function_%d: %d, %f, %s", 1669, local_1669, local_1669_d, param_c ? param_c : "null");
    return local_1669 + (int)local_1669_d;
}

typedef struct {
    int field_1670;
    long field_1670_b;
    double field_1670_c;
    char name_1670[64];
} StructType1670;

int function_1670(StructType1670 *s, int param_a, double param_b, const char *param_c) {
    int local_1670 = param_a * 1670;
    double local_1670_d = param_b * 1670;
    char buf_1670[128];
    snprintf(buf_1670, sizeof(buf_1670), "function_%d: %d, %f, %s", 1670, local_1670, local_1670_d, param_c ? param_c : "null");
    return local_1670 + (int)local_1670_d;
}

typedef struct {
    int field_1671;
    long field_1671_b;
    double field_1671_c;
    char name_1671[64];
} StructType1671;

int function_1671(StructType1671 *s, int param_a, double param_b, const char *param_c) {
    int local_1671 = param_a * 1671;
    double local_1671_d = param_b * 1671;
    char buf_1671[128];
    snprintf(buf_1671, sizeof(buf_1671), "function_%d: %d, %f, %s", 1671, local_1671, local_1671_d, param_c ? param_c : "null");
    return local_1671 + (int)local_1671_d;
}

typedef struct {
    int field_1672;
    long field_1672_b;
    double field_1672_c;
    char name_1672[64];
} StructType1672;

int function_1672(StructType1672 *s, int param_a, double param_b, const char *param_c) {
    int local_1672 = param_a * 1672;
    double local_1672_d = param_b * 1672;
    char buf_1672[128];
    snprintf(buf_1672, sizeof(buf_1672), "function_%d: %d, %f, %s", 1672, local_1672, local_1672_d, param_c ? param_c : "null");
    return local_1672 + (int)local_1672_d;
}

typedef struct {
    int field_1673;
    long field_1673_b;
    double field_1673_c;
    char name_1673[64];
} StructType1673;

int function_1673(StructType1673 *s, int param_a, double param_b, const char *param_c) {
    int local_1673 = param_a * 1673;
    double local_1673_d = param_b * 1673;
    char buf_1673[128];
    snprintf(buf_1673, sizeof(buf_1673), "function_%d: %d, %f, %s", 1673, local_1673, local_1673_d, param_c ? param_c : "null");
    return local_1673 + (int)local_1673_d;
}

typedef struct {
    int field_1674;
    long field_1674_b;
    double field_1674_c;
    char name_1674[64];
} StructType1674;

int function_1674(StructType1674 *s, int param_a, double param_b, const char *param_c) {
    int local_1674 = param_a * 1674;
    double local_1674_d = param_b * 1674;
    char buf_1674[128];
    snprintf(buf_1674, sizeof(buf_1674), "function_%d: %d, %f, %s", 1674, local_1674, local_1674_d, param_c ? param_c : "null");
    return local_1674 + (int)local_1674_d;
}

typedef struct {
    int field_1675;
    long field_1675_b;
    double field_1675_c;
    char name_1675[64];
} StructType1675;

int function_1675(StructType1675 *s, int param_a, double param_b, const char *param_c) {
    int local_1675 = param_a * 1675;
    double local_1675_d = param_b * 1675;
    char buf_1675[128];
    snprintf(buf_1675, sizeof(buf_1675), "function_%d: %d, %f, %s", 1675, local_1675, local_1675_d, param_c ? param_c : "null");
    return local_1675 + (int)local_1675_d;
}

typedef struct {
    int field_1676;
    long field_1676_b;
    double field_1676_c;
    char name_1676[64];
} StructType1676;

int function_1676(StructType1676 *s, int param_a, double param_b, const char *param_c) {
    int local_1676 = param_a * 1676;
    double local_1676_d = param_b * 1676;
    char buf_1676[128];
    snprintf(buf_1676, sizeof(buf_1676), "function_%d: %d, %f, %s", 1676, local_1676, local_1676_d, param_c ? param_c : "null");
    return local_1676 + (int)local_1676_d;
}

typedef struct {
    int field_1677;
    long field_1677_b;
    double field_1677_c;
    char name_1677[64];
} StructType1677;

int function_1677(StructType1677 *s, int param_a, double param_b, const char *param_c) {
    int local_1677 = param_a * 1677;
    double local_1677_d = param_b * 1677;
    char buf_1677[128];
    snprintf(buf_1677, sizeof(buf_1677), "function_%d: %d, %f, %s", 1677, local_1677, local_1677_d, param_c ? param_c : "null");
    return local_1677 + (int)local_1677_d;
}

typedef struct {
    int field_1678;
    long field_1678_b;
    double field_1678_c;
    char name_1678[64];
} StructType1678;

int function_1678(StructType1678 *s, int param_a, double param_b, const char *param_c) {
    int local_1678 = param_a * 1678;
    double local_1678_d = param_b * 1678;
    char buf_1678[128];
    snprintf(buf_1678, sizeof(buf_1678), "function_%d: %d, %f, %s", 1678, local_1678, local_1678_d, param_c ? param_c : "null");
    return local_1678 + (int)local_1678_d;
}

typedef struct {
    int field_1679;
    long field_1679_b;
    double field_1679_c;
    char name_1679[64];
} StructType1679;

int function_1679(StructType1679 *s, int param_a, double param_b, const char *param_c) {
    int local_1679 = param_a * 1679;
    double local_1679_d = param_b * 1679;
    char buf_1679[128];
    snprintf(buf_1679, sizeof(buf_1679), "function_%d: %d, %f, %s", 1679, local_1679, local_1679_d, param_c ? param_c : "null");
    return local_1679 + (int)local_1679_d;
}

typedef struct {
    int field_1680;
    long field_1680_b;
    double field_1680_c;
    char name_1680[64];
} StructType1680;

int function_1680(StructType1680 *s, int param_a, double param_b, const char *param_c) {
    int local_1680 = param_a * 1680;
    double local_1680_d = param_b * 1680;
    char buf_1680[128];
    snprintf(buf_1680, sizeof(buf_1680), "function_%d: %d, %f, %s", 1680, local_1680, local_1680_d, param_c ? param_c : "null");
    return local_1680 + (int)local_1680_d;
}

typedef struct {
    int field_1681;
    long field_1681_b;
    double field_1681_c;
    char name_1681[64];
} StructType1681;

int function_1681(StructType1681 *s, int param_a, double param_b, const char *param_c) {
    int local_1681 = param_a * 1681;
    double local_1681_d = param_b * 1681;
    char buf_1681[128];
    snprintf(buf_1681, sizeof(buf_1681), "function_%d: %d, %f, %s", 1681, local_1681, local_1681_d, param_c ? param_c : "null");
    return local_1681 + (int)local_1681_d;
}

typedef struct {
    int field_1682;
    long field_1682_b;
    double field_1682_c;
    char name_1682[64];
} StructType1682;

int function_1682(StructType1682 *s, int param_a, double param_b, const char *param_c) {
    int local_1682 = param_a * 1682;
    double local_1682_d = param_b * 1682;
    char buf_1682[128];
    snprintf(buf_1682, sizeof(buf_1682), "function_%d: %d, %f, %s", 1682, local_1682, local_1682_d, param_c ? param_c : "null");
    return local_1682 + (int)local_1682_d;
}

typedef struct {
    int field_1683;
    long field_1683_b;
    double field_1683_c;
    char name_1683[64];
} StructType1683;

int function_1683(StructType1683 *s, int param_a, double param_b, const char *param_c) {
    int local_1683 = param_a * 1683;
    double local_1683_d = param_b * 1683;
    char buf_1683[128];
    snprintf(buf_1683, sizeof(buf_1683), "function_%d: %d, %f, %s", 1683, local_1683, local_1683_d, param_c ? param_c : "null");
    return local_1683 + (int)local_1683_d;
}

typedef struct {
    int field_1684;
    long field_1684_b;
    double field_1684_c;
    char name_1684[64];
} StructType1684;

int function_1684(StructType1684 *s, int param_a, double param_b, const char *param_c) {
    int local_1684 = param_a * 1684;
    double local_1684_d = param_b * 1684;
    char buf_1684[128];
    snprintf(buf_1684, sizeof(buf_1684), "function_%d: %d, %f, %s", 1684, local_1684, local_1684_d, param_c ? param_c : "null");
    return local_1684 + (int)local_1684_d;
}

typedef struct {
    int field_1685;
    long field_1685_b;
    double field_1685_c;
    char name_1685[64];
} StructType1685;

int function_1685(StructType1685 *s, int param_a, double param_b, const char *param_c) {
    int local_1685 = param_a * 1685;
    double local_1685_d = param_b * 1685;
    char buf_1685[128];
    snprintf(buf_1685, sizeof(buf_1685), "function_%d: %d, %f, %s", 1685, local_1685, local_1685_d, param_c ? param_c : "null");
    return local_1685 + (int)local_1685_d;
}

typedef struct {
    int field_1686;
    long field_1686_b;
    double field_1686_c;
    char name_1686[64];
} StructType1686;

int function_1686(StructType1686 *s, int param_a, double param_b, const char *param_c) {
    int local_1686 = param_a * 1686;
    double local_1686_d = param_b * 1686;
    char buf_1686[128];
    snprintf(buf_1686, sizeof(buf_1686), "function_%d: %d, %f, %s", 1686, local_1686, local_1686_d, param_c ? param_c : "null");
    return local_1686 + (int)local_1686_d;
}

typedef struct {
    int field_1687;
    long field_1687_b;
    double field_1687_c;
    char name_1687[64];
} StructType1687;

int function_1687(StructType1687 *s, int param_a, double param_b, const char *param_c) {
    int local_1687 = param_a * 1687;
    double local_1687_d = param_b * 1687;
    char buf_1687[128];
    snprintf(buf_1687, sizeof(buf_1687), "function_%d: %d, %f, %s", 1687, local_1687, local_1687_d, param_c ? param_c : "null");
    return local_1687 + (int)local_1687_d;
}

typedef struct {
    int field_1688;
    long field_1688_b;
    double field_1688_c;
    char name_1688[64];
} StructType1688;

int function_1688(StructType1688 *s, int param_a, double param_b, const char *param_c) {
    int local_1688 = param_a * 1688;
    double local_1688_d = param_b * 1688;
    char buf_1688[128];
    snprintf(buf_1688, sizeof(buf_1688), "function_%d: %d, %f, %s", 1688, local_1688, local_1688_d, param_c ? param_c : "null");
    return local_1688 + (int)local_1688_d;
}

typedef struct {
    int field_1689;
    long field_1689_b;
    double field_1689_c;
    char name_1689[64];
} StructType1689;

int function_1689(StructType1689 *s, int param_a, double param_b, const char *param_c) {
    int local_1689 = param_a * 1689;
    double local_1689_d = param_b * 1689;
    char buf_1689[128];
    snprintf(buf_1689, sizeof(buf_1689), "function_%d: %d, %f, %s", 1689, local_1689, local_1689_d, param_c ? param_c : "null");
    return local_1689 + (int)local_1689_d;
}

typedef struct {
    int field_1690;
    long field_1690_b;
    double field_1690_c;
    char name_1690[64];
} StructType1690;

int function_1690(StructType1690 *s, int param_a, double param_b, const char *param_c) {
    int local_1690 = param_a * 1690;
    double local_1690_d = param_b * 1690;
    char buf_1690[128];
    snprintf(buf_1690, sizeof(buf_1690), "function_%d: %d, %f, %s", 1690, local_1690, local_1690_d, param_c ? param_c : "null");
    return local_1690 + (int)local_1690_d;
}

typedef struct {
    int field_1691;
    long field_1691_b;
    double field_1691_c;
    char name_1691[64];
} StructType1691;

int function_1691(StructType1691 *s, int param_a, double param_b, const char *param_c) {
    int local_1691 = param_a * 1691;
    double local_1691_d = param_b * 1691;
    char buf_1691[128];
    snprintf(buf_1691, sizeof(buf_1691), "function_%d: %d, %f, %s", 1691, local_1691, local_1691_d, param_c ? param_c : "null");
    return local_1691 + (int)local_1691_d;
}

typedef struct {
    int field_1692;
    long field_1692_b;
    double field_1692_c;
    char name_1692[64];
} StructType1692;

int function_1692(StructType1692 *s, int param_a, double param_b, const char *param_c) {
    int local_1692 = param_a * 1692;
    double local_1692_d = param_b * 1692;
    char buf_1692[128];
    snprintf(buf_1692, sizeof(buf_1692), "function_%d: %d, %f, %s", 1692, local_1692, local_1692_d, param_c ? param_c : "null");
    return local_1692 + (int)local_1692_d;
}

typedef struct {
    int field_1693;
    long field_1693_b;
    double field_1693_c;
    char name_1693[64];
} StructType1693;

int function_1693(StructType1693 *s, int param_a, double param_b, const char *param_c) {
    int local_1693 = param_a * 1693;
    double local_1693_d = param_b * 1693;
    char buf_1693[128];
    snprintf(buf_1693, sizeof(buf_1693), "function_%d: %d, %f, %s", 1693, local_1693, local_1693_d, param_c ? param_c : "null");
    return local_1693 + (int)local_1693_d;
}

typedef struct {
    int field_1694;
    long field_1694_b;
    double field_1694_c;
    char name_1694[64];
} StructType1694;

int function_1694(StructType1694 *s, int param_a, double param_b, const char *param_c) {
    int local_1694 = param_a * 1694;
    double local_1694_d = param_b * 1694;
    char buf_1694[128];
    snprintf(buf_1694, sizeof(buf_1694), "function_%d: %d, %f, %s", 1694, local_1694, local_1694_d, param_c ? param_c : "null");
    return local_1694 + (int)local_1694_d;
}

typedef struct {
    int field_1695;
    long field_1695_b;
    double field_1695_c;
    char name_1695[64];
} StructType1695;

int function_1695(StructType1695 *s, int param_a, double param_b, const char *param_c) {
    int local_1695 = param_a * 1695;
    double local_1695_d = param_b * 1695;
    char buf_1695[128];
    snprintf(buf_1695, sizeof(buf_1695), "function_%d: %d, %f, %s", 1695, local_1695, local_1695_d, param_c ? param_c : "null");
    return local_1695 + (int)local_1695_d;
}

typedef struct {
    int field_1696;
    long field_1696_b;
    double field_1696_c;
    char name_1696[64];
} StructType1696;

int function_1696(StructType1696 *s, int param_a, double param_b, const char *param_c) {
    int local_1696 = param_a * 1696;
    double local_1696_d = param_b * 1696;
    char buf_1696[128];
    snprintf(buf_1696, sizeof(buf_1696), "function_%d: %d, %f, %s", 1696, local_1696, local_1696_d, param_c ? param_c : "null");
    return local_1696 + (int)local_1696_d;
}

typedef struct {
    int field_1697;
    long field_1697_b;
    double field_1697_c;
    char name_1697[64];
} StructType1697;

int function_1697(StructType1697 *s, int param_a, double param_b, const char *param_c) {
    int local_1697 = param_a * 1697;
    double local_1697_d = param_b * 1697;
    char buf_1697[128];
    snprintf(buf_1697, sizeof(buf_1697), "function_%d: %d, %f, %s", 1697, local_1697, local_1697_d, param_c ? param_c : "null");
    return local_1697 + (int)local_1697_d;
}

typedef struct {
    int field_1698;
    long field_1698_b;
    double field_1698_c;
    char name_1698[64];
} StructType1698;

int function_1698(StructType1698 *s, int param_a, double param_b, const char *param_c) {
    int local_1698 = param_a * 1698;
    double local_1698_d = param_b * 1698;
    char buf_1698[128];
    snprintf(buf_1698, sizeof(buf_1698), "function_%d: %d, %f, %s", 1698, local_1698, local_1698_d, param_c ? param_c : "null");
    return local_1698 + (int)local_1698_d;
}

typedef struct {
    int field_1699;
    long field_1699_b;
    double field_1699_c;
    char name_1699[64];
} StructType1699;

int function_1699(StructType1699 *s, int param_a, double param_b, const char *param_c) {
    int local_1699 = param_a * 1699;
    double local_1699_d = param_b * 1699;
    char buf_1699[128];
    snprintf(buf_1699, sizeof(buf_1699), "function_%d: %d, %f, %s", 1699, local_1699, local_1699_d, param_c ? param_c : "null");
    return local_1699 + (int)local_1699_d;
}

typedef struct {
    int field_1700;
    long field_1700_b;
    double field_1700_c;
    char name_1700[64];
} StructType1700;

int function_1700(StructType1700 *s, int param_a, double param_b, const char *param_c) {
    int local_1700 = param_a * 1700;
    double local_1700_d = param_b * 1700;
    char buf_1700[128];
    snprintf(buf_1700, sizeof(buf_1700), "function_%d: %d, %f, %s", 1700, local_1700, local_1700_d, param_c ? param_c : "null");
    return local_1700 + (int)local_1700_d;
}

typedef struct {
    int field_1701;
    long field_1701_b;
    double field_1701_c;
    char name_1701[64];
} StructType1701;

int function_1701(StructType1701 *s, int param_a, double param_b, const char *param_c) {
    int local_1701 = param_a * 1701;
    double local_1701_d = param_b * 1701;
    char buf_1701[128];
    snprintf(buf_1701, sizeof(buf_1701), "function_%d: %d, %f, %s", 1701, local_1701, local_1701_d, param_c ? param_c : "null");
    return local_1701 + (int)local_1701_d;
}

typedef struct {
    int field_1702;
    long field_1702_b;
    double field_1702_c;
    char name_1702[64];
} StructType1702;

int function_1702(StructType1702 *s, int param_a, double param_b, const char *param_c) {
    int local_1702 = param_a * 1702;
    double local_1702_d = param_b * 1702;
    char buf_1702[128];
    snprintf(buf_1702, sizeof(buf_1702), "function_%d: %d, %f, %s", 1702, local_1702, local_1702_d, param_c ? param_c : "null");
    return local_1702 + (int)local_1702_d;
}

typedef struct {
    int field_1703;
    long field_1703_b;
    double field_1703_c;
    char name_1703[64];
} StructType1703;

int function_1703(StructType1703 *s, int param_a, double param_b, const char *param_c) {
    int local_1703 = param_a * 1703;
    double local_1703_d = param_b * 1703;
    char buf_1703[128];
    snprintf(buf_1703, sizeof(buf_1703), "function_%d: %d, %f, %s", 1703, local_1703, local_1703_d, param_c ? param_c : "null");
    return local_1703 + (int)local_1703_d;
}

typedef struct {
    int field_1704;
    long field_1704_b;
    double field_1704_c;
    char name_1704[64];
} StructType1704;

int function_1704(StructType1704 *s, int param_a, double param_b, const char *param_c) {
    int local_1704 = param_a * 1704;
    double local_1704_d = param_b * 1704;
    char buf_1704[128];
    snprintf(buf_1704, sizeof(buf_1704), "function_%d: %d, %f, %s", 1704, local_1704, local_1704_d, param_c ? param_c : "null");
    return local_1704 + (int)local_1704_d;
}

typedef struct {
    int field_1705;
    long field_1705_b;
    double field_1705_c;
    char name_1705[64];
} StructType1705;

int function_1705(StructType1705 *s, int param_a, double param_b, const char *param_c) {
    int local_1705 = param_a * 1705;
    double local_1705_d = param_b * 1705;
    char buf_1705[128];
    snprintf(buf_1705, sizeof(buf_1705), "function_%d: %d, %f, %s", 1705, local_1705, local_1705_d, param_c ? param_c : "null");
    return local_1705 + (int)local_1705_d;
}

typedef struct {
    int field_1706;
    long field_1706_b;
    double field_1706_c;
    char name_1706[64];
} StructType1706;

int function_1706(StructType1706 *s, int param_a, double param_b, const char *param_c) {
    int local_1706 = param_a * 1706;
    double local_1706_d = param_b * 1706;
    char buf_1706[128];
    snprintf(buf_1706, sizeof(buf_1706), "function_%d: %d, %f, %s", 1706, local_1706, local_1706_d, param_c ? param_c : "null");
    return local_1706 + (int)local_1706_d;
}

typedef struct {
    int field_1707;
    long field_1707_b;
    double field_1707_c;
    char name_1707[64];
} StructType1707;

int function_1707(StructType1707 *s, int param_a, double param_b, const char *param_c) {
    int local_1707 = param_a * 1707;
    double local_1707_d = param_b * 1707;
    char buf_1707[128];
    snprintf(buf_1707, sizeof(buf_1707), "function_%d: %d, %f, %s", 1707, local_1707, local_1707_d, param_c ? param_c : "null");
    return local_1707 + (int)local_1707_d;
}

typedef struct {
    int field_1708;
    long field_1708_b;
    double field_1708_c;
    char name_1708[64];
} StructType1708;

int function_1708(StructType1708 *s, int param_a, double param_b, const char *param_c) {
    int local_1708 = param_a * 1708;
    double local_1708_d = param_b * 1708;
    char buf_1708[128];
    snprintf(buf_1708, sizeof(buf_1708), "function_%d: %d, %f, %s", 1708, local_1708, local_1708_d, param_c ? param_c : "null");
    return local_1708 + (int)local_1708_d;
}

typedef struct {
    int field_1709;
    long field_1709_b;
    double field_1709_c;
    char name_1709[64];
} StructType1709;

int function_1709(StructType1709 *s, int param_a, double param_b, const char *param_c) {
    int local_1709 = param_a * 1709;
    double local_1709_d = param_b * 1709;
    char buf_1709[128];
    snprintf(buf_1709, sizeof(buf_1709), "function_%d: %d, %f, %s", 1709, local_1709, local_1709_d, param_c ? param_c : "null");
    return local_1709 + (int)local_1709_d;
}

typedef struct {
    int field_1710;
    long field_1710_b;
    double field_1710_c;
    char name_1710[64];
} StructType1710;

int function_1710(StructType1710 *s, int param_a, double param_b, const char *param_c) {
    int local_1710 = param_a * 1710;
    double local_1710_d = param_b * 1710;
    char buf_1710[128];
    snprintf(buf_1710, sizeof(buf_1710), "function_%d: %d, %f, %s", 1710, local_1710, local_1710_d, param_c ? param_c : "null");
    return local_1710 + (int)local_1710_d;
}

typedef struct {
    int field_1711;
    long field_1711_b;
    double field_1711_c;
    char name_1711[64];
} StructType1711;

int function_1711(StructType1711 *s, int param_a, double param_b, const char *param_c) {
    int local_1711 = param_a * 1711;
    double local_1711_d = param_b * 1711;
    char buf_1711[128];
    snprintf(buf_1711, sizeof(buf_1711), "function_%d: %d, %f, %s", 1711, local_1711, local_1711_d, param_c ? param_c : "null");
    return local_1711 + (int)local_1711_d;
}

typedef struct {
    int field_1712;
    long field_1712_b;
    double field_1712_c;
    char name_1712[64];
} StructType1712;

int function_1712(StructType1712 *s, int param_a, double param_b, const char *param_c) {
    int local_1712 = param_a * 1712;
    double local_1712_d = param_b * 1712;
    char buf_1712[128];
    snprintf(buf_1712, sizeof(buf_1712), "function_%d: %d, %f, %s", 1712, local_1712, local_1712_d, param_c ? param_c : "null");
    return local_1712 + (int)local_1712_d;
}

typedef struct {
    int field_1713;
    long field_1713_b;
    double field_1713_c;
    char name_1713[64];
} StructType1713;

int function_1713(StructType1713 *s, int param_a, double param_b, const char *param_c) {
    int local_1713 = param_a * 1713;
    double local_1713_d = param_b * 1713;
    char buf_1713[128];
    snprintf(buf_1713, sizeof(buf_1713), "function_%d: %d, %f, %s", 1713, local_1713, local_1713_d, param_c ? param_c : "null");
    return local_1713 + (int)local_1713_d;
}

typedef struct {
    int field_1714;
    long field_1714_b;
    double field_1714_c;
    char name_1714[64];
} StructType1714;

int function_1714(StructType1714 *s, int param_a, double param_b, const char *param_c) {
    int local_1714 = param_a * 1714;
    double local_1714_d = param_b * 1714;
    char buf_1714[128];
    snprintf(buf_1714, sizeof(buf_1714), "function_%d: %d, %f, %s", 1714, local_1714, local_1714_d, param_c ? param_c : "null");
    return local_1714 + (int)local_1714_d;
}

typedef struct {
    int field_1715;
    long field_1715_b;
    double field_1715_c;
    char name_1715[64];
} StructType1715;

int function_1715(StructType1715 *s, int param_a, double param_b, const char *param_c) {
    int local_1715 = param_a * 1715;
    double local_1715_d = param_b * 1715;
    char buf_1715[128];
    snprintf(buf_1715, sizeof(buf_1715), "function_%d: %d, %f, %s", 1715, local_1715, local_1715_d, param_c ? param_c : "null");
    return local_1715 + (int)local_1715_d;
}

typedef struct {
    int field_1716;
    long field_1716_b;
    double field_1716_c;
    char name_1716[64];
} StructType1716;

int function_1716(StructType1716 *s, int param_a, double param_b, const char *param_c) {
    int local_1716 = param_a * 1716;
    double local_1716_d = param_b * 1716;
    char buf_1716[128];
    snprintf(buf_1716, sizeof(buf_1716), "function_%d: %d, %f, %s", 1716, local_1716, local_1716_d, param_c ? param_c : "null");
    return local_1716 + (int)local_1716_d;
}

typedef struct {
    int field_1717;
    long field_1717_b;
    double field_1717_c;
    char name_1717[64];
} StructType1717;

int function_1717(StructType1717 *s, int param_a, double param_b, const char *param_c) {
    int local_1717 = param_a * 1717;
    double local_1717_d = param_b * 1717;
    char buf_1717[128];
    snprintf(buf_1717, sizeof(buf_1717), "function_%d: %d, %f, %s", 1717, local_1717, local_1717_d, param_c ? param_c : "null");
    return local_1717 + (int)local_1717_d;
}

typedef struct {
    int field_1718;
    long field_1718_b;
    double field_1718_c;
    char name_1718[64];
} StructType1718;

int function_1718(StructType1718 *s, int param_a, double param_b, const char *param_c) {
    int local_1718 = param_a * 1718;
    double local_1718_d = param_b * 1718;
    char buf_1718[128];
    snprintf(buf_1718, sizeof(buf_1718), "function_%d: %d, %f, %s", 1718, local_1718, local_1718_d, param_c ? param_c : "null");
    return local_1718 + (int)local_1718_d;
}

typedef struct {
    int field_1719;
    long field_1719_b;
    double field_1719_c;
    char name_1719[64];
} StructType1719;

int function_1719(StructType1719 *s, int param_a, double param_b, const char *param_c) {
    int local_1719 = param_a * 1719;
    double local_1719_d = param_b * 1719;
    char buf_1719[128];
    snprintf(buf_1719, sizeof(buf_1719), "function_%d: %d, %f, %s", 1719, local_1719, local_1719_d, param_c ? param_c : "null");
    return local_1719 + (int)local_1719_d;
}

typedef struct {
    int field_1720;
    long field_1720_b;
    double field_1720_c;
    char name_1720[64];
} StructType1720;

int function_1720(StructType1720 *s, int param_a, double param_b, const char *param_c) {
    int local_1720 = param_a * 1720;
    double local_1720_d = param_b * 1720;
    char buf_1720[128];
    snprintf(buf_1720, sizeof(buf_1720), "function_%d: %d, %f, %s", 1720, local_1720, local_1720_d, param_c ? param_c : "null");
    return local_1720 + (int)local_1720_d;
}

typedef struct {
    int field_1721;
    long field_1721_b;
    double field_1721_c;
    char name_1721[64];
} StructType1721;

int function_1721(StructType1721 *s, int param_a, double param_b, const char *param_c) {
    int local_1721 = param_a * 1721;
    double local_1721_d = param_b * 1721;
    char buf_1721[128];
    snprintf(buf_1721, sizeof(buf_1721), "function_%d: %d, %f, %s", 1721, local_1721, local_1721_d, param_c ? param_c : "null");
    return local_1721 + (int)local_1721_d;
}

typedef struct {
    int field_1722;
    long field_1722_b;
    double field_1722_c;
    char name_1722[64];
} StructType1722;

int function_1722(StructType1722 *s, int param_a, double param_b, const char *param_c) {
    int local_1722 = param_a * 1722;
    double local_1722_d = param_b * 1722;
    char buf_1722[128];
    snprintf(buf_1722, sizeof(buf_1722), "function_%d: %d, %f, %s", 1722, local_1722, local_1722_d, param_c ? param_c : "null");
    return local_1722 + (int)local_1722_d;
}

typedef struct {
    int field_1723;
    long field_1723_b;
    double field_1723_c;
    char name_1723[64];
} StructType1723;

int function_1723(StructType1723 *s, int param_a, double param_b, const char *param_c) {
    int local_1723 = param_a * 1723;
    double local_1723_d = param_b * 1723;
    char buf_1723[128];
    snprintf(buf_1723, sizeof(buf_1723), "function_%d: %d, %f, %s", 1723, local_1723, local_1723_d, param_c ? param_c : "null");
    return local_1723 + (int)local_1723_d;
}

typedef struct {
    int field_1724;
    long field_1724_b;
    double field_1724_c;
    char name_1724[64];
} StructType1724;

int function_1724(StructType1724 *s, int param_a, double param_b, const char *param_c) {
    int local_1724 = param_a * 1724;
    double local_1724_d = param_b * 1724;
    char buf_1724[128];
    snprintf(buf_1724, sizeof(buf_1724), "function_%d: %d, %f, %s", 1724, local_1724, local_1724_d, param_c ? param_c : "null");
    return local_1724 + (int)local_1724_d;
}

typedef struct {
    int field_1725;
    long field_1725_b;
    double field_1725_c;
    char name_1725[64];
} StructType1725;

int function_1725(StructType1725 *s, int param_a, double param_b, const char *param_c) {
    int local_1725 = param_a * 1725;
    double local_1725_d = param_b * 1725;
    char buf_1725[128];
    snprintf(buf_1725, sizeof(buf_1725), "function_%d: %d, %f, %s", 1725, local_1725, local_1725_d, param_c ? param_c : "null");
    return local_1725 + (int)local_1725_d;
}

typedef struct {
    int field_1726;
    long field_1726_b;
    double field_1726_c;
    char name_1726[64];
} StructType1726;

int function_1726(StructType1726 *s, int param_a, double param_b, const char *param_c) {
    int local_1726 = param_a * 1726;
    double local_1726_d = param_b * 1726;
    char buf_1726[128];
    snprintf(buf_1726, sizeof(buf_1726), "function_%d: %d, %f, %s", 1726, local_1726, local_1726_d, param_c ? param_c : "null");
    return local_1726 + (int)local_1726_d;
}

typedef struct {
    int field_1727;
    long field_1727_b;
    double field_1727_c;
    char name_1727[64];
} StructType1727;

int function_1727(StructType1727 *s, int param_a, double param_b, const char *param_c) {
    int local_1727 = param_a * 1727;
    double local_1727_d = param_b * 1727;
    char buf_1727[128];
    snprintf(buf_1727, sizeof(buf_1727), "function_%d: %d, %f, %s", 1727, local_1727, local_1727_d, param_c ? param_c : "null");
    return local_1727 + (int)local_1727_d;
}

typedef struct {
    int field_1728;
    long field_1728_b;
    double field_1728_c;
    char name_1728[64];
} StructType1728;

int function_1728(StructType1728 *s, int param_a, double param_b, const char *param_c) {
    int local_1728 = param_a * 1728;
    double local_1728_d = param_b * 1728;
    char buf_1728[128];
    snprintf(buf_1728, sizeof(buf_1728), "function_%d: %d, %f, %s", 1728, local_1728, local_1728_d, param_c ? param_c : "null");
    return local_1728 + (int)local_1728_d;
}

typedef struct {
    int field_1729;
    long field_1729_b;
    double field_1729_c;
    char name_1729[64];
} StructType1729;

int function_1729(StructType1729 *s, int param_a, double param_b, const char *param_c) {
    int local_1729 = param_a * 1729;
    double local_1729_d = param_b * 1729;
    char buf_1729[128];
    snprintf(buf_1729, sizeof(buf_1729), "function_%d: %d, %f, %s", 1729, local_1729, local_1729_d, param_c ? param_c : "null");
    return local_1729 + (int)local_1729_d;
}

typedef struct {
    int field_1730;
    long field_1730_b;
    double field_1730_c;
    char name_1730[64];
} StructType1730;

int function_1730(StructType1730 *s, int param_a, double param_b, const char *param_c) {
    int local_1730 = param_a * 1730;
    double local_1730_d = param_b * 1730;
    char buf_1730[128];
    snprintf(buf_1730, sizeof(buf_1730), "function_%d: %d, %f, %s", 1730, local_1730, local_1730_d, param_c ? param_c : "null");
    return local_1730 + (int)local_1730_d;
}

typedef struct {
    int field_1731;
    long field_1731_b;
    double field_1731_c;
    char name_1731[64];
} StructType1731;

int function_1731(StructType1731 *s, int param_a, double param_b, const char *param_c) {
    int local_1731 = param_a * 1731;
    double local_1731_d = param_b * 1731;
    char buf_1731[128];
    snprintf(buf_1731, sizeof(buf_1731), "function_%d: %d, %f, %s", 1731, local_1731, local_1731_d, param_c ? param_c : "null");
    return local_1731 + (int)local_1731_d;
}

typedef struct {
    int field_1732;
    long field_1732_b;
    double field_1732_c;
    char name_1732[64];
} StructType1732;

int function_1732(StructType1732 *s, int param_a, double param_b, const char *param_c) {
    int local_1732 = param_a * 1732;
    double local_1732_d = param_b * 1732;
    char buf_1732[128];
    snprintf(buf_1732, sizeof(buf_1732), "function_%d: %d, %f, %s", 1732, local_1732, local_1732_d, param_c ? param_c : "null");
    return local_1732 + (int)local_1732_d;
}

typedef struct {
    int field_1733;
    long field_1733_b;
    double field_1733_c;
    char name_1733[64];
} StructType1733;

int function_1733(StructType1733 *s, int param_a, double param_b, const char *param_c) {
    int local_1733 = param_a * 1733;
    double local_1733_d = param_b * 1733;
    char buf_1733[128];
    snprintf(buf_1733, sizeof(buf_1733), "function_%d: %d, %f, %s", 1733, local_1733, local_1733_d, param_c ? param_c : "null");
    return local_1733 + (int)local_1733_d;
}

typedef struct {
    int field_1734;
    long field_1734_b;
    double field_1734_c;
    char name_1734[64];
} StructType1734;

int function_1734(StructType1734 *s, int param_a, double param_b, const char *param_c) {
    int local_1734 = param_a * 1734;
    double local_1734_d = param_b * 1734;
    char buf_1734[128];
    snprintf(buf_1734, sizeof(buf_1734), "function_%d: %d, %f, %s", 1734, local_1734, local_1734_d, param_c ? param_c : "null");
    return local_1734 + (int)local_1734_d;
}

typedef struct {
    int field_1735;
    long field_1735_b;
    double field_1735_c;
    char name_1735[64];
} StructType1735;

int function_1735(StructType1735 *s, int param_a, double param_b, const char *param_c) {
    int local_1735 = param_a * 1735;
    double local_1735_d = param_b * 1735;
    char buf_1735[128];
    snprintf(buf_1735, sizeof(buf_1735), "function_%d: %d, %f, %s", 1735, local_1735, local_1735_d, param_c ? param_c : "null");
    return local_1735 + (int)local_1735_d;
}

typedef struct {
    int field_1736;
    long field_1736_b;
    double field_1736_c;
    char name_1736[64];
} StructType1736;

int function_1736(StructType1736 *s, int param_a, double param_b, const char *param_c) {
    int local_1736 = param_a * 1736;
    double local_1736_d = param_b * 1736;
    char buf_1736[128];
    snprintf(buf_1736, sizeof(buf_1736), "function_%d: %d, %f, %s", 1736, local_1736, local_1736_d, param_c ? param_c : "null");
    return local_1736 + (int)local_1736_d;
}

typedef struct {
    int field_1737;
    long field_1737_b;
    double field_1737_c;
    char name_1737[64];
} StructType1737;

int function_1737(StructType1737 *s, int param_a, double param_b, const char *param_c) {
    int local_1737 = param_a * 1737;
    double local_1737_d = param_b * 1737;
    char buf_1737[128];
    snprintf(buf_1737, sizeof(buf_1737), "function_%d: %d, %f, %s", 1737, local_1737, local_1737_d, param_c ? param_c : "null");
    return local_1737 + (int)local_1737_d;
}

typedef struct {
    int field_1738;
    long field_1738_b;
    double field_1738_c;
    char name_1738[64];
} StructType1738;

int function_1738(StructType1738 *s, int param_a, double param_b, const char *param_c) {
    int local_1738 = param_a * 1738;
    double local_1738_d = param_b * 1738;
    char buf_1738[128];
    snprintf(buf_1738, sizeof(buf_1738), "function_%d: %d, %f, %s", 1738, local_1738, local_1738_d, param_c ? param_c : "null");
    return local_1738 + (int)local_1738_d;
}

typedef struct {
    int field_1739;
    long field_1739_b;
    double field_1739_c;
    char name_1739[64];
} StructType1739;

int function_1739(StructType1739 *s, int param_a, double param_b, const char *param_c) {
    int local_1739 = param_a * 1739;
    double local_1739_d = param_b * 1739;
    char buf_1739[128];
    snprintf(buf_1739, sizeof(buf_1739), "function_%d: %d, %f, %s", 1739, local_1739, local_1739_d, param_c ? param_c : "null");
    return local_1739 + (int)local_1739_d;
}

typedef struct {
    int field_1740;
    long field_1740_b;
    double field_1740_c;
    char name_1740[64];
} StructType1740;

int function_1740(StructType1740 *s, int param_a, double param_b, const char *param_c) {
    int local_1740 = param_a * 1740;
    double local_1740_d = param_b * 1740;
    char buf_1740[128];
    snprintf(buf_1740, sizeof(buf_1740), "function_%d: %d, %f, %s", 1740, local_1740, local_1740_d, param_c ? param_c : "null");
    return local_1740 + (int)local_1740_d;
}

typedef struct {
    int field_1741;
    long field_1741_b;
    double field_1741_c;
    char name_1741[64];
} StructType1741;

int function_1741(StructType1741 *s, int param_a, double param_b, const char *param_c) {
    int local_1741 = param_a * 1741;
    double local_1741_d = param_b * 1741;
    char buf_1741[128];
    snprintf(buf_1741, sizeof(buf_1741), "function_%d: %d, %f, %s", 1741, local_1741, local_1741_d, param_c ? param_c : "null");
    return local_1741 + (int)local_1741_d;
}

typedef struct {
    int field_1742;
    long field_1742_b;
    double field_1742_c;
    char name_1742[64];
} StructType1742;

int function_1742(StructType1742 *s, int param_a, double param_b, const char *param_c) {
    int local_1742 = param_a * 1742;
    double local_1742_d = param_b * 1742;
    char buf_1742[128];
    snprintf(buf_1742, sizeof(buf_1742), "function_%d: %d, %f, %s", 1742, local_1742, local_1742_d, param_c ? param_c : "null");
    return local_1742 + (int)local_1742_d;
}

typedef struct {
    int field_1743;
    long field_1743_b;
    double field_1743_c;
    char name_1743[64];
} StructType1743;

int function_1743(StructType1743 *s, int param_a, double param_b, const char *param_c) {
    int local_1743 = param_a * 1743;
    double local_1743_d = param_b * 1743;
    char buf_1743[128];
    snprintf(buf_1743, sizeof(buf_1743), "function_%d: %d, %f, %s", 1743, local_1743, local_1743_d, param_c ? param_c : "null");
    return local_1743 + (int)local_1743_d;
}

typedef struct {
    int field_1744;
    long field_1744_b;
    double field_1744_c;
    char name_1744[64];
} StructType1744;

int function_1744(StructType1744 *s, int param_a, double param_b, const char *param_c) {
    int local_1744 = param_a * 1744;
    double local_1744_d = param_b * 1744;
    char buf_1744[128];
    snprintf(buf_1744, sizeof(buf_1744), "function_%d: %d, %f, %s", 1744, local_1744, local_1744_d, param_c ? param_c : "null");
    return local_1744 + (int)local_1744_d;
}

typedef struct {
    int field_1745;
    long field_1745_b;
    double field_1745_c;
    char name_1745[64];
} StructType1745;

int function_1745(StructType1745 *s, int param_a, double param_b, const char *param_c) {
    int local_1745 = param_a * 1745;
    double local_1745_d = param_b * 1745;
    char buf_1745[128];
    snprintf(buf_1745, sizeof(buf_1745), "function_%d: %d, %f, %s", 1745, local_1745, local_1745_d, param_c ? param_c : "null");
    return local_1745 + (int)local_1745_d;
}

typedef struct {
    int field_1746;
    long field_1746_b;
    double field_1746_c;
    char name_1746[64];
} StructType1746;

int function_1746(StructType1746 *s, int param_a, double param_b, const char *param_c) {
    int local_1746 = param_a * 1746;
    double local_1746_d = param_b * 1746;
    char buf_1746[128];
    snprintf(buf_1746, sizeof(buf_1746), "function_%d: %d, %f, %s", 1746, local_1746, local_1746_d, param_c ? param_c : "null");
    return local_1746 + (int)local_1746_d;
}

typedef struct {
    int field_1747;
    long field_1747_b;
    double field_1747_c;
    char name_1747[64];
} StructType1747;

int function_1747(StructType1747 *s, int param_a, double param_b, const char *param_c) {
    int local_1747 = param_a * 1747;
    double local_1747_d = param_b * 1747;
    char buf_1747[128];
    snprintf(buf_1747, sizeof(buf_1747), "function_%d: %d, %f, %s", 1747, local_1747, local_1747_d, param_c ? param_c : "null");
    return local_1747 + (int)local_1747_d;
}

typedef struct {
    int field_1748;
    long field_1748_b;
    double field_1748_c;
    char name_1748[64];
} StructType1748;

int function_1748(StructType1748 *s, int param_a, double param_b, const char *param_c) {
    int local_1748 = param_a * 1748;
    double local_1748_d = param_b * 1748;
    char buf_1748[128];
    snprintf(buf_1748, sizeof(buf_1748), "function_%d: %d, %f, %s", 1748, local_1748, local_1748_d, param_c ? param_c : "null");
    return local_1748 + (int)local_1748_d;
}

typedef struct {
    int field_1749;
    long field_1749_b;
    double field_1749_c;
    char name_1749[64];
} StructType1749;

int function_1749(StructType1749 *s, int param_a, double param_b, const char *param_c) {
    int local_1749 = param_a * 1749;
    double local_1749_d = param_b * 1749;
    char buf_1749[128];
    snprintf(buf_1749, sizeof(buf_1749), "function_%d: %d, %f, %s", 1749, local_1749, local_1749_d, param_c ? param_c : "null");
    return local_1749 + (int)local_1749_d;
}

typedef struct {
    int field_1750;
    long field_1750_b;
    double field_1750_c;
    char name_1750[64];
} StructType1750;

int function_1750(StructType1750 *s, int param_a, double param_b, const char *param_c) {
    int local_1750 = param_a * 1750;
    double local_1750_d = param_b * 1750;
    char buf_1750[128];
    snprintf(buf_1750, sizeof(buf_1750), "function_%d: %d, %f, %s", 1750, local_1750, local_1750_d, param_c ? param_c : "null");
    return local_1750 + (int)local_1750_d;
}

typedef struct {
    int field_1751;
    long field_1751_b;
    double field_1751_c;
    char name_1751[64];
} StructType1751;

int function_1751(StructType1751 *s, int param_a, double param_b, const char *param_c) {
    int local_1751 = param_a * 1751;
    double local_1751_d = param_b * 1751;
    char buf_1751[128];
    snprintf(buf_1751, sizeof(buf_1751), "function_%d: %d, %f, %s", 1751, local_1751, local_1751_d, param_c ? param_c : "null");
    return local_1751 + (int)local_1751_d;
}

typedef struct {
    int field_1752;
    long field_1752_b;
    double field_1752_c;
    char name_1752[64];
} StructType1752;

int function_1752(StructType1752 *s, int param_a, double param_b, const char *param_c) {
    int local_1752 = param_a * 1752;
    double local_1752_d = param_b * 1752;
    char buf_1752[128];
    snprintf(buf_1752, sizeof(buf_1752), "function_%d: %d, %f, %s", 1752, local_1752, local_1752_d, param_c ? param_c : "null");
    return local_1752 + (int)local_1752_d;
}

typedef struct {
    int field_1753;
    long field_1753_b;
    double field_1753_c;
    char name_1753[64];
} StructType1753;

int function_1753(StructType1753 *s, int param_a, double param_b, const char *param_c) {
    int local_1753 = param_a * 1753;
    double local_1753_d = param_b * 1753;
    char buf_1753[128];
    snprintf(buf_1753, sizeof(buf_1753), "function_%d: %d, %f, %s", 1753, local_1753, local_1753_d, param_c ? param_c : "null");
    return local_1753 + (int)local_1753_d;
}

typedef struct {
    int field_1754;
    long field_1754_b;
    double field_1754_c;
    char name_1754[64];
} StructType1754;

int function_1754(StructType1754 *s, int param_a, double param_b, const char *param_c) {
    int local_1754 = param_a * 1754;
    double local_1754_d = param_b * 1754;
    char buf_1754[128];
    snprintf(buf_1754, sizeof(buf_1754), "function_%d: %d, %f, %s", 1754, local_1754, local_1754_d, param_c ? param_c : "null");
    return local_1754 + (int)local_1754_d;
}

typedef struct {
    int field_1755;
    long field_1755_b;
    double field_1755_c;
    char name_1755[64];
} StructType1755;

int function_1755(StructType1755 *s, int param_a, double param_b, const char *param_c) {
    int local_1755 = param_a * 1755;
    double local_1755_d = param_b * 1755;
    char buf_1755[128];
    snprintf(buf_1755, sizeof(buf_1755), "function_%d: %d, %f, %s", 1755, local_1755, local_1755_d, param_c ? param_c : "null");
    return local_1755 + (int)local_1755_d;
}

typedef struct {
    int field_1756;
    long field_1756_b;
    double field_1756_c;
    char name_1756[64];
} StructType1756;

int function_1756(StructType1756 *s, int param_a, double param_b, const char *param_c) {
    int local_1756 = param_a * 1756;
    double local_1756_d = param_b * 1756;
    char buf_1756[128];
    snprintf(buf_1756, sizeof(buf_1756), "function_%d: %d, %f, %s", 1756, local_1756, local_1756_d, param_c ? param_c : "null");
    return local_1756 + (int)local_1756_d;
}

typedef struct {
    int field_1757;
    long field_1757_b;
    double field_1757_c;
    char name_1757[64];
} StructType1757;

int function_1757(StructType1757 *s, int param_a, double param_b, const char *param_c) {
    int local_1757 = param_a * 1757;
    double local_1757_d = param_b * 1757;
    char buf_1757[128];
    snprintf(buf_1757, sizeof(buf_1757), "function_%d: %d, %f, %s", 1757, local_1757, local_1757_d, param_c ? param_c : "null");
    return local_1757 + (int)local_1757_d;
}

typedef struct {
    int field_1758;
    long field_1758_b;
    double field_1758_c;
    char name_1758[64];
} StructType1758;

int function_1758(StructType1758 *s, int param_a, double param_b, const char *param_c) {
    int local_1758 = param_a * 1758;
    double local_1758_d = param_b * 1758;
    char buf_1758[128];
    snprintf(buf_1758, sizeof(buf_1758), "function_%d: %d, %f, %s", 1758, local_1758, local_1758_d, param_c ? param_c : "null");
    return local_1758 + (int)local_1758_d;
}

typedef struct {
    int field_1759;
    long field_1759_b;
    double field_1759_c;
    char name_1759[64];
} StructType1759;

int function_1759(StructType1759 *s, int param_a, double param_b, const char *param_c) {
    int local_1759 = param_a * 1759;
    double local_1759_d = param_b * 1759;
    char buf_1759[128];
    snprintf(buf_1759, sizeof(buf_1759), "function_%d: %d, %f, %s", 1759, local_1759, local_1759_d, param_c ? param_c : "null");
    return local_1759 + (int)local_1759_d;
}

typedef struct {
    int field_1760;
    long field_1760_b;
    double field_1760_c;
    char name_1760[64];
} StructType1760;

int function_1760(StructType1760 *s, int param_a, double param_b, const char *param_c) {
    int local_1760 = param_a * 1760;
    double local_1760_d = param_b * 1760;
    char buf_1760[128];
    snprintf(buf_1760, sizeof(buf_1760), "function_%d: %d, %f, %s", 1760, local_1760, local_1760_d, param_c ? param_c : "null");
    return local_1760 + (int)local_1760_d;
}

typedef struct {
    int field_1761;
    long field_1761_b;
    double field_1761_c;
    char name_1761[64];
} StructType1761;

int function_1761(StructType1761 *s, int param_a, double param_b, const char *param_c) {
    int local_1761 = param_a * 1761;
    double local_1761_d = param_b * 1761;
    char buf_1761[128];
    snprintf(buf_1761, sizeof(buf_1761), "function_%d: %d, %f, %s", 1761, local_1761, local_1761_d, param_c ? param_c : "null");
    return local_1761 + (int)local_1761_d;
}

typedef struct {
    int field_1762;
    long field_1762_b;
    double field_1762_c;
    char name_1762[64];
} StructType1762;

int function_1762(StructType1762 *s, int param_a, double param_b, const char *param_c) {
    int local_1762 = param_a * 1762;
    double local_1762_d = param_b * 1762;
    char buf_1762[128];
    snprintf(buf_1762, sizeof(buf_1762), "function_%d: %d, %f, %s", 1762, local_1762, local_1762_d, param_c ? param_c : "null");
    return local_1762 + (int)local_1762_d;
}

typedef struct {
    int field_1763;
    long field_1763_b;
    double field_1763_c;
    char name_1763[64];
} StructType1763;

int function_1763(StructType1763 *s, int param_a, double param_b, const char *param_c) {
    int local_1763 = param_a * 1763;
    double local_1763_d = param_b * 1763;
    char buf_1763[128];
    snprintf(buf_1763, sizeof(buf_1763), "function_%d: %d, %f, %s", 1763, local_1763, local_1763_d, param_c ? param_c : "null");
    return local_1763 + (int)local_1763_d;
}

typedef struct {
    int field_1764;
    long field_1764_b;
    double field_1764_c;
    char name_1764[64];
} StructType1764;

int function_1764(StructType1764 *s, int param_a, double param_b, const char *param_c) {
    int local_1764 = param_a * 1764;
    double local_1764_d = param_b * 1764;
    char buf_1764[128];
    snprintf(buf_1764, sizeof(buf_1764), "function_%d: %d, %f, %s", 1764, local_1764, local_1764_d, param_c ? param_c : "null");
    return local_1764 + (int)local_1764_d;
}

typedef struct {
    int field_1765;
    long field_1765_b;
    double field_1765_c;
    char name_1765[64];
} StructType1765;

int function_1765(StructType1765 *s, int param_a, double param_b, const char *param_c) {
    int local_1765 = param_a * 1765;
    double local_1765_d = param_b * 1765;
    char buf_1765[128];
    snprintf(buf_1765, sizeof(buf_1765), "function_%d: %d, %f, %s", 1765, local_1765, local_1765_d, param_c ? param_c : "null");
    return local_1765 + (int)local_1765_d;
}

typedef struct {
    int field_1766;
    long field_1766_b;
    double field_1766_c;
    char name_1766[64];
} StructType1766;

int function_1766(StructType1766 *s, int param_a, double param_b, const char *param_c) {
    int local_1766 = param_a * 1766;
    double local_1766_d = param_b * 1766;
    char buf_1766[128];
    snprintf(buf_1766, sizeof(buf_1766), "function_%d: %d, %f, %s", 1766, local_1766, local_1766_d, param_c ? param_c : "null");
    return local_1766 + (int)local_1766_d;
}

typedef struct {
    int field_1767;
    long field_1767_b;
    double field_1767_c;
    char name_1767[64];
} StructType1767;

int function_1767(StructType1767 *s, int param_a, double param_b, const char *param_c) {
    int local_1767 = param_a * 1767;
    double local_1767_d = param_b * 1767;
    char buf_1767[128];
    snprintf(buf_1767, sizeof(buf_1767), "function_%d: %d, %f, %s", 1767, local_1767, local_1767_d, param_c ? param_c : "null");
    return local_1767 + (int)local_1767_d;
}

typedef struct {
    int field_1768;
    long field_1768_b;
    double field_1768_c;
    char name_1768[64];
} StructType1768;

int function_1768(StructType1768 *s, int param_a, double param_b, const char *param_c) {
    int local_1768 = param_a * 1768;
    double local_1768_d = param_b * 1768;
    char buf_1768[128];
    snprintf(buf_1768, sizeof(buf_1768), "function_%d: %d, %f, %s", 1768, local_1768, local_1768_d, param_c ? param_c : "null");
    return local_1768 + (int)local_1768_d;
}

typedef struct {
    int field_1769;
    long field_1769_b;
    double field_1769_c;
    char name_1769[64];
} StructType1769;

int function_1769(StructType1769 *s, int param_a, double param_b, const char *param_c) {
    int local_1769 = param_a * 1769;
    double local_1769_d = param_b * 1769;
    char buf_1769[128];
    snprintf(buf_1769, sizeof(buf_1769), "function_%d: %d, %f, %s", 1769, local_1769, local_1769_d, param_c ? param_c : "null");
    return local_1769 + (int)local_1769_d;
}

typedef struct {
    int field_1770;
    long field_1770_b;
    double field_1770_c;
    char name_1770[64];
} StructType1770;

int function_1770(StructType1770 *s, int param_a, double param_b, const char *param_c) {
    int local_1770 = param_a * 1770;
    double local_1770_d = param_b * 1770;
    char buf_1770[128];
    snprintf(buf_1770, sizeof(buf_1770), "function_%d: %d, %f, %s", 1770, local_1770, local_1770_d, param_c ? param_c : "null");
    return local_1770 + (int)local_1770_d;
}

typedef struct {
    int field_1771;
    long field_1771_b;
    double field_1771_c;
    char name_1771[64];
} StructType1771;

int function_1771(StructType1771 *s, int param_a, double param_b, const char *param_c) {
    int local_1771 = param_a * 1771;
    double local_1771_d = param_b * 1771;
    char buf_1771[128];
    snprintf(buf_1771, sizeof(buf_1771), "function_%d: %d, %f, %s", 1771, local_1771, local_1771_d, param_c ? param_c : "null");
    return local_1771 + (int)local_1771_d;
}

typedef struct {
    int field_1772;
    long field_1772_b;
    double field_1772_c;
    char name_1772[64];
} StructType1772;

int function_1772(StructType1772 *s, int param_a, double param_b, const char *param_c) {
    int local_1772 = param_a * 1772;
    double local_1772_d = param_b * 1772;
    char buf_1772[128];
    snprintf(buf_1772, sizeof(buf_1772), "function_%d: %d, %f, %s", 1772, local_1772, local_1772_d, param_c ? param_c : "null");
    return local_1772 + (int)local_1772_d;
}

typedef struct {
    int field_1773;
    long field_1773_b;
    double field_1773_c;
    char name_1773[64];
} StructType1773;

int function_1773(StructType1773 *s, int param_a, double param_b, const char *param_c) {
    int local_1773 = param_a * 1773;
    double local_1773_d = param_b * 1773;
    char buf_1773[128];
    snprintf(buf_1773, sizeof(buf_1773), "function_%d: %d, %f, %s", 1773, local_1773, local_1773_d, param_c ? param_c : "null");
    return local_1773 + (int)local_1773_d;
}

typedef struct {
    int field_1774;
    long field_1774_b;
    double field_1774_c;
    char name_1774[64];
} StructType1774;

int function_1774(StructType1774 *s, int param_a, double param_b, const char *param_c) {
    int local_1774 = param_a * 1774;
    double local_1774_d = param_b * 1774;
    char buf_1774[128];
    snprintf(buf_1774, sizeof(buf_1774), "function_%d: %d, %f, %s", 1774, local_1774, local_1774_d, param_c ? param_c : "null");
    return local_1774 + (int)local_1774_d;
}

typedef struct {
    int field_1775;
    long field_1775_b;
    double field_1775_c;
    char name_1775[64];
} StructType1775;

int function_1775(StructType1775 *s, int param_a, double param_b, const char *param_c) {
    int local_1775 = param_a * 1775;
    double local_1775_d = param_b * 1775;
    char buf_1775[128];
    snprintf(buf_1775, sizeof(buf_1775), "function_%d: %d, %f, %s", 1775, local_1775, local_1775_d, param_c ? param_c : "null");
    return local_1775 + (int)local_1775_d;
}

typedef struct {
    int field_1776;
    long field_1776_b;
    double field_1776_c;
    char name_1776[64];
} StructType1776;

int function_1776(StructType1776 *s, int param_a, double param_b, const char *param_c) {
    int local_1776 = param_a * 1776;
    double local_1776_d = param_b * 1776;
    char buf_1776[128];
    snprintf(buf_1776, sizeof(buf_1776), "function_%d: %d, %f, %s", 1776, local_1776, local_1776_d, param_c ? param_c : "null");
    return local_1776 + (int)local_1776_d;
}

typedef struct {
    int field_1777;
    long field_1777_b;
    double field_1777_c;
    char name_1777[64];
} StructType1777;

int function_1777(StructType1777 *s, int param_a, double param_b, const char *param_c) {
    int local_1777 = param_a * 1777;
    double local_1777_d = param_b * 1777;
    char buf_1777[128];
    snprintf(buf_1777, sizeof(buf_1777), "function_%d: %d, %f, %s", 1777, local_1777, local_1777_d, param_c ? param_c : "null");
    return local_1777 + (int)local_1777_d;
}

typedef struct {
    int field_1778;
    long field_1778_b;
    double field_1778_c;
    char name_1778[64];
} StructType1778;

int function_1778(StructType1778 *s, int param_a, double param_b, const char *param_c) {
    int local_1778 = param_a * 1778;
    double local_1778_d = param_b * 1778;
    char buf_1778[128];
    snprintf(buf_1778, sizeof(buf_1778), "function_%d: %d, %f, %s", 1778, local_1778, local_1778_d, param_c ? param_c : "null");
    return local_1778 + (int)local_1778_d;
}

typedef struct {
    int field_1779;
    long field_1779_b;
    double field_1779_c;
    char name_1779[64];
} StructType1779;

int function_1779(StructType1779 *s, int param_a, double param_b, const char *param_c) {
    int local_1779 = param_a * 1779;
    double local_1779_d = param_b * 1779;
    char buf_1779[128];
    snprintf(buf_1779, sizeof(buf_1779), "function_%d: %d, %f, %s", 1779, local_1779, local_1779_d, param_c ? param_c : "null");
    return local_1779 + (int)local_1779_d;
}

typedef struct {
    int field_1780;
    long field_1780_b;
    double field_1780_c;
    char name_1780[64];
} StructType1780;

int function_1780(StructType1780 *s, int param_a, double param_b, const char *param_c) {
    int local_1780 = param_a * 1780;
    double local_1780_d = param_b * 1780;
    char buf_1780[128];
    snprintf(buf_1780, sizeof(buf_1780), "function_%d: %d, %f, %s", 1780, local_1780, local_1780_d, param_c ? param_c : "null");
    return local_1780 + (int)local_1780_d;
}

typedef struct {
    int field_1781;
    long field_1781_b;
    double field_1781_c;
    char name_1781[64];
} StructType1781;

int function_1781(StructType1781 *s, int param_a, double param_b, const char *param_c) {
    int local_1781 = param_a * 1781;
    double local_1781_d = param_b * 1781;
    char buf_1781[128];
    snprintf(buf_1781, sizeof(buf_1781), "function_%d: %d, %f, %s", 1781, local_1781, local_1781_d, param_c ? param_c : "null");
    return local_1781 + (int)local_1781_d;
}

typedef struct {
    int field_1782;
    long field_1782_b;
    double field_1782_c;
    char name_1782[64];
} StructType1782;

int function_1782(StructType1782 *s, int param_a, double param_b, const char *param_c) {
    int local_1782 = param_a * 1782;
    double local_1782_d = param_b * 1782;
    char buf_1782[128];
    snprintf(buf_1782, sizeof(buf_1782), "function_%d: %d, %f, %s", 1782, local_1782, local_1782_d, param_c ? param_c : "null");
    return local_1782 + (int)local_1782_d;
}

typedef struct {
    int field_1783;
    long field_1783_b;
    double field_1783_c;
    char name_1783[64];
} StructType1783;

int function_1783(StructType1783 *s, int param_a, double param_b, const char *param_c) {
    int local_1783 = param_a * 1783;
    double local_1783_d = param_b * 1783;
    char buf_1783[128];
    snprintf(buf_1783, sizeof(buf_1783), "function_%d: %d, %f, %s", 1783, local_1783, local_1783_d, param_c ? param_c : "null");
    return local_1783 + (int)local_1783_d;
}

typedef struct {
    int field_1784;
    long field_1784_b;
    double field_1784_c;
    char name_1784[64];
} StructType1784;

int function_1784(StructType1784 *s, int param_a, double param_b, const char *param_c) {
    int local_1784 = param_a * 1784;
    double local_1784_d = param_b * 1784;
    char buf_1784[128];
    snprintf(buf_1784, sizeof(buf_1784), "function_%d: %d, %f, %s", 1784, local_1784, local_1784_d, param_c ? param_c : "null");
    return local_1784 + (int)local_1784_d;
}

typedef struct {
    int field_1785;
    long field_1785_b;
    double field_1785_c;
    char name_1785[64];
} StructType1785;

int function_1785(StructType1785 *s, int param_a, double param_b, const char *param_c) {
    int local_1785 = param_a * 1785;
    double local_1785_d = param_b * 1785;
    char buf_1785[128];
    snprintf(buf_1785, sizeof(buf_1785), "function_%d: %d, %f, %s", 1785, local_1785, local_1785_d, param_c ? param_c : "null");
    return local_1785 + (int)local_1785_d;
}

typedef struct {
    int field_1786;
    long field_1786_b;
    double field_1786_c;
    char name_1786[64];
} StructType1786;

int function_1786(StructType1786 *s, int param_a, double param_b, const char *param_c) {
    int local_1786 = param_a * 1786;
    double local_1786_d = param_b * 1786;
    char buf_1786[128];
    snprintf(buf_1786, sizeof(buf_1786), "function_%d: %d, %f, %s", 1786, local_1786, local_1786_d, param_c ? param_c : "null");
    return local_1786 + (int)local_1786_d;
}

typedef struct {
    int field_1787;
    long field_1787_b;
    double field_1787_c;
    char name_1787[64];
} StructType1787;

int function_1787(StructType1787 *s, int param_a, double param_b, const char *param_c) {
    int local_1787 = param_a * 1787;
    double local_1787_d = param_b * 1787;
    char buf_1787[128];
    snprintf(buf_1787, sizeof(buf_1787), "function_%d: %d, %f, %s", 1787, local_1787, local_1787_d, param_c ? param_c : "null");
    return local_1787 + (int)local_1787_d;
}

typedef struct {
    int field_1788;
    long field_1788_b;
    double field_1788_c;
    char name_1788[64];
} StructType1788;

int function_1788(StructType1788 *s, int param_a, double param_b, const char *param_c) {
    int local_1788 = param_a * 1788;
    double local_1788_d = param_b * 1788;
    char buf_1788[128];
    snprintf(buf_1788, sizeof(buf_1788), "function_%d: %d, %f, %s", 1788, local_1788, local_1788_d, param_c ? param_c : "null");
    return local_1788 + (int)local_1788_d;
}

typedef struct {
    int field_1789;
    long field_1789_b;
    double field_1789_c;
    char name_1789[64];
} StructType1789;

int function_1789(StructType1789 *s, int param_a, double param_b, const char *param_c) {
    int local_1789 = param_a * 1789;
    double local_1789_d = param_b * 1789;
    char buf_1789[128];
    snprintf(buf_1789, sizeof(buf_1789), "function_%d: %d, %f, %s", 1789, local_1789, local_1789_d, param_c ? param_c : "null");
    return local_1789 + (int)local_1789_d;
}

typedef struct {
    int field_1790;
    long field_1790_b;
    double field_1790_c;
    char name_1790[64];
} StructType1790;

int function_1790(StructType1790 *s, int param_a, double param_b, const char *param_c) {
    int local_1790 = param_a * 1790;
    double local_1790_d = param_b * 1790;
    char buf_1790[128];
    snprintf(buf_1790, sizeof(buf_1790), "function_%d: %d, %f, %s", 1790, local_1790, local_1790_d, param_c ? param_c : "null");
    return local_1790 + (int)local_1790_d;
}

typedef struct {
    int field_1791;
    long field_1791_b;
    double field_1791_c;
    char name_1791[64];
} StructType1791;

int function_1791(StructType1791 *s, int param_a, double param_b, const char *param_c) {
    int local_1791 = param_a * 1791;
    double local_1791_d = param_b * 1791;
    char buf_1791[128];
    snprintf(buf_1791, sizeof(buf_1791), "function_%d: %d, %f, %s", 1791, local_1791, local_1791_d, param_c ? param_c : "null");
    return local_1791 + (int)local_1791_d;
}

typedef struct {
    int field_1792;
    long field_1792_b;
    double field_1792_c;
    char name_1792[64];
} StructType1792;

int function_1792(StructType1792 *s, int param_a, double param_b, const char *param_c) {
    int local_1792 = param_a * 1792;
    double local_1792_d = param_b * 1792;
    char buf_1792[128];
    snprintf(buf_1792, sizeof(buf_1792), "function_%d: %d, %f, %s", 1792, local_1792, local_1792_d, param_c ? param_c : "null");
    return local_1792 + (int)local_1792_d;
}

typedef struct {
    int field_1793;
    long field_1793_b;
    double field_1793_c;
    char name_1793[64];
} StructType1793;

int function_1793(StructType1793 *s, int param_a, double param_b, const char *param_c) {
    int local_1793 = param_a * 1793;
    double local_1793_d = param_b * 1793;
    char buf_1793[128];
    snprintf(buf_1793, sizeof(buf_1793), "function_%d: %d, %f, %s", 1793, local_1793, local_1793_d, param_c ? param_c : "null");
    return local_1793 + (int)local_1793_d;
}

typedef struct {
    int field_1794;
    long field_1794_b;
    double field_1794_c;
    char name_1794[64];
} StructType1794;

int function_1794(StructType1794 *s, int param_a, double param_b, const char *param_c) {
    int local_1794 = param_a * 1794;
    double local_1794_d = param_b * 1794;
    char buf_1794[128];
    snprintf(buf_1794, sizeof(buf_1794), "function_%d: %d, %f, %s", 1794, local_1794, local_1794_d, param_c ? param_c : "null");
    return local_1794 + (int)local_1794_d;
}

typedef struct {
    int field_1795;
    long field_1795_b;
    double field_1795_c;
    char name_1795[64];
} StructType1795;

int function_1795(StructType1795 *s, int param_a, double param_b, const char *param_c) {
    int local_1795 = param_a * 1795;
    double local_1795_d = param_b * 1795;
    char buf_1795[128];
    snprintf(buf_1795, sizeof(buf_1795), "function_%d: %d, %f, %s", 1795, local_1795, local_1795_d, param_c ? param_c : "null");
    return local_1795 + (int)local_1795_d;
}

typedef struct {
    int field_1796;
    long field_1796_b;
    double field_1796_c;
    char name_1796[64];
} StructType1796;

int function_1796(StructType1796 *s, int param_a, double param_b, const char *param_c) {
    int local_1796 = param_a * 1796;
    double local_1796_d = param_b * 1796;
    char buf_1796[128];
    snprintf(buf_1796, sizeof(buf_1796), "function_%d: %d, %f, %s", 1796, local_1796, local_1796_d, param_c ? param_c : "null");
    return local_1796 + (int)local_1796_d;
}

typedef struct {
    int field_1797;
    long field_1797_b;
    double field_1797_c;
    char name_1797[64];
} StructType1797;

int function_1797(StructType1797 *s, int param_a, double param_b, const char *param_c) {
    int local_1797 = param_a * 1797;
    double local_1797_d = param_b * 1797;
    char buf_1797[128];
    snprintf(buf_1797, sizeof(buf_1797), "function_%d: %d, %f, %s", 1797, local_1797, local_1797_d, param_c ? param_c : "null");
    return local_1797 + (int)local_1797_d;
}

typedef struct {
    int field_1798;
    long field_1798_b;
    double field_1798_c;
    char name_1798[64];
} StructType1798;

int function_1798(StructType1798 *s, int param_a, double param_b, const char *param_c) {
    int local_1798 = param_a * 1798;
    double local_1798_d = param_b * 1798;
    char buf_1798[128];
    snprintf(buf_1798, sizeof(buf_1798), "function_%d: %d, %f, %s", 1798, local_1798, local_1798_d, param_c ? param_c : "null");
    return local_1798 + (int)local_1798_d;
}

typedef struct {
    int field_1799;
    long field_1799_b;
    double field_1799_c;
    char name_1799[64];
} StructType1799;

int function_1799(StructType1799 *s, int param_a, double param_b, const char *param_c) {
    int local_1799 = param_a * 1799;
    double local_1799_d = param_b * 1799;
    char buf_1799[128];
    snprintf(buf_1799, sizeof(buf_1799), "function_%d: %d, %f, %s", 1799, local_1799, local_1799_d, param_c ? param_c : "null");
    return local_1799 + (int)local_1799_d;
}

typedef struct {
    int field_1800;
    long field_1800_b;
    double field_1800_c;
    char name_1800[64];
} StructType1800;

int function_1800(StructType1800 *s, int param_a, double param_b, const char *param_c) {
    int local_1800 = param_a * 1800;
    double local_1800_d = param_b * 1800;
    char buf_1800[128];
    snprintf(buf_1800, sizeof(buf_1800), "function_%d: %d, %f, %s", 1800, local_1800, local_1800_d, param_c ? param_c : "null");
    return local_1800 + (int)local_1800_d;
}

typedef struct {
    int field_1801;
    long field_1801_b;
    double field_1801_c;
    char name_1801[64];
} StructType1801;

int function_1801(StructType1801 *s, int param_a, double param_b, const char *param_c) {
    int local_1801 = param_a * 1801;
    double local_1801_d = param_b * 1801;
    char buf_1801[128];
    snprintf(buf_1801, sizeof(buf_1801), "function_%d: %d, %f, %s", 1801, local_1801, local_1801_d, param_c ? param_c : "null");
    return local_1801 + (int)local_1801_d;
}

typedef struct {
    int field_1802;
    long field_1802_b;
    double field_1802_c;
    char name_1802[64];
} StructType1802;

int function_1802(StructType1802 *s, int param_a, double param_b, const char *param_c) {
    int local_1802 = param_a * 1802;
    double local_1802_d = param_b * 1802;
    char buf_1802[128];
    snprintf(buf_1802, sizeof(buf_1802), "function_%d: %d, %f, %s", 1802, local_1802, local_1802_d, param_c ? param_c : "null");
    return local_1802 + (int)local_1802_d;
}

typedef struct {
    int field_1803;
    long field_1803_b;
    double field_1803_c;
    char name_1803[64];
} StructType1803;

int function_1803(StructType1803 *s, int param_a, double param_b, const char *param_c) {
    int local_1803 = param_a * 1803;
    double local_1803_d = param_b * 1803;
    char buf_1803[128];
    snprintf(buf_1803, sizeof(buf_1803), "function_%d: %d, %f, %s", 1803, local_1803, local_1803_d, param_c ? param_c : "null");
    return local_1803 + (int)local_1803_d;
}

typedef struct {
    int field_1804;
    long field_1804_b;
    double field_1804_c;
    char name_1804[64];
} StructType1804;

int function_1804(StructType1804 *s, int param_a, double param_b, const char *param_c) {
    int local_1804 = param_a * 1804;
    double local_1804_d = param_b * 1804;
    char buf_1804[128];
    snprintf(buf_1804, sizeof(buf_1804), "function_%d: %d, %f, %s", 1804, local_1804, local_1804_d, param_c ? param_c : "null");
    return local_1804 + (int)local_1804_d;
}

typedef struct {
    int field_1805;
    long field_1805_b;
    double field_1805_c;
    char name_1805[64];
} StructType1805;

int function_1805(StructType1805 *s, int param_a, double param_b, const char *param_c) {
    int local_1805 = param_a * 1805;
    double local_1805_d = param_b * 1805;
    char buf_1805[128];
    snprintf(buf_1805, sizeof(buf_1805), "function_%d: %d, %f, %s", 1805, local_1805, local_1805_d, param_c ? param_c : "null");
    return local_1805 + (int)local_1805_d;
}

typedef struct {
    int field_1806;
    long field_1806_b;
    double field_1806_c;
    char name_1806[64];
} StructType1806;

int function_1806(StructType1806 *s, int param_a, double param_b, const char *param_c) {
    int local_1806 = param_a * 1806;
    double local_1806_d = param_b * 1806;
    char buf_1806[128];
    snprintf(buf_1806, sizeof(buf_1806), "function_%d: %d, %f, %s", 1806, local_1806, local_1806_d, param_c ? param_c : "null");
    return local_1806 + (int)local_1806_d;
}

typedef struct {
    int field_1807;
    long field_1807_b;
    double field_1807_c;
    char name_1807[64];
} StructType1807;

int function_1807(StructType1807 *s, int param_a, double param_b, const char *param_c) {
    int local_1807 = param_a * 1807;
    double local_1807_d = param_b * 1807;
    char buf_1807[128];
    snprintf(buf_1807, sizeof(buf_1807), "function_%d: %d, %f, %s", 1807, local_1807, local_1807_d, param_c ? param_c : "null");
    return local_1807 + (int)local_1807_d;
}

typedef struct {
    int field_1808;
    long field_1808_b;
    double field_1808_c;
    char name_1808[64];
} StructType1808;

int function_1808(StructType1808 *s, int param_a, double param_b, const char *param_c) {
    int local_1808 = param_a * 1808;
    double local_1808_d = param_b * 1808;
    char buf_1808[128];
    snprintf(buf_1808, sizeof(buf_1808), "function_%d: %d, %f, %s", 1808, local_1808, local_1808_d, param_c ? param_c : "null");
    return local_1808 + (int)local_1808_d;
}

typedef struct {
    int field_1809;
    long field_1809_b;
    double field_1809_c;
    char name_1809[64];
} StructType1809;

int function_1809(StructType1809 *s, int param_a, double param_b, const char *param_c) {
    int local_1809 = param_a * 1809;
    double local_1809_d = param_b * 1809;
    char buf_1809[128];
    snprintf(buf_1809, sizeof(buf_1809), "function_%d: %d, %f, %s", 1809, local_1809, local_1809_d, param_c ? param_c : "null");
    return local_1809 + (int)local_1809_d;
}

typedef struct {
    int field_1810;
    long field_1810_b;
    double field_1810_c;
    char name_1810[64];
} StructType1810;

int function_1810(StructType1810 *s, int param_a, double param_b, const char *param_c) {
    int local_1810 = param_a * 1810;
    double local_1810_d = param_b * 1810;
    char buf_1810[128];
    snprintf(buf_1810, sizeof(buf_1810), "function_%d: %d, %f, %s", 1810, local_1810, local_1810_d, param_c ? param_c : "null");
    return local_1810 + (int)local_1810_d;
}

typedef struct {
    int field_1811;
    long field_1811_b;
    double field_1811_c;
    char name_1811[64];
} StructType1811;

int function_1811(StructType1811 *s, int param_a, double param_b, const char *param_c) {
    int local_1811 = param_a * 1811;
    double local_1811_d = param_b * 1811;
    char buf_1811[128];
    snprintf(buf_1811, sizeof(buf_1811), "function_%d: %d, %f, %s", 1811, local_1811, local_1811_d, param_c ? param_c : "null");
    return local_1811 + (int)local_1811_d;
}

typedef struct {
    int field_1812;
    long field_1812_b;
    double field_1812_c;
    char name_1812[64];
} StructType1812;

int function_1812(StructType1812 *s, int param_a, double param_b, const char *param_c) {
    int local_1812 = param_a * 1812;
    double local_1812_d = param_b * 1812;
    char buf_1812[128];
    snprintf(buf_1812, sizeof(buf_1812), "function_%d: %d, %f, %s", 1812, local_1812, local_1812_d, param_c ? param_c : "null");
    return local_1812 + (int)local_1812_d;
}

typedef struct {
    int field_1813;
    long field_1813_b;
    double field_1813_c;
    char name_1813[64];
} StructType1813;

int function_1813(StructType1813 *s, int param_a, double param_b, const char *param_c) {
    int local_1813 = param_a * 1813;
    double local_1813_d = param_b * 1813;
    char buf_1813[128];
    snprintf(buf_1813, sizeof(buf_1813), "function_%d: %d, %f, %s", 1813, local_1813, local_1813_d, param_c ? param_c : "null");
    return local_1813 + (int)local_1813_d;
}

typedef struct {
    int field_1814;
    long field_1814_b;
    double field_1814_c;
    char name_1814[64];
} StructType1814;

int function_1814(StructType1814 *s, int param_a, double param_b, const char *param_c) {
    int local_1814 = param_a * 1814;
    double local_1814_d = param_b * 1814;
    char buf_1814[128];
    snprintf(buf_1814, sizeof(buf_1814), "function_%d: %d, %f, %s", 1814, local_1814, local_1814_d, param_c ? param_c : "null");
    return local_1814 + (int)local_1814_d;
}

typedef struct {
    int field_1815;
    long field_1815_b;
    double field_1815_c;
    char name_1815[64];
} StructType1815;

int function_1815(StructType1815 *s, int param_a, double param_b, const char *param_c) {
    int local_1815 = param_a * 1815;
    double local_1815_d = param_b * 1815;
    char buf_1815[128];
    snprintf(buf_1815, sizeof(buf_1815), "function_%d: %d, %f, %s", 1815, local_1815, local_1815_d, param_c ? param_c : "null");
    return local_1815 + (int)local_1815_d;
}

typedef struct {
    int field_1816;
    long field_1816_b;
    double field_1816_c;
    char name_1816[64];
} StructType1816;

int function_1816(StructType1816 *s, int param_a, double param_b, const char *param_c) {
    int local_1816 = param_a * 1816;
    double local_1816_d = param_b * 1816;
    char buf_1816[128];
    snprintf(buf_1816, sizeof(buf_1816), "function_%d: %d, %f, %s", 1816, local_1816, local_1816_d, param_c ? param_c : "null");
    return local_1816 + (int)local_1816_d;
}

typedef struct {
    int field_1817;
    long field_1817_b;
    double field_1817_c;
    char name_1817[64];
} StructType1817;

int function_1817(StructType1817 *s, int param_a, double param_b, const char *param_c) {
    int local_1817 = param_a * 1817;
    double local_1817_d = param_b * 1817;
    char buf_1817[128];
    snprintf(buf_1817, sizeof(buf_1817), "function_%d: %d, %f, %s", 1817, local_1817, local_1817_d, param_c ? param_c : "null");
    return local_1817 + (int)local_1817_d;
}

typedef struct {
    int field_1818;
    long field_1818_b;
    double field_1818_c;
    char name_1818[64];
} StructType1818;

int function_1818(StructType1818 *s, int param_a, double param_b, const char *param_c) {
    int local_1818 = param_a * 1818;
    double local_1818_d = param_b * 1818;
    char buf_1818[128];
    snprintf(buf_1818, sizeof(buf_1818), "function_%d: %d, %f, %s", 1818, local_1818, local_1818_d, param_c ? param_c : "null");
    return local_1818 + (int)local_1818_d;
}

typedef struct {
    int field_1819;
    long field_1819_b;
    double field_1819_c;
    char name_1819[64];
} StructType1819;

int function_1819(StructType1819 *s, int param_a, double param_b, const char *param_c) {
    int local_1819 = param_a * 1819;
    double local_1819_d = param_b * 1819;
    char buf_1819[128];
    snprintf(buf_1819, sizeof(buf_1819), "function_%d: %d, %f, %s", 1819, local_1819, local_1819_d, param_c ? param_c : "null");
    return local_1819 + (int)local_1819_d;
}

typedef struct {
    int field_1820;
    long field_1820_b;
    double field_1820_c;
    char name_1820[64];
} StructType1820;

int function_1820(StructType1820 *s, int param_a, double param_b, const char *param_c) {
    int local_1820 = param_a * 1820;
    double local_1820_d = param_b * 1820;
    char buf_1820[128];
    snprintf(buf_1820, sizeof(buf_1820), "function_%d: %d, %f, %s", 1820, local_1820, local_1820_d, param_c ? param_c : "null");
    return local_1820 + (int)local_1820_d;
}

typedef struct {
    int field_1821;
    long field_1821_b;
    double field_1821_c;
    char name_1821[64];
} StructType1821;

int function_1821(StructType1821 *s, int param_a, double param_b, const char *param_c) {
    int local_1821 = param_a * 1821;
    double local_1821_d = param_b * 1821;
    char buf_1821[128];
    snprintf(buf_1821, sizeof(buf_1821), "function_%d: %d, %f, %s", 1821, local_1821, local_1821_d, param_c ? param_c : "null");
    return local_1821 + (int)local_1821_d;
}

typedef struct {
    int field_1822;
    long field_1822_b;
    double field_1822_c;
    char name_1822[64];
} StructType1822;

int function_1822(StructType1822 *s, int param_a, double param_b, const char *param_c) {
    int local_1822 = param_a * 1822;
    double local_1822_d = param_b * 1822;
    char buf_1822[128];
    snprintf(buf_1822, sizeof(buf_1822), "function_%d: %d, %f, %s", 1822, local_1822, local_1822_d, param_c ? param_c : "null");
    return local_1822 + (int)local_1822_d;
}

typedef struct {
    int field_1823;
    long field_1823_b;
    double field_1823_c;
    char name_1823[64];
} StructType1823;

int function_1823(StructType1823 *s, int param_a, double param_b, const char *param_c) {
    int local_1823 = param_a * 1823;
    double local_1823_d = param_b * 1823;
    char buf_1823[128];
    snprintf(buf_1823, sizeof(buf_1823), "function_%d: %d, %f, %s", 1823, local_1823, local_1823_d, param_c ? param_c : "null");
    return local_1823 + (int)local_1823_d;
}

typedef struct {
    int field_1824;
    long field_1824_b;
    double field_1824_c;
    char name_1824[64];
} StructType1824;

int function_1824(StructType1824 *s, int param_a, double param_b, const char *param_c) {
    int local_1824 = param_a * 1824;
    double local_1824_d = param_b * 1824;
    char buf_1824[128];
    snprintf(buf_1824, sizeof(buf_1824), "function_%d: %d, %f, %s", 1824, local_1824, local_1824_d, param_c ? param_c : "null");
    return local_1824 + (int)local_1824_d;
}

typedef struct {
    int field_1825;
    long field_1825_b;
    double field_1825_c;
    char name_1825[64];
} StructType1825;

int function_1825(StructType1825 *s, int param_a, double param_b, const char *param_c) {
    int local_1825 = param_a * 1825;
    double local_1825_d = param_b * 1825;
    char buf_1825[128];
    snprintf(buf_1825, sizeof(buf_1825), "function_%d: %d, %f, %s", 1825, local_1825, local_1825_d, param_c ? param_c : "null");
    return local_1825 + (int)local_1825_d;
}

typedef struct {
    int field_1826;
    long field_1826_b;
    double field_1826_c;
    char name_1826[64];
} StructType1826;

int function_1826(StructType1826 *s, int param_a, double param_b, const char *param_c) {
    int local_1826 = param_a * 1826;
    double local_1826_d = param_b * 1826;
    char buf_1826[128];
    snprintf(buf_1826, sizeof(buf_1826), "function_%d: %d, %f, %s", 1826, local_1826, local_1826_d, param_c ? param_c : "null");
    return local_1826 + (int)local_1826_d;
}

typedef struct {
    int field_1827;
    long field_1827_b;
    double field_1827_c;
    char name_1827[64];
} StructType1827;

int function_1827(StructType1827 *s, int param_a, double param_b, const char *param_c) {
    int local_1827 = param_a * 1827;
    double local_1827_d = param_b * 1827;
    char buf_1827[128];
    snprintf(buf_1827, sizeof(buf_1827), "function_%d: %d, %f, %s", 1827, local_1827, local_1827_d, param_c ? param_c : "null");
    return local_1827 + (int)local_1827_d;
}

typedef struct {
    int field_1828;
    long field_1828_b;
    double field_1828_c;
    char name_1828[64];
} StructType1828;

int function_1828(StructType1828 *s, int param_a, double param_b, const char *param_c) {
    int local_1828 = param_a * 1828;
    double local_1828_d = param_b * 1828;
    char buf_1828[128];
    snprintf(buf_1828, sizeof(buf_1828), "function_%d: %d, %f, %s", 1828, local_1828, local_1828_d, param_c ? param_c : "null");
    return local_1828 + (int)local_1828_d;
}

typedef struct {
    int field_1829;
    long field_1829_b;
    double field_1829_c;
    char name_1829[64];
} StructType1829;

int function_1829(StructType1829 *s, int param_a, double param_b, const char *param_c) {
    int local_1829 = param_a * 1829;
    double local_1829_d = param_b * 1829;
    char buf_1829[128];
    snprintf(buf_1829, sizeof(buf_1829), "function_%d: %d, %f, %s", 1829, local_1829, local_1829_d, param_c ? param_c : "null");
    return local_1829 + (int)local_1829_d;
}

typedef struct {
    int field_1830;
    long field_1830_b;
    double field_1830_c;
    char name_1830[64];
} StructType1830;

int function_1830(StructType1830 *s, int param_a, double param_b, const char *param_c) {
    int local_1830 = param_a * 1830;
    double local_1830_d = param_b * 1830;
    char buf_1830[128];
    snprintf(buf_1830, sizeof(buf_1830), "function_%d: %d, %f, %s", 1830, local_1830, local_1830_d, param_c ? param_c : "null");
    return local_1830 + (int)local_1830_d;
}

typedef struct {
    int field_1831;
    long field_1831_b;
    double field_1831_c;
    char name_1831[64];
} StructType1831;

int function_1831(StructType1831 *s, int param_a, double param_b, const char *param_c) {
    int local_1831 = param_a * 1831;
    double local_1831_d = param_b * 1831;
    char buf_1831[128];
    snprintf(buf_1831, sizeof(buf_1831), "function_%d: %d, %f, %s", 1831, local_1831, local_1831_d, param_c ? param_c : "null");
    return local_1831 + (int)local_1831_d;
}

typedef struct {
    int field_1832;
    long field_1832_b;
    double field_1832_c;
    char name_1832[64];
} StructType1832;

int function_1832(StructType1832 *s, int param_a, double param_b, const char *param_c) {
    int local_1832 = param_a * 1832;
    double local_1832_d = param_b * 1832;
    char buf_1832[128];
    snprintf(buf_1832, sizeof(buf_1832), "function_%d: %d, %f, %s", 1832, local_1832, local_1832_d, param_c ? param_c : "null");
    return local_1832 + (int)local_1832_d;
}

typedef struct {
    int field_1833;
    long field_1833_b;
    double field_1833_c;
    char name_1833[64];
} StructType1833;

int function_1833(StructType1833 *s, int param_a, double param_b, const char *param_c) {
    int local_1833 = param_a * 1833;
    double local_1833_d = param_b * 1833;
    char buf_1833[128];
    snprintf(buf_1833, sizeof(buf_1833), "function_%d: %d, %f, %s", 1833, local_1833, local_1833_d, param_c ? param_c : "null");
    return local_1833 + (int)local_1833_d;
}

typedef struct {
    int field_1834;
    long field_1834_b;
    double field_1834_c;
    char name_1834[64];
} StructType1834;

int function_1834(StructType1834 *s, int param_a, double param_b, const char *param_c) {
    int local_1834 = param_a * 1834;
    double local_1834_d = param_b * 1834;
    char buf_1834[128];
    snprintf(buf_1834, sizeof(buf_1834), "function_%d: %d, %f, %s", 1834, local_1834, local_1834_d, param_c ? param_c : "null");
    return local_1834 + (int)local_1834_d;
}

typedef struct {
    int field_1835;
    long field_1835_b;
    double field_1835_c;
    char name_1835[64];
} StructType1835;

int function_1835(StructType1835 *s, int param_a, double param_b, const char *param_c) {
    int local_1835 = param_a * 1835;
    double local_1835_d = param_b * 1835;
    char buf_1835[128];
    snprintf(buf_1835, sizeof(buf_1835), "function_%d: %d, %f, %s", 1835, local_1835, local_1835_d, param_c ? param_c : "null");
    return local_1835 + (int)local_1835_d;
}

typedef struct {
    int field_1836;
    long field_1836_b;
    double field_1836_c;
    char name_1836[64];
} StructType1836;

int function_1836(StructType1836 *s, int param_a, double param_b, const char *param_c) {
    int local_1836 = param_a * 1836;
    double local_1836_d = param_b * 1836;
    char buf_1836[128];
    snprintf(buf_1836, sizeof(buf_1836), "function_%d: %d, %f, %s", 1836, local_1836, local_1836_d, param_c ? param_c : "null");
    return local_1836 + (int)local_1836_d;
}

typedef struct {
    int field_1837;
    long field_1837_b;
    double field_1837_c;
    char name_1837[64];
} StructType1837;

int function_1837(StructType1837 *s, int param_a, double param_b, const char *param_c) {
    int local_1837 = param_a * 1837;
    double local_1837_d = param_b * 1837;
    char buf_1837[128];
    snprintf(buf_1837, sizeof(buf_1837), "function_%d: %d, %f, %s", 1837, local_1837, local_1837_d, param_c ? param_c : "null");
    return local_1837 + (int)local_1837_d;
}

typedef struct {
    int field_1838;
    long field_1838_b;
    double field_1838_c;
    char name_1838[64];
} StructType1838;

int function_1838(StructType1838 *s, int param_a, double param_b, const char *param_c) {
    int local_1838 = param_a * 1838;
    double local_1838_d = param_b * 1838;
    char buf_1838[128];
    snprintf(buf_1838, sizeof(buf_1838), "function_%d: %d, %f, %s", 1838, local_1838, local_1838_d, param_c ? param_c : "null");
    return local_1838 + (int)local_1838_d;
}

typedef struct {
    int field_1839;
    long field_1839_b;
    double field_1839_c;
    char name_1839[64];
} StructType1839;

int function_1839(StructType1839 *s, int param_a, double param_b, const char *param_c) {
    int local_1839 = param_a * 1839;
    double local_1839_d = param_b * 1839;
    char buf_1839[128];
    snprintf(buf_1839, sizeof(buf_1839), "function_%d: %d, %f, %s", 1839, local_1839, local_1839_d, param_c ? param_c : "null");
    return local_1839 + (int)local_1839_d;
}

typedef struct {
    int field_1840;
    long field_1840_b;
    double field_1840_c;
    char name_1840[64];
} StructType1840;

int function_1840(StructType1840 *s, int param_a, double param_b, const char *param_c) {
    int local_1840 = param_a * 1840;
    double local_1840_d = param_b * 1840;
    char buf_1840[128];
    snprintf(buf_1840, sizeof(buf_1840), "function_%d: %d, %f, %s", 1840, local_1840, local_1840_d, param_c ? param_c : "null");
    return local_1840 + (int)local_1840_d;
}

typedef struct {
    int field_1841;
    long field_1841_b;
    double field_1841_c;
    char name_1841[64];
} StructType1841;

int function_1841(StructType1841 *s, int param_a, double param_b, const char *param_c) {
    int local_1841 = param_a * 1841;
    double local_1841_d = param_b * 1841;
    char buf_1841[128];
    snprintf(buf_1841, sizeof(buf_1841), "function_%d: %d, %f, %s", 1841, local_1841, local_1841_d, param_c ? param_c : "null");
    return local_1841 + (int)local_1841_d;
}

typedef struct {
    int field_1842;
    long field_1842_b;
    double field_1842_c;
    char name_1842[64];
} StructType1842;

int function_1842(StructType1842 *s, int param_a, double param_b, const char *param_c) {
    int local_1842 = param_a * 1842;
    double local_1842_d = param_b * 1842;
    char buf_1842[128];
    snprintf(buf_1842, sizeof(buf_1842), "function_%d: %d, %f, %s", 1842, local_1842, local_1842_d, param_c ? param_c : "null");
    return local_1842 + (int)local_1842_d;
}

typedef struct {
    int field_1843;
    long field_1843_b;
    double field_1843_c;
    char name_1843[64];
} StructType1843;

int function_1843(StructType1843 *s, int param_a, double param_b, const char *param_c) {
    int local_1843 = param_a * 1843;
    double local_1843_d = param_b * 1843;
    char buf_1843[128];
    snprintf(buf_1843, sizeof(buf_1843), "function_%d: %d, %f, %s", 1843, local_1843, local_1843_d, param_c ? param_c : "null");
    return local_1843 + (int)local_1843_d;
}

typedef struct {
    int field_1844;
    long field_1844_b;
    double field_1844_c;
    char name_1844[64];
} StructType1844;

int function_1844(StructType1844 *s, int param_a, double param_b, const char *param_c) {
    int local_1844 = param_a * 1844;
    double local_1844_d = param_b * 1844;
    char buf_1844[128];
    snprintf(buf_1844, sizeof(buf_1844), "function_%d: %d, %f, %s", 1844, local_1844, local_1844_d, param_c ? param_c : "null");
    return local_1844 + (int)local_1844_d;
}

typedef struct {
    int field_1845;
    long field_1845_b;
    double field_1845_c;
    char name_1845[64];
} StructType1845;

int function_1845(StructType1845 *s, int param_a, double param_b, const char *param_c) {
    int local_1845 = param_a * 1845;
    double local_1845_d = param_b * 1845;
    char buf_1845[128];
    snprintf(buf_1845, sizeof(buf_1845), "function_%d: %d, %f, %s", 1845, local_1845, local_1845_d, param_c ? param_c : "null");
    return local_1845 + (int)local_1845_d;
}

typedef struct {
    int field_1846;
    long field_1846_b;
    double field_1846_c;
    char name_1846[64];
} StructType1846;

int function_1846(StructType1846 *s, int param_a, double param_b, const char *param_c) {
    int local_1846 = param_a * 1846;
    double local_1846_d = param_b * 1846;
    char buf_1846[128];
    snprintf(buf_1846, sizeof(buf_1846), "function_%d: %d, %f, %s", 1846, local_1846, local_1846_d, param_c ? param_c : "null");
    return local_1846 + (int)local_1846_d;
}

typedef struct {
    int field_1847;
    long field_1847_b;
    double field_1847_c;
    char name_1847[64];
} StructType1847;

int function_1847(StructType1847 *s, int param_a, double param_b, const char *param_c) {
    int local_1847 = param_a * 1847;
    double local_1847_d = param_b * 1847;
    char buf_1847[128];
    snprintf(buf_1847, sizeof(buf_1847), "function_%d: %d, %f, %s", 1847, local_1847, local_1847_d, param_c ? param_c : "null");
    return local_1847 + (int)local_1847_d;
}

typedef struct {
    int field_1848;
    long field_1848_b;
    double field_1848_c;
    char name_1848[64];
} StructType1848;

int function_1848(StructType1848 *s, int param_a, double param_b, const char *param_c) {
    int local_1848 = param_a * 1848;
    double local_1848_d = param_b * 1848;
    char buf_1848[128];
    snprintf(buf_1848, sizeof(buf_1848), "function_%d: %d, %f, %s", 1848, local_1848, local_1848_d, param_c ? param_c : "null");
    return local_1848 + (int)local_1848_d;
}

typedef struct {
    int field_1849;
    long field_1849_b;
    double field_1849_c;
    char name_1849[64];
} StructType1849;

int function_1849(StructType1849 *s, int param_a, double param_b, const char *param_c) {
    int local_1849 = param_a * 1849;
    double local_1849_d = param_b * 1849;
    char buf_1849[128];
    snprintf(buf_1849, sizeof(buf_1849), "function_%d: %d, %f, %s", 1849, local_1849, local_1849_d, param_c ? param_c : "null");
    return local_1849 + (int)local_1849_d;
}

typedef struct {
    int field_1850;
    long field_1850_b;
    double field_1850_c;
    char name_1850[64];
} StructType1850;

int function_1850(StructType1850 *s, int param_a, double param_b, const char *param_c) {
    int local_1850 = param_a * 1850;
    double local_1850_d = param_b * 1850;
    char buf_1850[128];
    snprintf(buf_1850, sizeof(buf_1850), "function_%d: %d, %f, %s", 1850, local_1850, local_1850_d, param_c ? param_c : "null");
    return local_1850 + (int)local_1850_d;
}

typedef struct {
    int field_1851;
    long field_1851_b;
    double field_1851_c;
    char name_1851[64];
} StructType1851;

int function_1851(StructType1851 *s, int param_a, double param_b, const char *param_c) {
    int local_1851 = param_a * 1851;
    double local_1851_d = param_b * 1851;
    char buf_1851[128];
    snprintf(buf_1851, sizeof(buf_1851), "function_%d: %d, %f, %s", 1851, local_1851, local_1851_d, param_c ? param_c : "null");
    return local_1851 + (int)local_1851_d;
}

typedef struct {
    int field_1852;
    long field_1852_b;
    double field_1852_c;
    char name_1852[64];
} StructType1852;

int function_1852(StructType1852 *s, int param_a, double param_b, const char *param_c) {
    int local_1852 = param_a * 1852;
    double local_1852_d = param_b * 1852;
    char buf_1852[128];
    snprintf(buf_1852, sizeof(buf_1852), "function_%d: %d, %f, %s", 1852, local_1852, local_1852_d, param_c ? param_c : "null");
    return local_1852 + (int)local_1852_d;
}

typedef struct {
    int field_1853;
    long field_1853_b;
    double field_1853_c;
    char name_1853[64];
} StructType1853;

int function_1853(StructType1853 *s, int param_a, double param_b, const char *param_c) {
    int local_1853 = param_a * 1853;
    double local_1853_d = param_b * 1853;
    char buf_1853[128];
    snprintf(buf_1853, sizeof(buf_1853), "function_%d: %d, %f, %s", 1853, local_1853, local_1853_d, param_c ? param_c : "null");
    return local_1853 + (int)local_1853_d;
}

typedef struct {
    int field_1854;
    long field_1854_b;
    double field_1854_c;
    char name_1854[64];
} StructType1854;

int function_1854(StructType1854 *s, int param_a, double param_b, const char *param_c) {
    int local_1854 = param_a * 1854;
    double local_1854_d = param_b * 1854;
    char buf_1854[128];
    snprintf(buf_1854, sizeof(buf_1854), "function_%d: %d, %f, %s", 1854, local_1854, local_1854_d, param_c ? param_c : "null");
    return local_1854 + (int)local_1854_d;
}

typedef struct {
    int field_1855;
    long field_1855_b;
    double field_1855_c;
    char name_1855[64];
} StructType1855;

int function_1855(StructType1855 *s, int param_a, double param_b, const char *param_c) {
    int local_1855 = param_a * 1855;
    double local_1855_d = param_b * 1855;
    char buf_1855[128];
    snprintf(buf_1855, sizeof(buf_1855), "function_%d: %d, %f, %s", 1855, local_1855, local_1855_d, param_c ? param_c : "null");
    return local_1855 + (int)local_1855_d;
}

typedef struct {
    int field_1856;
    long field_1856_b;
    double field_1856_c;
    char name_1856[64];
} StructType1856;

int function_1856(StructType1856 *s, int param_a, double param_b, const char *param_c) {
    int local_1856 = param_a * 1856;
    double local_1856_d = param_b * 1856;
    char buf_1856[128];
    snprintf(buf_1856, sizeof(buf_1856), "function_%d: %d, %f, %s", 1856, local_1856, local_1856_d, param_c ? param_c : "null");
    return local_1856 + (int)local_1856_d;
}

typedef struct {
    int field_1857;
    long field_1857_b;
    double field_1857_c;
    char name_1857[64];
} StructType1857;

int function_1857(StructType1857 *s, int param_a, double param_b, const char *param_c) {
    int local_1857 = param_a * 1857;
    double local_1857_d = param_b * 1857;
    char buf_1857[128];
    snprintf(buf_1857, sizeof(buf_1857), "function_%d: %d, %f, %s", 1857, local_1857, local_1857_d, param_c ? param_c : "null");
    return local_1857 + (int)local_1857_d;
}

typedef struct {
    int field_1858;
    long field_1858_b;
    double field_1858_c;
    char name_1858[64];
} StructType1858;

int function_1858(StructType1858 *s, int param_a, double param_b, const char *param_c) {
    int local_1858 = param_a * 1858;
    double local_1858_d = param_b * 1858;
    char buf_1858[128];
    snprintf(buf_1858, sizeof(buf_1858), "function_%d: %d, %f, %s", 1858, local_1858, local_1858_d, param_c ? param_c : "null");
    return local_1858 + (int)local_1858_d;
}

typedef struct {
    int field_1859;
    long field_1859_b;
    double field_1859_c;
    char name_1859[64];
} StructType1859;

int function_1859(StructType1859 *s, int param_a, double param_b, const char *param_c) {
    int local_1859 = param_a * 1859;
    double local_1859_d = param_b * 1859;
    char buf_1859[128];
    snprintf(buf_1859, sizeof(buf_1859), "function_%d: %d, %f, %s", 1859, local_1859, local_1859_d, param_c ? param_c : "null");
    return local_1859 + (int)local_1859_d;
}

typedef struct {
    int field_1860;
    long field_1860_b;
    double field_1860_c;
    char name_1860[64];
} StructType1860;

int function_1860(StructType1860 *s, int param_a, double param_b, const char *param_c) {
    int local_1860 = param_a * 1860;
    double local_1860_d = param_b * 1860;
    char buf_1860[128];
    snprintf(buf_1860, sizeof(buf_1860), "function_%d: %d, %f, %s", 1860, local_1860, local_1860_d, param_c ? param_c : "null");
    return local_1860 + (int)local_1860_d;
}

typedef struct {
    int field_1861;
    long field_1861_b;
    double field_1861_c;
    char name_1861[64];
} StructType1861;

int function_1861(StructType1861 *s, int param_a, double param_b, const char *param_c) {
    int local_1861 = param_a * 1861;
    double local_1861_d = param_b * 1861;
    char buf_1861[128];
    snprintf(buf_1861, sizeof(buf_1861), "function_%d: %d, %f, %s", 1861, local_1861, local_1861_d, param_c ? param_c : "null");
    return local_1861 + (int)local_1861_d;
}

typedef struct {
    int field_1862;
    long field_1862_b;
    double field_1862_c;
    char name_1862[64];
} StructType1862;

int function_1862(StructType1862 *s, int param_a, double param_b, const char *param_c) {
    int local_1862 = param_a * 1862;
    double local_1862_d = param_b * 1862;
    char buf_1862[128];
    snprintf(buf_1862, sizeof(buf_1862), "function_%d: %d, %f, %s", 1862, local_1862, local_1862_d, param_c ? param_c : "null");
    return local_1862 + (int)local_1862_d;
}

typedef struct {
    int field_1863;
    long field_1863_b;
    double field_1863_c;
    char name_1863[64];
} StructType1863;

int function_1863(StructType1863 *s, int param_a, double param_b, const char *param_c) {
    int local_1863 = param_a * 1863;
    double local_1863_d = param_b * 1863;
    char buf_1863[128];
    snprintf(buf_1863, sizeof(buf_1863), "function_%d: %d, %f, %s", 1863, local_1863, local_1863_d, param_c ? param_c : "null");
    return local_1863 + (int)local_1863_d;
}

typedef struct {
    int field_1864;
    long field_1864_b;
    double field_1864_c;
    char name_1864[64];
} StructType1864;

int function_1864(StructType1864 *s, int param_a, double param_b, const char *param_c) {
    int local_1864 = param_a * 1864;
    double local_1864_d = param_b * 1864;
    char buf_1864[128];
    snprintf(buf_1864, sizeof(buf_1864), "function_%d: %d, %f, %s", 1864, local_1864, local_1864_d, param_c ? param_c : "null");
    return local_1864 + (int)local_1864_d;
}

typedef struct {
    int field_1865;
    long field_1865_b;
    double field_1865_c;
    char name_1865[64];
} StructType1865;

int function_1865(StructType1865 *s, int param_a, double param_b, const char *param_c) {
    int local_1865 = param_a * 1865;
    double local_1865_d = param_b * 1865;
    char buf_1865[128];
    snprintf(buf_1865, sizeof(buf_1865), "function_%d: %d, %f, %s", 1865, local_1865, local_1865_d, param_c ? param_c : "null");
    return local_1865 + (int)local_1865_d;
}

typedef struct {
    int field_1866;
    long field_1866_b;
    double field_1866_c;
    char name_1866[64];
} StructType1866;

int function_1866(StructType1866 *s, int param_a, double param_b, const char *param_c) {
    int local_1866 = param_a * 1866;
    double local_1866_d = param_b * 1866;
    char buf_1866[128];
    snprintf(buf_1866, sizeof(buf_1866), "function_%d: %d, %f, %s", 1866, local_1866, local_1866_d, param_c ? param_c : "null");
    return local_1866 + (int)local_1866_d;
}

typedef struct {
    int field_1867;
    long field_1867_b;
    double field_1867_c;
    char name_1867[64];
} StructType1867;

int function_1867(StructType1867 *s, int param_a, double param_b, const char *param_c) {
    int local_1867 = param_a * 1867;
    double local_1867_d = param_b * 1867;
    char buf_1867[128];
    snprintf(buf_1867, sizeof(buf_1867), "function_%d: %d, %f, %s", 1867, local_1867, local_1867_d, param_c ? param_c : "null");
    return local_1867 + (int)local_1867_d;
}

typedef struct {
    int field_1868;
    long field_1868_b;
    double field_1868_c;
    char name_1868[64];
} StructType1868;

int function_1868(StructType1868 *s, int param_a, double param_b, const char *param_c) {
    int local_1868 = param_a * 1868;
    double local_1868_d = param_b * 1868;
    char buf_1868[128];
    snprintf(buf_1868, sizeof(buf_1868), "function_%d: %d, %f, %s", 1868, local_1868, local_1868_d, param_c ? param_c : "null");
    return local_1868 + (int)local_1868_d;
}

typedef struct {
    int field_1869;
    long field_1869_b;
    double field_1869_c;
    char name_1869[64];
} StructType1869;

int function_1869(StructType1869 *s, int param_a, double param_b, const char *param_c) {
    int local_1869 = param_a * 1869;
    double local_1869_d = param_b * 1869;
    char buf_1869[128];
    snprintf(buf_1869, sizeof(buf_1869), "function_%d: %d, %f, %s", 1869, local_1869, local_1869_d, param_c ? param_c : "null");
    return local_1869 + (int)local_1869_d;
}

typedef struct {
    int field_1870;
    long field_1870_b;
    double field_1870_c;
    char name_1870[64];
} StructType1870;

int function_1870(StructType1870 *s, int param_a, double param_b, const char *param_c) {
    int local_1870 = param_a * 1870;
    double local_1870_d = param_b * 1870;
    char buf_1870[128];
    snprintf(buf_1870, sizeof(buf_1870), "function_%d: %d, %f, %s", 1870, local_1870, local_1870_d, param_c ? param_c : "null");
    return local_1870 + (int)local_1870_d;
}

typedef struct {
    int field_1871;
    long field_1871_b;
    double field_1871_c;
    char name_1871[64];
} StructType1871;

int function_1871(StructType1871 *s, int param_a, double param_b, const char *param_c) {
    int local_1871 = param_a * 1871;
    double local_1871_d = param_b * 1871;
    char buf_1871[128];
    snprintf(buf_1871, sizeof(buf_1871), "function_%d: %d, %f, %s", 1871, local_1871, local_1871_d, param_c ? param_c : "null");
    return local_1871 + (int)local_1871_d;
}

typedef struct {
    int field_1872;
    long field_1872_b;
    double field_1872_c;
    char name_1872[64];
} StructType1872;

int function_1872(StructType1872 *s, int param_a, double param_b, const char *param_c) {
    int local_1872 = param_a * 1872;
    double local_1872_d = param_b * 1872;
    char buf_1872[128];
    snprintf(buf_1872, sizeof(buf_1872), "function_%d: %d, %f, %s", 1872, local_1872, local_1872_d, param_c ? param_c : "null");
    return local_1872 + (int)local_1872_d;
}

typedef struct {
    int field_1873;
    long field_1873_b;
    double field_1873_c;
    char name_1873[64];
} StructType1873;

int function_1873(StructType1873 *s, int param_a, double param_b, const char *param_c) {
    int local_1873 = param_a * 1873;
    double local_1873_d = param_b * 1873;
    char buf_1873[128];
    snprintf(buf_1873, sizeof(buf_1873), "function_%d: %d, %f, %s", 1873, local_1873, local_1873_d, param_c ? param_c : "null");
    return local_1873 + (int)local_1873_d;
}

typedef struct {
    int field_1874;
    long field_1874_b;
    double field_1874_c;
    char name_1874[64];
} StructType1874;

int function_1874(StructType1874 *s, int param_a, double param_b, const char *param_c) {
    int local_1874 = param_a * 1874;
    double local_1874_d = param_b * 1874;
    char buf_1874[128];
    snprintf(buf_1874, sizeof(buf_1874), "function_%d: %d, %f, %s", 1874, local_1874, local_1874_d, param_c ? param_c : "null");
    return local_1874 + (int)local_1874_d;
}

typedef struct {
    int field_1875;
    long field_1875_b;
    double field_1875_c;
    char name_1875[64];
} StructType1875;

int function_1875(StructType1875 *s, int param_a, double param_b, const char *param_c) {
    int local_1875 = param_a * 1875;
    double local_1875_d = param_b * 1875;
    char buf_1875[128];
    snprintf(buf_1875, sizeof(buf_1875), "function_%d: %d, %f, %s", 1875, local_1875, local_1875_d, param_c ? param_c : "null");
    return local_1875 + (int)local_1875_d;
}

typedef struct {
    int field_1876;
    long field_1876_b;
    double field_1876_c;
    char name_1876[64];
} StructType1876;

int function_1876(StructType1876 *s, int param_a, double param_b, const char *param_c) {
    int local_1876 = param_a * 1876;
    double local_1876_d = param_b * 1876;
    char buf_1876[128];
    snprintf(buf_1876, sizeof(buf_1876), "function_%d: %d, %f, %s", 1876, local_1876, local_1876_d, param_c ? param_c : "null");
    return local_1876 + (int)local_1876_d;
}

typedef struct {
    int field_1877;
    long field_1877_b;
    double field_1877_c;
    char name_1877[64];
} StructType1877;

int function_1877(StructType1877 *s, int param_a, double param_b, const char *param_c) {
    int local_1877 = param_a * 1877;
    double local_1877_d = param_b * 1877;
    char buf_1877[128];
    snprintf(buf_1877, sizeof(buf_1877), "function_%d: %d, %f, %s", 1877, local_1877, local_1877_d, param_c ? param_c : "null");
    return local_1877 + (int)local_1877_d;
}

typedef struct {
    int field_1878;
    long field_1878_b;
    double field_1878_c;
    char name_1878[64];
} StructType1878;

int function_1878(StructType1878 *s, int param_a, double param_b, const char *param_c) {
    int local_1878 = param_a * 1878;
    double local_1878_d = param_b * 1878;
    char buf_1878[128];
    snprintf(buf_1878, sizeof(buf_1878), "function_%d: %d, %f, %s", 1878, local_1878, local_1878_d, param_c ? param_c : "null");
    return local_1878 + (int)local_1878_d;
}

typedef struct {
    int field_1879;
    long field_1879_b;
    double field_1879_c;
    char name_1879[64];
} StructType1879;

int function_1879(StructType1879 *s, int param_a, double param_b, const char *param_c) {
    int local_1879 = param_a * 1879;
    double local_1879_d = param_b * 1879;
    char buf_1879[128];
    snprintf(buf_1879, sizeof(buf_1879), "function_%d: %d, %f, %s", 1879, local_1879, local_1879_d, param_c ? param_c : "null");
    return local_1879 + (int)local_1879_d;
}

typedef struct {
    int field_1880;
    long field_1880_b;
    double field_1880_c;
    char name_1880[64];
} StructType1880;

int function_1880(StructType1880 *s, int param_a, double param_b, const char *param_c) {
    int local_1880 = param_a * 1880;
    double local_1880_d = param_b * 1880;
    char buf_1880[128];
    snprintf(buf_1880, sizeof(buf_1880), "function_%d: %d, %f, %s", 1880, local_1880, local_1880_d, param_c ? param_c : "null");
    return local_1880 + (int)local_1880_d;
}

typedef struct {
    int field_1881;
    long field_1881_b;
    double field_1881_c;
    char name_1881[64];
} StructType1881;

int function_1881(StructType1881 *s, int param_a, double param_b, const char *param_c) {
    int local_1881 = param_a * 1881;
    double local_1881_d = param_b * 1881;
    char buf_1881[128];
    snprintf(buf_1881, sizeof(buf_1881), "function_%d: %d, %f, %s", 1881, local_1881, local_1881_d, param_c ? param_c : "null");
    return local_1881 + (int)local_1881_d;
}

typedef struct {
    int field_1882;
    long field_1882_b;
    double field_1882_c;
    char name_1882[64];
} StructType1882;

int function_1882(StructType1882 *s, int param_a, double param_b, const char *param_c) {
    int local_1882 = param_a * 1882;
    double local_1882_d = param_b * 1882;
    char buf_1882[128];
    snprintf(buf_1882, sizeof(buf_1882), "function_%d: %d, %f, %s", 1882, local_1882, local_1882_d, param_c ? param_c : "null");
    return local_1882 + (int)local_1882_d;
}

typedef struct {
    int field_1883;
    long field_1883_b;
    double field_1883_c;
    char name_1883[64];
} StructType1883;

int function_1883(StructType1883 *s, int param_a, double param_b, const char *param_c) {
    int local_1883 = param_a * 1883;
    double local_1883_d = param_b * 1883;
    char buf_1883[128];
    snprintf(buf_1883, sizeof(buf_1883), "function_%d: %d, %f, %s", 1883, local_1883, local_1883_d, param_c ? param_c : "null");
    return local_1883 + (int)local_1883_d;
}

typedef struct {
    int field_1884;
    long field_1884_b;
    double field_1884_c;
    char name_1884[64];
} StructType1884;

int function_1884(StructType1884 *s, int param_a, double param_b, const char *param_c) {
    int local_1884 = param_a * 1884;
    double local_1884_d = param_b * 1884;
    char buf_1884[128];
    snprintf(buf_1884, sizeof(buf_1884), "function_%d: %d, %f, %s", 1884, local_1884, local_1884_d, param_c ? param_c : "null");
    return local_1884 + (int)local_1884_d;
}

typedef struct {
    int field_1885;
    long field_1885_b;
    double field_1885_c;
    char name_1885[64];
} StructType1885;

int function_1885(StructType1885 *s, int param_a, double param_b, const char *param_c) {
    int local_1885 = param_a * 1885;
    double local_1885_d = param_b * 1885;
    char buf_1885[128];
    snprintf(buf_1885, sizeof(buf_1885), "function_%d: %d, %f, %s", 1885, local_1885, local_1885_d, param_c ? param_c : "null");
    return local_1885 + (int)local_1885_d;
}

typedef struct {
    int field_1886;
    long field_1886_b;
    double field_1886_c;
    char name_1886[64];
} StructType1886;

int function_1886(StructType1886 *s, int param_a, double param_b, const char *param_c) {
    int local_1886 = param_a * 1886;
    double local_1886_d = param_b * 1886;
    char buf_1886[128];
    snprintf(buf_1886, sizeof(buf_1886), "function_%d: %d, %f, %s", 1886, local_1886, local_1886_d, param_c ? param_c : "null");
    return local_1886 + (int)local_1886_d;
}

typedef struct {
    int field_1887;
    long field_1887_b;
    double field_1887_c;
    char name_1887[64];
} StructType1887;

int function_1887(StructType1887 *s, int param_a, double param_b, const char *param_c) {
    int local_1887 = param_a * 1887;
    double local_1887_d = param_b * 1887;
    char buf_1887[128];
    snprintf(buf_1887, sizeof(buf_1887), "function_%d: %d, %f, %s", 1887, local_1887, local_1887_d, param_c ? param_c : "null");
    return local_1887 + (int)local_1887_d;
}

typedef struct {
    int field_1888;
    long field_1888_b;
    double field_1888_c;
    char name_1888[64];
} StructType1888;

int function_1888(StructType1888 *s, int param_a, double param_b, const char *param_c) {
    int local_1888 = param_a * 1888;
    double local_1888_d = param_b * 1888;
    char buf_1888[128];
    snprintf(buf_1888, sizeof(buf_1888), "function_%d: %d, %f, %s", 1888, local_1888, local_1888_d, param_c ? param_c : "null");
    return local_1888 + (int)local_1888_d;
}

typedef struct {
    int field_1889;
    long field_1889_b;
    double field_1889_c;
    char name_1889[64];
} StructType1889;

int function_1889(StructType1889 *s, int param_a, double param_b, const char *param_c) {
    int local_1889 = param_a * 1889;
    double local_1889_d = param_b * 1889;
    char buf_1889[128];
    snprintf(buf_1889, sizeof(buf_1889), "function_%d: %d, %f, %s", 1889, local_1889, local_1889_d, param_c ? param_c : "null");
    return local_1889 + (int)local_1889_d;
}

typedef struct {
    int field_1890;
    long field_1890_b;
    double field_1890_c;
    char name_1890[64];
} StructType1890;

int function_1890(StructType1890 *s, int param_a, double param_b, const char *param_c) {
    int local_1890 = param_a * 1890;
    double local_1890_d = param_b * 1890;
    char buf_1890[128];
    snprintf(buf_1890, sizeof(buf_1890), "function_%d: %d, %f, %s", 1890, local_1890, local_1890_d, param_c ? param_c : "null");
    return local_1890 + (int)local_1890_d;
}

typedef struct {
    int field_1891;
    long field_1891_b;
    double field_1891_c;
    char name_1891[64];
} StructType1891;

int function_1891(StructType1891 *s, int param_a, double param_b, const char *param_c) {
    int local_1891 = param_a * 1891;
    double local_1891_d = param_b * 1891;
    char buf_1891[128];
    snprintf(buf_1891, sizeof(buf_1891), "function_%d: %d, %f, %s", 1891, local_1891, local_1891_d, param_c ? param_c : "null");
    return local_1891 + (int)local_1891_d;
}

typedef struct {
    int field_1892;
    long field_1892_b;
    double field_1892_c;
    char name_1892[64];
} StructType1892;

int function_1892(StructType1892 *s, int param_a, double param_b, const char *param_c) {
    int local_1892 = param_a * 1892;
    double local_1892_d = param_b * 1892;
    char buf_1892[128];
    snprintf(buf_1892, sizeof(buf_1892), "function_%d: %d, %f, %s", 1892, local_1892, local_1892_d, param_c ? param_c : "null");
    return local_1892 + (int)local_1892_d;
}

typedef struct {
    int field_1893;
    long field_1893_b;
    double field_1893_c;
    char name_1893[64];
} StructType1893;

int function_1893(StructType1893 *s, int param_a, double param_b, const char *param_c) {
    int local_1893 = param_a * 1893;
    double local_1893_d = param_b * 1893;
    char buf_1893[128];
    snprintf(buf_1893, sizeof(buf_1893), "function_%d: %d, %f, %s", 1893, local_1893, local_1893_d, param_c ? param_c : "null");
    return local_1893 + (int)local_1893_d;
}

typedef struct {
    int field_1894;
    long field_1894_b;
    double field_1894_c;
    char name_1894[64];
} StructType1894;

int function_1894(StructType1894 *s, int param_a, double param_b, const char *param_c) {
    int local_1894 = param_a * 1894;
    double local_1894_d = param_b * 1894;
    char buf_1894[128];
    snprintf(buf_1894, sizeof(buf_1894), "function_%d: %d, %f, %s", 1894, local_1894, local_1894_d, param_c ? param_c : "null");
    return local_1894 + (int)local_1894_d;
}

typedef struct {
    int field_1895;
    long field_1895_b;
    double field_1895_c;
    char name_1895[64];
} StructType1895;

int function_1895(StructType1895 *s, int param_a, double param_b, const char *param_c) {
    int local_1895 = param_a * 1895;
    double local_1895_d = param_b * 1895;
    char buf_1895[128];
    snprintf(buf_1895, sizeof(buf_1895), "function_%d: %d, %f, %s", 1895, local_1895, local_1895_d, param_c ? param_c : "null");
    return local_1895 + (int)local_1895_d;
}

typedef struct {
    int field_1896;
    long field_1896_b;
    double field_1896_c;
    char name_1896[64];
} StructType1896;

int function_1896(StructType1896 *s, int param_a, double param_b, const char *param_c) {
    int local_1896 = param_a * 1896;
    double local_1896_d = param_b * 1896;
    char buf_1896[128];
    snprintf(buf_1896, sizeof(buf_1896), "function_%d: %d, %f, %s", 1896, local_1896, local_1896_d, param_c ? param_c : "null");
    return local_1896 + (int)local_1896_d;
}

typedef struct {
    int field_1897;
    long field_1897_b;
    double field_1897_c;
    char name_1897[64];
} StructType1897;

int function_1897(StructType1897 *s, int param_a, double param_b, const char *param_c) {
    int local_1897 = param_a * 1897;
    double local_1897_d = param_b * 1897;
    char buf_1897[128];
    snprintf(buf_1897, sizeof(buf_1897), "function_%d: %d, %f, %s", 1897, local_1897, local_1897_d, param_c ? param_c : "null");
    return local_1897 + (int)local_1897_d;
}

typedef struct {
    int field_1898;
    long field_1898_b;
    double field_1898_c;
    char name_1898[64];
} StructType1898;

int function_1898(StructType1898 *s, int param_a, double param_b, const char *param_c) {
    int local_1898 = param_a * 1898;
    double local_1898_d = param_b * 1898;
    char buf_1898[128];
    snprintf(buf_1898, sizeof(buf_1898), "function_%d: %d, %f, %s", 1898, local_1898, local_1898_d, param_c ? param_c : "null");
    return local_1898 + (int)local_1898_d;
}

typedef struct {
    int field_1899;
    long field_1899_b;
    double field_1899_c;
    char name_1899[64];
} StructType1899;

int function_1899(StructType1899 *s, int param_a, double param_b, const char *param_c) {
    int local_1899 = param_a * 1899;
    double local_1899_d = param_b * 1899;
    char buf_1899[128];
    snprintf(buf_1899, sizeof(buf_1899), "function_%d: %d, %f, %s", 1899, local_1899, local_1899_d, param_c ? param_c : "null");
    return local_1899 + (int)local_1899_d;
}

typedef struct {
    int field_1900;
    long field_1900_b;
    double field_1900_c;
    char name_1900[64];
} StructType1900;

int function_1900(StructType1900 *s, int param_a, double param_b, const char *param_c) {
    int local_1900 = param_a * 1900;
    double local_1900_d = param_b * 1900;
    char buf_1900[128];
    snprintf(buf_1900, sizeof(buf_1900), "function_%d: %d, %f, %s", 1900, local_1900, local_1900_d, param_c ? param_c : "null");
    return local_1900 + (int)local_1900_d;
}

typedef struct {
    int field_1901;
    long field_1901_b;
    double field_1901_c;
    char name_1901[64];
} StructType1901;

int function_1901(StructType1901 *s, int param_a, double param_b, const char *param_c) {
    int local_1901 = param_a * 1901;
    double local_1901_d = param_b * 1901;
    char buf_1901[128];
    snprintf(buf_1901, sizeof(buf_1901), "function_%d: %d, %f, %s", 1901, local_1901, local_1901_d, param_c ? param_c : "null");
    return local_1901 + (int)local_1901_d;
}

typedef struct {
    int field_1902;
    long field_1902_b;
    double field_1902_c;
    char name_1902[64];
} StructType1902;

int function_1902(StructType1902 *s, int param_a, double param_b, const char *param_c) {
    int local_1902 = param_a * 1902;
    double local_1902_d = param_b * 1902;
    char buf_1902[128];
    snprintf(buf_1902, sizeof(buf_1902), "function_%d: %d, %f, %s", 1902, local_1902, local_1902_d, param_c ? param_c : "null");
    return local_1902 + (int)local_1902_d;
}

typedef struct {
    int field_1903;
    long field_1903_b;
    double field_1903_c;
    char name_1903[64];
} StructType1903;

int function_1903(StructType1903 *s, int param_a, double param_b, const char *param_c) {
    int local_1903 = param_a * 1903;
    double local_1903_d = param_b * 1903;
    char buf_1903[128];
    snprintf(buf_1903, sizeof(buf_1903), "function_%d: %d, %f, %s", 1903, local_1903, local_1903_d, param_c ? param_c : "null");
    return local_1903 + (int)local_1903_d;
}

typedef struct {
    int field_1904;
    long field_1904_b;
    double field_1904_c;
    char name_1904[64];
} StructType1904;

int function_1904(StructType1904 *s, int param_a, double param_b, const char *param_c) {
    int local_1904 = param_a * 1904;
    double local_1904_d = param_b * 1904;
    char buf_1904[128];
    snprintf(buf_1904, sizeof(buf_1904), "function_%d: %d, %f, %s", 1904, local_1904, local_1904_d, param_c ? param_c : "null");
    return local_1904 + (int)local_1904_d;
}

typedef struct {
    int field_1905;
    long field_1905_b;
    double field_1905_c;
    char name_1905[64];
} StructType1905;

int function_1905(StructType1905 *s, int param_a, double param_b, const char *param_c) {
    int local_1905 = param_a * 1905;
    double local_1905_d = param_b * 1905;
    char buf_1905[128];
    snprintf(buf_1905, sizeof(buf_1905), "function_%d: %d, %f, %s", 1905, local_1905, local_1905_d, param_c ? param_c : "null");
    return local_1905 + (int)local_1905_d;
}

typedef struct {
    int field_1906;
    long field_1906_b;
    double field_1906_c;
    char name_1906[64];
} StructType1906;

int function_1906(StructType1906 *s, int param_a, double param_b, const char *param_c) {
    int local_1906 = param_a * 1906;
    double local_1906_d = param_b * 1906;
    char buf_1906[128];
    snprintf(buf_1906, sizeof(buf_1906), "function_%d: %d, %f, %s", 1906, local_1906, local_1906_d, param_c ? param_c : "null");
    return local_1906 + (int)local_1906_d;
}

typedef struct {
    int field_1907;
    long field_1907_b;
    double field_1907_c;
    char name_1907[64];
} StructType1907;

int function_1907(StructType1907 *s, int param_a, double param_b, const char *param_c) {
    int local_1907 = param_a * 1907;
    double local_1907_d = param_b * 1907;
    char buf_1907[128];
    snprintf(buf_1907, sizeof(buf_1907), "function_%d: %d, %f, %s", 1907, local_1907, local_1907_d, param_c ? param_c : "null");
    return local_1907 + (int)local_1907_d;
}

typedef struct {
    int field_1908;
    long field_1908_b;
    double field_1908_c;
    char name_1908[64];
} StructType1908;

int function_1908(StructType1908 *s, int param_a, double param_b, const char *param_c) {
    int local_1908 = param_a * 1908;
    double local_1908_d = param_b * 1908;
    char buf_1908[128];
    snprintf(buf_1908, sizeof(buf_1908), "function_%d: %d, %f, %s", 1908, local_1908, local_1908_d, param_c ? param_c : "null");
    return local_1908 + (int)local_1908_d;
}

typedef struct {
    int field_1909;
    long field_1909_b;
    double field_1909_c;
    char name_1909[64];
} StructType1909;

int function_1909(StructType1909 *s, int param_a, double param_b, const char *param_c) {
    int local_1909 = param_a * 1909;
    double local_1909_d = param_b * 1909;
    char buf_1909[128];
    snprintf(buf_1909, sizeof(buf_1909), "function_%d: %d, %f, %s", 1909, local_1909, local_1909_d, param_c ? param_c : "null");
    return local_1909 + (int)local_1909_d;
}

typedef struct {
    int field_1910;
    long field_1910_b;
    double field_1910_c;
    char name_1910[64];
} StructType1910;

int function_1910(StructType1910 *s, int param_a, double param_b, const char *param_c) {
    int local_1910 = param_a * 1910;
    double local_1910_d = param_b * 1910;
    char buf_1910[128];
    snprintf(buf_1910, sizeof(buf_1910), "function_%d: %d, %f, %s", 1910, local_1910, local_1910_d, param_c ? param_c : "null");
    return local_1910 + (int)local_1910_d;
}

typedef struct {
    int field_1911;
    long field_1911_b;
    double field_1911_c;
    char name_1911[64];
} StructType1911;

int function_1911(StructType1911 *s, int param_a, double param_b, const char *param_c) {
    int local_1911 = param_a * 1911;
    double local_1911_d = param_b * 1911;
    char buf_1911[128];
    snprintf(buf_1911, sizeof(buf_1911), "function_%d: %d, %f, %s", 1911, local_1911, local_1911_d, param_c ? param_c : "null");
    return local_1911 + (int)local_1911_d;
}

typedef struct {
    int field_1912;
    long field_1912_b;
    double field_1912_c;
    char name_1912[64];
} StructType1912;

int function_1912(StructType1912 *s, int param_a, double param_b, const char *param_c) {
    int local_1912 = param_a * 1912;
    double local_1912_d = param_b * 1912;
    char buf_1912[128];
    snprintf(buf_1912, sizeof(buf_1912), "function_%d: %d, %f, %s", 1912, local_1912, local_1912_d, param_c ? param_c : "null");
    return local_1912 + (int)local_1912_d;
}

typedef struct {
    int field_1913;
    long field_1913_b;
    double field_1913_c;
    char name_1913[64];
} StructType1913;

int function_1913(StructType1913 *s, int param_a, double param_b, const char *param_c) {
    int local_1913 = param_a * 1913;
    double local_1913_d = param_b * 1913;
    char buf_1913[128];
    snprintf(buf_1913, sizeof(buf_1913), "function_%d: %d, %f, %s", 1913, local_1913, local_1913_d, param_c ? param_c : "null");
    return local_1913 + (int)local_1913_d;
}

typedef struct {
    int field_1914;
    long field_1914_b;
    double field_1914_c;
    char name_1914[64];
} StructType1914;

int function_1914(StructType1914 *s, int param_a, double param_b, const char *param_c) {
    int local_1914 = param_a * 1914;
    double local_1914_d = param_b * 1914;
    char buf_1914[128];
    snprintf(buf_1914, sizeof(buf_1914), "function_%d: %d, %f, %s", 1914, local_1914, local_1914_d, param_c ? param_c : "null");
    return local_1914 + (int)local_1914_d;
}

typedef struct {
    int field_1915;
    long field_1915_b;
    double field_1915_c;
    char name_1915[64];
} StructType1915;

int function_1915(StructType1915 *s, int param_a, double param_b, const char *param_c) {
    int local_1915 = param_a * 1915;
    double local_1915_d = param_b * 1915;
    char buf_1915[128];
    snprintf(buf_1915, sizeof(buf_1915), "function_%d: %d, %f, %s", 1915, local_1915, local_1915_d, param_c ? param_c : "null");
    return local_1915 + (int)local_1915_d;
}

typedef struct {
    int field_1916;
    long field_1916_b;
    double field_1916_c;
    char name_1916[64];
} StructType1916;

int function_1916(StructType1916 *s, int param_a, double param_b, const char *param_c) {
    int local_1916 = param_a * 1916;
    double local_1916_d = param_b * 1916;
    char buf_1916[128];
    snprintf(buf_1916, sizeof(buf_1916), "function_%d: %d, %f, %s", 1916, local_1916, local_1916_d, param_c ? param_c : "null");
    return local_1916 + (int)local_1916_d;
}

typedef struct {
    int field_1917;
    long field_1917_b;
    double field_1917_c;
    char name_1917[64];
} StructType1917;

int function_1917(StructType1917 *s, int param_a, double param_b, const char *param_c) {
    int local_1917 = param_a * 1917;
    double local_1917_d = param_b * 1917;
    char buf_1917[128];
    snprintf(buf_1917, sizeof(buf_1917), "function_%d: %d, %f, %s", 1917, local_1917, local_1917_d, param_c ? param_c : "null");
    return local_1917 + (int)local_1917_d;
}

typedef struct {
    int field_1918;
    long field_1918_b;
    double field_1918_c;
    char name_1918[64];
} StructType1918;

int function_1918(StructType1918 *s, int param_a, double param_b, const char *param_c) {
    int local_1918 = param_a * 1918;
    double local_1918_d = param_b * 1918;
    char buf_1918[128];
    snprintf(buf_1918, sizeof(buf_1918), "function_%d: %d, %f, %s", 1918, local_1918, local_1918_d, param_c ? param_c : "null");
    return local_1918 + (int)local_1918_d;
}

typedef struct {
    int field_1919;
    long field_1919_b;
    double field_1919_c;
    char name_1919[64];
} StructType1919;

int function_1919(StructType1919 *s, int param_a, double param_b, const char *param_c) {
    int local_1919 = param_a * 1919;
    double local_1919_d = param_b * 1919;
    char buf_1919[128];
    snprintf(buf_1919, sizeof(buf_1919), "function_%d: %d, %f, %s", 1919, local_1919, local_1919_d, param_c ? param_c : "null");
    return local_1919 + (int)local_1919_d;
}

typedef struct {
    int field_1920;
    long field_1920_b;
    double field_1920_c;
    char name_1920[64];
} StructType1920;

int function_1920(StructType1920 *s, int param_a, double param_b, const char *param_c) {
    int local_1920 = param_a * 1920;
    double local_1920_d = param_b * 1920;
    char buf_1920[128];
    snprintf(buf_1920, sizeof(buf_1920), "function_%d: %d, %f, %s", 1920, local_1920, local_1920_d, param_c ? param_c : "null");
    return local_1920 + (int)local_1920_d;
}

typedef struct {
    int field_1921;
    long field_1921_b;
    double field_1921_c;
    char name_1921[64];
} StructType1921;

int function_1921(StructType1921 *s, int param_a, double param_b, const char *param_c) {
    int local_1921 = param_a * 1921;
    double local_1921_d = param_b * 1921;
    char buf_1921[128];
    snprintf(buf_1921, sizeof(buf_1921), "function_%d: %d, %f, %s", 1921, local_1921, local_1921_d, param_c ? param_c : "null");
    return local_1921 + (int)local_1921_d;
}

typedef struct {
    int field_1922;
    long field_1922_b;
    double field_1922_c;
    char name_1922[64];
} StructType1922;

int function_1922(StructType1922 *s, int param_a, double param_b, const char *param_c) {
    int local_1922 = param_a * 1922;
    double local_1922_d = param_b * 1922;
    char buf_1922[128];
    snprintf(buf_1922, sizeof(buf_1922), "function_%d: %d, %f, %s", 1922, local_1922, local_1922_d, param_c ? param_c : "null");
    return local_1922 + (int)local_1922_d;
}

typedef struct {
    int field_1923;
    long field_1923_b;
    double field_1923_c;
    char name_1923[64];
} StructType1923;

int function_1923(StructType1923 *s, int param_a, double param_b, const char *param_c) {
    int local_1923 = param_a * 1923;
    double local_1923_d = param_b * 1923;
    char buf_1923[128];
    snprintf(buf_1923, sizeof(buf_1923), "function_%d: %d, %f, %s", 1923, local_1923, local_1923_d, param_c ? param_c : "null");
    return local_1923 + (int)local_1923_d;
}

typedef struct {
    int field_1924;
    long field_1924_b;
    double field_1924_c;
    char name_1924[64];
} StructType1924;

int function_1924(StructType1924 *s, int param_a, double param_b, const char *param_c) {
    int local_1924 = param_a * 1924;
    double local_1924_d = param_b * 1924;
    char buf_1924[128];
    snprintf(buf_1924, sizeof(buf_1924), "function_%d: %d, %f, %s", 1924, local_1924, local_1924_d, param_c ? param_c : "null");
    return local_1924 + (int)local_1924_d;
}

typedef struct {
    int field_1925;
    long field_1925_b;
    double field_1925_c;
    char name_1925[64];
} StructType1925;

int function_1925(StructType1925 *s, int param_a, double param_b, const char *param_c) {
    int local_1925 = param_a * 1925;
    double local_1925_d = param_b * 1925;
    char buf_1925[128];
    snprintf(buf_1925, sizeof(buf_1925), "function_%d: %d, %f, %s", 1925, local_1925, local_1925_d, param_c ? param_c : "null");
    return local_1925 + (int)local_1925_d;
}

typedef struct {
    int field_1926;
    long field_1926_b;
    double field_1926_c;
    char name_1926[64];
} StructType1926;

int function_1926(StructType1926 *s, int param_a, double param_b, const char *param_c) {
    int local_1926 = param_a * 1926;
    double local_1926_d = param_b * 1926;
    char buf_1926[128];
    snprintf(buf_1926, sizeof(buf_1926), "function_%d: %d, %f, %s", 1926, local_1926, local_1926_d, param_c ? param_c : "null");
    return local_1926 + (int)local_1926_d;
}

typedef struct {
    int field_1927;
    long field_1927_b;
    double field_1927_c;
    char name_1927[64];
} StructType1927;

int function_1927(StructType1927 *s, int param_a, double param_b, const char *param_c) {
    int local_1927 = param_a * 1927;
    double local_1927_d = param_b * 1927;
    char buf_1927[128];
    snprintf(buf_1927, sizeof(buf_1927), "function_%d: %d, %f, %s", 1927, local_1927, local_1927_d, param_c ? param_c : "null");
    return local_1927 + (int)local_1927_d;
}

typedef struct {
    int field_1928;
    long field_1928_b;
    double field_1928_c;
    char name_1928[64];
} StructType1928;

int function_1928(StructType1928 *s, int param_a, double param_b, const char *param_c) {
    int local_1928 = param_a * 1928;
    double local_1928_d = param_b * 1928;
    char buf_1928[128];
    snprintf(buf_1928, sizeof(buf_1928), "function_%d: %d, %f, %s", 1928, local_1928, local_1928_d, param_c ? param_c : "null");
    return local_1928 + (int)local_1928_d;
}

typedef struct {
    int field_1929;
    long field_1929_b;
    double field_1929_c;
    char name_1929[64];
} StructType1929;

int function_1929(StructType1929 *s, int param_a, double param_b, const char *param_c) {
    int local_1929 = param_a * 1929;
    double local_1929_d = param_b * 1929;
    char buf_1929[128];
    snprintf(buf_1929, sizeof(buf_1929), "function_%d: %d, %f, %s", 1929, local_1929, local_1929_d, param_c ? param_c : "null");
    return local_1929 + (int)local_1929_d;
}

typedef struct {
    int field_1930;
    long field_1930_b;
    double field_1930_c;
    char name_1930[64];
} StructType1930;

int function_1930(StructType1930 *s, int param_a, double param_b, const char *param_c) {
    int local_1930 = param_a * 1930;
    double local_1930_d = param_b * 1930;
    char buf_1930[128];
    snprintf(buf_1930, sizeof(buf_1930), "function_%d: %d, %f, %s", 1930, local_1930, local_1930_d, param_c ? param_c : "null");
    return local_1930 + (int)local_1930_d;
}

typedef struct {
    int field_1931;
    long field_1931_b;
    double field_1931_c;
    char name_1931[64];
} StructType1931;

int function_1931(StructType1931 *s, int param_a, double param_b, const char *param_c) {
    int local_1931 = param_a * 1931;
    double local_1931_d = param_b * 1931;
    char buf_1931[128];
    snprintf(buf_1931, sizeof(buf_1931), "function_%d: %d, %f, %s", 1931, local_1931, local_1931_d, param_c ? param_c : "null");
    return local_1931 + (int)local_1931_d;
}

typedef struct {
    int field_1932;
    long field_1932_b;
    double field_1932_c;
    char name_1932[64];
} StructType1932;

int function_1932(StructType1932 *s, int param_a, double param_b, const char *param_c) {
    int local_1932 = param_a * 1932;
    double local_1932_d = param_b * 1932;
    char buf_1932[128];
    snprintf(buf_1932, sizeof(buf_1932), "function_%d: %d, %f, %s", 1932, local_1932, local_1932_d, param_c ? param_c : "null");
    return local_1932 + (int)local_1932_d;
}

typedef struct {
    int field_1933;
    long field_1933_b;
    double field_1933_c;
    char name_1933[64];
} StructType1933;

int function_1933(StructType1933 *s, int param_a, double param_b, const char *param_c) {
    int local_1933 = param_a * 1933;
    double local_1933_d = param_b * 1933;
    char buf_1933[128];
    snprintf(buf_1933, sizeof(buf_1933), "function_%d: %d, %f, %s", 1933, local_1933, local_1933_d, param_c ? param_c : "null");
    return local_1933 + (int)local_1933_d;
}

typedef struct {
    int field_1934;
    long field_1934_b;
    double field_1934_c;
    char name_1934[64];
} StructType1934;

int function_1934(StructType1934 *s, int param_a, double param_b, const char *param_c) {
    int local_1934 = param_a * 1934;
    double local_1934_d = param_b * 1934;
    char buf_1934[128];
    snprintf(buf_1934, sizeof(buf_1934), "function_%d: %d, %f, %s", 1934, local_1934, local_1934_d, param_c ? param_c : "null");
    return local_1934 + (int)local_1934_d;
}

typedef struct {
    int field_1935;
    long field_1935_b;
    double field_1935_c;
    char name_1935[64];
} StructType1935;

int function_1935(StructType1935 *s, int param_a, double param_b, const char *param_c) {
    int local_1935 = param_a * 1935;
    double local_1935_d = param_b * 1935;
    char buf_1935[128];
    snprintf(buf_1935, sizeof(buf_1935), "function_%d: %d, %f, %s", 1935, local_1935, local_1935_d, param_c ? param_c : "null");
    return local_1935 + (int)local_1935_d;
}

typedef struct {
    int field_1936;
    long field_1936_b;
    double field_1936_c;
    char name_1936[64];
} StructType1936;

int function_1936(StructType1936 *s, int param_a, double param_b, const char *param_c) {
    int local_1936 = param_a * 1936;
    double local_1936_d = param_b * 1936;
    char buf_1936[128];
    snprintf(buf_1936, sizeof(buf_1936), "function_%d: %d, %f, %s", 1936, local_1936, local_1936_d, param_c ? param_c : "null");
    return local_1936 + (int)local_1936_d;
}

typedef struct {
    int field_1937;
    long field_1937_b;
    double field_1937_c;
    char name_1937[64];
} StructType1937;

int function_1937(StructType1937 *s, int param_a, double param_b, const char *param_c) {
    int local_1937 = param_a * 1937;
    double local_1937_d = param_b * 1937;
    char buf_1937[128];
    snprintf(buf_1937, sizeof(buf_1937), "function_%d: %d, %f, %s", 1937, local_1937, local_1937_d, param_c ? param_c : "null");
    return local_1937 + (int)local_1937_d;
}

typedef struct {
    int field_1938;
    long field_1938_b;
    double field_1938_c;
    char name_1938[64];
} StructType1938;

int function_1938(StructType1938 *s, int param_a, double param_b, const char *param_c) {
    int local_1938 = param_a * 1938;
    double local_1938_d = param_b * 1938;
    char buf_1938[128];
    snprintf(buf_1938, sizeof(buf_1938), "function_%d: %d, %f, %s", 1938, local_1938, local_1938_d, param_c ? param_c : "null");
    return local_1938 + (int)local_1938_d;
}

typedef struct {
    int field_1939;
    long field_1939_b;
    double field_1939_c;
    char name_1939[64];
} StructType1939;

int function_1939(StructType1939 *s, int param_a, double param_b, const char *param_c) {
    int local_1939 = param_a * 1939;
    double local_1939_d = param_b * 1939;
    char buf_1939[128];
    snprintf(buf_1939, sizeof(buf_1939), "function_%d: %d, %f, %s", 1939, local_1939, local_1939_d, param_c ? param_c : "null");
    return local_1939 + (int)local_1939_d;
}

typedef struct {
    int field_1940;
    long field_1940_b;
    double field_1940_c;
    char name_1940[64];
} StructType1940;

int function_1940(StructType1940 *s, int param_a, double param_b, const char *param_c) {
    int local_1940 = param_a * 1940;
    double local_1940_d = param_b * 1940;
    char buf_1940[128];
    snprintf(buf_1940, sizeof(buf_1940), "function_%d: %d, %f, %s", 1940, local_1940, local_1940_d, param_c ? param_c : "null");
    return local_1940 + (int)local_1940_d;
}

typedef struct {
    int field_1941;
    long field_1941_b;
    double field_1941_c;
    char name_1941[64];
} StructType1941;

int function_1941(StructType1941 *s, int param_a, double param_b, const char *param_c) {
    int local_1941 = param_a * 1941;
    double local_1941_d = param_b * 1941;
    char buf_1941[128];
    snprintf(buf_1941, sizeof(buf_1941), "function_%d: %d, %f, %s", 1941, local_1941, local_1941_d, param_c ? param_c : "null");
    return local_1941 + (int)local_1941_d;
}

typedef struct {
    int field_1942;
    long field_1942_b;
    double field_1942_c;
    char name_1942[64];
} StructType1942;

int function_1942(StructType1942 *s, int param_a, double param_b, const char *param_c) {
    int local_1942 = param_a * 1942;
    double local_1942_d = param_b * 1942;
    char buf_1942[128];
    snprintf(buf_1942, sizeof(buf_1942), "function_%d: %d, %f, %s", 1942, local_1942, local_1942_d, param_c ? param_c : "null");
    return local_1942 + (int)local_1942_d;
}

typedef struct {
    int field_1943;
    long field_1943_b;
    double field_1943_c;
    char name_1943[64];
} StructType1943;

int function_1943(StructType1943 *s, int param_a, double param_b, const char *param_c) {
    int local_1943 = param_a * 1943;
    double local_1943_d = param_b * 1943;
    char buf_1943[128];
    snprintf(buf_1943, sizeof(buf_1943), "function_%d: %d, %f, %s", 1943, local_1943, local_1943_d, param_c ? param_c : "null");
    return local_1943 + (int)local_1943_d;
}

typedef struct {
    int field_1944;
    long field_1944_b;
    double field_1944_c;
    char name_1944[64];
} StructType1944;

int function_1944(StructType1944 *s, int param_a, double param_b, const char *param_c) {
    int local_1944 = param_a * 1944;
    double local_1944_d = param_b * 1944;
    char buf_1944[128];
    snprintf(buf_1944, sizeof(buf_1944), "function_%d: %d, %f, %s", 1944, local_1944, local_1944_d, param_c ? param_c : "null");
    return local_1944 + (int)local_1944_d;
}

typedef struct {
    int field_1945;
    long field_1945_b;
    double field_1945_c;
    char name_1945[64];
} StructType1945;

int function_1945(StructType1945 *s, int param_a, double param_b, const char *param_c) {
    int local_1945 = param_a * 1945;
    double local_1945_d = param_b * 1945;
    char buf_1945[128];
    snprintf(buf_1945, sizeof(buf_1945), "function_%d: %d, %f, %s", 1945, local_1945, local_1945_d, param_c ? param_c : "null");
    return local_1945 + (int)local_1945_d;
}

typedef struct {
    int field_1946;
    long field_1946_b;
    double field_1946_c;
    char name_1946[64];
} StructType1946;

int function_1946(StructType1946 *s, int param_a, double param_b, const char *param_c) {
    int local_1946 = param_a * 1946;
    double local_1946_d = param_b * 1946;
    char buf_1946[128];
    snprintf(buf_1946, sizeof(buf_1946), "function_%d: %d, %f, %s", 1946, local_1946, local_1946_d, param_c ? param_c : "null");
    return local_1946 + (int)local_1946_d;
}

typedef struct {
    int field_1947;
    long field_1947_b;
    double field_1947_c;
    char name_1947[64];
} StructType1947;

int function_1947(StructType1947 *s, int param_a, double param_b, const char *param_c) {
    int local_1947 = param_a * 1947;
    double local_1947_d = param_b * 1947;
    char buf_1947[128];
    snprintf(buf_1947, sizeof(buf_1947), "function_%d: %d, %f, %s", 1947, local_1947, local_1947_d, param_c ? param_c : "null");
    return local_1947 + (int)local_1947_d;
}

typedef struct {
    int field_1948;
    long field_1948_b;
    double field_1948_c;
    char name_1948[64];
} StructType1948;

int function_1948(StructType1948 *s, int param_a, double param_b, const char *param_c) {
    int local_1948 = param_a * 1948;
    double local_1948_d = param_b * 1948;
    char buf_1948[128];
    snprintf(buf_1948, sizeof(buf_1948), "function_%d: %d, %f, %s", 1948, local_1948, local_1948_d, param_c ? param_c : "null");
    return local_1948 + (int)local_1948_d;
}

typedef struct {
    int field_1949;
    long field_1949_b;
    double field_1949_c;
    char name_1949[64];
} StructType1949;

int function_1949(StructType1949 *s, int param_a, double param_b, const char *param_c) {
    int local_1949 = param_a * 1949;
    double local_1949_d = param_b * 1949;
    char buf_1949[128];
    snprintf(buf_1949, sizeof(buf_1949), "function_%d: %d, %f, %s", 1949, local_1949, local_1949_d, param_c ? param_c : "null");
    return local_1949 + (int)local_1949_d;
}

typedef struct {
    int field_1950;
    long field_1950_b;
    double field_1950_c;
    char name_1950[64];
} StructType1950;

int function_1950(StructType1950 *s, int param_a, double param_b, const char *param_c) {
    int local_1950 = param_a * 1950;
    double local_1950_d = param_b * 1950;
    char buf_1950[128];
    snprintf(buf_1950, sizeof(buf_1950), "function_%d: %d, %f, %s", 1950, local_1950, local_1950_d, param_c ? param_c : "null");
    return local_1950 + (int)local_1950_d;
}

typedef struct {
    int field_1951;
    long field_1951_b;
    double field_1951_c;
    char name_1951[64];
} StructType1951;

int function_1951(StructType1951 *s, int param_a, double param_b, const char *param_c) {
    int local_1951 = param_a * 1951;
    double local_1951_d = param_b * 1951;
    char buf_1951[128];
    snprintf(buf_1951, sizeof(buf_1951), "function_%d: %d, %f, %s", 1951, local_1951, local_1951_d, param_c ? param_c : "null");
    return local_1951 + (int)local_1951_d;
}

typedef struct {
    int field_1952;
    long field_1952_b;
    double field_1952_c;
    char name_1952[64];
} StructType1952;

int function_1952(StructType1952 *s, int param_a, double param_b, const char *param_c) {
    int local_1952 = param_a * 1952;
    double local_1952_d = param_b * 1952;
    char buf_1952[128];
    snprintf(buf_1952, sizeof(buf_1952), "function_%d: %d, %f, %s", 1952, local_1952, local_1952_d, param_c ? param_c : "null");
    return local_1952 + (int)local_1952_d;
}

typedef struct {
    int field_1953;
    long field_1953_b;
    double field_1953_c;
    char name_1953[64];
} StructType1953;

int function_1953(StructType1953 *s, int param_a, double param_b, const char *param_c) {
    int local_1953 = param_a * 1953;
    double local_1953_d = param_b * 1953;
    char buf_1953[128];
    snprintf(buf_1953, sizeof(buf_1953), "function_%d: %d, %f, %s", 1953, local_1953, local_1953_d, param_c ? param_c : "null");
    return local_1953 + (int)local_1953_d;
}

typedef struct {
    int field_1954;
    long field_1954_b;
    double field_1954_c;
    char name_1954[64];
} StructType1954;

int function_1954(StructType1954 *s, int param_a, double param_b, const char *param_c) {
    int local_1954 = param_a * 1954;
    double local_1954_d = param_b * 1954;
    char buf_1954[128];
    snprintf(buf_1954, sizeof(buf_1954), "function_%d: %d, %f, %s", 1954, local_1954, local_1954_d, param_c ? param_c : "null");
    return local_1954 + (int)local_1954_d;
}

typedef struct {
    int field_1955;
    long field_1955_b;
    double field_1955_c;
    char name_1955[64];
} StructType1955;

int function_1955(StructType1955 *s, int param_a, double param_b, const char *param_c) {
    int local_1955 = param_a * 1955;
    double local_1955_d = param_b * 1955;
    char buf_1955[128];
    snprintf(buf_1955, sizeof(buf_1955), "function_%d: %d, %f, %s", 1955, local_1955, local_1955_d, param_c ? param_c : "null");
    return local_1955 + (int)local_1955_d;
}

typedef struct {
    int field_1956;
    long field_1956_b;
    double field_1956_c;
    char name_1956[64];
} StructType1956;

int function_1956(StructType1956 *s, int param_a, double param_b, const char *param_c) {
    int local_1956 = param_a * 1956;
    double local_1956_d = param_b * 1956;
    char buf_1956[128];
    snprintf(buf_1956, sizeof(buf_1956), "function_%d: %d, %f, %s", 1956, local_1956, local_1956_d, param_c ? param_c : "null");
    return local_1956 + (int)local_1956_d;
}

typedef struct {
    int field_1957;
    long field_1957_b;
    double field_1957_c;
    char name_1957[64];
} StructType1957;

int function_1957(StructType1957 *s, int param_a, double param_b, const char *param_c) {
    int local_1957 = param_a * 1957;
    double local_1957_d = param_b * 1957;
    char buf_1957[128];
    snprintf(buf_1957, sizeof(buf_1957), "function_%d: %d, %f, %s", 1957, local_1957, local_1957_d, param_c ? param_c : "null");
    return local_1957 + (int)local_1957_d;
}

typedef struct {
    int field_1958;
    long field_1958_b;
    double field_1958_c;
    char name_1958[64];
} StructType1958;

int function_1958(StructType1958 *s, int param_a, double param_b, const char *param_c) {
    int local_1958 = param_a * 1958;
    double local_1958_d = param_b * 1958;
    char buf_1958[128];
    snprintf(buf_1958, sizeof(buf_1958), "function_%d: %d, %f, %s", 1958, local_1958, local_1958_d, param_c ? param_c : "null");
    return local_1958 + (int)local_1958_d;
}

typedef struct {
    int field_1959;
    long field_1959_b;
    double field_1959_c;
    char name_1959[64];
} StructType1959;

int function_1959(StructType1959 *s, int param_a, double param_b, const char *param_c) {
    int local_1959 = param_a * 1959;
    double local_1959_d = param_b * 1959;
    char buf_1959[128];
    snprintf(buf_1959, sizeof(buf_1959), "function_%d: %d, %f, %s", 1959, local_1959, local_1959_d, param_c ? param_c : "null");
    return local_1959 + (int)local_1959_d;
}

typedef struct {
    int field_1960;
    long field_1960_b;
    double field_1960_c;
    char name_1960[64];
} StructType1960;

int function_1960(StructType1960 *s, int param_a, double param_b, const char *param_c) {
    int local_1960 = param_a * 1960;
    double local_1960_d = param_b * 1960;
    char buf_1960[128];
    snprintf(buf_1960, sizeof(buf_1960), "function_%d: %d, %f, %s", 1960, local_1960, local_1960_d, param_c ? param_c : "null");
    return local_1960 + (int)local_1960_d;
}

typedef struct {
    int field_1961;
    long field_1961_b;
    double field_1961_c;
    char name_1961[64];
} StructType1961;

int function_1961(StructType1961 *s, int param_a, double param_b, const char *param_c) {
    int local_1961 = param_a * 1961;
    double local_1961_d = param_b * 1961;
    char buf_1961[128];
    snprintf(buf_1961, sizeof(buf_1961), "function_%d: %d, %f, %s", 1961, local_1961, local_1961_d, param_c ? param_c : "null");
    return local_1961 + (int)local_1961_d;
}

typedef struct {
    int field_1962;
    long field_1962_b;
    double field_1962_c;
    char name_1962[64];
} StructType1962;

int function_1962(StructType1962 *s, int param_a, double param_b, const char *param_c) {
    int local_1962 = param_a * 1962;
    double local_1962_d = param_b * 1962;
    char buf_1962[128];
    snprintf(buf_1962, sizeof(buf_1962), "function_%d: %d, %f, %s", 1962, local_1962, local_1962_d, param_c ? param_c : "null");
    return local_1962 + (int)local_1962_d;
}

typedef struct {
    int field_1963;
    long field_1963_b;
    double field_1963_c;
    char name_1963[64];
} StructType1963;

int function_1963(StructType1963 *s, int param_a, double param_b, const char *param_c) {
    int local_1963 = param_a * 1963;
    double local_1963_d = param_b * 1963;
    char buf_1963[128];
    snprintf(buf_1963, sizeof(buf_1963), "function_%d: %d, %f, %s", 1963, local_1963, local_1963_d, param_c ? param_c : "null");
    return local_1963 + (int)local_1963_d;
}

typedef struct {
    int field_1964;
    long field_1964_b;
    double field_1964_c;
    char name_1964[64];
} StructType1964;

int function_1964(StructType1964 *s, int param_a, double param_b, const char *param_c) {
    int local_1964 = param_a * 1964;
    double local_1964_d = param_b * 1964;
    char buf_1964[128];
    snprintf(buf_1964, sizeof(buf_1964), "function_%d: %d, %f, %s", 1964, local_1964, local_1964_d, param_c ? param_c : "null");
    return local_1964 + (int)local_1964_d;
}

typedef struct {
    int field_1965;
    long field_1965_b;
    double field_1965_c;
    char name_1965[64];
} StructType1965;

int function_1965(StructType1965 *s, int param_a, double param_b, const char *param_c) {
    int local_1965 = param_a * 1965;
    double local_1965_d = param_b * 1965;
    char buf_1965[128];
    snprintf(buf_1965, sizeof(buf_1965), "function_%d: %d, %f, %s", 1965, local_1965, local_1965_d, param_c ? param_c : "null");
    return local_1965 + (int)local_1965_d;
}

typedef struct {
    int field_1966;
    long field_1966_b;
    double field_1966_c;
    char name_1966[64];
} StructType1966;

int function_1966(StructType1966 *s, int param_a, double param_b, const char *param_c) {
    int local_1966 = param_a * 1966;
    double local_1966_d = param_b * 1966;
    char buf_1966[128];
    snprintf(buf_1966, sizeof(buf_1966), "function_%d: %d, %f, %s", 1966, local_1966, local_1966_d, param_c ? param_c : "null");
    return local_1966 + (int)local_1966_d;
}

typedef struct {
    int field_1967;
    long field_1967_b;
    double field_1967_c;
    char name_1967[64];
} StructType1967;

int function_1967(StructType1967 *s, int param_a, double param_b, const char *param_c) {
    int local_1967 = param_a * 1967;
    double local_1967_d = param_b * 1967;
    char buf_1967[128];
    snprintf(buf_1967, sizeof(buf_1967), "function_%d: %d, %f, %s", 1967, local_1967, local_1967_d, param_c ? param_c : "null");
    return local_1967 + (int)local_1967_d;
}

typedef struct {
    int field_1968;
    long field_1968_b;
    double field_1968_c;
    char name_1968[64];
} StructType1968;

int function_1968(StructType1968 *s, int param_a, double param_b, const char *param_c) {
    int local_1968 = param_a * 1968;
    double local_1968_d = param_b * 1968;
    char buf_1968[128];
    snprintf(buf_1968, sizeof(buf_1968), "function_%d: %d, %f, %s", 1968, local_1968, local_1968_d, param_c ? param_c : "null");
    return local_1968 + (int)local_1968_d;
}

typedef struct {
    int field_1969;
    long field_1969_b;
    double field_1969_c;
    char name_1969[64];
} StructType1969;

int function_1969(StructType1969 *s, int param_a, double param_b, const char *param_c) {
    int local_1969 = param_a * 1969;
    double local_1969_d = param_b * 1969;
    char buf_1969[128];
    snprintf(buf_1969, sizeof(buf_1969), "function_%d: %d, %f, %s", 1969, local_1969, local_1969_d, param_c ? param_c : "null");
    return local_1969 + (int)local_1969_d;
}

typedef struct {
    int field_1970;
    long field_1970_b;
    double field_1970_c;
    char name_1970[64];
} StructType1970;

int function_1970(StructType1970 *s, int param_a, double param_b, const char *param_c) {
    int local_1970 = param_a * 1970;
    double local_1970_d = param_b * 1970;
    char buf_1970[128];
    snprintf(buf_1970, sizeof(buf_1970), "function_%d: %d, %f, %s", 1970, local_1970, local_1970_d, param_c ? param_c : "null");
    return local_1970 + (int)local_1970_d;
}

typedef struct {
    int field_1971;
    long field_1971_b;
    double field_1971_c;
    char name_1971[64];
} StructType1971;

int function_1971(StructType1971 *s, int param_a, double param_b, const char *param_c) {
    int local_1971 = param_a * 1971;
    double local_1971_d = param_b * 1971;
    char buf_1971[128];
    snprintf(buf_1971, sizeof(buf_1971), "function_%d: %d, %f, %s", 1971, local_1971, local_1971_d, param_c ? param_c : "null");
    return local_1971 + (int)local_1971_d;
}

typedef struct {
    int field_1972;
    long field_1972_b;
    double field_1972_c;
    char name_1972[64];
} StructType1972;

int function_1972(StructType1972 *s, int param_a, double param_b, const char *param_c) {
    int local_1972 = param_a * 1972;
    double local_1972_d = param_b * 1972;
    char buf_1972[128];
    snprintf(buf_1972, sizeof(buf_1972), "function_%d: %d, %f, %s", 1972, local_1972, local_1972_d, param_c ? param_c : "null");
    return local_1972 + (int)local_1972_d;
}

typedef struct {
    int field_1973;
    long field_1973_b;
    double field_1973_c;
    char name_1973[64];
} StructType1973;

int function_1973(StructType1973 *s, int param_a, double param_b, const char *param_c) {
    int local_1973 = param_a * 1973;
    double local_1973_d = param_b * 1973;
    char buf_1973[128];
    snprintf(buf_1973, sizeof(buf_1973), "function_%d: %d, %f, %s", 1973, local_1973, local_1973_d, param_c ? param_c : "null");
    return local_1973 + (int)local_1973_d;
}

typedef struct {
    int field_1974;
    long field_1974_b;
    double field_1974_c;
    char name_1974[64];
} StructType1974;

int function_1974(StructType1974 *s, int param_a, double param_b, const char *param_c) {
    int local_1974 = param_a * 1974;
    double local_1974_d = param_b * 1974;
    char buf_1974[128];
    snprintf(buf_1974, sizeof(buf_1974), "function_%d: %d, %f, %s", 1974, local_1974, local_1974_d, param_c ? param_c : "null");
    return local_1974 + (int)local_1974_d;
}

typedef struct {
    int field_1975;
    long field_1975_b;
    double field_1975_c;
    char name_1975[64];
} StructType1975;

int function_1975(StructType1975 *s, int param_a, double param_b, const char *param_c) {
    int local_1975 = param_a * 1975;
    double local_1975_d = param_b * 1975;
    char buf_1975[128];
    snprintf(buf_1975, sizeof(buf_1975), "function_%d: %d, %f, %s", 1975, local_1975, local_1975_d, param_c ? param_c : "null");
    return local_1975 + (int)local_1975_d;
}

typedef struct {
    int field_1976;
    long field_1976_b;
    double field_1976_c;
    char name_1976[64];
} StructType1976;

int function_1976(StructType1976 *s, int param_a, double param_b, const char *param_c) {
    int local_1976 = param_a * 1976;
    double local_1976_d = param_b * 1976;
    char buf_1976[128];
    snprintf(buf_1976, sizeof(buf_1976), "function_%d: %d, %f, %s", 1976, local_1976, local_1976_d, param_c ? param_c : "null");
    return local_1976 + (int)local_1976_d;
}

typedef struct {
    int field_1977;
    long field_1977_b;
    double field_1977_c;
    char name_1977[64];
} StructType1977;

int function_1977(StructType1977 *s, int param_a, double param_b, const char *param_c) {
    int local_1977 = param_a * 1977;
    double local_1977_d = param_b * 1977;
    char buf_1977[128];
    snprintf(buf_1977, sizeof(buf_1977), "function_%d: %d, %f, %s", 1977, local_1977, local_1977_d, param_c ? param_c : "null");
    return local_1977 + (int)local_1977_d;
}

typedef struct {
    int field_1978;
    long field_1978_b;
    double field_1978_c;
    char name_1978[64];
} StructType1978;

int function_1978(StructType1978 *s, int param_a, double param_b, const char *param_c) {
    int local_1978 = param_a * 1978;
    double local_1978_d = param_b * 1978;
    char buf_1978[128];
    snprintf(buf_1978, sizeof(buf_1978), "function_%d: %d, %f, %s", 1978, local_1978, local_1978_d, param_c ? param_c : "null");
    return local_1978 + (int)local_1978_d;
}

typedef struct {
    int field_1979;
    long field_1979_b;
    double field_1979_c;
    char name_1979[64];
} StructType1979;

int function_1979(StructType1979 *s, int param_a, double param_b, const char *param_c) {
    int local_1979 = param_a * 1979;
    double local_1979_d = param_b * 1979;
    char buf_1979[128];
    snprintf(buf_1979, sizeof(buf_1979), "function_%d: %d, %f, %s", 1979, local_1979, local_1979_d, param_c ? param_c : "null");
    return local_1979 + (int)local_1979_d;
}

typedef struct {
    int field_1980;
    long field_1980_b;
    double field_1980_c;
    char name_1980[64];
} StructType1980;

int function_1980(StructType1980 *s, int param_a, double param_b, const char *param_c) {
    int local_1980 = param_a * 1980;
    double local_1980_d = param_b * 1980;
    char buf_1980[128];
    snprintf(buf_1980, sizeof(buf_1980), "function_%d: %d, %f, %s", 1980, local_1980, local_1980_d, param_c ? param_c : "null");
    return local_1980 + (int)local_1980_d;
}

typedef struct {
    int field_1981;
    long field_1981_b;
    double field_1981_c;
    char name_1981[64];
} StructType1981;

int function_1981(StructType1981 *s, int param_a, double param_b, const char *param_c) {
    int local_1981 = param_a * 1981;
    double local_1981_d = param_b * 1981;
    char buf_1981[128];
    snprintf(buf_1981, sizeof(buf_1981), "function_%d: %d, %f, %s", 1981, local_1981, local_1981_d, param_c ? param_c : "null");
    return local_1981 + (int)local_1981_d;
}

typedef struct {
    int field_1982;
    long field_1982_b;
    double field_1982_c;
    char name_1982[64];
} StructType1982;

int function_1982(StructType1982 *s, int param_a, double param_b, const char *param_c) {
    int local_1982 = param_a * 1982;
    double local_1982_d = param_b * 1982;
    char buf_1982[128];
    snprintf(buf_1982, sizeof(buf_1982), "function_%d: %d, %f, %s", 1982, local_1982, local_1982_d, param_c ? param_c : "null");
    return local_1982 + (int)local_1982_d;
}

typedef struct {
    int field_1983;
    long field_1983_b;
    double field_1983_c;
    char name_1983[64];
} StructType1983;

int function_1983(StructType1983 *s, int param_a, double param_b, const char *param_c) {
    int local_1983 = param_a * 1983;
    double local_1983_d = param_b * 1983;
    char buf_1983[128];
    snprintf(buf_1983, sizeof(buf_1983), "function_%d: %d, %f, %s", 1983, local_1983, local_1983_d, param_c ? param_c : "null");
    return local_1983 + (int)local_1983_d;
}

typedef struct {
    int field_1984;
    long field_1984_b;
    double field_1984_c;
    char name_1984[64];
} StructType1984;

int function_1984(StructType1984 *s, int param_a, double param_b, const char *param_c) {
    int local_1984 = param_a * 1984;
    double local_1984_d = param_b * 1984;
    char buf_1984[128];
    snprintf(buf_1984, sizeof(buf_1984), "function_%d: %d, %f, %s", 1984, local_1984, local_1984_d, param_c ? param_c : "null");
    return local_1984 + (int)local_1984_d;
}

typedef struct {
    int field_1985;
    long field_1985_b;
    double field_1985_c;
    char name_1985[64];
} StructType1985;

int function_1985(StructType1985 *s, int param_a, double param_b, const char *param_c) {
    int local_1985 = param_a * 1985;
    double local_1985_d = param_b * 1985;
    char buf_1985[128];
    snprintf(buf_1985, sizeof(buf_1985), "function_%d: %d, %f, %s", 1985, local_1985, local_1985_d, param_c ? param_c : "null");
    return local_1985 + (int)local_1985_d;
}

typedef struct {
    int field_1986;
    long field_1986_b;
    double field_1986_c;
    char name_1986[64];
} StructType1986;

int function_1986(StructType1986 *s, int param_a, double param_b, const char *param_c) {
    int local_1986 = param_a * 1986;
    double local_1986_d = param_b * 1986;
    char buf_1986[128];
    snprintf(buf_1986, sizeof(buf_1986), "function_%d: %d, %f, %s", 1986, local_1986, local_1986_d, param_c ? param_c : "null");
    return local_1986 + (int)local_1986_d;
}

typedef struct {
    int field_1987;
    long field_1987_b;
    double field_1987_c;
    char name_1987[64];
} StructType1987;

int function_1987(StructType1987 *s, int param_a, double param_b, const char *param_c) {
    int local_1987 = param_a * 1987;
    double local_1987_d = param_b * 1987;
    char buf_1987[128];
    snprintf(buf_1987, sizeof(buf_1987), "function_%d: %d, %f, %s", 1987, local_1987, local_1987_d, param_c ? param_c : "null");
    return local_1987 + (int)local_1987_d;
}

typedef struct {
    int field_1988;
    long field_1988_b;
    double field_1988_c;
    char name_1988[64];
} StructType1988;

int function_1988(StructType1988 *s, int param_a, double param_b, const char *param_c) {
    int local_1988 = param_a * 1988;
    double local_1988_d = param_b * 1988;
    char buf_1988[128];
    snprintf(buf_1988, sizeof(buf_1988), "function_%d: %d, %f, %s", 1988, local_1988, local_1988_d, param_c ? param_c : "null");
    return local_1988 + (int)local_1988_d;
}

typedef struct {
    int field_1989;
    long field_1989_b;
    double field_1989_c;
    char name_1989[64];
} StructType1989;

int function_1989(StructType1989 *s, int param_a, double param_b, const char *param_c) {
    int local_1989 = param_a * 1989;
    double local_1989_d = param_b * 1989;
    char buf_1989[128];
    snprintf(buf_1989, sizeof(buf_1989), "function_%d: %d, %f, %s", 1989, local_1989, local_1989_d, param_c ? param_c : "null");
    return local_1989 + (int)local_1989_d;
}

typedef struct {
    int field_1990;
    long field_1990_b;
    double field_1990_c;
    char name_1990[64];
} StructType1990;

int function_1990(StructType1990 *s, int param_a, double param_b, const char *param_c) {
    int local_1990 = param_a * 1990;
    double local_1990_d = param_b * 1990;
    char buf_1990[128];
    snprintf(buf_1990, sizeof(buf_1990), "function_%d: %d, %f, %s", 1990, local_1990, local_1990_d, param_c ? param_c : "null");
    return local_1990 + (int)local_1990_d;
}

typedef struct {
    int field_1991;
    long field_1991_b;
    double field_1991_c;
    char name_1991[64];
} StructType1991;

int function_1991(StructType1991 *s, int param_a, double param_b, const char *param_c) {
    int local_1991 = param_a * 1991;
    double local_1991_d = param_b * 1991;
    char buf_1991[128];
    snprintf(buf_1991, sizeof(buf_1991), "function_%d: %d, %f, %s", 1991, local_1991, local_1991_d, param_c ? param_c : "null");
    return local_1991 + (int)local_1991_d;
}

typedef struct {
    int field_1992;
    long field_1992_b;
    double field_1992_c;
    char name_1992[64];
} StructType1992;

int function_1992(StructType1992 *s, int param_a, double param_b, const char *param_c) {
    int local_1992 = param_a * 1992;
    double local_1992_d = param_b * 1992;
    char buf_1992[128];
    snprintf(buf_1992, sizeof(buf_1992), "function_%d: %d, %f, %s", 1992, local_1992, local_1992_d, param_c ? param_c : "null");
    return local_1992 + (int)local_1992_d;
}

typedef struct {
    int field_1993;
    long field_1993_b;
    double field_1993_c;
    char name_1993[64];
} StructType1993;

int function_1993(StructType1993 *s, int param_a, double param_b, const char *param_c) {
    int local_1993 = param_a * 1993;
    double local_1993_d = param_b * 1993;
    char buf_1993[128];
    snprintf(buf_1993, sizeof(buf_1993), "function_%d: %d, %f, %s", 1993, local_1993, local_1993_d, param_c ? param_c : "null");
    return local_1993 + (int)local_1993_d;
}

typedef struct {
    int field_1994;
    long field_1994_b;
    double field_1994_c;
    char name_1994[64];
} StructType1994;

int function_1994(StructType1994 *s, int param_a, double param_b, const char *param_c) {
    int local_1994 = param_a * 1994;
    double local_1994_d = param_b * 1994;
    char buf_1994[128];
    snprintf(buf_1994, sizeof(buf_1994), "function_%d: %d, %f, %s", 1994, local_1994, local_1994_d, param_c ? param_c : "null");
    return local_1994 + (int)local_1994_d;
}

typedef struct {
    int field_1995;
    long field_1995_b;
    double field_1995_c;
    char name_1995[64];
} StructType1995;

int function_1995(StructType1995 *s, int param_a, double param_b, const char *param_c) {
    int local_1995 = param_a * 1995;
    double local_1995_d = param_b * 1995;
    char buf_1995[128];
    snprintf(buf_1995, sizeof(buf_1995), "function_%d: %d, %f, %s", 1995, local_1995, local_1995_d, param_c ? param_c : "null");
    return local_1995 + (int)local_1995_d;
}

typedef struct {
    int field_1996;
    long field_1996_b;
    double field_1996_c;
    char name_1996[64];
} StructType1996;

int function_1996(StructType1996 *s, int param_a, double param_b, const char *param_c) {
    int local_1996 = param_a * 1996;
    double local_1996_d = param_b * 1996;
    char buf_1996[128];
    snprintf(buf_1996, sizeof(buf_1996), "function_%d: %d, %f, %s", 1996, local_1996, local_1996_d, param_c ? param_c : "null");
    return local_1996 + (int)local_1996_d;
}

typedef struct {
    int field_1997;
    long field_1997_b;
    double field_1997_c;
    char name_1997[64];
} StructType1997;

int function_1997(StructType1997 *s, int param_a, double param_b, const char *param_c) {
    int local_1997 = param_a * 1997;
    double local_1997_d = param_b * 1997;
    char buf_1997[128];
    snprintf(buf_1997, sizeof(buf_1997), "function_%d: %d, %f, %s", 1997, local_1997, local_1997_d, param_c ? param_c : "null");
    return local_1997 + (int)local_1997_d;
}

typedef struct {
    int field_1998;
    long field_1998_b;
    double field_1998_c;
    char name_1998[64];
} StructType1998;

int function_1998(StructType1998 *s, int param_a, double param_b, const char *param_c) {
    int local_1998 = param_a * 1998;
    double local_1998_d = param_b * 1998;
    char buf_1998[128];
    snprintf(buf_1998, sizeof(buf_1998), "function_%d: %d, %f, %s", 1998, local_1998, local_1998_d, param_c ? param_c : "null");
    return local_1998 + (int)local_1998_d;
}

typedef struct {
    int field_1999;
    long field_1999_b;
    double field_1999_c;
    char name_1999[64];
} StructType1999;

int function_1999(StructType1999 *s, int param_a, double param_b, const char *param_c) {
    int local_1999 = param_a * 1999;
    double local_1999_d = param_b * 1999;
    char buf_1999[128];
    snprintf(buf_1999, sizeof(buf_1999), "function_%d: %d, %f, %s", 1999, local_1999, local_1999_d, param_c ? param_c : "null");
    return local_1999 + (int)local_1999_d;
}

typedef struct {
    int field_2000;
    long field_2000_b;
    double field_2000_c;
    char name_2000[64];
} StructType2000;

int function_2000(StructType2000 *s, int param_a, double param_b, const char *param_c) {
    int local_2000 = param_a * 2000;
    double local_2000_d = param_b * 2000;
    char buf_2000[128];
    snprintf(buf_2000, sizeof(buf_2000), "function_%d: %d, %f, %s", 2000, local_2000, local_2000_d, param_c ? param_c : "null");
    return local_2000 + (int)local_2000_d;
}

int main(int argc, char *argv[]) {
    printf("Large binary test with 2000 functions\n");
    return 0;
}
