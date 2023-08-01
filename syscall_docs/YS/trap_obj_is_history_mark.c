---
---
---
name: trap_obj_is_history_mark
---
---
---
category: object
---
---
---
documentation level: untested
---
---
---
push obj ; (YS::OBJ_125 *)  (An object)
syscall 1, 190 ; trap_obj_is_history_mark (1 in, 1 out)
pop is_history_mark ; (bool) 
---
---
---
description: Returns if the history flag is set for the object
---
---
---
decompiled code:
__int64 __fastcall YS::FIELDOBJ::is_mark_history(YS::FIELDOBJ *const this)
/----- (00000000004FD6D8) ----------------------------------------------------
void __fastcall YS::trap_obj_is_history_mark(BD_VALUE_21 *args)
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
  if ( (*(_DWORD *)(v4 + 1416) & 0x100) == 0 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "((OBJ *)obj)->is_fieldobj()",
      "common",
      "../yasui/libys/fieldobj.h",
      30LL,
      "TOFIELDOBJ",
      (const void *)v3);
    ErrorRaise();
    Axa::AxaAssert("../yasui/libys/fieldobj.h", 30);
  }
  *(_DWORD *)args = YS::FIELDOBJ::is_mark_history((YS::FIELDOBJ *const)v4);
}
// 4FD6FC: variable 'back_chain' is possibly undefined
->
/----- (00000000004E7DA0) ----------------------------------------------------
__int64 __fastcall YS::FIELDOBJ::is_mark_history(YS::FIELDOBJ *const this)
{
  int v1; // r3

  v1 = YS::OBJ::get_serial((YS::OBJ_125 *const)this);
  return YS::HISTORY::is_set((YS::HISTORY_0 *const)&YS::HISTORY::Gimmick, v1);
}
// 2A97948: using guessed type int YS::HISTORY::Gimmick;


---
---
---
appears in:
obj\F_AL050\f_al.bdscript ((F) ??? (AL))
obj\F_AL050_BRIDGE\f_al.bdscript ()
obj\F_AL050_DUST\f_al.bdscript ()
obj\F_AL050_L\f_al.bdscript ()
obj\F_AL050_S\f_al.bdscript ()
obj\F_BB040\f_bb.bdscript ((F) ??? - Invisible Armor? (BB))
obj\F_BB070\f_bb.bdscript ((F) ??? - Something from Shadow Stalker? (B))
obj\F_CA060\f_ca.bdscript ((F) ??? (CA))
obj\F_CA060_MEDAL\f_ca.bdscript ((F) ??? - Attackable floor? (MEDAL) (CA))
obj\F_HB040\f_hb.bdscript ((F) CoR’s orb (red) (HB))
obj\F_HB040_BL\f_hb.bdscript ((F) CoR’s orb (blue) (HB))
obj\F_HB040_WH\f_hb.bdscript ((F) CoR’s orb (white) (HB))
obj\F_HB040_YE\f_hb.bdscript ((F) CoR’s orb (yellow) (HB))
obj\F_MU040\f_mu.bdscript ((F) Bunch of fireworks (MU))
obj\F_MU050\f_mu.bdscript ((F) Firework (Rocket) (MU))
obj\F_MU060\f_mu.bdscript ((F) Drive Orb Wagon (MU))
obj\F_MU080\f_mu.bdscript ((F) ??? (MU))
obj\F_MU090\f_mu.bdscript ((F) ??? (MU))
obj\F_MU100\f_mu.bdscript ((F) ??? (MU))
obj\F_MU100_SHANG\f_mu.bdscript ((F) ??? (SHANG) (MU))
obj\F_MU100_TOWER\f_mu.bdscript ((F) ??? (TOWER) (MU))
obj\F_NM040_00\f_nm.bdscript ((F) Statue (horse) (NM))
obj\F_NM040_10\f_nm.bdscript ((F) Statue (human) (NM))
obj\F_NM050\f_nm.bdscript ((F) Falling grave (NM))
---
---
---
example usage from obj\F_AL050\f_al.bdscript
L187:
 popToSp 0
 pushFromFSp 0
 syscall 1, 190 ; trap_obj_is_history_mark (1 in, 1 out)
 jz L203
 pushFromFSp 0
 syscall 1, 28 ; trap_obj_leave (1 in, 0 out)
 gosub 4, L204
 jmp L203
