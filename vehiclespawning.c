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
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
	float fLocal_29 = 0f;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	var uLocal_35 = 20;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	int iLocal_56 = 0;
	BOOL bLocal_57 = 0;
	BOOL bLocal_58 = 0;
	BOOL bLocal_59 = 0;
	BOOL bLocal_60 = 0;
	BOOL bLocal_61 = 0;
	int iLocal_62 = 0;
	float fLocal_63 = 0f;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
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
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	iLocal_28 = 3;
	fLocal_29 = 0f;
	fLocal_33 = -0.0375f;
	fLocal_34 = 0.17f;
	fLocal_63 = 277.7314f;
	uLocal_65 = { -196.045f, -580.13f, 135.0004f };
	unk_0x8F72AF14CE5AACE4(&func_13);
	func_16();

	while (true)
	{
		unk_0x66AA5AE1BFE28CA0();
		func_15();
	
		if (_SHOULD_NETWORK_SCRIPT_TERMINATE() || iLocal_62)
			func_3();
	
		if (!bLocal_58)
		{
			if (!bLocal_57 && unk_0x15CCE8886267624F())
			{
				unk_0xB2BD5837A8D3CEDA(unk_0x4A8C381C258A124D(), uLocal_65, 1, 0, 0, 1);
				unk_0x5C96CEA06531AB03(unk_0x4A8C381C258A124D(), fLocal_63);
				unk_0x4A3280817398D754(uLocal_65, 2500f, 0);
				unk_0x64BB72494B9DF6DC(0);
				bLocal_57 = true;
			}
			else if (unk_0x787F8EE1F6FBDC6D())
			{
				if (!bLocal_61)
				{
					bLocal_61 = func_2();
				}
				else if (!bLocal_59)
				{
					bLocal_59 = func_1();
				}
				else
				{
					unk_0x10B228D2FDB7AF16(&func_13);
					bLocal_58 = true;
				}
			}
		}
	}

	return;
}

BOOL func_1() // Position - 0x121
{
	if (!unk_0x9491D4E34E4389CD(uLocal_64, "garage_decor_01"))
	{
		unk_0x907994FF361E5295(uLocal_64, "garage_decor_01");
	}
	else
	{
		unk_0xEEC112F70F9E6543(uLocal_64);
		return 1;
	}

	return 0;
}

BOOL func_2() // Position - 0x14B
{
	uLocal_64 = unk_0xF8F35890F43ED2AE(unk_0x4A8C381C258A124D());

	if (unk_0xF8A8852F99E201DD(uLocal_64))
	{
		if (!bLocal_60)
		{
			unk_0x74C1590CC91B3930(uLocal_64);
			bLocal_60 = true;
		}
		else if (unk_0xD0B0D1BD29678350(uLocal_64))
		{
			unk_0xBBB6D0F765409642(uLocal_64);
			return 1;
		}
	}

	return 0;
}

void func_3() // Position - 0x18C
{
	int i;

	for (i = 0; i < iLocal_56; i = i + 1)
	{
		func_5(i);
	}

	func_4();
	return;
}

void func_4() // Position - 0x1B1
{
	unk_0xBBC29EBE6E1A48FA();
	return;
}

void func_5(int iParam0) // Position - 0x1BD
{
	func_6(&uLocal_35[iParam0]);
	unk_0x552B3BADB43FF551(unk_0xF46F370442FAD8F9(0, 0) - 1);
	return;
}

void func_6(var uParam0) // Position - 0x1DB
{
	var unk;

	if (unk_0x2FC2FDC413532977(*uParam0))
		!unk_0xEADBDBE0422CF7E6(*uParam0);

	if (unk_0x93BF17E19A9F0E9B(*uParam0))
	{
		unk = unk_0xF5014688C9788D5F(*uParam0);
		unk_0x81A7F3CD719DD53B(&unk);
	}

	return;
}

int _SHOULD_NETWORK_SCRIPT_TERMINATE() // Position - 0x214
{
	if (Global_1575035 == false)
		if (!unk_0x76CD105BCAC6EB9F())
			return 1;

	if (func_14())
		return 1;

	if (Global_2696917)
		return 1;

	if (func_13())
		return 1;

	if (_DOES_EVENT_OF_TYPE_EXIST(159))
		if (!func_11())
			return 1;

	if (_DOES_EVENT_OF_TYPE_EXIST(157))
		return 1;

	if (!unk_0x261E3728EE56B3AC())
		return 1;

	if (_GET_CURRENT_SESSION_TYPE_SCRIPT_HASH() != 0)
		if (unk_0x486FF5D06E9659F1(_GET_CURRENT_SESSION_TYPE_SCRIPT_HASH()) == 0)
			return 1;

	return 0;
}

int _GET_CURRENT_SESSION_TYPE_SCRIPT_HASH() // Position - 0x298
{
	switch (func_10())
	{
		case 0:
			return func_9();
	
		case 2:
			return joaat("creator");
	}

	return 0;
}

int func_9() // Position - 0x2CB
{
	switch (Global_2697021)
	{
		case 0:
			return joaat("freemode");
	
		default:
		
	}

	return joaat("freemode");
}

int func_10() // Position - 0x2EF
{
	return Global_32163;
}

BOOL func_11() // Position - 0x2FA
{
	return Global_2683864.f_698;
}

BOOL _DOES_EVENT_OF_TYPE_EXIST(int iParam0) // Position - 0x309
{
	if (unk_0x5E3ED023C0E7CC7C(1, iParam0))
		return true;

	return false;
}

BOOL func_13() // Position - 0x320
{
	return Global_2694526;
}

BOOL func_14() // Position - 0x32C
{
	return Global_2683864.f_693;
}

void func_15() // Position - 0x33B
{
	SYSTEM::WAIT(0);
	return;
}

void func_16() // Position - 0x348
{
	unk_0xDB2434E51017FFCC(32, 0, -1);
	_NETWORK_ENSURE_SCRIPT_IS_NETWORKED(0, -1, false);
	unk_0x6F4A865F87C7A3AD(&uLocal_35, 21, 0);

	if (!_NETWORK_WAIT_FOR_HOST_BROADCAST_DATA())
		func_3();

	unk_0xAECC5FA98C879D67(0);

	if (!unk_0x5AEB336317DC4151("imp_dt1_02_cargarage_a"))
		unk_0xECFC57F5F11BCD83("imp_dt1_02_cargarage_a");

	return;
}

BOOL _NETWORK_WAIT_FOR_HOST_BROADCAST_DATA() // Position - 0x38C
{
	int num;

	num = 0;

	while (true)
	{
		num = num + 1;
	
		if (!unk_0x76CD105BCAC6EB9F())
			return false;
	
		if (unk_0x37F4AB46DE999660())
			return true;
	
		if (func_14())
			return false;
	
		if (_DOES_EVENT_OF_TYPE_EXIST(157))
			return false;
	
		if (num >= 3600)
			return false;
	
		SYSTEM::WAIT(0);
	}

	return false;
}

int _NETWORK_ENSURE_SCRIPT_IS_NETWORKED(int iParam0, int iParam1, BOOL bNoTerminate) // Position - 0x3E5
{
	int i;

	for (i = unk_0xDFF16B5B12604EFF(); i != 2; i = unk_0xDFF16B5B12604EFF())
	{
		if (i == 3 || i == 4 || i == 5 || i == 6)
			if (!bNoTerminate)
				func_4();
			else
				return 0;
	
		if (!func_19(false))
		{
			if (iParam0 == 0)
			{
				if (!unk_0x76CD105BCAC6EB9F())
					if (!bNoTerminate)
						func_4();
					else
						return 0;
			
				if (func_14())
					if (!bNoTerminate)
						func_4();
					else
						return 0;
			
				if (_DOES_EVENT_OF_TYPE_EXIST(157))
					if (!bNoTerminate)
						func_4();
					else
						return 0;
			}
			else if (!unk_0xBF52D447C795492B())
			{
				if (!bNoTerminate)
					func_4();
				else
					return 0;
			}
		}
	
		SYSTEM::WAIT(0);
	}

	if (iParam1 > -1)
		Global_1574666 = i;

	if (iParam0 == 0)
		if (!unk_0x76CD105BCAC6EB9F())
			if (!bNoTerminate)
				func_4();
			else
				return 0;
	else if (!unk_0xBF52D447C795492B())
		if (!bNoTerminate)
			func_4();
		else
			return 0;

	return 1;
}

BOOL func_19(BOOL bParam0) // Position - 0x4FB
{
	bParam0;
	return Global_1575035;
}

