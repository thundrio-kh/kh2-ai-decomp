---
---
---
name: trap_obj_is_damage_motion
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
push unk1 ; (unknown)  (pushFromPSp: 112,16,4,48,96) (pushFromPSpVal: 0,112)
syscall 6, 63 ; trap_obj_is_damage_motion (1 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
__int64 __fastcall YS::BTLOBJ::is_damage_motion(YS::BTLOBJ *const this)
/----- (0000000000627C30) ----------------------------------------------------
void __fastcall Ts::trap_obj_is_damage_motion(BD_VALUE_25 *args)
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
  *(_DWORD *)args = YS::BTLOBJ::is_damage_motion((YS::BTLOBJ *const)v4);
}
// 627C54: variable 'back_chain' is possibly undefined
->
/----- (00000000004125D8) ----------------------------------------------------
__int64 __fastcall YS::BTLOBJ::is_damage_motion(YS::BTLOBJ *const this)
{
  __int64 v1; // r4

  v1 = 0LL;
  if ( *(_DWORD *)&this->baseclass_0[320]
    && !((*(_DWORD *)&this->baseclass_0[340] < 10) | (unsigned __int8)~(*(_DWORD *)&this->baseclass_0[340] < 40)) )
  {
    v1 = 1LL;
  }
  return v1;
}


---
---
---
appears in:
obj\B_AL020\b_al.bdscript ((B) Jafar (Djinn))
obj\B_EX110\b_ex.bdscript ((B) Axel (Twilight Town, 2nd fight))
obj\B_EX110_LV99\b_ex.bdscript ((B99) Axel (Limit Cut))
obj\B_EX110_SKIRMISH\b_ex.bdscript ((B) Axel (boss, freezes when RC is used) (SKIRMISH) (EX))
obj\B_EX180\b_ex.bdscript ((?) Xemnas’s dragon (Throne))
obj\B_EX390\b_ex.bdscript ((B) Hooded Roxas)
obj\B_EX400\b_ex.bdscript ((B) Larxene (Absent Silhouette))
obj\B_EX410\b_ex.bdscript ((P) Sora book)
obj\N_CM020_BTL\n_cm.bdscript ((N) Lexaeus (BTL) (CM))
obj\N_HB630\n_hb.bdscript ((N) Sephiroth (HB))
obj\P_EH000\p_eh.bdscript ((P) Riku)
obj\P_EH000_LAST\p_eh.bdscript ((P) Riku (final battle))
---
---
---
example usage from obj\B_AL020\b_al.bdscript
L2783:
 pushFromPSp 4
 syscall 6, 63 ; trap_obj_is_damage_motion (1 in, 1 out)
 jz L2804
 pushFromPSp 32
 pushImmf 1
 gosub 28, L1838
 pushFromPSp 4
 pushFromPSp 32
 syscall 1, 227 ; trap_obj_jump_direct (2 in, 0 out)
 jmp L2804
