---
---
---
name: trap_enemy_stop_all_end
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
syscall 7, 1 ; trap_enemy_stop_all_end (1 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::OBJ::StopEndAll(int id)
/----- (00000000006232EC) ----------------------------------------------------
void __fastcall Ts::trap_enemy_stop_all_end(BD_VALUE_24 *args)
{
  YS::OBJ::StopEndAll(*(_DWORD *)args);
}
->
/----- (0000000000462544) ----------------------------------------------------
void __fastcall YS::OBJ::StopEndAll(int id)
{
  YS::OBJ_132 *v2; // r30
  YS::OBJ_132 *v3; // r3

  v2 = 0LL;
  while ( 1 )
  {
    v3 = YS::OBJ::Each(v2);
    v2 = v3;
    if ( !(_DWORD)v3 )
      break;
    YS::STOP::end((YS::STOP *const)(unsigned int)((_DWORD)v3 + 1304), id);
  }
}


---
---
---
appears in:

---
---
---
example usage from NA

