---
---
---
name: trap_obj_start_mpdrive
---
---
---
category: 
---
---
---
documentation level: stub
---
---
---
push unk1 ; (unknown)  (pushFromPSp: 16)
push unk2 ; (unknown)  (pushImmf: 1)
syscall 1, 353 ; trap_obj_start_mpdrive (2 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::BTLOBJ::start_mpdrive(YS::BTLOBJ *const this, double ratio)
/----- (0000000000501DE0) ----------------------------------------------------
void __fastcall YS::trap_obj_start_mpdrive(BD_VALUE_21 *args)
{
  __int64 v2; // r30
  unsigned __int64 v3; // r29
  __int64 v4; // r30
  __int64 back_chain; // [sp+0h] [-90h]

  v2 = *(unsigned int *)args;
  v3 = (unsigned int)*(_QWORD *)(back_chain + 16);
  if ( !(_DWORD)v2 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "arg != NULL",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h",
      48LL,
      "ToOBJ",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h", 48);
  }
  if ( (v2 & 3) != 0 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "(((u_int)arg) & 3) == 0",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h",
      49LL,
      "ToOBJ",
      (const void *)v3);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h", 49);
  }
  v4 = *(unsigned int *)(v2 + 4);
  if ( (*(_DWORD *)(v4 + 1416) & 2) == 0 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "TOOBJ(obj)->is_btlobj()",
      "common",
      "../../yasui/libys/btlobj.h",
      178LL,
      "TOBTLOBJ",
      (const void *)v3);
    ErrorRaise();
    Axa::AxaAssert("../../yasui/libys/btlobj.h", 178);
  }
  YS::BTLOBJ::start_mpdrive((YS::BTLOBJ *const)v4, *(float *)&(*args)[4]);
}
// 501E04: variable 'back_chain' is possibly undefined
->
/----- (0000000000413B20) ----------------------------------------------------
void __fastcall YS::BTLOBJ::start_mpdrive(YS::BTLOBJ *const this, double ratio)
{
  YS::SHEET::mpdrive(
    *(unsigned int *)&this->baseclass_0[1164],
    (float)(*(float *)(*(unsigned int *)&this->baseclass_0[300] + 0x1CLL) * (float)ratio));
}


---
---
---
appears in:
obj\N_HB630\n_hb.bdscript ((N) Sephiroth (HB))
---
---
---
example usage from obj\N_HB630\n_hb.bdscript
L5513:
 popToSp 0
 pushFromFSp 0
 gosub 8, L393
 pushFromPSpVal 0
 pushImm 20
 gosub 8, L159
 memcpyToSp 16, 16
 pushFromPSp 16
 pushImm 1
 pushImm 0
 syscall 1, 149 ; trap_obj_effect_start_bind_other (5 in, 1 out)
 drop 
 pushFromPSpVal 0
 pushImm 21
 gosub 8, L159
 memcpyToSp 16, 16
 pushFromPSp 16
 pushImm 1
 pushImm 0
 syscall 1, 149 ; trap_obj_effect_start_bind_other (5 in, 1 out)
 drop 
 pushFromPSpVal 0
 pushImm 22
 gosub 8, L159
 memcpyToSp 16, 16
 pushFromPSp 16
 pushImm 1
 pushImm 0
 syscall 1, 149 ; trap_obj_effect_start_bind_other (5 in, 1 out)
 drop 
 pushImmf 60
 gosub 8, L873
 gosub 8, L159
 memcpyToSp 16, 16
 pushFromPSp 16
 syscall 1, 84 ; trap_obj_sheet (1 in, 1 out)
 pushImm 0
 syscall 1, 228 ; trap_sheet_hp (2 in, 1 out)
 pushImm 1
 sub 
 popToSp 4
 pushFromPSpVal 0
 pushImm 1697
 pushImm -1
 pushImm 0
 syscall 2, 10 ; trap_attack_new (4 in, 1 out)
 popToSp 8
 pushFromFSp 8
 gosub 8, L159
 memcpyToSp 16, 16
 pushFromPSp 16
 pushImm 0
 pushImm 0
 syscall 2, 17 ; trap_attack_strike (4 in, 0 out)
 pushFromFSp 8
 syscall 2, 13 ; trap_attack_free (1 in, 0 out)
 pushFromFSp 4
 pushImm 0
 sub 
 ipos 
 jz L5685
 gosub 8, L159
 memcpyToSp 16, 16
 pushFromPSp 16
 pushFromFSp 4
 neg 
 pushImm 0
 pushImm 0
 syscall 1, 155 ; trap_obj_add_hp (4 in, 1 out)
 drop 
 gosub 8, L159
 memcpyToSp 16, 16
 pushFromPSp 16
 pushImmf 1
 syscall 1, 353 ; trap_obj_start_mpdrive (2 in, 0 out)
 jmp L5685
