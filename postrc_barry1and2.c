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
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	char* sLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	float fLocal_29 = 0f;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	float fLocal_35 = 0f;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	char* sLocal_44 = 0;
	char* sLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
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
	sLocal_21 = "NULL";
	fLocal_24 = 0f;
	fLocal_28 = -0.0375f;
	fLocal_29 = 0.17f;
	fLocal_33 = 80f;
	fLocal_34 = 140f;
	fLocal_35 = 180f;
	iLocal_38 = 3;
	sLocal_44 = "RCMBarryLeadInOut";
	sLocal_45 = "idle";
	uLocal_49 = { 189.5964f, -956.0344f, 29.5771f };
	uLocal_52 = { 190.2424f, -956.379f, 28.63f };
	unk_0x66EFB3D6110055C4(0, 26, 1);

	if (func_25(unk_0x4A8C381C258A124D()))
		if (unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) != 0)
			unk_0xE20A252886E4FE1D(unk_0x259BE71D8A81D4FA(), 0, 0);

	if (unk_0x96CFB880BAC634CE(83))
		func_22(false);

	unk_0x80813AC549A1E8AE(sLocal_44);
	unk_0xF2CB0224D3BE0B42("BARY1", 7);

	while (!unk_0xE100DD4F82A51BDE(sLocal_44) || !unk_0xDCB78A15E5F495DC(7))
	{
		unk_0x66EFB3D6110055C4(0, 26, 1);
		SYSTEM::WAIT(0);
	}

	unk_0x66EFB3D6110055C4(0, 26, 1);
	func_25(unk_0x4A8C381C258A124D());
	iLocal_46 = unk_0x1DD05E817C89C737() + 13000;
	iLocal_47 = unk_0xC5935DFB3F39785A(0, 5);
	func_19();

	while (!func_13(&uLocal_43, 49, uLocal_52, func_18(1.12f), false))
	{
		unk_0x66EFB3D6110055C4(0, 26, 1);
		SYSTEM::WAIT(0);
	}

	unk_0x66EFB3D6110055C4(0, 26, 1);
	func_12();
	iLocal_48 = unk_0x1DD05E817C89C737() + 1000;
	unk_0x66EFB3D6110055C4(0, 26, 1);

	while (true)
	{
		func_25(unk_0x4A8C381C258A124D());
	
		if (unk_0x1DD05E817C89C737() < iLocal_48)
			unk_0x66EFB3D6110055C4(0, 26, 1);
	
		func_11();
	
		if (!func_25(uLocal_43))
			func_22(false);
	
		func_3();
	
		if (func_2(unk_0x4A8C381C258A124D(), uLocal_52, 1) > 70f)
		{
			func_1(&uLocal_40, false);
			func_1(&uLocal_41, false);
			func_1(&uLocal_42, false);
			func_22(false);
		}
	
		SYSTEM::WAIT(0);
	}

	return;
}

void func_1(var uParam0, BOOL bParam1) // Position - 0x1D9
{
	if (unk_0xFC8BFE4B41177C22(*uParam0))
	{
		if (unk_0x5B9219522937741D(*uParam0))
			unk_0x837D67618BF89034(*uParam0, 1, 1);
	
		if (!bParam1)
			unk_0xB3B56385ECA230B4(uParam0);
		else
			unk_0xC942CD0D37369DC4(*uParam0);
	}

	return;
}

float func_2(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4) // Position - 0x214
{
	var unk;

	if (!unk_0x1C2F771CDC87A3A5(uParam0, 0))
		unk = { unk_0xD1A6A821F5AC81DB(uParam0, 1) };
	else
		unk = { unk_0xD1A6A821F5AC81DB(uParam0, 0) };

	return unk_0xED977E2AE2CB16EE(unk, uParam1, iParam4);
}

BOOL func_3() // Position - 0x24E
{
	var unk;

	if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(unk_0x4A8C381C258A124D()) && _DOES_ENTITY_EXIST_AND_IS_ALIVE(uLocal_43) && !_CONVERSATION_IS_DIALOGUE_IN_PROGRESS() && unk_0x1DD05E817C89C737() > iLocal_46 && func_8(unk_0x4A8C381C258A124D(), uLocal_43, 1) < 20f && !unk_0x3D2EB53CF281A77E())
	{
		unk = 16;
		_CONVERSATION_INITIALIZE_ACTOR(&unk, 0, uLocal_43, "BARRY", 0, 1);
		_CONVERSATION_ADD_LINE_NO_SUBTITLE(&unk, "BARY1AU", func_6(), 7, 0, 0);
		iLocal_46 = unk_0x1DD05E817C89C737() + unk_0xC5935DFB3F39785A(12000, 18000);
		return true;
	}

	return false;
}

void _CONVERSATION_ADD_LINE_NO_SUBTITLE(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5) // Position - 0x2DE
{
	func_5(uParam0, 145, sParam1, iParam4, iParam5, 0);

	if (iParam3 > 7)
		if (iParam3 < 12)
			iParam3 = 7;

	unk_0x0B0C9A0F9AAEB7F0(&Global_20591, 0);
	Global_21728 = iParam3;
	TEXT_LABEL_ASSIGN_STRING(&Global_21715, sParam2, 24);
	return;
}

void func_5(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5) // Position - 0x319
{
	Global_21179 = { *uParam0 };
	Global_7569 = iParam1;
	TEXT_LABEL_ASSIGN_STRING(&Global_21795, sParam2, 24);
	Global_22714 = iParam5;

	if (iParam3 == 0)
	{
		Global_22712 = 1;
		Global_22710 = 0;
	}
	else
	{
		Global_22712 = 0;
		Global_22710 = 1;
	}

	if (iParam4 == 0)
	{
		Global_22713 = 1;
		Global_22711 = 0;
	}
	else
	{
		Global_22713 = 0;
		Global_22711 = 1;
	}

	return;
}

char* func_6() // Position - 0x36F
{
	char* str;

	switch (iLocal_47)
	{
		case 0:
			str = "BARY1_RCMLI1";
			break;
	
		case 1:
			str = "BARY1_RCMLI2";
			break;
	
		case 2:
			str = "BARY1_RCMLI3";
			break;
	
		case 3:
			str = "BARY1_RCMLI4";
			break;
	
		case 4:
			str = "BARY1_RCMLI5";
			break;
	}

	iLocal_47 = iLocal_47 + 1;

	if (iLocal_47 > 4)
		iLocal_47 = 0;

	return str;
}

void _CONVERSATION_INITIALIZE_ACTOR(var uParam0, int iParam1, var uParam2, char* sParam3, int iParam4, int iParam5) // Position - 0x3D5
{
	uParam0->[iParam1 /*10*/].f_7 == 1;
	uParam0->[iParam1 /*10*/] = uParam2;
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->[iParam1 /*10*/].f_1), sParam3, 24);
	uParam0->[iParam1 /*10*/].f_7 = 1;
	uParam0->[iParam1 /*10*/].f_8 = iParam4;
	uParam0->[iParam1 /*10*/].f_9 = iParam5;

	if (!Global_78558)
	{
		if (!unk_0x4FAFF4BCB7633475(uParam2))
			if (uParam0->[iParam1 /*10*/].f_8 == 0)
				unk_0xC1BC1B8A5AA67C6B(uParam2, 0);
			else
				unk_0xC1BC1B8A5AA67C6B(uParam2, 1);
	
		if (!unk_0x4FAFF4BCB7633475(uParam2))
			if (uParam0->[iParam1 /*10*/].f_9 == 0)
				unk_0x26C12212366CBF6E(uParam2, 0);
			else
				unk_0x26C12212366CBF6E(uParam2, 1);
	}

	return;
}

float func_8(var uParam0, var uParam1, int iParam2) // Position - 0x470
{
	var unk;
	var unk4;

	if (!unk_0x1C2F771CDC87A3A5(uParam0, 0))
		unk = { unk_0xD1A6A821F5AC81DB(uParam0, 1) };
	else
		unk = { unk_0xD1A6A821F5AC81DB(uParam0, 0) };

	if (!unk_0x1C2F771CDC87A3A5(uParam1, 0))
		unk4 = { unk_0xD1A6A821F5AC81DB(uParam1, 1) };
	else
		unk4 = { unk_0xD1A6A821F5AC81DB(uParam1, 0) };

	return unk_0xED977E2AE2CB16EE(unk, unk4, iParam2);
}

BOOL _CONVERSATION_IS_DIALOGUE_IN_PROGRESS() // Position - 0x4CE
{
	if (Global_21725 != 0 || unk_0x1F9EB85925C3ECD7())
		return true;

	return false;
}

BOOL _DOES_ENTITY_EXIST_AND_IS_ALIVE(var uParam0) // Position - 0x4F0
{
	if (unk_0xFC8BFE4B41177C22(uParam0))
		if (!unk_0x1C2F771CDC87A3A5(uParam0, 0))
			return true;

	return false;
}

void func_11() // Position - 0x511
{
	if (unk_0x8764A5B95AE1F967(-1, uLocal_52, 5f))
	{
		if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(uLocal_43))
		{
			unk_0x5D7CD709B34C90F0(uLocal_43, 0);
			unk_0x39AB1812D20C2C99(uLocal_43, 1000, 1, 0);
		}
	
		if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(uLocal_41))
			unk_0x5D7CD709B34C90F0(uLocal_41, 0);
	
		if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(uLocal_40))
			unk_0x5D7CD709B34C90F0(uLocal_40, 0);
	}

	return;
}

void func_12() // Position - 0x561
{
	if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(uLocal_43))
	{
		if (!unk_0x110821AE6C63DD4F(uLocal_43))
			unk_0xEE0BCDB1B5E36BCB(uLocal_43, 1, 0);
	
		unk_0x7F08C4791E6D6969(uLocal_43, 1, 0, 0, 0, 1);
		unk_0xAAA71DD7E9059338(uLocal_43, 1);
		unk_0x886FA295C1257AAA(uLocal_43, 0);
		unk_0x3F58BFCF656F0DF1(uLocal_43, 0);
		unk_0xEB418CA245FFE897(uLocal_43, "POSTBARRY");
		unk_0x3CEA1FD137ACE2D9(uLocal_43, joaat("PLAYER"));
		unk_0x44C48AC14D3C09ED(uLocal_43, 0, 0);
		unk_0x5D7CD709B34C90F0(uLocal_43, 1);
		unk_0xB2BD5837A8D3CEDA(uLocal_43, uLocal_52, 1, 0, 0, 1);
		unk_0x5C96CEA06531AB03(uLocal_43, func_18(1.12f));
		unk_0x5D7CD709B34C90F0(uLocal_43, 1);
		unk_0x10425721983AE158(uLocal_43, sLocal_44, sLocal_45, 8f, -8f, -1, 9, 0, 0, 0, 0);
		unk_0xE67051907958B5EB(uLocal_43, unk_0x4A8C381C258A124D(), -1, 0, 2);
	}

	return;
}

BOOL func_13(var uParam0, int iParam1, var uParam2, var uParam3, var uParam4, float fParam5, BOOL bParam6) // Position - 0x613
{
	int num;

	if (!func_17(iParam1))
	{
		num = func_15(iParam1);
		unk_0xEC9DAA34BBB4658C(num);
	
		if (unk_0x6252BC0DD8A320DB(num))
		{
			if (unk_0xFC8BFE4B41177C22(*uParam0))
				unk_0x734A9F4537A31459(uParam0);
		
			*uParam0 = unk_0xB1DBFEB95C0EFB88(26, num, uParam2, fParam5, 0, 0);
			unk_0x77EFA99E6A8FFC43(*uParam0);
		
			if (num == joaat("IG_LamarDavis"))
				if (unk_0xC0120BBCC298EA2F(*uParam0, 3) == 0)
					unk_0xD1C578C204015E1F(*uParam0, 5, 2, 0, 0);
		
			func_14(*uParam0, iParam1);
		
			if (bParam6)
				unk_0x55098D9E9AD58806(num);
		
			return true;
		}
	}

	return false;
}

int func_14(var uParam0, int iParam1) // Position - 0x6A1
{
	int num;

	num = 7;

	if (iParam1 == 19)
	{
		num = 3;
	}
	else if (iParam1 == 14)
	{
		num = 4;
	}
	else if (iParam1 == 17)
	{
		num = 5;
	}
	else
	{
		num = 7;
		return 0;
	}

	Global_96515[num - 3] = uParam0;
	return 1;
}

int func_15(int iParam0) // Position - 0x6E7
{
	if (!func_17(iParam0))
		return func_16(iParam0);
	else
		iParam0 != 145;

	return 0;
}

int func_16(int iParam0) // Position - 0x70D
{
	return Global_2028[iParam0 /*29*/];
}

BOOL func_17(int iParam0) // Position - 0x71C
{
	return iParam0 < 3;
}

float func_18(float fParam0) // Position - 0x728
{
	return fParam0 * 57.29578f;
}

void func_19() // Position - 0x738
{
	if (unk_0xE10356B235A70E70(190.56f, -956.4f, 28.63f, 20f, joaat("prop_protest_table_01"), 0))
	{
		uLocal_41 = unk_0x8366ABB82B1ABC59(190.56f, -956.4f, 28.63f, 20f, joaat("prop_protest_table_01"), 0, 0, 1);
	
		if (func_25(uLocal_41))
		{
			if (!unk_0x110821AE6C63DD4F(uLocal_41))
				unk_0xEE0BCDB1B5E36BCB(uLocal_41, 1, 0);
		
			uLocal_49 = { 189.5964f, -956.0344f, 29.54f };
			unk_0xB2BD5837A8D3CEDA(uLocal_41, uLocal_49, 1, 0, 0, 1);
			unk_0x5C96CEA06531AB03(uLocal_41, func_18(-2.01f));
			unk_0x5D7CD709B34C90F0(uLocal_41, 1);
		}
	}

	if (unk_0xE10356B235A70E70(190.56f, -956.4f, 28.63f, 20f, joaat("prop_chair_08"), 0))
	{
		uLocal_40 = unk_0x8366ABB82B1ABC59(190.56f, -956.4f, 28.63f, 20f, joaat("prop_chair_08"), 0, 0, 1);
	
		if (func_25(uLocal_40))
		{
			if (!unk_0x110821AE6C63DD4F(uLocal_40))
				unk_0xEE0BCDB1B5E36BCB(uLocal_40, 1, 0);
		
			uLocal_49 = { 190.2574f, -956.3513f, 29.621f };
			unk_0xB2BD5837A8D3CEDA(uLocal_40, uLocal_49, 1, 0, 0, 1);
			unk_0x5C96CEA06531AB03(uLocal_40, func_18(-1.68f));
			unk_0x5D7CD709B34C90F0(uLocal_40, 1);
		}
	}
	else
	{
		uLocal_49 = { 190.2574f, -956.3513f, 29.621f };
		func_20(&uLocal_40, joaat("prop_chair_08"), uLocal_49, func_18(-1.68f));
		unk_0xB2BD5837A8D3CEDA(uLocal_40, uLocal_49, 1, 0, 0, 1);
		unk_0x5C96CEA06531AB03(uLocal_40, func_18(-1.68f));
		unk_0x5D7CD709B34C90F0(uLocal_40, 1);
	}

	uLocal_49 = { 192.4462f, -953.5946f, 29.0919f };

	if (unk_0xE10356B235A70E70(uLocal_49, 25f, joaat("prop_protest_sign_01"), 0))
	{
		uLocal_42 = unk_0x8366ABB82B1ABC59(uLocal_49, 25f, joaat("prop_protest_sign_01"), 0, 0, 1);
	
		if (func_25(uLocal_42))
		{
			if (!unk_0x110821AE6C63DD4F(uLocal_42))
				unk_0xEE0BCDB1B5E36BCB(uLocal_42, 1, 0);
		
			uLocal_49.f_2 = 29.603f;
			unk_0xB2BD5837A8D3CEDA(uLocal_42, uLocal_49, 1, 0, 0, 1);
			unk_0x5C96CEA06531AB03(uLocal_42, 23.45f);
		}
	}
	else
	{
		func_20(&uLocal_42, joaat("prop_protest_sign_01"), uLocal_49, 23.45f);
		unk_0xB2BD5837A8D3CEDA(uLocal_42, uLocal_49, 1, 0, 0, 1);
		unk_0x5C96CEA06531AB03(uLocal_42, 23.45f);
	}

	return;
}

void func_20(var uParam0, int iParam1, var uParam2, var uParam3, var uParam4, float fParam5) // Position - 0x969
{
	func_21(uParam0);
	*uParam0 = unk_0x4E55EAB577C13329(iParam1, uParam2, 1, 1, 0);
	unk_0x5C96CEA06531AB03(*uParam0, fParam5);
	return;
}

void func_21(var uParam0) // Position - 0x990
{
	if (unk_0xFC8BFE4B41177C22(*uParam0))
	{
		if (unk_0x5B9219522937741D(*uParam0))
			unk_0x837D67618BF89034(*uParam0, 1, 1);
	
		unk_0x51C8BEA2005931AB(uParam0);
	}

	return;
}

void func_22(BOOL bParam0) // Position - 0x9BB
{
	if (bParam0)
		func_24(&uLocal_43);
	else
		func_23(&uLocal_43, 1, 0, 1);

	if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(uLocal_41))
		unk_0x5D7CD709B34C90F0(uLocal_41, 0);

	if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(uLocal_40))
		unk_0x5D7CD709B34C90F0(uLocal_40, 0);

	if (bParam0)
	{
		func_21(&uLocal_40);
		func_21(&uLocal_41);
		func_21(&uLocal_42);
	}
	else
	{
		func_1(&uLocal_40, false);
		func_1(&uLocal_41, false);
		func_1(&uLocal_42, false);
	}

	unk_0x268BE77F77533D03(sLocal_44);
	unk_0xA790E8E6FD7393AC(7, 0);
	unk_0xBBC29EBE6E1A48FA();
	return;
}

void func_23(var uParam0, int iParam1, int iParam2, int iParam3) // Position - 0xA39
{
	if (unk_0xFC8BFE4B41177C22(*uParam0))
	{
		if (!unk_0x4FAFF4BCB7633475(*uParam0))
		{
			unk_0x788F35D395511DFE(*uParam0, 0, 1);
		
			if (iParam3 == 0)
				unk_0xBEB96F1A510EE9AA(*uParam0);
		
			unk_0x44FB298D6382876D(*uParam0, iParam1);
		
			if (iParam2 == 1)
				unk_0xAAA71DD7E9059338(*uParam0, 0);
		}
	
		unk_0xF09E30AF1B8FB379(uParam0);
	}

	return;
}

void func_24(var uParam0) // Position - 0xA89
{
	if (unk_0xFC8BFE4B41177C22(*uParam0))
	{
		if (!unk_0x1C2F771CDC87A3A5(*uParam0, 0))
			unk_0x788F35D395511DFE(*uParam0, 0, 1);
	
		if (!unk_0x110821AE6C63DD4F(*uParam0))
			unk_0xEE0BCDB1B5E36BCB(*uParam0, 1, 0);
	
		unk_0x734A9F4537A31459(uParam0);
	}

	return;
}

BOOL func_25(var uParam0) // Position - 0xACA
{
	if (!unk_0xFC8BFE4B41177C22(uParam0))
		return false;

	return !unk_0x1C2F771CDC87A3A5(uParam0, 0);
}

