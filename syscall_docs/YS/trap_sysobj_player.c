---
---
---
name: trap_sysobj_player
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
syscall 1, 3 ; trap_sysobj_player (0 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
YS::OBJ_125 *__cdecl YS::OBJ::GetPlayer()
/----- (00000000004F728C) ----------------------------------------------------
void __fastcall YS::trap_sysobj_player(BD_VALUE_21 *args)
{
  *(_DWORD *)args = (unsigned int)YS::OBJ::GetPlayer();
}
->
/----- (0000000000460678) ----------------------------------------------------
YS::OBJ_125 *__cdecl YS::OBJ::GetPlayer()
{
  return (YS::OBJ_125 *)(unsigned int)YS::PLAYER::Player;
}
// 7FE80C: using guessed type void *__ptr32 YS::PLAYER::Player;


---
---
---
appears in:

---
---
---
example usage from NA

