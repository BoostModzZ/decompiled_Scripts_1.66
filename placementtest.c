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
	char* sLocal_20 = 0;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	int iLocal_45 = 0;
	var uLocal_46 = 0;
#endregion

void main() // Position - 0x0
{
	var unk;

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
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	unk = func_13();

	if (unk_0x96CFB880BAC634CE(3))
		unk_0xBBC29EBE6E1A48FA();

	while (true)
	{
		if (unk_0xA0C7B98BCF1EEF9E(unk))
		{
			switch (iLocal_45)
			{
				case 0:
					func_11(&unk, "OFFR_BLIP_R5", 255, 0, 255, 255, false);
					func_10(&unk);
					uLocal_46 = unk_0x1DD05E817C89C737();
					iLocal_45 = 1;
					break;
			
				case 1:
					if (unk_0x1DD05E817C89C737() - uLocal_46 > 3000)
					{
						func_9(&unk);
						iLocal_45 = 2;
					}
					break;
			}
		
			func_1(&unk, false);
		}
	
		SYSTEM::WAIT(0);
	}

	return;
}

BOOL func_1(var uParam0, BOOL bParam1) // Position - 0xEF
{
	if (!func_8(&(uParam0->f_2)))
		func_6(&(uParam0->f_2));

	unk_0x4EB223432F8FA0A0(14);
	unk_0xA4F67CEB594AE064(1);
	unk_0x6D16B99FEB0AFFF1(*uParam0, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 0, 0);

	if (bParam1)
		if (unk_0x6D05C5731A838CB3(2, 201))
			return false;

	if (uParam0->f_1 == -1)
		return true;

	if (func_3(&(uParam0->f_2)) * 1000f > SYSTEM::TO_FLOAT(uParam0->f_1))
	{
		func_2(&(uParam0->f_2));
		return false;
	}

	return true;
}

void func_2(var uParam0) // Position - 0x175
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
	return;
}

float func_3(var uParam0) // Position - 0x18B
{
	if (func_8(uParam0))
		if (func_5(uParam0))
			return uParam0->f_2;
		else
			return func_4(IS_BIT_SET(*uParam0, 4)) - uParam0->f_1;

	return uParam0->f_1;
}

float func_4(BOOL bParam0) // Position - 0x1C7
{
	float num;
	float num2;
	int value;
	float num3;
	float num4;

	if (bParam0)
	{
		num = SYSTEM::TO_FLOAT(unk_0x1DD05E817C89C737());
		num2 = num / 1000f;
		return num2;
	}

	if (unk_0x76CD105BCAC6EB9F())
	{
		value = unk_0x7E3F74F641EE6B27();
		num3 = SYSTEM::TO_FLOAT(value);
		num4 = num3 / 1000f;
		return num4;
	}

	return SYSTEM::TO_FLOAT(unk_0x1DD05E817C89C737()) / 1000f;
}

BOOL func_5(var uParam0) // Position - 0x21F
{
	return IS_BIT_SET(*uParam0, 2);
}

void func_6(var uParam0) // Position - 0x22C
{
	func_7(uParam0, 0f);
	return;
}

void func_7(var uParam0, float fParam1) // Position - 0x23B
{
	uParam0->f_1 = func_4(IS_BIT_SET(*uParam0, 4)) - fParam1;
	unk_0x0B0C9A0F9AAEB7F0(uParam0, 1);
	unk_0x8744D2E3FC95740E(uParam0, 2);
	uParam0->f_2 = 0f;
	return;
}

BOOL func_8(var uParam0) // Position - 0x266
{
	return IS_BIT_SET(*uParam0, 1);
}

void func_9(var uParam0) // Position - 0x273
{
	uParam0->f_1 = 300;
	func_6(&(uParam0->f_2));
	unk_0x88F483FBD433696A(*uParam0, "SPLASH_TEXT_TRANSITION_OUT");
	unk_0x330108B080A2132F(300);
	unk_0xE6B753D52F4CA222();
	return;
}

void func_10(var uParam0) // Position - 0x2A0
{
	unk_0x88F483FBD433696A(*uParam0, "SPLASH_TEXT_TRANSITION_IN");
	unk_0xE6B753D52F4CA222();
	return;
}

void func_11(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, BOOL bParam6) // Position - 0x2B7
{
	uParam0->f_1 = -1;
	unk_0x88F483FBD433696A(*uParam0, "SPLASH_TEXT_LABEL");
	func_12(sParam1);
	unk_0x330108B080A2132F(iParam2);
	unk_0x330108B080A2132F(iParam3);
	unk_0x330108B080A2132F(iParam4);
	unk_0x330108B080A2132F(iParam5);
	unk_0xE6B753D52F4CA222();

	if (bParam6)
	{
		unk_0x88F483FBD433696A(*uParam0, "SPLASH_TEXT_TRANSITION_IN");
		unk_0xE6B753D52F4CA222();
	}

	return;
}

void func_12(char* sParam0) // Position - 0x305
{
	unk_0x882AEFD55B8D51FB(sParam0);
	unk_0xCFAD3D478C87321A();
	return;
}

var func_13() // Position - 0x317
{
	return unk_0x8DE4F68A9728925E("SPLASH_TEXT");
}

