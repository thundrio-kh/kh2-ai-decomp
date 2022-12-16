---
---
---
name: trap_obj_reset_parts_color
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
push unk1 ; (unknown)  (pushFromFSp: 0)
push unk2 ; (unknown)  (pushImm: 128,16,2,256,3072,3145756,32,32764,4,64,8)
push unk3 ; (unknown)  (pushImmf: 10,16,20,30,60)
syscall 1, 186 ; trap_obj_reset_parts_color (3 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::OBJ::reset_parts_color(YS::OBJ_130 *const this, u_int parts, double time)
/----- (00000000004FD980) ----------------------------------------------------
void __fastcall YS::trap_obj_reset_parts_color(BD_VALUE_21 *args)
{
  __int64 v2; // r29
  unsigned __int64 v3; // r30
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
  YS::OBJ::reset_parts_color(
    (YS::OBJ_130 *const)*(unsigned int *)(v2 + 4),
    *(_DWORD *)&(*args)[4],
    *(float *)&(*args)[8]);
}
// 4FD9A4: variable 'back_chain' is possibly undefined
->
/----- (0000000000469C58) ----------------------------------------------------
void __fastcall YS::OBJ::reset_parts_color(YS::OBJ_130 *const this, u_int parts, double time)
{
  YS::PARTS_COLOR::WORK *v4; // r3

  v4 = YS::PARTS_COLOR::get_work((YS::PARTS_COLOR *const)(unsigned int)((_DWORD)this + 2272), parts);
  YS::FADE::start((YS::FADE *const)(unsigned int)((_DWORD)v4 + 8), v4->Fade.Ratio, 0.0, time);
}


---
---
---
appears in:
obj\B_CA050\b_ca.bdscript ((B) Grim Reaper)
obj\F_NM080\f_nm.bdscript ((F) Oogie’s present box (NM))
obj\F_TR160\f_tr.bdscript ((F) WARNING message (TR))
obj\N_TR010_BTL_L\n_tr.bdscript ((N) Sark (large) (BTL) (TR))
---
---
---
example usage from obj\B_CA050\b_ca.bdscript
L5082:
 pushFromFSp 0
 fetchValue 4
 syscall 1, 14 ; trap_sysobj_motion_is_end (1 in, 1 out)
 eqz 
 jz L5249
 pushFromFSp 0
 pushImm 1
 syscall 1, 151 ; trap_obj_motion_check_trigger (2 in, 1 out)
 jz L5246
 pushFromFSp 0
 pushImm 3145756
 pushImm 8421504
 pushImmf 20
 syscall 1, 185 ; trap_obj_set_parts_color (4 in, 0 out)
 pushFromFSp 0
 pushImm 3072
 pushImmf 20
 syscall 1, 186 ; trap_obj_reset_parts_color (3 in, 0 out)
 pushImm 0
 popToWp W16
 pushFromFSp 0
 pushImm 16
 add 
 pushImm -1
 memcpy 0
 pushFromFSp 0
 pushImm 20
 add 
 pushImm -1
 memcpy 0
 pushFromFSp 0
 syscall 1, 84 ; trap_obj_sheet (1 in, 1 out)
 pushImm 0
 syscall 1, 228 ; trap_sheet_hp (2 in, 1 out)
 pushFromFWp W32
 sub 
 ipos 
 jz L5176
 pushFromFSp 0
 syscall 1, 84 ; trap_obj_sheet (1 in, 1 out)
 pushFromFWp W32
 pushImm 0
 syscall 1, 231 ; trap_sheet_set_min_hp (3 in, 0 out)
 jmp L5216
