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
	int iLocal_17 = 0;
	char* sLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 1176255488;
	var uScriptParam_4 = 1;
	var uScriptParam_5 = -1;
	var uScriptParam_6 = -1;
#endregion

void main() // Position - 0x0
{
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
	fLocal_14 = 0.001f;
	iLocal_17 = -1;
	sLocal_18 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_35 = 3;
	func_43(&uScriptParam_0);

	while (true)
	{
		func_42();
	
		if (func_33())
			break;
	
		func_14();
	}

	func_1();
	return;
}

void func_1() // Position - 0x85
{
	func_3(&uLocal_37);
	func_2();
	return;
}

void func_2() // Position - 0x97
{
	unk_0xBBC29EBE6E1A48FA();
	return;
}

void func_3(var uParam0) // Position - 0xA3
{
	var unk;

	func_4(false, true, true, 0, false, false, false);

	if (unk_0x78411E34CF90EA8C(uParam0->f_6))
		unk_0x85E6A1E36B5E2E4D(uParam0->f_6, 0);

	unk_0x490EA3A0CF334F58(unk_0x4A8C381C258A124D());
	*uParam0 = { unk };
	return;
}

void func_4(BOOL bParam0, BOOL bParam1, BOOL bParam2, int iParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6) // Position - 0xDA
{
	if (bParam0)
	{
		unk_0x6A84D4B060E73EF5(unk_0x259BE71D8A81D4FA(), 0);
		unk_0xAC50C24F47D00104(unk_0x259BE71D8A81D4FA(), 1);
		unk_0xDAA51A56DBEC0391(unk_0x259BE71D8A81D4FA(), 1);
		func_13(1);
		unk_0xC138265FD0CDEA4E();
		unk_0x5C6622EF2CEA902F();
	
		if (Global_20383.f_1 > 3 && !bParam6)
		{
			if (unk_0xE87F28FD4128D063())
				unk_0x0F15249D24BC5ADA(0);
		
			if (!func_12())
				Global_20383.f_1 = 3;
		
			Global_21725 = 5;
		}
	
		func_11(1, iParam3, bParam2, 0);
		Global_63368 = 1;
		Global_75696 = 1;
		Global_78556 = 1;
	}
	else
	{
		func_13(0);
		unk_0xCCC82B30A1C53626();
		Global_63368 = 0;
	
		if (bParam1)
			unk_0x714097CFC7878BD0();
	
		unk_0xAC50C24F47D00104(unk_0x259BE71D8A81D4FA(), 0);
		unk_0xDAA51A56DBEC0391(unk_0x259BE71D8A81D4FA(), 0);
		func_11(0, iParam3, bParam2, 0);
	
		if (unk_0x76CD105BCAC6EB9F())
			if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()) && !func_9(unk_0x259BE71D8A81D4FA()) && !_NETWORK_IS_PLAYER_IN_SCTV(unk_0x259BE71D8A81D4FA(), 0) && !func_5() && !bParam4 && !bParam5 && !unk_0xAD15761928FCF79C())
				unk_0x935364B4448CD584(unk_0x4A8C381C258A124D(), 0);
		else if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()) && !func_9(unk_0x259BE71D8A81D4FA()) && !bParam4 && !bParam5)
			unk_0x935364B4448CD584(unk_0x4A8C381C258A124D(), 0);
	
		Global_78556 = 0;
	}

	return;
}

BOOL func_5() // Position - 0x227
{
	return IS_BIT_SET(Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_36.f_18, 14);
}

BOOL _NETWORK_IS_PLAYER_IN_SCTV(int player, int bCheckTeam) // Position - 0x241
{
	BOOL flag;

	if (player == unk_0x259BE71D8A81D4FA())
		flag = func_7(-1, false) == 8;
	else
		flag = Global_1853910[player /*862*/].f_205 == 8;

	if (bCheckTeam == 1)
		if (unk_0x762604C40829DB72(player))
			flag = unk_0x1864096A95E36EBA(player) == 8;

	return flag;
}

int func_7(int iParam0, BOOL bParam1) // Position - 0x28C
{
	int num;
	int num2;

	num2 = iParam0;

	if (num2 == -1)
		num2 = func_8();

	if (Global_1575040[num2] == 1)
	{
		bParam1;
		num = 8;
	}
	else
	{
		num = Global_1574912[num2];
		bParam1;
	}

	return num;
}

int func_8() // Position - 0x2CD
{
	return Global_1574918;
}

BOOL func_9(int iParam0) // Position - 0x2D9
{
	if (_NETWORK_IS_PLAYER_IN_SCTV(iParam0, 0))
		return true;

	if (func_10())
		if (iParam0 == unk_0x259BE71D8A81D4FA())
			return true;

	if (IS_BIT_SET(Global_2657589[iParam0 /*466*/].f_199, 2))
		return true;

	return false;
}

BOOL func_10() // Position - 0x318
{
	return IS_BIT_SET(Global_2621446, 3);
}

int func_11(int iParam0, int iParam1, BOOL bParam2, int iParam3) // Position - 0x326
{
	int num;

	num = 0;

	if (unk_0x761778199FE1211C())
	{
		if (unk_0x4A0B7E53EBC937D5() != iParam0 && bParam2)
		{
			unk_0x7882946B06ED216B(iParam0, iParam1, 1, iParam3);
			num = 1;
		}
	}

	return num;
}

BOOL func_12() // Position - 0x359
{
	if (Global_20383.f_1 == 1 || Global_20383.f_1 == 0)
		return true;

	return false;
}

void func_13(int iParam0) // Position - 0x380
{
	if (iParam0 == 1)
		unk_0x0B0C9A0F9AAEB7F0(&Global_8253, 13);
	else
		unk_0x8744D2E3FC95740E(&Global_8253, 13);

	return;
}

void func_14() // Position - 0x3A3
{
	if (func_15(&uLocal_37))
		func_1();

	return;
}

BOOL func_15(var uParam0) // Position - 0x3B8
{
	unk_0x43AE50D2A33F6E2A();
	unk_0x0C9B2F8C2BD128C2();
	func_30(true);
	unk_0x6C978B200DAA54DE();
	func_24(0);

	if (unk_0x4D9174D8796EA622())
		unk_0x915FA95E87D33FF5(0);

	switch (func_23(uParam0))
	{
		case 0:
			func_18(uParam0);
			break;
	
		case 1:
			func_16(uParam0);
			break;
	
		case 2:
			return true;
	}

	return false;
}

void func_16(var uParam0) // Position - 0x416
{
	var unk;

	unk = unk_0x643DC062EE904FCA(uParam0->f_5);

	if (unk_0xBD3B265153D3BA2D(unk) >= 0.9f)
	{
		unk_0xF2E51EC84D76A2B6(uParam0->f_5);
		unk_0xE37AF9002E782BA0(0, 1, 3000, 1, 0, 0);
		unk_0x8EAC8FBDF8A3830E(unk_0x259BE71D8A81D4FA(), 1f, 2000, 0, 1, 0);
		func_17(uParam0, 2);
	}

	return;
}

void func_17(var uParam0, int iParam1) // Position - 0x461
{
	*uParam0 = iParam1;
	return;
}

void func_18(var uParam0) // Position - 0x46E
{
	char* str;

	str = func_20();
	unk_0x80813AC549A1E8AE(str);

	if (!unk_0xE100DD4F82A51BDE(str))
		return;

	unk_0x10B228D2FDB7AF16(800);
	func_17(uParam0, 1);
	func_19(uParam0);
	return;
}

void func_19(var uParam0) // Position - 0x4A3
{
	char* str;

	str = func_20();
	uParam0->f_5 = unk_0xBC5D9A293974F095(uParam0->f_1, 0f, 0f, uParam0->f_4, 2, 0, 0, 1065353216, 0, 1065353216);
	unk_0x0B94AB707B44E754(unk_0x4A8C381C258A124D(), uParam0->f_5, str, "action", 1000f, -1.5f, 0, 0, 1148846080, 0);
	unk_0xE7101255AD6F1952(uParam0->f_5);
	unk_0x2C09C6B54CFCFAF1(unk_0x4A8C381C258A124D(), "HS4F_IG25_BEACH", 0);
	unk_0xD8ED11B32DF72E0B(unk_0x4A8C381C258A124D(), 0, 0);
	uParam0->f_6 = unk_0xBB209150C6081BBE(joaat("DEFAULT_ANIMATED_CAMERA"), 1);
	unk_0x73D04EA6A13117B7(uParam0->f_6, "action_camera", str, uParam0->f_1, 0f, 0f, uParam0->f_4, 0, 2);
	unk_0xE37AF9002E782BA0(1, 0, 3000, 1, 0, 0);
	unk_0x268BE77F77533D03(str);
	return;
}

char* func_20() // Position - 0x54F
{
	if (func_21())
		return "ANIM@SCRIPTED@HEIST@IG25_BEACH@HEELED@";

	return "ANIM@SCRIPTED@HEIST@IG25_BEACH@MALE@";
}

BOOL func_21() // Position - 0x567
{
	return func_22(unk_0x259BE71D8A81D4FA());
}

BOOL func_22(var uParam0) // Position - 0x577
{
	if (unk_0x4B423FAA24E8ABF0(unk_0x56E414973C2A8C0E(uParam0)) == joaat("MP_F_Freemode_01"))
		return 1;

	return 0;
}

int func_23(var uParam0) // Position - 0x596
{
	return *uParam0;
}

void func_24(int iParam0) // Position - 0x5A1
{
	if (func_29())
		return;

	if (!(Global_20383.f_1 == 1))
	{
		if (func_28(0))
			func_25(iParam0);
	
		unk_0x0B0C9A0F9AAEB7F0(&Global_8254, 2);
	}

	return;
}

void func_25(int iParam0) // Position - 0x5D4
{
	if (func_29())
		return;

	if (Global_20584)
		if (func_27())
			func_26(true, true);
		else
			func_26(false, false);

	if (Global_20383.f_1 == 10 || Global_20383.f_1 == 9)
		unk_0x0B0C9A0F9AAEB7F0(&Global_8254, 16);

	if (unk_0xE87F28FD4128D063())
		unk_0x0F15249D24BC5ADA(0);

	Global_21725 = 5;

	if (iParam0 == 1)
		unk_0x0B0C9A0F9AAEB7F0(&Global_8253, 30);
	else
		unk_0x8744D2E3FC95740E(&Global_8253, 30);

	if (!func_12())
		Global_20383.f_1 = 3;

	return;
}

void func_26(BOOL bParam0, BOOL bParam1) // Position - 0x65E
{
	if (bParam0)
	{
		if (func_28(0))
		{
			Global_20584 = true;
		
			if (bParam1)
				unk_0x78C4EBB0251847E2(&Global_20320);
		
			Global_20311 = { Global_20329[Global_20328 /*3*/] };
			unk_0x6B7EA0158D00C600(Global_20311);
		}
	}
	else if (Global_20584 == true)
	{
		Global_20584 = false;
		Global_20311 = { Global_20336[Global_20328 /*3*/] };
	
		if (bParam1)
			unk_0x6B7EA0158D00C600(Global_20320);
		else
			unk_0x6B7EA0158D00C600(Global_20311);
	}

	return;
}

BOOL func_27() // Position - 0x6D2
{
	return IS_BIT_SET(Global_1962996, 5);
}

BOOL func_28(int iParam0) // Position - 0x6E0
{
	if (iParam0 == 1)
		if (Global_20383.f_1 > 3)
			if (IS_BIT_SET(Global_8253, 14))
				return true;
			else
				return false;
		else
			return false;

	if (unk_0x486FF5D06E9659F1(joaat("cellphone_flashhand")) > 0)
		return true;

	if (Global_20383.f_1 > 3)
		return true;

	return false;
}

BOOL func_29() // Position - 0x737
{
	return IS_BIT_SET(Global_1962996, 19);
}

void func_30(BOOL bParam0) // Position - 0x746
{
	if (bParam0)
		func_32();

	func_31(4, -1);
	func_31(6, -1);
	func_31(7, -1);
	func_31(3, -1);
	func_31(1, -1);
	func_31(2, -1);
	func_31(11, -1);
	func_31(13, -1);
	func_31(14, -1);
	func_31(16, -1);
	return;
}

void func_31(int iParam0, int iParam1) // Position - 0x797
{
	unk_0x0B0C9A0F9AAEB7F0(&(Global_1653913.f_1047), iParam0);

	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
				Global_1653913.f_170[iParam1] = 1;
			break;
	}

	return;
}

void func_32() // Position - 0x7CD
{
	Global_2793046.f_4629 = 0;
	return;
}

BOOL func_33() // Position - 0x7DD
{
	if (_SHOULD_NETWORK_SCRIPT_TERMINATE())
		return true;

	return false;
}

BOOL _SHOULD_NETWORK_SCRIPT_TERMINATE() // Position - 0x7F1
{
	if (Global_1575035 == 0)
		if (!unk_0x76CD105BCAC6EB9F())
			return true;

	if (func_41())
		return true;

	if (Global_2696917)
		return true;

	if (func_40())
		return true;

	if (_DOES_EVENT_OF_TYPE_EXIST(159))
		if (!func_38())
			return true;

	if (_DOES_EVENT_OF_TYPE_EXIST(157))
		return true;

	if (!unk_0x261E3728EE56B3AC())
		return true;

	if (_GET_CURRENT_SESSION_TYPE_SCRIPT_HASH() != 0)
		if (unk_0x486FF5D06E9659F1(_GET_CURRENT_SESSION_TYPE_SCRIPT_HASH()) == 0)
			return true;

	return false;
}

int _GET_CURRENT_SESSION_TYPE_SCRIPT_HASH() // Position - 0x875
{
	switch (func_37())
	{
		case 0:
			return func_36();
	
		case 2:
			return joaat("creator");
	}

	return 0;
}

int func_36() // Position - 0x8A8
{
	switch (Global_2697021)
	{
		case 0:
			return joaat("freemode");
	
		default:
		
	}

	return joaat("freemode");
}

int func_37() // Position - 0x8CC
{
	return Global_32163;
}

BOOL func_38() // Position - 0x8D7
{
	return Global_2683864.f_698;
}

BOOL _DOES_EVENT_OF_TYPE_EXIST(int iParam0) // Position - 0x8E6
{
	if (unk_0x5E3ED023C0E7CC7C(1, iParam0))
		return true;

	return false;
}

BOOL func_40() // Position - 0x8FD
{
	return Global_2694526;
}

BOOL func_41() // Position - 0x909
{
	return Global_2683864.f_693;
}

void func_42() // Position - 0x918
{
	SYSTEM::WAIT(0);
	return;
}

void func_43(var uParam0) // Position - 0x925
{
	unk_0xDB2434E51017FFCC(32, 0, -1);
	func_44(&uLocal_37, *uParam0, uParam0->f_3);
	return;
}

void func_44(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x943
{
	func_46(uParam0, uParam1);
	func_45(uParam0, uParam4);
	func_4(true, true, true, 0, false, false, false);
	unk_0xB2BD5837A8D3CEDA(unk_0x4A8C381C258A124D(), uParam1, 1, 0, 0, 1);

	if (unk_0x15CCE8886267624F())
		unk_0x12C01FC00B0CBB6B();

	return;
}

void func_45(var uParam0, var uParam1) // Position - 0x983
{
	uParam0->f_4 = uParam1;
	return;
}

void func_46(var uParam0, var uParam1, var uParam2, var uParam3) // Position - 0x991
{
	uParam0->f_1 = { uParam1 };
	return;
}
