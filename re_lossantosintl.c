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
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 4;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 4;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 4;
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
	BOOL bLocal_77 = 0;
	BOOL bLocal_78 = 0;
	BOOL bLocal_79 = 0;
	BOOL bLocal_80 = 0;
	BOOL bLocal_81 = 0;
	BOOL bLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	float fLocal_85 = 0f;
	float fLocal_86 = 0f;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	BOOL bLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
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
	bLocal_78 = true;
	iLocal_84 = joaat("S_M_M_Pilot_01");
	iLocal_99 = 500;

	if (unk_0x96CFB880BAC634CE(3))
		func_12();

	uLocal_97 = unk_0x4A8C381C258A124D();

	while (true)
	{
		if (unk_0x1C2F771CDC87A3A5(uLocal_97, 0))
			iLocal_98 = 5;
	
		switch (iLocal_98)
		{
			case 0:
				iLocal_98 = 1;
				break;
		
			case 1:
				func_11();
				iLocal_98 = 2;
				break;
		
			case 2:
				if (func_10())
					iLocal_98 = 3;
				break;
		
			case 3:
				func_9();
				iLocal_98 = 4;
				break;
		
			case 4:
				if (Global_97609)
					iLocal_98 = 5;
			
				func_4();
				break;
		
			case 5:
				func_1();
				func_12();
				break;
		}
	
		SYSTEM::WAIT(iLocal_99);
	}

	return;
}

void func_1() // Position - 0x11A
{
	int i;

	for (i = 0; i < 4; i = i + 1)
	{
		if (unk_0xFC8BFE4B41177C22(uLocal_49[i]))
		{
			if (unk_0xF6C26AE940C14749(uLocal_49[i]) || !unk_0x1C2F771CDC87A3A5(uLocal_49[i], 0) && !unk_0xE5E2AE8B19267B8A(uLocal_49[i]))
			{
				unk_0x8C1F7D7A31B2A38E(&uLocal_49[i]);
				unk_0x734A9F4537A31459(&uLocal_55[i]);
			}
			else
			{
				if (i == 0 || i == 2)
					func_3(true);
			
				func_2(&uLocal_49[i], &uLocal_55[i]);
				unk_0x68298CA6191CDFDB(&uLocal_49[i]);
				unk_0xF09E30AF1B8FB379(&uLocal_55[i]);
			}
		}
	}

	if (unk_0xFC8BFE4B41177C22(uLocal_54))
	{
		if (unk_0xF6C26AE940C14749(uLocal_54))
		{
			unk_0x8C1F7D7A31B2A38E(&uLocal_54);
			unk_0x734A9F4537A31459(&uLocal_60);
		}
		else
		{
			func_2(&uLocal_54, &uLocal_60);
			unk_0x68298CA6191CDFDB(&uLocal_54);
			unk_0xF09E30AF1B8FB379(&uLocal_60);
		}
	}

	if (bLocal_82)
	{
		unk_0x7821F942CAEEBEE1(101, "AirportJetTakeOff");
		unk_0x7821F942CAEEBEE1(102, "AirportJetTakeOff");
		unk_0x7821F942CAEEBEE1(101, "AirportNew");
		unk_0x7821F942CAEEBEE1(102, "AirportNew");
		unk_0x7821F942CAEEBEE1(103, "AirplaneLandingRedux");
		unk_0x7821F942CAEEBEE1(104, "AirplaneLandingRedux");
		unk_0x7821F942CAEEBEE1(101, "EastWestFlight");
	}

	return;
}

void func_2(var uParam0, var uParam1) // Position - 0x233
{
	if (unk_0xFC8BFE4B41177C22(*uParam0) && unk_0xFC8BFE4B41177C22(*uParam1) && !unk_0x1C2F771CDC87A3A5(*uParam0, 0) && !unk_0x1C2F771CDC87A3A5(*uParam1, 0))
		if (unk_0x3F18810075C77D41(*uParam0))
			if (unk_0x050D073F91C5243C(*uParam0))
				if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
					unk_0x8737E7B1F3150A9F(*uParam1, *uParam0, 0, 0, unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), 8, 50f, -1f, 30f, 100, 50, 1);

	return;
}

void func_3(BOOL bParam0) // Position - 0x2B4
{
	if (bLocal_78)
	{
		if (unk_0xFC8BFE4B41177C22(uLocal_49[0]) && !unk_0x1C2F771CDC87A3A5(uLocal_49[0], 0))
			if (unk_0x3F18810075C77D41(uLocal_49[0]))
				if (!unk_0x050D073F91C5243C(uLocal_49[0]))
					if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()) && !unk_0x1C2F771CDC87A3A5(uLocal_55[0], 0) && !unk_0x1C2F771CDC87A3A5(uLocal_49[0], 0))
						unk_0x8737E7B1F3150A9F(uLocal_55[0], uLocal_49[0], 0, 0, unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), 8, 50f, -1f, 90f, 100, 50, 1);
				else if (bParam0)
					if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()) && !unk_0x1C2F771CDC87A3A5(uLocal_55[0], 0) && !unk_0x1C2F771CDC87A3A5(uLocal_49[0], 0))
						unk_0x8737E7B1F3150A9F(uLocal_55[0], uLocal_49[0], 0, 0, unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), 8, 50f, -1f, 90f, 100, 50, 1);
	
		if (unk_0xFC8BFE4B41177C22(uLocal_49[2]) && !unk_0x1C2F771CDC87A3A5(uLocal_49[2], 0))
			if (unk_0x3F18810075C77D41(uLocal_49[2]))
				if (!unk_0x050D073F91C5243C(uLocal_49[2]))
					if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()) && !unk_0x1C2F771CDC87A3A5(uLocal_55[2], 0) && !unk_0x1C2F771CDC87A3A5(uLocal_49[2], 0))
						unk_0x8737E7B1F3150A9F(uLocal_55[2], uLocal_49[2], 0, 0, unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), 8, 50f, -1f, 90f, 100, 50, 1);
				else if (bParam0)
					if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()) && !unk_0x1C2F771CDC87A3A5(uLocal_55[2], 0) && !unk_0x1C2F771CDC87A3A5(uLocal_49[2], 0))
						unk_0x8737E7B1F3150A9F(uLocal_55[2], uLocal_49[2], 0, 0, unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), 8, 50f, -1f, 90f, 100, 50, 1);
	}

	return;
}

void func_4() // Position - 0x493
{
	int i;

	switch (iLocal_88)
	{
		case 0:
			uLocal_61[0 /*3*/] = { -1542.1127f, -3023.8025f, 23.2538f };
			uLocal_61[1 /*3*/] = { -3089.888f, -1960.0751f, 313.559f };
			uLocal_61[2 /*3*/] = { -1037.6381f, -3316.1196f, 23.2475f };
			uLocal_61[3 /*3*/] = { 451.174f, -4009.4602f, 135.1171f };
			uLocal_74 = { -1612.1736f, -2688.442f, 12.9444f };
		
			if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
				if (unk_0xFE90F09EC43D7D44(unk_0x4A8C381C258A124D()) || unk_0xC5F2281709805477(unk_0x4A8C381C258A124D()) || unk_0x3EE1A6D743332852(unk_0x259BE71D8A81D4FA(), 0))
					bLocal_78 = false;
				else
					bLocal_78 = true;
		
			iLocal_88 = 1;
			break;
	
		case 1:
			unk_0xEC9DAA34BBB4658C(joaat("jet"));
			unk_0xEC9DAA34BBB4658C(iLocal_84);
			unk_0xD772E6694B8472A6(101, "AirportJetTakeOff");
			unk_0xD772E6694B8472A6(103, "AirplaneLandingRedux");
			unk_0xD772E6694B8472A6(101, "EastWestFlight");
			unk_0xD772E6694B8472A6(101, "AirportNew");
			unk_0xD772E6694B8472A6(104, "AirplaneLandingRedux");
			iLocal_88 = 2;
			break;
	
		case 2:
			if (!bLocal_82)
			{
				if (unk_0x6252BC0DD8A320DB(joaat("jet")) && unk_0x6252BC0DD8A320DB(iLocal_84) && unk_0x266D9DB5FCE4003B(101, "AirportJetTakeOff") && unk_0x266D9DB5FCE4003B(103, "AirplaneLandingRedux") && unk_0x266D9DB5FCE4003B(101, "AirportNew") && unk_0x266D9DB5FCE4003B(104, "AirplaneLandingRedux") && unk_0x266D9DB5FCE4003B(101, "EastWestFlight"))
				{
					bLocal_82 = true;
				}
				else
				{
					unk_0xEC9DAA34BBB4658C(joaat("jet"));
					unk_0xEC9DAA34BBB4658C(iLocal_84);
					unk_0xD772E6694B8472A6(101, "AirportJetTakeOff");
					unk_0xD772E6694B8472A6(102, "AirportJetTakeOff");
					unk_0xD772E6694B8472A6(101, "AirportNew");
					unk_0xD772E6694B8472A6(102, "AirportNew");
					unk_0xD772E6694B8472A6(101, "EastWestFlight");
				}
			}
		
			if (bLocal_82)
			{
				if (!unk_0x7B780C491DEC834E(uLocal_61[0 /*3*/], 50f) && !unk_0x7B780C491DEC834E(uLocal_74, 50f))
				{
					iLocal_88 = 3;
				}
				else
				{
					unk_0x7B780C491DEC834E(uLocal_61[0 /*3*/], 50f);
					unk_0x7B780C491DEC834E(uLocal_74, 50f);
				}
			}
			break;
	
		case 3:
			uLocal_49[0] = unk_0x5779387E956077A6(joaat("jet"), uLocal_61[0 /*3*/], 0, 1, 1, 0);
			unk_0x5C96CEA06531AB03(uLocal_49[0], 240.3179f);
			unk_0x6A59D337CB7DD7E0(uLocal_49[0], 0);
			uLocal_49[1] = unk_0x5779387E956077A6(joaat("jet"), uLocal_61[1 /*3*/], 0, 1, 1, 0);
			unk_0x6A59D337CB7DD7E0(uLocal_49[1], 0);
			uLocal_49[2] = unk_0x5779387E956077A6(joaat("jet"), uLocal_61[2 /*3*/], 0, 1, 1, 0);
			unk_0x6A59D337CB7DD7E0(uLocal_49[2], 0);
			uLocal_49[3] = unk_0x5779387E956077A6(joaat("jet"), uLocal_61[3 /*3*/], 0, 1, 1, 0);
			unk_0x6A59D337CB7DD7E0(uLocal_49[3], 0);
		
			for (i = 0; i < 4; i = i + 1)
			{
				if (unk_0xFC8BFE4B41177C22(uLocal_49[i]))
				{
					uLocal_55[i] = unk_0x8728A378EF2B46B2(uLocal_49[i], 4, iLocal_84, -1, 1, 1);
					unk_0xF88FC425EC7D675D(uLocal_49[i], 1000);
					unk_0xC229299217554C78(uLocal_49[i], 1, 1, 0);
					unk_0xAAA71DD7E9059338(uLocal_55[i], 1);
				}
			}
		
			func_8(&uLocal_49[1], &uLocal_55[1]);
			func_8(&uLocal_49[2], &uLocal_55[2]);
			func_8(&uLocal_49[3], &uLocal_55[3]);
		
			if (bLocal_78)
			{
				if (unk_0xFC8BFE4B41177C22(uLocal_49[0]))
				{
					if (unk_0x266D9DB5FCE4003B(101, "AirportJetTakeOff"))
					{
						unk_0x9CCFFF877AB82ACA(uLocal_49[0], 101, "AirportJetTakeOff", 2, 5, 786603);
						bLocal_77 = true;
					}
					else
					{
						unk_0xD772E6694B8472A6(101, "AirportJetTakeOff");
					}
				}
			}
		
			iLocal_88 = 4;
			break;
	
		case 4:
			if (bLocal_81)
			{
				if (unk_0xFC8BFE4B41177C22(uLocal_49[3]) && !unk_0x1C2F771CDC87A3A5(uLocal_49[3], 0))
				{
					if (unk_0xF6C26AE940C14749(uLocal_49[3]))
					{
						if (!bLocal_79)
						{
							func_8(&uLocal_49[3], &uLocal_55[3]);
							bLocal_79 = true;
						}
					}
				}
			}
		
			func_3(false);
			func_7();
		
			switch (iLocal_87)
			{
				case 0:
					if (!bLocal_77)
					{
						if (bLocal_78)
						{
							if (unk_0xFC8BFE4B41177C22(uLocal_49[0]) && !unk_0x1C2F771CDC87A3A5(uLocal_49[0], 0))
							{
								if (unk_0xF6C26AE940C14749(uLocal_49[0]) && !unk_0x7B780C491DEC834E(uLocal_61[0 /*3*/], 50f))
								{
									if (unk_0x266D9DB5FCE4003B(101, "AirportJetTakeOff"))
									{
										unk_0x9CCFFF877AB82ACA(uLocal_49[0], 101, "AirportJetTakeOff", 2, 5, 786603);
										bLocal_77 = true;
									}
									else
									{
										unk_0xD772E6694B8472A6(101, "AirportJetTakeOff");
									}
								}
							}
						}
					}
				
					if (bLocal_77)
					{
						if (unk_0xFC8BFE4B41177C22(uLocal_49[0]) && !unk_0x1C2F771CDC87A3A5(uLocal_49[0], 0))
							if (unk_0x050D073F91C5243C(uLocal_49[0]))
								fLocal_85 = unk_0x942B90900E176BD7(uLocal_49[0]);
					
						if (fLocal_85 > 1100f)
							iLocal_87 = 1;
					}
					break;
			
				case 1:
					if (unk_0xFC8BFE4B41177C22(uLocal_49[1]) && !unk_0x1C2F771CDC87A3A5(uLocal_49[1], 0))
					{
						if (bLocal_78)
						{
							if (unk_0xF6C26AE940C14749(uLocal_49[1]))
							{
								if (bLocal_81)
								{
									if (bLocal_79)
									{
										func_6(&uLocal_49[1], &uLocal_55[1]);
									
										if (unk_0x266D9DB5FCE4003B(103, "AirplaneLandingRedux"))
										{
											unk_0x9CCFFF877AB82ACA(uLocal_49[1], 103, "AirplaneLandingRedux", 2, 5, 786603);
											bLocal_80 = false;
											iLocal_87 = 2;
										}
										else
										{
											unk_0xD772E6694B8472A6(103, "AirplaneLandingRedux");
										}
									}
								}
								else
								{
									func_6(&uLocal_49[1], &uLocal_55[1]);
								
									if (unk_0x266D9DB5FCE4003B(103, "AirplaneLandingRedux"))
									{
										unk_0x9CCFFF877AB82ACA(uLocal_49[1], 103, "AirplaneLandingRedux", 2, 5, 786603);
										bLocal_80 = false;
										iLocal_87 = 2;
									}
									else
									{
										unk_0xD772E6694B8472A6(103, "AirplaneLandingRedux");
									}
								}
							}
						}
					}
					break;
			
				case 2:
					if (unk_0xFC8BFE4B41177C22(uLocal_49[1]) && !unk_0x1C2F771CDC87A3A5(uLocal_49[1], 0))
						if (!unk_0x050D073F91C5243C(uLocal_49[1]))
							iLocal_87 = 3;
					break;
			
				case 3:
					if (unk_0xFC8BFE4B41177C22(uLocal_49[2]) && !unk_0x1C2F771CDC87A3A5(uLocal_49[2], 0))
					{
						if (unk_0x266D9DB5FCE4003B(101, "AirportNew"))
						{
							if (!unk_0x7B780C491DEC834E(uLocal_61[2 /*3*/], 50f))
							{
								if (!unk_0x050D073F91C5243C(uLocal_49[2]))
								{
									func_6(&uLocal_49[2], &uLocal_55[2]);
									unk_0x88556DA0593A0748(uLocal_49[2], 101, "AirportNew", 1);
									iLocal_87 = 4;
								}
							}
						}
					}
					break;
			
				case 4:
					if (unk_0xFC8BFE4B41177C22(uLocal_49[2]) && !unk_0x1C2F771CDC87A3A5(uLocal_49[2], 0))
						if (unk_0x050D073F91C5243C(uLocal_49[2]))
							fLocal_86 = unk_0x942B90900E176BD7(uLocal_49[2]);
				
					if (unk_0xFC8BFE4B41177C22(uLocal_49[1]) && !unk_0x1C2F771CDC87A3A5(uLocal_49[1], 0))
					{
						if (!unk_0x050D073F91C5243C(uLocal_49[1]))
						{
							if (unk_0xF6C26AE940C14749(uLocal_49[1]))
							{
								func_8(&uLocal_49[1], &uLocal_55[1]);
								bLocal_80 = true;
							}
						}
					}
				
					if (fLocal_86 > 1100f)
					{
						if (unk_0xFC8BFE4B41177C22(uLocal_49[3]) && !unk_0x1C2F771CDC87A3A5(uLocal_49[3], 0))
						{
							if (unk_0x266D9DB5FCE4003B(104, "AirplaneLandingRedux"))
							{
								if (!unk_0x7B780C491DEC834E(uLocal_61[3 /*3*/], 50f))
								{
									if (!unk_0x050D073F91C5243C(uLocal_49[3]) && bLocal_80)
									{
										func_6(&uLocal_49[3], &uLocal_55[3]);
										unk_0x88556DA0593A0748(uLocal_49[3], 104, "AirplaneLandingRedux", 1);
										iLocal_87 = 5;
									}
								}
							}
						}
					}
					break;
			
				case 5:
					if (unk_0xFC8BFE4B41177C22(uLocal_49[3]) && !unk_0x1C2F771CDC87A3A5(uLocal_49[3], 0))
					{
						if (!unk_0x050D073F91C5243C(uLocal_49[3]))
						{
							func_5();
							iLocal_87 = 0;
						}
					}
					break;
			}
			break;
	}

	return;
}

void func_5() // Position - 0xBB3
{
	fLocal_85 = 0f;
	bLocal_77 = false;
	bLocal_81 = true;
	bLocal_79 = false;
	return;
}

void func_6(var uParam0, var uParam1) // Position - 0xBC7
{
	unk_0x4285E11B28063EE0(*uParam0, 1, 0);
	unk_0x4285E11B28063EE0(*uParam1, 1, 0);
	unk_0x44C48AC14D3C09ED(*uParam0, 1, 0);
	unk_0x5D7CD709B34C90F0(*uParam0, 0);
	return;
}

void func_7() // Position - 0xBF2
{
	Vector3 vector;

	switch (iLocal_83)
	{
		case 0:
			if (!unk_0xFC8BFE4B41177C22(uLocal_54))
			{
				uLocal_54 = unk_0x5779387E956077A6(joaat("jet"), -65.3177f, 15.4603f, 703.106f, 0, 1, 1, 0);
				unk_0xF88FC425EC7D675D(uLocal_54, 1000);
				unk_0xC229299217554C78(uLocal_54, 1, 1, 0);
				unk_0x6A59D337CB7DD7E0(uLocal_54, 0);
				uLocal_60 = unk_0x8728A378EF2B46B2(uLocal_54, 4, iLocal_84, -1, 1, 1);
				unk_0xAAA71DD7E9059338(uLocal_60, 1);
				iLocal_83 = 1;
			}
			break;
	
		case 1:
			if (unk_0xFC8BFE4B41177C22(uLocal_54) && !unk_0x1C2F771CDC87A3A5(uLocal_54, 0))
			{
				if (unk_0x266D9DB5FCE4003B(101, "EastWestFlight"))
				{
					if (!unk_0x050D073F91C5243C(uLocal_54))
					{
						unk_0x9CCFFF877AB82ACA(uLocal_54, 101, "EastWestFlight", 2, 5, 786603);
						iLocal_83 = 2;
					}
				}
			}
			break;
	
		case 2:
			if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
				vector = { unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1) };
		
			if (unk_0xFC8BFE4B41177C22(uLocal_54) && !unk_0x1C2F771CDC87A3A5(uLocal_54, 0))
				if (!unk_0x050D073F91C5243C(uLocal_54))
					if (unk_0xF6C26AE940C14749(uLocal_54) && !unk_0x7B780C491DEC834E(-1602.0862f, -2674.0386f, 12.9444f, 50f) && SYSTEM::VDIST2(vector, unk_0xD1A6A821F5AC81DB(uLocal_54, 1)) > 62500f)
						iLocal_83 = 1;
			break;
	}

	return;
}

void func_8(var uParam0, var uParam1) // Position - 0xD31
{
	unk_0x4285E11B28063EE0(*uParam0, 0, 0);
	unk_0x4285E11B28063EE0(*uParam1, 0, 0);
	unk_0x44C48AC14D3C09ED(*uParam0, 0, 0);
	unk_0x5D7CD709B34C90F0(*uParam0, 1);
	return;
}

void func_9() // Position - 0xD5C
{
	return;
}

BOOL func_10() // Position - 0xD64
{
	return true;
}

void func_11() // Position - 0xD6D
{
	return;
}

void func_12() // Position - 0xD75
{
	func_1();
	func_13();
	unk_0xBBC29EBE6E1A48FA();
	return;
}

void func_13() // Position - 0xD89
{
	var unk;
	var unk4;
	var unk7;
	var unk10;

	if (unk_0xFC8BFE4B41177C22(uLocal_89))
	{
		if (unk_0xF6C26AE940C14749(uLocal_89))
		{
			unk_0x8C1F7D7A31B2A38E(&uLocal_89);
		}
		else if (!unk_0x1C2F771CDC87A3A5(uLocal_89, 0) && !unk_0x4FAFF4BCB7633475(uLocal_90))
		{
			unk_0x1D2DAF2A41FFC4A0(uLocal_89);
			unk_0x44FB298D6382876D(uLocal_90, 1);
			unk = { unk_0xD1A6A821F5AC81DB(uLocal_89, 1) };
			unk10 = unk_0xCFC0C995455A6204(uLocal_89);
			unk4 = { 0f, 500f, 50f };
			unk7 = { unk_0xF10F2A2453AF1DFB(unk, unk10, unk4) };
			unk_0xDAC27BA46D21818F(uLocal_90, uLocal_89, 0, 0, unk7, 4, 50f, -1f, 0f, 100, 50, -1082130432, 0);
		}
	}

	if (bLocal_95)
		unk_0x7821F942CAEEBEE1(102, "HelicopterTakeOff");

	return;
}

