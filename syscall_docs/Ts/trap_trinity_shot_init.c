---
---
---
name: trap_trinity_shot_init
---
---
---
category: special
---
---
---
documentation level: untested
---
---
---
syscall 7, 28 ; trap_trinity_shot_init (0 in, 0 out)
---
---
---
description: Initialize a trinity limit shot
---
---
---
decompiled code:
void __cdecl Ts::TRINITY_SHOT_OBJ::Init()
/----- (0000000000623EF8) ----------------------------------------------------
void __fastcall Ts::trap_trinity_shot_init(BD_VALUE_24 *args)
{
  Ts::TRINITY_SHOT_OBJ::Init();
}
->
/----- (0000000000629400) ----------------------------------------------------
void __cdecl Ts::TRINITY_SHOT_OBJ::Init()
{
  YS::MASSOBJ *v0; // r31
  const YS::OBJENTRY *v1; // r3

  v0 = (YS::MASSOBJ *)AREA::Alloc(0xA00u);
  if ( (_DWORD)v0 )
  {
    v1 = (const YS::OBJENTRY *)YS::OBJENTRY::Get(0x5C3u);
    YS::MASSOBJ::MASSOBJ(v0, v1, 0LL, 1, 0, 0x80u, 0x100u);
    *(_DWORD *)v0->baseclass_0 = (unsigned int)&Ts::TRINITY_SHOT_OBJ::_vtable;
    Ts::ShotObj = (void *__ptr32)v0;
  }
}
// 807830: using guessed type void *__ptr32 Ts::ShotObj;
// 3EAD640: using guessed type int Ts::TRINITY_SHOT_OBJ::_vtable;


---
---
---
appears in:
limit\trinity\limi.bdscript
limit\trinity_wi\limi.bdscript
---
---
---
example usage from limit\trinity\limi.bdscript
L9026:
 popToSp 4
 popToSp 0
 pushFromFSp 0
 pushFromFSp 4
 gosub 4, L9092
 pushFromPSpVal 80
 pushFromFSp 4
 pushImm 1
 syscall 2, 49 ; trap_limit_friend (2 in, 1 out)
 gosub 4, L388
 pushFromPSpVal 80
 syscall 2, 23 ; trap_btlobj_target (1 in, 1 out)
 syscall 1, 131 ; trap_target_dup (1 in, 1 out)
 popToSpVal 96
 pushFromPSpVal 20
 pushImm 2
 syscall 1, 210 ; trap_obj_search_by_part (2 in, 0 out)
 pushFromPSpVal 80
 pushImm 3
 syscall 1, 210 ; trap_obj_search_by_part (2 in, 0 out)
 pushImm 0
 popToSpVal 100
 pushImm -1
 popToSpVal 104
 pushImmf -1
 pushImmf 1
 syscall 0, 18 ; trap_random_range (2 in, 1 out)
 popToSpVal 108
 syscall 7, 28 ; trap_trinity_shot_init (0 in, 0 out)
 ret 
