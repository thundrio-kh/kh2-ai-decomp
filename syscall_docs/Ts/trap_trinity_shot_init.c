---
---
---
name: trap_trinity_shot_init
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
syscall 7, 28 ; trap_trinity_shot_init (0 in, 0 out)
---
---
---
description: 
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

---
---
---
example usage from NA

