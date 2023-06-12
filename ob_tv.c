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
	BOOL bLocal_22 = 0;
	BOOL bLocal_23 = 0;
	int iLocal_24 = 0;
	BOOL bLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	int iLocal_29 = 0;
	float fLocal_30 = 0f;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	BOOL bLocal_36 = 0;
	int iLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
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
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	BOOL bLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uScriptParam_0 = 0;
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
	bLocal_25 = true;
	iLocal_35 = -1;
	iLocal_42 = -1;
	iLocal_43 = -1;
	iLocal_44 = -1;
	TEXT_LABEL_ASSIGN_STRING(&uLocal_46, "NULL", 64);
	TEXT_LABEL_ASSIGN_STRING(&uLocal_62, "NULL", 64);

	if (unk_0x96CFB880BAC634CE(2))
		func_68();

	if (unk_0xFC8BFE4B41177C22(uScriptParam_0))
	{
		iLocal_37 = uScriptParam_0;
		uLocal_40 = uScriptParam_0;
	}

	while (true)
	{
		SYSTEM::WAIT(0);
		func_67();
	
		if (unk_0xFC8BFE4B41177C22(uScriptParam_0))
		{
			if (iLocal_43 != -1 && func_66() && !func_65() && !func_64(iLocal_43))
				func_68();
		
			if (unk_0x3555462DB47B7AB1() && unk_0x1403FEB4554982F8() != 3 && unk_0x6D231A0D52134FC1() == 3)
				func_68();
		
			if (func_63(13) || func_63(14))
				func_68();
		
			if (unk_0x1C3788A51C49D6AD(uScriptParam_0, 0))
				func_68();
		
			if (unk_0x71C1A46B17126AA4(uScriptParam_0))
			{
				if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
				{
					func_62();
				
					if (unk_0x8D91ADE44AC79BC9(uScriptParam_0) < 950)
						func_68();
				
					switch (iLocal_29)
					{
						case 0:
							func_59();
						
							if (iLocal_43 == 5)
							{
								if (func_58(18) == true && func_58(20) == false)
								{
									uLocal_41 = unk_0xC8C12645F5A0E13B(-809.962f, 170.919f, 75.7407f, 3f, "des_tvsmash");
								
									if (unk_0x502101046E18AD3F(uLocal_41))
										unk_0xBF86159B8525B1AE(uLocal_41, 9);
								
									unk_0xBBC29EBE6E1A48FA();
								}
							}
						
							if (iLocal_43 == -1)
							{
								func_68();
							}
							else
							{
								func_57();
								unk_0x69600B337BEBDC69("SAFEHOUSE_MICHAEL_SIT_SOFA", 0, -1);
								unk_0x8E1F26D6742EC167(0);
								Global_32224[iLocal_43 /*11*/].f_2 = 0;
								Global_32224[iLocal_43 /*11*/].f_6 = 1;
								Global_32224[iLocal_43 /*11*/] = unk_0xC5935DFB3F39785A(0, 2);
								Global_32224[iLocal_43 /*11*/].f_1 = 0;
								Global_32224[iLocal_43 /*11*/].f_4 = 0;
								Global_32224[iLocal_43 /*11*/].f_7 = 0;
								Global_32224[iLocal_43 /*11*/].f_8 = 0;
								Global_32224[iLocal_43 /*11*/].f_10 = 0;
								fLocal_30 = -4f;
								func_55(&uLocal_26);
								func_53();
								func_52();
								SYSTEM::WAIT(0);
								iLocal_29 = 1;
							}
							break;
					
						case 1:
							if (unk_0x3EE1A6D743332852(unk_0x259BE71D8A81D4FA(), 0))
								SYSTEM::WAIT(0);
							else if (unk_0x0D7186810BF44109(iLocal_37) && unk_0xE99B9AC112F55D16(iLocal_37, 1119092736))
								if (func_44() || Global_32224[iLocal_43 /*11*/].f_5)
									iLocal_29 = 2;
							else
								_CONTEXT_REMOVE_HELP_TEXT(&iLocal_42);
							break;
					
						case 2:
							func_53();
						
							if (!func_64(iLocal_43))
							{
								_CONTEXT_REMOVE_HELP_TEXT(&iLocal_42);
							
								if (_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("TV_HLP1" /*Press ~INPUT_CONTEXT~ to turn on the TV.*/))
									unk_0x428C32CC68809A35(1);
							}
						
							if (unk_0xFC8BFE4B41177C22(iLocal_37))
								if (!unk_0xE5E2AE8B19267B8A(iLocal_37))
									unk_0x4285E11B28063EE0(iLocal_37, 1, 0);
						
							if (unk_0xFC8BFE4B41177C22(iLocal_39))
								if (!unk_0xE5E2AE8B19267B8A(iLocal_39))
									unk_0x4285E11B28063EE0(iLocal_39, 1, 0);
						
							if (unk_0xFC8BFE4B41177C22(uLocal_38))
								if (unk_0xE5E2AE8B19267B8A(uLocal_38))
									unk_0x4285E11B28063EE0(uLocal_38, 0, 0);
						
							if (!unk_0x1B79E937E91F40C3(&uLocal_46, "NULL"))
								unk_0xC897319696131088(&uLocal_46, 0);
						
							unk_0x1BDD93397AF09D53(0);
							SYSTEM::WAIT(0);
						
							if (unk_0xFC8BFE4B41177C22(uLocal_40))
								unk_0xC850B483ACC98D91(uLocal_40);
						
							if (!func_64(iLocal_43))
							{
								if (Global_32224[iLocal_43 /*11*/] == 3 || Global_32224[iLocal_43 /*11*/] == 2 || Global_32224[iLocal_43 /*11*/] == -1)
									Global_32224[iLocal_43 /*11*/] = unk_0xC5935DFB3F39785A(0, 2);
							
								unk_0xECDF98280946398E(Global_32224[iLocal_43 /*11*/]);
								unk_0xBAF43CF1A42D5B1A(fLocal_30);
							}
							else
							{
								iLocal_44 = Global_32224[iLocal_43 /*11*/];
								iLocal_45 = Global_32224[iLocal_43 /*11*/].f_1;
								unk_0x7C7F282055FB517C(iLocal_44, func_41(iLocal_45), Global_32224[iLocal_43 /*11*/].f_9);
								unk_0xECDF98280946398E(iLocal_44);
							
								if (Global_32224[iLocal_43 /*11*/].f_7)
								{
									Global_32224[iLocal_43 /*11*/].f_5 = 0;
									Global_32224[iLocal_43 /*11*/].f_7 = 0;
								}
							}
						
							Global_32224[iLocal_43 /*11*/].f_2 = 1;
							func_40(133, 1);
							func_40(131, 1);
							func_40(132, 1);
							iLocal_29 = 3;
							break;
					
						case 3:
							if (Global_32224[iLocal_43 /*11*/].f_4)
								iLocal_29 = 6;
						
							if (Global_32224[iLocal_43 /*11*/].f_7 && func_64(iLocal_43))
							{
								Global_32224[iLocal_43 /*11*/].f_7 = 0;
								iLocal_29 = 6;
							}
						
							if (!func_38(iLocal_43))
							{
								func_37();
								iLocal_29 = 5;
							}
							else
							{
								func_35();
							
								if (unk_0x6609A7E82612E0DF() == -1)
									unk_0xECDF98280946398E(Global_32224[iLocal_43 /*11*/]);
							
								if (func_15())
									iLocal_29 = 6;
							}
							break;
					
						case 5:
							if (func_38(iLocal_43))
								iLocal_29 = 2;
						
							if (Global_32224[iLocal_43 /*11*/].f_4)
								iLocal_29 = 6;
							break;
					
						case 6:
							func_1();
						
							if (iLocal_42 != -1)
								_CONTEXT_REMOVE_HELP_TEXT(&iLocal_42);
						
							Global_32224[iLocal_43 /*11*/].f_5 = 0;
							Global_32224[iLocal_43 /*11*/].f_4 = 0;
							Global_32224[iLocal_43 /*11*/].f_1 = 0;
							Global_32224[iLocal_43 /*11*/].f_2 = 0;
							Global_32224[iLocal_43 /*11*/].f_7 = 0;
							Global_32224[iLocal_43 /*11*/].f_8 = 0;
							Global_32224[iLocal_43 /*11*/].f_10 = 0;
							iLocal_29 = 1;
							break;
					}
				}
			}
		}
		else
		{
			func_68();
			unk_0xBBC29EBE6E1A48FA();
		}
	}

	func_68();
	unk_0xBBC29EBE6E1A48FA();
	return;
}

void func_1() // Position - 0x4E6
{
	if (iLocal_43 != -1)
		Global_32224[iLocal_43 /*11*/] = unk_0x6609A7E82612E0DF();

	fLocal_30 = unk_0x666CD06EF4DA7E5F();
	unk_0xECDF98280946398E(-1);
	func_4();

	if (unk_0x486FF5D06E9659F1(joaat("family5")) == 0)
		if (!unk_0x1B79E937E91F40C3(&uLocal_46, "NULL"))
			unk_0xC897319696131088(&uLocal_46, 1);

	if (_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("TV_HLP1" /*Press ~INPUT_CONTEXT~ to turn on the TV.*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("TV_HLP2" /*Use ~INPUT_SCRIPT_LEFT_AXIS_X~ to change the channel.~n~Use ~INPUT_SCRIPT_LEFT_AXIS_Y~ to change the volume.~n~Press ~INPUT_NEXT_CAMERA~ to change view.~n~Press ~INPUT_CONTEXT~ to stop watching.~n~*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("TV_HLP5" /*Press ~INPUT_SCRIPT_RUP~ to use the TV controls.~n~Press ~INPUT_CONTEXT~ to turn off the TV.~n~*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("TV_HLP6" /*Press ~INPUT_SCRIPT_RUP~ to stop using the TV controls.~n~Use ~INPUT_SCRIPT_LEFT_AXIS_X~ to change the channel.~n~Use ~INPUT_SCRIPT_LEFT_AXIS_Y~ to change the volume.~n~Press ~INPUT_CONTEXT~ to turn off the TV.~n~*/))
		unk_0x428C32CC68809A35(1);

	func_3();
	func_52();

	if (unk_0xFC8BFE4B41177C22(uLocal_38))
		if (!unk_0xE5E2AE8B19267B8A(uLocal_38))
			unk_0x4285E11B28063EE0(uLocal_38, 1, 0);

	unk_0x85B701372CB0390F(0);
	func_2();
	return;
}

void func_2() // Position - 0x590
{
	if (unk_0x761778199FE1211C())
	{
		if (iLocal_87 == 1)
		{
			unk_0x4E6A84BCEF2DCCBF();
			iLocal_87 = 0;
		}
	}

	return;
}

void func_3() // Position - 0x5AC
{
	if (!(iLocal_35 == -1))
	{
		unk_0x61055542D9D877AE(iLocal_35);
	
		if (unk_0xFC8BFE4B41177C22(iLocal_37))
		{
			if (unk_0x4B423FAA24E8ABF0(iLocal_37) == joaat("v_ilev_mm_screen2") || unk_0x4B423FAA24E8ABF0(iLocal_37) == joaat("v_ilev_mm_scre_off"))
			{
				unk_0x4285E11B28063EE0(iLocal_37, 0, 0);
			
				if (unk_0x4B423FAA24E8ABF0(iLocal_37) == joaat("v_ilev_mm_scre_off"))
					unk_0x81645EE95A114FAE(0.5f, 0.5f, 1f, 1f, 255, 255, 255, 255, 0);
			}
			else
			{
				unk_0x81645EE95A114FAE(0.5f, 0.5f, 1f, 1f, 0, 0, 0, 255, 0);
			}
		}
	}

	if (unk_0xFC8BFE4B41177C22(iLocal_39))
		unk_0x4285E11B28063EE0(iLocal_39, 0, 0);

	return;
}

void func_4() // Position - 0x643
{
	if (bLocal_85)
	{
		unk_0xE37AF9002E782BA0(0, 0, 3000, 1, 0, 0);
	
		if (unk_0xBC886554B5888A64(uLocal_78))
			unk_0x4CBC5D1BC117616B(uLocal_78, 0);
	
		unk_0x85E6A1E36B5E2E4D(uLocal_78, 0);
		unk_0x64BB72494B9DF6DC(0);
	
		if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
		{
			unk_0x5D7CD709B34C90F0(unk_0x4A8C381C258A124D(), 0);
			unk_0x974022927CB47E68(unk_0x4A8C381C258A124D());
			unk_0xE237FA90A8AFEE59(unk_0x4A8C381C258A124D(), uLocal_31, 1, 0, 2);
		
			if (!unk_0xE916D57851F785AB(unk_0x259BE71D8A81D4FA()))
			{
				if (bLocal_36 == true)
				{
					bLocal_36 = false;
					unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), 1, 0);
				}
			}
		
			unk_0x4285E11B28063EE0(unk_0x4A8C381C258A124D(), 1, 0);
		}
	
		if (!unk_0x1B79E937E91F40C3(&uLocal_62, "NULL"))
			if (unk_0xBC2EE32DE886BD08(&uLocal_62))
				unk_0xB43467C43086A6A1(&uLocal_62);
	
		if (unk_0xFC8BFE4B41177C22(iLocal_39))
			unk_0x4285E11B28063EE0(iLocal_39, 1, 0);
	
		func_5(false, true, false, 0, false, false, false);
		unk_0x85B701372CB0390F(0);
		bLocal_85 = false;
	}

	return;
}

void func_5(BOOL bParam0, BOOL bParam1, BOOL bParam2, int iParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6) // Position - 0x70F
{
	if (bParam0)
	{
		unk_0x6A84D4B060E73EF5(unk_0x259BE71D8A81D4FA(), 0);
		unk_0xAC50C24F47D00104(unk_0x259BE71D8A81D4FA(), 1);
		unk_0xDAA51A56DBEC0391(unk_0x259BE71D8A81D4FA(), 1);
		func_14(1);
		unk_0xC138265FD0CDEA4E();
		unk_0x5C6622EF2CEA902F();
	
		if (Global_20383.f_1 > 3 && !bParam6)
		{
			if (unk_0xE87F28FD4128D063())
				unk_0x0F15249D24BC5ADA(0);
		
			if (!func_13())
				Global_20383.f_1 = 3;
		
			Global_21725 = 5;
		}
	
		func_12(1, iParam3, bParam2, 0);
		Global_63368 = 1;
		Global_75696 = 1;
		Global_78556 = 1;
	}
	else
	{
		func_14(0);
		unk_0xCCC82B30A1C53626();
		Global_63368 = 0;
	
		if (bParam1)
			unk_0x714097CFC7878BD0();
	
		unk_0xAC50C24F47D00104(unk_0x259BE71D8A81D4FA(), 0);
		unk_0xDAA51A56DBEC0391(unk_0x259BE71D8A81D4FA(), 0);
		func_12(0, iParam3, bParam2, 0);
	
		if (unk_0x76CD105BCAC6EB9F())
			if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()) && !func_10(unk_0x259BE71D8A81D4FA()) && !_NETWORK_IS_PLAYER_IN_SCTV(unk_0x259BE71D8A81D4FA(), 0) && !func_6() && !bParam4 && !bParam5 && !unk_0xAD15761928FCF79C())
				unk_0x935364B4448CD584(unk_0x4A8C381C258A124D(), 0);
		else if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()) && !func_10(unk_0x259BE71D8A81D4FA()) && !bParam4 && !bParam5)
			unk_0x935364B4448CD584(unk_0x4A8C381C258A124D(), 0);
	
		Global_78556 = 0;
	}

	return;
}

BOOL func_6() // Position - 0x85C
{
	return IS_BIT_SET(Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_36.f_18, 14);
}

BOOL _NETWORK_IS_PLAYER_IN_SCTV(int player, int bCheckTeam) // Position - 0x876
{
	BOOL flag;

	if (player == unk_0x259BE71D8A81D4FA())
		flag = func_8(-1, false) == 8;
	else
		flag = Global_1853910[player /*862*/].f_205 == 8;

	if (bCheckTeam == 1)
		if (unk_0x762604C40829DB72(player))
			flag = unk_0x1864096A95E36EBA(player) == 8;

	return flag;
}

int func_8(int iParam0, BOOL bParam1) // Position - 0x8C1
{
	int num;
	int num2;

	num2 = iParam0;

	if (num2 == -1)
		num2 = func_9();

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

int func_9() // Position - 0x902
{
	return Global_1574918;
}

BOOL func_10(int iParam0) // Position - 0x90E
{
	if (_NETWORK_IS_PLAYER_IN_SCTV(iParam0, 0))
		return true;

	if (func_11())
		if (iParam0 == unk_0x259BE71D8A81D4FA())
			return true;

	if (IS_BIT_SET(Global_2657589[iParam0 /*466*/].f_199, 2))
		return true;

	return false;
}

BOOL func_11() // Position - 0x94D
{
	return IS_BIT_SET(Global_2621446, 3);
}

int func_12(int iParam0, int iParam1, BOOL bParam2, int iParam3) // Position - 0x95B
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

BOOL func_13() // Position - 0x98E
{
	if (Global_20383.f_1 == 1 || Global_20383.f_1 == 0)
		return true;

	return false;
}

void func_14(int iParam0) // Position - 0x9B5
{
	if (iParam0 == 1)
		unk_0x0B0C9A0F9AAEB7F0(&Global_8253, 13);
	else
		unk_0x8744D2E3FC95740E(&Global_8253, 13);

	return;
}

BOOL func_15() // Position - 0x9D8
{
	if (!func_64(iLocal_43))
	{
		if (func_31(&uLocal_26) >= 1f && unk_0x65FFA94B82A71741(unk_0x4A8C381C258A124D(), uLocal_88, 1f, 1f, 1.5f, 0, 1, 0) && unk_0xF8F35890F43ED2AE(iLocal_37) == unk_0xF8F35890F43ED2AE(unk_0x4A8C381C258A124D()) && !func_30(8, -1) && !unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0) && unk_0xA702E444F81F0A83(unk_0x4A8C381C258A124D(), uLocal_31, 90f) && !unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D()) && !unk_0x3555462DB47B7AB1())
		{
			if (iLocal_42 == -1)
			{
				func_29();
				_CONTEXT_ADD_HELP_TEXT(&iLocal_42, 3, "TV_HLP5" /*Press ~INPUT_SCRIPT_RUP~ to use the TV controls.~n~Press ~INPUT_CONTEXT~ to turn off the TV.~n~*/, 0, 0, 0, 0);
			}
			else if (func_26(iLocal_42, true))
			{
				_CONTEXT_REMOVE_HELP_TEXT(&iLocal_42);
				func_55(&uLocal_26);
				Global_32224[iLocal_43 /*11*/].f_7 = 0;
			
				if (unk_0x91476A70AA1CB09A("SAFEHOUSE_MICHAEL_SIT_SOFA", 0, -1))
					unk_0xBF3D28CA44F3BE2D(-1, "MICHAEL_SOFA_TV_ON_MASTER", 0, 1);
			
				return true;
			}
		
			func_16();
		}
		else
		{
			if (_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("TV_HLP5" /*Press ~INPUT_SCRIPT_RUP~ to use the TV controls.~n~Press ~INPUT_CONTEXT~ to turn off the TV.~n~*/))
				unk_0x428C32CC68809A35(1);
		
			func_2();
			_CONTEXT_REMOVE_HELP_TEXT(&iLocal_42);
		}
	}

	return false;
}

void func_16() // Position - 0xAE4
{
	if (bLocal_85 == false)
	{
		unk_0x4CC1CF98851922CE(2, 222);
	
		if (unk_0x875A214D5EBCA509(2, 222))
		{
			_CONTEXT_REMOVE_HELP_TEXT(&iLocal_42);
			_CONTEXT_ADD_HELP_TEXT(&iLocal_42, 3, "TV_HLP6" /*Press ~INPUT_SCRIPT_RUP~ to stop using the TV controls.~n~Use ~INPUT_SCRIPT_LEFT_AXIS_X~ to change the channel.~n~Use ~INPUT_SCRIPT_LEFT_AXIS_Y~ to change the volume.~n~Press ~INPUT_CONTEXT~ to turn off the TV.~n~*/, 0, 0, 0, 0);
			func_25();
		}
	}
	else
	{
		unk_0x66EFB3D6110055C4(2, 200, 1);
	
		if (unk_0xE5E2AE8B19267B8A(unk_0x4A8C381C258A124D()))
			unk_0x4285E11B28063EE0(unk_0x4A8C381C258A124D(), 0, 0);
	
		if (bLocal_36)
			if (unk_0xE916D57851F785AB(unk_0x259BE71D8A81D4FA()))
				unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), 0, 0);
	
		unk_0x43AE50D2A33F6E2A();
		unk_0xAFD4869CC7EDDF08(unk_0x4A8C381C258A124D());
		func_23(true, true);
		unk_0x4CC1CF98851922CE(2, 222);
		func_17(0);
	
		if (unk_0x875A214D5EBCA509(2, 222) || unk_0xAE231F549813BBDF(2) && unk_0x61C3701AD6D746B2(2, 200))
		{
			_CONTEXT_REMOVE_HELP_TEXT(&iLocal_42);
			func_4();
		}
	}

	return;
}

void func_17(int iParam0) // Position - 0xB9E
{
	if (func_22())
		return;

	if (!(Global_20383.f_1 == 1))
	{
		if (func_21(0))
			func_18(iParam0);
	
		unk_0x0B0C9A0F9AAEB7F0(&Global_8254, 2);
	}

	return;
}

void func_18(int iParam0) // Position - 0xBD1
{
	if (func_22())
		return;

	if (Global_20584)
		if (func_20())
			func_19(true, true);
		else
			func_19(false, false);

	if (Global_20383.f_1 == 10 || Global_20383.f_1 == 9)
		unk_0x0B0C9A0F9AAEB7F0(&Global_8254, 16);

	if (unk_0xE87F28FD4128D063())
		unk_0x0F15249D24BC5ADA(0);

	Global_21725 = 5;

	if (iParam0 == 1)
		unk_0x0B0C9A0F9AAEB7F0(&Global_8253, 30);
	else
		unk_0x8744D2E3FC95740E(&Global_8253, 30);

	if (!func_13())
		Global_20383.f_1 = 3;

	return;
}

void func_19(BOOL bParam0, BOOL bParam1) // Position - 0xC5B
{
	if (bParam0)
	{
		if (func_21(0))
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

BOOL func_20() // Position - 0xCCF
{
	return IS_BIT_SET(Global_1962996, 5);
}

BOOL func_21(int iParam0) // Position - 0xCDD
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

BOOL func_22() // Position - 0xD34
{
	return IS_BIT_SET(Global_1962996, 19);
}

void func_23(BOOL bParam0, BOOL bParam1) // Position - 0xD43
{
	int num;
	int num2;
	float num3;

	num = 64;

	if (bParam0)
	{
		if (func_24(false))
		{
			if (!bLocal_22)
			{
				if (unk_0x91476A70AA1CB09A("SAFEHOUSE_MICHAEL_SIT_SOFA", 0, -1))
					unk_0xBF3D28CA44F3BE2D(-1, "MICHAEL_SOFA_TV_CHANGE_CHANNEL_MASTER", 0, 1);
			
				if (unk_0x6609A7E82612E0DF() == 0)
					unk_0xECDF98280946398E(1);
				else
					unk_0xECDF98280946398E(0);
			
				bLocal_22 = true;
			}
		}
		else if (bLocal_22)
		{
			bLocal_22 = false;
		}
	}

	if (bParam1)
	{
		num2 = unk_0x6C29A57AC29D7033(2, 219) - 127;
	
		if (!bLocal_23)
		{
			if (num2 > 0 + num)
			{
				num3 = unk_0x666CD06EF4DA7E5F();
				num3 = num3 - 0.5f;
			
				if (num3 < -36f)
					num3 = -36f;
			
				unk_0xBAF43CF1A42D5B1A(num3);
				iLocal_24 = unk_0x1DD05E817C89C737();
				bLocal_23 = true;
			}
		
			if (num2 < 0 - num)
			{
				num3 = unk_0x666CD06EF4DA7E5F();
				num3 = num3 + 0.5f;
			
				if (num3 > 0f)
					num3 = 0f;
			
				unk_0xBAF43CF1A42D5B1A(num3);
				iLocal_24 = unk_0x1DD05E817C89C737();
				bLocal_23 = true;
			}
		
			if (num2 < 0 + num && num2 > 0 - num)
			{
				bLocal_25 = true;
			}
			else if (bLocal_25)
			{
				if (unk_0x91476A70AA1CB09A("SAFEHOUSE_MICHAEL_SIT_SOFA", 0, -1))
				{
					if (num3 != -36f && num3 != 0f)
						unk_0xBF3D28CA44F3BE2D(-1, "MICHAEL_SOFA_REMOTE_CLICK_VOLUME_MASTER", 0, 1);
				
					bLocal_25 = false;
				}
			}
		}
	
		if (bLocal_23)
			if (num2 == 0 || unk_0x1DD05E817C89C737() > iLocal_24 + 24)
				bLocal_23 = false;
	}

	return;
}

BOOL func_24(BOOL bParam0) // Position - 0xE8A
{
	int num;
	int num2;

	num = 64;
	num2 = unk_0x6C29A57AC29D7033(2, 218) - 127;

	if (bParam0 || SYSTEM::TIMERA() > 300)
	{
		if (num2 > 0 + num || num2 < 0 - num)
		{
			SYSTEM::SETTIMERA(0);
			return true;
		}
	}

	return false;
}

void func_25() // Position - 0xED6
{
	float num;

	num = 50f;

	if (bLocal_85 == false)
	{
		uLocal_78 = unk_0x2CB6AB601EB7D2D9("DEFAULT_SCRIPTED_CAMERA", uLocal_79, uLocal_82, num, 0, 2);
		unk_0x8397B3389E13A5E5(uLocal_78, 100f);
		unk_0x4CBC5D1BC117616B(uLocal_78, 1);
		unk_0xE37AF9002E782BA0(1, 0, 3000, 1, 0, 0);
	
		if (unk_0xFC8BFE4B41177C22(iLocal_39))
			unk_0x4285E11B28063EE0(iLocal_39, 0, 0);
	
		if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
		{
			unk_0x5D7CD709B34C90F0(unk_0x4A8C381C258A124D(), 1);
			unk_0x974022927CB47E68(unk_0x4A8C381C258A124D());
		
			if (unk_0xE916D57851F785AB(unk_0x259BE71D8A81D4FA()))
			{
				unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), 0, 0);
				bLocal_36 = true;
			}
		
			unk_0xE237FA90A8AFEE59(unk_0x4A8C381C258A124D(), uLocal_31, -1, 0, 2);
			unk_0x4285E11B28063EE0(unk_0x4A8C381C258A124D(), 0, 0);
		}
	
		if (!unk_0x1B79E937E91F40C3(&uLocal_62, "NULL"))
			if (!unk_0xBC2EE32DE886BD08(&uLocal_62))
				unk_0xCAC4020CCF361AC8(&uLocal_62);
	
		func_5(true, true, false, 0, false, false, false);
		unk_0x85B701372CB0390F(1);
		bLocal_85 = true;
	}

	return;
}

BOOL func_26(int iParam0, BOOL bParam1) // Position - 0xFAD
{
	int num;

	num = func_27(iParam0);

	if (num == -1)
		return false;

	if (!unk_0x75EAB09F5E974116(unk_0xB6B621402486C3E4()))
		return false;

	if (func_21(0))
		return false;

	if (unk_0xFD216000DC314A92())
		return false;

	if (num > -1 && num < 6)
	{
		if (Global_44000[num /*32*/] == true && Global_44000[num /*32*/].f_4 == 1)
		{
			if (bParam1)
				if (Global_44000[num /*32*/].f_29)
					return false;
		
			Global_44000[num /*32*/].f_5 = 1;
			Global_44000[num /*32*/].f_29 = 1;
			return true;
		}
		else
		{
			Global_44000[num /*32*/] == false;
			Global_44000[num /*32*/].f_7;
		}
	}

	return false;
}

int func_27(int iParam0) // Position - 0x1065
{
	int i;

	if (iParam0 < 0)
		return -1;

	i = 0;

	for (i = 0; i < 6; i = i + 1)
	{
		if (Global_44000[i /*32*/].f_1 == iParam0)
			return i;
	}

	return -1;
}

void _CONTEXT_ADD_HELP_TEXT(var uParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6) // Position - 0x10A0
{
	int i;

	unk_0x486FF5D06E9659F1(joaat("context_controller")) < 1;

	if (unk_0x3555462DB47B7AB1())
	{
		if (!(*uParam0 == -1))
			_CONTEXT_REMOVE_HELP_TEXT(uParam0);
	
		return;
	}

	if (!(*uParam0 == -1))
		return;

	i = 0;

	for (i = 0; i < 6; i = i + 1)
	{
		if (!Global_44000[i /*32*/])
		{
			Global_44000[i /*32*/] = true;
			Global_44000[i /*32*/].f_1 = Global_44201;
			Global_44201 = Global_44201 + 1;
			Global_44000[i /*32*/].f_4 = 0;
			Global_44000[i /*32*/].f_29 = 0;
			Global_44000[i /*32*/].f_5 = 0;
			Global_44000[i /*32*/].f_2 = iParam1;
			TEXT_LABEL_ASSIGN_STRING(&(Global_44000[i /*32*/].f_8), sParam2, 16);
			Global_44000[i /*32*/].f_6 = iParam3;
			Global_44000[i /*32*/].f_31 = unk_0x8F76B2250AC806FA();
			Global_44000[i /*32*/].f_7 = 0;
			Global_44000[i /*32*/].f_3 = iParam5;
		
			if (!unk_0xD6F9DEE4765092A9(sParam4))
			{
				Global_44000[i /*32*/].f_12 = 1;
				TEXT_LABEL_ASSIGN_STRING(&(Global_44000[i /*32*/].f_13), sParam4, 64);
				Global_44000[i /*32*/].f_30 = iParam6;
			}
			else
			{
				Global_44000[i /*32*/].f_12 = 0;
				Global_44000[i /*32*/].f_30 = 0;
			}
		
			*uParam0 = Global_44000[i /*32*/].f_1;
			return;
		}
	}

	return;
}

void func_29() // Position - 0x11CB
{
	if (unk_0x761778199FE1211C())
	{
		if (iLocal_87 == 0)
		{
			unk_0x005E8B7CFA7D52A6("TV_Controls");
			iLocal_87 = 1;
		}
	}

	return;
}

BOOL func_30(int iParam0, int iParam1) // Position - 0x11EB
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

float func_31(var uParam0) // Position - 0x1223
{
	if (func_34(uParam0))
		if (func_33(uParam0))
			return uParam0->f_2;
		else
			return func_32(IS_BIT_SET(*uParam0, 4)) - uParam0->f_1;

	return uParam0->f_1;
}

float func_32(BOOL bParam0) // Position - 0x125F
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

BOOL func_33(var uParam0) // Position - 0x12B7
{
	return IS_BIT_SET(*uParam0, 2);
}

BOOL func_34(var uParam0) // Position - 0x12C4
{
	return IS_BIT_SET(*uParam0, 1);
}

void func_35() // Position - 0x12D1
{
	float num;

	num = 1f;
	func_36(&num);
	unk_0x61055542D9D877AE(iLocal_35);
	unk_0xA4F67CEB594AE064(4);
	unk_0xA66AC5949E305457(1);
	unk_0x1A926FCDE89B4E6E(0.5f, 0.5f, num, 1f, 0f, 255, 255, 255, 255);
	unk_0x61055542D9D877AE(unk_0xB803C9D209A7C3DC());
	return;
}

void func_36(var uParam0) // Position - 0x1312
{
	float num;
	float num2;
	float num3;

	num = unk_0x4AE9635532D92447(0);

	if (num <= 16f / 9f)
	{
		num2 = num / 16f / 9f;
		num3 = *uParam0;
		*uParam0 = num3 * num2;
	}

	return;
}

void func_37() // Position - 0x134F
{
	Global_32224[iLocal_43 /*11*/].f_7 = 0;
	Global_32224[iLocal_43 /*11*/] = unk_0x6609A7E82612E0DF();
	fLocal_30 = unk_0x666CD06EF4DA7E5F();

	if (unk_0xBC2EE32DE886BD08(&uLocal_62))
		unk_0xB43467C43086A6A1(&uLocal_62);

	if (_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("TV_HLP1" /*Press ~INPUT_CONTEXT~ to turn on the TV.*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("TV_HLP2" /*Use ~INPUT_SCRIPT_LEFT_AXIS_X~ to change the channel.~n~Use ~INPUT_SCRIPT_LEFT_AXIS_Y~ to change the volume.~n~Press ~INPUT_NEXT_CAMERA~ to change view.~n~Press ~INPUT_CONTEXT~ to stop watching.~n~*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("TV_HLP5" /*Press ~INPUT_SCRIPT_RUP~ to use the TV controls.~n~Press ~INPUT_CONTEXT~ to turn off the TV.~n~*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("TV_HLP6" /*Press ~INPUT_SCRIPT_RUP~ to stop using the TV controls.~n~Use ~INPUT_SCRIPT_LEFT_AXIS_X~ to change the channel.~n~Use ~INPUT_SCRIPT_LEFT_AXIS_Y~ to change the volume.~n~Press ~INPUT_CONTEXT~ to turn off the TV.~n~*/))
		unk_0x428C32CC68809A35(1);

	_CONTEXT_REMOVE_HELP_TEXT(&iLocal_42);
	unk_0xECDF98280946398E(-1);
	SYSTEM::WAIT(0);
	func_3();
	func_52();
	return;
}

BOOL func_38(int iParam0) // Position - 0x13CF
{
	var unk;

	unk = { _GET_PLAYER_COORDS(unk_0x259BE71D8A81D4FA()) };

	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 6:
			return true;
	
		case 4:
			if (unk.f_2 < 74f)
				return true;
			break;
	
		case 5:
			if (unk.f_2 > 75f)
				return true;
			break;
	}

	return false;
}

Vector3 _GET_PLAYER_COORDS(var uParam0) // Position - 0x1444
{
	return unk_0xD1A6A821F5AC81DB(unk_0x56E414973C2A8C0E(uParam0), 0);
}

void func_40(int iParam0, int iParam1) // Position - 0x1457
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

char* func_41(int iParam0) // Position - 0x14B4
{
	char* str;

	switch (iParam0)
	{
		case 1:
			str = "PL_STD_CNT";
			break;
	
		case 2:
			str = "PL_STD_WZL";
			break;
	
		case 3:
			str = "PL_LO_CNT";
			break;
	
		case 4:
			str = "PL_LO_WZL";
			break;
	
		case 7:
			str = "PL_SP_WORKOUT";
			break;
	
		case 8:
			str = "PL_SP_INV";
			break;
	
		case 9:
			str = "PL_SP_INV_EXP";
			break;
	
		case 5:
			str = "PL_LO_RS";
			break;
	
		case 6:
			str = "PL_LO_RS_CUTSCENE";
			break;
	
		case 10:
			str = "PL_SP_PLSH1_INTRO";
			break;
	
		case 11:
			str = "PL_LES1_FAME_OR_SHAME";
			break;
	
		case 12:
			str = "PL_STD_WZL_FOS_EP2";
			break;
	
		case 13:
			str = "PL_MP_WEAZEL";
			break;
	
		case 14:
			str = "PL_MP_CCTV";
			break;
	}

	return str;
}

BOOL _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(char* message) // Position - 0x1593
{
	unk_0x39DCBE5519BD783A(message);
	return unk_0x7EBCD400E7DE179C(0);
}

void _CONTEXT_REMOVE_HELP_TEXT(var uParam0) // Position - 0x15A6
{
	int num;

	if (*uParam0 == -1)
		return;

	num = func_27(*uParam0);

	if (num == -1)
	{
		*uParam0 = -1;
		return;
	}

	if (num > -1 && num < 6)
	{
		if (Global_44000[num /*32*/])
		{
			Global_44000[num /*32*/].f_7 = 1;
			*uParam0 = -1;
			return;
		}
	}

	*uParam0 = -1;
	return;
}

BOOL func_44() // Position - 0x15FD
{
	if (func_31(&uLocal_26) < 1f)
	{
		_CONTEXT_REMOVE_HELP_TEXT(&iLocal_42);
		return false;
	}

	if (!unk_0x65FFA94B82A71741(unk_0x4A8C381C258A124D(), uLocal_88, 1f, 1f, 1.5f, 0, 1, 0) || !unk_0xA702E444F81F0A83(unk_0x4A8C381C258A124D(), uLocal_31, 90f) || unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D()))
	{
		_CONTEXT_REMOVE_HELP_TEXT(&iLocal_42);
		return false;
	}

	if (unk_0xF8F35890F43ED2AE(iLocal_37) != unk_0xF8F35890F43ED2AE(unk_0x4A8C381C258A124D()))
	{
		_CONTEXT_REMOVE_HELP_TEXT(&iLocal_42);
		return false;
	}

	if (func_30(8, -1))
	{
		_CONTEXT_REMOVE_HELP_TEXT(&iLocal_42);
		return false;
	}

	if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
	{
		_CONTEXT_REMOVE_HELP_TEXT(&iLocal_42);
		return false;
	}

	if (Global_97609)
	{
		_CONTEXT_REMOVE_HELP_TEXT(&iLocal_42);
		return false;
	}

	if (Global_32224[iLocal_43 /*11*/].f_8)
	{
		_CONTEXT_REMOVE_HELP_TEXT(&iLocal_42);
		return false;
	}

	if (iLocal_42 == -1)
	{
		_CONTEXT_ADD_HELP_TEXT(&iLocal_42, 3, "TV_HLP1" /*Press ~INPUT_CONTEXT~ to turn on the TV.*/, 0, 0, 0, 0);
		return false;
	}

	if (func_26(iLocal_42, true))
	{
		_CONTEXT_REMOVE_HELP_TEXT(&iLocal_42);
		func_55(&uLocal_26);
		Global_32224[iLocal_43 /*11*/].f_7 = 1;
	
		if (unk_0x91476A70AA1CB09A("SAFEHOUSE_MICHAEL_SIT_SOFA", 0, -1))
			unk_0xBF3D28CA44F3BE2D(-1, "MICHAEL_SOFA_TV_ON_MASTER", 0, 1);
	
		func_45(309, 0, 0);
		return true;
	}

	return false;
}

void func_45(int iParam0, int iParam1, int iParam2) // Position - 0x172C
{
	BOOL flag;

	iParam0 < 0;

	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		_STAT_SET_PACKED_BOOL(891 + iParam0, 1, -1);
	}

	flag = true;

	if (Global_113648.f_10196[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_113648.f_10196[iParam0 /*12*/].f_6 == 11 || Global_113648.f_10196[iParam0 /*12*/].f_6 == 12)
			flag = false;
	}
	else
	{
		Global_113648.f_10196[iParam0 /*12*/].f_5 = 1;
		Global_113648.f_10196[iParam0 /*12*/].f_10 = iParam1;
		Global_113648.f_10196[iParam0 /*12*/].f_11 = iParam2;
	
		if (iParam0 == 287)
			unk_0x8DD7F37773EBD5B9(joaat("NUM_HIDDEN_PACKAGES_0"), 50, 0);
	
		if (iParam0 == 286)
			unk_0x8DD7F37773EBD5B9(joaat("NUM_HIDDEN_PACKAGES_1"), 50, 0);
	
		if (iParam0 == 299)
			unk_0x8DD7F37773EBD5B9(joaat("NUM_HIDDEN_PACKAGES_3"), 50, 0);
	}

	if (flag)
		func_46();

	return;
}

void func_46() // Position - 0x1812
{
	int num;
	float num2;
	float num3;
	float num4;
	float num5;
	float num6;
	float num7;
	float num8;
	float value;
	int num9;

	num = 0;
	Global_113384 = 0;
	Global_113385 = 0;
	Global_113386 = 0;
	Global_113387 = 0;
	Global_113388 = 0;
	Global_113389 = 0;
	Global_113390 = 0;
	num2 = 0f;
	num3 = 0f;
	num4 = 0f;
	num5 = 0f;
	num6 = 0f;
	num7 = 0f;
	num8 = 0f;
	value = Global_113648.f_10196.f_3853;
	Global_113648.f_10196.f_3853 = 0f;

	while (num < 321)
	{
		if (Global_113648.f_10196[num /*12*/].f_5 == 1)
		{
			switch (Global_113648.f_10196[num /*12*/].f_6)
			{
				case 1:
					Global_113384 = Global_113384 + 1;
					num2 = num2 + Global_113648.f_10196[num /*12*/].f_4;
					break;
			
				case 3:
					Global_113385 = Global_113385 + 1;
					num3 = num3 + Global_113648.f_10196[num /*12*/].f_4;
					break;
			
				case 5:
					Global_113386 = Global_113386 + 1;
					num4 = num4 + Global_113648.f_10196[num /*12*/].f_4;
					break;
			
				case 7:
					Global_113387 = Global_113387 + 1;
					num5 = num5 + Global_113648.f_10196[num /*12*/].f_4;
					break;
			
				case 9:
					Global_113388 = Global_113388 + 1;
					num6 = num6 + (Global_113648.f_10196[num /*12*/].f_4 * 4f);
					break;
			
				case 11:
					Global_113389 = Global_113389 + 1;
					num7 = num7 + Global_113648.f_10196[num /*12*/].f_4;
					break;
			
				case 13:
					Global_113390 = Global_113390 + 1;
					num8 = num8 + Global_113648.f_10196[num /*12*/].f_4;
					break;
			
				default:
					break;
			}
		}
	
		num = num + 1;
	}

	if (Global_113367 > 0)
		if (Global_113384 == Global_113367)
			num2 = 55f;

	if (Global_113368 > 0)
		if (Global_113385 == Global_113368)
			num3 = 10f;

	if (Global_113369 > 0)
		if (Global_113386 == Global_113369)
			num4 = 0f;

	if (Global_113370 > 0)
		if (Global_113387 == Global_113370)
			num5 = 10f;

	if (Global_113371 > 0)
	{
		if (Global_113388 == Global_113371 || (Global_113371 * 10) / Global_113388 < 41 || Global_113388 > Global_113374 || Global_113388 == Global_113374)
		{
			if (!IS_BIT_SET(Global_113648.f_10196.f_3856, 14))
			{
				if (Global_113388 == Global_113371)
				{
					unk_0x8DD7F37773EBD5B9(joaat("NUM_RNDEVENTS_COMPLETED"), Global_113371, 0);
					unk_0x0B0C9A0F9AAEB7F0(&(Global_113648.f_10196.f_3856), 14);
				}
			}
		
			num6 = 5f;
		}
	}

	if (Global_113372 > 0)
		if (Global_113389 == Global_113372)
			num7 = 15f;

	if (Global_113373 > 0)
		if (Global_113390 == Global_113373)
			num8 = 5f;

	Global_113648.f_10196.f_3853 = num2 + num3 + num4 + num5 + num6 + num7 + num8;

	if (Global_113388 > Global_113374 || Global_113388 == Global_113374)
		num9 = Global_113374;
	else
		num9 = Global_113388;

	unk_0x1164A75E490C27B6(joaat("NUM_MISSIONS_COMPLETED"), Global_113384, 1);
	unk_0x1164A75E490C27B6(joaat("NUM_MISSIONS_AVAILABLE"), Global_113367, 1);
	unk_0x1164A75E490C27B6(joaat("NUM_MINIGAMES_COMPLETED"), Global_113385, 1);
	unk_0x1164A75E490C27B6(joaat("NUM_MINIGAMES_AVAILABLE"), Global_113368, 1);
	unk_0x1164A75E490C27B6(joaat("NUM_ODDJOBS_COMPLETED"), Global_113386, 1);
	unk_0x1164A75E490C27B6(joaat("NUM_ODDJOBS_AVAILABLE"), Global_113369, 1);
	unk_0x1164A75E490C27B6(joaat("NUM_RNDPEOPLE_COMPLETED"), Global_113387, 1);
	unk_0x1164A75E490C27B6(joaat("NUM_RNDPEOPLE_AVAILABLE"), Global_113370, 1);
	unk_0x1164A75E490C27B6(joaat("NUM_RNDEVENTS_COMPLETED"), num9, 1);
	unk_0x1164A75E490C27B6(joaat("NUM_RNDEVENTS_AVAILABLE"), Global_113374, 1);
	unk_0x1164A75E490C27B6(joaat("NUM_MISC_COMPLETED"), Global_113390 + Global_113389, 1);
	unk_0x1164A75E490C27B6(joaat("NUM_MISC_AVAILABLE"), Global_113373 + Global_113372, 1);
	Global_113391 = (Global_113384 * 100) / Global_113367;
	Global_113393 = ((Global_113386 + Global_113385) * 100) / (Global_113369 + Global_113368);
	Global_113392 = ((Global_113387 + num9) * 100) / (Global_113370 + Global_113374);
	Global_113394 = ((Global_113389 + Global_113390) * 100) / (Global_113372 + Global_113373);
	unk_0x4F8678C02360C3D2(joaat("TOTAL_PROGRESS_MADE"), Global_113648.f_10196.f_3853, 1);
	unk_0x1164A75E490C27B6(joaat("PERCENT_STORY_MISSIONS"), Global_113391, 1);
	unk_0x1164A75E490C27B6(joaat("PERCENT_AMBIENT_MISSIONS"), Global_113392, 1);
	unk_0x1164A75E490C27B6(joaat("PERCENT_ODDJOBS"), Global_113393, 1);

	if (value > 0f && SYSTEM::FLOOR(value) < SYSTEM::FLOOR(Global_113648.f_10196.f_3853))
		func_50(13, SYSTEM::FLOOR(Global_113648.f_10196.f_3853));

	if (!unk_0xB00920C3C99A34C5())
	{
		if (!Global_78558)
		{
			if (func_49() == 2 == false && !unk_0x76CD105BCAC6EB9F())
			{
				if (unk_0x5676319ACE5BEC37())
					Global_113382 = 0;
			
				if (!Global_63362)
					func_47();
			}
		}
	}

	return;
}

int func_47() // Position - 0x1CD0
{
	if (_IS_MISSION_REPEAT_ACTIVE(false))
		return 0;

	if (Global_100720.f_8)
		if (Global_100720.f_10 > 0)
			return 0;
	else if (Global_100720.f_10 > 1)
		return 0;

	Global_100720.f_10 = Global_100720.f_10 + 1;
	return 1;
}

BOOL _IS_MISSION_REPEAT_ACTIVE(BOOL bExcludeBenchmark) // Position - 0x1D1B
{
	if (!bExcludeBenchmark && unk_0x486FF5D06E9659F1(joaat("benchmark")) > 0)
		return true;

	return IS_BIT_SET(Global_78807, 0);
}

int func_49() // Position - 0x1D43
{
	return Global_32163;
}

int func_50(int iParam0, int iParam1) // Position - 0x1D4E
{
	int num;

	if (iParam0 < 0)
		return 0;

	if (iParam0 > 78)
		return 0;

	if (iParam1 <= 0 || iParam1 > 100)
		return 0;

	num = unk_0xB3E8CE9ABB5AD331(iParam0);

	if (iParam1 > num)
		return unk_0xE3872E56266EDEDC(iParam0, iParam1);

	return 0;
}

void _STAT_SET_PACKED_BOOL(int iParam0, int iParam1, int iParam2) // Position - 0x1D9F
{
	if (iParam2 == -1)
		iParam2 = func_9();

	unk_0xA595AA1819B05EA0(iParam0, iParam1, iParam2);
	return;
}

void func_52() // Position - 0x1DBD
{
	SYSTEM::WAIT(0);

	if (unk_0xC13AFEAFC3F7AD96("tvscreen"))
	{
		unk_0xF8211BE23F0D0552("tvscreen");
		iLocal_35 = -1;
		unk_0x61055542D9D877AE(unk_0xB803C9D209A7C3DC());
	}

	return;
}

void func_53() // Position - 0x1DE9
{
	var unk;

	if (iLocal_43 == 4)
		func_54();

	if (unk_0xC13AFEAFC3F7AD96("tvscreen"))
		unk_0xF8211BE23F0D0552("tvscreen");

	SYSTEM::WAIT(0);

	if (!unk_0xFC8BFE4B41177C22(iLocal_37))
		func_68();

	unk = unk_0x4B423FAA24E8ABF0(iLocal_37);
	unk_0x106F99CDCDEED9A0("tvscreen", 0);
	unk_0xF1C26EB47E689774(unk);
	SYSTEM::WAIT(0);

	if (iLocal_43 != 4)
	{
		while (!unk_0x4D05B3FECBCB8D97(unk))
		{
			if (!unk_0xFC8BFE4B41177C22(iLocal_37))
				func_68();
		
			if (!unk_0x71C1A46B17126AA4(iLocal_37))
				func_68();
		
			if (!unk_0xC13AFEAFC3F7AD96("tvscreen"))
				unk_0x106F99CDCDEED9A0("tvscreen", 0);
		
			if (!unk_0x4D05B3FECBCB8D97(unk))
				unk_0xF1C26EB47E689774(unk);
		
			SYSTEM::WAIT(0);
		}
	}

	iLocal_35 = unk_0x08732C0099FA1813("tvscreen");
	func_3();
	return;
}

void func_54() // Position - 0x1EA7
{
	if (unk_0xFC8BFE4B41177C22(iLocal_37))
		if (unk_0x4B423FAA24E8ABF0(iLocal_37) == joaat("v_ilev_mm_screen2"))
			return;

	iLocal_37 = 0;
	iLocal_37 = unk_0x43AFC452F25F3A2F(joaat("v_ilev_mm_screen2"), uLocal_31, 1, 1, 0);
	unk_0x5C96CEA06531AB03(iLocal_37, uLocal_34);
	unk_0x5D7CD709B34C90F0(iLocal_37, 1);
	unk_0x4285E11B28063EE0(iLocal_37, 0, 0);
	iLocal_39 = 0;
	iLocal_39 = unk_0x43AFC452F25F3A2F(joaat("v_ilev_mm_screen2_vl"), uLocal_31, 1, 1, 0);
	unk_0x5C96CEA06531AB03(iLocal_39, uLocal_34);
	unk_0x5D7CD709B34C90F0(iLocal_39, 1);
	unk_0x4285E11B28063EE0(iLocal_39, 0, 0);
	return;
}

void func_55(var uParam0) // Position - 0x1F24
{
	func_56(uParam0, 0f);
	return;
}

void func_56(var uParam0, float fParam1) // Position - 0x1F33
{
	uParam0->f_1 = func_32(IS_BIT_SET(*uParam0, 4)) - fParam1;
	unk_0x0B0C9A0F9AAEB7F0(uParam0, 1);
	unk_0x8744D2E3FC95740E(uParam0, 2);
	uParam0->f_2 = 0f;
	return;
}

void func_57() // Position - 0x1F5E
{
	return;
}

BOOL func_58(int iParam0) // Position - 0x1F66
{
	if (iParam0 == 94 || iParam0 == -1)
		return false;

	return Global_113648.f_9087.f_330[iParam0 /*6*/];
}

void func_59() // Position - 0x1F92
{
	uLocal_31 = { unk_0xD1A6A821F5AC81DB(iLocal_37, 1) };
	uLocal_34 = unk_0xCFC0C995455A6204(iLocal_37);
	func_61();

	if (unk_0x4B423FAA24E8ABF0(iLocal_37) == joaat("prop_tv_03"))
	{
		if (SYSTEM::VDIST(uLocal_31, -9.541955f, -1440.9166f, 31.346916f) < 3f)
		{
			iLocal_43 = 0;
			uLocal_79 = { -9.8135f, -1440.9128f, 31.3654f };
			uLocal_82 = { 0f, 0f, -134.3211f };
			uLocal_88 = { -9.3078f, -1440.931f, 30.1015f };
			TEXT_LABEL_ASSIGN_STRING(&uLocal_46, "SE_FRANKLIN_AUNT_HOUSE_RADIO_01", 64);
			TEXT_LABEL_ASSIGN_STRING(&uLocal_62, "TV_FRANKLINS_HOUSE_SOCEN", 64);
		}
	}
	else if (unk_0x4B423FAA24E8ABF0(iLocal_37) == joaat("prop_trev_tv_01"))
	{
		if (SYSTEM::VDIST(uLocal_31, 1978.425f, 3819.6572f, 34.26763f) < 3f)
		{
			iLocal_43 = 2;
			uLocal_79 = { 1978.2303f, 3819.6504f, 34.2724f };
			uLocal_82 = { 0f, 0f, -105.15f };
			uLocal_88 = { 1978.3303f, 3819.717f, 32.4501f };
			func_60();
			TEXT_LABEL_ASSIGN_STRING(&uLocal_46, "SE_TREVOR_TRAILER_RADIO_01", 64);
			TEXT_LABEL_ASSIGN_STRING(&uLocal_62, "TV_TREVORS_TRAILER", 64);
		}
	}
	else if (unk_0x4B423FAA24E8ABF0(iLocal_37) == joaat("prop_tv_flat_01"))
	{
		if (SYSTEM::VDIST(uLocal_31, 3.6654f, 529.8486f, 173.6281f) < 3f)
		{
			iLocal_43 = 1;
			uLocal_79 = { 2.5724f, 527.9989f, 176.1619f };
			uLocal_82 = { 0f, 0f, -29.9488f };
			uLocal_88 = { 3.6654f, 529.8486f, 173.6281f };
			TEXT_LABEL_ASSIGN_STRING(&uLocal_46, "SE_FRANKLIN_HILLS_HOUSE_RADIO_01", 64);
			TEXT_LABEL_ASSIGN_STRING(&uLocal_62, "TV_FRANKLINS_HOUSE_VINEWOOD", 64);
		}
	}
	else if (unk_0x4B423FAA24E8ABF0(iLocal_37) == joaat("prop_tv_flat_02"))
	{
		if (SYSTEM::VDIST(uLocal_31, -1160.6947f, -1520.7448f, 10.49168f) < 3f)
		{
			iLocal_43 = 3;
			uLocal_79 = { -1160.5024f, -1520.7598f, 10.7393f };
			uLocal_82 = { 0f, 0f, 60.061f };
			uLocal_88 = { -1160.143f, -1520.4946f, 9.6555f };
			TEXT_LABEL_ASSIGN_STRING(&uLocal_46, "TREVOR_APARTMENT_RADIO", 64);
			TEXT_LABEL_ASSIGN_STRING(&uLocal_62, "TV_FLOYDS_APARTMENT", 64);
		}
	}
	else if (unk_0x4B423FAA24E8ABF0(iLocal_37) == joaat("v_ilev_mm_screen2") || unk_0x4B423FAA24E8ABF0(iLocal_37) == joaat("v_ilev_mm_scre_off"))
	{
		if (SYSTEM::VDIST(uLocal_31, -802.25275f, 173.03743f, 74.35708f) < 3f)
		{
			iLocal_43 = 4;
			uLocal_79 = { -802.8972f, 172.537f, 74.5801f };
			uLocal_82 = { 0f, 0f, -69.0273f };
			uLocal_88 = { -800.7292f, 173.2194f, 71.8348f };
			TEXT_LABEL_ASSIGN_STRING(&uLocal_46, "SE_MICHAELS_HOUSE_RADIO", 64);
			TEXT_LABEL_ASSIGN_STRING(&uLocal_62, "TV_MICHAELS_HOUSE", 64);
		}
	}
	else if (unk_0x4B423FAA24E8ABF0(iLocal_37) == joaat("des_tvsmash_start"))
	{
		if (SYSTEM::VDIST(uLocal_31, -809.962f, 170.919f, 75.7407f) < 3f)
		{
			iLocal_43 = 5;
			uLocal_79 = { -808.3051f, 171.2623f, 77.2822f };
			uLocal_82 = { 1.8886f, 0f, 110.9232f };
			uLocal_88 = { -809.962f, 170.919f, 75.7407f };
			TEXT_LABEL_ASSIGN_STRING(&uLocal_46, "SE_MICHAELS_HOUSE_RADIO", 64);
			TEXT_LABEL_ASSIGN_STRING(&uLocal_62, "TV_MICHAELS_HOUSE", 64);
		}
	}

	return;
}

void func_60() // Position - 0x2281
{
	uLocal_38 = unk_0x43AFC452F25F3A2F(joaat("prop_tt_screenstatic"), uLocal_31, 1, 1, 0);
	unk_0x5C96CEA06531AB03(uLocal_38, uLocal_34);
	unk_0x4285E11B28063EE0(uLocal_38, 1, 0);
	unk_0x5D7CD709B34C90F0(uLocal_38, 1);
	return;
}

void func_61() // Position - 0x22B2
{
	unk_0x7C7F282055FB517C(0, func_41(1), 0);

	if (func_58(22))
		unk_0x7C7F282055FB517C(1, func_41(12), 0);
	else
		unk_0x7C7F282055FB517C(1, func_41(2), 0);

	return;
}

void func_62() // Position - 0x22E8
{
	if (iLocal_43 == -1)
		return;

	if (Global_32224[iLocal_43 /*11*/].f_10 == 0)
	{
		if (iLocal_86 == 1)
		{
			if (unk_0xFC8BFE4B41177C22(uLocal_40))
				unk_0x935364B4448CD584(uLocal_40, 0);
		
			if (unk_0xFC8BFE4B41177C22(iLocal_37))
				unk_0x935364B4448CD584(iLocal_37, 0);
		
			if (unk_0xFC8BFE4B41177C22(iLocal_39))
				unk_0x935364B4448CD584(iLocal_39, 0);
		
			if (unk_0xFC8BFE4B41177C22(uLocal_38))
				unk_0x935364B4448CD584(uLocal_38, 0);
		
			iLocal_86 = 0;
		}
	}
	else if (iLocal_86 == 0)
	{
		if (unk_0xFC8BFE4B41177C22(uLocal_40))
			unk_0x935364B4448CD584(uLocal_40, 1);
	
		if (unk_0xFC8BFE4B41177C22(iLocal_37))
			unk_0x935364B4448CD584(iLocal_37, 1);
	
		if (unk_0xFC8BFE4B41177C22(iLocal_39))
			unk_0x935364B4448CD584(iLocal_39, 1);
	
		if (unk_0xFC8BFE4B41177C22(uLocal_38))
			unk_0x935364B4448CD584(uLocal_38, 1);
	
		iLocal_86 = 1;
	}

	return;
}

BOOL func_63(int iParam0) // Position - 0x239B
{
	return Global_43257 == iParam0;
}

BOOL func_64(int iParam0) // Position - 0x23A9
{
	if (iParam0 != -1)
		if (Global_32224[iParam0 /*11*/].f_5)
			return true;

	return false;
}

BOOL func_65() // Position - 0x23C8
{
	if (unk_0x761778199FE1211C())
		if (unk_0xAB154BFC15F33733() == 1f)
			return true;

	return false;
}

BOOL func_66() // Position - 0x23E5
{
	if (Global_97603 != -1)
		return IS_BIT_SET(Global_91469[Global_97603 /*34*/].f_15, 20);

	return false;
}

void func_67() // Position - 0x2408
{
	return;
}

void func_68() // Position - 0x2410
{
	if (iLocal_43 == -1)
		unk_0xBBC29EBE6E1A48FA();

	_CONTEXT_REMOVE_HELP_TEXT(&iLocal_42);

	if (iLocal_43 != -1)
	{
		func_1();
		Global_32224[iLocal_43 /*11*/].f_6 = 0;
		Global_32224[iLocal_43 /*11*/].f_7 = 0;
		Global_32224[iLocal_43 /*11*/].f_8 = 0;
		Global_32224[iLocal_43 /*11*/].f_4 = 0;
		Global_32224[iLocal_43 /*11*/].f_5 = 0;
		Global_32224[iLocal_43 /*11*/].f_2 = 0;
		Global_32224[iLocal_43 /*11*/] = -1;
		Global_32224[iLocal_43 /*11*/].f_1 = 0;
		Global_32224[iLocal_43 /*11*/].f_10 = 0;
	}

	if (_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("TV_HLP1" /*Press ~INPUT_CONTEXT~ to turn on the TV.*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("TV_HLP5" /*Press ~INPUT_SCRIPT_RUP~ to use the TV controls.~n~Press ~INPUT_CONTEXT~ to turn off the TV.~n~*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("TV_HLP6" /*Press ~INPUT_SCRIPT_RUP~ to stop using the TV controls.~n~Use ~INPUT_SCRIPT_LEFT_AXIS_X~ to change the channel.~n~Use ~INPUT_SCRIPT_LEFT_AXIS_Y~ to change the volume.~n~Press ~INPUT_CONTEXT~ to turn off the TV.~n~*/))
		unk_0x428C32CC68809A35(1);

	SYSTEM::WAIT(0);
	func_69();

	if (unk_0xBC2EE32DE886BD08(&uLocal_62))
		unk_0xB43467C43086A6A1(&uLocal_62);

	unk_0x3A2C09DEA2F7A5FB();
	func_2();
	unk_0xBBC29EBE6E1A48FA();
	return;
}

void func_69() // Position - 0x24D7
{
	func_52();

	if (unk_0xFC8BFE4B41177C22(iLocal_37))
	{
		if (unk_0x4B423FAA24E8ABF0(iLocal_37) == joaat("v_ilev_mm_screen2"))
		{
			unk_0x51C8BEA2005931AB(&iLocal_37);
			unk_0x55098D9E9AD58806(joaat("v_ilev_mm_screen2"));
		}
	}

	if (unk_0xFC8BFE4B41177C22(iLocal_39))
	{
		unk_0x51C8BEA2005931AB(&iLocal_39);
		unk_0x55098D9E9AD58806(joaat("v_ilev_mm_screen2_vl"));
	}

	if (unk_0xFC8BFE4B41177C22(uLocal_38))
	{
		unk_0x51C8BEA2005931AB(&uLocal_38);
		unk_0x55098D9E9AD58806(joaat("prop_tt_screenstatic"));
	}

	return;
}

