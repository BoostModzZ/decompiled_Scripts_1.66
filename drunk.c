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
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	BOOL bLocal_50 = 0;
	BOOL bLocal_51 = 0;
	float fLocal_52 = 0f;
	float fLocal_53 = 0f;
	char* sLocal_54 = 0;
	int iLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	int iLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	BOOL bLocal_65 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
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
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	iLocal_48 = -1;
	iLocal_49 = -1;
	fLocal_52 = 1.7f;
	fLocal_53 = 0f;
	sLocal_54 = "";
	iLocal_63 = -1;

	if (unk_0x96CFB880BAC634CE(2))
		func_178();

	uLocal_43 = { uScriptParam_0 };
	func_177();
	func_176();
	func_171(iLocal_48, 0, 0);
	SYSTEM::SETTIMERA(0);
	func_170();
	func_166();

	while (true)
	{
		SYSTEM::WAIT(0);
		func_165(iLocal_48);
		func_164();
		func_162();
		func_155();
		func_171(iLocal_48, 0, 0);
		func_177();
		func_9();
	
		if (unk_0x76CD105BCAC6EB9F() && !unk_0x834C960822A4683F() && !func_8())
			func_1();
	}

	return;
}

void func_1() // Position - 0x106
{
	if (func_7() || func_6())
	{
		func_5();
		func_2();
	}

	return;
}

void func_2() // Position - 0x127
{
	if (!_IS_FMMC_ACTIVE() && !func_3() && Global_2684800)
		Global_4718592.f_113724 = 0;

	return;
}

BOOL func_3() // Position - 0x155
{
	return Global_2683864.f_691;
}

BOOL _IS_FMMC_ACTIVE() // Position - 0x164
{
	return Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_192 != 0;
}

void func_5() // Position - 0x17B
{
	Global_2683864.f_756 = 1;
	return;
}

BOOL func_6() // Position - 0x18B
{
	return Global_2683864.f_735;
}

BOOL func_7() // Position - 0x19A
{
	return IS_BIT_SET(Global_2683864.f_2, 11);
}

BOOL func_8() // Position - 0x1AB
{
	return IS_BIT_SET(Global_2684801.f_1.f_2810, 3);
}

void func_9() // Position - 0x1BE
{
	BOOL flag;

	if (unk_0x1C2F771CDC87A3A5(uLocal_43.f_1, 0))
		func_178();

	if (bLocal_50)
		if (!unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
			func_178();

	func_154();
	flag = true;

	switch (iLocal_60)
	{
		case 4:
			func_153();
			return;
	
		case 5:
			func_150();
			return;
	
		case 6:
			func_148();
			return;
	
		case 7:
			func_147();
			return;
	
		case 8:
			func_146();
			return;
	
		case 9:
			func_144();
			return;
	
		case 10:
			func_143();
			func_140();
			func_139();
			return;
	
		case 11:
			func_138();
			return;
	
		case 12:
			break;
	
		default:
			flag = false;
			break;
	}

	if (!flag)
		return;

	if (!(iLocal_60 == 12))
		return;

	switch (iLocal_60.f_1)
	{
		case 1:
			if (!func_137())
			{
				func_121();
				func_140();
			}
			break;
	
		case 2:
			func_119();
			break;
	
		case 12:
			func_106();
			break;
	
		case 3:
			func_10();
			break;
	
		default:
			break;
	}

	return;
}

void func_10() // Position - 0x2D9
{
	var unk;
	char* str;
	char* str2;
	int num;

	if (!IS_BIT_SET(Global_1950108.f_3, 27))
		unk_0xB1C2DC5C115FA50D(uLocal_43.f_1, 3000, 3500, 0, 1, 1, 0);

	Global_1944403 = 1;

	if (!unk_0x15CCE8886267624F())
	{
		unk_0x8F72AF14CE5AACE4(2500);
	
		while (unk_0x78ABC1D11B34F324())
		{
			SYSTEM::WAIT(0);
		}
	}

	if (unk_0x76CD105BCAC6EB9F())
	{
		_STOPWATCH_INITIALIZE(&unk, false, false);
	
		if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()) && !unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
			unk_0x091AB029AFE429F2(unk_0x4A8C381C258A124D(), 0, 1);
	
		while (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()) && !unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0) && unk_0xC8D49539708A80B4(unk_0x4A8C381C258A124D()) && unk_0x6BF8FE9F26BBABDE(unk_0x4A8C381C258A124D()))
		{
			SYSTEM::WAIT(0);
		}
	
		if (!unk_0xC8D49539708A80B4(unk_0x4A8C381C258A124D()))
			func_178();
	
		unk_0x8744D2E3FC95740E(&(Global_1950108.f_3), 27);
		_SET_PLAYER_CONTROL_EX(unk_0x259BE71D8A81D4FA(), false, 57344, 0);
		Global_2635559.f_2681 = 1;
	
		if (IS_BIT_SET(Global_1950108, 15))
			unk_0x8744D2E3FC95740E(&Global_1950108, 15);
	
		if (IS_BIT_SET(Global_1950108.f_2, 6))
			unk_0x8744D2E3FC95740E(&(Global_1950108.f_2), 6);
	
		if (unk_0x3EE1A6D743332852(unk_0x259BE71D8A81D4FA(), 0))
			Global_2635559.f_2682 = 1;
		else
			Global_2635559.f_2682 = 0;
	
		if (unk_0x12B42434831D668E())
			unk_0xB9AB3B8920F1AA69(0);
	
		if (func_87(true))
			func_75(0);
	
		func_73(true);
		func_178();
	}

	if (bLocal_65)
		func_178();

	str = "";
	str2.f_3 = 1064514355;
	str2.f_30 = 1148829696;
	str2.f_31 = 1148829696;
	str2.f_52 = 1148829696;
	num = 7;

	switch (_GET_CURRENT_PLAYER_CHARACTER())
	{
		case CHAR_MICHAEL:
			if (func_65() != 2)
				num = 0;
			else
				num = 1;
			break;
	
		case CHAR_FRANKLIN:
			if (!func_64(126))
				num = 2;
			else
				num = 3;
			break;
	
		case CHAR_TREVOR:
			if (!func_63(4))
			{
				if (func_64(58))
					num = 4;
			
				if (func_64(59))
					num = 5;
			
				if (num == 7)
					if (!_GET_RANDOM_BOOL())
						num = 4;
					else
						num = 5;
			}
			else
			{
				num = 6;
			}
			break;
	}

	switch (num)
	{
		case 0:
			str = "DWC_MICHAEL_mansion";
			str2 = "SAVEM_Default@";
			str2.f_1 = "M_GetOut_R";
			str2.f_2 = "M_GetOut_R_CAM";
			str2.f_5 = { -814.181f, 181.1f, 75.74f };
			str2.f_8 = { 0f, 0f, 21.1994f };
			str2.f_4 = joaat("MotionState_Idle");
			break;
	
		case 1:
			str = "DWC_MICHAEL_trailer";
			str2 = "SAVECountryside@";
			str2.f_1 = "M_GetOut_countryside";
			str2.f_2 = "M_GetOut_countryside_CAM";
			str2.f_5 = { 1968.14f, 3816.79f, 32.4287f };
			str2.f_8 = { 0f, 0f, 29.7938f };
			str2.f_4 = joaat("MotionState_Idle");
			break;
	
		case 2:
			str = "DWC_FRANKLIN_city";
			str2 = "SWITCH@FRANKLIN@BED";
			str2.f_1 = "Sleep_GetUp_RubEyes";
			str2.f_2 = "Sleep_GetUp_RubEyes_CAM";
			str2.f_5 = { -17.2168f, -1441.224f, 30.1015f };
			str2.f_8 = { 0f, 0f, -179.653f };
			str2.f_4 = joaat("MotionState_Idle");
			break;
	
		case 3:
			str = "DWC_FRANKLIN_hills";
			str2 = "SAVEBighouse@";
			str2.f_1 = "F_GetOut_r_bighouse";
			str2.f_2 = "F_GetOut_r_bighouse_CAM";
			str2.f_5 = { -1.049f, 524.283f, 170.064f };
			str2.f_8 = { 0f, 0f, 24f };
			str2.f_4 = joaat("MotionState_Idle");
			break;
	
		case 4:
			str = "DWC_TREVOR_trailer";
			str2 = "SAVECountryside@";
			str2.f_1 = "T_GetOut_countryside";
			str2.f_2 = "T_GetOut_countryside_CAM";
			str2.f_5 = { 1968.14f, 3816.79f, 32.4287f };
			str2.f_8 = { 0f, 0f, 29.7938f };
			str2.f_4 = joaat("MotionState_Idle");
			break;
	
		case 5:
			str = "DWC_TREVOR_beach";
			str2 = "SAVEVeniceB@";
			str2.f_1 = "T_GetOut_r_veniceB";
			str2.f_2 = "T_GetOut_r_veniceB_CAM";
			str2.f_5 = { -1148.438f, -1512.246f, 9.689f };
			str2.f_8 = { 0f, 0f, 36.25f };
			str2.f_4 = joaat("MotionState_Idle");
			break;
	
		case 6:
			str = "DWC_TREVOR_stripclub";
			str2 = "SAVECouch@";
			str2.f_1 = "T_GetOut_couch";
			str2.f_2 = "T_GetOut_couch_CAM";
			str2.f_5 = { 94.53f, -1289.86f, 28.27f };
			str2.f_8 = { 0f, 0f, 29.7938f };
			str2.f_4 = joaat("MotionState_Idle");
			break;
	}

	if (!unk_0x1C2F771CDC87A3A5(uLocal_43.f_1, 0))
		unk_0xB2BD5837A8D3CEDA(uLocal_43.f_1, str2.f_5, 1, 0, 0, 1);

	SYSTEM::WAIT(500);
	TEXT_LABEL_ASSIGN_STRING(&(str2.f_11), "", 16);
	str2.f_15 = -1f;
	func_12(str, &str2, "");
	func_11(126, 1);
	func_178();
	return;
}

void func_11(int iParam0, int iParam1) // Position - 0x760
{
	int num;

	if (iParam1 < 1)
		return;

	if (Global_59104[iParam0 /*7*/].f_2)
		return;

	if (unk_0x76CD105BCAC6EB9F())
		return;

	if (Global_59104[iParam0 /*7*/])
	{
		unk_0xDF7F16323520B858(Global_59104[iParam0 /*7*/].f_1, &num, -1);
		num = num + iParam1;
		unk_0x1164A75E490C27B6(Global_59104[iParam0 /*7*/].f_1, num, 1);
	}

	return;
}

void func_12(char* sParam0, var uParam1, char* sParam2) // Position - 0x7BD
{
	float num;
	int num2;
	BOOL flag;
	var unk;
	int num3;
	var unk2;
	int num4;
	BOOL flag2;
	BOOL flag3;
	var unk3;
	eCharacter character;
	int num5;
	char* str;
	char* str2;
	char* str3;
	int num6;
	float num7;
	float num8;
	int num9;
	int num10;
	int num11;
	float num12;
	var unk168;
	var unk171;
	float num13;
	var unk174;
	var unk175;
	var unk176;
	var unk179;
	float num14;
	var unk180;
	var unk181;
	var unk184;
	float num15;
	int num16;
	var unk187;
	var unk188;
	var unk189;
	var unk192;
	float num17;
	var unk193;
	var unk194;
	var unk197;
	float num18;
	int num19;
	BOOL flag4;
	BOOL flag5;
	int num20;

	num = 0f;
	unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), 0, 0);

	if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
		unk_0x935364B4448CD584(unk_0x4A8C381C258A124D(), 1);

	unk_0xA69DCC67B2B61AD1(uParam1->f_5, 4500f);
	unk_0x5926A824AF54BCC3(uParam1->f_5, 4500f);
	unk_0x2094BC4B6731BA68(uParam1->f_5, 5f, 1, 0, 0, 0);
	unk_0xB2BD5837A8D3CEDA(unk_0x4A8C381C258A124D(), uParam1->f_5, 1, 0, 0, 1);
	unk_0x5D7CD709B34C90F0(unk_0x4A8C381C258A124D(), 1);
	SYSTEM::WAIT(0);
	unk_0x98E393364463951A(1);
	unk_0x80813AC549A1E8AE(*uParam1);

	if (unk_0xD6F9DEE4765092A9(uParam1->f_16))
	{
	}
	else
	{
		unk_0x80813AC549A1E8AE(uParam1->f_16);
	}

	if (!unk_0x15CCE8886267624F())
		unk_0x8F72AF14CE5AACE4(0);

	func_57(uParam1->f_5, uParam1->f_8.f_2, 0, 1);

	if (!unk_0x15CCE8886267624F())
		unk_0x8F72AF14CE5AACE4(0);

	num2 = unk_0x1DD05E817C89C737() + 20000;
	flag = false;
	uParam1->f_33 = 0;

	while (!flag && num2 > unk_0x1DD05E817C89C737())
	{
		flag = true;
		unk_0x80813AC549A1E8AE(*uParam1);
	
		if (!unk_0xE100DD4F82A51BDE(*uParam1))
			flag = false;
	
		if (!unk_0xD6F9DEE4765092A9(uParam1->f_16))
		{
			unk_0x80813AC549A1E8AE(uParam1->f_16);
		
			if (!unk_0xE100DD4F82A51BDE(uParam1->f_16))
				flag = false;
		}
	
		if (!unk_0x15CCE8886267624F())
			unk_0x8F72AF14CE5AACE4(0);
	
		SYSTEM::WAIT(0);
	}

	func_54();

	if (!func_53(uParam1->f_22, 0f, 0f, 0f, false))
	{
		unk_0xD1B0AF388B711EBC((uParam1->f_5 + uParam1->f_19) - uParam1->f_22, uParam1->f_5 + uParam1->f_19 + uParam1->f_22, 0, 1);
		unk_0x60040CDD28AA1BC3(uParam1->f_5 + uParam1->f_19, SYSTEM::VMAG(uParam1->f_22) + 25f, 0, 0, 0, 0, 0, 0, 0);
		unk_0x2094BC4B6731BA68(uParam1->f_5 + uParam1->f_19, SYSTEM::VMAG(uParam1->f_22) + 25f, 1, 0, 0, 0);
	}

	if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
	{
		unk_0x3C482AC51A8E85DC(unk_0x259BE71D8A81D4FA());
		unk_0x3C0F448853B71C92(unk_0x4A8C381C258A124D(), joaat("WEAPON_UNARMED"), 1);
		unk_0x19626F992DC71FB9(unk_0x4A8C381C258A124D());
	}

	unk_0x5D7CD709B34C90F0(unk_0x4A8C381C258A124D(), 0);
	unk_0x98E393364463951A(0);
	unk_0x2094BC4B6731BA68(uParam1->f_5, 15f, 1, 0, 0, 0);
	unk_0x337117D37E592B05();
	unk_0x6874AA782954505E();
	func_51();

	while (func_50())
	{
		SYSTEM::WAIT(0);
	}

	if (!unk_0x9390801B06EE998F() && !unk_0xDDED2C93E8FD5B69())
		unk_0x10B228D2FDB7AF16(250);

	unk_0x40AC02FA167D4D0A(1);

	if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
	{
		num3 = unk_0x2EC137C692A52458(uParam1->f_5, uParam1->f_8, 2);
		unk_0xBF3497E24DEAD835(num3, 0);
		unk_0xA7C372501A8A3B23(num3, 0);
		unk2 = unk_0x69D23632E4288DBD("DEFAULT_ANIMATED_CAMERA", 1);
		num4 = 4;
	
		if (uParam1->f_4 != joaat("MotionState_Idle"))
			num4 = num4 | 2;
	
		func_48(unk_0x4A8C381C258A124D(), uParam1->f_18);
		unk_0x3DA436E63AB0F541(unk_0x4A8C381C258A124D(), num3, *uParam1, uParam1->f_1, 1000f, -1.5f, num4, 0, 1148846080, 0);
		unk_0x711F9BE10FCB4E6B(unk_0x4A8C381C258A124D(), 1);
		unk_0xE00868707690F6A7(unk_0x259BE71D8A81D4FA(), 1);
		unk = unk_0x025281901DECB32C(unk_0x4A8C381C258A124D(), 77);
		unk_0x0FB8E752BCC547A9(unk_0x4A8C381C258A124D(), 77, 1);
		unk_0xF9B66DAE101B699C(unk2, num3, uParam1->f_2, *uParam1);
		unk_0xE37AF9002E782BA0(1, 0, 3000, 1, 0, 0);
	
		if (!unk_0xD6F9DEE4765092A9(uParam1->f_16) && !unk_0xD6F9DEE4765092A9(uParam1->f_17))
			unk_0x10425721983AE158(unk_0x4A8C381C258A124D(), uParam1->f_16, uParam1->f_17, 1000f, -1.5f, 10000, 33, 0, 0, 0, 0);
	}
	else
	{
		num3 = -1;
	}

	if (!uParam1->f_25)
	{
		if (!unk_0xD6F9DEE4765092A9(sParam2))
		{
			_DISPLAY_HELP_TEXT(sParam2, -1);
			uParam1->f_25 = 1;
		}
	}

	flag2 = false;
	flag3 = false;
	unk3 = 16;

	if (!unk_0xD6F9DEE4765092A9(&(uParam1->f_11)))
	{
		character = _GET_CURRENT_PLAYER_CHARACTER();
		num5 = -1;
		str = "";
	
		switch (character)
		{
			case CHAR_MICHAEL:
				num5 = 0;
				str = "MICHAEL";
				break;
		
			case CHAR_FRANKLIN:
				num5 = 1;
				str = "FRANKLIN";
				break;
		
			case CHAR_TREVOR:
				num5 = 2;
				str = "TREVOR";
				break;
		
			default:
				break;
		}
	
		_CONVERSATION_INITIALIZE_ACTOR(&unk3, num5, unk_0x4A8C381C258A124D(), str, 0, 1);
	}

	if (unk_0x5266F1D2AEF6F73A(num3))
	{
		str2 = "WalkInterruptible";
		str3 = "ForceBlendout";
	
		while (unk_0x5266F1D2AEF6F73A(num3) && !unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
		{
			if (!flag3)
			{
				if (!unk_0x15CCE8886267624F())
				{
					if (!unk_0xD6F9DEE4765092A9(uParam1->f_26))
					{
						unk_0xDCAFFD08A08087EB(uParam1->f_26, 0, 0);
						flag3 = true;
					}
				
					if (!unk_0xD6F9DEE4765092A9(uParam1->f_27))
					{
						if (!unk_0xD6F9DEE4765092A9(uParam1->f_28))
						{
							unk_0xBF3D28CA44F3BE2D(-1, uParam1->f_28, uParam1->f_27, 0);
							flag3 = true;
						}
					
						if (!unk_0xD6F9DEE4765092A9(uParam1->f_29))
						{
							unk_0xBF3D28CA44F3BE2D(-1, uParam1->f_29, uParam1->f_27, 0);
							flag3 = true;
						}
					}
				}
			}
		
			unk_0x43AE50D2A33F6E2A();
			unk_0x4EB223432F8FA0A0(18);
			unk_0xF64D9910FB38427C();
			func_40(0);
			num6 = unk_0x1DD05E817C89C737();
		
			if (num6 >= Global_43808 - 500)
				func_39(4000);
		
			num7 = -1f;
			num8 = -1f;
			num = unk_0xBD3B265153D3BA2D(num3);
		
			if (!unk_0xD6F9DEE4765092A9(&(uParam1->f_11)))
				if (!flag2)
					if (num >= uParam1->f_15)
						if (_CONVERSATION_ADD_LINE(&unk3, "PRSAUD", &(uParam1->f_11), 3, 0, 0, 0))
							flag2 = true;
		
			num9 = 0;
		
			if (unk_0x5D640DD02AFD9F75(unk_0x4A8C381C258A124D(), unk_0x70E57E9927B6BA58(str2)))
			{
				num10 = unk_0x6C29A57AC29D7033(2, 195) - 128;
				num11 = unk_0x6C29A57AC29D7033(2, 196) - 128;
			
				if (num10 < 64 && num10 > -64 && num11 < 64 && num11 > -64)
				{
				}
				else
				{
					num9 = 1;
				}
			}
			else
			{
				num7 = -1f;
				num8 = -1f;
				num9 = 0;
				uParam1->f_3 = uParam1->f_3;
				num7 = num7;
				num8 = num8;
			}
		
			if (unk_0x3B5989D5DB08A155() == 4 && uParam1->f_52 > 0f)
			{
				if (num >= uParam1->f_52)
				{
					if (!uParam1->f_32)
					{
						num12 = 1.5f;
						unk168 = { unk_0x02AF3EA0F67D2329() };
						unk171 = { unk_0x83FDC027F0BEA202(unk_0x4A8C381C258A124D(), 31086, 0f, 0f, 0f) };
						num13 = unk_0xED977E2AE2CB16EE(unk168, unk171, 1);
						num12 = func_21(num12, 0.001f, num13 - 0.75f);
					
						if (num12 < 0f)
							num12 = 0.001f;
					
						func_20(&(uParam1->f_34), unk_0x4A8C381C258A124D(), _GET_CURRENT_PLAYER_CHARACTER(), 1E-06f, 300, 300, 0, 0, 1045220557);
						func_19(&(uParam1->f_34), uParam1->f_53);
					
						if (!uParam1->f_33)
						{
							uParam1->f_34 = 1;
							uParam1->f_34.f_7 = unk_0x1DD05E817C89C737();
							uParam1->f_34.f_8 = 0;
							uParam1->f_33 = 1;
						}
					
						if (uParam1->f_57 == 999f)
							uParam1->f_56 = 0f;
					
						if (uParam1->f_57 == 999f)
						{
							unk176 = { unk_0x958849BB56EC0F07(2) };
							unk179 = unk_0xCFC0C995455A6204(unk_0x4A8C381C258A124D());
							num14 = unk176.f_2;
							unk180 = unk179;
							uParam1->f_57 = num14 - unk180;
						
							if (uParam1->f_57 < 360f)
								uParam1->f_57 = uParam1->f_57 + 360f;
						
							if (uParam1->f_57 > 360f)
								uParam1->f_57 = uParam1->f_57 - 360f;
						}
					
						unk174 = uParam1->f_56;
						unk175 = uParam1->f_57;
						unk_0xD815D4BD1AE9E85A(unk174, 1065353216);
						unk_0x64BB72494B9DF6DC(unk175);
						unk_0x7E08E86FBA713FE8(unk174);
						unk_0xE0A23567157E9B5E(unk175);
						unk181 = { unk_0x02AF3EA0F67D2329() };
						unk184 = { unk_0xCF141FCD0940B0A3() };
						num15 = unk_0xED977E2AE2CB16EE(unk181, unk184, 1);
						num16 = SYSTEM::ROUND(num15 * 1000f);
						uParam1->f_32 = 1;
					}
				
					if (uParam1->f_32)
					{
						unk_0x5FD79E92E62966FB();
						func_16(&(uParam1->f_34), true, true, true, false, false, 0);
					}
				}
			}
		
			if (unk_0x5D640DD02AFD9F75(unk_0x4A8C381C258A124D(), unk_0x70E57E9927B6BA58(str3)) || num9)
			{
				if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
				{
					unk_0x974022927CB47E68(unk_0x4A8C381C258A124D());
				
					switch (uParam1->f_4)
					{
						case joaat("MotionState_Idle"):
							unk_0x717804C8C8DA67BF(unk_0x4A8C381C258A124D(), joaat("MotionState_Idle"), 1, 0, 0);
							unk_0xC289B882CEF4CAC9(0, 0, 3, 0);
							break;
					
						case joaat("MotionState_Walk"):
							unk_0x717804C8C8DA67BF(unk_0x4A8C381C258A124D(), joaat("MotionState_Walk"), 1, 0, 0);
							unk_0x8EAC8FBDF8A3830E(unk_0x259BE71D8A81D4FA(), 1f, 500, 0, 1, 0);
						
							if (unk_0x3B5989D5DB08A155() != 4)
							{
								if (uParam1->f_31 == 999f)
									uParam1->f_30 = 0f;
							
								if (uParam1->f_31 == 999f)
								{
									unk189 = { unk_0x958849BB56EC0F07(2) };
									unk192 = unk_0xCFC0C995455A6204(unk_0x4A8C381C258A124D());
									num17 = unk189.f_2;
									unk193 = unk192;
									uParam1->f_31 = num17 - unk193;
								
									if (uParam1->f_31 < 360f)
										uParam1->f_31 = uParam1->f_31 + 360f;
								
									if (uParam1->f_31 > 360f)
										uParam1->f_31 = uParam1->f_31 - 360f;
								}
							
								unk187 = uParam1->f_30;
								unk188 = uParam1->f_31;
								unk_0xD815D4BD1AE9E85A(unk187, 1065353216);
								unk_0x64BB72494B9DF6DC(unk188);
								unk194 = { unk_0x02AF3EA0F67D2329() };
								unk197 = { unk_0xCF141FCD0940B0A3() };
								num18 = unk_0xED977E2AE2CB16EE(unk194, unk197, 1);
								num19 = SYSTEM::ROUND(num18 * 1000f);
								unk_0xE37AF9002E782BA0(0, 1, num19, 0, 0, 0);
							}
							break;
					
						default:
							break;
					}
				
					if (unk_0x5266F1D2AEF6F73A(num3))
					{
						unk_0x83E8210E2B5723F2(num3);
						num3 = -1;
					}
				}
			}
		
			SYSTEM::WAIT(0);
		}
	}

	if (!func_53(uParam1->f_22, 0f, 0f, 0f, false))
		unk_0x33B6B083EA6305A5((uParam1->f_5 + uParam1->f_19) - uParam1->f_22, uParam1->f_5 + uParam1->f_19 + uParam1->f_22, 1);

	unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), 1, 0);

	if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
		unk_0x974022927CB47E68(unk_0x4A8C381C258A124D());

	flag4 = unk_0xE976C85F4B1CF1A2();
	flag5 = 0;

	if (uParam1->f_32)
	{
		unk_0x5FD79E92E62966FB();
	
		if (!func_16(&(uParam1->f_34), true, true, true, false, true, 0))
			flag5 = 1;
	}

	if (flag4 || flag5)
	{
		while (flag4 || flag5 && !unk_0x3555462DB47B7AB1())
		{
			flag4;
			flag5;
			num20 = 2;
			func_15(1, 26, &num20);
			func_15(1, 79, &num20);
			func_15(1, 1, &num20);
			func_15(1, 2, &num20);
			func_15(0, 22, &num20);
			func_15(0, 36, &num20);
			func_15(0, 142, &num20);
			func_15(0, 141, &num20);
			func_15(0, 140, &num20);
			func_15(0, 263, &num20);
			func_15(0, 264, &num20);
			SYSTEM::WAIT(0);
			flag4 = unk_0xE976C85F4B1CF1A2();
			flag5 = false;
		
			if (uParam1->f_32)
			{
				unk_0x5FD79E92E62966FB();
			
				if (!func_16(&(uParam1->f_34), true, true, true, false, true, 0))
					flag5 = true;
			}
		}
	}

	if (!unk_0xD6F9DEE4765092A9(uParam1->f_16))
		unk_0x268BE77F77533D03(uParam1->f_16);

	unk_0x268BE77F77533D03(*uParam1);
	unk_0x85E6A1E36B5E2E4D(unk2, 0);
	func_13(&(uParam1->f_34));

	if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
	{
		unk_0x0FB8E752BCC547A9(unk_0x4A8C381C258A124D(), 77, unk);
		unk_0x935364B4448CD584(unk_0x4A8C381C258A124D(), 0);
	}

	sParam0 = sParam0;
	return;
}

void func_13(var uParam0) // Position - 0x11F9
{
	func_14(uParam0);
	*uParam0 = 0;
	uParam0->f_9 = { 0f, 0f, 0f };
	return;
}

void func_14(var uParam0) // Position - 0x1214
{
	if (unk_0x78411E34CF90EA8C(uParam0->f_1))
		unk_0x85E6A1E36B5E2E4D(uParam0->f_1, 0);

	if (unk_0x78411E34CF90EA8C(uParam0->f_2))
		unk_0x85E6A1E36B5E2E4D(uParam0->f_2, 0);

	if (unk_0x78411E34CF90EA8C(uParam0->f_3))
		unk_0x85E6A1E36B5E2E4D(uParam0->f_3, 0);

	if (unk_0x78411E34CF90EA8C(uParam0->f_4))
		unk_0x85E6A1E36B5E2E4D(uParam0->f_4, 0);

	return;
}

void func_15(int iParam0, int iParam1, var uParam2) // Position - 0x126C
{
	unk_0x66EFB3D6110055C4(iParam0, iParam1, 1);
	*uParam2 = *uParam2 + 1;
	return;
}

BOOL func_16(var uParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, int iParam6) // Position - 0x1285
{
	var unk;
	var unk4;
	var unk7;
	float value;
	float value2;
	var unk14;
	var unk17;
	var unk20;

	switch (*uParam0)
	{
		case 0:
			func_17();
		
			if (!unk_0x1C2F771CDC87A3A5(uParam0->f_5, 0))
			{
				func_14(uParam0);
				unk = { unk_0x02AF3EA0F67D2329() };
			
				if (bParam1)
					unk = { unk + (unk_0xE5741C6B6539231F(uParam0->f_5) * F2V(unk_0x0B852B0BF94A8DC1())) };
			
				unk4 = { unk_0xAD8278DAEC2CC059(uParam0->f_5, unk) };
				unk7 = { unk_0x958849BB56EC0F07(2) };
				value = { unk7 + uParam0->f_9 };
				value2 = { value - unk_0x88124E0D60FB8D11(uParam0->f_5, 2) };
				unk14 = { -SYSTEM::SIN(value.f_2) * SYSTEM::COS(value), SYSTEM::COS(value.f_2) * SYSTEM::COS(value), SYSTEM::SIN(value) };
				unk17 = { -SYSTEM::SIN(value2.f_2) * SYSTEM::COS(value2), SYSTEM::COS(value2.f_2) * SYSTEM::COS(value2), SYSTEM::SIN(value2) };
				unk20 = unk_0xB99978989A0F4E57();
			
				if (uParam0->f_17 > 0 || iParam6 != 0)
					uParam0->f_3 = unk_0xBB209150C6081BBE(joaat("TIMED_SPLINE_CAMERA"), 0);
			
				uParam0->f_1 = unk_0xBB209150C6081BBE(joaat("DEFAULT_SCRIPTED_CAMERA"), 1);
			
				if (bParam1)
					unk_0x03F10D56CCA2C055(uParam0->f_1, uParam0->f_5, unk4, 1);
				else
					unk_0x1761457F86AD0EE2(uParam0->f_1, unk);
			
				unk_0x5E5CEC33463AD803(uParam0->f_1, unk7, 2);
				unk_0x58BDA5D9262F5D30(uParam0->f_1, unk20);
				uParam0->f_2 = unk_0xBB209150C6081BBE(joaat("DEFAULT_SCRIPTED_CAMERA"), 1);
			
				if (bParam1 && !bParam4)
					unk_0x03F10D56CCA2C055(uParam0->f_2, uParam0->f_5, unk4 + (unk17 * { uParam0->f_12, uParam0->f_12, uParam0->f_12 }), 1);
				else
					unk_0x1761457F86AD0EE2(uParam0->f_2, unk + (unk14 * { uParam0->f_12, uParam0->f_12, uParam0->f_12 }));
			
				unk_0x5E5CEC33463AD803(uParam0->f_2, unk7, 2);
				unk_0x58BDA5D9262F5D30(uParam0->f_2, unk20);
			
				if (uParam0->f_17 > 0 && iParam6 == 0)
				{
					uParam0->f_4 = unk_0xBB209150C6081BBE(joaat("DEFAULT_SCRIPTED_CAMERA"), 1);
				
					if (bParam1 && !bParam4)
						unk_0x03F10D56CCA2C055(uParam0->f_4, uParam0->f_5, unk4 + (unk17 * { uParam0->f_12, uParam0->f_12, uParam0->f_12 } * { uParam0->f_13, uParam0->f_13, uParam0->f_13 }), 1);
					else
						unk_0x1761457F86AD0EE2(uParam0->f_4, unk + (unk14 * { uParam0->f_12, uParam0->f_12, uParam0->f_12 } * { uParam0->f_13, uParam0->f_13, uParam0->f_13 }));
				
					unk_0x5E5CEC33463AD803(uParam0->f_4, unk7, 2);
					unk_0x58BDA5D9262F5D30(uParam0->f_4, unk20);
				}
			
				if (uParam0->f_17 > 0 || iParam6 != 0)
				{
					unk_0xF5317F0839442D94(uParam0->f_3, uParam0->f_1, 0, 2);
				
					if (iParam6 == 0)
						unk_0xF5317F0839442D94(uParam0->f_3, uParam0->f_4, uParam0->f_17, 2);
				
					unk_0xF5317F0839442D94(uParam0->f_3, uParam0->f_2, uParam0->f_14 - uParam0->f_17, 2);
					unk_0x859FFC7F5DEC29DE(uParam0->f_3, iParam6);
					unk_0x4CBC5D1BC117616B(uParam0->f_3, 1);
				}
				else
				{
					unk_0xB56F35D8A770F80F(uParam0->f_2, uParam0->f_1, uParam0->f_14, 2, 2);
				}
			
				unk_0xE37AF9002E782BA0(1, 0, 3000, 1, 0, 0);
				uParam0->f_7 = unk_0x1DD05E817C89C737();
				uParam0->f_8 = 0;
				*uParam0 = 1;
			}
			else
			{
				return true;
			}
			break;
	
		case 1:
			func_17();
		
			if (bParam3)
			{
				if (!uParam0->f_8)
				{
					if (unk_0x1DD05E817C89C737() >= uParam0->f_7 + uParam0->f_16)
					{
						if (bParam5)
						{
							switch (uParam0->f_6)
							{
								case 1:
									unk_0xDCAFFD08A08087EB("CamPushInFranklin", 0, 0);
									break;
							
								case 0:
									unk_0xDCAFFD08A08087EB("CamPushInMichael", 0, 0);
									break;
							
								case 2:
									unk_0xDCAFFD08A08087EB("CamPushInTrevor", 0, 0);
									break;
							}
						}
						else
						{
							unk_0xDCAFFD08A08087EB("CamPushInNeutral", 0, 0);
						}
					
						unk_0xBF3D28CA44F3BE2D(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
						uParam0->f_8 = 1;
					}
				}
			}
		
			if (unk_0x1DD05E817C89C737() >= uParam0->f_7 + uParam0->f_15)
			{
				if (bParam2)
				{
					func_14(uParam0);
					unk_0xE37AF9002E782BA0(0, 0, 3000, 1, 0, 0);
				}
			
				return true;
			}
			break;
	
		case 2:
			return true;
	}

	return false;
}

void func_17() // Position - 0x1628
{
	unk_0xC0964AABD3C0CC7E();
	func_18();
	return;
}

void func_18() // Position - 0x1638
{
	Global_23131.f_134 = 1;
	return;
}

void func_19(var uParam0, var uParam1, var uParam2, var uParam3) // Position - 0x1646
{
	uParam0->f_9 = { uParam1 };
	return;
}

void func_20(var uParam0, var uParam1, eCharacter echParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8) // Position - 0x1658
{
	uParam0->f_5 = uParam1;
	uParam0->f_6 = echParam2;
	uParam0->f_12 = fParam3;
	uParam0->f_14 = iParam4;
	uParam0->f_15 = iParam5;
	uParam0->f_16 = iParam6;
	uParam0->f_17 = iParam7;
	uParam0->f_13 = iParam8;
	return;
}

float func_21(float fParam0, float fParam1, float fParam2) // Position - 0x1690
{
	if (fParam0 > fParam2)
		return fParam2;
	else if (fParam0 < fParam1)
		return fParam1;

	return fParam0;
}

BOOL _CONVERSATION_ADD_LINE(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x16B7
{
	func_38(uParam0, 145, sParam1, iParam4, iParam5, iParam6);

	if (iParam3 > 7)
		if (iParam3 < 12)
			iParam3 = 7;

	Global_21732 = 0;
	Global_21734 = 0;
	Global_21739 = 0;
	Global_22716 = 0;
	Global_22718 = 0;
	Global_22722 = 0;
	Global_2883585 = 0;
	return func_23(sParam2, iParam3, false);
}

BOOL func_23(char* sParam0, int iParam1, BOOL bParam2) // Position - 0x1705
{
	Global_21726 = 0;

	if (Global_21725 == 0 || Global_21727 == 2)
	{
		if (Global_21725 != 0)
		{
			if (iParam1 > Global_21727)
			{
				if (Global_21732 == 0)
				{
					unk_0x0F15249D24BC5ADA(0);
					Global_20383.f_1 = 3;
					Global_21725 = 0;
					Global_21726 = 1;
					Global_21778 = 0;
					Global_21721 = 0;
					Global_21722 = 0;
					Global_21736 = 0;
					Global_21735 = false;
					Global_20382 = 0;
				}
				else
				{
					func_37();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
	
		if (unk_0x1F9EB85925C3ECD7())
			return 0;
	
		if (func_36(8, -1))
			return 0;
	
		Global_21801 = { Global_21795 };
		func_35();
		Global_21014 = { Global_21179 };
		Global_21731 = Global_21732;
		Global_21738 = Global_21739;
		Global_2883586 = Global_2883585;
		Global_21740 = { Global_21756 };
		Global_21733 = Global_21734;
		Global_22715 = Global_22716;
		Global_22723 = { Global_22729 };
		Global_22717 = Global_22718;
		Global_22719 = Global_22720;
		Global_22721 = Global_22722;
		Global_21344.f_370 = Global_22714;
		Global_21344.f_368 = Global_22712;
		Global_21344.f_369 = Global_22713;
		Global_21721 = Global_21722;
	
		if (Global_21731)
		{
			unk_0x8744D2E3FC95740E(&Global_8253, 20);
			unk_0x8744D2E3FC95740E(&Global_8254, 17);
			unk_0x8744D2E3FC95740E(&Global_8255, 0);
		
			if (bParam2)
			{
				_UPDATE_CURRENT_PLAYER_CHARACTER();
			
				if (Global_9058[Global_20383 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
			
				if (Global_20383.f_1 > 3)
					return 0;
			}
		
			if (Global_20349 == 1)
				return 0;
		
			if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
			{
				if (unk_0xFFAC548682B3D56E(unk_0x4A8C381C258A124D()))
					return 0;
			
				if (func_32())
					return 0;
			
				if (unk_0x6F21822F60DC0945(unk_0x4A8C381C258A124D()))
					return 0;
			
				if (unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D()))
					return 0;
			
				if (unk_0x333554781C7582D7(unk_0x4A8C381C258A124D()))
					return 0;
			
				if (unk_0x08DAD6B08438A17C(unk_0x4A8C381C258A124D(), joaat("GADGET_PARACHUTE")))
					return 0;
			
				if (!Global_78558)
				{
					if (unk_0x69799E0840A34AFB(unk_0x4A8C381C258A124D()))
						return 0;
				
					if (unk_0xB96BD3A32937D44E(unk_0x259BE71D8A81D4FA()))
						return 0;
				
					if (unk_0x74CD4FE549433E92(unk_0x4A8C381C258A124D()))
						return 0;
				
					if (unk_0xFD2D7766E325A3B2(unk_0x259BE71D8A81D4FA(), 0))
						return 0;
				}
			}
		
			if (func_31())
			{
				return 0;
			}
			else
			{
				switch (Global_20383.f_1)
				{
					case 7:
						return 0;
				
					case 8:
						return 0;
				
					case 9:
						break;
				
					case 10:
						break;
				
					default:
						break;
				}
			
				if (IS_BIT_SET(Global_8253, 9))
					return 0;
			}
		
			func_30();
			Global_21735 = bParam2;
		}
	
		Global_21727 = iParam1;
		TEXT_LABEL_ASSIGN_STRING(&Global_21344, sParam0, 24);
		Global_20591 = 0;
		func_29();
		func_24();
		return 1;
	}

	if (Global_21725 == 5)
		return 0;

	if (iParam1 < Global_21727 || iParam1 == Global_21727)
		return 0;

	if (iParam1 == 2)
	{
	}
	else
	{
		func_37();
	}

	return 0;
}

void func_24() // Position - 0x19D3
{
	if (!func_25())
		return;

	if (Global_21731)
	{
		TEXT_LABEL_COPY(&(Global_1977511.f_1), { Global_21344 }, 4);
		Global_1977511 = Global_7568;
		Global_1977511.f_6 = Global_21735;
	}

	return;
}

BOOL func_25() // Position - 0x1A0A
{
	if (!Global_262145.f_28878)
		return false;

	if (!Global_78558)
		return false;

	if (unk_0x259BE71D8A81D4FA() == _INVALID_PLAYER_INDEX())
		return false;

	if (func_26(unk_0x259BE71D8A81D4FA()))
		return false;

	if (IS_BIT_SET(Global_1894573[unk_0x259BE71D8A81D4FA() /*608*/].f_1, 7))
		return false;

	if (unk_0x834C960822A4683F())
		return false;

	return true;
}

BOOL func_26(int iParam0) // Position - 0x1A6D
{
	return func_27(iParam0, 20);
}

BOOL func_27(int iParam0, int iParam1) // Position - 0x1A7D
{
	return IS_BIT_SET(Global_1894573[iParam0 /*608*/].f_10.f_4, iParam1);
}

Player _INVALID_PLAYER_INDEX() // Position - 0x1A95
{
	return -1;
}

void func_29() // Position - 0x1A9E
{
	int i;

	for (i = 0; i <= 69; i = i + 1)
	{
		TEXT_LABEL_ASSIGN_STRING(&Global_20593[i /*6*/], "", 24);
	}

	unk_0x0F15249D24BC5ADA(0);
	Global_21725 = 1;
	return;
}

void func_30() // Position - 0x1ACE
{
	Global_21778 = Global_21777;
	Global_21772 = Global_21773;
	Global_21819 = { Global_21807 };
	Global_21825 = { Global_21813 };
	Global_21780 = Global_21779;
	Global_21849 = { Global_21831 };
	Global_21855 = { Global_21837 };
	Global_21861 = { Global_21843 };
	Global_21867 = { Global_21873 };
	Global_7568 = Global_7569;
	Global_7570 = Global_7571;
	Global_21736 = Global_21737;
	Global_21738 = Global_21739;
	Global_21740 = { Global_21756 };
	Global_21729 = Global_21730;
	Global_22741 = 0;
	Global_21774 = 0;
	Global_21775 = 0;
	unk_0x8744D2E3FC95740E(&Global_8254, 16);
	return;
}

BOOL func_31() // Position - 0x1B63
{
	if (Global_20383.f_1 == 1 || Global_20383.f_1 == 0)
		return true;

	return false;
}

BOOL func_32() // Position - 0x1B8A
{
	int num;
	int num2;

	if (Global_78558)
	{
		num = 0;
		unk_0x23B29877D0BE9547(unk_0x4A8C381C258A124D(), &num2, 1);
	
		if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
			if (num2 == joaat("WEAPON_SNIPERRIFLE") || num2 == joaat("WEAPON_HEAVYSNIPER") || num2 == joaat("WEAPON_REMOTESNIPER"))
				num = 1;
	
		if (unk_0x196704C916969409() && num == 1)
			return true;
		else
			return false;
	}

	if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
		if (unk_0x49F8918E2DC5FFBC(unk_0x4A8C381C258A124D(), 78, 1))
			return true;
		else
			return false;

	return true;
}

void _UPDATE_CURRENT_PLAYER_CHARACTER() // Position - 0x1C23
{
	if (func_34(14))
	{
		if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
			if (unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()) == Global_113648.f_28052[0 /*29*/])
				Global_20383 = CHAR_MICHAEL;
			else if (unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()) == Global_113648.f_28052[1 /*29*/])
				Global_20383 = CHAR_FRANKLIN;
			else if (unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()) == Global_113648.f_28052[2 /*29*/])
				Global_20383 = CHAR_TREVOR;
			else
				Global_20383 = CHAR_MICHAEL;
	}
	else
	{
		Global_20383 = _GET_CURRENT_PLAYER_CHARACTER();
	
		if (Global_20383 == _CHAR_NULL)
			Global_20383 = CHAR_MULTIPLAYER;
	
		if (Global_78558)
			Global_20383 = CHAR_MULTIPLAYER;
	
		if (Global_20383 > CHAR_MULTIPLAYER)
			Global_20383 = CHAR_MULTIPLAYER;
	}

	return;
}

BOOL func_34(int iParam0) // Position - 0x1CC5
{
	return Global_43257 == iParam0;
}

void func_35() // Position - 0x1CD3
{
	int i;

	for (i = 0; i <= 15; i = i + 1)
	{
		Global_21014[i /*10*/] = 0;
		TEXT_LABEL_ASSIGN_STRING(&(Global_21014[i /*10*/].f_1), "", 24);
		Global_21014[i /*10*/].f_7 = 0;
		Global_21014[i /*10*/].f_8 = 0;
	}

	Global_21014.f_161 = -99;
	Global_21014.f_162 = { 0f, 0f, 0f };
	return;
}

BOOL func_36(int iParam0, int iParam1) // Position - 0x1D29
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
				return Global_1653913.f_203[iParam1];
			break;
	}

	return IS_BIT_SET(Global_1653913.f_1048, iParam0);
}

void func_37() // Position - 0x1D61
{
	unk_0xC78B293A5F4EACF9();
	Global_22736 = 0;

	if (unk_0xE87F28FD4128D063() || Global_20383.f_1 == 9 || Global_20382 == 1)
	{
		unk_0x0F15249D24BC5ADA(0);
		Global_21725 = 6;
		Global_20383.f_1 = 3;
		return;
	}

	if (unk_0x1F9EB85925C3ECD7())
	{
		unk_0x0F15249D24BC5ADA(1);
		Global_21725 = 6;
		return;
	}

	return;
}

void func_38(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5) // Position - 0x1DB8
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

void func_39(int iParam0) // Position - 0x1E0E
{
	Global_43808 = unk_0x1DD05E817C89C737() + iParam0;
	return;
}

void func_40(int iParam0) // Position - 0x1E20
{
	if (func_45())
		return;

	if (!(Global_20383.f_1 == 1))
	{
		if (func_44(0))
			func_41(iParam0);
	
		unk_0x0B0C9A0F9AAEB7F0(&Global_8254, 2);
	}

	return;
}

void func_41(int iParam0) // Position - 0x1E53
{
	if (func_45())
		return;

	if (Global_20584)
		if (func_43())
			func_42(true, true);
		else
			func_42(false, false);

	if (Global_20383.f_1 == 10 || Global_20383.f_1 == 9)
		unk_0x0B0C9A0F9AAEB7F0(&Global_8254, 16);

	if (unk_0xE87F28FD4128D063())
		unk_0x0F15249D24BC5ADA(0);

	Global_21725 = 5;

	if (iParam0 == 1)
		unk_0x0B0C9A0F9AAEB7F0(&Global_8253, 30);
	else
		unk_0x8744D2E3FC95740E(&Global_8253, 30);

	if (!func_31())
		Global_20383.f_1 = 3;

	return;
}

void func_42(BOOL bParam0, BOOL bParam1) // Position - 0x1EDD
{
	if (bParam0)
	{
		if (func_44(0))
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

BOOL func_43() // Position - 0x1F51
{
	return IS_BIT_SET(Global_1962996, 5);
}

BOOL func_44(int iParam0) // Position - 0x1F5F
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

BOOL func_45() // Position - 0x1FB6
{
	return IS_BIT_SET(Global_1962996, 19);
}

void _CONVERSATION_INITIALIZE_ACTOR(var uParam0, int iParam1, var uParam2, char* sParam3, int iParam4, int iParam5) // Position - 0x1FC5
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

void _DISPLAY_HELP_TEXT(char* text, int iParam1) // Position - 0x2060
{
	unk_0xAC98CA65AD9A3215(text);
	unk_0x5E01B6B1F460FE3F(0, 0, 1, iParam1);
	return;
}

void func_48(var uParam0, int iParam1) // Position - 0x2077
{
	if (func_49(iParam1, 1))
		unk_0x5909C9E03CEF097D(uParam0, "HOSPITAL_0", 0f, 1f);

	if (func_49(iParam1, 2))
		unk_0x5909C9E03CEF097D(uParam0, "HOSPITAL_1", 0f, 1f);

	if (func_49(iParam1, 4))
		unk_0x5909C9E03CEF097D(uParam0, "HOSPITAL_2", 0f, 1f);

	if (func_49(iParam1, 8))
		unk_0x5909C9E03CEF097D(uParam0, "HOSPITAL_3", 0f, 1f);

	if (func_49(iParam1, 16))
		unk_0x5909C9E03CEF097D(uParam0, "HOSPITAL_4", 0f, 1f);

	if (func_49(iParam1, 32))
		unk_0x5909C9E03CEF097D(uParam0, "HOSPITAL_5", 0f, 1f);

	if (func_49(iParam1, 64))
		unk_0x5909C9E03CEF097D(uParam0, "HOSPITAL_6", 0f, 1f);

	if (func_49(iParam1, 128))
		unk_0x5909C9E03CEF097D(uParam0, "HOSPITAL_7", 0f, 1f);

	if (func_49(iParam1, 256))
		unk_0x5909C9E03CEF097D(uParam0, "HOSPITAL_8", 0f, 1f);

	if (func_49(iParam1, 512))
		unk_0x5909C9E03CEF097D(uParam0, "HOSPITAL_9", 0f, 1f);

	func_49(iParam1, 0);
	return;
}

BOOL func_49(int iParam0, int iParam1) // Position - 0x216E
{
	return iParam0 && iParam1 != false;
}

BOOL func_50() // Position - 0x217D
{
	if (Global_100681 == 13 || Global_100681 == 10 || Global_100681 == 11 || Global_100681 == 12)
		return false;

	return true;
}

void func_51() // Position - 0x21BB
{
	int i;

	for (i = 0; i < 8; i = i + 1)
	{
		if (Global_97614[i /*17*/] && !Global_97614[i /*17*/].f_1)
			if (Global_97614[i /*17*/].f_3 == 0)
				if (Global_97614[i /*17*/].f_5 != 88 && Global_97614[i /*17*/].f_5 != 89 && Global_97614[i /*17*/].f_5 != 92)
					func_52(Global_97614[i /*17*/].f_5, true);
	}

	return;
}

void func_52(int iParam0, BOOL bParam1) // Position - 0x2242
{
	if (bParam1)
		if (iParam0 != 88 && iParam0 != 89 && iParam0 != 92)
			Global_94666[iParam0 /*2*/] = 1;
	else
		Global_94666[iParam0 /*2*/] = 0;

	return;
}

BOOL func_53(float fParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5, BOOL bParam6) // Position - 0x2280
{
	if (bParam6)
		return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1;

	return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1 && fParam0.f_2 == fParam3.f_2;
}

void func_54() // Position - 0x22C7
{
	func_55();
	func_73(true);
	return;
}

void func_55() // Position - 0x22D8
{
	int i;
	int num;
	int j;

	i = 0;
	num = 0;

	for (i = 0; i < 16; i = i + 1)
	{
		num = Global_44232[i /*5*/];
	
		if (!(num == -1))
			func_171(1, num, 1);
	}

	j = 0;

	for (j = 0; j < 5; j = j + 1)
	{
		if (Global_44206[j /*5*/] == 0)
			func_56(j);
	}

	return;
}

void func_56(int iParam0) // Position - 0x2338
{
	if (iParam0 < 0 || iParam0 >= 5)
		return;

	if (!(Global_44206[iParam0 /*5*/].f_1 == 0))
		if (Global_44206[iParam0 /*5*/].f_1 == unk_0x4A8C381C258A124D())
			Global_44444 = 0;

	Global_44206[iParam0 /*5*/] = 13;
	Global_44206[iParam0 /*5*/].f_1 = 0;
	Global_44206[iParam0 /*5*/].f_2 = 0;
	Global_44206[iParam0 /*5*/].f_3 = 0;
	Global_44206[iParam0 /*5*/].f_4 = 0;
	Global_44204 = Global_44204 - 1;

	if (Global_44204 < 0)
		Global_44204 = 0;

	return;
}

int func_57(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, int iParam5) // Position - 0x23BB
{
	if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
	{
		func_61(0);
		unk_0x2094BC4B6731BA68(uParam0, 5f, 1, 0, 0, 0);
	
		if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
		{
			if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
			{
				unk_0xB2BD5837A8D3CEDA(unk_0x4A8C381C258A124D(), uParam0, 1, 0, 0, 1);
				unk_0x5C96CEA06531AB03(unk_0x4A8C381C258A124D(), uParam3);
				unk_0xD815D4BD1AE9E85A(0f, 1065353216);
				unk_0x64BB72494B9DF6DC(0f);
			}
		}
	
		unk_0x4A3280817398D754(uParam0, 4500f, 0);
		SYSTEM::WAIT(0);
		unk_0x2094BC4B6731BA68(uParam0, 5000f, 1, 0, 0, 0);
		unk_0xBAAB54D57B40765E(uParam0, 5000f, 0);
		unk_0xA69DCC67B2B61AD1(uParam0, 5000f);
		unk_0x5926A824AF54BCC3(uParam0, 5000f);
		func_60();
		func_59();
		SYSTEM::SETTIMERA(0);
		func_61(1);
	
		if (!unk_0x787F8EE1F6FBDC6D())
		{
			while (!unk_0x4A3280817398D754(uParam0, 4500f, 0))
			{
				SYSTEM::WAIT(0);
			
				if (SYSTEM::TIMERA() > 2000)
				{
					unk_0x98E393364463951A(0);
					return 0;
				}
			}
		}
	
		SYSTEM::SETTIMERA(0);
	
		while (!unk_0x9E2D35FA908F57B4())
		{
			SYSTEM::WAIT(0);
		
			if (SYSTEM::TIMERA() > 20000)
			{
				unk_0x98E393364463951A(0);
			
				if (unk_0x787F8EE1F6FBDC6D())
					unk_0x6981C3213B841071();
			
				return 0;
			}
		}
	
		if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
		{
			if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
			{
				if (unk_0x787F8EE1F6FBDC6D())
					unk_0x6981C3213B841071();
			
				unk_0x98E393364463951A(0);
				SYSTEM::SETTIMERA(0);
				unk_0x337117D37E592B05();
			
				if (iParam5 == 1)
					unk_0x6874AA782954505E();
				else
					SYSTEM::SETTIMERA(5000);
			
				unk_0x1BBEB35757ED1961();
			}
		}
	
		while (!unk_0xEA02634993F717CE() && !func_58() && SYSTEM::TIMERA() < 1500)
		{
			SYSTEM::WAIT(0);
		}
	
		if (SYSTEM::TIMERA() > 1500)
		{
			if (iParam5 == 1)
			{
			}
		}
	
		if (iParam4 == 1)
		{
			unk_0xB1EAADCB692D69CE(uParam0, &(uParam0.f_2), 0, 0);
			unk_0x2094BC4B6731BA68(uParam0, 5f, 1, 0, 0, 0);
		
			if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
			{
				if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
				{
					unk_0xB2BD5837A8D3CEDA(unk_0x4A8C381C258A124D(), uParam0, 1, 0, 0, 1);
					unk_0x5C96CEA06531AB03(unk_0x4A8C381C258A124D(), uParam3);
				}
			}
		}
	
		unk_0xD815D4BD1AE9E85A(0f, 1065353216);
		unk_0x64BB72494B9DF6DC(0f);
		func_61(0);
		return 1;
	}

	func_61(0);
	return 0;
}

BOOL func_58() // Position - 0x25DA
{
	return !Global_77348.f_553;
}

void func_59() // Position - 0x25EA
{
	Global_77348.f_553 = 1;
	Global_77348.f_554 = 0;
	return;
}

void func_60() // Position - 0x2602
{
	int i;

	for (i = 0; i < 68; i = i + 1)
	{
		Global_77348[i] = 0;
	}

	return;
}

void func_61(int iParam0) // Position - 0x2626
{
	int num;

	num = 0;

	if (num == 0)
	{
		if (iParam0 == 1)
		{
			if (!IS_BIT_SET(Global_100681.f_20, 2))
			{
				unk_0x98E393364463951A(1);
				unk_0x0B0C9A0F9AAEB7F0(&(Global_100681.f_20), 2);
			}
		}
		else if (IS_BIT_SET(Global_100681.f_20, 2))
		{
			unk_0x98E393364463951A(0);
			unk_0x8744D2E3FC95740E(&(Global_100681.f_20), 2);
		}
	}

	return;
}

BOOL _GET_RANDOM_BOOL() // Position - 0x2677
{
	if (IS_BIT_SET(unk_0xC5935DFB3F39785A(0, 65535), 0))
		return true;

	return false;
}

BOOL func_63(int iParam0) // Position - 0x2695
{
	return IS_BIT_SET(Global_113648.f_7231[iParam0], 0);
}

BOOL func_64(int iParam0) // Position - 0x26AA
{
	if (iParam0 == 146 || iParam0 == -1)
		return false;

	return Global_113648.f_9087.f_99.f_58[iParam0];
}

int func_65() // Position - 0x26D7
{
	if (Global_40195[11] == 1)
		return 4;

	if (!func_66(21))
		return 0;

	if (!func_64(130))
		return 1;

	if (!func_64(131))
		return 2;

	if (!func_66(22))
		return 1;

	if (!func_66(49))
		return 3;

	if (!func_66(28))
		return 1;

	return 3;
}

BOOL func_66(int iParam0) // Position - 0x2755
{
	if (iParam0 == 94 || iParam0 == -1)
		return false;

	return Global_113648.f_9087.f_330[iParam0 /*6*/];
}

eCharacter _GET_CURRENT_PLAYER_CHARACTER() // Position - 0x2781
{
	func_68();
	return Global_113648.f_2365.f_539.f_4321;
}

void func_68() // Position - 0x279A
{
	eCharacter character;

	if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
	{
		if (_GET_CHARACTER_MODEL(Global_113648.f_2365.f_539.f_4321) != unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()))
		{
			character = _GET_PLAYER_CHARACTER_FROM_PED(unk_0x4A8C381C258A124D());
		
			if (func_69(character) && !func_34(14) || Global_112599)
			{
				if (Global_113648.f_2365.f_539.f_4321 != character && func_69(Global_113648.f_2365.f_539.f_4321))
					Global_113648.f_2365.f_539.f_4322 = Global_113648.f_2365.f_539.f_4321;
			
				Global_113648.f_2365.f_539.f_4323 = character;
				Global_113648.f_2365.f_539.f_4321 = character;
				return;
			}
		}
		else
		{
			if (Global_113648.f_2365.f_539.f_4321 != _CHAR_NULL)
				Global_113648.f_2365.f_539.f_4323 = Global_113648.f_2365.f_539.f_4321;
		
			return;
		}
	}

	Global_113648.f_2365.f_539.f_4321 = 145;
	return;
}

BOOL func_69(eCharacter echParam0) // Position - 0x2897
{
	return echParam0 < CHAR_MULTIPLAYER;
}

eCharacter _GET_PLAYER_CHARACTER_FROM_PED(var uParam0) // Position - 0x28A3
{
	eCharacter i;
	int num;

	if (unk_0xFC8BFE4B41177C22(uParam0))
	{
		num = unk_0x4B423FAA24E8ABF0(uParam0);
	
		for (i = CHAR_MICHAEL; i <= CHAR_TREVOR; i = i + 1)
		{
			if (_GET_CHARACTER_MODEL(i) == num)
				return i;
		}
	}

	return _CHAR_NULL;
}

int _GET_CHARACTER_MODEL(eCharacter character) // Position - 0x28E0
{
	if (func_69(character))
		return func_72(character);
	else
		character != _CHAR_NULL;

	return 0;
}

int func_72(eCharacter echParam0) // Position - 0x2905
{
	return Global_2028[echParam0 /*29*/];
}

void func_73(BOOL bParam0) // Position - 0x2914
{
	unk_0x9B669C0440D2AB57(0f);
	unk_0xC30B691CAD767629(0f);
	unk_0xB3CAD109683148E3(0f);
	unk_0x9AFEC71EEA2F7754(1);
	unk_0xAD0E20104A60B568(0f);
	unk_0xDB37962FDFC63FD7(1);
	unk_0xC5EE3F8EC7822462(0);

	if (unk_0xBC2EE32DE886BD08("SAFEHOUSE_STONED_MICHAEL"))
		unk_0xB43467C43086A6A1("SAFEHOUSE_STONED_MICHAEL");

	if (!unk_0xD6F9DEE4765092A9(&Global_44424))
		if (unk_0xBC2EE32DE886BD08(&Global_44424))
			unk_0xB43467C43086A6A1(&Global_44424);

	if (unk_0x78411E34CF90EA8C(Global_44412))
	{
		if (unk_0xDD87838D03B64B0A(Global_44412))
		{
			unk_0x17F06E9D89A05855(Global_44412, 0f);
			unk_0x584EE85BE0BFA70E(Global_44412, 1);
		}
	}

	if (unk_0x12B42434831D668E())
		unk_0xB9AB3B8920F1AA69(0);

	if (bParam0)
		if (unk_0x8960847E5FD7B48F() != -1 || unk_0x765B41E82372AA97() != -1)
			unk_0x80F87A4A3B930613();
		else if (unk_0x3555462DB47B7AB1())
			unk_0x80F87A4A3B930613();

	Global_44419 = 0f;
	TEXT_LABEL_ASSIGN_STRING(&Global_44420, "", 16);
	TEXT_LABEL_ASSIGN_STRING(&Global_44424, "", 64);
	TEXT_LABEL_ASSIGN_STRING(&Global_44440, "", 16);
	func_74();
	return;
}

void func_74() // Position - 0x29ED
{
	Global_44411 = 0;
	Global_44412 = 0;
	Global_44413 = 0;
	Global_44414 = 30000;
	Global_44415 = 0f;
	Global_44417 = 0f;
	Global_44416 = 0f;
	Global_44418 = 1f;
	Global_44419 = 0f;
	TEXT_LABEL_ASSIGN_STRING(&Global_44420, "", 16);
	return;
}

void func_75(int iParam0) // Position - 0x2A22
{
	int num;

	switch (iParam0)
	{
		case 0:
			num = Global_262145.f_18161;
			break;
	
		case 1:
			num = Global_262145.f_18151;
			break;
	
		case 2:
			num = Global_262145.f_18162;
			break;
	
		case 3:
			num = Global_262145.f_18154;
			break;
	
		case 4:
			num = Global_262145.f_18150;
			break;
	
		case 6:
			num = 3;
			break;
	
		case 7:
			num = Global_262145.f_18165;
			break;
	
		case 8:
			num = Global_262145.f_18166;
			break;
	
		case 9:
			num = Global_262145.f_18169;
			break;
	
		case 22:
			num = Global_262145.f_18170;
			break;
	
		case 23:
			num = Global_262145.f_18163;
			break;
	
		case 25:
			num = Global_262145.f_19055;
			break;
	
		case 26:
			num = Global_262145.f_19054;
			break;
	}

	if (num != 0)
		unk_0x038FC0304403CC66(func_85(func_86()), func_84(func_86()), func_83(), func_82(), iParam0, num);

	func_81(num);
	func_76(num);
	return;
}

void func_76(int iParam0) // Position - 0x2B47
{
	int num;

	num = _MPCHAR_STAT_GET_INT(MP_STAT_MC_CONTRIBUTION_POINTS, -1, 0);
	num = num + iParam0;

	if (num < 0)
		num = 0;

	if (num > 9999)
		num = 9999;

	Global_1894573[unk_0x259BE71D8A81D4FA() /*608*/].f_10.f_468 = num;
	_MPCHAR_STAT_SET_INT(MP_STAT_MC_CONTRIBUTION_POINTS, num, -1, 1, false);
	return;
}

void _MPCHAR_STAT_SET_INT(eMPStat empsParam0, int iParam1, int iParam2, int iParam3, BOOL bParam4) // Position - 0x2B95
{
	int num;

	bParam4;
	num = Global_2805029[empsParam0 /*3*/][func_78(iParam2)];

	if (num != 0)
		unk_0x1164A75E490C27B6(num, iParam1, iParam3);

	return;
}

int func_78(int iParam0) // Position - 0x2BC5
{
	int num;
	int num2;

	num = iParam0;

	if (num == -1)
	{
		num2 = func_79();
	
		if (num2 > -1)
		{
			Global_2804741 = 0;
			num = num2;
		}
		else
		{
			num = 0;
			Global_2804741 = 1;
		}
	}

	return num;
}

int func_79() // Position - 0x2BF9
{
	return Global_1574918;
}

int _MPCHAR_STAT_GET_INT(eMPStat empsParam0, int iParam1, int iParam2) // Position - 0x2C05
{
	var unk;
	int num;

	if (empsParam0 != MP_STAT_INVALID)
	{
		iParam2 == 0;
		unk = Global_2805029[empsParam0 /*3*/][func_78(iParam1)];
	
		if (unk_0xDF7F16323520B858(unk, &num, -1))
			return num;
	}

	return 0;
}

void func_81(int iParam0) // Position - 0x2C42
{
	int num;

	num = unk_0x259BE71D8A81D4FA();
	Global_1894573[num /*608*/].f_10.f_467 = Global_1894573[num /*608*/].f_10.f_467 + iParam0;

	if (Global_1894573[num /*608*/].f_10.f_467 < -9999)
		Global_1894573[num /*608*/].f_10.f_467 = 9999;
	else if (Global_1894573[num /*608*/].f_10.f_467 > 9999)
		Global_1894573[num /*608*/].f_10.f_467 = 9999;

	return;
}

int func_82() // Position - 0x2CBC
{
	if (Global_1947733.f_3 != 0)
		return Global_1947733.f_3;

	return -1;
}

int func_83() // Position - 0x2CD8
{
	if (Global_1947733.f_2 != 0)
		return Global_1947733.f_2;

	return -1;
}

int func_84(Player plParam0) // Position - 0x2CF4
{
	if (plParam0 == _INVALID_PLAYER_INDEX())
		return -1;

	return Global_1894573[plParam0 /*608*/].f_10.f_8[1];
}

int func_85(Player plParam0) // Position - 0x2D19
{
	if (plParam0 == _INVALID_PLAYER_INDEX())
		return -1;

	return Global_1894573[plParam0 /*608*/].f_10.f_8[0];
}

Player func_86() // Position - 0x2D3E
{
	return Global_1894573[unk_0x259BE71D8A81D4FA() /*608*/].f_10;
}

BOOL func_87(BOOL bParam0) // Position - 0x2D53
{
	return func_88(unk_0x259BE71D8A81D4FA(), bParam0);
}

BOOL func_88(Player plParam0, BOOL bParam1) // Position - 0x2D65
{
	return func_89(plParam0, bParam1, 1);
}

int func_89(Player plParam0, BOOL bParam1, int iParam2) // Position - 0x2D76
{
	Player player;

	if (plParam0 == _INVALID_PLAYER_INDEX())
		return 0;

	if (!bParam1)
		if (func_90(plParam0, iParam2))
			return 0;

	player = Global_1894573[plParam0 /*608*/].f_10;

	if (player != _INVALID_PLAYER_INDEX() && Global_1894573[player /*608*/].f_10.f_428 == iParam2)
		return 1;

	return 0;
}

BOOL func_90(Player plParam0, int iParam1) // Position - 0x2DD2
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		if (Global_1894573[plParam0 /*608*/].f_10 != _INVALID_PLAYER_INDEX())
			if (Global_1894573[plParam0 /*608*/].f_10 == plParam0 && Global_1894573[plParam0 /*608*/].f_10.f_428 == iParam1)
				return true;

	return false;
}

void _SET_PLAYER_CONTROL_EX(Player plParam0, BOOL bParam1, eSetPlayerControlFlags espcfParam2, int iParam3) // Position - 0x2E21
{
	eSetPlayerControlFlags controlBs;
	BOOL flag;
	BOOL flag2;
	BOOL flag3;
	BOOL flag4;
	BOOL flag5;
	BOOL flag6;
	BOOL flag7;
	BOOL flag8;
	BOOL flag9;
	BOOL flag10;
	BOOL flag11;
	BOOL flag12;
	BOOL flag13;
	BOOL flag14;
	BOOL flag15;
	BOOL flag16;
	BOOL flag17;
	BOOL flag18;
	BOOL flag19;
	BOOL flag20;
	BOOL flag21;
	BOOL flag22;
	BOOL flag23;
	BOOL flag24;
	BOOL flag25;
	BOOL flag26;
	var unk;
	int num;

	if (bParam1)
		if (unk_0x828F3FAE99DA791A())
			unk_0x6FF322107B12B749(0);

	if (func_104())
		if (bParam1)
			return;
		else
			iParam3 = 1;

	if (!unk_0x76CD105BCAC6EB9F())
	{
		controlBs = espcfParam2;
		unk_0x4686BC3BFDBB5348(plParam0, bParam1, controlBs);
	}
	else
	{
		flag = true;
		flag2 = espcfParam2 & SPC_AMBIENT_SCRIPT != 0;
		flag3 = espcfParam2 & SPC_CLEAR_TASKS != 0;
		flag4 = espcfParam2 & SPC_REMOVE_FIRES != 0;
		flag5 = espcfParam2 & SPC_REMOVE_EXPLOSIONS != 0;
		flag6 = espcfParam2 & SPC_REMOVE_PROJECTILES != 0;
		flag7 = espcfParam2 & SPC_DEACTIVATE_GADGETS != 0;
		flag8 = espcfParam2 & SPC_REENABLE_CONTROL_ON_DEATH != 0;
		flag9 = espcfParam2 & SPC_LEAVE_CAMERA_CONTROL_ON != 0;
		flag10 = espcfParam2 & SPC_ALLOW_PLAYER_DAMAGE != 0;
		flag11 = espcfParam2 & SPC_DONT_STOP_OTHER_CARS_AROUND_PLAYER != 0;
		flag12 = espcfParam2 & SPC_PREVENT_EVERYBODY_BACKOFF != 0;
		flag13 = espcfParam2 & SPC_ALLOW_PAD_SHAKE != 0;
		flag14 = espcfParam2 & 8192 != 0;
		flag15 = espcfParam2 & 16384 != 0;
		flag16 = espcfParam2 & 32768 != 0;
		flag17 = espcfParam2 & 65536 != 0;
		flag18 = espcfParam2 & 131072 != 0;
		flag19 = espcfParam2 & 262144 != 0;
		flag20 = espcfParam2 & 524288 != 0;
		flag21 = espcfParam2 & 1048576 != 0;
		flag22 = espcfParam2 & 2097152 != 0;
		flag23 = espcfParam2 & 4194304 != 0;
		flag24 = espcfParam2 & 8388608 != 0;
		flag25 = espcfParam2 & 16777216 != 0;
	
		if (espcfParam2 & 33554432 != 0 || unk_0x834C960822A4683F())
			flag = false;
	
		if (!func_102())
		{
			flag26 = false;
		
			if (bParam1 == true)
				flag26 = true;
		
			if (flag16 == false && !flag21)
				flag26 = true;
		
			if (flag10 == true)
				flag26 = true;
		
			if (flag26)
				return;
		}
	
		flag18;
	
		if (unk_0x762604C40829DB72(plParam0) && unk_0x75EAB09F5E974116(plParam0) || iParam3 == 1)
		{
			if (iParam3 && unk_0x1C2F771CDC87A3A5(unk_0x56E414973C2A8C0E(plParam0), 0))
				return;
		
			unk = unk_0x56E414973C2A8C0E(plParam0);
		
			if (!flag20)
			{
				if (flag19 && bParam1 == false && unk_0x76CD105BCAC6EB9F())
					unk_0x6E2FA5434737D22F(1);
				else if (flag14 || !_NETWORK_IS_PLAYER_IN_SCTV(unk_0x259BE71D8A81D4FA(), 0) && !func_99())
					unk_0x4285E11B28063EE0(unk, !flag14, 0);
			
				if (!flag14)
				{
					if (unk_0x76CD105BCAC6EB9F() && !flag19)
						unk_0x6E2FA5434737D22F(0);
				
					Global_2657589[plParam0 /*466*/].f_254 = 0;
				}
			}
		
			if (bParam1)
			{
				if (flag)
				{
					func_96(0, 0, 0);
				
					if (flag25)
						unk_0xE3F88173F42C071B();
				}
			
				if (!func_95(unk) && !unk_0xB431D60610E7F85F(unk))
					if (!flag22)
						unk_0x44C48AC14D3C09ED(unk, 1, 0);
			
				if (!unk_0xA3736D76B0E93E93(unk))
				{
					if (!flag21)
						unk_0x5D7CD709B34C90F0(unk, 0);
				
					unk_0x11C125313CB8ADA2(unk, 1);
				}
				else if (!flag21)
				{
					unk_0x5D7CD709B34C90F0(unk, 0);
				}
			
				unk_0x3F58BFCF656F0DF1(unk, 1);
				unk_0x2B52F77101390E6F(plParam0, 0);
				unk_0x6C4F5AA91D39455C(plParam0, 0);
			
				if (unk_0x4CEC77F224BCD884(unk) && unk_0x69CD279BFCFE278E(unk))
					unk_0xAF8337BF5A296283(unk);
			
				unk_0x9FF00EA9A61211D2(unk, 1);
			
				if (unk_0xE916D57851F785AB(unk_0x259BE71D8A81D4FA()) == 0)
				{
					func_94();
					func_93();
				}
			
				if (unk_0x705A7AB2D4BC0A9B())
					!flag23;
			
				unk_0x787F8EE1F6FBDC6D();
				Global_2657589[plParam0 /*466*/].f_255 = 0;
			
				if (!flag24)
					flag3 = true;
			
				if (Global_2635559.f_2681)
					Global_2635559.f_2681 = 0;
			}
			else
			{
				if (!func_95(unk) && !unk_0xB431D60610E7F85F(unk))
				{
					if (!flag22)
						unk_0x44C48AC14D3C09ED(unk, !flag15, 0);
				
					if (!unk_0xA3736D76B0E93E93(unk))
					{
						if (!flag21)
							unk_0x5D7CD709B34C90F0(unk, flag16);
					
						if (!flag16)
							unk_0x11C125313CB8ADA2(unk, 1);
					}
				
					if (func_92(*Global_4718592.f_166301))
						unk_0x5D7CD709B34C90F0(unk, 1);
				}
			
				if (Global_1575035)
					flag10 = false;
			
				if (flag10)
					unk_0x2B52F77101390E6F(plParam0, 0);
				else
					unk_0x2B52F77101390E6F(plParam0, 1);
			
				unk_0x3F58BFCF656F0DF1(unk, flag17);
			
				if (flag3)
					if (!unk_0xBFD01C2045360289(unk) && !unk_0x7F420695E3F776FB(unk, 0))
						unk_0x19626F992DC71FB9(unk);
			}
		
			num = 0;
		
			if (flag2)
				num = num | 2;
		
			if (flag3)
				num = num | 4;
		
			if (flag4)
				num = num | 8;
		
			if (flag5)
				num = num | 16;
		
			if (flag6)
				num = num | 32;
		
			if (flag7)
				num = num | 64;
		
			if (flag8)
				num = num | 128;
		
			if (flag9)
				num = num | 256;
		
			if (flag10)
				num = num | 512;
		
			if (flag11)
				num = num | 1024;
		
			if (flag12)
				num = num | 2048;
		
			if (flag13)
				num = num | 4096;
		
			unk_0x4686BC3BFDBB5348(plParam0, bParam1, num);
		}
	}

	return;
}

BOOL func_92(int iParam0) // Position - 0x32AF
{
	return iParam0 == 17;
}

void func_93() // Position - 0x32BC
{
	var unk;

	Global_2672505.f_1024 = 0;
	Global_2672505.f_1025 = 0;
	Global_2672505.f_1026 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2672505.f_1031 = -1;
	Global_2672505.f_1032 = 0;
	Global_2635559.f_2692 = { unk };
	return;
}

void func_94() // Position - 0x3309
{
	Global_2635559.f_702 = 0;
	Global_2635559.f_2735 = 0;
	Global_2635559.f_515 = 0;
	Global_2635559.f_606 = 0;
	Global_2657589[unk_0x259BE71D8A81D4FA() /*466*/].f_217 = 0;
	Global_2635559.f_2690 = 0;
	return;
}

BOOL func_95(var uParam0) // Position - 0x3347
{
	int num;

	if (unk_0x7F420695E3F776FB(uParam0, 1))
	{
		return true;
	}
	else
	{
		num = unk_0x9B5C1660CCDF7189(uParam0, joaat("SCRIPT_TASK_ENTER_VEHICLE"));
	
		if (num == 0)
			return true;
	}

	return false;
}

void func_96(int iParam0, int iParam1, int iParam2) // Position - 0x3378
{
	int num;
	int i;

	unk_0x1C2F771CDC87A3A5(iParam1, 0);

	if (iParam0 == 1)
		if (unk_0xFC8BFE4B41177C22(iParam1))
			if (unk_0x501EBB0523078750(iParam1))
				if (!unk_0xDFAE61B1AEF262C2(unk_0x259BE71D8A81D4FA(), unk_0x1C1C92A1CBAE364B(iParam1)))
					num = 1;

	if (num == 0)
	{
		if (iParam2 == 1)
		{
			if (iParam0 == 1)
			{
				func_98();
			}
			else if (!IS_BIT_SET(Global_2621446.f_67, 1))
			{
				if (IS_BIT_SET(Global_2621446.f_67, 2))
				{
					for (i = 0; i < 8; i = i + 1)
					{
						unk_0x07938654FF332D78(i, Global_2621446.f_58[i]);
					}
				}
			
				unk_0x0B0C9A0F9AAEB7F0(&(Global_2621446.f_67), 1);
			}
		}
	
		if (_NETWORK_IS_PLAYER_IN_SCTV(unk_0x259BE71D8A81D4FA(), 0))
			unk_0x522EF6D7B4059F2C(iParam0, iParam1, 1);
		else
			unk_0xF11FEC6A04FD7226(iParam0, iParam1);
	
		unk_0x4BDB60141FD6E156(iParam0, iParam1);
		func_97(joaat("MPPLY_IS_CHAR_SPECTATING"), iParam0);
	}

	return;
}

void func_97(int iParam0, int iParam1) // Position - 0x3448
{
	int num;

	num = iParam0;

	if (num != 0)
		unk_0xF1D0B0CE940F620D(num, iParam1, 1);

	return;
}

void func_98() // Position - 0x3464
{
	int i;

	if (!unk_0xAD15761928FCF79C())
	{
		if (!IS_BIT_SET(Global_2621446.f_67, 2))
		{
			for (i = 0; i < 8; i = i + 1)
			{
				Global_2621446.f_58[i] = unk_0xBCF87EE3DC296C2A(i);
			}
		
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2621446.f_67), 2);
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2621446.f_67), 0);
		}
	}

	return;
}

BOOL func_99() // Position - 0x34BC
{
	return IS_BIT_SET(Global_2621446, 3);
}

BOOL _NETWORK_IS_PLAYER_IN_SCTV(int player, int bCheckTeam) // Position - 0x34CA
{
	BOOL flag;

	if (player == unk_0x259BE71D8A81D4FA())
		flag = func_101(-1, false) == 8;
	else
		flag = Global_1853910[player /*862*/].f_205 == 8;

	if (bCheckTeam == 1)
		if (unk_0x762604C40829DB72(player))
			flag = unk_0x1864096A95E36EBA(player) == 8;

	return flag;
}

int func_101(int iParam0, BOOL bParam1) // Position - 0x3515
{
	int num;
	int num2;

	num2 = iParam0;

	if (num2 == -1)
		num2 = func_79();

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

BOOL func_102() // Position - 0x3556
{
	if (func_103() == 0)
		return true;

	return false;
}

int func_103() // Position - 0x356B
{
	return Global_1574632.f_18;
}

BOOL func_104() // Position - 0x3579
{
	if (IS_BIT_SET(Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_861, 2) && !(Global_2684801.f_2846.f_216 == -1))
		return true;

	return false;
}

void _STOPWATCH_INITIALIZE(var pStopwatch, BOOL useLocalTimer, BOOL useAccurateTime) // Position - 0x35AA
{
	if (pStopwatch->f_1 == 0)
	{
		if (unk_0x76CD105BCAC6EB9F() && !useLocalTimer)
			if (!useAccurateTime)
				*pStopwatch = unk_0x7E3F74F641EE6B27();
			else
				*pStopwatch = unk_0x0728E77B2BF91D54();
		else
			*pStopwatch = unk_0x1DD05E817C89C737();
	
		pStopwatch->f_1 = 1;
	}

	return;
}

void func_106() // Position - 0x35EF
{
	var unk;

	if (bLocal_50)
		return;

	uLocal_43.f_4 = 0;

	if (!func_107(Global_44232[iLocal_64 /*5*/].f_2))
		return;

	unk = unk_0xC5935DFB3F39785A(500, 3000);
	iLocal_60 = 5;
	iLocal_55.f_2 = SYSTEM::TIMERA() + unk;
	return;
}

BOOL func_107(int iParam0) // Position - 0x3632
{
	int num;
	char* str;
	char* str2;
	char* str3;
	char* str4;

	num = func_118();

	if (num == -2)
		return false;

	if (unk_0x4FAFF4BCB7633475(uLocal_43.f_1))
	{
		if (unk_0x7F420695E3F776FB(uLocal_43.f_1, 0) || unk_0x9D6DF8F3584AAC2B(uLocal_43.f_1))
			return false;
	
		if (unk_0x642A49B0C066F723(uLocal_43.f_1))
			return false;
	
		if (func_114(uLocal_43.f_1))
			return false;
	}

	if (Global_44232[iLocal_64 /*5*/].f_3 < 3 && Global_44232[iLocal_64 /*5*/].f_3 != 0 && Global_44232[iLocal_64 /*5*/].f_3 > Global_44232[iLocal_64 /*5*/].f_4)
		return false;

	if (Global_44232[iLocal_64 /*5*/].f_4 < 9 && Global_44232[iLocal_64 /*5*/].f_4 != 0 && Global_44232[iLocal_64 /*5*/].f_4 > Global_44232[iLocal_64 /*5*/].f_3)
		return false;

	str = func_113(iParam0);

	if (unk_0xD6F9DEE4765092A9(str))
		return false;

	if (func_114(uLocal_43.f_1))
		return false;

	unk_0x73DEEAB0747FB17C(str);

	if (func_110(uLocal_43.f_1))
	{
		str2 = "MOVE_M@DRUNK@TRANSITIONS";
		str3 = "";
	
		switch (iParam0)
		{
			case 0:
				str3 = "";
				break;
		
			case 2:
				str3 = "VERY_TO_MODERATE";
				break;
		
			case 1:
				str3 = "MODERATE_TO_SLIGHTLY";
				break;
		
			default:
				break;
		}
	
		if (!unk_0xD6F9DEE4765092A9(str2) && !unk_0xD6F9DEE4765092A9(str3))
		{
			unk_0x80813AC549A1E8AE(str2);
		
			while (!unk_0xE100DD4F82A51BDE(str2))
			{
				SYSTEM::WAIT(0);
			}
		
			if (!unk_0x4FAFF4BCB7633475(uLocal_43.f_1))
			{
				unk_0x10425721983AE158(uLocal_43.f_1, str2, str3, 1.5f, -1.5f, -1, 48, 0, 0, 0, 0);
				sLocal_54 = str3;
			}
		}
	}

	if (!unk_0x8175BC6D49412468(str))
		return false;

	if (unk_0x4FAFF4BCB7633475(uLocal_43.f_1))
		return false;

	unk_0x4669032A1DFBB449(uLocal_43.f_1, str, 0.75f);

	if (unk_0x3B5989D5DB08A155() == 4)
		unk_0x696095B298957860(uLocal_43.f_1, "move_ped_strafing_firstperson@drunk");

	unk_0xCC2D0738666FD62D(uLocal_43.f_1, 0, str, "idle", 2f, 1);
	iLocal_60.f_2 = str;
	bLocal_51 = true;
	str4 = 0;

	switch (_GET_PLAYER_CHARACTER_FROM_PED(uLocal_43.f_1))
	{
		case CHAR_MICHAEL:
			str4 = "FACIALS@P_M_ZERO@BASE";
			break;
	
		case CHAR_FRANKLIN:
			str4 = "FACIALS@P_M_ONE@BASE";
			break;
	
		case CHAR_TREVOR:
			str4 = "FACIALS@P_M_TWO@BASE";
			break;
	
		default:
			if (unk_0x501EBB0523078750(uLocal_43.f_1))
				if (!func_108())
					str4 = "FACIALS@GEN_MALE@BASE";
				else
					str4 = "FACIALS@GEN_FEMALE@BASE";
			else if (unk_0xB98B1A5B59BC5065(uLocal_43.f_1))
				str4 = "FACIALS@GEN_MALE@BASE";
			else
				str4 = "FACIALS@GEN_FEMALE@BASE";
			break;
	}

	unk_0x2C09C6B54CFCFAF1(uLocal_43.f_1, "mood_drunk_1", str4);
	unk_0x0FB8E752BCC547A9(uLocal_43.f_1, 200, 1);
	unk_0x0FB8E752BCC547A9(uLocal_43.f_1, 46, 1);
	unk_0xC1BC1B8A5AA67C6B(uLocal_43.f_1, 0);
	unk_0x1CA08719184AFC6F(uLocal_43.f_1, 262144, 1);
	unk_0x8A19BA162BA1DE3E(uLocal_43.f_1, 1);
	return true;
}

BOOL func_108() // Position - 0x38F4
{
	return func_109(unk_0x259BE71D8A81D4FA());
}

BOOL func_109(var uParam0) // Position - 0x3904
{
	if (unk_0x4B423FAA24E8ABF0(unk_0x56E414973C2A8C0E(uParam0)) == joaat("MP_F_Freemode_01"))
		return 1;

	return 0;
}

BOOL func_110(var uParam0) // Position - 0x3923
{
	Vector3 vector;

	if (unk_0x7F420695E3F776FB(uParam0, 1) || unk_0x9D6DF8F3584AAC2B(uParam0))
		return false;

	if (unk_0x9B5C1660CCDF7189(uParam0, joaat("SCRIPT_TASK_PLAY_ANIM")) != 7)
		return false;

	if (unk_0x9B5C1660CCDF7189(uParam0, joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE")) != 7)
		return false;

	if (unk_0x65F146FF416F109F(uParam0))
		return false;

	if (unk_0x3F18810075C77D41(uParam0))
		return false;

	if (unk_0x8BF5256C439DF778(uParam0))
		return false;

	if (unk_0x7CB06BFD42FB0E24(uParam0))
		return false;

	if (Global_75693)
		return false;

	if (func_112())
		return false;

	if (uParam0 == unk_0x4A8C381C258A124D())
	{
		if (!unk_0x566C977EEAE1C0D1(unk_0x259BE71D8A81D4FA()))
			return false;
	
		if (!unk_0xE916D57851F785AB(unk_0x259BE71D8A81D4FA()))
			return false;
	
		if (unk_0x1C751EF63BF4D501(unk_0x259BE71D8A81D4FA()) || unk_0x4F035D45FC2856F8(unk_0x259BE71D8A81D4FA()))
			return false;
	
		if (func_111())
			return false;
	}

	vector = { unk_0xE5741C6B6539231F(uParam0) };

	if (SYSTEM::VMAG2(vector) >= 1f * 1f)
		return false;

	return true;
}

BOOL func_111() // Position - 0x3A24
{
	return Global_100733.f_388 > 0;
}

BOOL func_112() // Position - 0x3A35
{
	return unk_0x1DD05E817C89C737() <= Global_23270.f_6321 + 100;
}

char* func_113(int iParam0) // Position - 0x3A4A
{
	switch (iParam0)
	{
		case 0:
			return "move_m@drunk@verydrunk";
	
		case 1:
			return "move_m@drunk@slightlydrunk";
	
		case 2:
			return "move_m@drunk@moderatedrunk";
	}

	return "";
}

BOOL func_114(int iParam0) // Position - 0x3A8B
{
	int num;
	char* str;

	num = func_115(iParam0);
	str = func_113(num);

	if (unk_0xD6F9DEE4765092A9(iLocal_60.f_2))
		if (unk_0xD6F9DEE4765092A9(str))
			return true;
		else
			return false;

	return unk_0x1B79E937E91F40C3(iLocal_60.f_2, str);
}

int func_115(int iParam0) // Position - 0x3ACC
{
	int num;
	int num2;

	if (iParam0 == 0)
		return -1;

	if (!unk_0xFC8BFE4B41177C22(iParam0))
		return -1;

	num = func_117(iParam0);
	num2 = func_116(num);

	if (num2 == -1)
		return -1;

	return Global_44232[num2 /*5*/].f_2;
}

int func_116(int iParam0) // Position - 0x3B0F
{
	int i;

	i = 0;

	for (i = 0; i < 16; i = i + 1)
	{
		if (Global_44232[i /*5*/] == iParam0)
			return i;
	}

	return -1;
}

int func_117(int iParam0) // Position - 0x3B3F
{
	int i;

	if (iParam0 == 0)
		return -1;

	i = 0;

	for (i = 0; i < 16; i = i + 1)
	{
		if (iParam0 == Global_44232[i /*5*/].f_1)
			return Global_44232[i /*5*/];
	}

	return -1;
}

int func_118() // Position - 0x3B80
{
	int num;

	if (iLocal_55 == -2)
		return -2;

	if (iLocal_55 == -1)
		return -1;

	num = iLocal_55 - SYSTEM::TIMERA();

	if (num < 0)
		return -2;

	if (num > 65534)
		num = 65534;

	return num;
}

void func_119() // Position - 0x3BC6
{
	if (bLocal_50)
		return;

	if (!func_120())
	{
		iLocal_60 = 5;
		iLocal_55.f_2 = SYSTEM::TIMERA() + 5000;
		return;
	}

	iLocal_60 = 6;
	return;
}

BOOL func_120() // Position - 0x3BF2
{
	var unk;
	var unk4;
	float num;

	if (uLocal_43.f_4 == 0)
		return false;

	if (unk_0x1C2F771CDC87A3A5(uLocal_43.f_4, 0))
		return false;

	unk = { unk_0xD1A6A821F5AC81DB(uLocal_43.f_1, 1) };
	unk4 = { unk_0xD1A6A821F5AC81DB(uLocal_43.f_4, 1) };
	num = unk_0xED977E2AE2CB16EE(unk, unk4, 1);
	return num < 7f;
}

void func_121() // Position - 0x3C43
{
	int num;
	char* str;

	if (uLocal_43.f_1 == unk_0x4A8C381C258A124D())
	{
		unk_0x66EFB3D6110055C4(0, 36, 1);
	
		if (unk_0xC2BF1F6F84E31EB2(uLocal_43.f_1))
			if (Global_44232[iLocal_64 /*5*/].f_2 == 0 || Global_44232[iLocal_64 /*5*/].f_2 == 2)
				unk_0xF9358C41CC69C616(uLocal_43.f_1, 0, 0);
	
		if (unk_0xDC91B9320E14F119(uLocal_43.f_1))
			unk_0xD0B00571D4BDDC97(uLocal_43.f_1, 0);
	}

	if (iLocal_55 != -2)
	{
		if (iLocal_55 == -1)
		{
			if (Global_44232[iLocal_64 /*5*/].f_2 != 0)
				Global_44232[iLocal_64 /*5*/].f_2 = 0;
		}
		else
		{
			num = iLocal_55 - SYSTEM::TIMERA();
		
			if (num <= 0)
				num = 0;
		
			num = (num / 1000) + 1;
		
			if (Global_44232[iLocal_64 /*5*/].f_2 == 0)
			{
				if (num < 30)
				{
					Global_44232[iLocal_64 /*5*/].f_2 = 2;
				
					if (!func_107(2))
					{
						Global_44232[iLocal_64 /*5*/].f_2 = 0;
						return;
					}
				}
			}
		
			if (Global_44232[iLocal_64 /*5*/].f_2 == 2)
			{
				if (num < 10)
				{
					Global_44232[iLocal_64 /*5*/].f_2 = 1;
				
					if (!func_107(2))
					{
						Global_44232[iLocal_64 /*5*/].f_2 = 2;
						return;
					}
				}
			}
		
			Global_44232[iLocal_64 /*5*/].f_2 == 1;
		}
	}
	else
	{
		return;
	}

	if (!unk_0xD6F9DEE4765092A9(sLocal_54))
	{
		if (!func_110(uLocal_43.f_1))
		{
			str = "MOVE_M@DRUNK@TRANSITIONS";
		
			if (unk_0x13CCB1AD131C1082(uLocal_43.f_1, str, sLocal_54, 3))
				unk_0x08D8528BA8E43641(uLocal_43.f_1, str, sLocal_54, -4f);
		
			sLocal_54 = "";
			return;
		}
	}

	if (Global_44232[iLocal_64 /*5*/].f_3 >= 10 || Global_44232[iLocal_64 /*5*/].f_4 >= 15 || IS_BIT_SET(Global_44449, 9))
	{
		if (unk_0x9B5C1660CCDF7189(uLocal_43.f_1, joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE")) == 1 && !IS_BIT_SET(Global_1950108.f_3, 27))
			return;
	
		if (unk_0x75E315E7679F4F24(uLocal_43.f_1))
			return;
	
		if (unk_0x7F420695E3F776FB(uLocal_43.f_1, 1))
		{
			if (Global_44232[iLocal_64 /*5*/].f_3 >= 10)
				Global_44232[iLocal_64 /*5*/].f_3 = 9;
		
			if (Global_44232[iLocal_64 /*5*/].f_4 >= 15)
				Global_44232[iLocal_64 /*5*/].f_4 = 14;
		
			return;
		}
	
		if (unk_0x76CD105BCAC6EB9F() && uLocal_43.f_1 == unk_0x4A8C381C258A124D() && func_136(unk_0x259BE71D8A81D4FA()) && Global_262145.f_24351)
		{
			if (Global_44232[iLocal_64 /*5*/].f_3 >= 10)
				Global_44232[iLocal_64 /*5*/].f_3 = 9;
		
			if (Global_44232[iLocal_64 /*5*/].f_4 >= 15)
				Global_44232[iLocal_64 /*5*/].f_4 = 14;
		
			return;
		}
	
		if (unk_0x76CD105BCAC6EB9F() && uLocal_43.f_1 == unk_0x4A8C381C258A124D() && func_135())
		{
			if (Global_44232[iLocal_64 /*5*/].f_3 >= 10)
				Global_44232[iLocal_64 /*5*/].f_3 = 9;
		
			if (Global_44232[iLocal_64 /*5*/].f_4 >= 15)
				Global_44232[iLocal_64 /*5*/].f_4 = 14;
		
			return;
		}
	
		if (unk_0x76CD105BCAC6EB9F() && unk_0x834C960822A4683F() && func_134())
		{
			if (Global_44232[iLocal_64 /*5*/].f_3 >= 10)
				Global_44232[iLocal_64 /*5*/].f_3 = 9;
		
			if (Global_44232[iLocal_64 /*5*/].f_4 >= 15)
				Global_44232[iLocal_64 /*5*/].f_4 = 14;
		
			return;
		}
	
		if (unk_0x76CD105BCAC6EB9F() && unk_0x834C960822A4683F() && func_133())
		{
			if (Global_44232[iLocal_64 /*5*/].f_3 >= 10)
				Global_44232[iLocal_64 /*5*/].f_3 = 9;
		
			if (Global_44232[iLocal_64 /*5*/].f_4 >= 15)
				Global_44232[iLocal_64 /*5*/].f_4 = 14;
		
			return;
		}
	
		if (func_130(unk_0x259BE71D8A81D4FA()))
		{
			if (Global_44232[iLocal_64 /*5*/].f_3 >= 10)
				Global_44232[iLocal_64 /*5*/].f_3 = 9;
		
			if (Global_44232[iLocal_64 /*5*/].f_4 >= 15)
				Global_44232[iLocal_64 /*5*/].f_4 = 14;
		
			return;
		}
	
		if (unk_0x76CD105BCAC6EB9F() && uLocal_43.f_1 == unk_0x4A8C381C258A124D() && func_129(unk_0x259BE71D8A81D4FA()) && Global_262145.f_27034)
		{
			if (Global_44232[iLocal_64 /*5*/].f_3 >= 10)
				Global_44232[iLocal_64 /*5*/].f_3 = 9;
		
			if (Global_44232[iLocal_64 /*5*/].f_4 >= 15)
				Global_44232[iLocal_64 /*5*/].f_4 = 14;
		
			return;
		}
	
		if (unk_0x76CD105BCAC6EB9F() && uLocal_43.f_1 == unk_0x4A8C381C258A124D() && func_126(unk_0x259BE71D8A81D4FA()) && Global_262145.f_27067)
		{
			if (Global_44232[iLocal_64 /*5*/].f_3 >= 10)
				Global_44232[iLocal_64 /*5*/].f_3 = 9;
		
			if (Global_44232[iLocal_64 /*5*/].f_4 >= 15)
				Global_44232[iLocal_64 /*5*/].f_4 = 14;
		
			return;
		}
	
		if (unk_0x76CD105BCAC6EB9F() && uLocal_43.f_1 == unk_0x4A8C381C258A124D() && func_122(unk_0x259BE71D8A81D4FA()) == 15)
		{
			if (Global_44232[iLocal_64 /*5*/].f_3 >= 10)
				Global_44232[iLocal_64 /*5*/].f_3 = 9;
		
			if (Global_44232[iLocal_64 /*5*/].f_4 >= 15)
				Global_44232[iLocal_64 /*5*/].f_4 = 14;
		
			return;
		}
	
		if (unk_0x76CD105BCAC6EB9F() && uLocal_43.f_1 == unk_0x4A8C381C258A124D() && Global_75693 && !Global_44205)
		{
			if (Global_44232[iLocal_64 /*5*/].f_3 >= 10)
				Global_44232[iLocal_64 /*5*/].f_3 = 9;
		
			if (Global_44232[iLocal_64 /*5*/].f_4 >= 15)
				Global_44232[iLocal_64 /*5*/].f_4 = 14;
		
			return;
		}
	
		iLocal_60.f_1 = 3;
		return;
	}

	if (!bLocal_51)
		return;

	if (!func_114(uLocal_43.f_1))
		return;

	return;
}

int func_122(int iParam0) // Position - 0x417C
{
	if (func_125(iParam0) == 243)
		return func_123(iParam0);

	return -1;
}

int func_123(int iParam0) // Position - 0x4199
{
	if (func_124(iParam0, false))
		return Global_1894573[iParam0 /*608*/].f_10.f_182;

	return -1;
}

BOOL func_124(int iParam0, BOOL bParam1) // Position - 0x41BC
{
	if (Global_1894573[iParam0 /*608*/].f_10.f_33 != -1 || bParam1 && Global_1894573[iParam0 /*608*/].f_10.f_32 != -1)
		return true;

	return false;
}

int func_125(int iParam0) // Position - 0x41F7
{
	if (func_124(iParam0, false))
		return Global_1894573[iParam0 /*608*/].f_10.f_33;

	return -1;
}

BOOL func_126(Player plParam0) // Position - 0x421A
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		if (_NETWORK_IS_PLAYER_VALID(plParam0, true, true))
			if (Global_2657589[plParam0 /*466*/].f_321.f_7 != -1)
				return func_127(Global_2657589[plParam0 /*466*/].f_321.f_7) == 15;

	return false;
}

int func_127(int iParam0) // Position - 0x4261
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
			return 0;
	
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return 1;
	
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
			return 2;
	
		case 43:
		case 42:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 98:
		case 99:
		case 100:
		case 112:
		case 113:
		case 114:
		case 115:
		case 119:
		case 116:
		case 118:
		case 120:
		case 121:
		case 126:
		case 127:
		case 134:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
			return 3;
	
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
			return 4;
	
		case 81:
			return 5;
	
		case 82:
			return 6;
	
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
			return 7;
	
		case 88:
			return 8;
	
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
			return 9;
	
		case 101:
			return 10;
	
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
			return 11;
	
		case 117:
			return 12;
	
		case 122:
			return 13;
	
		case 123:
			return 14;
	
		case 124:
			return 15;
	
		case 125:
			return 16;
	
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
			return 17;
	
		case 145:
			return 18;
	
		case 146:
			return 19;
	
		case 147:
			return 20;
	
		case 148:
			return 21;
	
		case 149:
		case 151:
		case 153:
		case 152:
		case 150:
			return 22;
	
		case 154:
			return 23;
	
		case 155:
		case 156:
		case 157:
		case 158:
			return 24;
	
		case 159:
			return 25;
	
		case 160:
			return 26;
	
		case 161:
			return 27;
	}

	return -1;
}

BOOL _NETWORK_IS_PLAYER_VALID(Player player, BOOL bIsPlaying, BOOL bUnk) // Position - 0x4715
{
	Player player;

	player = player;

	if (player != -1)
	{
		if (unk_0x762604C40829DB72(player))
		{
			if (bIsPlaying)
				if (!unk_0x75EAB09F5E974116(player))
					return false;
		
			if (bUnk)
				if (player == Global_2672505.f_3)
					return Global_2672505.f_2;
				else if (Global_2657589[player /*466*/] != 4)
					return false;
		
			return true;
		}
	}

	return false;
}

BOOL func_129(Player plParam0) // Position - 0x4775
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		if (_NETWORK_IS_PLAYER_VALID(plParam0, true, true))
			if (Global_2657589[plParam0 /*466*/].f_321.f_7 != -1)
				return func_127(Global_2657589[plParam0 /*466*/].f_321.f_7) == 14;

	return false;
}

BOOL func_130(int iParam0) // Position - 0x47BC
{
	return func_131(func_132(iParam0));
}

BOOL func_131(int iParam0) // Position - 0x47CE
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return 1;
	
		default:
		
	}

	return 0;
}

int func_132(int iParam0) // Position - 0x4800
{
	if (func_125(iParam0) == 256)
		return func_123(iParam0);

	return -1;
}

BOOL func_133() // Position - 0x481E
{
	return Global_2683864.f_24;
}

BOOL func_134() // Position - 0x482C
{
	return Global_2683864.f_21;
}

BOOL func_135() // Position - 0x483A
{
	return Global_2764617;
}

BOOL func_136(Player plParam0) // Position - 0x4846
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		if (_NETWORK_IS_PLAYER_VALID(plParam0, true, true))
			if (Global_2657589[plParam0 /*466*/].f_321.f_7 != -1)
				return func_127(Global_2657589[plParam0 /*466*/].f_321.f_7) == 11;

	return false;
}

BOOL func_137() // Position - 0x488D
{
	int num;

	if (!unk_0x27E68848F0E5D7D9(uLocal_43.f_1))
		return false;

	num = 0;
	num = unk_0x6EF03BE64E058E2F(uLocal_43.f_1, 0);

	if (!unk_0xD9F5E1FEFD1329E4(num, 0))
		return false;

	if (!(unk_0xFD5C5BBD1FE92BB7(num, -1, 0) == uLocal_43.f_1))
		return false;

	uLocal_43.f_4 = num;
	iLocal_60 = 7;
	return true;
}

void func_138() // Position - 0x48E1
{
	if (!unk_0x7F420695E3F776FB(uLocal_43.f_1, 0))
	{
		iLocal_60 = 4;
		return;
	}

	return;
}

void func_139() // Position - 0x48FC
{
	var unk;
	float num;
	var unk2;
	var unk5;
	var unk8;

	if (!bLocal_50)
		return;

	if (!unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
		return;

	if (!unk_0x27E68848F0E5D7D9(unk_0x4A8C381C258A124D()))
		return;

	if (unk_0x3EE1A6D743332852(unk_0x259BE71D8A81D4FA(), 0))
		return;

	unk = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
	num = unk_0xDF93B3CFAC96698F(unk);

	if (num < 5f)
		return;

	unk2 = { unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1) };
	unk5 = { unk2 - { 3f, 30f, 30f } };
	unk8 = { unk2 + { 3f, 30f, 30f } };

	if (!unk_0x00CC36CA06DD06AD(unk5, unk8) && !unk_0x59A8C2AB2084CAF7(unk5, unk8))
		return;

	unk_0xF165EAD0AA08F3B6(unk_0x259BE71D8A81D4FA(), 1, 0);
	unk_0x42C9A22D6724F283(unk_0x259BE71D8A81D4FA(), 0);
	func_11(73, 1);
	return;
}

void func_140() // Position - 0x49CB
{
	var unk;
	var unk2;
	var unk3;
	float num;
	int num2;

	unk = uLocal_43.f_1;

	if (unk_0x7F420695E3F776FB(uLocal_43.f_1, 0))
	{
		unk2 = unk_0x6EF03BE64E058E2F(uLocal_43.f_1, 0);
		unk3 = unk_0xFD5C5BBD1FE92BB7(unk2, -1, 0);
	
		if (!(unk3 == uLocal_43.f_1))
			return;
	
		if (unk_0x76CD105BCAC6EB9F() && !unk_0x1B1A446EFA398EB5(unk2))
			return;
	
		unk = unk2;
	}
	else if (!(unk_0x4A8C381C258A124D() == uLocal_43.f_1))
	{
		return;
	}
	else if (!(unk_0x3B5989D5DB08A155() == 4))
	{
		fLocal_53 = 0f;
		func_142(unk, 0f);
		return;
	}

	if (SYSTEM::TIMERA() < iLocal_55.f_4)
	{
		func_142(unk, fLocal_53);
		return;
	}

	if (unk_0x0101C509A6E67F99(unk))
		iLocal_55.f_4 = SYSTEM::TIMERA() + 2000;
	else
		iLocal_55.f_4 = SYSTEM::TIMERA() + 1000;

	num = unk_0xDF93B3CFAC96698F(unk);

	if (num < 0.04f)
	{
		fLocal_53 = 0f;
		func_142(unk, 0f);
		return;
	}

	if (iLocal_55.f_1 == -1)
	{
		fLocal_53 = func_141(unk, 0.13f, 0.06f);
	}
	else
	{
		num2 = iLocal_55.f_1 - SYSTEM::TIMERA();
	
		if (num2 < 5000)
			fLocal_53 = 0f;
		else if (num2 < 15000)
			fLocal_53 = func_141(unk, 0.05f, 0.02f);
		else if (num2 < 30000)
			fLocal_53 = func_141(unk, 0.07f, 0.03f);
		else if (num2 < 45000)
			fLocal_53 = func_141(unk, 0.09f, 0.04f);
		else if (num2 < 600000)
			fLocal_53 = func_141(unk, 0.1f, 0.05f);
		else
			fLocal_53 = func_141(unk, 0.13f, 0.06f);
	}

	func_142(unk, fLocal_53);
	return;
}

float func_141(var uParam0, float fParam1, float fParam2) // Position - 0x4B6D
{
	float num;
	var unk;
	var unk2;

	num = unk_0xD2AA6F822D3A55D2(-fParam1, fParam1);
	unk = unk_0xD2AA6F822D3A55D2(0f, fParam2);

	if (num < 0f)
		num = num - unk;
	else
		num = num + unk;

	if (unk_0x0101C509A6E67F99(uParam0))
	{
		if (unk_0x6F21822F60DC0945(unk_0xBD545F8729E9F413(uParam0)))
			num = num * 4.5f;
		else
			num = num * 3f;
	}
	else
	{
		unk2 = unk_0x4B423FAA24E8ABF0(uParam0);
	
		if (unk_0x78B050AFBA6D1517(unk2))
			num = num * 1.5f;
		else
			num = num * 0.5f;
	}

	num = func_21(num, -1f, 1f);
	return num;
}

void func_142(var uParam0, float fParam1) // Position - 0x4C01
{
	if (unk_0x76CD105BCAC6EB9F() && !unk_0x1B1A446EFA398EB5(uParam0))
		return;

	if (unk_0x0101C509A6E67F99(uParam0))
		unk_0xD4D1973154415E9B(unk_0xBD545F8729E9F413(uParam0), fParam1);
	else if (unk_0x55B80B6E7AB61270(uParam0))
		unk_0xDEABDA7736297FEB(unk_0xE93EDE86BBB66532(uParam0), fParam1);

	return;
}

void func_143() // Position - 0x4C4C
{
	var unk;

	if (!unk_0x7F420695E3F776FB(uLocal_43.f_1, 0))
	{
		iLocal_60 = 4;
		return;
	}

	if (unk_0x76CD105BCAC6EB9F())
	{
		if (Global_44232[iLocal_64 /*5*/].f_3 >= 10 || Global_44232[iLocal_64 /*5*/].f_4 >= 15)
		{
			if (Global_44232[iLocal_64 /*5*/].f_3 >= 10)
				Global_44232[iLocal_64 /*5*/].f_3 = 9;
		
			if (Global_44232[iLocal_64 /*5*/].f_4 >= 15)
				Global_44232[iLocal_64 /*5*/].f_4 = 14;
		}
	}

	if (bLocal_50)
		return;

	unk = unk_0x6EF03BE64E058E2F(uLocal_43.f_1, 0);

	if (!unk_0xD9F5E1FEFD1329E4(unk, 0))
	{
		unk_0x092B9247AF00F5CF(uLocal_43.f_1, 0, 0);
		iLocal_60 = 11;
		return;
	}

	return;
}

void func_144() // Position - 0x4CF0
{
	int num;
	var unk;
	var unk2;

	if (SYSTEM::TIMERA() <= iLocal_55.f_3)
		return;

	num = unk_0x9B5C1660CCDF7189(unk_0x4A8C381C258A124D(), joaat("SCRIPT_TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT"));

	if (!(num == 7))
	{
		iLocal_55.f_3 = SYSTEM::TIMERA() + 1000;
		return;
	}

	if (!unk_0x7F420695E3F776FB(uLocal_43.f_1, 0))
	{
		iLocal_60 = 4;
		iLocal_55.f_3 = -2;
		return;
	}

	unk = unk_0x6EF03BE64E058E2F(uLocal_43.f_1, 0);
	unk2 = unk_0xFD5C5BBD1FE92BB7(unk, -1, 0);

	if (unk2 == uLocal_43.f_1)
	{
		func_145();
		iLocal_55.f_3 = -2;
		return;
	}

	unk_0x7A55A25242FBE562(uLocal_43.f_1, unk, 0);
	iLocal_60 = 9;
	iLocal_55.f_3 = SYSTEM::TIMERA() + 1000;
	return;
}

void func_145() // Position - 0x4D8B
{
	if (iLocal_60 == 10)
		return;

	iLocal_60 = 10;

	if (iLocal_48 == -1)
		return;

	func_171(iLocal_48, 2, 5);
	iLocal_55.f_4 = SYSTEM::TIMERA();
	fLocal_53 = 0f;
	return;
}

void func_146() // Position - 0x4DBD
{
	if (unk_0x27E68848F0E5D7D9(uLocal_43.f_1))
	{
		iLocal_60 = 10;
		return;
	}

	if (SYSTEM::TIMERA() < iLocal_55.f_3)
		return;

	iLocal_60 = 4;
	iLocal_55.f_3 = -2;
	return;
}

void func_147() // Position - 0x4DEF
{
	int num;
	BOOL flag;
	var unk;
	int num2;

	!bLocal_50;
	num = 0;
	flag = false;

	if (flag || unk_0x27E68848F0E5D7D9(uLocal_43.f_1))
	{
		!bLocal_50;
		num = unk_0x6EF03BE64E058E2F(uLocal_43.f_1, 0);
	
		if (!(num == uLocal_43.f_4))
		{
			!bLocal_50;
		
			if (!bLocal_50)
			{
				!bLocal_50;
				unk_0x092B9247AF00F5CF(uLocal_43.f_1, 0, 0);
				iLocal_60 = 11;
				return;
			}
		
			uLocal_43.f_4 = num;
		}
	
		if (flag)
		{
			!bLocal_50;
			func_145();
			return;
		}
	
		if (!bLocal_50)
		{
			!bLocal_50;
			func_145();
			return;
		}
	
		!bLocal_50;
		unk = unk_0xFD5C5BBD1FE92BB7(uLocal_43.f_4, -1, 0);
	
		if (unk == uLocal_43.f_1)
		{
			func_145();
			return;
		}
	
		unk_0x7A55A25242FBE562(uLocal_43.f_1, num, 0);
		iLocal_60 = 9;
		iLocal_55.f_3 = SYSTEM::TIMERA() + 1000;
		return;
	}

	if (!func_120())
	{
		unk_0x974022927CB47E68(uLocal_43.f_1);
		iLocal_60 = 4;
		return;
	}

	if (!bLocal_50)
	{
		num2 = unk_0x9B5C1660CCDF7189(uLocal_43.f_1, joaat("SCRIPT_TASK_ENTER_VEHICLE"));
	
		if (num2 == 7)
		{
			if (!unk_0x7F420695E3F776FB(uLocal_43.f_1, 0))
			{
				unk_0x974022927CB47E68(uLocal_43.f_1);
				iLocal_60 = 4;
				return;
			}
		}
	}

	return;
}

void func_148() // Position - 0x4F0B
{
	var unk;
	var unk4;
	float num;
	int num2;
	int num3;
	BOOL flag;

	if (bLocal_50)
		return;

	if (uLocal_43.f_4 == 0)
	{
		iLocal_60 = 4;
		return;
	}

	if (!unk_0xD9F5E1FEFD1329E4(uLocal_43.f_4, 0))
	{
		uLocal_43.f_4 = 0;
		iLocal_60 = 4;
		return;
	}

	unk = { unk_0xD1A6A821F5AC81DB(uLocal_43.f_1, 1) };
	unk4 = { unk_0xD1A6A821F5AC81DB(uLocal_43.f_4, 1) };
	num = unk_0xED977E2AE2CB16EE(unk, unk4, 1);

	if (num > 3f)
	{
		if (!func_107(Global_44232[iLocal_64 /*5*/].f_2))
		{
			iLocal_60 = 12;
			return;
		}
	
		iLocal_60 = 5;
		iLocal_55.f_2 = SYSTEM::TIMERA() + 2000;
		return;
	}

	num2 = unk_0x2EEC0612337D20CE(uLocal_43.f_4);
	num3 = 0;
	flag = true;
	num3 = 1;

	while (flag)
	{
		if (num3 < num2)
		{
			if (unk_0xC39AE5D390581AD5(uLocal_43.f_4, num3, 0))
				flag = false;
			else
				num3 = num3 + 1;
		}
		else
		{
			flag = false;
			num3 = -1;
		}
	}

	if (num3 == -1)
	{
		if (num3 == -1)
		{
			iLocal_60 = 4;
			return;
		}
	}

	func_149();
	unk_0xEBA229B2E0BB05E0(uLocal_43.f_1, uLocal_43.f_4, -1, num3, 1073741824, 1, 0);
	iLocal_60 = 7;
	return;
}

void func_149() // Position - 0x500E
{
	if (!unk_0xFC8BFE4B41177C22(uLocal_43.f_1))
		return;

	if (!unk_0x4FAFF4BCB7633475(uLocal_43.f_1))
	{
		unk_0x4A46A67DB6AC487D(uLocal_43.f_1, 1048576000);
		unk_0x529EC998DD2C51F8(uLocal_43.f_1);
		unk_0x384E72D362B96929(uLocal_43.f_1, 0, -1056964608);
		iLocal_60.f_2 = "";
		unk_0x490EA3A0CF334F58(uLocal_43.f_1);
		unk_0x0FB8E752BCC547A9(uLocal_43.f_1, 200, 0);
		unk_0x0FB8E752BCC547A9(uLocal_43.f_1, 46, 0);
		unk_0xC1BC1B8A5AA67C6B(uLocal_43.f_1, 1);
		unk_0x1CA08719184AFC6F(uLocal_43.f_1, 262144, 0);
		unk_0x8A19BA162BA1DE3E(uLocal_43.f_1, 0);
	}

	if (!bLocal_51)
		return;

	bLocal_51 = false;
	return;
}

void func_150() // Position - 0x50A3
{
	if (SYSTEM::TIMERA() < iLocal_55.f_2)
	{
		func_121();
		return;
	}

	func_151();
	iLocal_55.f_2 = -2;
	iLocal_60 = 12;
	return;
}

int func_151() // Position - 0x50CD
{
	if (!func_114(uLocal_43.f_1))
		return 0;

	if (!bLocal_51)
		return 0;

	func_152(uLocal_43.f_1);
	iLocal_60.f_2 = "";
	Global_2793046.f_4637 = 1;
	return 1;
}

void func_152(var uParam0) // Position - 0x5106
{
	unk_0x4A46A67DB6AC487D(uParam0, 1048576000);
	unk_0x384E72D362B96929(uParam0, 0, -1056964608);
	unk_0x0FB8E752BCC547A9(uParam0, 200, 0);
	unk_0xC1BC1B8A5AA67C6B(uParam0, 1);
	unk_0x1CA08719184AFC6F(uParam0, 262144, 0);
	unk_0x8A19BA162BA1DE3E(uParam0, 0);
	return;
}

void func_153() // Position - 0x5147
{
	int num;

	if (iLocal_55 == -1)
	{
		Global_44232[iLocal_64 /*5*/].f_2 = 0;
	}
	else if (Global_44232[iLocal_64 /*5*/].f_3 < 3 && Global_44232[iLocal_64 /*5*/].f_3 != 0)
	{
		Global_44232[iLocal_64 /*5*/].f_2 = -1;
	}
	else
	{
		num = iLocal_55 - SYSTEM::TIMERA();
	
		if (num <= 0)
			num = 0;
	
		num = (num / 1000) + 1;
		Global_44232[iLocal_64 /*5*/].f_2 = 0;
	
		if (num < 30)
			Global_44232[iLocal_64 /*5*/].f_2 = 2;
	
		if (num < 10)
			Global_44232[iLocal_64 /*5*/].f_2 = 1;
	}

	if (unk_0x7F420695E3F776FB(uLocal_43.f_1, 0))
	{
		iLocal_60 = 10;
		return;
	}

	if (func_114(uLocal_43.f_1))
	{
		iLocal_60 = 12;
		return;
	}

	if (iLocal_55 == -2)
		return;

	if (!func_107(Global_44232[iLocal_64 /*5*/].f_2))
		return;

	iLocal_60 = 12;
	return;
}

void func_154() // Position - 0x521D
{
	return;
}

void func_155() // Position - 0x5225
{
	int num;
	int i;

	num = 6;
	i = 0;

	for (i = 0; i < 16; i = i + 1)
	{
		num = Global_44313[i /*6*/].f_2;
	
		if (!(num == 6))
		{
			if (Global_44313[i /*6*/].f_1 == iLocal_48)
			{
				func_157(i);
				func_156(i);
			}
			else if (Global_44313[i /*6*/].f_1 == 2)
			{
				if (!(iLocal_49 == -1))
					if (iLocal_49 == Global_44313[i /*6*/])
						func_157(i);
			}
		}
	}

	return;
}

void func_156(int iParam0) // Position - 0x529D
{
	if (iParam0 < 0 || iParam0 >= 16)
		return;

	Global_44313[iParam0 /*6*/] = -1;
	Global_44313[iParam0 /*6*/].f_1 = -1;
	Global_44313[iParam0 /*6*/].f_2 = 6;
	Global_44313[iParam0 /*6*/].f_3 = 0;
	Global_44313[iParam0 /*6*/].f_4 = 0;
	return;
}

void func_157(int iParam0) // Position - 0x52EA
{
	int num;

	num = Global_44313[iParam0 /*6*/].f_2;

	switch (num)
	{
		case 1:
			func_178();
			break;
	
		case 2:
			func_161(Global_44313[iParam0 /*6*/].f_4);
			break;
	
		case 3:
			func_160(Global_44313[iParam0 /*6*/].f_5);
			break;
	
		case 4:
			func_159();
			break;
	
		case 5:
			func_158();
			break;
	
		case 0:
			break;
	
		case 6:
			break;
	
		default:
			break;
	}

	return;
}

void func_158() // Position - 0x536C
{
	iLocal_60.f_1 = 2;
	return;
}

void func_159() // Position - 0x5379
{
	int num;

	Global_44232[iLocal_64 /*5*/].f_4 = Global_44232[iLocal_64 /*5*/].f_4 + 1;

	if (iLocal_55 == -1)
	{
		Global_44232[iLocal_64 /*5*/].f_2 = 0;
	}
	else if (Global_44232[iLocal_64 /*5*/].f_4 < 9 && Global_44232[iLocal_64 /*5*/].f_4 != 0)
	{
		Global_44232[iLocal_64 /*5*/].f_2 = -1;
	}
	else
	{
		num = iLocal_55 - SYSTEM::TIMERA();
	
		if (num <= 0)
			num = 0;
	
		num = (num / 1000) + 1;
		Global_44232[iLocal_64 /*5*/].f_2 = 0;
	
		if (num < 30)
			Global_44232[iLocal_64 /*5*/].f_2 = 2;
	
		if (num < 10)
			Global_44232[iLocal_64 /*5*/].f_2 = 1;
	
		if (!func_114(uLocal_43.f_1))
			func_107(Global_44232[iLocal_64 /*5*/].f_2);
	}

	return;
}

void func_160(var uParam0) // Position - 0x5439
{
	int num;

	Global_44232[iLocal_64 /*5*/].f_3 = Global_44232[iLocal_64 /*5*/].f_3 + uParam0;

	if (iLocal_55 == -1)
	{
		Global_44232[iLocal_64 /*5*/].f_2 = 0;
	}
	else if (Global_44232[iLocal_64 /*5*/].f_3 < 3 && Global_44232[iLocal_64 /*5*/].f_3 != 0)
	{
		Global_44232[iLocal_64 /*5*/].f_2 = -1;
	}
	else
	{
		num = iLocal_55 - SYSTEM::TIMERA();
	
		if (num <= 0)
			num = 0;
	
		num = (num / 1000) + 1;
		Global_44232[iLocal_64 /*5*/].f_2 = 0;
	
		if (num < 30)
			Global_44232[iLocal_64 /*5*/].f_2 = 2;
	
		if (num < 10)
			Global_44232[iLocal_64 /*5*/].f_2 = 1;
	
		if (!func_114(uLocal_43.f_1))
			func_107(Global_44232[iLocal_64 /*5*/].f_2);
	}

	return;
}

void func_161(var uParam0) // Position - 0x54F9
{
	uLocal_43.f_3 = uLocal_43.f_3 + uParam0;
	uLocal_43.f_2 = uLocal_43.f_2 + uParam0;
	iLocal_55.f_1 = iLocal_55.f_1 + uParam0;
	iLocal_55 = iLocal_55 + uParam0;
	return;
}

void func_162() // Position - 0x5529
{
	int num;

	if (!bLocal_50)
	{
		iLocal_63 = -1;
		return;
	}

	if (iLocal_63 < 0)
	{
		iLocal_63 = unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA());
		return;
	}

	num = unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA());

	if (num != iLocal_63)
	{
		if (num > iLocal_63)
			func_163();
	
		iLocal_63 = num;
		return;
	}

	return;
}

void func_163() // Position - 0x5573
{
	return;
}

void func_164() // Position - 0x557B
{
	if (!(iLocal_55 == -1))
	{
		if (!(iLocal_55 == -2))
		{
			if (SYSTEM::TIMERA() >= iLocal_55)
			{
				func_149();
				iLocal_55 = -2;
				iLocal_60 = 12;
			}
		}
	
		if (SYSTEM::TIMERA() > iLocal_55.f_1)
			func_178();
	}

	return;
}

void func_165(int iParam0) // Position - 0x55BA
{
	int i;

	i = 0;

	for (i = 0; i < 16; i = i + 1)
	{
		if (iParam0 == Global_44313[i /*6*/])
			func_156(i);
	}

	return;
}

void func_166() // Position - 0x55EA
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;
	int num7;
	int num8;

	iLocal_60 = 4;

	if (!unk_0x1C2F771CDC87A3A5(uLocal_43.f_1, 0))
		if (unk_0x27E68848F0E5D7D9(uLocal_43.f_1))
			iLocal_60 = 10;

	if (bLocal_50)
	{
		func_169();
		func_11(71, 1);
	
		if (unk_0x76CD105BCAC6EB9F())
		{
			num = _MPCHAR_STAT_GET_INT(MP_STAT_NUM_TIMES_DRUNK, -1, 0);
			num2 = ((num / 10) + 1) * 10;
		
			if (num + 1 >= num2)
				func_167(num2);
		
			_MPCHAR_STAT_SET_INT(MP_STAT_NUM_TIMES_DRUNK, num + 1, -1, 1, false);
			bLocal_65 = true;
		}
		else
		{
			num3 = 0;
			num4 = 0;
			num5 = 0;
			unk_0xDF7F16323520B858(joaat("SP0_SP_NUM_TIMES_DRUNK"), &num3, -1);
			unk_0xDF7F16323520B858(joaat("SP1_SP_NUM_TIMES_DRUNK"), &num4, -1);
			unk_0xDF7F16323520B858(joaat("SP2_SP_NUM_TIMES_DRUNK"), &num5, -1);
			num6 = num3 + num4 + num5;
			num7 = ((num6 / 10) + 1) * 10;
		
			if (num6 + 1 >= num7)
				func_167(num7);
		
			switch (_GET_CURRENT_PLAYER_CHARACTER())
			{
				case CHAR_MICHAEL:
					unk_0x1164A75E490C27B6(joaat("SP0_SP_NUM_TIMES_DRUNK"), num3 + 1, 1);
					break;
			
				case CHAR_FRANKLIN:
					unk_0x1164A75E490C27B6(joaat("SP1_SP_NUM_TIMES_DRUNK"), num4 + 1, 1);
					break;
			
				case CHAR_TREVOR:
					unk_0x1164A75E490C27B6(joaat("SP2_SP_NUM_TIMES_DRUNK"), num5 + 1, 1);
					break;
			}
		}
	
		iLocal_60.f_1 = 1;
		return;
	}

	iLocal_60.f_1 = 12;

	if (iLocal_55 == -1)
	{
		Global_44232[iLocal_64 /*5*/].f_2 = 0;
	}
	else if (Global_44232[iLocal_64 /*5*/].f_3 < 3 && Global_44232[iLocal_64 /*5*/].f_3 != 0)
	{
		Global_44232[iLocal_64 /*5*/].f_2 = -1;
	}
	else
	{
		num8 = iLocal_55 - SYSTEM::TIMERA();
	
		if (num8 <= 0)
			num8 = 0;
	
		num8 = (num8 / 1000) + 1;
		Global_44232[iLocal_64 /*5*/].f_2 = 0;
	
		if (num8 < 30)
			Global_44232[iLocal_64 /*5*/].f_2 = 2;
	
		if (num8 < 10)
			Global_44232[iLocal_64 /*5*/].f_2 = 1;
	}

	return;
}

void func_167(int iParam0) // Position - 0x579A
{
	int num;

	num = func_168(81);
	Global_2645068[num /*83*/] = 81;
	Global_2645068[num /*83*/].f_17 = iParam0;
	TEXT_LABEL_ASSIGN_STRING(&Global_2645068[num /*83*/].f_18[0 /*16*/], "", 64);
	return;
}

int func_168(int iParam0) // Position - 0x57D1
{
	int num;
	int i;

	num = 19;

	for (i = 0; i <= 19; i = i + 1)
	{
		if (Global_2645068[i /*83*/] == iParam0)
		{
			num = i;
			i = 20;
		}
		else if (Global_2645068[i /*83*/] == 0)
		{
			num = i;
			i = 20;
		}
	}

	return num;
}

void func_169() // Position - 0x581E
{
	return;
}

void func_170() // Position - 0x5826
{
	iLocal_55 = uLocal_43.f_2;
	iLocal_55.f_1 = uLocal_43.f_3;
	iLocal_55.f_2 = -2;
	iLocal_55.f_3 = -2;
	return;
}

void func_171(int iParam0, int iParam1, int iParam2) // Position - 0x584A
{
	func_172(iParam0, iParam1, iParam2, 0, 0, 1);
	return;
}

void func_172(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) // Position - 0x585F
{
	int num;

	if (iParam0 == -1)
		return;

	if (iParam1 == -1)
		return;

	if (iParam2 == 6)
		return;

	if (func_174(iParam0, iParam1, iParam2))
		return;

	num = func_173();

	if (num == -1)
		return;

	Global_44313[num /*6*/] = iParam0;
	Global_44313[num /*6*/].f_1 = iParam1;
	Global_44313[num /*6*/].f_2 = iParam2;
	Global_44313[num /*6*/].f_3 = iParam3;
	Global_44313[num /*6*/].f_4 = iParam4;
	Global_44313[num /*6*/].f_5 = iParam5;
	return;
}

int func_173() // Position - 0x58E1
{
	int i;

	i = 0;

	for (i = 0; i < 16; i = i + 1)
	{
		if (Global_44313[i /*6*/].f_2 == 6)
			return i;
	}

	return -1;
}

BOOL func_174(int iParam0, int iParam1, int iParam2) // Position - 0x5912
{
	if (func_175(iParam0, iParam1, iParam2) == -1)
		return false;

	return true;
}

int func_175(int iParam0, int iParam1, int iParam2) // Position - 0x592D
{
	int i;

	i = 0;

	for (i = 0; i < 16; i = i + 1)
	{
		if (iParam2 == Global_44313[i /*6*/].f_2)
			if (iParam0 == Global_44313[i /*6*/])
				if (iParam1 == Global_44313[i /*6*/].f_1)
					return i;
	}

	return -1;
}

void func_176() // Position - 0x5979
{
	eCharacter character;

	bLocal_50 = false;

	if (uLocal_43.f_1 == unk_0x4A8C381C258A124D())
	{
		bLocal_50 = true;
		Global_44445 = 1;
		Global_44447 = Global_44447 + 1;
	}

	if (!unk_0x1C2F771CDC87A3A5(uLocal_43.f_1, 0))
	{
		character = _GET_PLAYER_CHARACTER_FROM_PED(uLocal_43.f_1);
	
		switch (character)
		{
			case CHAR_AMANDA:
				unk_0x397CF4F4C8B17365(uLocal_43.f_1, "AMANDA_DRUNK");
				break;
		
			case CHAR_LAMAR:
				unk_0x397CF4F4C8B17365(uLocal_43.f_1, "LAMAR_DRUNK");
				break;
		}
	}

	return;
}

void func_177() // Position - 0x59E6
{
	if (!(iLocal_48 == -1))
		return;

	iLocal_48 = func_117(uLocal_43.f_1);

	if (iLocal_48 == -1)
		return;

	iLocal_64 = func_116(iLocal_48);
	return;
}

void func_178() // Position - 0x5A14
{
	eCharacter character;

	if (!func_34(0) && !func_34(3))
	{
		if (!unk_0x1C2F771CDC87A3A5(uLocal_43.f_1, 0))
		{
			character = _GET_PLAYER_CHARACTER_FROM_PED(uLocal_43.f_1);
		
			if (Global_44232[iLocal_64 /*5*/].f_4 > 0)
			{
				switch (character)
				{
					case CHAR_MICHAEL:
						func_180(uLocal_43.f_1, "POST_STONED", 24);
						break;
				
					case CHAR_FRANKLIN:
						func_180(uLocal_43.f_1, "POST_STONED", 24);
						break;
				
					case CHAR_TREVOR:
						func_180(uLocal_43.f_1, "POST_STONED", 24);
						break;
				}
			}
		
			switch (character)
			{
				case CHAR_AMANDA:
					unk_0x397CF4F4C8B17365(uLocal_43.f_1, "AMANDA_NORMAL");
					break;
			
				case CHAR_LAMAR:
					unk_0x397CF4F4C8B17365(uLocal_43.f_1, "LAMAR_NORMAL");
					break;
			}
		}
	}

	func_149();

	if (bLocal_50)
		Global_44445 = 0;

	func_179();
	unk_0x268BE77F77533D03(func_113(0));
	unk_0x268BE77F77533D03(func_113(2));
	unk_0x268BE77F77533D03(func_113(1));
	Global_1944403 = 0;

	if (unk_0x486FF5D06E9659F1(joaat("appemail")) > 0)
		func_41(0);

	unk_0xBBC29EBE6E1A48FA();
	return;
}

void func_179() // Position - 0x5B18
{
	var unk;
	var unk2;
	var unk3;

	if (unk_0x1C2F771CDC87A3A5(uLocal_43.f_1, 0))
		return;

	unk = uLocal_43.f_1;

	if (unk_0x7F420695E3F776FB(uLocal_43.f_1, 0))
	{
		unk2 = unk_0x6EF03BE64E058E2F(uLocal_43.f_1, 0);
		unk3 = unk_0xFD5C5BBD1FE92BB7(unk2, -1, 0);
	
		if (!(uLocal_43.f_1 == unk3))
			return;
	
		unk = unk2;
	}
	else if (!(unk_0x3B5989D5DB08A155() == 4) || !(unk_0x4A8C381C258A124D() == uLocal_43.f_1))
	{
		return;
	}

	fLocal_53 = 0f;
	func_142(unk, 0f);
	return;
}

void func_180(var uParam0, char* sParam1, int iParam2) // Position - 0x5B92
{
	unk_0x04C016145CE6A18B(uParam0, sParam1, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(iParam2), 1);
	return;
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(int iParam0) // Position - 0x5BA9
{
	char* str;

	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
	
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
	
		case 2:
			return "SPEECH_PARAMS_BEAT";
	
		case 3:
			return "SPEECH_PARAMS_FORCE";
	
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
	
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
	
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
	
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
	
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
	
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
	
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
	
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
	
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
	
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
	
		case 14:
			return "SPEECH_PARAMS_HELI";
	
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
	
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
	
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
	
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
	
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
	
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
	
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
	
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
	
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
	
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
	
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
	
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
	
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
	
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
	
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
	
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
	
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
	
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
	
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
	
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
	
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
	
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
	
		default:
		
	}

	str = 0;
	return str;
}

