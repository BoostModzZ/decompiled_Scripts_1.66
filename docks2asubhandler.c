#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void main() // Position - 0x0
{
	float num;

	if (unk_0x96CFB880BAC634CE(19))
		func_1();

	uLocal_0 = uScriptParam_0;
	uLocal_1 = uScriptParam_0.f_1;

	while (!IS_BIT_SET(iLocal_2, 1))
	{
		if (!IS_BIT_SET(iLocal_2, 0))
		{
			if (unk_0xFC8BFE4B41177C22(uLocal_0))
			{
				if (unk_0xD9F5E1FEFD1329E4(uLocal_0, 0))
				{
					unk_0xEE0BCDB1B5E36BCB(uLocal_0, 0, 1);
					unk_0x5D7CD709B34C90F0(uLocal_0, 1);
					unk_0xD0F1DB0E50B367AD(uLocal_0, 1, 1, 1, 1, 1, 0, 0, 0);
				
					if (unk_0xFC8BFE4B41177C22(uLocal_1))
					{
						unk_0xEE0BCDB1B5E36BCB(uLocal_1, 0, 1);
						unk_0x5D7CD709B34C90F0(uLocal_1, 1);
						unk_0xD0F1DB0E50B367AD(uLocal_1, 1, 1, 1, 1, 1, 0, 0, 0);
					}
				
					unk_0x0B0C9A0F9AAEB7F0(&iLocal_2, 0);
				}
			}
		}
		else if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
		{
			if (unk_0xD9F5E1FEFD1329E4(uLocal_0, 0))
			{
				num = SYSTEM::VDIST2(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), unk_0xD1A6A821F5AC81DB(uLocal_0, 1));
			
				if (num > 90000f)
					unk_0x0B0C9A0F9AAEB7F0(&iLocal_2, 1);
				else if (num > 40000f && !unk_0xCB5CAFF0A4A8B74B(uLocal_0))
					unk_0x0B0C9A0F9AAEB7F0(&iLocal_2, 1);
			}
			else
			{
				unk_0x0B0C9A0F9AAEB7F0(&iLocal_2, 1);
			}
		}
	
		SYSTEM::WAIT(0);
	}

	func_1();
	return;
}

void func_1() // Position - 0x105
{
	unk_0x68298CA6191CDFDB(&uLocal_0);
	unk_0x76AD45C3946F87DD(&uLocal_1);
	unk_0xBBC29EBE6E1A48FA();
	return;
}

