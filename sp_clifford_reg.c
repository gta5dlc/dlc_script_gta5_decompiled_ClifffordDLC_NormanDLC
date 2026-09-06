#region Local Var
    var uLocal_0 = 0;
    var uLocal_1 = 0;
    int iLocal_2 = 0;
    int iLocal_3 = 0;
    int iLocal_4 = 0;
    int iLocal_5 = 0;
    int iLocal_6 = 0;
    int iLocal_7 = 0;
    int iLocal_8 = 0;
    int iLocal_9 = 0;
    int iLocal_10 = 0;
    int iLocal_11 = 0;
    var uLocal_12 = 0;
    var uLocal_13 = 0;
    float fLocal_14 = 0f;
    var uLocal_15 = 0;
    var uLocal_16 = 0;
#endregion

void __EntryFunction__()
{
    int iVar0;
    int iVar1;
    
    iLocal_2 = 1;
    iLocal_3 = 134;
    iLocal_4 = 134;
    iLocal_5 = 1;
    iLocal_6 = 1;
    iLocal_7 = 1;
    iLocal_8 = 134;
    iLocal_9 = 1;
    iLocal_10 = 12;
    iLocal_11 = 12;
    fLocal_14 = 0,001f;
    func_111();
    func_109();
    start_save_data(&Global_3145728, 24643, 1);
    func_99();
    func_92();
    func_88();
    func_72();
    func_67();
    func_63();
    func_59();
    func_47();
    func_44();
    func_40();
    func_30();
    func_25();
    func_20();
    func_17();
    func_7();
    func_4();
    func_1();
    stop_save_data();
    iVar0 = 24643;
    iVar1 = _0x9EF0BC64(1);
    if (iVar0 != iVar1)
    {
    }
}

void func_1()
{
    _start_save_struct(&(Global_3145728.f_20153), 284, "BUY_VEC_SAVED");
    func_3(&(Global_3145728.f_20153), "OWVEC_IND");
    func_2(&(Global_3145728.f_20153.f_71), "OWVEC_COL_M");
    func_2(&(Global_3145728.f_20153.f_142), "OWVEC_COL_F");
    func_2(&(Global_3145728.f_20153.f_213), "OWVEC_COL_T");
    stop_save_struct();
}

void func_2(var uParam0, char* sParam1)
{
    int iVar0;
    char cVar1[32];
    
    iVar0 = 0;
    _start_save_array(uParam0, 71, sParam1);
    iVar0 = 0;
    while (iVar0 < 70)
    {
        StringCopy(&cVar1, "BUYVEC_C_", 32);
        StringIntConCat(&cVar1, iVar0, 32);
        register_enum_to_save(uParam0[iVar0], &cVar1);
        iVar0++;
    }
    stop_save_array();
}

void func_3(var uParam0, char* sParam1)
{
    int iVar0;
    char cVar1[32];
    
    iVar0 = 0;
    _start_save_array(uParam0, 71, sParam1);
    iVar0 = 0;
    while (iVar0 < 70)
    {
        StringCopy(&cVar1, "BUYVEC_I_", 32);
        StringIntConCat(&cVar1, iVar0, 32);
        register_int_to_save(uParam0[iVar0], &cVar1);
        iVar0++;
    }
    stop_save_array();
}

void func_4()
{
    char cVar0[32];
    char cVar1[32];
    char cVar2[32];
    
    _start_save_struct(&(Global_3145728.f_20083), 6, "RP_PLAYER");
    register_float_to_save(&(Global_3145728.f_20083), "RP_PLAYER_x");
    register_float_to_save(&(Global_3145728.f_20083.f_1), "RP_PLAYER_y");
    register_float_to_save(&(Global_3145728.f_20083.f_2), "RP_PLAYER_z");
    register_float_to_save(&(Global_3145728.f_20083.f_3), "RP_PLAYER_heading");
    register_int_to_save(&(Global_3145728.f_20083.f_4), "RP_PLAYER_Wanted");
    register_enum_to_save(&(Global_3145728.f_20083.f_5), "RP_PLAYER_Parachute");
    stop_save_struct();
    StringCopy(&cVar1, "RP_Vehicle", 32);
    _start_save_struct(&(Global_3145728.f_20083.f_6), 62, &cVar1);
    register_float_to_save(&(Global_3145728.f_20083.f_6), "RP_Vehicle_x");
    register_float_to_save(&(Global_3145728.f_20083.f_6.f_1), "RP_Vehicle_y");
    register_float_to_save(&(Global_3145728.f_20083.f_6.f_2), "RP_Vehicle_z");
    register_float_to_save(&(Global_3145728.f_20083.f_6.f_3), "RP_Velocity_x");
    register_float_to_save(&(Global_3145728.f_20083.f_6.f_3.f_1), "RP_Velocity_y");
    register_float_to_save(&(Global_3145728.f_20083.f_6.f_3.f_2), "RP_Velocity_z");
    register_float_to_save(&(Global_3145728.f_20083.f_6.f_6), "RP_Vehicle_heading");
    register_bool_to_save(&(Global_3145728.f_20083.f_6.f_7), "RP_Vehicle_personal");
    register_bool_to_save(&(Global_3145728.f_20083.f_6.f_8), "RP_Vehicle_bInVehicle");
    register_bool_to_save(&(Global_3145728.f_20083.f_6.f_9), "RP_Vehicle_bTrackedForImpound");
    register_enum_to_save(&(Global_3145728.f_20083.f_6.f_10), "RP_Vehicle_character");
    cVar2 = { cVar1 };
    StringConCat(&cVar2, "_Data_", 32);
    _start_save_struct(&(Global_3145728.f_20083.f_6.f_11), 51, &cVar2);
    cVar0 = { cVar2 };
    StringConCat(&cVar0, "PlateI", 32);
    register_int_to_save(&(Global_3145728.f_20083.f_6.f_11), &cVar0);
    cVar0 = { cVar2 };
    StringConCat(&cVar0, "PlateT", 32);
    _0xE2089749(&(Global_3145728.f_20083.f_6.f_11.f_1), &cVar0);
    cVar0 = { cVar2 };
    StringConCat(&cVar0, "Colour1", 32);
    register_int_to_save(&(Global_3145728.f_20083.f_6.f_11.f_5), &cVar0);
    cVar0 = { cVar2 };
    StringConCat(&cVar0, "Colour2", 32);
    register_int_to_save(&(Global_3145728.f_20083.f_6.f_11.f_6), &cVar0);
    cVar0 = { cVar2 };
    StringConCat(&cVar0, "ColourEx1", 32);
    register_int_to_save(&(Global_3145728.f_20083.f_6.f_11.f_7), &cVar0);
    cVar0 = { cVar2 };
    StringConCat(&cVar0, "ColourEx2", 32);
    register_int_to_save(&(Global_3145728.f_20083.f_6.f_11.f_8), &cVar0);
    cVar0 = { cVar2 };
    StringConCat(&cVar0, "TyreR", 32);
    register_int_to_save(&(Global_3145728.f_20083.f_6.f_11.f_38), &cVar0);
    cVar0 = { cVar2 };
    StringConCat(&cVar0, "TyreG", 32);
    register_int_to_save(&(Global_3145728.f_20083.f_6.f_11.f_39), &cVar0);
    cVar0 = { cVar2 };
    StringConCat(&cVar0, "TyreB", 32);
    register_int_to_save(&(Global_3145728.f_20083.f_6.f_11.f_40), &cVar0);
    cVar0 = { cVar2 };
    StringConCat(&cVar0, "WindowTint", 32);
    register_int_to_save(&(Global_3145728.f_20083.f_6.f_11.f_41), &cVar0);
    cVar0 = { cVar2 };
    StringConCat(&cVar0, "Flags", 32);
    register_int_to_save(&(Global_3145728.f_20083.f_6.f_11.f_50), &cVar0);
    cVar0 = { cVar2 };
    StringConCat(&cVar0, "CustomR", 32);
    register_int_to_save(&(Global_3145728.f_20083.f_6.f_11.f_47), &cVar0);
    cVar0 = { cVar2 };
    StringConCat(&cVar0, "CustomG", 32);
    register_int_to_save(&(Global_3145728.f_20083.f_6.f_11.f_48), &cVar0);
    cVar0 = { cVar2 };
    StringConCat(&cVar0, "CustomB", 32);
    register_int_to_save(&(Global_3145728.f_20083.f_6.f_11.f_49), &cVar0);
    cVar0 = { cVar2 };
    StringConCat(&cVar0, "LockState", 32);
    register_enum_to_save(&(Global_3145728.f_20083.f_6.f_11.f_46), &cVar0);
    cVar0 = { cVar2 };
    StringConCat(&cVar0, "Model", 32);
    register_enum_to_save(&(Global_3145728.f_20083.f_6.f_11.f_42), &cVar0);
    cVar0 = { cVar2 };
    StringConCat(&cVar0, "Livery", 32);
    register_int_to_save(&(Global_3145728.f_20083.f_6.f_11.f_43), &cVar0);
    cVar0 = { cVar2 };
    StringConCat(&cVar0, "WheelType", 32);
    register_int_to_save(&(Global_3145728.f_20083.f_6.f_11.f_45), &cVar0);
    cVar0 = { cVar2 };
    StringConCat(&cVar0, "Roof", 32);
    register_enum_to_save(&(Global_3145728.f_20083.f_6.f_11.f_44), &cVar0);
    cVar0 = { cVar2 };
    StringConCat(&cVar0, "ModIndex", 32);
    func_6(&(Global_3145728.f_20083.f_6.f_11.f_9), cVar0);
    cVar0 = { cVar2 };
    StringConCat(&cVar0, "ModVariations", 32);
    func_5(&(Global_3145728.f_20083.f_6.f_11.f_35), cVar0);
    stop_save_struct();
    stop_save_struct();
    register_enum_to_save(&(Global_3145728.f_20083.f_68), "Mission");
    register_enum_to_save(&(Global_3145728.f_20083.f_69), "eRCMissionToBlock");
}

void func_5(var uParam0, char[32] cParam1)
{
    char cVar0[32];
    int iVar1;
    
    _start_save_array(uParam0, 3, &cParam1);
    iVar1 = 0;
    while (iVar1 < *uParam0)
    {
        cVar0 = { cParam1 };
        StringIntConCat(&cVar0, iVar1, 32);
        register_int_to_save(uParam0[iVar1], &cVar0);
        iVar1++;
    }
    stop_save_array();
}

void func_6(var uParam0, char[32] cParam1)
{
    char cVar0[32];
    int iVar1;
    
    _start_save_array(uParam0, 26, &cParam1);
    iVar1 = 0;
    while (iVar1 < *uParam0)
    {
        cVar0 = { cParam1 };
        StringIntConCat(&cVar0, iVar1, 32);
        register_int_to_save(uParam0[iVar1], &cVar0);
        iVar1++;
    }
    stop_save_array();
}

void func_7()
{
    _start_save_struct(&(Global_3145728.f_17048), 3035, "EMAIL_DATA");
    func_8(&(Global_3145728.f_17048));
    stop_save_struct();
}

void func_8(var uParam0)
{
    int iVar0;
    
    iVar0 = 0;
    _start_save_array(uParam0, 310, "EMI_AR");
    iVar0 = 0;
    while (iVar0 < 3)
    {
        func_14(uParam0[iVar0 /*103*/], iVar0, "EMI_");
        iVar0++;
    }
    stop_save_array();
    register_int_to_save(&(uParam0->f_310), "EMIDGENRT");
    iVar0 = 0;
    _start_save_array(&(uParam0->f_311), 862, "EMDT_AR");
    iVar0 = 0;
    while (iVar0 < 7)
    {
        func_11(&(uParam0->f_311[iVar0 /*123*/]), iVar0, "EMD_");
        iVar0++;
    }
    stop_save_array();
    iVar0 = 0;
    _start_save_array(&(uParam0->f_1173), 1597, "EMS_AR");
    iVar0 = 0;
    while (iVar0 < 114)
    {
        func_10(&(uParam0->f_1173[iVar0 /*14*/]), iVar0, "EMS_");
        iVar0++;
    }
    stop_save_array();
    iVar0 = 0;
    _start_save_array(&(uParam0->f_2770), 265, "EMB_AR");
    iVar0 = 0;
    while (iVar0 < 8)
    {
        func_9(&(uParam0->f_2770[iVar0 /*33*/]), iVar0, "EMB_");
        iVar0++;
    }
    stop_save_array();
}

void func_9(var uParam0, int iParam1, char* sParam2)
{
    char cVar0[16];
    char cVar1[16];
    int iVar2;
    char cVar3[16];
    
    StringCopy(&cVar0, sParam2, 16);
    StringIntConCat(&cVar0, iParam1, 16);
    StringConCat(&cVar0, "_", 16);
    cVar1 = { cVar0 };
    _start_save_struct(uParam0, 33, &cVar0);
    cVar1 = { cVar0 };
    StringConCat(&cVar1, "A", 16);
    register_enum_to_save(uParam0, &cVar1);
    cVar1 = { cVar0 };
    StringConCat(&cVar1, "B", 16);
    register_enum_to_save(&(uParam0->f_1), &cVar1);
    cVar1 = { cVar0 };
    StringConCat(&cVar1, "C", 16);
    register_int_to_save(&(uParam0->f_2), &cVar1);
    cVar1 = { cVar0 };
    StringConCat(&cVar1, "D", 16);
    register_int_to_save(&(uParam0->f_3), &cVar1);
    cVar1 = { cVar0 };
    StringConCat(&cVar1, "E", 16);
    register_bool_to_save(&(uParam0->f_4), &cVar1);
    cVar1 = { cVar0 };
    StringConCat(&cVar1, "F", 16);
    register_bool_to_save(&(uParam0->f_5), &cVar1);
    cVar1 = { cVar0 };
    StringConCat(&cVar1, "G", 16);
    _0xE2089749(&(uParam0->f_6), &cVar1);
    cVar1 = { cVar0 };
    StringConCat(&cVar1, "H", 16);
    register_int_to_save(&(uParam0->f_10), &cVar1);
    cVar1 = { cVar0 };
    StringConCat(&cVar1, "J", 16);
    _start_save_array(&(uParam0->f_11), 21, &cVar1);
    iVar2 = 0;
    iVar2 = 0;
    while (iVar2 < 5)
    {
        cVar3 = { cVar1 };
        StringConCat(&cVar3, "_", 16);
        StringIntConCat(&cVar3, iVar2, 16);
        _0xE2089749(&(uParam0->f_11[iVar2 /*4*/]), &cVar3);
        iVar2++;
    }
    stop_save_array();
    cVar1 = { cVar0 };
    StringConCat(&cVar1, "RI", 16);
    register_int_to_save(&(uParam0->f_32), &cVar1);
    stop_save_struct();
}

void func_10(var uParam0, int iParam1, char* sParam2)
{
    char cVar0[16];
    char cVar1[16];
    int iVar2;
    char cVar3[16];
    
    StringCopy(&cVar0, sParam2, 16);
    StringIntConCat(&cVar0, iParam1, 16);
    _start_save_struct(uParam0, 14, &cVar0);
    StringConCat(&cVar0, "_", 16);
    cVar1 = { cVar0 };
    StringConCat(&cVar1, "A", 16);
    register_bool_to_save(uParam0, &cVar1);
    cVar1 = { cVar0 };
    StringConCat(&cVar1, "E", 16);
    register_bool_to_save(&(uParam0->f_1), &cVar1);
    cVar1 = { cVar0 };
    StringConCat(&cVar1, "B", 16);
    register_bool_to_save(&(uParam0->f_2), &cVar1);
    cVar1 = { cVar0 };
    StringConCat(&cVar1, "C", 16);
    register_int_to_save(&(uParam0->f_3), &cVar1);
    cVar1 = { cVar0 };
    StringConCat(&cVar1, "Z", 16);
    _start_save_array(&(uParam0->f_4), 10, &cVar1);
    iParam1 = 0;
    iVar2 = 0;
    while (iVar2 < 9)
    {
        cVar3 = { cVar1 };
        StringIntConCat(&cVar3, iVar2, 16);
        register_int_to_save(&(uParam0->f_4[iVar2]), &cVar3);
        iVar2++;
    }
    stop_save_array();
    stop_save_struct();
}

void func_11(var uParam0, int iParam1, char* sParam2)
{
    char cVar0[16];
    struct<4> Var1;
    int iVar2;
    
    StringCopy(&cVar0, sParam2, 16);
    StringIntConCat(&cVar0, iParam1, 16);
    StringConCat(&cVar0, "_", 16);
    Var1 = { cVar0 };
    _start_save_struct(uParam0, 123, &cVar0);
    Var1 = { cVar0 };
    StringConCat(&Var1, "A", 16);
    register_enum_to_save(uParam0, &Var1);
    Var1 = { cVar0 };
    StringConCat(&Var1, "B", 16);
    register_enum_to_save(&(uParam0->f_1), &Var1);
    Var1 = { cVar0 };
    StringConCat(&Var1, "C", 16);
    register_bool_to_save(&(uParam0->f_2), &Var1);
    Var1 = { cVar0 };
    StringConCat(&Var1, "D", 16);
    register_int_to_save(&(uParam0->f_3), &Var1);
    Var1 = { cVar0 };
    StringConCat(&Var1, "E", 16);
    _start_save_array(&(uParam0->f_4), 5, &Var1);
    iVar2 = 0;
    iVar2 = 0;
    while (iVar2 < 4)
    {
        func_13(&(uParam0->f_4[iVar2]), iVar2, &Var1);
        iVar2++;
    }
    stop_save_array();
    Var1 = { cVar0 };
    StringConCat(&Var1, "F", 16);
    register_int_to_save(&(uParam0->f_9), &Var1);
    Var1 = { cVar0 };
    StringConCat(&Var1, "G", 16);
    _start_save_array(&(uParam0->f_10), 113, &Var1);
    iVar2 = 0;
    iVar2 = 0;
    while (iVar2 < 4)
    {
        func_12(&(uParam0->f_10[iVar2 /*28*/]), iVar2, &Var1);
        iVar2++;
    }
    stop_save_array();
    stop_save_struct();
}

void func_12(var uParam0, int iParam1, char* sParam2)
{
    char cVar0[16];
    char cVar1[16];
    int iVar2;
    char cVar3[16];
    
    StringCopy(&cVar0, sParam2, 16);
    StringIntConCat(&cVar0, iParam1, 16);
    _start_save_struct(uParam0, 28, &cVar0);
    StringConCat(&cVar0, "_", 16);
    cVar1 = { cVar0 };
    StringConCat(&cVar1, "A", 16);
    register_enum_to_save(uParam0, &cVar1);
    cVar1 = { cVar0 };
    StringConCat(&cVar1, "B", 16);
    register_bool_to_save(&(uParam0->f_1), &cVar1);
    cVar1 = { cVar0 };
    StringConCat(&cVar1, "C", 16);
    _0xE2089749(&(uParam0->f_2), &cVar1);
    cVar1 = { cVar0 };
    StringConCat(&cVar1, "D", 16);
    register_int_to_save(&(uParam0->f_6), &cVar1);
    iVar2 = 0;
    cVar1 = { cVar0 };
    StringConCat(&cVar1, "E", 16);
    _start_save_array(&(uParam0->f_7), 21, &cVar1);
    iVar2 = 0;
    while (iVar2 < 5)
    {
        cVar3 = { cVar1 };
        StringIntConCat(&cVar3, iVar2, 16);
        _0xE2089749(&(uParam0->f_7[iVar2 /*4*/]), &cVar3);
        iVar2++;
    }
    stop_save_array();
    stop_save_struct();
}

void func_13(var uParam0, int iParam1, char* sParam2)
{
    char cVar0[16];
    
    StringCopy(&cVar0, sParam2, 16);
    StringIntConCat(&cVar0, iParam1, 16);
    register_enum_to_save(uParam0, &cVar0);
}

void func_14(var uParam0, int iParam1, char* sParam2)
{
    char cVar0[16];
    int iVar1;
    struct<4> Var2;
    char cVar3[16];
    
    StringCopy(&cVar0, sParam2, 16);
    StringIntConCat(&cVar0, iParam1, 16);
    StringConCat(&cVar0, "_", 16);
    _start_save_struct(uParam0, 103, &cVar0);
    iVar1 = 0;
    cVar3 = { cVar0 };
    StringConCat(&cVar3, "A", 16);
    register_int_to_save(uParam0, &cVar3);
    cVar3 = { cVar0 };
    StringConCat(&cVar3, "B", 16);
    _start_save_array(&(uParam0->f_1), 17, &cVar3);
    iVar1 = 0;
    while (iVar1 < 16)
    {
        Var2 = { cVar3 };
        StringIntConCat(&Var2, iVar1, 16);
        StringConCat(&Var2, "_", 16);
        func_16(&(uParam0->f_1[iVar1]), iVar1, &Var2);
        iVar1++;
    }
    stop_save_array();
    iVar1 = 0;
    cVar3 = { cVar0 };
    StringConCat(&cVar3, "C", 16);
    _start_save_array(&(uParam0->f_18), 17, &cVar3);
    iVar1 = 0;
    while (iVar1 < 16)
    {
        Var2 = { cVar3 };
        StringIntConCat(&Var2, iVar1, 16);
        StringConCat(&Var2, "_", 16);
        func_16(&(uParam0->f_18[iVar1]), iVar1, &Var2);
        iVar1++;
    }
    stop_save_array();
    iVar1 = 0;
    cVar3 = { cVar0 };
    StringConCat(&cVar3, "D", 16);
    _start_save_array(&(uParam0->f_35), 17, &cVar3);
    StringConCat(&cVar3, "_", 16);
    iVar1 = 0;
    while (iVar1 < 16)
    {
        Var2 = { cVar3 };
        StringIntConCat(&Var2, iVar1, 16);
        StringConCat(&Var2, "_", 16);
        func_15(&(uParam0->f_35[iVar1]), iVar1, &Var2);
        iVar1++;
    }
    stop_save_array();
    iVar1 = 0;
    cVar3 = { cVar0 };
    StringConCat(&cVar3, "E", 16);
    _start_save_array(&(uParam0->f_52), 17, &cVar3);
    iVar1 = 0;
    while (iVar1 < 16)
    {
        Var2 = { cVar3 };
        StringIntConCat(&Var2, iVar1, 16);
        StringConCat(&Var2, "_", 16);
        func_16(&(uParam0->f_52[iVar1]), iVar1, &Var2);
        iVar1++;
    }
    stop_save_array();
    iVar1 = 0;
    cVar3 = { cVar0 };
    StringConCat(&cVar3, "F", 16);
    _start_save_array(&(uParam0->f_69), 17, &cVar3);
    iVar1 = 0;
    while (iVar1 < 16)
    {
        Var2 = { cVar3 };
        StringIntConCat(&Var2, iVar1, 16);
        StringConCat(&Var2, "_", 16);
        func_15(&(uParam0->f_69[iVar1]), iVar1, &Var2);
        iVar1++;
    }
    stop_save_array();
    iVar1 = 0;
    cVar3 = { cVar0 };
    StringConCat(&cVar3, "G", 16);
    _start_save_array(&(uParam0->f_86), 17, &cVar3);
    iVar1 = 0;
    while (iVar1 < 16)
    {
        Var2 = { cVar3 };
        StringIntConCat(&Var2, iVar1, 16);
        StringConCat(&Var2, "_", 16);
        func_15(&(uParam0->f_86[iVar1]), iVar1, &Var2);
        iVar1++;
    }
    stop_save_array();
    stop_save_struct();
}

void func_15(var uParam0, int iParam1, char* sParam2)
{
    char cVar0[16];
    
    StringCopy(&cVar0, sParam2, 16);
    StringIntConCat(&cVar0, iParam1, 16);
    register_bool_to_save(uParam0, &cVar0);
}

void func_16(var uParam0, int iParam1, char* sParam2)
{
    char cVar0[16];
    
    StringCopy(&cVar0, sParam2, 16);
    StringIntConCat(&cVar0, iParam1, 16);
    register_int_to_save(uParam0, &cVar0);
}

void func_17()
{
    func_18(&(Global_3145728.f_16575), "FINANCE_SAVED_ARRAY");
}

void func_18(var uParam0, char* sParam1)
{
    int iVar0;
    char cVar1[16];
    char cVar2[16];
    int iVar3;
    char cVar4[16];
    char cVar5[16];
    char cVar6[16];
    char cVar7[16];
    char cVar8[16];
    char cVar9[16];
    
    _start_save_struct(uParam0, 473, sParam1);
    iVar0 = 0;
    _start_save_array(uParam0, 11, "M_S_CI_AR");
    iVar0 = 0;
    while (iVar0 < 10)
    {
        func_16(uParam0[iVar0], iVar0, "M_CI_");
        iVar0++;
    }
    stop_save_array();
    iVar0 = 0;
    _start_save_array(&(uParam0->f_11), 11, "M_S_I_AR");
    iVar0 = 0;
    while (iVar0 < 10)
    {
        func_19(&(uParam0->f_11[iVar0]), iVar0, "M_I_");
        iVar0++;
    }
    stop_save_array();
    iVar0 = 0;
    _start_save_array(&(uParam0->f_22), 11, "M_S_OOT_AR");
    iVar0 = 0;
    while (iVar0 < 10)
    {
        func_16(&(uParam0->f_22[iVar0]), iVar0, "M_OOT_");
        iVar0++;
    }
    stop_save_array();
    iVar0 = 0;
    _start_save_array(&(uParam0->f_33), 11, "F_S_CI_AR");
    iVar0 = 0;
    while (iVar0 < 10)
    {
        func_16(&(uParam0->f_33[iVar0]), iVar0, "F_CI_");
        iVar0++;
    }
    stop_save_array();
    iVar0 = 0;
    _start_save_array(&(uParam0->f_44), 11, "F_S_I_AR");
    iVar0 = 0;
    while (iVar0 < 10)
    {
        func_19(&(uParam0->f_44[iVar0]), iVar0, "F_I_");
        iVar0++;
    }
    stop_save_array();
    iVar0 = 0;
    _start_save_array(&(uParam0->f_55), 11, "F_S_OOT_AR");
    iVar0 = 0;
    while (iVar0 < 10)
    {
        func_16(&(uParam0->f_55[iVar0]), iVar0, "F_OOT_");
        iVar0++;
    }
    stop_save_array();
    iVar0 = 0;
    _start_save_array(&(uParam0->f_66), 11, "T_S_CI_AR");
    iVar0 = 0;
    while (iVar0 < 10)
    {
        func_16(&(uParam0->f_66[iVar0]), iVar0, "T_CI_");
        iVar0++;
    }
    stop_save_array();
    iVar0 = 0;
    _start_save_array(&(uParam0->f_77), 11, "T_S_I_AR");
    iVar0 = 0;
    while (iVar0 < 10)
    {
        func_19(&(uParam0->f_77[iVar0]), iVar0, "T_I_");
        iVar0++;
    }
    stop_save_array();
    iVar0 = 0;
    _start_save_array(&(uParam0->f_88), 11, "T_S_OOT_AR");
    iVar0 = 0;
    while (iVar0 < 10)
    {
        func_16(&(uParam0->f_88[iVar0]), iVar0, "T_OOT_");
        iVar0++;
    }
    stop_save_array();
    register_bool_to_save(&(uParam0->f_99), "STOCK_TUT");
    register_bool_to_save(&(uParam0->f_100), "ATM_TUT");
    register_bool_to_save(&(uParam0->f_101), "STK_PRC_GEN");
    register_bool_to_save(&(uParam0->f_102), "STK_PRC_SSK");
    _start_save_array(&(uParam0->f_103), 43, "SPSPD_AR");
    iVar0 = 0;
    while (iVar0 < 42)
    {
        func_19(&(uParam0->f_103[iVar0]), iVar0, "SPSPD_");
        iVar0++;
    }
    stop_save_array();
    _start_save_array(&(uParam0->f_146), 43, "SPSMAD_AR");
    iVar0 = 0;
    while (iVar0 < 42)
    {
        func_19(&(uParam0->f_146[iVar0]), iVar0, "SPSMAD_");
        iVar0++;
    }
    stop_save_array();
    _start_save_array(&(uParam0->f_189), 43, "SPSMID_AR");
    iVar0 = 0;
    while (iVar0 < 42)
    {
        func_19(&(uParam0->f_189[iVar0]), iVar0, "SPSMID_");
        iVar0++;
    }
    stop_save_array();
    register_bool_to_save(&(uParam0->f_232), "SCBNK_INI");
    _start_save_array(&(uParam0->f_233), 208, "PLR_ACNT_LGS");
    iVar0 = 0;
    while (iVar0 < 3)
    {
        StringCopy(&cVar1, "BNKST_", 16);
        StringIntConCat(&cVar1, iVar0, 16);
        _start_save_struct(&(uParam0->f_233[iVar0 /*69*/]), 69, &cVar1);
        cVar2 = { cVar1 };
        StringConCat(&cVar2, "ac", 16);
        register_int_to_save(&(uParam0->f_233[iVar0 /*69*/]), &cVar2);
        cVar2 = { cVar1 };
        StringConCat(&cVar2, "lp", 16);
        register_int_to_save(&(uParam0->f_233[iVar0 /*69*/].f_1), &cVar2);
        cVar2 = { cVar1 };
        StringConCat(&cVar2, "l", 16);
        _start_save_array(&(uParam0->f_233[iVar0 /*69*/].f_2), 67, &cVar2);
        StringConCat(&cVar2, "_", 16);
        iVar3 = 0;
        iVar3 = 0;
        while (iVar3 < 11)
        {
            cVar4 = { cVar2 };
            StringIntConCat(&cVar4, iVar3, 16);
            _start_save_struct(&(uParam0->f_233[iVar0 /*69*/].f_2[iVar3 /*6*/]), 6, &cVar4);
            cVar4 = { cVar2 };
            StringConCat(&cVar4, "a", 16);
            register_enum_to_save(&(uParam0->f_233[iVar0 /*69*/].f_2[iVar3 /*6*/]), &cVar4);
            cVar4 = { cVar2 };
            StringConCat(&cVar4, "b", 16);
            register_enum_to_save(&(uParam0->f_233[iVar0 /*69*/].f_2[iVar3 /*6*/].f_1), &cVar4);
            cVar4 = { cVar2 };
            StringConCat(&cVar4, "c", 16);
            register_int_to_save(&(uParam0->f_233[iVar0 /*69*/].f_2[iVar3 /*6*/].f_2), &cVar4);
            cVar4 = { cVar2 };
            StringConCat(&cVar4, "d", 16);
            register_enum_to_save(&(uParam0->f_233[iVar0 /*69*/].f_2[iVar3 /*6*/].f_3), &cVar4);
            cVar4 = { cVar2 };
            StringConCat(&cVar4, "e", 16);
            register_enum_to_save(&(uParam0->f_233[iVar0 /*69*/].f_2[iVar3 /*6*/].f_4), &cVar4);
            cVar4 = { cVar2 };
            StringConCat(&cVar4, "f", 16);
            register_int_to_save(&(uParam0->f_233[iVar0 /*69*/].f_2[iVar3 /*6*/].f_5), &cVar4);
            stop_save_struct();
            iVar3++;
        }
        stop_save_array();
        stop_save_struct();
        iVar0++;
    }
    stop_save_array();
    register_int_to_save(&(uParam0->f_441), "Profloss");
    register_int_to_save(&(uParam0->f_442), "FILTR_TOT");
    StringCopy(&cVar5, "FILTR_", 16);
    cVar6 = { cVar5 };
    StringConCat(&cVar6, "ff", 16);
    _start_save_array(&(uParam0->f_443), 9, &cVar6);
    iVar0 = 0;
    while (iVar0 < 8)
    {
        cVar7 = { cVar6 };
        StringIntConCat(&cVar7, iVar0, 16);
        register_enum_to_save(&(uParam0->f_443[iVar0]), &cVar7);
        iVar0++;
    }
    stop_save_array();
    cVar6 = { cVar5 };
    StringConCat(&cVar6, "fdr", 16);
    _start_save_array(&(uParam0->f_452), 9, &cVar6);
    iVar0 = 0;
    while (iVar0 < 8)
    {
        cVar8 = { cVar6 };
        StringIntConCat(&cVar8, iVar0, 16);
        register_int_to_save(&(uParam0->f_452[iVar0]), &cVar8);
        iVar0++;
    }
    stop_save_array();
    cVar6 = { cVar5 };
    StringConCat(&cVar6, "ffl", 16);
    _start_save_array(&(uParam0->f_461), 9, &cVar6);
    iVar0 = 0;
    while (iVar0 < 8)
    {
        cVar9 = { cVar6 };
        StringIntConCat(&cVar9, iVar0, 16);
        register_int_to_save(&(uParam0->f_461[iVar0]), &cVar9);
        iVar0++;
    }
    stop_save_array();
    register_bool_to_save(&(uParam0->f_470), "SCBNK_WEBTU");
    register_int_to_save(&(uParam0->f_471), "FIN_COUPONS");
    register_enum_to_save(&(uParam0->f_472), "FIN_NEWSENM");
    stop_save_struct();
}

void func_19(var uParam0, int iParam1, char* sParam2)
{
    char cVar0[16];
    
    StringCopy(&cVar0, sParam2, 16);
    StringIntConCat(&cVar0, iParam1, 16);
    register_float_to_save(uParam0, &cVar0);
}

void func_20()
{
    _start_save_struct(&(Global_3145728.f_16470), 105, "FLOW_HELP_STRUCT");
    func_23(&(Global_3145728.f_16470), "FLOW_HELP_STRUCT_ARRAY");
    register_int_to_save(&(Global_3145728.f_16470.f_97), "iFlowHelpCount");
    func_22(&(Global_3145728.f_16470.f_98), "FLOW_HELP_PRIORITY_ARRAY");
    func_21(&(Global_3145728.f_16470.f_102), "HELP_DISPLAYED_BITSET_ARRAY");
    stop_save_struct();
}

void func_21(var uParam0, char* sParam1)
{
    char cVar0[32];
    int iVar1;
    
    _start_save_array(uParam0, 3, sParam1);
    iVar1 = 0;
    while (iVar1 < *uParam0)
    {
        StringCopy(&cVar0, "HELP_DISPLAYED_BITSET_", 32);
        StringIntConCat(&cVar0, iVar1, 32);
        register_enum_to_save(uParam0[iVar1], &cVar0);
        iVar1++;
    }
    stop_save_array();
}

void func_22(var uParam0, char* sParam1)
{
    char cVar0[32];
    int iVar1;
    
    _start_save_array(uParam0, 4, sParam1);
    iVar1 = 0;
    while (iVar1 < *uParam0)
    {
        StringCopy(&cVar0, "FLOW_HELP_PRIORITY_", 32);
        StringIntConCat(&cVar0, iVar1, 32);
        register_enum_to_save(uParam0[iVar1], &cVar0);
        iVar1++;
    }
    stop_save_array();
}

void func_23(var uParam0, char* sParam1)
{
    struct<8> Var0;
    int iVar1;
    
    _start_save_array(uParam0, 97, sParam1);
    iVar1 = 0;
    while (iVar1 < *uParam0)
    {
        StringCopy(&Var0, "FLOW_HELP_STRUCT_", 32);
        StringIntConCat(&Var0, iVar1, 32);
        func_24(uParam0[iVar1 /*16*/], &Var0);
        iVar1++;
    }
    stop_save_array();
}

void func_24(var uParam0, char* sParam1)
{
    _start_save_struct(uParam0, 16, sParam1);
    register_text_label_to_save(uParam0, "tHelpText");
    register_text_label_to_save(&(uParam0->f_4), "tAddText");
    register_int_to_save(&(uParam0->f_8), "iStartTime");
    register_int_to_save(&(uParam0->f_9), "iDuration");
    register_int_to_save(&(uParam0->f_10), "iExpirationTime");
    register_int_to_save(&(uParam0->f_11), "iCharBitset");
    register_enum_to_save(&(uParam0->f_12), "ePriority");
    register_enum_to_save(&(uParam0->f_13), "eCodeIDStart");
    register_enum_to_save(&(uParam0->f_14), "eCodeIDDisplayed");
    register_bool_to_save(&(uParam0->f_15), "bSaveHelp");
    stop_save_struct();
}

void func_25()
{
    func_26(&(Global_3145728.f_13790), "VEHICLE_GEN_SAVED_DATA_STRUCT");
}

void func_26(var uParam0, char* sParam1)
{
    int iVar0;
    char cVar1[24];
    int iVar2;
    int iVar3;
    
    _start_save_struct(uParam0, 2680, sParam1);
    func_29(uParam0, "VEHICLE_GEN_PROPERTIES");
    _start_save_array(&(uParam0->f_64), 1174, "DYANMIC_DATA");
    iVar0 = 0;
    while (iVar0 < 23)
    {
        StringCopy(&cVar1, "DYANMIC_DATA", 24);
        StringIntConCat(&cVar1, iVar0, 24);
        func_28(&(uParam0->f_64[iVar0 /*51*/]), &cVar1);
        iVar0++;
    }
    stop_save_array();
    _start_save_array(&(uParam0->f_1999), 154, "HEIST_VEHS");
    iVar0 = 0;
    while (iVar0 < uParam0->f_1999)
    {
        StringCopy(&cVar1, "HEIST_VEHS", 24);
        StringIntConCat(&cVar1, iVar0, 24);
        func_28(&(uParam0->f_1999[iVar0 /*51*/]), &cVar1);
        iVar0++;
    }
    stop_save_array();
    _start_save_array(&(uParam0->f_2153), 310, "IMPOUND_VEHS");
    iVar2 = 0;
    while (iVar2 < 3)
    {
        StringCopy(&cVar1, "IMPOUND_VEHS", 24);
        StringConCat(&cVar1, "_", 24);
        StringIntConCat(&cVar1, iVar2, 24);
        _start_save_array(&(uParam0->f_2153[iVar2 /*103*/]), 103, &cVar1);
        iVar0 = 0;
        while (iVar0 < func_27(&(uParam0->f_2153[iVar2 /*103*/])))
        {
            StringCopy(&cVar1, "IMPOUND_VEHS", 24);
            StringConCat(&cVar1, "_", 24);
            StringIntConCat(&cVar1, iVar2, 24);
            StringConCat(&cVar1, "_", 24);
            StringIntConCat(&cVar1, iVar0, 24);
            func_28(&(uParam0->f_2153[iVar2 /*103*/][iVar0 /*51*/]), &cVar1);
            iVar0++;
        }
        stop_save_array();
        iVar2++;
    }
    stop_save_array();
    func_28(&(uParam0->f_2463), "NEXT_IMPOUND");
    register_bool_to_save(&(uParam0->f_2514), "IMPOUND_TRACK");
    register_bool_to_save(&(uParam0->f_2515), "IMPOUND_SWITCH");
    register_enum_to_save(&(uParam0->f_2516), "IMPOUND_CHAR");
    register_enum_to_save(&(uParam0->f_2517), "VEHGEN_CHAR");
    _start_save_array(&(uParam0->f_2518), 4, "IMPOUND_SLOTS");
    iVar0 = 0;
    while (iVar0 < uParam0->f_2518)
    {
        StringCopy(&cVar1, "IMPOUND_SLOTS", 24);
        StringIntConCat(&cVar1, iVar0, 24);
        register_int_to_save(&(uParam0->f_2518[iVar0]), &cVar1);
        iVar0++;
    }
    stop_save_array();
    _start_save_array(&(uParam0->f_2522), 4, "IMPOUND_HELP");
    iVar0 = 0;
    while (iVar0 < uParam0->f_2522)
    {
        StringCopy(&cVar1, "IMPOUND_HELP", 24);
        StringIntConCat(&cVar1, iVar0, 24);
        register_bool_to_save(&(uParam0->f_2522[iVar0]), &cVar1);
        iVar0++;
    }
    stop_save_array();
    _start_save_array(&(uParam0->f_1238), 70, "DYNAMIC_COORDS");
    iVar0 = 0;
    while (iVar0 < 23)
    {
        StringCopy(&cVar1, "DYNAMIC_COORDS", 24);
        StringIntConCat(&cVar1, iVar0, 24);
        StringConCat(&cVar1, "_X", 24);
        register_float_to_save(&(uParam0->f_1238[iVar0 /*3*/]), &cVar1);
        StringCopy(&cVar1, "DYNAMIC_COORDS", 24);
        StringIntConCat(&cVar1, iVar0, 24);
        StringConCat(&cVar1, "_Y", 24);
        register_float_to_save(&(uParam0->f_1238[iVar0 /*3*/].f_1), &cVar1);
        StringCopy(&cVar1, "DYNAMIC_COORDS", 24);
        StringIntConCat(&cVar1, iVar0, 24);
        StringConCat(&cVar1, "_Z", 24);
        register_float_to_save(&(uParam0->f_1238[iVar0 /*3*/].f_2), &cVar1);
        iVar0++;
    }
    stop_save_array();
    _start_save_array(&(uParam0->f_1308), 24, "DYANMIC_HEAD");
    iVar0 = 0;
    while (iVar0 < 23)
    {
        StringCopy(&cVar1, "DYNAMIC_HEAD", 24);
        StringIntConCat(&cVar1, iVar0, 24);
        register_float_to_save(&(uParam0->f_1308[iVar0]), &cVar1);
        iVar0++;
    }
    stop_save_array();
    _start_save_array(&(uParam0->f_1332), 24, "PLAYER_VEH");
    iVar0 = 0;
    while (iVar0 < 23)
    {
        StringCopy(&cVar1, "PLAYER_VEH", 24);
        StringIntConCat(&cVar1, iVar0, 24);
        register_int_to_save(&(uParam0->f_1332[iVar0]), &cVar1);
        iVar0++;
    }
    stop_save_array();
    _start_save_array(&(uParam0->f_1356), 640, "WEB_VEHICLES");
    iVar3 = 0;
    while (iVar3 < uParam0->f_1356)
    {
        StringCopy(&cVar1, "WEB_VEH_", 24);
        StringIntConCat(&cVar1, iVar3, 24);
        _start_save_struct(&(uParam0->f_1356[iVar3 /*213*/]), 213, &cVar1);
        _start_save_array(&(uParam0->f_1356[iVar3 /*213*/]), 71, "SITE_ID");
        iVar0 = 0;
        while (iVar0 < 70)
        {
            StringCopy(&cVar1, "SITE_ID_", 24);
            StringIntConCat(&cVar1, iVar0, 24);
            register_int_to_save(&(uParam0->f_1356[iVar3 /*213*/][iVar0]), &cVar1);
            iVar0++;
        }
        stop_save_array();
        _start_save_array(&(uParam0->f_1356[iVar3 /*213*/].f_71), 71, "VEH_GEN");
        iVar0 = 0;
        while (iVar0 < 70)
        {
            StringCopy(&cVar1, "VEH_GEN_", 24);
            StringIntConCat(&cVar1, iVar0, 24);
            register_enum_to_save(&(uParam0->f_1356[iVar3 /*213*/].f_71[iVar0]), &cVar1);
            iVar0++;
        }
        stop_save_array();
        _start_save_array(&(uParam0->f_1356[iVar3 /*213*/].f_142), 71, "EMAIL_DATE");
        iVar0 = 0;
        while (iVar0 < 70)
        {
            StringCopy(&cVar1, "EMAIL_DATE_", 24);
            StringIntConCat(&cVar1, iVar0, 24);
            register_enum_to_save(&(uParam0->f_1356[iVar3 /*213*/].f_142[iVar0]), &cVar1);
            iVar0++;
        }
        stop_save_array();
        stop_save_struct();
        iVar3++;
    }
    stop_save_array();
    _start_save_array(&(uParam0->f_2526), 154, "SWITCH_IMP");
    iVar0 = 0;
    while (iVar0 < uParam0->f_2526)
    {
        StringCopy(&cVar1, "SWITCH_IMP", 24);
        StringIntConCat(&cVar1, iVar0, 24);
        func_28(&(uParam0->f_2526[iVar0 /*51*/]), &cVar1);
        iVar0++;
    }
    stop_save_array();
    register_bool_to_save(&(uParam0->f_1998), "VEHDATA_SETUP");
    register_enum_to_save(&(uParam0->f_1997), "MISSVEH_TIME");
    register_bool_to_save(&(uParam0->f_1996), "GARAGE_INTRO");
    stop_save_struct();
}

int func_27(var uParam0)
{
    return *uParam0;
}

void func_28(var uParam0, char* sParam1)
{
    int iVar0;
    char cVar1[16];
    
    _start_save_struct(uParam0, 51, sParam1);
    register_int_to_save(uParam0, "iPlateIndex");
    _0xE2089749(&(uParam0->f_1), "tlPlateText");
    register_int_to_save(&(uParam0->f_5), "iColour1");
    register_int_to_save(&(uParam0->f_6), "iColour2");
    register_int_to_save(&(uParam0->f_7), "iColourExtra1");
    register_int_to_save(&(uParam0->f_8), "iColourExtra2");
    register_int_to_save(&(uParam0->f_38), "iTyreR");
    register_int_to_save(&(uParam0->f_39), "iTyreG");
    register_int_to_save(&(uParam0->f_40), "iTyreB");
    register_int_to_save(&(uParam0->f_41), "iWindowTintColour");
    register_int_to_save(&(uParam0->f_43), "iLivery");
    register_int_to_save(&(uParam0->f_45), "iWheelType");
    register_enum_to_save(&(uParam0->f_44), "eRoofState");
    register_int_to_save(&(uParam0->f_50), "iFlags");
    register_enum_to_save(&(uParam0->f_46), "eLockState");
    register_int_to_save(&(uParam0->f_47), "iCustomR");
    register_int_to_save(&(uParam0->f_48), "iCustomG");
    register_int_to_save(&(uParam0->f_49), "iCustomB");
    register_enum_to_save(&(uParam0->f_42), "eModel");
    _start_save_array(&(uParam0->f_9), 26, "VEH_MOD_ID");
    iVar0 = 0;
    while (iVar0 < 25)
    {
        StringCopy(&cVar1, "MOD_ID", 16);
        StringIntConCat(&cVar1, iVar0, 16);
        register_int_to_save(&(uParam0->f_9[iVar0]), &cVar1);
        iVar0++;
    }
    stop_save_array();
    _start_save_array(&(uParam0->f_35), 3, "VEH_MOD_VAR");
    iVar0 = 0;
    while (iVar0 < 2)
    {
        StringCopy(&cVar1, "MOD_VAR", 16);
        StringIntConCat(&cVar1, iVar0, 16);
        register_int_to_save(&(uParam0->f_35[iVar0]), &cVar1);
        iVar0++;
    }
    stop_save_array();
    stop_save_struct();
}

void func_29(var uParam0, char* sParam1)
{
    int iVar0;
    char cVar1[32];
    
    iVar0 = 0;
    _start_save_array(uParam0, 64, sParam1);
    iVar0 = 0;
    while (iVar0 < 63)
    {
        StringCopy(&cVar1, "VEHGEN_", 32);
        StringIntConCat(&cVar1, iVar0, 32);
        register_int_to_save(uParam0[iVar0], &cVar1);
        iVar0++;
    }
    stop_save_array();
}

void func_30()
{
    func_37(&(Global_3145728.f_10439), "CELLPHONE_SETTINGS_SAVED_ARRAY");
    func_34(&(Global_3145728.f_10528), "TEXT_MESSAGES_SAVED_ARRAY");
    func_31(&(Global_3145728.f_13469), "GALLERY_IMAGES_SAVED_ARRAY");
}

void func_31(var uParam0, char* sParam1)
{
    _start_save_struct(uParam0, 321, sParam1);
    func_32(uParam0, "struct_g_GalleryImage");
    stop_save_struct();
}

void func_32(var uParam0, char* sParam1)
{
    int iVar0;
    struct<6> Var1;
    
    iVar0 = 0;
    _start_save_array(uParam0, 321, sParam1);
    while (iVar0 < 10)
    {
        StringCopy(&Var1, "GalleryImgIndex", 24);
        StringConCat(&Var1, "_", 24);
        StringIntConCat(&Var1, iVar0, 24);
        func_33(uParam0[iVar0 /*32*/], &Var1);
        iVar0++;
    }
    stop_save_array();
}

void func_33(var uParam0, char* sParam1)
{
    _start_save_struct(uParam0, 32, sParam1);
    _0x6B4335DD(uParam0, "Thumb_label");
    _0x6B4335DD(&(uParam0->f_16), "Photo_label");
    stop_save_struct();
}

void func_34(var uParam0, char* sParam1)
{
    _start_save_struct(uParam0, 2941, sParam1);
    func_35(uParam0, "struct_g_TextMessage");
    stop_save_struct();
}

void func_35(var uParam0, char* sParam1)
{
    int iVar0;
    struct<6> Var1;
    
    iVar0 = 0;
    _start_save_array(uParam0, 2941, sParam1);
    while (iVar0 < 35)
    {
        StringCopy(&Var1, "TextMsgIndex", 24);
        StringConCat(&Var1, "_", 24);
        StringIntConCat(&Var1, iVar0, 24);
        func_36(uParam0[iVar0 /*84*/], &Var1);
        iVar0++;
    }
    stop_save_array();
}

void func_36(var uParam0, char* sParam1)
{
    _start_save_struct(uParam0, 84, sParam1);
    _0x6B4335DD(uParam0, "GXTlabel");
    register_int_to_save(&(uParam0->f_16), "FeedId_Int");
    register_enum_to_save(&(uParam0->f_17), "Sender");
    register_int_to_save(&(uParam0->f_18), "SentSecs");
    register_int_to_save(&(uParam0->f_18.f_1), "SentMins");
    register_int_to_save(&(uParam0->f_18.f_2), "SentHours");
    register_int_to_save(&(uParam0->f_18.f_3), "SentDay");
    register_int_to_save(&(uParam0->f_18.f_4), "SentMonth");
    register_int_to_save(&(uParam0->f_18.f_5), "SentYear");
    register_enum_to_save(&(uParam0->f_24), "LockStatus");
    register_enum_to_save(&(uParam0->f_25), "IsCritical");
    register_enum_to_save(&(uParam0->f_26), "AutoUnlock");
    register_enum_to_save(&(uParam0->f_27), "DelMode");
    register_enum_to_save(&(uParam0->f_28), "ReadStatus");
    register_enum_to_save(&(uParam0->f_29), "ReplyStatus");
    register_enum_to_save(&(uParam0->f_30), "CallSenderStatus");
    register_enum_to_save(&(uParam0->f_31), "BarterStatus");
    register_enum_to_save(&(uParam0->f_32), "SpecialComps");
    _0xF91B8C33(&(uParam0->f_33), "StringComp");
    register_int_to_save(&(uParam0->f_39), "NumberComp");
    register_int_to_save(&(uParam0->f_46), "NumberofAdditionalStrings");
    _0x6B4335DD(&(uParam0->f_47), "SecondStringComp");
    _0x6B4335DD(&(uParam0->f_63), "ThirdStringComp");
    _0xF91B8C33(&(uParam0->f_40), "SenderStringComp");
    _start_save_array(&(uParam0->f_79), 5, "PhonePresenceArray");
    register_bool_to_save(&(uParam0->f_79[0]), "MichaelPres");
    register_bool_to_save(&(uParam0->f_79[1]), "FrankPres");
    register_bool_to_save(&(uParam0->f_79[2]), "TrevPres");
    register_bool_to_save(&(uParam0->f_79[3]), "MP_Pres");
    stop_save_array();
    stop_save_struct();
}

void func_37(var uParam0, char* sParam1)
{
    _start_save_struct(uParam0, 89, sParam1);
    func_38(uParam0, "struct_g_CellphoneSettings");
    register_bool_to_save(&(Global_3145728.f_10439.f_81), "Sleep_Warning_Been_Displayed");
    register_bool_to_save(&(Global_3145728.f_10439.f_82), "SleepIcon_Help_Been_Displayed");
    register_bool_to_save(&(Global_3145728.f_10439.f_83), "Sleep_Reminder_Been_Displayed");
    register_bool_to_save(&(Global_3145728.f_10439.f_84), "QuickSave_Help_Been_Displayed");
    register_bool_to_save(&(Global_3145728.f_10439.f_85), "TranslucentIcon_Help_Been_Displayed");
    register_bool_to_save(&(Global_3145728.f_10439.f_86), "MPTranslucentIcon_Help_Been_Displayed");
    register_bool_to_save(&(Global_3145728.f_10439.f_87), "Is_Sniper_App_Available");
    register_bool_to_save(&(Global_3145728.f_10439.f_88), "Is_Trackify_App_Available");
    stop_save_struct();
}

void func_38(var uParam0, char* sParam1)
{
    int iVar0;
    struct<6> Var1;
    
    iVar0 = 0;
    _start_save_array(uParam0, 81, sParam1);
    while (iVar0 < 4)
    {
        switch (iVar0)
        {
            case 0:
                StringCopy(&Var1, "Michael_Char_0_CS", 24);
                break;
            
            case 1:
                StringCopy(&Var1, "Franklin_Char_1_CS", 24);
                break;
            
            case 2:
                StringCopy(&Var1, "Trevor_Char_2_CS", 24);
                break;
            
            case 3:
                StringCopy(&Var1, "MP_Char_3_CS", 24);
                break;
        }
        func_39(uParam0[iVar0 /*20*/], &Var1);
        iVar0++;
    }
    stop_save_array();
}

void func_39(var uParam0, char* sParam1)
{
    _start_save_struct(uParam0, 20, sParam1);
    _0xF91B8C33(uParam0, "Movie_Name_For_This_Player");
    register_int_to_save(&(uParam0->f_7), "OS_For_This_Player");
    register_int_to_save(&(uParam0->f_6), "Theme_For_This_Player");
    register_int_to_save(&(uParam0->f_10), "Vibrate_For_This_Player");
    register_int_to_save(&(uParam0->f_8), "Provider_For_This_Player");
    register_int_to_save(&(uParam0->f_9), "Wallpaper_For_This_Player");
    _0xF91B8C33(&(uParam0->f_11), "Ringtone_For_This_Player");
    register_bool_to_save(&(uParam0->f_17), "LastMessageNeedsRead");
    register_bool_to_save(&(uParam0->f_18), "LaunchToTextMessageScreen");
    register_bool_to_save(&(uParam0->f_19), "ThisPlayerOnScheduledActivity");
    stop_save_struct();
}

void func_40()
{
    func_41(&(Global_3145728.f_6618), "COMP_PERCENT_SAVED_ARRAY");
}

void func_41(var uParam0, char* sParam1)
{
    _start_save_struct(uParam0, 3821, sParam1);
    func_42(uParam0, "struct_g_CompletionPercentage");
    register_float_to_save(&(uParam0->f_3817), "Game_Complete_Percentage");
    register_bool_to_save(&(uParam0->f_3818), "Has_100_Percent_Been_Reached");
    register_int_to_save(&(uParam0->f_3819), "SP_Event_F_EntryTrackerBitset");
    register_int_to_save(&(uParam0->f_3820), "SP_Event_F_EntryTrackerBS_2");
    stop_save_struct();
}

void func_42(var uParam0, char* sParam1)
{
    int iVar0;
    struct<8> Var1;
    
    iVar0 = 0;
    _start_save_array(uParam0, 3817, sParam1);
    while (iVar0 < 318)
    {
        MemCopy(&Var1, {Global_3145728.f_6618[iVar0 /*12*/]}, 8);
        StringConCat(&Var1, "_SavedAGT", 32);
        StringIntConCat(&Var1, iVar0, 32);
        func_43(uParam0[iVar0 /*12*/], &Var1);
        iVar0++;
    }
    stop_save_array();
}

void func_43(var uParam0, char* sParam1)
{
    _start_save_struct(uParam0, 12, sParam1);
    register_bool_to_save(&(uParam0->f_5), "Marked_as_Completed");
    register_text_label_to_save(uParam0, "CompPercentage_Label");
    register_float_to_save(&(uParam0->f_4), "CompPercentage_Weighting");
    register_enum_to_save(&(uParam0->f_6), "CompPercentage_Grouping");
    register_enum_to_save(&(uParam0->f_7), "CompPercentage_ChoiceMission");
    register_int_to_save(&(uParam0->f_8), "CompPercentage_EnumAndVarData");
    register_enum_to_save(&(uParam0->f_9), "CompPercentage_SC_Cluster");
    register_float_to_save(&(uParam0->f_10), "Runtime_defined_location_X");
    register_float_to_save(&(uParam0->f_11), "Runtime_defined_location_Y");
    stop_save_struct();
}

void func_44()
{
    _start_save_struct(&(Global_3145728.f_6186), 432, "CODE_CONTROL_DATA_STRUCT");
    func_46(&(Global_3145728.f_6186), "CODE_CONTROL_RUNFLAG_ARRAY");
    func_45(&(Global_3145728.f_6186.f_216), "CODE_CONTROL_EXECUTE_TIMER_ARRAY");
    stop_save_struct();
}

void func_45(var uParam0, char* sParam1)
{
    int iVar0;
    char cVar1[64];
    
    _start_save_array(uParam0, 216, sParam1);
    iVar0 = 0;
    while (iVar0 < 215)
    {
        StringCopy(&cVar1, "CODE_ID_EXECUTE_TIMER_", 64);
        StringIntConCat(&cVar1, iVar0, 64);
        register_int_to_save(uParam0[iVar0], &cVar1);
        iVar0++;
    }
    stop_save_array();
}

void func_46(var uParam0, char* sParam1)
{
    int iVar0;
    char cVar1[64];
    
    _start_save_array(uParam0, 216, sParam1);
    iVar0 = 0;
    while (iVar0 < 215)
    {
        StringCopy(&cVar1, "CODE_ID_RUNFLAG_", 64);
        StringIntConCat(&cVar1, iVar0, 64);
        register_bool_to_save(uParam0[iVar0], &cVar1);
        iVar0++;
    }
    stop_save_array();
}

void func_47()
{
    _start_save_struct(&(Global_3145728.f_5291), 895, "COMM_CONTROL_DATA_STRUCT");
    func_58(&(Global_3145728.f_5291), "COMM_CONTROL_QUEUED_CALLS_ARRAY");
    register_int_to_save(&(Global_3145728.f_5291.f_136), "No_Queued_Calls");
    func_57(&(Global_3145728.f_5291.f_137), "COMM_CONTROL_MISSED_CALLS_ARRAY");
    register_int_to_save(&(Global_3145728.f_5291.f_198), "No_Missed_Calls");
    func_55(&(Global_3145728.f_5291.f_199), "COMM_CONTROL_CHAT_CALLS_ARRAY");
    register_int_to_save(&(Global_3145728.f_5291.f_650), "No_Chat_Calls");
    func_54(&(Global_3145728.f_5291.f_651), "COMM_CONTROL_QUEUED_TEXTS_ARRAY");
    register_int_to_save(&(Global_3145728.f_5291.f_764), "No_Queued_Texts");
    func_52(&(Global_3145728.f_5291.f_837), "COMM_CONTROL_SENT_TEXTS_ARRAY");
    register_int_to_save(&(Global_3145728.f_5291.f_880), "No_Sent_Texts");
    func_49(&(Global_3145728.f_5291.f_765), "COMM_CONTROL_QUEUED_EMAILS_ARRAY");
    register_int_to_save(&(Global_3145728.f_5291.f_836), "No_Queued_Emails");
    register_enum_to_save(&(Global_3145728.f_5291.f_881), "Last_Completed_Call");
    register_bool_to_save(&(Global_3145728.f_5291.f_882), "Last_Call_Answered");
    register_bool_to_save(&(Global_3145728.f_5291.f_883), "Last_Call_Had_Response");
    register_bool_to_save(&(Global_3145728.f_5291.f_884), "Last_Call_Response");
    register_enum_to_save(&(Global_3145728.f_5291.f_885), "Last_Completed_Text");
    register_bool_to_save(&(Global_3145728.f_5291.f_886), "Last_Text_Had_Response");
    register_bool_to_save(&(Global_3145728.f_5291.f_887), "Last_Text_Response");
    register_enum_to_save(&(Global_3145728.f_5291.f_888), "Last_Completed_Email");
    func_48(&(Global_3145728.f_5291.f_889), "COMM_CONTROL_CHAR_PRIORITY_ARRAY");
    register_int_to_save(&(Global_3145728.f_5291.f_893), "Exile_Warning_Bitset");
    register_int_to_save(&(Global_3145728.f_5291.f_894), "Comms_Game_time");
    stop_save_struct();
}

void func_48(var uParam0, char* sParam1)
{
    int iVar0;
    char cVar1[64];
    int iVar2;
    
    _start_save_array(uParam0, 4, sParam1);
    iVar0 = 0;
    while (iVar0 < 3)
    {
        iVar2 = iVar0;
        StringCopy(&cVar1, "Character_Priority_", 64);
        switch (iVar2)
        {
            case 0:
                StringConCat(&cVar1, "Michael", 64);
                break;
            
            case 1:
                StringConCat(&cVar1, "Franklin", 64);
                break;
            
            case 2:
                StringConCat(&cVar1, "Trevor", 64);
                break;
        }
        register_enum_to_save(uParam0[iVar0], &cVar1);
        iVar0++;
    }
    stop_save_array();
}

void func_49(var uParam0, char* sParam1)
{
    int iVar0;
    struct<16> Var1;
    
    _start_save_array(uParam0, 71, sParam1);
    iVar0 = 0;
    while (iVar0 < 7)
    {
        StringCopy(&Var1, "EMAIL_DATA_STRUCT_", 64);
        StringIntConCat(&Var1, iVar0, 64);
        func_50(uParam0[iVar0 /*10*/], &Var1);
        iVar0++;
    }
    stop_save_array();
}

void func_50(var uParam0, char* sParam1)
{
    _start_save_struct(uParam0, 10, sParam1);
    func_51(uParam0, "COMMUNICATION_DATA_STRUCT");
    stop_save_struct();
}

void func_51(var uParam0, char* sParam1)
{
    _start_save_struct(uParam0, 10, sParam1);
    register_enum_to_save(uParam0, "ID");
    register_int_to_save(&(uParam0->f_1), "Settings");
    register_int_to_save(&(uParam0->f_2), "Player_Char_Bitset");
    register_enum_to_save(&(uParam0->f_3), "Priority");
    register_int_to_save(&(uParam0->f_4), "Queue_Time");
    register_int_to_save(&(uParam0->f_5), "Requeue_Time");
    register_enum_to_save(&(uParam0->f_6), "NPC_Character");
    register_enum_to_save(&(uParam0->f_7), "Restricted_Area_ID");
    register_enum_to_save(&(uParam0->f_8), "Execute_On_Complete_ID");
    register_enum_to_save(&(uParam0->f_9), "Send_Check");
    stop_save_struct();
}

void func_52(var uParam0, char* sParam1)
{
    int iVar0;
    struct<16> Var1;
    
    _start_save_array(uParam0, 43, sParam1);
    iVar0 = 0;
    while (iVar0 < 3)
    {
        StringCopy(&Var1, "SENT_TEXT_DATA_STRUCT_", 64);
        StringIntConCat(&Var1, iVar0, 64);
        func_53(uParam0[iVar0 /*14*/], &Var1);
        iVar0++;
    }
    stop_save_array();
}

void func_53(var uParam0, char* sParam1)
{
    _start_save_struct(uParam0, 14, sParam1);
    func_51(uParam0, "COMMUNICATION_DATA_STRUCT");
    register_enum_to_save(&(uParam0->f_10), "ePart1");
    register_enum_to_save(&(uParam0->f_11), "ePart2");
    register_int_to_save(&(uParam0->f_12), "Fail_Count");
    register_enum_to_save(&(uParam0->f_13), "WhichCanCallSenderStatus");
    stop_save_struct();
}

void func_54(var uParam0, char* sParam1)
{
    int iVar0;
    struct<16> Var1;
    
    _start_save_array(uParam0, 113, sParam1);
    iVar0 = 0;
    while (iVar0 < 8)
    {
        StringCopy(&Var1, "TEXT_MESSAGE_DATA_STRUCT_", 64);
        StringIntConCat(&Var1, iVar0, 64);
        func_53(uParam0[iVar0 /*14*/], &Var1);
        iVar0++;
    }
    stop_save_array();
}

void func_55(var uParam0, char* sParam1)
{
    int iVar0;
    struct<16> Var1;
    
    _start_save_array(uParam0, 451, sParam1);
    iVar0 = 0;
    while (iVar0 < 30)
    {
        StringCopy(&Var1, "CHAT_CALL_DATA_STRUCT_", 64);
        StringIntConCat(&Var1, iVar0, 64);
        func_56(uParam0[iVar0 /*15*/], &Var1);
        iVar0++;
    }
    stop_save_array();
}

void func_56(var uParam0, char* sParam1)
{
    _start_save_struct(uParam0, 15, sParam1);
    func_51(uParam0, "COMMUNICATION_DATA_STRUCT");
    register_enum_to_save(&(uParam0->f_10), "eCommExtra");
    register_enum_to_save(&(uParam0->f_11), "eCommExtra2");
    register_enum_to_save(&(uParam0->f_12), "eYesResponse");
    register_enum_to_save(&(uParam0->f_13), "eNoResponse");
    register_int_to_save(&(uParam0->f_14), "Speaker_ID");
    stop_save_struct();
}

void func_57(var uParam0, char* sParam1)
{
    int iVar0;
    struct<16> Var1;
    
    _start_save_array(uParam0, 61, sParam1);
    iVar0 = 0;
    while (iVar0 < 4)
    {
        StringCopy(&Var1, "MISSED_CALL_DATA_STRUCT_", 64);
        StringIntConCat(&Var1, iVar0, 64);
        func_56(uParam0[iVar0 /*15*/], &Var1);
        iVar0++;
    }
    stop_save_array();
}

void func_58(var uParam0, char* sParam1)
{
    int iVar0;
    struct<16> Var1;
    
    _start_save_array(uParam0, 136, sParam1);
    iVar0 = 0;
    while (iVar0 < 9)
    {
        StringCopy(&Var1, "CALL_DATA_STRUCT_", 64);
        StringIntConCat(&Var1, iVar0, 64);
        func_56(uParam0[iVar0 /*15*/], &Var1);
        iVar0++;
    }
    stop_save_array();
}

void func_59()
{
    func_60(&(Global_3145728.f_4185), "BUILDING_SAVED_DATA_STRUCT");
}

void func_60(var uParam0, char* sParam1)
{
    _start_save_struct(uParam0, 420, sParam1);
    func_62(uParam0, "DOOR_STATES");
    func_61(&(uParam0->f_226), "BUILDING_STATES");
    register_bool_to_save(&(uParam0->f_419), "BUILDING_DEFAULT_DATA_SET");
    stop_save_struct();
}

void func_61(var uParam0, char* sParam1)
{
    int iVar0;
    char cVar1[32];
    
    iVar0 = 0;
    _start_save_array(uParam0, 193, sParam1);
    iVar0 = 0;
    while (iVar0 < 192)
    {
        StringCopy(&cVar1, "BUILDING_", 32);
        StringIntConCat(&cVar1, iVar0, 32);
        register_enum_to_save(uParam0[iVar0], &cVar1);
        iVar0++;
    }
    stop_save_array();
}

void func_62(var uParam0, char* sParam1)
{
    int iVar0;
    char cVar1[32];
    
    iVar0 = 0;
    _start_save_array(uParam0, 226, sParam1);
    iVar0 = 0;
    while (iVar0 < 225)
    {
        StringCopy(&cVar1, "DOOR_", 32);
        StringIntConCat(&cVar1, iVar0, 32);
        register_enum_to_save(uParam0[iVar0], &cVar1);
        iVar0++;
    }
    stop_save_array();
}

void func_63()
{
    func_64(&(Global_3145728.f_20437), "CHARSHEET_SAVED_ARRAY");
}

void func_64(var uParam0, char* sParam1)
{
    _start_save_struct(uParam0, 4206, sParam1);
    func_65(uParam0, "struct_g_CharacterSheet");
    stop_save_struct();
}

void func_65(var uParam0, char* sParam1)
{
    int iVar0;
    struct<8> Var1;
    
    iVar0 = 0;
    _start_save_array(uParam0, 4206, sParam1);
    while (iVar0 < 145)
    {
        MemCopy(&Var1, {Global_86838.f_23936[iVar0 /*29*/].f_3}, 8);
        StringConCat(&Var1, "_Saved", 32);
        func_66(uParam0[iVar0 /*29*/], &Var1);
        iVar0++;
    }
    stop_save_array();
}

void func_66(var uParam0, char* sParam1)
{
    _start_save_struct(uParam0, 29, sParam1);
    register_enum_to_save(uParam0, "game_model");
    register_int_to_save(&(uParam0->f_1), "alpha_int");
    register_int_to_save(&(uParam0->f_2), "orig_alpha_int");
    register_text_label_to_save(&(uParam0->f_3), "char_label");
    register_text_label_to_save(&(uParam0->f_7), "char_picture");
    register_enum_to_save(&(uParam0->f_11), "is_friend");
    _start_save_array(&(uParam0->f_12), 5, "PhoneBookStateArray");
    register_enum_to_save(&(uParam0->f_12[0]), "PhoneBook_State_ToMichael");
    register_enum_to_save(&(uParam0->f_12[1]), "PhoneBook_State_ToFranklin");
    register_enum_to_save(&(uParam0->f_12[2]), "PhoneBook_State_ToTrevor");
    register_enum_to_save(&(uParam0->f_12[3]), "PhoneBook_State_ToMP");
    stop_save_array();
    register_enum_to_save(&(uParam0->f_17), "bank_acc");
    register_enum_to_save(&(uParam0->f_18), "Picmsg_Status");
    _start_save_array(&(uParam0->f_19), 5, "MissedCallStatusArray");
    register_enum_to_save(&(uParam0->f_19[0]), "MissedCallStatus_ToMichael");
    register_enum_to_save(&(uParam0->f_19[1]), "MissedCallStatus_ToFranklin");
    register_enum_to_save(&(uParam0->f_19[2]), "MissedCallStatus_ToTrevor");
    register_enum_to_save(&(uParam0->f_19[3]), "MissedCallStatus_ToMP");
    stop_save_array();
    _start_save_array(&(uParam0->f_24), 5, "StatusAsCallerArray");
    register_enum_to_save(&(uParam0->f_24[0]), "StatusAsCaller_ToMichael");
    register_enum_to_save(&(uParam0->f_24[1]), "StatusAsCaller_ToFranklin");
    register_enum_to_save(&(uParam0->f_24[2]), "StatusAsCaller_ToTrevor");
    register_enum_to_save(&(uParam0->f_24[3]), "StatusAsCaller_ToMP");
    stop_save_array();
    stop_save_struct();
}

void func_67()
{
    func_68(&(Global_3145728.f_4153), "RESPAWN_LOCATION_DATA");
}

void func_68(var uParam0, char* sParam1)
{
    _start_save_struct(uParam0, 32, sParam1);
    func_71(uParam0, "SAVEHOUSE");
    func_70(&(uParam0->f_17), "POLICE_STATION");
    func_69(&(uParam0->f_11), "HOSPITAL");
    register_bool_to_save(&(uParam0->f_25), "SAVEHOUSE_DATA_SET");
    register_bool_to_save(&(uParam0->f_26), "HOSPITAL_DATA_SET");
    register_bool_to_save(&(uParam0->f_27), "POLICE_DATA_SET");
    register_bool_to_save(&(uParam0->f_28), "bSeenFirstTimeWasted");
    register_bool_to_save(&(uParam0->f_29), "bSeenFirstTimeDrowned");
    register_bool_to_save(&(uParam0->f_30), "bSeenFirstTimeBusted");
    register_bool_to_save(&(uParam0->f_31), "bNewGameStarted");
    stop_save_struct();
}

void func_69(var uParam0, char* sParam1)
{
    int iVar0;
    char cVar1[32];
    
    iVar0 = 0;
    _start_save_array(uParam0, 6, sParam1);
    iVar0 = 0;
    while (iVar0 < *uParam0)
    {
        StringCopy(&cVar1, sParam1, 32);
        StringIntConCat(&cVar1, iVar0, 32);
        register_int_to_save(uParam0[iVar0], &cVar1);
        iVar0++;
    }
    stop_save_array();
}

void func_70(var uParam0, char* sParam1)
{
    int iVar0;
    char cVar1[32];
    
    iVar0 = 0;
    _start_save_array(uParam0, 8, sParam1);
    iVar0 = 0;
    while (iVar0 < *uParam0)
    {
        StringCopy(&cVar1, sParam1, 32);
        StringIntConCat(&cVar1, iVar0, 32);
        register_int_to_save(uParam0[iVar0], &cVar1);
        iVar0++;
    }
    stop_save_array();
}

void func_71(var uParam0, char* sParam1)
{
    int iVar0;
    char cVar1[32];
    
    iVar0 = 0;
    _start_save_array(uParam0, 11, sParam1);
    iVar0 = 0;
    while (iVar0 < *uParam0)
    {
        StringCopy(&cVar1, sParam1, 32);
        StringIntConCat(&cVar1, iVar0, 32);
        register_int_to_save(uParam0[iVar0], &cVar1);
        iVar0++;
    }
    stop_save_array();
}

void func_72()
{
    _start_save_array(&(Global_3145728.f_950), 493, "COMPONENTS_ARRAY");
    func_87(&(Global_3145728.f_950[0 /*164*/]), "SP0");
    func_87(&(Global_3145728.f_950[1 /*164*/]), "SP1");
    func_87(&(Global_3145728.f_950[2 /*164*/]), "SP2");
    stop_save_array();
    func_74(&(Global_3145728.f_950.f_539), "PP_INFO_STRUCT");
    _start_save_array(&(Global_3145728.f_950.f_493), 46, "TATTOOS_ARRAY");
    func_73(&(Global_3145728.f_950.f_493[0 /*15*/]), "SP0");
    func_73(&(Global_3145728.f_950.f_493[1 /*15*/]), "SP1");
    func_73(&(Global_3145728.f_950.f_493[2 /*15*/]), "SP2");
    stop_save_array();
    register_int_to_save(&(Global_3145728.f_950.f_3201), "FRANKLIN_ORIGINAL_OUTFIT_ID");
    register_enum_to_save(&(Global_3145728.f_950.f_3202), "OVERRIDE_PED");
}

void func_73(var uParam0, char* sParam1)
{
    int iVar0;
    char cVar1[32];
    
    _start_save_struct(uParam0, 15, sParam1);
    _start_save_array(uParam0, 5, "UNLOCKED");
    iVar0 = 0;
    while (iVar0 < 4)
    {
        StringCopy(&cVar1, "unlockedBitset", 32);
        StringIntConCat(&cVar1, iVar0, 32);
        register_int_to_save(uParam0[iVar0], &cVar1);
        iVar0++;
    }
    stop_save_array();
    _start_save_array(&(uParam0->f_5), 5, "VIEWED");
    iVar0 = 0;
    while (iVar0 < 4)
    {
        StringCopy(&cVar1, "viewedBitset", 32);
        StringIntConCat(&cVar1, iVar0, 32);
        register_int_to_save(&(uParam0->f_5[iVar0]), &cVar1);
        iVar0++;
    }
    stop_save_array();
    _start_save_array(&(uParam0->f_10), 5, "CURRENT");
    iVar0 = 0;
    while (iVar0 < 4)
    {
        StringCopy(&cVar1, "currentBitset", 32);
        StringIntConCat(&cVar1, iVar0, 32);
        register_int_to_save(&(uParam0->f_10[iVar0]), &cVar1);
        iVar0++;
    }
    stop_save_array();
    stop_save_struct();
}

void func_74(var uParam0, char* sParam1)
{
    int iVar0;
    char cVar1[64];
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    
    _start_save_struct(uParam0, 2662, sParam1);
    _start_save_array(uParam0, 196, "VARIATIONS");
    iVar0 = 0;
    while (iVar0 < 3)
    {
        cVar1 = { func_86(iVar0, "VARIATIONS") };
        func_81(uParam0[iVar0 /*65*/], &cVar1);
        iVar0++;
    }
    stop_save_array();
    _start_save_array(&(uParam0->f_196), 4, "GOLF_TOPS");
    iVar0 = 0;
    while (iVar0 < 3)
    {
        cVar1 = { func_86(iVar0, "GOLF_TOPS") };
        register_enum_to_save(&(uParam0->f_196[iVar0]), &cVar1);
        iVar0++;
    }
    stop_save_array();
    _start_save_array(&(uParam0->f_200), 4, "GOLF_PANTS");
    iVar0 = 0;
    while (iVar0 < 3)
    {
        cVar1 = { func_86(iVar0, "GOLF_PANTS") };
        register_enum_to_save(&(uParam0->f_200[iVar0]), &cVar1);
        iVar0++;
    }
    stop_save_array();
    _start_save_array(&(uParam0->f_298), 547, "WEAPONS");
    iVar0 = 0;
    while (iVar0 < 3)
    {
        cVar1 = { func_86(iVar0, "WEAPONS") };
        func_78(&(uParam0->f_298[iVar0 /*182*/]), &cVar1);
        iVar0++;
    }
    stop_save_array();
    func_78(&(uParam0->f_845), "SNAP_WEAP");
    _start_save_array(&(uParam0->f_290), 4, "HEALTH_PERCENTAGE");
    iVar0 = 0;
    while (iVar0 < 3)
    {
        cVar1 = { func_86(iVar0, "HEALTH_PERCENTAGE") };
        register_float_to_save(&(uParam0->f_290[iVar0]), &cVar1);
        iVar0++;
    }
    stop_save_array();
    _start_save_array(&(uParam0->f_294), 4, "ARMOUR");
    iVar0 = 0;
    while (iVar0 < 3)
    {
        cVar1 = { func_86(iVar0, "ARMOUR") };
        register_int_to_save(&(uParam0->f_294[iVar0]), &cVar1);
        iVar0++;
    }
    stop_save_array();
    _start_save_array(&(uParam0->f_1134), 4, "AVAILABLE");
    iVar0 = 0;
    while (iVar0 < 3)
    {
        cVar1 = { func_86(iVar0, "AVAILABLE") };
        register_bool_to_save(&(uParam0->f_1134[iVar0]), &cVar1);
        iVar0++;
    }
    stop_save_array();
    _start_save_array(&(uParam0->f_1027), 6, "CARMODS");
    iVar2 = 0;
    while (iVar2 < 5)
    {
        cVar1 = { func_86(iVar2, "_CARMODS") };
        register_int_to_save(&(uParam0->f_1027[iVar2]), &cVar1);
        iVar2++;
    }
    stop_save_array();
    _start_save_array(&(uParam0->f_1033), 33, "STAT_UPDATES");
    iVar3 = 0;
    while (iVar3 < 8)
    {
        StringCopy(&cVar1, "STATS", 64);
        StringIntConCat(&cVar1, iVar3, 64);
        _start_save_array(&(uParam0->f_1033[iVar3 /*4*/]), 4, &cVar1);
        iVar0 = 0;
        while (iVar0 < 3)
        {
            cVar1 = { func_86(iVar0, "_STATS") };
            register_int_to_save(&(uParam0->f_1033[iVar3 /*4*/][iVar0]), &cVar1);
            iVar0++;
        }
        stop_save_array();
        iVar3++;
    }
    stop_save_array();
    _start_save_array(&(uParam0->f_204), 49, "TRACKED_COMPS");
    iVar4 = 0;
    while (iVar4 < 12)
    {
        StringCopy(&cVar1, "COMP", 64);
        StringIntConCat(&cVar1, iVar4, 64);
        _start_save_array(&(uParam0->f_204[iVar4 /*4*/]), 4, &cVar1);
        iVar0 = 0;
        while (iVar0 < 3)
        {
            cVar1 = { func_86(iVar0, "_COMP") };
            register_enum_to_save(&(uParam0->f_204[iVar4 /*4*/][iVar0]), &cVar1);
            iVar0++;
        }
        stop_save_array();
        iVar4++;
    }
    stop_save_array();
    _start_save_array(&(uParam0->f_253), 37, "TRACKED_PROPS");
    iVar5 = 0;
    while (iVar5 < 9)
    {
        StringCopy(&cVar1, "PROP", 64);
        StringIntConCat(&cVar1, iVar5, 64);
        _start_save_array(&(uParam0->f_253[iVar5 /*4*/]), 4, &cVar1);
        iVar0 = 0;
        while (iVar0 < 3)
        {
            cVar1 = { func_86(iVar0, "_PROPS") };
            register_enum_to_save(&(uParam0->f_253[iVar5 /*4*/][iVar0]), &cVar1);
            iVar0++;
        }
        stop_save_array();
        iVar5++;
    }
    stop_save_array();
    _start_save_array(&(uParam0->f_1066), 4, "WH_TIMER");
    iVar0 = 0;
    while (iVar0 < 3)
    {
        cVar1 = { func_86(iVar0, "_WHTIMER") };
        register_int_to_save(&(uParam0->f_1066[iVar0]), &cVar1);
        iVar0++;
    }
    stop_save_array();
    _start_save_array(&(uParam0->f_1070), 4, "WH_UPDATE");
    iVar0 = 0;
    while (iVar0 < 3)
    {
        cVar1 = { func_86(iVar0, "_WHUPDATE") };
        register_int_to_save(&(uParam0->f_1070[iVar0]), &cVar1);
        iVar0++;
    }
    stop_save_array();
    _start_save_array(&(uParam0->f_1074), 4, "WH_TIME");
    iVar0 = 0;
    while (iVar0 < 3)
    {
        cVar1 = { func_86(iVar0, "_WHTIME") };
        register_int_to_save(&(uParam0->f_1074[iVar0]), &cVar1);
        iVar0++;
    }
    stop_save_array();
    _start_save_array(&(uParam0->f_1078), 4, "GRAB_TIME");
    iVar0 = 0;
    while (iVar0 < 3)
    {
        cVar1 = { func_86(iVar0, "_GRABTIME") };
        register_bool_to_save(&(uParam0->f_1078[iVar0]), &cVar1);
        iVar0++;
    }
    stop_save_array();
    _start_save_array(&(uParam0->f_1990), 21, "VEH_POS");
    iVar6 = 0;
    while (iVar6 < 2)
    {
        StringCopy(&cVar1, "VEH_POS_", 64);
        StringIntConCat(&cVar1, iVar6, 64);
        _start_save_array(&(uParam0->f_1990[iVar6 /*10*/]), 10, &cVar1);
        iVar0 = 0;
        while (iVar0 < 3)
        {
            cVar1 = { func_86(iVar0, "VEH_POS_X") };
            register_float_to_save(&(uParam0->f_1990[iVar6 /*10*/][iVar0 /*3*/]), &cVar1);
            cVar1 = { func_86(iVar0, "VEH_POS_Y") };
            register_float_to_save(&(uParam0->f_1990[iVar6 /*10*/][iVar0 /*3*/].f_1), &cVar1);
            cVar1 = { func_86(iVar0, "VEH_POS_Z") };
            register_float_to_save(&(uParam0->f_1990[iVar6 /*10*/][iVar0 /*3*/].f_2), &cVar1);
            iVar0++;
        }
        stop_save_array();
        iVar6++;
    }
    stop_save_array();
    _start_save_array(&(uParam0->f_2011), 9, "VEH_HEAD");
    iVar6 = 0;
    while (iVar6 < 2)
    {
        StringCopy(&cVar1, "VEH_HEAD_", 64);
        StringIntConCat(&cVar1, iVar6, 64);
        _start_save_array(&(uParam0->f_2011[iVar6 /*4*/]), 4, &cVar1);
        iVar0 = 0;
        while (iVar0 < 3)
        {
            cVar1 = { func_86(iVar0, "VEH_HEAD") };
            register_float_to_save(&(uParam0->f_2011[iVar6 /*4*/][iVar0]), &cVar1);
            iVar0++;
        }
        stop_save_array();
        iVar6++;
    }
    stop_save_array();
    _start_save_array(&(uParam0->f_1096), 4, "LAST_KNOWN_HEADING");
    iVar0 = 0;
    while (iVar0 < 3)
    {
        cVar1 = { func_86(iVar0, "LAST_KNOWN_HEADING") };
        register_float_to_save(&(uParam0->f_1096[iVar0]), &cVar1);
        iVar0++;
    }
    stop_save_array();
    _start_save_array(&(uParam0->f_1100), 4, "LAST_KNOWN_ROOM_KEY");
    iVar0 = 0;
    while (iVar0 < 3)
    {
        cVar1 = { func_86(iVar0, "LAST_KNOWN_ROOM_KEY") };
        register_int_to_save(&(uParam0->f_1100[iVar0]), &cVar1);
        iVar0++;
    }
    stop_save_array();
    _start_save_array(&(uParam0->f_1104), 10, "LAST_KNOWN_VELOCITY");
    iVar0 = 0;
    while (iVar0 < 3)
    {
        cVar1 = { func_86(iVar0, "LAST_KNOWN_VELOCITY_X") };
        register_float_to_save(&(uParam0->f_1104[iVar0 /*3*/]), &cVar1);
        cVar1 = { func_86(iVar0, "LAST_KNOWN_VELOCITY_Y") };
        register_float_to_save(&(uParam0->f_1104[iVar0 /*3*/].f_1), &cVar1);
        cVar1 = { func_86(iVar0, "LAST_KNOWN_VELOCITY_Z") };
        register_float_to_save(&(uParam0->f_1104[iVar0 /*3*/].f_2), &cVar1);
        iVar0++;
    }
    stop_save_array();
    _start_save_array(&(uParam0->f_1114), 4, "LAST_KNOWN_WANTED");
    iVar0 = 0;
    while (iVar0 < 3)
    {
        cVar1 = { func_86(iVar0, "LAST_KNOWN_WANTED") };
        register_int_to_save(&(uParam0->f_1114[iVar0]), &cVar1);
        iVar0++;
    }
    stop_save_array();
    _start_save_array(&(uParam0->f_1118), 4, "CHANGE_ON_MISS");
    iVar0 = 0;
    while (iVar0 < 3)
    {
        cVar1 = { func_86(iVar0, "CHANGE_ON_MISS") };
        register_bool_to_save(&(uParam0->f_1118[iVar0]), &cVar1);
        iVar0++;
    }
    stop_save_array();
    _start_save_array(&(uParam0->f_1122), 4, "CHANGED_CLOTHES");
    iVar0 = 0;
    while (iVar0 < 3)
    {
        cVar1 = { func_86(iVar0, "CHANGED_CLOTHES") };
        register_enum_to_save(&(uParam0->f_1122[iVar0]), &cVar1);
        iVar0++;
    }
    stop_save_array();
    _start_save_array(&(uParam0->f_1126), 4, "CHANGED_HAIR");
    iVar0 = 0;
    while (iVar0 < 3)
    {
        cVar1 = { func_86(iVar0, "CHANGED_HAIR") };
        register_int_to_save(&(uParam0->f_1126[iVar0]), &cVar1);
        iVar0++;
    }
    stop_save_array();
    _start_save_array(&(uParam0->f_1130), 4, "CHANGED_TATTS");
    iVar0 = 0;
    while (iVar0 < 3)
    {
        cVar1 = { func_86(iVar0, "CHANGED_TATTS") };
        register_int_to_save(&(uParam0->f_1130[iVar0]), &cVar1);
        iVar0++;
    }
    stop_save_array();
    _start_save_array(&(uParam0->f_1086), 10, "LAST_KNOWN_XCOORD");
    iVar0 = 0;
    while (iVar0 < 3)
    {
        cVar1 = { func_86(iVar0, "LAST_KNOWN_XCOORD") };
        register_float_to_save(&(uParam0->f_1086[iVar0 /*3*/]), &cVar1);
        cVar1 = { func_86(iVar0, "LAST_KNOWN_YCOORD") };
        register_float_to_save(&(uParam0->f_1086[iVar0 /*3*/].f_1), &cVar1);
        cVar1 = { func_86(iVar0, "LAST_KNOWN_ZCOORD") };
        register_float_to_save(&(uParam0->f_1086[iVar0 /*3*/].f_2), &cVar1);
        iVar0++;
    }
    stop_save_array();
    _start_save_array(&(uParam0->f_1082), 4, "LAST_TIME_ACTIVE");
    iVar0 = 0;
    while (iVar0 < 3)
    {
        cVar1 = { func_86(iVar0, "LAST_TIME_ACTIVE") };
        func_77(&(uParam0->f_1082[iVar0]), &cVar1);
        iVar0++;
    }
    stop_save_array();
    _start_save_array(&(uParam0->f_1193), 797, "STORED_VEH_DATA");
    _start_save_array(&(uParam0->f_1193[0 /*199*/]), 199, "STORED_CAR_DATA");
    iVar0 = 0;
    while (iVar0 < 3)
    {
        cVar1 = { func_86(iVar0, "STORED_CAR_DATA") };
        func_76(&(uParam0->f_1193[0 /*199*/][iVar0 /*66*/]), &cVar1);
        iVar0++;
    }
    stop_save_array();
    _start_save_array(&(uParam0->f_1193[1 /*199*/]), 199, "STORED_BIK_DATA");
    iVar0 = 0;
    while (iVar0 < 3)
    {
        cVar1 = { func_86(iVar0, "STORED_BIK_DATA") };
        func_76(&(uParam0->f_1193[1 /*199*/][iVar0 /*66*/]), &cVar1);
        iVar0++;
    }
    stop_save_array();
    _start_save_array(&(uParam0->f_1193[2 /*199*/]), 199, "STORED_GAR_DATA");
    iVar0 = 0;
    while (iVar0 < 3)
    {
        cVar1 = { func_86(iVar0, "STORED_GAR_DATA") };
        func_76(&(uParam0->f_1193[2 /*199*/][iVar0 /*66*/]), &cVar1);
        iVar0++;
    }
    stop_save_array();
    _start_save_array(&(uParam0->f_1193[3 /*199*/]), 199, "STORED_MOD_DATA");
    iVar0 = 0;
    while (iVar0 < 3)
    {
        cVar1 = { func_86(iVar0, "STORED_MOD_DATA") };
        func_76(&(uParam0->f_1193[3 /*199*/][iVar0 /*66*/]), &cVar1);
        iVar0++;
    }
    stop_save_array();
    stop_save_array();
    _start_save_array(&(uParam0->f_2020), 134, "NPC_VEH_DATA");
    _start_save_array(&(uParam0->f_2020[0 /*133*/]), 133, "NPC_CAR_DATA");
    func_76(&(uParam0->f_2020[0 /*133*/][0 /*66*/]), "AMANDAS_CAR");
    func_76(&(uParam0->f_2020[0 /*133*/][1 /*66*/]), "TRACEYS_CAR");
    stop_save_array();
    stop_save_array();
    _start_save_array(&(uParam0->f_1169), 4, "SPECIAL_ABILITY");
    iVar0 = 0;
    while (iVar0 < 3)
    {
        cVar1 = { func_86(iVar0, "SPECIAL_ABILITY") };
        register_bool_to_save(&(uParam0->f_1169[iVar0]), &cVar1);
        iVar0++;
    }
    stop_save_array();
    _start_save_array(&(uParam0->f_1141), 4, "STAT_OFFSET_1");
    iVar0 = 0;
    while (iVar0 < 3)
    {
        cVar1 = { func_86(iVar0, "STAT_OFFSET_1") };
        register_float_to_save(&(uParam0->f_1141[iVar0]), &cVar1);
        iVar0++;
    }
    stop_save_array();
    _start_save_array(&(uParam0->f_1145), 4, "STAT_OFFSET_2");
    iVar0 = 0;
    while (iVar0 < 3)
    {
        cVar1 = { func_86(iVar0, "STAT_OFFSET_2") };
        register_int_to_save(&(uParam0->f_1145[iVar0]), &cVar1);
        iVar0++;
    }
    stop_save_array();
    _start_save_array(&(uParam0->f_1149), 4, "STAT_OFFSET_3");
    iVar0 = 0;
    while (iVar0 < 3)
    {
        cVar1 = { func_86(iVar0, "STAT_OFFSET_3") };
        register_int_to_save(&(uParam0->f_1149[iVar0]), &cVar1);
        iVar0++;
    }
    stop_save_array();
    _start_save_array(&(uParam0->f_1153), 4, "STAT_OFFSET_4");
    iVar0 = 0;
    while (iVar0 < 3)
    {
        cVar1 = { func_86(iVar0, "STAT_OFFSET_4") };
        register_float_to_save(&(uParam0->f_1153[iVar0]), &cVar1);
        iVar0++;
    }
    stop_save_array();
    _start_save_array(&(uParam0->f_1157), 4, "STAT_OFFSET_5");
    iVar0 = 0;
    while (iVar0 < 3)
    {
        cVar1 = { func_86(iVar0, "STAT_OFFSET_5") };
        register_int_to_save(&(uParam0->f_1157[iVar0]), &cVar1);
        iVar0++;
    }
    stop_save_array();
    _start_save_array(&(uParam0->f_1161), 4, "STAT_OFFSET_6");
    iVar0 = 0;
    while (iVar0 < 3)
    {
        cVar1 = { func_86(iVar0, "STAT_OFFSET_6") };
        register_int_to_save(&(uParam0->f_1161[iVar0]), &cVar1);
        iVar0++;
    }
    stop_save_array();
    _start_save_array(&(uParam0->f_1165), 4, "STAT_OFFSET_7");
    iVar0 = 0;
    while (iVar0 < 3)
    {
        cVar1 = { func_86(iVar0, "STAT_OFFSET_7") };
        register_int_to_save(&(uParam0->f_1165[iVar0]), &cVar1);
        iVar0++;
    }
    stop_save_array();
    _start_save_array(&(uParam0->f_1173), 4, "SPEC_AB_UNLOCK");
    iVar0 = 0;
    while (iVar0 < 3)
    {
        cVar1 = { func_86(iVar0, "SPEC_AB_UNLOCK") };
        register_int_to_save(&(uParam0->f_1173[iVar0]), &cVar1);
        iVar0++;
    }
    stop_save_array();
    _start_save_array(&(uParam0->f_1177), 4, "PED_COMPS");
    iVar0 = 0;
    while (iVar0 < 3)
    {
        cVar1 = { func_86(iVar0, "PED_COMPS") };
        register_int_to_save(&(uParam0->f_1177[iVar0]), &cVar1);
        iVar0++;
    }
    stop_save_array();
    _start_save_array(&(uParam0->f_1181), 4, "FBI4MASKSNAME");
    iVar0 = 0;
    while (iVar0 < 3)
    {
        cVar1 = { func_86(iVar0, "FBI4MASKNAME") };
        register_enum_to_save(&(uParam0->f_1181[iVar0]), &cVar1);
        iVar0++;
    }
    stop_save_array();
    _start_save_array(&(uParam0->f_1185), 4, "FBI4MASKSTYPE");
    iVar0 = 0;
    while (iVar0 < 3)
    {
        cVar1 = { func_86(iVar0, "FBI4MASKTYPE") };
        register_enum_to_save(&(uParam0->f_1185[iVar0]), &cVar1);
        iVar0++;
    }
    stop_save_array();
    _start_save_array(&(uParam0->f_1189), 4, "FBI4SUITS");
    iVar0 = 0;
    while (iVar0 < 3)
    {
        cVar1 = { func_86(iVar0, "FBI4SUIT") };
        register_enum_to_save(&(uParam0->f_1189[iVar0]), &cVar1);
        iVar0++;
    }
    stop_save_array();
    _start_save_array(&(uParam0->f_2154), 499, "WARDROBE");
    iVar7 = 0;
    while (iVar7 < 3)
    {
        StringCopy(&cVar1, "WARDROBE", 64);
        StringIntConCat(&cVar1, iVar7, 64);
        func_75(&(uParam0->f_2154[iVar7 /*166*/]), &cVar1);
        iVar7++;
    }
    stop_save_array();
    _start_save_array(&(uParam0->f_2655), 4, "CLOUD_VEH");
    iVar0 = 0;
    while (iVar0 < 3)
    {
        cVar1 = { func_86(iVar0, "CLOUD_VEH") };
        register_enum_to_save(&(uParam0->f_2655[iVar0]), &cVar1);
        iVar0++;
    }
    stop_save_array();
    register_bool_to_save(&(uParam0->f_1138), "PP_DEFAULT_INFO_SET");
    register_bool_to_save(&(uParam0->f_1139), "PP_DEFAULT_CLOTHES_INFO_SET");
    register_bool_to_save(&(uParam0->f_1140), "PP_DEFAULT_STATS_SET");
    register_bool_to_save(&(uParam0->f_2653), "PP_VARS_IN_STATS");
    register_bool_to_save(&(uParam0->f_2654), "PP_JIMMYMODS");
    register_enum_to_save(&(uParam0->f_2659), "PP_CURRENT_PED");
    register_enum_to_save(&(uParam0->f_2660), "PP_PREVIOUS_PED");
    register_enum_to_save(&(uParam0->f_2661), "PP_LAST_KNOWN_PED");
    stop_save_struct();
}

void func_75(var uParam0, char* sParam1)
{
    int iVar0;
    int iVar1;
    char cVar2[16];
    
    _start_save_struct(uParam0, 166, sParam1);
    _start_save_array(uParam0, 166, "ITEM_BITSET");
    iVar0 = 0;
    while (iVar0 < 15)
    {
        StringCopy(&cVar2, "COMP", 16);
        StringIntConCat(&cVar2, iVar0, 16);
        _start_save_array(uParam0[iVar0 /*11*/], 11, &cVar2);
        iVar1 = 0;
        while (iVar1 < 10)
        {
            StringCopy(&cVar2, "BITSET", 16);
            StringIntConCat(&cVar2, iVar1, 16);
            register_int_to_save(uParam0[iVar0 /*11*/][iVar1], &cVar2);
            iVar1++;
        }
        stop_save_array();
        iVar0++;
    }
    stop_save_array();
    stop_save_struct();
}

void func_76(var uParam0, char* sParam1)
{
    int iVar0;
    char cVar1[16];
    
    _start_save_struct(uParam0, 66, sParam1);
    register_enum_to_save(uParam0, "model");
    register_enum_to_save(&(uParam0->f_1), "modelTrailer");
    register_float_to_save(&(uParam0->f_2), "fDirtLevel");
    register_int_to_save(&(uParam0->f_3), "fHealth");
    register_int_to_save(&(uParam0->f_4), "iColourCombo");
    register_int_to_save(&(uParam0->f_5), "iColour1");
    register_int_to_save(&(uParam0->f_6), "iColour2");
    register_int_to_save(&(uParam0->f_7), "iColourExtra1");
    register_int_to_save(&(uParam0->f_8), "iColourExtra2");
    register_bool_to_save(&(uParam0->f_9), "bColourCombo");
    register_bool_to_save(&(uParam0->f_10), "bColourExtra");
    _start_save_array(&(uParam0->f_11), 10, "EXTRAS");
    register_bool_to_save(&(uParam0->f_11[0]), "Extra0");
    register_bool_to_save(&(uParam0->f_11[1]), "Extra1");
    register_bool_to_save(&(uParam0->f_11[2]), "Extra2");
    register_bool_to_save(&(uParam0->f_11[3]), "Extra3");
    register_bool_to_save(&(uParam0->f_11[4]), "Extra4");
    register_bool_to_save(&(uParam0->f_11[5]), "Extra5");
    register_bool_to_save(&(uParam0->f_11[6]), "Extra6");
    register_bool_to_save(&(uParam0->f_11[7]), "Extra7");
    register_bool_to_save(&(uParam0->f_11[8]), "Extra8");
    stop_save_array();
    register_bool_to_save(&(uParam0->f_21), "bConvertible");
    register_int_to_save(&(uParam0->f_22), "iRadioIndex");
    register_int_to_save(&(uParam0->f_23), "iPlateBack");
    _0xE2089749(&(uParam0->f_24), "tlNumberPlate");
    _start_save_array(&(uParam0->f_28), 26, "VEH_MOD_ID");
    iVar0 = 0;
    while (iVar0 < 25)
    {
        StringCopy(&cVar1, "MOD_ID", 16);
        StringIntConCat(&cVar1, iVar0, 16);
        register_int_to_save(&(uParam0->f_28[iVar0]), &cVar1);
        iVar0++;
    }
    stop_save_array();
    _start_save_array(&(uParam0->f_54), 3, "VEH_MOD_VAR");
    iVar0 = 0;
    while (iVar0 < 2)
    {
        StringCopy(&cVar1, "MOD_VAR", 16);
        StringIntConCat(&cVar1, iVar0, 16);
        register_int_to_save(&(uParam0->f_54[iVar0]), &cVar1);
        iVar0++;
    }
    stop_save_array();
    register_int_to_save(&(uParam0->f_57), "iTyreR");
    register_int_to_save(&(uParam0->f_58), "iTyreG");
    register_int_to_save(&(uParam0->f_59), "iTyreB");
    register_int_to_save(&(uParam0->f_60), "iWindowTintColour");
    register_bool_to_save(&(uParam0->f_61), "bTyresCanBurst");
    register_int_to_save(&(uParam0->f_62), "iLivery");
    register_int_to_save(&(uParam0->f_63), "iWheelType");
    register_bool_to_save(&(uParam0->f_65), "bIsPlayerVehicle");
    register_enum_to_save(&(uParam0->f_64), "eType");
    stop_save_struct();
}

void func_77(var uParam0, char* sParam1)
{
    _start_save_struct(uParam0, 1, sParam1);
    register_enum_to_save(uParam0, "iStoredTime");
    stop_save_struct();
}

void func_78(var uParam0, char* sParam1)
{
    _start_save_struct(uParam0, 182, sParam1);
    func_80(uParam0, "WEAPON_INFO");
    func_79(&(uParam0->f_133), "DLC_INFO");
    stop_save_struct();
}

void func_79(var uParam0, char* sParam1)
{
    int iVar0;
    char cVar1[32];
    
    iVar0 = 0;
    _start_save_array(uParam0, 49, sParam1);
    iVar0 = 0;
    while (iVar0 < 16)
    {
        StringCopy(&cVar1, "WEAPON_IN_SLOT_", 32);
        StringIntConCat(&cVar1, iVar0, 32);
        register_enum_to_save(uParam0[iVar0 /*3*/], &cVar1);
        StringCopy(&cVar1, "AMMO_IN_SLOT_", 32);
        StringIntConCat(&cVar1, iVar0, 32);
        register_int_to_save(&((uParam0[iVar0 /*3*/])->f_1), &cVar1);
        StringCopy(&cVar1, "MOD_IN_SLOT_", 32);
        StringIntConCat(&cVar1, iVar0, 32);
        register_int_to_save(&((uParam0[iVar0 /*3*/])->f_2), &cVar1);
        iVar0++;
    }
    stop_save_array();
}

void func_80(var uParam0, char* sParam1)
{
    int iVar0;
    char cVar1[32];
    
    iVar0 = 0;
    _start_save_array(uParam0, 133, sParam1);
    iVar0 = 0;
    while (iVar0 < 44)
    {
        StringCopy(&cVar1, "WEAPON_IN_SLOT_", 32);
        StringIntConCat(&cVar1, iVar0, 32);
        register_enum_to_save(uParam0[iVar0 /*3*/], &cVar1);
        StringCopy(&cVar1, "AMMO_IN_SLOT_", 32);
        StringIntConCat(&cVar1, iVar0, 32);
        register_int_to_save(&((uParam0[iVar0 /*3*/])->f_1), &cVar1);
        StringCopy(&cVar1, "MOD_IN_SLOT_", 32);
        StringIntConCat(&cVar1, iVar0, 32);
        register_int_to_save(&((uParam0[iVar0 /*3*/])->f_2), &cVar1);
        iVar0++;
    }
    stop_save_array();
}

void func_81(var uParam0, char* sParam1)
{
    _start_save_struct(uParam0, 65, sParam1);
    func_85(&(uParam0->f_13), "DRAWABLE_VARIATION");
    func_84(uParam0, "TEXTURE_VARIATION");
    func_83(&(uParam0->f_26), "PALETTE_VARIATION");
    func_82(&(uParam0->f_39), "PROP_INDEX");
    func_82(&(uParam0->f_49), "PROP_TEXTURE");
    register_enum_to_save(&(uParam0->f_59), "STORED_HAIR");
    register_enum_to_save(&(uParam0->f_60), "HAIR_CHANGE_ITEM");
    register_enum_to_save(&(uParam0->f_61), "HAIR_CHANGE_TYPE");
    register_enum_to_save(&(uParam0->f_62), "STORED_BEARD");
    register_enum_to_save(&(uParam0->f_63), "BEARD_CHANGE_ITEM");
    register_enum_to_save(&(uParam0->f_64), "BEARD_CHANGE_TYPE");
    stop_save_struct();
}

void func_82(var uParam0, char* sParam1)
{
    int iVar0;
    char cVar1[32];
    int iVar2;
    
    iVar0 = 0;
    _start_save_array(uParam0, 10, sParam1);
    iVar0 = 0;
    while (iVar0 < 9)
    {
        iVar2 = iVar0;
        switch (iVar2)
        {
            case 0:
                StringCopy(&cVar1, "ANCHOR_HEAD", 32);
                break;
            
            case 1:
                StringCopy(&cVar1, "ANCHOR_EYES", 32);
                break;
            
            case 2:
                StringCopy(&cVar1, "ANCHOR_EARS", 32);
                break;
            
            case 3:
                StringCopy(&cVar1, "ANCHOR_MOUTH", 32);
                break;
            
            case 4:
                StringCopy(&cVar1, "ANCHOR_LEFT_HAND", 32);
                break;
            
            case 5:
                StringCopy(&cVar1, "ANCHOR_RIGHT_HAND", 32);
                break;
            
            case 6:
                StringCopy(&cVar1, "ANCHOR_LEFT_WRIST", 32);
                break;
            
            case 7:
                StringCopy(&cVar1, "ANCHOR_RIGHT_WRIST", 32);
                break;
            
            case 8:
                StringCopy(&cVar1, "ANCHOR_HIP", 32);
                break;
            
            default:
                StringCopy(&cVar1, "PropDetails", 32);
                StringIntConCat(&cVar1, iVar0, 32);
                break;
        }
        register_int_to_save(uParam0[iVar0], &cVar1);
        iVar0++;
    }
    stop_save_array();
}

void func_83(var uParam0, char* sParam1)
{
    int iVar0;
    char cVar1[32];
    int iVar2;
    
    iVar0 = 0;
    _start_save_array(uParam0, 13, sParam1);
    iVar0 = 0;
    while (iVar0 < 12)
    {
        iVar2 = iVar0;
        switch (iVar2)
        {
            case 0:
                StringCopy(&cVar1, "PED_COMP_HEAD", 32);
                break;
            
            case 1:
                StringCopy(&cVar1, "PED_COMP_BERD", 32);
                break;
            
            case 2:
                StringCopy(&cVar1, "PED_COMP_HAIR", 32);
                break;
            
            case 3:
                StringCopy(&cVar1, "PED_COMP_TORSO", 32);
                break;
            
            case 4:
                StringCopy(&cVar1, "PED_COMP_LEG", 32);
                break;
            
            case 5:
                StringCopy(&cVar1, "PED_COMP_HAND", 32);
                break;
            
            case 6:
                StringCopy(&cVar1, "PED_COMP_FEET", 32);
                break;
            
            case 7:
                StringCopy(&cVar1, "PED_COMP_TEETH", 32);
                break;
            
            case 8:
                StringCopy(&cVar1, "PED_COMP_SPECIAL", 32);
                break;
            
            case 9:
                StringCopy(&cVar1, "PED_COMP_SPECIAL2", 32);
                break;
            
            case 10:
                StringCopy(&cVar1, "PED_COMP_DECL", 32);
                break;
            
            case 11:
                StringCopy(&cVar1, "PED_COMP_JBIB", 32);
                break;
            
            default:
                StringCopy(&cVar1, "PaletteIDDetails", 32);
                StringIntConCat(&cVar1, iVar0, 32);
                break;
        }
        register_int_to_save(uParam0[iVar0], &cVar1);
        iVar0++;
    }
    stop_save_array();
}

void func_84(var uParam0, char* sParam1)
{
    int iVar0;
    char cVar1[32];
    int iVar2;
    
    iVar0 = 0;
    _start_save_array(uParam0, 13, sParam1);
    iVar0 = 0;
    while (iVar0 < 12)
    {
        iVar2 = iVar0;
        switch (iVar2)
        {
            case 0:
                StringCopy(&cVar1, "PED_COMP_HEAD", 32);
                break;
            
            case 1:
                StringCopy(&cVar1, "PED_COMP_BERD", 32);
                break;
            
            case 2:
                StringCopy(&cVar1, "PED_COMP_HAIR", 32);
                break;
            
            case 3:
                StringCopy(&cVar1, "PED_COMP_TORSO", 32);
                break;
            
            case 4:
                StringCopy(&cVar1, "PED_COMP_LEG", 32);
                break;
            
            case 5:
                StringCopy(&cVar1, "PED_COMP_HAND", 32);
                break;
            
            case 6:
                StringCopy(&cVar1, "PED_COMP_FEET", 32);
                break;
            
            case 7:
                StringCopy(&cVar1, "PED_COMP_TEETH", 32);
                break;
            
            case 8:
                StringCopy(&cVar1, "PED_COMP_SPECIAL", 32);
                break;
            
            case 9:
                StringCopy(&cVar1, "PED_COMP_SPECIAL2", 32);
                break;
            
            case 10:
                StringCopy(&cVar1, "PED_COMP_DECL", 32);
                break;
            
            case 11:
                StringCopy(&cVar1, "PED_COMP_JBIB", 32);
                break;
            
            default:
                StringCopy(&cVar1, "DrawableIDDetails", 32);
                StringIntConCat(&cVar1, iVar0, 32);
                break;
        }
        register_int_to_save(uParam0[iVar0], &cVar1);
        iVar0++;
    }
    stop_save_array();
}

void func_85(var uParam0, char* sParam1)
{
    int iVar0;
    char cVar1[32];
    int iVar2;
    
    iVar0 = 0;
    _start_save_array(uParam0, 13, sParam1);
    iVar0 = 0;
    while (iVar0 < 12)
    {
        iVar2 = iVar0;
        switch (iVar2)
        {
            case 0:
                StringCopy(&cVar1, "PED_COMP_HEAD", 32);
                break;
            
            case 1:
                StringCopy(&cVar1, "PED_COMP_BERD", 32);
                break;
            
            case 2:
                StringCopy(&cVar1, "PED_COMP_HAIR", 32);
                break;
            
            case 3:
                StringCopy(&cVar1, "PED_COMP_TORSO", 32);
                break;
            
            case 4:
                StringCopy(&cVar1, "PED_COMP_LEG", 32);
                break;
            
            case 5:
                StringCopy(&cVar1, "PED_COMP_HAND", 32);
                break;
            
            case 6:
                StringCopy(&cVar1, "PED_COMP_FEET", 32);
                break;
            
            case 7:
                StringCopy(&cVar1, "PED_COMP_TEETH", 32);
                break;
            
            case 8:
                StringCopy(&cVar1, "PED_COMP_SPECIAL", 32);
                break;
            
            case 9:
                StringCopy(&cVar1, "PED_COMP_SPECIAL2", 32);
                break;
            
            case 10:
                StringCopy(&cVar1, "PED_COMP_DECL", 32);
                break;
            
            case 11:
                StringCopy(&cVar1, "PED_COMP_JBIB", 32);
                break;
            
            default:
                StringCopy(&cVar1, "TextureIDDetails", 32);
                StringIntConCat(&cVar1, iVar0, 32);
                break;
        }
        register_int_to_save(uParam0[iVar0], &cVar1);
        iVar0++;
    }
    stop_save_array();
}

struct<16> func_86(int iParam0, char* sParam1)
{
    char cVar0[64];
    
    StringCopy(&cVar0, "SP", 64);
    StringIntConCat(&cVar0, iParam0, 64);
    StringConCat(&cVar0, "_", 64);
    StringConCat(&cVar0, sParam1, 64);
    return cVar0;
}

void func_87(var uParam0, char* sParam1)
{
    _start_save_struct(uParam0, 164, sParam1);
    _start_save_array(uParam0, 4, "HEAD0");
    register_int_to_save(uParam0[0], "AVAILABLE");
    register_int_to_save(uParam0[1], "ACQUIRED");
    register_int_to_save(uParam0[2], "NEW");
    stop_save_array();
    _start_save_array(&(uParam0->f_4), 4, "BEARD0");
    register_int_to_save(&(uParam0->f_4[0]), "AVAILABLE");
    register_int_to_save(&(uParam0->f_4[1]), "ACQUIRED");
    register_int_to_save(&(uParam0->f_4[2]), "NEW");
    stop_save_array();
    _start_save_array(&(uParam0->f_8), 4, "HAIR0");
    register_int_to_save(&(uParam0->f_8[0]), "AVAILABLE");
    register_int_to_save(&(uParam0->f_8[1]), "ACQUIRED");
    register_int_to_save(&(uParam0->f_8[2]), "NEW");
    stop_save_array();
    _start_save_array(&(uParam0->f_12), 4, "TORSO0");
    register_int_to_save(&(uParam0->f_12[0]), "AVAILABLE");
    register_int_to_save(&(uParam0->f_12[1]), "ACQUIRED");
    register_int_to_save(&(uParam0->f_12[2]), "NEW");
    stop_save_array();
    _start_save_array(&(uParam0->f_16), 4, "TORSO1");
    register_int_to_save(&(uParam0->f_16[0]), "AVAILABLE");
    register_int_to_save(&(uParam0->f_16[1]), "ACQUIRED");
    register_int_to_save(&(uParam0->f_16[2]), "NEW");
    stop_save_array();
    _start_save_array(&(uParam0->f_20), 4, "TORSO2");
    register_int_to_save(&(uParam0->f_20[0]), "AVAILABLE");
    register_int_to_save(&(uParam0->f_20[1]), "ACQUIRED");
    register_int_to_save(&(uParam0->f_20[2]), "NEW");
    stop_save_array();
    _start_save_array(&(uParam0->f_24), 4, "TORSO3");
    register_int_to_save(&(uParam0->f_24[0]), "AVAILABLE");
    register_int_to_save(&(uParam0->f_24[1]), "ACQUIRED");
    register_int_to_save(&(uParam0->f_24[2]), "NEW");
    stop_save_array();
    _start_save_array(&(uParam0->f_28), 4, "TORSO4");
    register_int_to_save(&(uParam0->f_28[0]), "AVAILABLE");
    register_int_to_save(&(uParam0->f_28[1]), "ACQUIRED");
    register_int_to_save(&(uParam0->f_28[2]), "NEW");
    stop_save_array();
    _start_save_array(&(uParam0->f_32), 4, "TORSO5");
    register_int_to_save(&(uParam0->f_32[0]), "AVAILABLE");
    register_int_to_save(&(uParam0->f_32[1]), "ACQUIRED");
    register_int_to_save(&(uParam0->f_32[2]), "NEW");
    stop_save_array();
    _start_save_array(&(uParam0->f_36), 4, "TORSO6");
    register_int_to_save(&(uParam0->f_36[0]), "AVAILABLE");
    register_int_to_save(&(uParam0->f_36[1]), "ACQUIRED");
    register_int_to_save(&(uParam0->f_36[2]), "NEW");
    stop_save_array();
    _start_save_array(&(uParam0->f_40), 4, "TORSO7");
    register_int_to_save(&(uParam0->f_40[0]), "AVAILABLE");
    register_int_to_save(&(uParam0->f_40[1]), "ACQUIRED");
    register_int_to_save(&(uParam0->f_40[2]), "NEW");
    stop_save_array();
    _start_save_array(&(uParam0->f_44), 4, "TORSO8");
    register_int_to_save(&(uParam0->f_44[0]), "AVAILABLE");
    register_int_to_save(&(uParam0->f_44[1]), "ACQUIRED");
    register_int_to_save(&(uParam0->f_44[2]), "NEW");
    stop_save_array();
    _start_save_array(&(uParam0->f_48), 4, "TORSO9");
    register_int_to_save(&(uParam0->f_48[0]), "AVAILABLE");
    register_int_to_save(&(uParam0->f_48[1]), "ACQUIRED");
    register_int_to_save(&(uParam0->f_48[2]), "NEW");
    stop_save_array();
    _start_save_array(&(uParam0->f_52), 4, "LEGS0");
    register_int_to_save(&(uParam0->f_52[0]), "AVAILABLE");
    register_int_to_save(&(uParam0->f_52[1]), "ACQUIRED");
    register_int_to_save(&(uParam0->f_52[2]), "NEW");
    stop_save_array();
    _start_save_array(&(uParam0->f_56), 4, "LEGS1");
    register_int_to_save(&(uParam0->f_56[0]), "AVAILABLE");
    register_int_to_save(&(uParam0->f_56[1]), "ACQUIRED");
    register_int_to_save(&(uParam0->f_56[2]), "NEW");
    stop_save_array();
    _start_save_array(&(uParam0->f_60), 4, "LEGS2");
    register_int_to_save(&(uParam0->f_60[0]), "AVAILABLE");
    register_int_to_save(&(uParam0->f_60[1]), "ACQUIRED");
    register_int_to_save(&(uParam0->f_60[2]), "NEW");
    stop_save_array();
    _start_save_array(&(uParam0->f_64), 4, "LEGS3");
    register_int_to_save(&(uParam0->f_64[0]), "AVAILABLE");
    register_int_to_save(&(uParam0->f_64[1]), "ACQUIRED");
    register_int_to_save(&(uParam0->f_64[2]), "NEW");
    stop_save_array();
    _start_save_array(&(uParam0->f_68), 4, "HAND0");
    register_int_to_save(&(uParam0->f_68[0]), "AVAILABLE");
    register_int_to_save(&(uParam0->f_68[1]), "ACQUIRED");
    register_int_to_save(&(uParam0->f_68[2]), "NEW");
    stop_save_array();
    _start_save_array(&(uParam0->f_72), 4, "FEET0");
    register_int_to_save(&(uParam0->f_72[0]), "AVAILABLE");
    register_int_to_save(&(uParam0->f_72[1]), "ACQUIRED");
    register_int_to_save(&(uParam0->f_72[2]), "NEW");
    stop_save_array();
    _start_save_array(&(uParam0->f_76), 4, "FEET1");
    register_int_to_save(&(uParam0->f_76[0]), "AVAILABLE");
    register_int_to_save(&(uParam0->f_76[1]), "ACQUIRED");
    register_int_to_save(&(uParam0->f_76[2]), "NEW");
    stop_save_array();
    _start_save_array(&(uParam0->f_80), 4, "FEET2");
    register_int_to_save(&(uParam0->f_80[0]), "AVAILABLE");
    register_int_to_save(&(uParam0->f_80[1]), "ACQUIRED");
    register_int_to_save(&(uParam0->f_80[2]), "NEW");
    stop_save_array();
    _start_save_array(&(uParam0->f_84), 4, "FEET3");
    register_int_to_save(&(uParam0->f_84[0]), "AVAILABLE");
    register_int_to_save(&(uParam0->f_84[1]), "ACQUIRED");
    register_int_to_save(&(uParam0->f_84[2]), "NEW");
    stop_save_array();
    _start_save_array(&(uParam0->f_88), 4, "FEET4");
    register_int_to_save(&(uParam0->f_88[0]), "AVAILABLE");
    register_int_to_save(&(uParam0->f_88[1]), "ACQUIRED");
    register_int_to_save(&(uParam0->f_88[2]), "NEW");
    stop_save_array();
    _start_save_array(&(uParam0->f_92), 4, "TEETH0");
    register_int_to_save(&(uParam0->f_92[0]), "AVAILABLE");
    register_int_to_save(&(uParam0->f_92[1]), "ACQUIRED");
    register_int_to_save(&(uParam0->f_92[2]), "NEW");
    stop_save_array();
    _start_save_array(&(uParam0->f_96), 4, "SPEC0");
    register_int_to_save(&(uParam0->f_96[0]), "AVAILABLE");
    register_int_to_save(&(uParam0->f_96[1]), "ACQUIRED");
    register_int_to_save(&(uParam0->f_96[2]), "NEW");
    stop_save_array();
    _start_save_array(&(uParam0->f_100), 4, "SPEC1");
    register_int_to_save(&(uParam0->f_100[0]), "AVAILABLE");
    register_int_to_save(&(uParam0->f_100[1]), "ACQUIRED");
    register_int_to_save(&(uParam0->f_100[2]), "NEW");
    stop_save_array();
    _start_save_array(&(uParam0->f_104), 4, "SPEC2");
    register_int_to_save(&(uParam0->f_104[0]), "AVAILABLE");
    register_int_to_save(&(uParam0->f_104[1]), "ACQUIRED");
    register_int_to_save(&(uParam0->f_104[2]), "NEW");
    stop_save_array();
    _start_save_array(&(uParam0->f_108), 4, "SPEC2_0");
    register_int_to_save(&(uParam0->f_108[0]), "AVAILABLE");
    register_int_to_save(&(uParam0->f_108[1]), "ACQUIRED");
    register_int_to_save(&(uParam0->f_108[2]), "NEW");
    stop_save_array();
    _start_save_array(&(uParam0->f_112), 4, "DECL0");
    register_int_to_save(&(uParam0->f_112[0]), "AVAILABLE");
    register_int_to_save(&(uParam0->f_112[1]), "ACQUIRED");
    register_int_to_save(&(uParam0->f_112[2]), "NEW");
    stop_save_array();
    _start_save_array(&(uParam0->f_116), 4, "DECL1");
    register_int_to_save(&(uParam0->f_116[0]), "AVAILABLE");
    register_int_to_save(&(uParam0->f_116[1]), "ACQUIRED");
    register_int_to_save(&(uParam0->f_116[2]), "NEW");
    stop_save_array();
    _start_save_array(&(uParam0->f_120), 4, "JBIB0");
    register_int_to_save(&(uParam0->f_120[0]), "AVAILABLE");
    register_int_to_save(&(uParam0->f_120[1]), "ACQUIRED");
    register_int_to_save(&(uParam0->f_120[2]), "NEW");
    stop_save_array();
    _start_save_array(&(uParam0->f_124), 4, "JBIB1");
    register_int_to_save(&(uParam0->f_124[0]), "AVAILABLE");
    register_int_to_save(&(uParam0->f_124[1]), "ACQUIRED");
    register_int_to_save(&(uParam0->f_124[2]), "NEW");
    stop_save_array();
    _start_save_array(&(uParam0->f_128), 4, "OUTF0");
    register_int_to_save(&(uParam0->f_128[0]), "AVAILABLE");
    register_int_to_save(&(uParam0->f_128[1]), "ACQUIRED");
    register_int_to_save(&(uParam0->f_128[2]), "NEW");
    stop_save_array();
    _start_save_array(&(uParam0->f_132), 4, "OUTF1");
    register_int_to_save(&(uParam0->f_132[0]), "AVAILABLE");
    register_int_to_save(&(uParam0->f_132[1]), "ACQUIRED");
    register_int_to_save(&(uParam0->f_132[2]), "NEW");
    stop_save_array();
    _start_save_array(&(uParam0->f_136), 4, "PROPG0");
    register_int_to_save(&(uParam0->f_136[0]), "AVAILABLE");
    register_int_to_save(&(uParam0->f_136[1]), "ACQUIRED");
    register_int_to_save(&(uParam0->f_136[2]), "NEW");
    stop_save_array();
    _start_save_array(&(uParam0->f_140), 4, "PROP0");
    register_int_to_save(&(uParam0->f_140[0]), "AVAILABLE");
    register_int_to_save(&(uParam0->f_140[1]), "ACQUIRED");
    register_int_to_save(&(uParam0->f_140[2]), "NEW");
    stop_save_array();
    _start_save_array(&(uParam0->f_144), 4, "PROP1");
    register_int_to_save(&(uParam0->f_144[0]), "AVAILABLE");
    register_int_to_save(&(uParam0->f_144[1]), "ACQUIRED");
    register_int_to_save(&(uParam0->f_144[2]), "NEW");
    stop_save_array();
    _start_save_array(&(uParam0->f_148), 4, "PROP2");
    register_int_to_save(&(uParam0->f_148[0]), "AVAILABLE");
    register_int_to_save(&(uParam0->f_148[1]), "ACQUIRED");
    register_int_to_save(&(uParam0->f_148[2]), "NEW");
    stop_save_array();
    _start_save_array(&(uParam0->f_152), 4, "PROP3");
    register_int_to_save(&(uParam0->f_152[0]), "AVAILABLE");
    register_int_to_save(&(uParam0->f_152[1]), "ACQUIRED");
    register_int_to_save(&(uParam0->f_152[2]), "NEW");
    stop_save_array();
    _start_save_array(&(uParam0->f_156), 4, "PROP4");
    register_int_to_save(&(uParam0->f_156[0]), "AVAILABLE");
    register_int_to_save(&(uParam0->f_156[1]), "ACQUIRED");
    register_int_to_save(&(uParam0->f_156[2]), "NEW");
    stop_save_array();
    _start_save_array(&(uParam0->f_160), 4, "PROP5");
    register_int_to_save(&(uParam0->f_160[0]), "AVAILABLE");
    register_int_to_save(&(uParam0->f_160[1]), "ACQUIRED");
    register_int_to_save(&(uParam0->f_160[2]), "NEW");
    stop_save_array();
    stop_save_struct();
}

void func_88()
{
    func_89(&(Global_3145728.f_4605), "SHOP_SAVED_DATA_STRUCT");
}

void func_89(var uParam0, char* sParam1)
{
    int iVar0;
    char cVar1[16];
    
    _start_save_struct(uParam0, 686, sParam1);
    func_91(uParam0, "SHOP_PROPERTIES");
    register_bool_to_save(&(uParam0->f_45), "SHOP_DEFAULT_DATA_SET");
    register_int_to_save(&(uParam0->f_46), "SHOP_TYPES_VISITED");
    register_int_to_save(&(uParam0->f_47), "iHairdoShopVisits");
    register_int_to_save(&(uParam0->f_48), "iClothesShopVisits");
    register_int_to_save(&(uParam0->f_49), "iTattooShopVisits");
    register_int_to_save(&(uParam0->f_50), "iCarmodShopVisits");
    register_int_to_save(&(uParam0->f_51), "iGunShopVisits");
    register_int_to_save(&(uParam0->f_55), "iGunShopHelpCount");
    register_int_to_save(&(uParam0->f_52), "iGunShopPostTrev2Dialogue");
    register_int_to_save(&(uParam0->f_53), "iGunShopPostLamar1Dialogue");
    register_int_to_save(&(uParam0->f_54), "iClothesShopPostLester1Dialogue");
    _start_save_array(&(uParam0->f_57), 16, "CARMOD_DATA");
    func_90(&(uParam0->f_57[0 /*5*/]), "P0_CARMOD_DATA");
    func_90(&(uParam0->f_57[1 /*5*/]), "P1_CARMOD_DATA");
    func_90(&(uParam0->f_57[2 /*5*/]), "P2_CARMOD_DATA");
    stop_save_array();
    register_bool_to_save(&(uParam0->f_56), "FIRST_MODSHOP_REPAIR");
    register_bool_to_save(&(uParam0->f_684), "SHOP_BARBER_BLIP_HELP_SHOWN");
    register_bool_to_save(&(uParam0->f_685), "SHOP_ARMOUR_HELP_SHOWN");
    register_int_to_save(&(uParam0->f_678), "CONTENT_VEHICLES");
    register_int_to_save(&(uParam0->f_679), "CONTENT_WEAPONS");
    register_int_to_save(&(uParam0->f_680), "CONTENT_CLOTHES");
    register_int_to_save(&(uParam0->f_681), "CONTENT_HAIRDOS");
    register_int_to_save(&(uParam0->f_682), "CONTENT_TATTOOS");
    register_int_to_save(&(uParam0->f_683), "CONTENT_GAME");
    _start_save_array(&(uParam0->f_73), 605, "VIEWED_MODS");
    iVar0 = 0;
    while (iVar0 < uParam0->f_73)
    {
        StringCopy(&cVar1, "VIEWED_MODS", 16);
        StringIntConCat(&cVar1, iVar0, 16);
        register_int_to_save(&(uParam0->f_73[iVar0]), &cVar1);
        iVar0++;
    }
    stop_save_array();
    stop_save_struct();
}

void func_90(var uParam0, char* sParam1)
{
    _start_save_struct(uParam0, 5, sParam1);
    register_bool_to_save(uParam0, "PROCESSING");
    register_bool_to_save(&(uParam0->f_1), "READY");
    register_bool_to_save(&(uParam0->f_2), "MESSAGE_SENT");
    register_int_to_save(&(uParam0->f_3), "HOURS_TO_COMPLETE");
    register_int_to_save(&(uParam0->f_4), "TYPE");
    stop_save_struct();
}

void func_91(var uParam0, char* sParam1)
{
    int iVar0;
    char cVar1[32];
    
    iVar0 = 0;
    _start_save_array(uParam0, 45, sParam1);
    iVar0 = 0;
    while (iVar0 < 44)
    {
        StringCopy(&cVar1, "SHOP_", 32);
        StringIntConCat(&cVar1, iVar0, 32);
        register_int_to_save(uParam0[iVar0], &cVar1);
        iVar0++;
    }
    stop_save_array();
}

void func_92()
{
    _start_save_struct(&(Global_3145728.f_920), 30, "FLOW_CUSTOM_STRUCT");
    func_98(&(Global_3145728.f_920), "MF_STRANDS_TO_OVERRIDE_ARRAY");
    func_97(&(Global_3145728.f_920.f_4), "MF_COMMAND_POINTER_OVERRIDE_ARRAY");
    func_96(&(Global_3145728.f_920.f_8), "MF_COMMAND_POINTER_HASH_ID_ARRAY");
    func_95(&(Global_3145728.f_920.f_12), "MF_MISSION_TO_UNCOMPLETE");
    func_94(&(Global_3145728.f_920.f_16), "MF_APPLY_ON_MP_SWITCH_ONLY");
    register_int_to_save(&(Global_3145728.f_920.f_20), "numberStoredOverrides");
    register_int_to_save(&(Global_3145728.f_920.f_21), "iMissionsCompleted");
    register_int_to_save(&(Global_3145728.f_920.f_22), "iMissionGolds");
    register_bool_to_save(&(Global_3145728.f_920.f_23), "wasFadedOut");
    register_bool_to_save(&(Global_3145728.f_920.f_24), "wasFadedOut_switch");
    register_int_to_save(&(Global_3145728.f_920.f_25), "spInitBitset");
    func_93(&(Global_3145728.f_920.f_26), "MF_MISS_FIRST_ACTIVATE_ARRAY");
    stop_save_struct();
}

void func_93(var uParam0, char* sParam1)
{
    int iVar0;
    char cVar1[64];
    
    _start_save_array(uParam0, 4, sParam1);
    iVar0 = 0;
    while (iVar0 < 3)
    {
        StringCopy(&cVar1, "FIRST_ACTIVATION_BITSET_", 64);
        StringIntConCat(&cVar1, iVar0, 64);
        register_int_to_save(uParam0[iVar0], &cVar1);
        iVar0++;
    }
    stop_save_array();
}

void func_94(var uParam0, char* sParam1)
{
    int iVar0;
    char cVar1[64];
    
    _start_save_array(uParam0, 4, sParam1);
    iVar0 = 0;
    while (iVar0 < 3)
    {
        StringCopy(&cVar1, "APPLY_ON_MP_SWITCH_ONLY_", 64);
        StringIntConCat(&cVar1, iVar0, 64);
        register_bool_to_save(uParam0[iVar0], &cVar1);
        iVar0++;
    }
    stop_save_array();
}

void func_95(var uParam0, char* sParam1)
{
    int iVar0;
    char cVar1[64];
    
    _start_save_array(uParam0, 4, sParam1);
    iVar0 = 0;
    while (iVar0 < 3)
    {
        StringCopy(&cVar1, "MISSION_TO_UNCOMPLETE_", 64);
        StringIntConCat(&cVar1, iVar0, 64);
        register_enum_to_save(uParam0[iVar0], &cVar1);
        iVar0++;
    }
    stop_save_array();
}

void func_96(var uParam0, char* sParam1)
{
    int iVar0;
    char cVar1[64];
    
    _start_save_array(uParam0, 4, sParam1);
    iVar0 = 0;
    while (iVar0 < 3)
    {
        StringCopy(&cVar1, "COMMAND_POINTER_HASH_ID_", 64);
        StringIntConCat(&cVar1, iVar0, 64);
        register_int_to_save(uParam0[iVar0], &cVar1);
        iVar0++;
    }
    stop_save_array();
}

void func_97(var uParam0, char* sParam1)
{
    int iVar0;
    char cVar1[64];
    
    _start_save_array(uParam0, 4, sParam1);
    iVar0 = 0;
    while (iVar0 < 3)
    {
        StringCopy(&cVar1, "COMMAND_POINTER_OVERRIDE_", 64);
        StringIntConCat(&cVar1, iVar0, 64);
        register_int_to_save(uParam0[iVar0], &cVar1);
        iVar0++;
    }
    stop_save_array();
}

void func_98(var uParam0, char* sParam1)
{
    int iVar0;
    char cVar1[64];
    
    _start_save_array(uParam0, 4, sParam1);
    iVar0 = 0;
    while (iVar0 < 3)
    {
        StringCopy(&cVar1, "STRAND_TO_OVERRIDE_", 64);
        StringIntConCat(&cVar1, iVar0, 64);
        register_enum_to_save(uParam0[iVar0], &cVar1);
        iVar0++;
    }
    stop_save_array();
}

void func_99()
{
    _start_save_struct(&Global_3145728, 920, "FLOW_STRUCT");
    register_bool_to_save(&Global_3145728, "isGameflowActive");
    register_bool_to_save(&(Global_3145728.f_1), "flowCompleted");
    func_107(&(Global_3145728.f_2), "MF_STRANDS_ARRAY");
    func_102(&(Global_3145728.f_99), "MF_CONTROLS_STRUCT");
    func_100(&(Global_3145728.f_319), "MF_MISSION_ARRAY");
    stop_save_struct();
}

void func_100(var uParam0, char* sParam1)
{
    int iVar0;
    struct<16> Var1;
    
    _start_save_array(uParam0, 601, sParam1);
    iVar0 = 0;
    while (iVar0 < 100)
    {
        StringCopy(&Var1, "MF_MISSION_STRUCT_", 64);
        StringIntConCat(&Var1, iVar0, 64);
        func_101(uParam0[iVar0 /*6*/], &Var1);
        iVar0++;
    }
    stop_save_array();
}

void func_101(var uParam0, char* sParam1)
{
    _start_save_struct(uParam0, 6, sParam1);
    register_bool_to_save(uParam0, "completed");
    register_int_to_save(&(uParam0->f_1), "missionFailsNoProgress");
    register_int_to_save(&(uParam0->f_2), "missionFailsTotal");
    register_int_to_save(&(uParam0->f_3), "iCompletionOrder");
    register_int_to_save(&(uParam0->f_4), "iScore");
    register_float_to_save(&(uParam0->f_5), "fStatCompletion");
    stop_save_struct();
}

void func_102(var uParam0, char* sParam1)
{
    _start_save_struct(uParam0, 220, sParam1);
    func_106(uParam0, "MF_CONTROL_SYNCIDS");
    func_105(&(uParam0->f_57), "MF_CONTROL_FLAGIDS");
    func_104(&(uParam0->f_194), "MF_CONTROL_INTIDS");
    func_103(&(uParam0->f_208), "MF_CONTROL_BITSETIDS");
    stop_save_struct();
}

void func_103(var uParam0, char* sParam1)
{
    int iVar0;
    char cVar1[32];
    int iVar2;
    
    iVar0 = 0;
    _start_save_array(uParam0, 12, sParam1);
    iVar0 = 0;
    while (iVar0 < 11)
    {
        iVar2 = iVar0;
        switch (iVar2)
        {
            case 0:
                StringCopy(&cVar1, "FLOWBITSET_AGNT_MINIGAME_ACTIVE", 32);
                break;
            
            default:
                StringCopy(&cVar1, "BitsetIDDetails", 32);
                StringIntConCat(&cVar1, iVar0, 32);
                break;
        }
        register_int_to_save(uParam0[iVar0], &cVar1);
        iVar0++;
    }
    stop_save_array();
}

void func_104(var uParam0, char* sParam1)
{
    int iVar0;
    char cVar1[32];
    int iVar2;
    
    iVar0 = 0;
    _start_save_array(uParam0, 14, sParam1);
    iVar0 = 0;
    while (iVar0 < 13)
    {
        iVar2 = iVar0;
        switch (iVar2)
        {
            case -1:
                StringCopy(&cVar1, "FLOWINT_FLOWTEST", 32);
                break;
            
            default:
                StringCopy(&cVar1, "IntIDDetails", 32);
                StringIntConCat(&cVar1, iVar0, 32);
                break;
        }
        register_int_to_save(uParam0[iVar0], &cVar1);
        iVar0++;
    }
    stop_save_array();
}

void func_105(var uParam0, char* sParam1)
{
    int iVar0;
    char cVar1[32];
    int iVar2;
    
    iVar0 = 0;
    _start_save_array(uParam0, 137, sParam1);
    iVar0 = 0;
    while (iVar0 < 136)
    {
        iVar2 = iVar0;
        switch (iVar2)
        {
            case -1:
                StringCopy(&cVar1, "FLOWFLAG_FLOWTEST", 32);
                break;
            
            case 0:
                StringCopy(&cVar1, "FLOWFLAG_AGENT_T01", 32);
                break;
            
            default:
                StringCopy(&cVar1, "FlagIDDetails", 32);
                StringIntConCat(&cVar1, iVar0, 32);
                break;
        }
        register_bool_to_save(uParam0[iVar0], &cVar1);
        iVar0++;
    }
    stop_save_array();
}

void func_106(var uParam0, char* sParam1)
{
    int iVar0;
    char cVar1[32];
    int iVar2;
    
    iVar0 = 0;
    _start_save_array(uParam0, 57, sParam1);
    iVar0 = 0;
    while (iVar0 < 56)
    {
        iVar2 = iVar0;
        switch (iVar2)
        {
            case -1:
                StringCopy(&cVar1, "SYNC_FLOWTEST", 32);
                break;
            
            case 0:
                StringCopy(&cVar1, "SYNC_TREV_FINALE_WAIT_CIA", 32);
                break;
            
            case 1:
                StringCopy(&cVar1, "SYNC_TREV_FINALE_WAIT_KOR", 32);
                break;
            
            case 2:
                StringCopy(&cVar1, "SYNC_TREV_FINALE_WAIT_ARA", 32);
                break;
            
            case 3:
                StringCopy(&cVar1, "SYNC_RUS_JET_WAIT_KOR", 32);
                break;
            
            case 5:
                StringCopy(&cVar1, "SYNC_ARA_HORSE_WAIT_CAS_SET", 32);
                break;
            
            case 6:
                StringCopy(&cVar1, "SYNC_ARA_3_WAIT_RUS_SAT", 32);
                break;
            
            case 7:
                StringCopy(&cVar1, "SYNC_CAS_HEI_WAIT_CAS_PR2", 32);
                break;
            
            case 9:
                StringCopy(&cVar1, "SYNC_KOR_SAT_WAIT_CAS_HEI", 32);
                break;
            
            default:
                StringCopy(&cVar1, "SyncIDDetails", 32);
                StringIntConCat(&cVar1, iVar0, 32);
                break;
        }
        register_bool_to_save(uParam0[iVar0], &cVar1);
        iVar0++;
    }
    stop_save_array();
}

void func_107(var uParam0, char* sParam1)
{
    int iVar0;
    struct<8> Var1;
    int iVar2;
    
    iVar0 = 0;
    _start_save_array(uParam0, 97, sParam1);
    iVar0 = 0;
    while (iVar0 < 32)
    {
        iVar2 = iVar0;
        switch (iVar2)
        {
            case 0:
                StringCopy(&Var1, "STRAND_AGENT_T", 32);
                break;
            
            case 1:
                StringCopy(&Var1, "STRAND_AGENT_CIA", 32);
                break;
            
            case 2:
                StringCopy(&Var1, "STRAND_AGENT_KOR", 32);
                break;
            
            case 3:
                StringCopy(&Var1, "STRAND_AGENT_RUS", 32);
                break;
            
            case 4:
                StringCopy(&Var1, "STRAND_AGENT_ARA", 32);
                break;
            
            case 5:
                StringCopy(&Var1, "STRAND_AGENT_CAS1", 32);
                break;
            
            case 6:
                StringCopy(&Var1, "STRAND_AGENT_CAS2", 32);
                break;
            
            case 7:
                StringCopy(&Var1, "STRAND_AGENT_ASS", 32);
                break;
            
            case 8:
                StringCopy(&Var1, "STRAND_AGENT_ASS2", 32);
                break;
            
            default:
                StringCopy(&Var1, "StrandDetails", 32);
                StringIntConCat(&Var1, iVar0, 32);
                break;
        }
        func_108(uParam0[iVar0 /*3*/], &Var1);
        iVar0++;
    }
    stop_save_array();
}

void func_108(var uParam0, char* sParam1)
{
    _start_save_struct(uParam0, 3, sParam1);
    register_int_to_save(uParam0, "flowStrandBitFlags");
    register_int_to_save(&(uParam0->f_1), "flowStrandCommandPos");
    register_int_to_save(&(uParam0->f_2), "flowStrandCommandHashID");
    stop_save_struct();
}

void func_109()
{
    float fVar0;
    int iVar1;
    float fVar2;
    
    Global_3145728.f_6618.f_3817 = 0f;
    Global_86608 = 22f;
    fVar0 = (100f / Global_86608);
    func_110(0, 1, fVar0, 0, 0, "M_AGTT", 0, 127, 0, 0);
    func_110(1, 1, fVar0, 0, 0, "M_AGTF", 1, 127, 0, 0);
    func_110(2, 1, fVar0, 0, 0, "M_AGTCT", 2, 127, 0, 0);
    func_110(3, 1, fVar0, 0, 0, "M_AGTCL", 3, 127, 0, 0);
    func_110(4, 1, fVar0, 0, 0, "M_AGTCJ", 4, 127, 0, 0);
    func_110(5, 1, fVar0, 0, 0, "M_AGTCD", 5, 127, 0, 0);
    func_110(6, 1, fVar0, 0, 0, "M_AGTKP", 6, 127, 0, 0);
    func_110(7, 1, fVar0, 0, 0, "M_AGTKR", 7, 127, 0, 0);
    func_110(8, 1, fVar0, 0, 0, "M_AGTKS", 8, 127, 0, 0);
    func_110(9, 1, fVar0, 0, 0, "M_AGTK4", 9, 127, 0, 0);
    func_110(10, 1, fVar0, 0, 0, "M_AGTK5", 10, 127, 0, 0);
    func_110(11, 1, fVar0, 0, 0, "M_AGTRP", 11, 127, 0, 0);
    func_110(12, 1, fVar0, 0, 0, "M_AGTRC", 12, 127, 0, 0);
    func_110(13, 1, fVar0, 0, 0, "M_AGTRS", 13, 127, 0, 0);
    func_110(14, 1, fVar0, 0, 0, "M_AGTRJ", 14, 127, 0, 0);
    func_110(15, 1, fVar0, 0, 0, "M_AGTRF", 15, 127, 0, 0);
    func_110(16, 1, fVar0, 0, 0, "M_AGTAH", 16, 127, 0, 0);
    func_110(17, 1, fVar0, 0, 0, "M_AGTAD", 17, 127, 0, 0);
    func_110(18, 1, fVar0, 0, 0, "M_AGTAHE", 18, 127, 0, 0);
    func_110(19, 1, fVar0, 0, 0, "M_AGTCSS", 19, 127, 0, 0);
    func_110(20, 1, fVar0, 0, 0, "M_AGTCSP1", 20, 127, 0, 0);
    func_110(21, 1, fVar0, 0, 0, "M_AGTCSP2", 21, 127, 0, 0);
    func_110(22, 1, fVar0, 0, 0, "M_AGTCSH", 22, 127, 0, 0);
    func_110(23, 1, fVar0, 0, 0, "M_AGTASSP", 23, 127, 0, 0);
    func_110(24, 1, fVar0, 0, 0, "M_AGTASSR", 24, 127, 0, 0);
    func_110(25, 1, fVar0, 0, 0, "M_AGTASSC", 25, 127, 0, 0);
    func_110(26, 1, fVar0, 0, 0, "M_AGTASSG", 26, 127, 0, 0);
    func_110(27, 1, fVar0, 0, 0, "M_AGTASSS", 27, 127, 0, 0);
    func_110(28, 1, fVar0, 0, 0, "M_AGTASSD", 28, 127, 0, 0);
    func_110(29, 1, fVar0, 0, 0, "M_AGTASSH", 29, 127, 0, 0);
    func_110(30, 1, fVar0, 0, 0, "M_AGTASSB", 30, 127, 0, 0);
    func_110(31, 1, fVar0, 0, 0, "M_AGTASST", 31, 127, 0, 0);
    func_110(32, 1, fVar0, 0, 0, "M_AGTASSV", 32, 127, 0, 0);
    func_110(33, 1, fVar0, 0, 0, "M_AGTASSN", 33, 127, 0, 0);
    func_110(34, 1, fVar0, 0, 0, "M_AGTASSY", 34, 127, 0, 0);
    func_110(35, 1, fVar0, 0, 0, "M_AGTCSS", 35, 127, 0, 0);
    func_110(36, 1, fVar0, 0, 0, "M_AGTCSS", 36, 127, 0, 0);
    func_110(37, 1, fVar0, 0, 0, "M_AGTCSS", 37, 127, 0, 0);
    func_110(38, 1, fVar0, 0, 0, "M_AGTCSS", 38, 127, 0, 0);
    iVar1 = 0;
    fVar2 = 0f;
    while (iVar1 < 318)
    {
        if (!Global_3145728.f_6618[iVar1 /*12*/].f_6 == 0)
        {
            fVar2 = (fVar2 + Global_3145728.f_6618[iVar1 /*12*/].f_4);
        }
        switch (Global_3145728.f_6618[iVar1 /*12*/].f_6)
        {
            case 1:
                Global_86600++;
                break;
            
            case 3:
                Global_86601++;
                break;
            
            case 5:
                Global_86602++;
                break;
            
            case 7:
                Global_86603++;
                break;
            
            case 9:
                Global_86604++;
                break;
            
            case 11:
                Global_86605++;
                break;
            
            case 13:
                Global_86606++;
                break;
            
            default:
                break;
        }
        iVar1++;
    }
}

void func_110(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
    Global_3145728.f_6618[iParam0 /*12*/].f_6 = iParam1;
    Global_3145728.f_6618[iParam0 /*12*/].f_4 = fParam2;
    Global_3145728.f_6618[iParam0 /*12*/].f_5 = iParam3;
    if (iParam4 == 1)
    {
    }
    StringCopy(&(Global_3145728.f_6618[iParam0 /*12*/]), sParam5, 16);
    Global_3145728.f_6618[iParam0 /*12*/].f_7 = iParam8;
    Global_3145728.f_6618[iParam0 /*12*/].f_9 = iParam9;
    if (iParam6 <= 127)
    {
        Global_3145728.f_6618[iParam0 /*12*/].f_8 = iParam6;
    }
    if (iParam7 <= 127)
    {
        Global_3145728.f_6618[iParam0 /*12*/].f_8 = (Global_3145728.f_6618[iParam0 /*12*/].f_8 || shift_left(iParam7, 7));
    }
}

void func_111()
{
    func_117();
    func_116();
    func_115();
    func_114();
    func_113();
    func_112();
}

void func_112()
{
}

void func_113()
{
    int iVar0;
    
    iVar0 = 0;
    iVar0 = 0;
    while (iVar0 < 1)
    {
        Global_3145728.f_99.f_208[iVar0] = 0;
        iVar0++;
    }
}

void func_114()
{
    int iVar0;
    
    iVar0 = 0;
    iVar0 = 0;
    while (iVar0 < 1)
    {
        Global_3145728.f_99.f_194[iVar0] = 0;
        iVar0++;
    }
}

void func_115()
{
    int iVar0;
    
    iVar0 = 0;
    iVar0 = 0;
    while (iVar0 < 2)
    {
        Global_3145728.f_99.f_57[iVar0] = 0;
        iVar0++;
    }
}

void func_116()
{
    int iVar0;
    
    iVar0 = 0;
    iVar0 = 0;
    while (iVar0 < 11)
    {
        Global_3145728.f_99[iVar0] = 0;
        iVar0++;
    }
}

void func_117()
{
    int iVar0;
    
    iVar0 = 0;
    iVar0 = 0;
    while (iVar0 < 10)
    {
        Global_3145728.f_2[iVar0 /*3*/] = 0;
        Global_3145728.f_2[iVar0 /*3*/].f_1 = -1;
        Global_3145728.f_2[iVar0 /*3*/].f_2 = 0;
        iVar0++;
    }
}

