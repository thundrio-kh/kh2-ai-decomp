---
---
---
name: trap_sysobj_is_btlnpc
---
---
---
category: field
---
---
---
documentation level: untested
---
---
---
push obj ; (YS::OBJ_125) (An object)
syscall 1, 332 ; trap_sysobj_is_btlnpc (1 in, 1 out)
pop is_npc ; (bool) 
---
---
---
description: Returns true if the object is a NPC
---
---
---
decompiled code:
__int64 __fastcall YS::OBJ::is_exist(YS::OBJ_128 *const this)
/----- (00000000004F7448) ----------------------------------------------------
void __fastcall YS::trap_sysobj_is_btlnpc(BD_VALUE_21 *args)
{
  unsigned __int64 v2; // r30
  __int64 back_chain; // [sp+0h] [-80h]

  v2 = (unsigned int)*(_QWORD *)(back_chain + 16);
  if ( !(unsigned int)YS::OBJ::is_exist((YS::OBJ_128 *const)(*args)[0]) )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "SYSOBJ(args[0].p)->is_exist()",
      "common",
      "../yasui/trapobj.h",
      56LL,
      "trap_sysobj_is_btlnpc",
      (const void *)v2);
    ErrorRaise();
    Axa::AxaAssert("../yasui/trapobj.h", 56);
  }
  *(_DWORD *)args = (*(_DWORD *)(*(unsigned int *)args + 0x588LL) & 0x10000) != 0;
}
// 4F7468: variable 'back_chain' is possibly undefined

//CHEAT YS::OBJ::is_exist
->
/----- (0000000000464804) ----------------------------------------------------
__int64 __fastcall YS::OBJ::is_exist(YS::OBJ_128 *const this)
{
  __int64 v2; // r30
  int v3; // r31

  v2 = 0LL;
  if ( (unsigned int)YS::OBJ::is_valid(this) )
  {
    v3 = *(_DWORD *)&(*this)[264];
    if ( (v3 & 0x80000) == 0 && (v3 & 0x10000000) == 0 )
      v2 = 1LL;
  }
  return v2;
}


---
---
---
appears in:
msn\TT04_MS301\tt04.bdscript
msn\TT05_MS403\tt05.bdscript
msn\TT05_MS404\tt05.bdscript
obj\F_NM180\f_nm.bdscript ((F) Present minigame (shooting machine) (NM))
---
---
---
example usage from msn\TT04_MS301\tt04.bdscript
L177:
 pushFromPSp 0
 gosub 8, L214
 jz L205
 pushFromPSp 0
 fetchValue 4
 syscall 1, 332 ; trap_sysobj_is_btlnpc (1 in, 1 out)
 jz L203
 pushFromPSp 0
 pushImm 15
 pushImmf 0
 syscall 6, 6 ; trap_obj_stop (3 in, 0 out)
 jmp L203
