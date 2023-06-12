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
	int iLocal_21 = 0;
	float fLocal_22 = 0f;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
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
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	var uLocal_57 = 0;
	eCharacter echLocal_58 = CHAR_MICHAEL;
	BOOL bLocal_59 = 0;
	BOOL bLocal_60 = 0;
	BOOL bLocal_61 = 0;
	eCharacter echLocal_62 = CHAR_MICHAEL;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	BOOL bLocal_66 = 0;
	BOOL bLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	BOOL bLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	BOOL bLocal_80 = 0;
	BOOL bLocal_81 = 0;
	BOOL bLocal_82 = 0;
	int iLocal_83 = 0;
	var uLocal_84 = 0;
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
	iLocal_21 = 3;
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	iLocal_53 = 2;
	unk_0x51CC1333A10C4E09();

	if (unk_0x96CFB880BAC634CE(32))
		unk_0xBBC29EBE6E1A48FA();

	while (true)
	{
		func_104();
	
		switch (iLocal_54)
		{
			case 0:
				func_99();
				break;
		
			case 1:
				func_90();
				func_2();
				Global_97965 = false;
				break;
		
			case 2:
				func_1();
				break;
		}
	
		SYSTEM::WAIT(0);
	}

	return;
}

void func_1() // Position - 0xCC
{
	iLocal_54 = 0;
	return;
}

void func_2() // Position - 0xD7
{
	eCharacter character;
	BOOL flag;
	int i;
	int num;
	int num2;
	int num3;
	var unk;
	eMPStat stat;
	int num4;
	var unk2;
	var unk3;
	int num5;
	int j;
	BOOL flag2;
	int num6;
	int num7;
	BOOL flag3;

	if (bLocal_60)
		bLocal_60 = false;
	else
		iLocal_55 = iLocal_55 + 1;

	bLocal_59 = false;

	if (unk_0x76CD105BCAC6EB9F())
		character = CHAR_MULTIPLAYER;
	else
		character = _GET_CURRENT_PLAYER_CHARACTER();

	if (character != echLocal_58)
	{
		echLocal_58 = character;
		bLocal_59 = true;
		bLocal_66 = false;
		bLocal_67 = false;
		bLocal_74 = false;
		bLocal_80 = false;
	}

	if (echLocal_58 == _CHAR_NULL)
		return;

	flag = false;

	if (iLocal_55 == 6 && func_84(64) || iLocal_55 == 5 && unk_0x486FF5D06E9659F1(joaat("pilot_school")) > 0)
	{
		flag = true;
		bLocal_60 = true;
	}

	func_78();

	if (Global_97963 || Global_97964 && !func_75(0))
	{
		if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
		{
			for (i = 0; i < 8; i = i + 1)
			{
				func_74(echLocal_58, i);
			}
		
			Global_97963 = false;
		}
	}

	if (!flag)
	{
		if (unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()) || !unk_0x76CD105BCAC6EB9F() && !func_73(echLocal_58) || unk_0x3555462DB47B7AB1() || func_72() || unk_0xFD216000DC314A92() || unk_0x15CCE8886267624F() || !unk_0xE916D57851F785AB(unk_0x259BE71D8A81D4FA()) || Global_78556 || Global_97965 || bLocal_61)
		{
			bLocal_82 = true;
			iLocal_83 = unk_0x1DD05E817C89C737();
		
			if (unk_0x76CD105BCAC6EB9F())
				uLocal_84 = unk_0x7E3F74F641EE6B27();
		
			return;
		}
	
		if (bLocal_82)
			if (!unk_0x76CD105BCAC6EB9F() && unk_0x1DD05E817C89C737() - iLocal_83 > 3000 || unk_0x76CD105BCAC6EB9F() && unk_0xDBA141080166EAA2(unk_0x7E3F74F641EE6B27(), unk_0xAD5B43C219C4CB92(uLocal_84, 3000)))
				bLocal_82 = false;
			else
				return;
	}

	if (!unk_0x76CD105BCAC6EB9F() && unk_0x1DD05E817C89C737() - iLocal_56 > 2000 || unk_0x76CD105BCAC6EB9F() && unk_0xDBA141080166EAA2(unk_0x7E3F74F641EE6B27(), unk_0xAD5B43C219C4CB92(uLocal_57, 2000)) || bLocal_59)
	{
		if (iLocal_55 >= 8)
		{
			iLocal_55 = 0;
			iLocal_56 = unk_0x1DD05E817C89C737();
		
			if (unk_0x76CD105BCAC6EB9F())
				uLocal_57 = unk_0x7E3F74F641EE6B27();
		}
	
		num5 = 1;
	
		if (bLocal_59)
			num5 = 8;
	
		for (j = 0; j < num5; j = j + 1)
		{
			flag2 = true;
		
			if (bLocal_59)
				num4 = j;
			else
				num4 = iLocal_55;
		
			func_71(echLocal_58, num4, &unk, &stat);
		
			if (unk_0x76CD105BCAC6EB9F())
				num = _MPCHAR_STAT_GET_INT(stat, -1, 0);
			else if (num4 == 0)
				num = Global_113648.f_2365.f_539.f_2387[echLocal_58];
			else
				unk_0xDF7F16323520B858(unk, &num, -1);
		
			num3 = num;
			num = func_69(num, 0, 100);
		
			if (func_56(echLocal_58, num4, num, &num2))
			{
				if (unk_0x76CD105BCAC6EB9F())
				{
					_MPCHAR_STAT_SET_INT(stat, num2, -1, 1, false);
				}
				else if (num4 == 0)
				{
					if (Global_113648.f_2365.f_539.f_2387[echLocal_58] == 0)
						flag2 = false;
				
					Global_113648.f_2365.f_539.f_2387[echLocal_58] = num2;
				}
				else
				{
					unk_0x1164A75E490C27B6(unk, num2, 1);
				}
			
				if (num2 > func_53(echLocal_58, num4, -1))
				{
					if (unk_0x76CD105BCAC6EB9F())
						if (unk_0x834C960822A4683F() && IS_BIT_SET(Global_4718592.f_39, 19))
							flag2 = false;
					else if (!Global_113648.f_9087 && !_IS_MISSION_REPEAT_ACTIVE(false) || !IS_BIT_SET(Global_113648.f_9087.f_2[27 /*3*/], 2))
						flag2 = false;
				
					num6 = num2;
					num7 = num6 - (num6 % func_51(echLocal_58, num4));
				
					if (num6 % func_51(echLocal_58, num4) >= 0)
						num7 = num7 + func_51(echLocal_58, num4);
				
					if (num6 >= num7)
						num6 = num7;
					else
						num6 = num7 - func_51(echLocal_58, num4);
				
					if (num2 > num6)
						flag2 = false;
				
					if (func_46())
						flag2 = false;
				
					if (flag2)
					{
						if (!bLocal_59)
						{
							if (unk_0x76CD105BCAC6EB9F())
							{
								if (func_45(117, -1) == 0)
								{
									if (!unk_0x4C705AAF75363287() && func_9())
									{
										_DISPLAY_HELP_TEXT("STAT_HELP2" /*~s~Character stats represent skill levels for your character. Increase individual stats by performing that activity throughout the game.*/, -1);
										func_4(117, 1, -1, 1);
									}
								}
							}
						
							bLocal_61 = true;
							iLocal_64 = num2 - num;
							iLocal_64 = iLocal_64 + (num % func_51(echLocal_58, num4));
							iLocal_65 = num2;
							echLocal_62 = echLocal_58;
							iLocal_63 = num4;
						}
					}
				
					if (num2 >= 100)
					{
						if (func_3(echLocal_58, num4, &unk2))
						{
							if (echLocal_58 == CHAR_MICHAEL)
							{
								unk_0xDF7F16323520B858(joaat("SP0_TOTAL_PLAYING_TIME"), &unk3, -1);
								unk_0x1164A75E490C27B6(unk2, unk3, 1);
							}
							else if (echLocal_58 == CHAR_FRANKLIN)
							{
								unk_0xDF7F16323520B858(joaat("SP1_TOTAL_PLAYING_TIME"), &unk3, -1);
								unk_0x1164A75E490C27B6(unk2, unk3, 1);
							}
							else if (echLocal_58 == CHAR_TREVOR)
							{
								unk_0xDF7F16323520B858(joaat("SP2_TOTAL_PLAYING_TIME"), &unk3, -1);
								unk_0x1164A75E490C27B6(unk2, unk3, 1);
							}
							else
							{
								echLocal_58 == CHAR_MULTIPLAYER;
							}
						}
					}
				}
			
				func_74(echLocal_58, num4);
			}
			else if (num2 < num3)
			{
				flag3 = true;
			
				if (unk_0x76CD105BCAC6EB9F())
				{
					_MPCHAR_STAT_SET_INT(stat, num2, -1, 1, false);
				}
				else if (num4 == 0)
				{
					Global_113648.f_2365.f_539.f_2387[echLocal_58] = num2;
					flag3 = false;
				}
				else
				{
					unk_0x1164A75E490C27B6(unk, num2, 1);
				}
			
				if (flag3)
					func_74(echLocal_58, num4);
			}
		}
	}
	else
	{
		bLocal_60 = true;
	}

	return;
}

BOOL func_3(eCharacter echParam0, int iParam1, var uParam2) // Position - 0x5CD
{
	*uParam2 = joaat("LAST_PLAYING_TIME");

	switch (echParam0)
	{
		case CHAR_MICHAEL:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("SP0_SPECIAL_ABILITY_MAXED");
					break;
			
				case 1:
					*uParam2 = joaat("SP0_STAMINA_MAXED");
					break;
			
				case 3:
					*uParam2 = joaat("SP0_LUNG_CAPACITY_MAXED");
					break;
			
				case 2:
					*uParam2 = joaat("SP0_STRENGTH_MAXED");
					break;
			
				case 4:
					*uParam2 = joaat("SP0_WHEELIE_ABILITY_MAXED");
					break;
			
				case 5:
					*uParam2 = joaat("SP0_FLYING_ABILITY_MAXED");
					break;
			
				case 6:
					*uParam2 = joaat("SP0_SHOOTING_ABILITY_MAXED");
					break;
			
				case 7:
					*uParam2 = joaat("SP0_STEALTH_ABILITY_MAXED");
					break;
			}
			break;
	
		case CHAR_FRANKLIN:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("SP1_SPECIAL_ABILITY_MAXED");
					break;
			
				case 1:
					*uParam2 = joaat("SP1_STAMINA_MAXED");
					break;
			
				case 3:
					*uParam2 = joaat("SP1_LUNG_CAPACITY_MAXED");
					break;
			
				case 2:
					*uParam2 = joaat("SP1_STRENGTH_MAXED");
					break;
			
				case 4:
					*uParam2 = joaat("SP1_WHEELIE_ABILITY_MAXED");
					break;
			
				case 5:
					*uParam2 = joaat("SP1_FLYING_ABILITY_MAXED");
					break;
			
				case 6:
					*uParam2 = joaat("SP1_SHOOTING_ABILITY_MAXED");
					break;
			
				case 7:
					*uParam2 = joaat("SP1_STEALTH_ABILITY_MAXED");
					break;
			}
			break;
	
		case CHAR_TREVOR:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("SP2_SPECIAL_ABILITY_MAXED");
					break;
			
				case 1:
					*uParam2 = joaat("SP2_STAMINA_MAXED");
					break;
			
				case 3:
					*uParam2 = joaat("SP2_LUNG_CAPACITY_MAXED");
					break;
			
				case 2:
					*uParam2 = joaat("SP2_STRENGTH_MAXED");
					break;
			
				case 4:
					*uParam2 = joaat("SP2_WHEELIE_ABILITY_MAXED");
					break;
			
				case 5:
					*uParam2 = joaat("SP2_FLYING_ABILITY_MAXED");
					break;
			
				case 6:
					*uParam2 = joaat("SP2_SHOOTING_ABILITY_MAXED");
					break;
			
				case 7:
					*uParam2 = joaat("SP2_STEALTH_ABILITY_MAXED");
					break;
			}
			break;
	}

	return *uParam2 != joaat("LAST_PLAYING_TIME");
}

void func_4(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0x7B5
{
	int num;

	if (func_7())
	{
		num = Global_2848282[iParam0 /*3*/][func_5(iParam2)];
	
		if (num != 0)
			unk_0xF1D0B0CE940F620D(num, iParam1, iParam3);
	}

	return;
}

int func_5(int iParam0) // Position - 0x7E7
{
	int num;
	int num2;

	num = iParam0;

	if (num == -1)
	{
		num2 = func_6();
	
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

int func_6() // Position - 0x81B
{
	return Global_1574918;
}

BOOL func_7() // Position - 0x827
{
	return true;
}

void _DISPLAY_HELP_TEXT(char* text, int iParam1) // Position - 0x834
{
	unk_0xAC98CA65AD9A3215(text);
	unk_0x5E01B6B1F460FE3F(0, 0, 1, iParam1);
	return;
}

BOOL func_9() // Position - 0x84B
{
	var unk;

	unk = unk_0x8034325BF6D6E41F();

	if (Global_1935365 == unk)
	{
		return Global_1935366;
	}
	else
	{
		Global_1935365 = unk;
		Global_1935366 = false;
	}

	if (unk_0x76CD105BCAC6EB9F())
		if (unk_0x834C960822A4683F() && IS_BIT_SET(Global_4718592.f_39, 19))
			return false;

	if (unk_0xC5D15A335232A15D() && unk_0xBE259DBA45F2996E() && !func_44(unk_0x259BE71D8A81D4FA()))
		return false;

	if (Global_1935367 == 1)
		return false;

	if (Global_1935176 == 1)
		return false;

	if (func_43())
		return false;

	if (unk_0xB2E86D4871B30979())
		return false;

	if (Global_1836583 == 1)
		return false;

	if (unk_0xF6D8C7059C3C2495())
		return false;

	if (Global_1057410)
		return false;

	if (IS_BIT_SET(Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_861, 16))
		return false;

	if (_IS_FMMC_ACTIVE())
		return false;

	if (func_41())
		return false;

	if (_IS_EXCLUSIVE_CONTENT_UNLOCKED())
	{
		if (!func_41())
		{
			if (!func_39(3, -1))
			{
				if (func_37(&Global_2696997, 300000, false) == 1)
				{
					_STOPWATCH_DESTROY(&Global_2696995);
					func_34(3, -1);
				}
				else if (func_37(&Global_2696995, 7000, false) == 0)
				{
					return false;
				}
			}
		}
		else
		{
			return false;
		}
	}

	if (func_33())
		return false;

	if (func_32())
		return false;

	if (func_30())
		return false;

	if (func_29())
		return false;

	if (func_28())
		return false;

	if (func_27())
		return false;

	if (unk_0x0721B5D4CF3ACD02())
		return false;

	if (unk_0x4D9174D8796EA622())
		return false;

	if (unk_0x5EA7A06A1491D450())
		if (func_26(unk_0x4A8C381C258A124D()) == joaat("WEAPON_SNIPERRIFLE") || func_26(unk_0x4A8C381C258A124D()) == joaat("WEAPON_HEAVYSNIPER"))
			return false;

	if (unk_0x15CCE8886267624F())
		return false;

	if (func_25(8, -1))
		return false;

	if (func_24(12, -1))
		return false;

	if (unk_0x7B035E8A1D320F1B(19))
		return false;

	if (func_23())
		return false;

	if (func_22())
		return false;

	if (IS_BIT_SET(Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_861, 2))
		return false;

	if (Global_1836374)
		return false;

	if (Global_1836378)
		return false;

	if (Global_1836380)
		return false;

	if (Global_2672505.f_3694.f_39)
		return false;

	if (func_21(0))
		return false;

	if (func_20())
		return false;

	if (Global_2793046.f_4062)
		return false;

	if (Global_2672505.f_3560)
		return false;

	if (!_NETWORK_IS_PLAYER_VALID(unk_0x259BE71D8A81D4FA(), true, false))
		return false;

	if (func_18(unk_0x259BE71D8A81D4FA()))
		return false;

	if (Global_2672505.f_3694.f_39 == true)
		return false;

	if (Global_2684801.f_2846.f_26 == 1)
		return false;

	if (func_17(true))
		return false;

	if (func_15())
		return false;

	if (unk_0x7B035E8A1D320F1B(16))
		return false;

	if (func_14())
		return false;

	if (func_13())
		return false;

	if (unk_0x3273F980CC5E02CD())
		if (_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("FHU_HELP3" /*Shout through your headset to make the store clerk fill the bag with cash faster.*/))
			return false;

	if (IS_BIT_SET(Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_861, 6))
		return false;

	if (func_10(unk_0x259BE71D8A81D4FA()))
		return false;

	Global_1935366 = true;
	return true;
}

BOOL func_10(Player plParam0) // Position - 0xB9B
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		return IS_BIT_SET(Global_1853910[plParam0 /*862*/].f_267.f_365, 26);

	return false;
}

Player _INVALID_PLAYER_INDEX() // Position - 0xBC2
{
	return -1;
}

BOOL _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(char* message) // Position - 0xBCB
{
	unk_0x39DCBE5519BD783A(message);
	return unk_0x7EBCD400E7DE179C(0);
}

BOOL func_13() // Position - 0xBDE
{
	return Global_2672505.f_1685.f_701 != 0;
}

BOOL func_14() // Position - 0xBF2
{
	return Global_2672505.f_2838.f_582;
}

BOOL func_15() // Position - 0xC04
{
	return func_16();
}

BOOL func_16() // Position - 0xC10
{
	return Global_1649046.f_40 == 3;
}

BOOL func_17(BOOL bParam0) // Position - 0xC20
{
	if (bParam0)
		return Global_23131.f_4 && Global_23131.f_104 == 4;

	return Global_23131.f_4;
}

BOOL func_18(int iParam0) // Position - 0xC49
{
	return IS_BIT_SET(Global_1890444[iParam0 /*129*/].f_14, 0);
}

BOOL _NETWORK_IS_PLAYER_VALID(int player, BOOL bIsPlaying, BOOL bUnk) // Position - 0xC5D
{
	int num;

	num = player;

	if (num != -1)
	{
		if (unk_0x762604C40829DB72(player))
		{
			if (bIsPlaying)
				if (!unk_0x75EAB09F5E974116(player))
					return false;
		
			if (bUnk)
				if (num == Global_2672505.f_3)
					return Global_2672505.f_2;
				else if (Global_2657589[num /*466*/] != 4)
					return false;
		
			return true;
		}
	}

	return false;
}

BOOL func_20() // Position - 0xCBD
{
	if (unk_0x486FF5D06E9659F1(joaat("appcamera")) > 0)
		return true;

	return false;
}

BOOL func_21(int iParam0) // Position - 0xCDA
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

BOOL func_22() // Position - 0xD31
{
	return Global_1653913.f_112;
}

BOOL func_23() // Position - 0xD3F
{
	return Global_2672505.f_2514[0 /*80*/].f_1 != 0;
}

BOOL func_24(int iParam0, int iParam1) // Position - 0xD55
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				if (Global_1653913.f_137[iParam1])
					return true;
			
				if (Global_1653913.f_170[iParam1])
					return true;
			}
			break;
	
		default:
			if (IS_BIT_SET(Global_1653913.f_1046, iParam0))
				return true;
		
			if (IS_BIT_SET(Global_1653913.f_1047, iParam0))
				return true;
			break;
	}

	return false;
}

BOOL func_25(int iParam0, int iParam1) // Position - 0xDBB
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

int func_26(var uParam0) // Position - 0xDF3
{
	int unk;

	unk_0x23B29877D0BE9547(uParam0, &unk, 1);
	return unk;
}

BOOL func_27() // Position - 0xE07
{
	return Global_2683864.f_692;
}

BOOL func_28() // Position - 0xE16
{
	return IS_BIT_SET(Global_1048576.f_10, 13);
}

BOOL func_29() // Position - 0xE27
{
	return Global_2683864.f_691;
}

BOOL func_30() // Position - 0xE36
{
	if (func_31() == 1 || func_31() == 4)
		return true;

	return false;
}

int func_31() // Position - 0xE58
{
	return Global_1574632.f_18;
}

BOOL func_32() // Position - 0xE66
{
	if (func_31() == 3 || func_31() == 2)
		return true;

	return false;
}

BOOL func_33() // Position - 0xE88
{
	if (unk_0x486FF5D06E9659F1(joaat("maintransition")) > 0)
		return true;

	return false;
}

void func_34(int iParam0, int iParam1) // Position - 0xEA2
{
	int num;
	int num2;

	if (iParam1 == -1)
		iParam1 = func_6();

	Global_1665487 = 0;

	if (unk_0x76CA59C648318506() == 0)
		return;

	switch (iParam0)
	{
		case 0:
			unk_0x1A169A00A9C3A74E(0, iParam1);
			num2 = func_35(iParam1);
			num = unk_0x38640D2193CB547F(num2);
			break;
	
		default:
			num2 = func_35(iParam1);
			num = unk_0x38640D2193CB547F(num2);
		
			if (!IS_BIT_SET(num, iParam0))
			{
				unk_0x0B0C9A0F9AAEB7F0(&num, iParam0);
				unk_0x1A169A00A9C3A74E(num, iParam1);
			}
			break;
	}

	switch (iParam0)
	{
		case 0:
			func_4(120, 0, iParam1, 1);
			func_4(124, 0, iParam1, 1);
			func_4(115, 0, iParam1, 1);
			func_4(119, 0, iParam1, 1);
			func_4(121, 0, iParam1, 1);
			func_4(122, 0, iParam1, 1);
			func_4(125, 0, iParam1, 1);
			_MPCHAR_STAT_SET_INT(MP_STAT_FM_CUT_DONE, 0, iParam1, 1, false);
			_MPCHAR_STAT_SET_INT(MP_STAT_FM_CUT_DONE_2, 0, iParam1, 1, false);
			break;
	}

	return;
}

int func_35(int iParam0) // Position - 0xF8A
{
	int num;

	if (iParam0 == -1)
		iParam0 = func_6();

	switch (iParam0)
	{
		case 0:
			num = 914;
			break;
	
		case 1:
			num = 915;
			break;
	
		case 2:
			num = 916;
			break;
	
		case 3:
			num = 917;
			break;
	
		case 4:
			num = 918;
			break;
	}

	return num;
}

void _STOPWATCH_DESTROY(var uParam0) // Position - 0xFED
{
	uParam0->f_1 = 0;
	return;
}

int func_37(var uParam0, int iParam1, BOOL bParam2) // Position - 0xFFA
{
	if (iParam1 == -1)
		return 1;

	_STOPWATCH_INITIALIZE(uParam0, bParam2, false);

	if (unk_0x76CD105BCAC6EB9F() && !bParam2)
	{
		if (unk_0x510D0699BE9C6D06(unk_0x775142054EC39277(unk_0x7E3F74F641EE6B27(), *uParam0)) >= iParam1)
		{
			_STOPWATCH_DESTROY(uParam0);
			return 1;
		}
	}
	else if (unk_0x510D0699BE9C6D06(unk_0x775142054EC39277(unk_0x1DD05E817C89C737(), *uParam0)) >= iParam1)
	{
		_STOPWATCH_DESTROY(uParam0);
		return 1;
	}

	return 0;
}

void _STOPWATCH_INITIALIZE(var pStopwatch, BOOL useLocalTimer, BOOL useAccurateTime) // Position - 0x1064
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

BOOL func_39(int iParam0, int iParam1) // Position - 0x10A9
{
	int num;
	int num2;

	if (iParam1 == -1)
		iParam1 = func_6();

	num = func_35(iParam1);
	num2 = unk_0x38640D2193CB547F(num);
	return IS_BIT_SET(num2, iParam0);
}

BOOL _IS_EXCLUSIVE_CONTENT_UNLOCKED() // Position - 0x10D2
{
	var unk;

	if (Global_152523 == 2)
		return true;
	else if (Global_152523 == 3)
		return false;

	if (unk_0x5F9F81C08516558E())
	{
		if (unk_0x1595D1B690089487())
		{
			if (unk_0x5BC93955B6EEBC0B())
			{
				unk_0xDF7F16323520B858(joaat("SP_UNLOCK_EXCLUS_CONTENT"), &unk, -1);
				unk_0x0B0C9A0F9AAEB7F0(&unk, 2);
				unk_0x0B0C9A0F9AAEB7F0(&unk, 4);
				unk_0x0B0C9A0F9AAEB7F0(&unk, 6);
				unk_0x0B0C9A0F9AAEB7F0(&Global_25, 2);
				unk_0x0B0C9A0F9AAEB7F0(&Global_25, 4);
				unk_0x0B0C9A0F9AAEB7F0(&Global_25, 6);
				unk_0x1164A75E490C27B6(joaat("SP_UNLOCK_EXCLUS_CONTENT"), unk, 1);
			
				if (unk_0x76CA59C648318506())
				{
					unk = unk_0x38640D2193CB547F(866);
					unk_0x0B0C9A0F9AAEB7F0(&unk, 0);
					unk_0xED11291F7127888E(unk);
				}
			
				return true;
			}
		}
	}

	if (unk_0x76CA59C648318506())
		if (IS_BIT_SET(unk_0x38640D2193CB547F(866), 0))
			return true;

	return false;
}

BOOL func_41() // Position - 0x118A
{
	return Global_1575060;
}

BOOL _IS_FMMC_ACTIVE() // Position - 0x1196
{
	return Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_192 != 0;
}

BOOL func_43() // Position - 0x11AD
{
	return Global_2764907;
}

BOOL func_44(int iParam0) // Position - 0x11B9
{
	return IS_BIT_SET(Global_2657589[iParam0 /*466*/].f_321.f_3, 13);
}

int func_45(int iParam0, int iParam1) // Position - 0x11D2
{
	int num;
	int num2;

	num = Global_2848282[iParam0 /*3*/][func_5(iParam1)];

	if (unk_0xF249567F2E83E093(num, &num2, -1))
		return num2;

	return 0;
}

BOOL func_46() // Position - 0x11FE
{
	if (!func_49(true))
		return false;

	if (func_47())
		return false;

	return Global_1947720;
}

BOOL func_47() // Position - 0x1222
{
	return _IS_PLAYER_BOSS_OF_ORGANIZATION(unk_0x259BE71D8A81D4FA());
}

BOOL _IS_PLAYER_BOSS_OF_ORGANIZATION(Player plParam0) // Position - 0x1232
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		if (Global_1894573[plParam0 /*608*/].f_10 != _INVALID_PLAYER_INDEX())
			return Global_1894573[plParam0 /*608*/].f_10 == plParam0;

	return false;
}

BOOL func_49(BOOL bParam0) // Position - 0x1267
{
	return _IS_PLAYER_IN_AN_ORGANIZATION(unk_0x259BE71D8A81D4FA(), bParam0);
}

BOOL _IS_PLAYER_IN_AN_ORGANIZATION(Player plParam0, BOOL bCanBeBoss) // Position - 0x1279
{
	if (!bCanBeBoss)
		if (_IS_PLAYER_BOSS_OF_ORGANIZATION(plParam0))
			return false;

	return Global_1894573[plParam0 /*608*/].f_10 != _INVALID_PLAYER_INDEX();
}

int func_51(eCharacter echParam0, int iParam1) // Position - 0x12A4
{
	switch (echParam0)
	{
		case CHAR_MICHAEL:
			switch (iParam1)
			{
				case 0:
					return 20;
			
				case 1:
					return 20;
			
				case 3:
					return 20;
			
				case 2:
					return 20;
			
				case 4:
					return 20;
			
				case 5:
					return 20;
			
				case 6:
					return 20;
			
				case 7:
					return 20;
			}
			break;
	
		case CHAR_FRANKLIN:
			switch (iParam1)
			{
				case 0:
					return 20;
			
				case 1:
					return 20;
			
				case 3:
					return 20;
			
				case 2:
					return 20;
			
				case 4:
					return 20;
			
				case 5:
					return 20;
			
				case 6:
					return 20;
			
				case 7:
					return 20;
			}
			break;
	
		case CHAR_TREVOR:
			switch (iParam1)
			{
				case 0:
					return 20;
			
				case 1:
					return 20;
			
				case 3:
					return 20;
			
				case 2:
					return 20;
			
				case 4:
					return 20;
			
				case 5:
					return 20;
			
				case 6:
					return 20;
			
				case 7:
					return 20;
			}
			break;
	
		case CHAR_MULTIPLAYER:
			switch (iParam1)
			{
				case 0:
					return 20;
			
				case 1:
					return 20;
			
				case 3:
					return 20;
			
				case 2:
					return 20;
			
				case 4:
					return 20;
			
				case 5:
					return 20;
			
				case 6:
					return 20;
			
				case 7:
					return 20;
			}
			break;
	}

	return 1;
}

BOOL _IS_MISSION_REPEAT_ACTIVE(BOOL bExcludeBenchmark) // Position - 0x14B4
{
	if (!bExcludeBenchmark && unk_0x486FF5D06E9659F1(joaat("benchmark")) > 0)
		return true;

	return IS_BIT_SET(Global_78807, 0);
}

int func_53(eCharacter echParam0, int iParam1, int iParam2) // Position - 0x14DC
{
	if (!unk_0x76CD105BCAC6EB9F())
		if (func_54(14))
			return 100;

	switch (echParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 47;
			
				case 3:
					return 22;
			
				case 2:
					return 21;
			
				case 4:
					return 54;
			
				case 5:
					return 31;
			
				case 6:
					return 79;
			
				case 7:
					return 81;
			}
			break;
	
		case 1:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 51;
			
				case 3:
					return 46;
			
				case 2:
					return 49;
			
				case 4:
					return 71;
			
				case 5:
					return 19;
			
				case 6:
					return 24;
			
				case 7:
					return 21;
			}
			break;
	
		case 2:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 23;
			
				case 3:
					return 28;
			
				case 2:
					return 79;
			
				case 4:
					return 31;
			
				case 5:
					return 82;
			
				case 6:
					return 69;
			
				case 7:
					return 49;
			}
			break;
	
		case 3:
			switch (iParam1)
			{
				case 1:
					return _MPCHAR_STAT_GET_INT(MP_STAT_CHAR_CREATOR_STAMINA, iParam2, 0);
			
				case 3:
					return _MPCHAR_STAT_GET_INT(MP_STAT_CHAR_CREATOR_LUNG, iParam2, 0);
			
				case 2:
					return _MPCHAR_STAT_GET_INT(MP_STAT_CHAR_CREATOR_STRENGTH, iParam2, 0);
			
				case 4:
					return _MPCHAR_STAT_GET_INT(MP_STAT_CHAR_CREATOR_BIKE, iParam2, 0);
			
				case 5:
					return _MPCHAR_STAT_GET_INT(MP_STAT_CHAR_CREATOR_FLYING, iParam2, 0);
			
				case 6:
					return _MPCHAR_STAT_GET_INT(MP_STAT_CHAR_CREATOR_SHOOTING, iParam2, 0);
			
				case 7:
					return _MPCHAR_STAT_GET_INT(MP_STAT_CHAR_CREATOR_STEALTH, iParam2, 0);
			}
			break;
	}

	return 0;
}

BOOL func_54(int iParam0) // Position - 0x1729
{
	return Global_43257 == iParam0;
}

void _MPCHAR_STAT_SET_INT(eMPStat empsParam0, int iParam1, int iParam2, int iParam3, BOOL bParam4) // Position - 0x1737
{
	int num;

	bParam4;
	num = Global_2805029[empsParam0 /*3*/][func_5(iParam2)];

	if (num != 0)
		unk_0x1164A75E490C27B6(num, iParam1, iParam3);

	return;
}

BOOL func_56(eCharacter echParam0, int iParam1, int iParam2, var uParam3) // Position - 0x1767
{
	*uParam3 = func_57(echParam0, iParam1, false, -1);

	if (*uParam3 > iParam2)
		return true;

	return false;
}

int func_57(eCharacter echParam0, int iParam1, BOOL bParam2, int iParam3) // Position - 0x1789
{
	float value;
	float num;
	int num2;
	int value2;
	int num3;
	int num4;
	int value3;
	int i;
	int num5;
	int num6;
	int num7;
	int num8;
	float num9;

	num2 = 0;

	switch (iParam1)
	{
		case 0:
			if (echParam0 == CHAR_MICHAEL)
			{
				unk_0xDF7F16323520B858(joaat("SP0_SPECIAL_ABILITY_UNLOCKED"), &value2, -1);
				value = SYSTEM::TO_FLOAT(value2);
			}
			else if (echParam0 == CHAR_FRANKLIN)
			{
				unk_0xDF7F16323520B858(joaat("SP1_SPECIAL_ABILITY_UNLOCKED"), &value2, -1);
				value = SYSTEM::TO_FLOAT(value2);
			}
			else if (echParam0 == CHAR_TREVOR)
			{
				unk_0xDF7F16323520B858(joaat("SP2_SPECIAL_ABILITY_UNLOCKED"), &value2, -1);
				value = SYSTEM::TO_FLOAT(value2);
			}
			else if (echParam0 == CHAR_MULTIPLAYER)
			{
				value = SYSTEM::TO_FLOAT(_MPCHAR_STAT_GET_INT(MP_STAT_SPECIAL_ABILITY, iParam3, 0));
			}
			break;
	
		case 1:
			if (echParam0 == CHAR_MICHAEL)
			{
				unk_0x2F0966A034F5ADC6(joaat("SP0_DIST_RUNNING"), &num, -1);
				value = (num - Global_113648.f_2365.f_539.f_2355[echParam0]) / 175f;
			}
			else if (echParam0 == CHAR_FRANKLIN)
			{
				unk_0x2F0966A034F5ADC6(joaat("SP1_DIST_RUNNING"), &num, -1);
				value = (num - Global_113648.f_2365.f_539.f_2355[echParam0]) / 175f;
			}
			else if (echParam0 == CHAR_TREVOR)
			{
				unk_0x2F0966A034F5ADC6(joaat("SP2_DIST_RUNNING"), &num, -1);
				value = (num - Global_113648.f_2365.f_539.f_2355[echParam0]) / 175f;
			}
			else if (echParam0 == CHAR_MULTIPLAYER)
			{
				value = func_68(20, iParam3) / 175f;
				func_65(&value);
			}
		
			if (echParam0 == CHAR_MICHAEL)
			{
				value = value + SYSTEM::TO_FLOAT(func_64(joaat("SP0_TIME_SWIMMING")));
			}
			else if (echParam0 == CHAR_FRANKLIN)
			{
				value = value + SYSTEM::TO_FLOAT(func_64(joaat("SP1_TIME_SWIMMING")));
			}
			else if (echParam0 == CHAR_TREVOR)
			{
				value = value + SYSTEM::TO_FLOAT(func_64(joaat("SP2_TIME_SWIMMING")));
			}
			else if (echParam0 == CHAR_MULTIPLAYER)
			{
				value = value + SYSTEM::TO_FLOAT(func_64(func_63(50, iParam3)));
				func_65(&value);
			}
		
			if (echParam0 == CHAR_MICHAEL)
			{
				value = value + SYSTEM::TO_FLOAT(func_64(joaat("SP0_TIME_DRIVING_BICYCLE")));
			}
			else if (echParam0 == CHAR_FRANKLIN)
			{
				value = value + SYSTEM::TO_FLOAT(func_64(joaat("SP1_TIME_DRIVING_BICYCLE")));
			}
			else if (echParam0 == CHAR_TREVOR)
			{
				value = value + SYSTEM::TO_FLOAT(func_64(joaat("SP2_TIME_DRIVING_BICYCLE")));
			}
			else if (echParam0 == CHAR_MULTIPLAYER)
			{
				value = value + SYSTEM::TO_FLOAT(func_64(func_63(47, iParam3)));
				func_65(&value);
			}
		
			if (echParam0 == CHAR_MULTIPLAYER)
				value = value + (4f * Global_262145.f_24333 * (float)_MPCHAR_STAT_GET_INT(MP_STAT_DANCE_COMBO_DURATION_MINS, -1, 0));
		
			if (echParam0 == CHAR_MULTIPLAYER)
				value = value * 0.25f;
			break;
	
		case 3:
			if (echParam0 == CHAR_MICHAEL)
			{
				value = SYSTEM::TO_FLOAT(func_62(joaat("SP0_TIME_UNDERWATER"))) / 30f;
			}
			else if (echParam0 == CHAR_FRANKLIN)
			{
				value = SYSTEM::TO_FLOAT(func_62(joaat("SP1_TIME_UNDERWATER"))) / 30f;
			}
			else if (echParam0 == CHAR_TREVOR)
			{
				value = SYSTEM::TO_FLOAT(func_62(joaat("SP2_TIME_UNDERWATER"))) / 30f;
			}
			else if (echParam0 == CHAR_MULTIPLAYER)
			{
				value = SYSTEM::TO_FLOAT(func_62(func_63(52, iParam3))) / 30f;
				func_65(&value);
			}
			break;
	
		case 2:
			if (echParam0 == CHAR_MICHAEL)
			{
				unk_0xDF7F16323520B858(joaat("SP0_UNARMED_HITS"), &value2, -1);
				value = SYSTEM::TO_FLOAT(value2 - Global_113648.f_2365.f_539.f_2359[echParam0]) / 20f;
			}
			else if (echParam0 == CHAR_FRANKLIN)
			{
				unk_0xDF7F16323520B858(joaat("SP1_UNARMED_HITS"), &value2, -1);
				value = SYSTEM::TO_FLOAT(value2 - Global_113648.f_2365.f_539.f_2359[echParam0]) / 20f;
			}
			else if (echParam0 == CHAR_TREVOR)
			{
				unk_0xDF7F16323520B858(joaat("SP2_UNARMED_HITS"), &value2, -1);
				value = SYSTEM::TO_FLOAT(value2 - Global_113648.f_2365.f_539.f_2359[echParam0]) / 20f;
			}
			else if (echParam0 == CHAR_MULTIPLAYER)
			{
				value = SYSTEM::TO_FLOAT(_MPCHAR_STAT_GET_INT(MP_STAT_UNARMED_PED_HITS, iParam3, 0)) / 20f;
				func_65(&value);
			}
			break;
	
		case 4:
			if (echParam0 == CHAR_MICHAEL)
			{
				unk_0xDF7F16323520B858(joaat("SP0_NUMBER_NEAR_MISS"), &value2, -1);
				value = value + (SYSTEM::TO_FLOAT(value2 - Global_113648.f_2365.f_539.f_2363[echParam0]) / 50f);
			}
			else if (echParam0 == CHAR_FRANKLIN)
			{
				unk_0xDF7F16323520B858(joaat("SP1_NUMBER_NEAR_MISS"), &value2, -1);
				value = value + (SYSTEM::TO_FLOAT(value2 - Global_113648.f_2365.f_539.f_2363[echParam0]) / 50f);
			}
			else if (echParam0 == CHAR_TREVOR)
			{
				unk_0xDF7F16323520B858(joaat("SP2_NUMBER_NEAR_MISS"), &value2, -1);
				value = value + (SYSTEM::TO_FLOAT(value2 - Global_113648.f_2365.f_539.f_2363[echParam0]) / 50f);
			}
			else if (echParam0 == CHAR_MULTIPLAYER)
			{
				value = value + (float)_MPCHAR_STAT_GET_INT(MP_STAT_NUMBER_NEAR_MISS, iParam3, 0) / 50;
				func_65(&value);
			}
			break;
	
		case 5:
			if (echParam0 == CHAR_MICHAEL)
				value = SYSTEM::TO_FLOAT(func_64(joaat("SP0_TIME_DRIVING_PLANE"))) / 10f;
			else if (echParam0 == CHAR_FRANKLIN)
				value = SYSTEM::TO_FLOAT(func_64(joaat("SP1_TIME_DRIVING_PLANE"))) / 10f;
			else if (echParam0 == CHAR_TREVOR)
				value = SYSTEM::TO_FLOAT(func_64(joaat("SP2_TIME_DRIVING_PLANE"))) / 10f;
			else if (echParam0 == CHAR_MULTIPLAYER)
				value = SYSTEM::TO_FLOAT(func_64(func_63(43, iParam3))) / 10f;
		
			if (echParam0 == CHAR_MICHAEL)
				value = value + (SYSTEM::TO_FLOAT(func_64(joaat("SP0_TIME_DRIVING_HELI"))) / 10f);
			else if (echParam0 == CHAR_FRANKLIN)
				value = value + (SYSTEM::TO_FLOAT(func_64(joaat("SP1_TIME_DRIVING_HELI"))) / 10f);
			else if (echParam0 == CHAR_TREVOR)
				value = value + (SYSTEM::TO_FLOAT(func_64(joaat("SP2_TIME_DRIVING_HELI"))) / 10f);
			else if (echParam0 == CHAR_MULTIPLAYER)
				value = value + (SYSTEM::TO_FLOAT(func_64(func_63(45, iParam3))) / 10f);
		
			if (echParam0 == CHAR_MICHAEL)
			{
				unk_0xDF7F16323520B858(joaat("SP0_PLANE_LANDINGS"), &value2, -1);
				value = value + SYSTEM::TO_FLOAT(value2);
			}
			else if (echParam0 == CHAR_FRANKLIN)
			{
				unk_0xDF7F16323520B858(joaat("SP1_PLANE_LANDINGS"), &value2, -1);
				value = value + SYSTEM::TO_FLOAT(value2);
			}
			else if (echParam0 == CHAR_TREVOR)
			{
				unk_0xDF7F16323520B858(joaat("SP2_PLANE_LANDINGS"), &value2, -1);
				value = value + SYSTEM::TO_FLOAT(value2);
			}
			else if (echParam0 == CHAR_MULTIPLAYER)
			{
				value = value + (float)_MPCHAR_STAT_GET_INT(MP_STAT_PLANE_LANDINGS, iParam3, 0);
				func_65(&value);
			}
		
			if (echParam0 == CHAR_MICHAEL || echParam0 == CHAR_FRANKLIN || echParam0 == CHAR_TREVOR)
			{
				num3 = func_61(echParam0, 0);
			
				if (echParam0 == CHAR_TREVOR)
					if (num3 == 3)
						value = value + 10f;
					else if (num3 == 2)
						value = value + 7f;
					else if (num3 == 1)
						value = value + 5f;
				else if (num3 == 3)
					value = value + 12f;
				else if (num3 == 2)
					value = value + 9f;
				else if (num3 == 1)
					value = value + 7f;
			
				num3 = func_61(echParam0, 1);
			
				if (echParam0 == CHAR_TREVOR)
					if (num3 == 3)
						value = value + 10f;
					else if (num3 == 2)
						value = value + 7f;
					else if (num3 == 1)
						value = value + 5f;
				else if (num3 == 3)
					value = value + 12f;
				else if (num3 == 2)
					value = value + 9f;
				else if (num3 == 1)
					value = value + 7f;
			
				num3 = func_61(echParam0, 2);
			
				if (num3 == 3)
					value = value + 12f;
				else if (num3 == 2)
					value = value + 9f;
				else if (num3 == 1)
					value = value + 7f;
			
				num3 = func_61(echParam0, 3);
			
				if (num3 == 3)
					value = value + 12f;
				else if (num3 == 2)
					value = value + 9f;
				else if (num3 == 1)
					value = value + 7f;
			
				num3 = func_61(echParam0, 6);
			
				if (num3 == 3)
					value = value + 12f;
				else if (num3 == 2)
					value = value + 9f;
				else if (num3 == 1)
					value = value + 7f;
			
				num3 = func_61(echParam0, 4);
			
				if (num3 == 3)
					value = value + 5f;
				else if (num3 == 2)
					value = value + 3f;
				else if (num3 == 1)
					value = value + 2f;
			
				num3 = func_61(echParam0, 5);
			
				if (num3 == 3)
					value = value + 12f;
				else if (num3 == 2)
					value = value + 9f;
				else if (num3 == 1)
					value = value + 7f;
			
				num3 = func_61(echParam0, 7);
			
				if (num3 == 3)
					value = value + 12f;
				else if (num3 == 2)
					value = value + 9f;
				else if (num3 == 1)
					value = value + 7f;
			
				num3 = func_61(echParam0, 8);
			
				if (num3 == 3)
					value = value + 12f;
				else if (num3 == 2)
					value = value + 9f;
				else if (num3 == 1)
					value = value + 7f;
			
				num3 = func_61(echParam0, 11);
			
				if (num3 == 3)
					value = value + 12f;
				else if (num3 == 2)
					value = value + 9f;
				else if (num3 == 1)
					value = value + 7f;
			}
			break;
	
		case 7:
			if (echParam0 == CHAR_MICHAEL)
			{
				unk_0x2F0966A034F5ADC6(joaat("SP0_DIST_WALK_ST"), &num, -1);
				value = (num - Global_113648.f_2365.f_539.f_2367[echParam0]) / 45f;
			}
			else if (echParam0 == CHAR_FRANKLIN)
			{
				unk_0x2F0966A034F5ADC6(joaat("SP1_DIST_WALK_ST"), &num, -1);
				value = (num - Global_113648.f_2365.f_539.f_2367[echParam0]) / 45f;
			}
			else if (echParam0 == CHAR_TREVOR)
			{
				unk_0x2F0966A034F5ADC6(joaat("SP2_DIST_WALK_ST"), &num, -1);
				value = (num - Global_113648.f_2365.f_539.f_2367[echParam0]) / 45f;
			}
			else if (echParam0 == CHAR_MULTIPLAYER)
			{
				value = func_68(19, iParam3) / 45f;
			}
		
			if (echParam0 == CHAR_MICHAEL)
			{
				unk_0xDF7F16323520B858(joaat("SP0_KILLS_STEALTH"), &value2, -1);
				value = value + ((SYSTEM::TO_FLOAT(value2 - Global_113648.f_2365.f_539.f_2371[echParam0]) / 2f) * 1.5f);
			}
			else if (echParam0 == CHAR_FRANKLIN)
			{
				unk_0xDF7F16323520B858(joaat("SP1_KILLS_STEALTH"), &value2, -1);
				value = value + ((SYSTEM::TO_FLOAT(value2 - Global_113648.f_2365.f_539.f_2371[echParam0]) / 2f) * 1.5f);
			}
			else if (echParam0 == CHAR_TREVOR)
			{
				unk_0xDF7F16323520B858(joaat("SP2_KILLS_STEALTH"), &value2, -1);
				value = value + ((SYSTEM::TO_FLOAT(value2 - Global_113648.f_2365.f_539.f_2371[echParam0]) / 2f) * 1.5f);
			}
			else if (echParam0 == CHAR_MULTIPLAYER)
			{
				value2 = _MPCHAR_STAT_GET_INT(MP_STAT_KILLS_STEALTH, iParam3, 0);
				value = value + ((SYSTEM::TO_FLOAT(value2) / 2f) * 1.5f);
				func_65(&value);
			}
			break;
	
		case 6:
			if (echParam0 == CHAR_MICHAEL)
			{
				unk_0xDF7F16323520B858(joaat("SP0_HITS_MISSION"), &num4, -1);
				unk_0xDF7F16323520B858(joaat("SP0_HITS_PEDS_VEHICLES"), &value3, -1);
				value3 = value3 - num4;
				value = SYSTEM::TO_FLOAT(num4 - Global_113648.f_2365.f_539.f_2375[echParam0]) / 40f;
				value = value + (SYSTEM::TO_FLOAT(value3 - Global_113648.f_2365.f_539.f_2379[echParam0]) / 80f);
			}
			else if (echParam0 == CHAR_FRANKLIN)
			{
				unk_0xDF7F16323520B858(joaat("SP1_HITS_MISSION"), &num4, -1);
				unk_0xDF7F16323520B858(joaat("SP1_HITS_PEDS_VEHICLES"), &value3, -1);
				value3 = value3 - num4;
				value = SYSTEM::TO_FLOAT(num4 - Global_113648.f_2365.f_539.f_2375[echParam0]) / 40f;
				value = value + (SYSTEM::TO_FLOAT(value3 - Global_113648.f_2365.f_539.f_2379[echParam0]) / 80f);
			}
			else if (echParam0 == CHAR_TREVOR)
			{
				unk_0xDF7F16323520B858(joaat("SP2_HITS_MISSION"), &num4, -1);
				unk_0xDF7F16323520B858(joaat("SP2_HITS_PEDS_VEHICLES"), &value3, -1);
				value3 = value3 - num4;
				value = SYSTEM::TO_FLOAT(num4 - Global_113648.f_2365.f_539.f_2375[echParam0]) / 40f;
				value = value + (SYSTEM::TO_FLOAT(value3 - Global_113648.f_2365.f_539.f_2379[echParam0]) / 80f);
			}
			else if (echParam0 == CHAR_MULTIPLAYER)
			{
				value3 = _MPCHAR_STAT_GET_INT(MP_STAT_HITS_PEDS_VEHICLES, iParam3, 0);
				value = value + (SYSTEM::TO_FLOAT(value3) / 80f);
			}
		
			if (echParam0 == CHAR_MICHAEL || echParam0 == CHAR_FRANKLIN || echParam0 == CHAR_TREVOR)
			{
				for (i = 0; i < 22; i = i + 1)
				{
					switch (func_60(i, echParam0))
					{
						case 3:
							num5 = num5 + 1;
							break;
					
						case 2:
							num6 = num6 + 1;
							break;
					
						case 1:
							num7 = num7 + 1;
							break;
					}
				}
			
				value = value + (float)num5 * 3;
				value = value + (float)num6 * 2;
				value = value + (float)num7 * 1;
			}
			else if (echParam0 == CHAR_MULTIPLAYER)
			{
				value = value + (float)func_59(joaat("MPPLY_SHOOTINGRANGE_WINS")) * 1;
				func_65(&value);
			}
			break;
	}

	if (iParam1 != 0)
	{
		num8 = func_53(echParam0, iParam1, iParam3);
		value = value + (float)num8;
		value = value + (float)func_58(echParam0, iParam1, iParam3);
	}

	if (bParam2)
	{
		num9 = value - (value % (float)func_51(echParam0, iParam1));
	
		if (value % (float)func_51(echParam0, iParam1) >= 0f)
			num9 = num9 + (float)func_51(echParam0, iParam1);
	
		if (value >= num9)
			value = num9;
		else
			value = num9 - (float)func_51(echParam0, iParam1);
	}

	num2 = SYSTEM::FLOOR(value);
	num2 = func_69(num2, 0, 100);
	return num2;
}

int func_58(eCharacter echParam0, int iParam1, int iParam2) // Position - 0x249C
{
	switch (echParam0)
	{
		case CHAR_MICHAEL:
		case CHAR_FRANKLIN:
		case CHAR_TREVOR:
			switch (iParam1)
			{
				case 1:
				case 3:
				case 2:
				case 4:
				case 5:
				case 6:
				case 7:
					return Global_113648.f_2365.f_539.f_2247[iParam1 /*4*/][echParam0];
			}
			break;
	
		case CHAR_MULTIPLAYER:
			switch (iParam1)
			{
				case 1:
					return _MPCHAR_STAT_GET_INT(MP_STAT_SCRIPT_INCREASE_STAM, iParam2, 0);
			
				case 3:
					return _MPCHAR_STAT_GET_INT(MP_STAT_SCRIPT_INCREASE_LUNG, iParam2, 0);
			
				case 2:
					return _MPCHAR_STAT_GET_INT(MP_STAT_SCRIPT_INCREASE_STRN, iParam2, 0);
			
				case 4:
					return _MPCHAR_STAT_GET_INT(MP_STAT_SCRIPT_INCREASE_DRIV, iParam2, 0);
			
				case 5:
					return _MPCHAR_STAT_GET_INT(MP_STAT_SCRIPT_INCREASE_FLY, iParam2, 0);
			
				case 6:
					return _MPCHAR_STAT_GET_INT(MP_STAT_SCRIPT_INCREASE_SHO, iParam2, 0);
			
				case 7:
					return _MPCHAR_STAT_GET_INT(MP_STAT_SCRIPT_INCREASE_STL, iParam2, 0);
			}
			break;
	}

	return 0;
}

int func_59(int iParam0) // Position - 0x25B0
{
	int num;
	int num2;

	num = iParam0;

	if (unk_0xDF7F16323520B858(num, &num2, -1))
		return num2;

	return 0;
}

int func_60(int iParam0, eCharacter echParam1) // Position - 0x25CE
{
	return Global_113648.f_19149[echParam1 /*271*/].f_3[iParam0 /*12*/].f_3;
}

int func_61(eCharacter echParam0, int iParam1) // Position - 0x25EA
{
	if (echParam0 < CHAR_MICHAEL || echParam0 > CHAR_TREVOR)
		return 0;

	return Global_113648.f_1990[echParam0 /*121*/][iParam1 /*10*/].f_8;
}

int func_62(int iParam0) // Position - 0x2618
{
	int num;

	num = 0;
	num = num + (unk_0x4F256B9F00ACB695(iParam0) * 86400);
	num = num + (unk_0xDF21396D0886D8F7(iParam0) * 3600);
	num = num + (unk_0xE44C8536D6F264FC(iParam0) * 60);
	num = num + unk_0x77A7B5685F038D01(iParam0);
	return num;
}

int func_63(int iParam0, int iParam1) // Position - 0x265B
{
	return Global_2805029[iParam0 /*3*/][func_5(iParam1)];
}

int func_64(int iParam0) // Position - 0x2673
{
	int num;

	num = 0;
	num = num + (unk_0x4F256B9F00ACB695(iParam0) * 1440);
	num = num + (unk_0xDF21396D0886D8F7(iParam0) * 60);
	num = num + unk_0xE44C8536D6F264FC(iParam0);
	return num;
}

var func_65(var uParam0) // Position - 0x26A6
{
	if (func_46())
	{
		if (func_66() < Global_262145.f_13170)
			if (*uParam0 + ((float)func_66() * Global_262145.f_13169) <= (float)Global_262145.f_13179)
				*uParam0 = *uParam0 + ((float)func_66() * Global_262145.f_13169);
	
		return *uParam0;
	}

	return *uParam0;
}

int func_66() // Position - 0x2700
{
	if (func_49(true))
		return Global_1853910[func_67() /*862*/].f_205.f_6;

	return 0;
}

Player func_67() // Position - 0x2726
{
	return Global_1894573[unk_0x259BE71D8A81D4FA() /*608*/].f_10;
}

float func_68(int iParam0, int iParam1) // Position - 0x273B
{
	var unk;
	float num;

	unk = Global_2847606[iParam0 /*3*/][func_5(iParam1)];

	if (unk_0x2F0966A034F5ADC6(unk, &num, -1))
		return num;

	return 0f;
}

int func_69(int iParam0, int iParam1, int iParam2) // Position - 0x2767
{
	if (iParam0 > iParam2)
		return iParam2;
	else if (iParam0 < iParam1)
		return iParam1;

	return iParam0;
}

int _MPCHAR_STAT_GET_INT(eMPStat empsParam0, int iParam1, int iParam2) // Position - 0x278C
{
	var unk;
	int num;

	if (empsParam0 != MP_STAT_INVALID)
	{
		iParam2 == 0;
		unk = Global_2805029[empsParam0 /*3*/][func_5(iParam1)];
	
		if (unk_0xDF7F16323520B858(unk, &num, -1))
			return num;
	}

	return 0;
}

void func_71(eCharacter echParam0, int iParam1, var uParam2, var uParam3) // Position - 0x27C9
{
	switch (echParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("SP0_SPECIAL_ABILITY_UNLOCKED");
					break;
			
				case 1:
					*uParam2 = joaat("SP0_STAMINA");
					break;
			
				case 3:
					*uParam2 = joaat("SP0_LUNG_CAPACITY");
					break;
			
				case 2:
					*uParam2 = joaat("SP0_STRENGTH");
					break;
			
				case 4:
					*uParam2 = joaat("SP0_WHEELIE_ABILITY");
					break;
			
				case 5:
					*uParam2 = joaat("SP0_FLYING_ABILITY");
					break;
			
				case 6:
					*uParam2 = joaat("SP0_SHOOTING_ABILITY");
					break;
			
				case 7:
					*uParam2 = joaat("SP0_STEALTH_ABILITY");
					break;
			}
			break;
	
		case 1:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("SP1_SPECIAL_ABILITY_UNLOCKED");
					break;
			
				case 1:
					*uParam2 = joaat("SP1_STAMINA");
					break;
			
				case 3:
					*uParam2 = joaat("SP1_LUNG_CAPACITY");
					break;
			
				case 2:
					*uParam2 = joaat("SP1_STRENGTH");
					break;
			
				case 4:
					*uParam2 = joaat("SP1_WHEELIE_ABILITY");
					break;
			
				case 5:
					*uParam2 = joaat("SP1_FLYING_ABILITY");
					break;
			
				case 6:
					*uParam2 = joaat("SP1_SHOOTING_ABILITY");
					break;
			
				case 7:
					*uParam2 = joaat("SP1_STEALTH_ABILITY");
					break;
			}
			break;
	
		case 2:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("SP2_SPECIAL_ABILITY_UNLOCKED");
					break;
			
				case 1:
					*uParam2 = joaat("SP2_STAMINA");
					break;
			
				case 3:
					*uParam2 = joaat("SP2_LUNG_CAPACITY");
					break;
			
				case 2:
					*uParam2 = joaat("SP2_STRENGTH");
					break;
			
				case 4:
					*uParam2 = joaat("SP2_WHEELIE_ABILITY");
					break;
			
				case 5:
					*uParam2 = joaat("SP2_FLYING_ABILITY");
					break;
			
				case 6:
					*uParam2 = joaat("SP2_SHOOTING_ABILITY");
					break;
			
				case 7:
					*uParam2 = joaat("SP2_STEALTH_ABILITY");
					break;
			}
			break;
	
		case 3:
			switch (iParam1)
			{
				case 0:
					*uParam3 = 64;
					break;
			
				case 1:
					*uParam3 = 65;
					break;
			
				case 3:
					*uParam3 = 67;
					break;
			
				case 2:
					*uParam3 = 66;
					break;
			
				case 4:
					*uParam3 = 68;
					break;
			
				case 5:
					*uParam3 = 69;
					break;
			
				case 6:
					*uParam3 = 70;
					break;
			
				case 7:
					*uParam3 = 71;
					break;
			}
			break;
	}

	return;
}

BOOL func_72() // Position - 0x2A20
{
	if (!unk_0x76CD105BCAC6EB9F())
		return Global_98159.f_44 == 1;

	return false;
}

BOOL func_73(eCharacter echParam0) // Position - 0x2A3C
{
	return echParam0 < CHAR_MULTIPLAYER;
}

void func_74(eCharacter echParam0, int iParam1) // Position - 0x2A48
{
	int value;
	float num;
	var unk;
	eMPStat stat;

	if (echParam0 != CHAR_MICHAEL || echParam0 != CHAR_FRANKLIN || echParam0 != CHAR_TREVOR || echParam0 != CHAR_MULTIPLAYER)
		return;

	func_71(echParam0, iParam1, &unk, &stat);

	if (unk_0x76CD105BCAC6EB9F())
		value = _MPCHAR_STAT_GET_INT(stat, -1, 0);
	else
		unk_0xDF7F16323520B858(unk, &value, -1);

	switch (iParam1)
	{
		case 2:
			num = 0.8f + (0.4f * (SYSTEM::TO_FLOAT(value) / 100f));
			unk_0xA8762533460B016B(unk_0x259BE71D8A81D4FA(), num, 1);
			break;
	
		case 7:
			if (unk_0x486FF5D06E9659F1(joaat("armenian3")) != 0 || unk_0x486FF5D06E9659F1(joaat("trevor3")) != 0)
			{
				Global_97964 = true;
			}
			else
			{
				num = 1f - (SYSTEM::TO_FLOAT(value) / 100f);
				unk_0xF75E68D9DCB8C80B(unk_0x259BE71D8A81D4FA(), num);
				unk_0x92F9E3A242F41E98(unk_0x259BE71D8A81D4FA(), num);
				unk_0x048D90B19F701DC3(unk_0x259BE71D8A81D4FA(), num);
			}
			break;
	}

	return;
}

BOOL func_75(int iParam0) // Position - 0x2B35
{
	if (Global_43257 == 15)
		return false;

	if (_CAN_ENTER_FREEROAM_STATE(iParam0))
		return false;

	return true;
}

BOOL _CAN_ENTER_FREEROAM_STATE(int iParam0) // Position - 0x2B57
{
	return func_77(iParam0, Global_43257);
}

BOOL func_77(int iParam0, int iParam1) // Position - 0x2B68
{
	if (iParam1 == 15)
		return 1;

	if (iParam0 == 15)
		return 0;

	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
			}
		
			return 1;
	
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
			}
			break;
	
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
			}
			break;
	
		case 4:
			if (iParam1 == 17)
				return 1;
			break;
	
		case 5:
			break;
	
		case 6:
		case 8:
			if (iParam1 == 5)
				return 1;
			break;
	
		case 7:
			if (iParam1 == 6)
				return 1;
			break;
	
		case 9:
			if (iParam1 == 5)
				return 1;
			break;
	
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
			}
			break;
	
		case 11:
			if (iParam1 == 5)
				return 1;
			break;
	
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
			}
			break;
	
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
			}
			break;
	
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
			}
			break;
	
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
			}
			break;
	}

	return 0;
}

void func_78() // Position - 0x2D49
{
	var unk;
	int num;

	num = 0;

	if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
	{
		unk = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
	
		if (unk_0xFC8BFE4B41177C22(unk) && unk_0xD9F5E1FEFD1329E4(unk, 0) && unk_0xFD5C5BBD1FE92BB7(unk, -1, 0) == unk_0x4A8C381C258A124D() && unk_0xD3CE8D1E6564B011(unk_0x4B423FAA24E8ABF0(unk)) || unk_0x78B050AFBA6D1517(unk_0x4B423FAA24E8ABF0(unk)) || unk_0x3801E353091A2E42(unk_0x4B423FAA24E8ABF0(unk)) || unk_0x9910CD0D8626AA28(unk_0x4B423FAA24E8ABF0(unk)))
			num = 1;
	}

	func_83(&unk, &num);
	func_82(&unk, &num);
	func_79();
	return;
}

void func_79() // Position - 0x2DE8
{
	int num;
	int value;
	int num2;

	if (!bLocal_80)
	{
		if (echLocal_58 == CHAR_MULTIPLAYER)
		{
			if (Global_2359296[func_81() /*5568*/].f_681.f_7)
			{
				iLocal_77 = func_62(func_63(148, -1));
				Global_2359296[func_81() /*5568*/].f_681.f_7 = 0;
			}
			else
			{
				iLocal_77 = Global_2359296[func_81() /*5568*/].f_681.f_6;
			}
		
			if (Global_2359296[func_81() /*5568*/].f_681.f_4 == 0)
				Global_2359296[func_81() /*5568*/].f_681.f_4 = unk_0x39D1D336459711BE();
		
			iLocal_79 = Global_2359296[func_81() /*5568*/].f_681.f_4;
			iLocal_78 = Global_2359296[func_81() /*5568*/].f_681.f_5;
		}
		else
		{
			if (Global_113648.f_2365.f_539.f_2292[echLocal_58])
			{
				switch (echLocal_58)
				{
					case CHAR_MICHAEL:
						iLocal_77 = func_62(joaat("SP0_TOTAL_WHEELIE_TIME"));
						break;
				
					case CHAR_FRANKLIN:
						iLocal_77 = func_62(joaat("SP1_TOTAL_WHEELIE_TIME"));
						break;
				
					case CHAR_TREVOR:
						iLocal_77 = func_62(joaat("SP2_TOTAL_WHEELIE_TIME"));
						break;
				}
			
				Global_113648.f_2365.f_539.f_2292[echLocal_58] = false;
			}
			else
			{
				iLocal_77 = Global_113648.f_2365.f_539.f_2288[echLocal_58];
			}
		
			if (Global_113648.f_2365.f_539.f_2280[echLocal_58] == 0)
				Global_113648.f_2365.f_539.f_2280[echLocal_58] = unk_0x39D1D336459711BE();
		
			iLocal_79 = Global_113648.f_2365.f_539.f_2280[echLocal_58];
			iLocal_78 = Global_113648.f_2365.f_539.f_2284[echLocal_58];
		}
	
		bLocal_80 = true;
		bLocal_81 = true;
	}
	else if (unk_0x39D1D336459711BE() - iLocal_79 > 86400)
	{
		bLocal_80 = false;
		bLocal_81 = false;
		iLocal_79 = unk_0x39D1D336459711BE();
		iLocal_78 = 0;
	
		if (echLocal_58 == CHAR_MULTIPLAYER)
			Global_2359296[func_81() /*5568*/].f_681.f_7 = 1;
		else
			Global_113648.f_2365.f_539.f_2292[echLocal_58] = true;
	}

	if (bLocal_81)
	{
		switch (echLocal_58)
		{
			case CHAR_MICHAEL:
				num = func_62(joaat("SP0_TOTAL_WHEELIE_TIME"));
				break;
		
			case CHAR_FRANKLIN:
				num = func_62(joaat("SP1_TOTAL_WHEELIE_TIME"));
				break;
		
			case CHAR_TREVOR:
				num = func_62(joaat("SP2_TOTAL_WHEELIE_TIME"));
				break;
		
			case CHAR_MULTIPLAYER:
				num = func_62(func_63(148, -1));
				break;
		}
	
		value = num - iLocal_77;
		num2 = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) / 15f) - iLocal_78;
	
		if (num2 > 0)
		{
			func_80(echLocal_58, 4, num2);
			iLocal_78 = iLocal_78 + num2;
		}
	
		if (num > iLocal_77 + ((unk_0x91C8345B22D52DEC() / 1000) * 60))
			bLocal_81 = false;
	}

	if (echLocal_58 == CHAR_MULTIPLAYER)
	{
		Global_2359296[func_81() /*5568*/].f_681.f_4 = iLocal_79;
		Global_2359296[func_81() /*5568*/].f_681.f_5 = iLocal_78;
	}
	else
	{
		Global_113648.f_2365.f_539.f_2280[echLocal_58] = iLocal_79;
		Global_113648.f_2365.f_539.f_2284[echLocal_58] = iLocal_78;
	}

	return;
}

void func_80(eCharacter echParam0, int iParam1, int iParam2) // Position - 0x30AA
{
	int num;
	eMPStat stat;

	switch (echParam0)
	{
		case 0:
		case 1:
		case 2:
			Global_113648.f_2365.f_539.f_2247[iParam1 /*4*/][echParam0] = Global_113648.f_2365.f_539.f_2247[iParam1 /*4*/][echParam0] + iParam2;
			break;
	
		case 3:
			stat = MP_STAT_INVALID;
		
			switch (iParam1)
			{
				case 1:
					stat = MP_STAT_SCRIPT_INCREASE_STAM;
					break;
			
				case 3:
					stat = MP_STAT_SCRIPT_INCREASE_LUNG;
					break;
			
				case 2:
					stat = MP_STAT_SCRIPT_INCREASE_STRN;
					break;
			
				case 4:
					stat = MP_STAT_SCRIPT_INCREASE_DRIV;
					break;
			
				case 5:
					stat = MP_STAT_SCRIPT_INCREASE_FLY;
					break;
			
				case 6:
					stat = MP_STAT_SCRIPT_INCREASE_SHO;
					break;
			
				case 7:
					stat = MP_STAT_SCRIPT_INCREASE_STL;
					break;
			}
		
			if (stat != MP_STAT_INVALID)
			{
				num = _MPCHAR_STAT_GET_INT(stat, -1, 0);
				num = num + iParam2;
			
				if (num > 100)
					num = 100;
			
				_MPCHAR_STAT_SET_INT(stat, num, -1, 1, false);
			}
			break;
	}

	return;
}

int func_81() // Position - 0x319A
{
	int num;

	num = 0;
	return num;
}

void func_82(var uParam0, var uParam1) // Position - 0x31A7
{
	BOOL flag;

	if (bLocal_74)
	{
		flag = true;
	
		if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()) && *uParam1 && !unk_0x3F18810075C77D41(*uParam0))
		{
			flag = false;
		
			if (unk_0xDF93B3CFAC96698F(*uParam0) >= 53f)
			{
				func_80(echLocal_58, 4, 2);
				flag = true;
			}
		}
	
		if (flag)
		{
			bLocal_74 = false;
			uLocal_75 = unk_0x1DD05E817C89C737();
		
			if (unk_0x76CD105BCAC6EB9F())
				uLocal_76 = unk_0x7E3F74F641EE6B27();
		}
	}
	else if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()) && *uParam1 && unk_0xDF93B3CFAC96698F(*uParam0) < 20f && !unk_0x3F18810075C77D41(*uParam0))
	{
		if (!unk_0x76CD105BCAC6EB9F() && unk_0x1DD05E817C89C737() - uLocal_75 > 10000 || unk_0x76CD105BCAC6EB9F() && unk_0xDBA141080166EAA2(unk_0x7E3F74F641EE6B27(), unk_0xAD5B43C219C4CB92(uLocal_76, 10000)))
			bLocal_74 = true;
	}

	return;
}

void func_83(var uParam0, var uParam1) // Position - 0x3282
{
	BOOL flag;
	var unk;

	flag = false;

	if (*uParam1)
	{
		if (bLocal_66)
		{
			if (!unk_0x3F18810075C77D41(*uParam0))
			{
				if (!unk_0x76CD105BCAC6EB9F() && unk_0x1DD05E817C89C737() - uLocal_68 > 1500 || unk_0x76CD105BCAC6EB9F() && unk_0xDBA141080166EAA2(unk_0x7E3F74F641EE6B27(), unk_0xAD5B43C219C4CB92(uLocal_69, 1500)))
				{
					uLocal_70 = unk_0x1DD05E817C89C737();
				
					if (unk_0x76CD105BCAC6EB9F())
						uLocal_71 = unk_0x7E3F74F641EE6B27();
				
					bLocal_67 = true;
				}
			
				bLocal_66 = false;
			}
		}
	
		if (bLocal_67)
		{
			if (!unk_0x3F18810075C77D41(*uParam0))
			{
				if (unk_0xD2A0543EC400E1A5(*uParam0))
				{
					if (!unk_0x76CD105BCAC6EB9F() && unk_0x1DD05E817C89C737() - uLocal_70 > 20 || !unk_0x76CD105BCAC6EB9F() && unk_0x1DD05E817C89C737() - uLocal_70 == 0 || unk_0x76CD105BCAC6EB9F() && unk_0xDBA141080166EAA2(unk_0x7E3F74F641EE6B27(), unk_0xAD5B43C219C4CB92(uLocal_71, 20)) || unk_0x76CD105BCAC6EB9F() && unk_0xCFF17EF1F3F6FF43(unk_0x7E3F74F641EE6B27(), uLocal_71))
					{
					}
					else
					{
						func_80(echLocal_58, 4, 1);
					}
				
					TEXT_LABEL_ASSIGN_STRING(&unk, "Player landed on all wheels in ", 64);
					TEXT_LABEL_APPEND_INT(&unk, unk_0x1DD05E817C89C737() - uLocal_70, 64);
					TEXT_LABEL_APPEND_STRING(&unk, "ms", 64);
					flag = true;
				}
			}
			else
			{
				flag = true;
			}
		}
	
		if (!bLocal_66 && !bLocal_67)
		{
			if (!unk_0x76CD105BCAC6EB9F() && unk_0x1DD05E817C89C737() - uLocal_72 > 1000 || unk_0x76CD105BCAC6EB9F() && unk_0xDBA141080166EAA2(unk_0x7E3F74F641EE6B27(), unk_0xAD5B43C219C4CB92(uLocal_73, 1000)))
			{
				if (unk_0x3F18810075C77D41(*uParam0))
				{
					if (!bLocal_66)
					{
						uLocal_68 = unk_0x1DD05E817C89C737();
					
						if (unk_0x76CD105BCAC6EB9F())
							uLocal_69 = unk_0x7E3F74F641EE6B27();
					
						bLocal_66 = true;
					}
				}
			}
		}
	}
	else if (bLocal_66 || bLocal_67)
	{
		flag = true;
	}

	if (flag)
	{
		uLocal_72 = unk_0x1DD05E817C89C737();
	
		if (unk_0x76CD105BCAC6EB9F())
			uLocal_73 = unk_0x7E3F74F641EE6B27();
	
		bLocal_66 = false;
		bLocal_67 = false;
	}

	return;
}

BOOL func_84(int iParam0) // Position - 0x3440
{
	return Global_112733 && iParam0 != false;
}

eCharacter _GET_CURRENT_PLAYER_CHARACTER() // Position - 0x3451
{
	func_86();
	return Global_113648.f_2365.f_539.f_4321;
}

void func_86() // Position - 0x346A
{
	eCharacter character;

	if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
	{
		if (_GET_CHARACTER_MODEL(Global_113648.f_2365.f_539.f_4321) != unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()))
		{
			character = _GET_PLAYER_CHARACTER_FROM_PED(unk_0x4A8C381C258A124D());
		
			if (func_73(character) && !func_54(14) || Global_112599)
			{
				if (Global_113648.f_2365.f_539.f_4321 != character && func_73(Global_113648.f_2365.f_539.f_4321))
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

eCharacter _GET_PLAYER_CHARACTER_FROM_PED(var uParam0) // Position - 0x3567
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

int _GET_CHARACTER_MODEL(eCharacter character) // Position - 0x35A4
{
	if (func_73(character))
		return func_89(character);
	else
		character != _CHAR_NULL;

	return 0;
}

int func_89(eCharacter echParam0) // Position - 0x35C9
{
	return Global_2028[echParam0 /*29*/];
}

void func_90() // Position - 0x35D8
{
	char* str;
	int num;

	if (bLocal_61)
	{
		if (echLocal_62 != echLocal_58)
		{
			bLocal_61 = false;
			return;
		}
	
		str = "CHAR_DEFAULT";
	
		switch (echLocal_62)
		{
			case 0:
				str = "CHAR_MICHAEL";
				break;
		
			case 1:
				str = "CHAR_FRANKLIN";
				break;
		
			case 2:
				str = "CHAR_TREVOR";
				break;
		
			case CHAR_MULTIPLAYER:
				num = func_93(unk_0x259BE71D8A81D4FA());
			
				if (num == 0)
					return;
				else
					str = unk_0x008C0EB38E4459EE(num);
				break;
		}
	
		unk_0xCCDB0041859B85A6("PS_UPDATE" /*~1~/100*/);
		unk_0x511D14ED2DA887E1(iLocal_65);
		unk_0x0AAAE599E05E67D2(func_92(iLocal_63), func_91(iLocal_63), iLocal_64, iLocal_65 - iLocal_64, 0, str, str);
		bLocal_82 = true;
		iLocal_83 = unk_0x1DD05E817C89C737() + 5000;
	
		if (unk_0x76CD105BCAC6EB9F())
			uLocal_84 = unk_0xAD5B43C219C4CB92(unk_0x7E3F74F641EE6B27(), 5000);
	
		bLocal_61 = false;
	}

	return;
}

int func_91(int iParam0) // Position - 0x369C
{
	switch (iParam0)
	{
		case 0:
			return 23;
	
		case 1:
			return 2;
	
		case 3:
			return 24;
	
		case 2:
			return 25;
	
		case 4:
			return 14;
	
		case 5:
			return 27;
	
		case 6:
			return 17;
	
		case 7:
			return 28;
	}

	return -1;
}

char* func_92(int iParam0) // Position - 0x371B
{
	switch (iParam0)
	{
		case 0:
			return "PSF_SPEC_AB" /*Special capacity +*/;
	
		case 1:
			return "PSF_STAMINA" /*Stamina +*/;
	
		case 3:
			return "PSF_LUNG" /*Lung Capacity +*/;
	
		case 2:
			return "PSF_STRENGTH" /*Strength +*/;
	
		case 4:
			return "PSF_DRIVING" /*Driving +*/;
	
		case 5:
			return "PSF_FLYING" /*Flying +*/;
	
		case 6:
			return "PSF_SHOOTING" /*Shooting +*/;
	
		case 7:
			return "PSF_STEALTH" /*Stealth +*/;
	}

	return "ERROR";
}

int func_93(int iParam0) // Position - 0x37A5
{
	int num;

	num = func_96(iParam0);

	if (num == -1)
	{
		func_94(iParam0, true);
		return 0;
	}

	Global_1666668[num /*5*/].f_4 = 1;
	return Global_1666668[num /*5*/].f_2;
}

void func_94(int iParam0, BOOL bParam1) // Position - 0x37DB
{
	if (!_NETWORK_IS_PLAYER_VALID(iParam0, false, true))
		return;

	if (func_96(iParam0) != -1)
		return;

	if (Global_1666831)
		if (iParam0 == Global_1666831.f_1)
			return;

	if (func_95(iParam0))
		return;

	if (Global_1666869 >= 32)
		return;

	Global_1666836[Global_1666869] = iParam0;
	Global_1666869 = Global_1666869 + 1;
	bParam1;
	return;
}

BOOL func_95(int iParam0) // Position - 0x3847
{
	int i;

	i = 0;

	for (i = 0; i < Global_1666869; i = i + 1)
	{
		if (Global_1666836[i] == iParam0)
			return true;
	}

	return false;
}

int func_96(int iParam0) // Position - 0x3879
{
	int i;

	if (!_NETWORK_IS_PLAYER_VALID(iParam0, false, true))
		return -1;

	if (Global_1666829 == 0)
		return -1;

	i = 0;

	for (i = 0; i < Global_1666829; i = i + 1)
	{
		if (Global_1666668[i /*5*/].f_1 == iParam0)
		{
			if (unk_0xCF3FA9D6B87D2277(Global_1666668[i /*5*/].f_2) && unk_0x445B6F53EA9E6A6F(Global_1666668[i /*5*/].f_2))
				return i;
		
			func_97(i);
			return -1;
		}
	}

	return -1;
}

void func_97(int iParam0) // Position - 0x38F8
{
	var unk;
	var unk17;
	int num;
	int i;

	if (iParam0 >= Global_1666829)
		return;

	if (unk_0xCF3FA9D6B87D2277(Global_1666668[iParam0 /*5*/].f_2))
	{
		TEXT_LABEL_ASSIGN_STRING(&unk, "CHAR_DEFAULT", 64);
	
		if (Global_1666668[iParam0 /*5*/].f_2 != 0)
		{
			TEXT_LABEL_ASSIGN_STRING(&unk17, unk_0x008C0EB38E4459EE(Global_1666668[iParam0 /*5*/].f_2), 64);
			unk_0x4CF6314488B07405(&unk17, &unk17, &unk, &unk);
		}
	
		unk_0x697995B2B26B6CD4(Global_1666668[iParam0 /*5*/].f_2);
	}

	num = iParam0;

	for (i = num + 1; i < Global_1666829; i = i + 1)
	{
		Global_1666668[num /*5*/] = { Global_1666668[i /*5*/] };
		num = num + 1;
	}

	func_98(&Global_1666668[num /*5*/]);
	Global_1666829 = Global_1666829 - 1;
	return;
}

void func_98(var uParam0) // Position - 0x39AD
{
	*uParam0 = 0;
	uParam0->f_1 = _INVALID_PLAYER_INDEX();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;

	if (unk_0x76CD105BCAC6EB9F())
		uParam0->f_3 = unk_0x7E3F74F641EE6B27();

	return;
}

void func_99() // Position - 0x39DA
{
	float value;
	int num;

	if (unk_0xC5C8FC4D42BFD749() != 1)
		return;

	if (unk_0x76CD105BCAC6EB9F())
	{
		if (!func_103(unk_0x259BE71D8A81D4FA()))
			return;
	
		if (func_102() != 0)
			return;
	}

	if (unk_0x76CD105BCAC6EB9F())
		if (func_102() == 0)
			iLocal_53 = 1;
	else
		iLocal_53 = 0;

	if (!func_101())
		func_100();

	iLocal_55 = 0;
	iLocal_56 = 0;

	if (unk_0x76CD105BCAC6EB9F())
		uLocal_57 = unk_0x7E3F74F641EE6B27();

	uLocal_72 = unk_0x1DD05E817C89C737();

	if (unk_0x76CD105BCAC6EB9F())
		uLocal_73 = unk_0x7E3F74F641EE6B27();

	if (unk_0x76CD105BCAC6EB9F())
	{
		if (!IS_BIT_SET(Global_2359296[func_81() /*5568*/].f_681.f_1274, 2))
		{
			value = SYSTEM::TO_FLOAT(_MPCHAR_STAT_GET_INT(MP_STAT_UNARMED_HITS, -1, 0)) / 20f;
			num = SYSTEM::FLOOR(value);
			num = func_69(num, 0, 100);
			func_80(3, 2, num);
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2359296[func_81() /*5568*/].f_681.f_1274), 2);
		}
	}

	bLocal_59 = true;
	iLocal_54 = 1;
	return;
}

void func_100() // Position - 0x3AC1
{
	int i;
	var unk;
	eMPStat stat;
	int j;
	int k;
	var unk2;
	var unk3;

	if (unk_0x76CD105BCAC6EB9F())
	{
		for (i = 0; i < 8; i = i + 1)
		{
			if (i != 0)
			{
				func_71(3, i, &unk, &stat);
				_MPCHAR_STAT_SET_INT(stat, func_53(3, i, -1), -1, 1, false);
			}
		}
	
		func_4(0, 1, -1, 1);
		Global_97963 = true;
	}
	else
	{
		for (j = 0; j < 3; j = j + 1)
		{
			for (k = 0; k < 8; k = k + 1)
			{
				if (k != 0)
				{
					func_71(j, k, &unk2, &unk3);
					unk_0x1164A75E490C27B6(unk2, func_53(j, k, -1), 1);
				}
			}
		}
	
		Global_113648.f_2365.f_539.f_2387[0] = func_53(0, 0, -1);
		Global_113648.f_2365.f_539.f_2387[1] = func_53(1, 0, -1);
		Global_113648.f_2365.f_539.f_2387[2] = func_53(2, 0, -1);
		Global_113648.f_2365.f_539.f_2354 = 1;
		Global_97963 = true;
	}

	return;
}

BOOL func_101() // Position - 0x3BB5
{
	if (unk_0x76CD105BCAC6EB9F())
		return true;

	return Global_113648.f_2365.f_539.f_2354;
}

int func_102() // Position - 0x3BD8
{
	return Global_32163;
}

BOOL func_103(int iParam0) // Position - 0x3BE3
{
	if (iParam0 == -1)
		return false;
	else
		return IS_BIT_SET(Global_2672505.f_1, iParam0);

	return true;
}

void func_104() // Position - 0x3C05
{
	if (iLocal_54 != 0 && iLocal_53 != 2)
	{
		if (iLocal_53 == 0)
		{
			if (unk_0x76CD105BCAC6EB9F())
				iLocal_53 = 2;
		
			if (!func_101())
				iLocal_53 = 2;
		}
		else if (iLocal_53 == 1)
		{
			if (!unk_0x76CD105BCAC6EB9F() || !func_103(unk_0x259BE71D8A81D4FA()) || func_102() != 0)
				iLocal_53 = 2;
		}
	
		if (iLocal_53 == 2)
			iLocal_54 = 2;
	}

	return;
}

