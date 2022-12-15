---
---
---
name: trap_attack_is_strike
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
push unk1 ; (unknown) 
push unk2 ; (unknown) 
syscall 2, 18 ; trap_attack_is_strike (2 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
bool __fastcall YS::ATTACK::is_strike(YS::ATTACK_10 *const this, YS::BTLOBJ *obj)
/----- (00000000004F4CFC) ----------------------------------------------------
void __fastcall YS::trap_attack_is_strike(BD_VALUE_19 *args)
{
  __int64 v2; // r30
  YS::ATTACK_10 *v3; // r28
  unsigned __int64 v4; // r29
  __int64 v5; // r30
  __int64 back_chain; // [sp+0h] [-A0h]

  v2 = *(unsigned int *)&(*args)[4];
  v3 = (YS::ATTACK_10 *)(*args)[0];
  v4 = (unsigned int)*(_QWORD *)(back_chain + 16);
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
      (const void *)v4);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h", 49);
  }
  v5 = *(unsigned int *)(v2 + 4);
  if ( (*(_DWORD *)(v5 + 1416) & 2) == 0 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "TOOBJ(obj)->is_btlobj()",
      "common",
      "../../yasui/libys/btlobj.h",
      178LL,
      "TOBTLOBJ",
      (const void *)v4);
    ErrorRaise();
    Axa::AxaAssert("../../yasui/libys/btlobj.h", 178);
  }
  *(_DWORD *)args = YS::ATTACK::is_strike(v3, (YS::BTLOBJ *)v5);
}
// 4F4D28: variable 'back_chain' is possibly undefined
->
/----- (0000000000406F6C) ----------------------------------------------------
bool __fastcall YS::ATTACK::is_strike(YS::ATTACK_10 *const this, YS::BTLOBJ *obj)
{
  int v5; // r3
  YS::OBJ_128 *v6; // r3

  if ( YS::GAMEOVER::IsExec() )
    return 0LL;
  if ( !(unsigned int)YS::ATTACK_CHECK::is_strike((YS::ATTACK_CHECK_39 *const)(unsigned int)((_DWORD)obj + 2640), this) )
    return 0LL;
  v5 = *(unsigned __int8 *)(*(unsigned int *)&(*this)[40] + 4LL);
  if ( v5 == 5 || v5 == 6 )
    return 1LL;
  if ( !(unsigned int)YS::OBJ::is_hit_attack((YS::OBJ_128 *const)obj) )
    return 0LL;
  v6 = (YS::OBJ_128 *)*(unsigned int *)&(*this)[12];
  if ( (_DWORD)v6 == (_DWORD)obj || *(_DWORD *)&(*this)[16] == (_DWORD)obj )
    return 0LL;
  if ( ((unsigned __int8)(*this)[45] & (1 << *(_DWORD *)&obj->baseclass_0[944])) == 0 )
    return 0LL;
  return !(unsigned int)YS::OBJ::is_exist(v6)
      || !(unsigned int)YS::OBJ::is_stop((YS::OBJ_128 *const)*(unsigned int *)&(*this)[12]);
}


---
---
---
appears in:

---
---
---
example usage from NA

