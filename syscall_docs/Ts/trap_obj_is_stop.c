---
---
---
name: trap_obj_is_stop
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
push unk1 ; (unknown)  (pushFromPSpVal: 0) (pushFromPSp: 16,4)
syscall 6, 49 ; trap_obj_is_stop (1 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
__int64 __fastcall YS::OBJ::is_stop(YS::OBJ_128 *const this)
/----- (00000000006250D0) ----------------------------------------------------
void __fastcall Ts::trap_obj_is_stop(BD_VALUE_25 *args)
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
  *(_DWORD *)args = YS::OBJ::is_stop((YS::OBJ_128 *const)*(unsigned int *)(v2 + 4));
}
// 6250F4: variable 'back_chain' is possibly undefined
->
/----- (0000000000464944) ----------------------------------------------------
__int64 __fastcall YS::OBJ::is_stop(YS::OBJ_128 *const this)
{
  __int64 v2; // r30
  int v3; // r4

  v2 = 0LL;
  if ( (unsigned int)YS::STOP::is_stop((YS::STOP *const)(unsigned int)((_DWORD)this + 1304))
    || (v3 = *(_DWORD *)&(*this)[1416], (v3 & 4) == 0) && (v3 & 0x40) == 0 && YS::SUMMON::GetMode() == 1
    || (*(_DWORD *)&(*this)[264] & 0x400) != 0
    || worldmap::Libretto::IsExistObj() )
  {
    v2 = 1LL;
  }
  return v2;
}


---
---
---
appears in:
obj\B_EX170_LAST\b_ex.bdscript ((B) Xemnas (Final))
obj\B_EX170_LAST_LV99\b_ex.bdscript ((B99) Xemnas (Final) (Limit Cut The World of Nothing)?)
obj\F_HB020\f_hb.bdscript ((F) ??? (HB))
obj\P_EX350\p_ex.bdscript ((P) Chicken Little)
obj\P_EX360\p_ex.bdscript ((P) ??? (EX))
---
---
---
example usage from obj\B_EX170_LAST\b_ex.bdscript
L19588:
 jz L19615
 halt 
 pushFromPSpVal 0
 syscall 6, 49 ; trap_obj_is_stop (1 in, 1 out)
 eqz 
 jz L19613
 pushFromFSp 0
 pushImm 68
 add 
 dup 
 fetchValue 0
 syscall 0, 3 ; trap_frametime (0 in, 1 out)
 subf 
 memcpy 0
 jmp L19613
