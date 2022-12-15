---
---
---
name: trap_enemy_stop_all_start
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
syscall 7, 0 ; trap_enemy_stop_all_start (1 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::ENEMY::StopStartAll(int id)
/----- (00000000006232C0) ----------------------------------------------------
void __fastcall Ts::trap_enemy_stop_all_start(BD_VALUE_24 *args)
{
  YS::ENEMY::StopStartAll(*(_DWORD *)args);
}
->
/----- (0000000000425A48) ----------------------------------------------------
void __fastcall YS::ENEMY::StopStartAll(int id)
{
  YS::OBJ_132 *v2; // r30
  YS::OBJ_132 *v3; // r3

  v2 = 0LL;
  while ( 1 )
  {
    do
    {
      v3 = YS::OBJ::Each(v2);
      v2 = v3;
    }
    while ( (_DWORD)v3 && (*(_DWORD *)&(*v3)[1416] & 0x10) == 0 );
    if ( !(_DWORD)v3 )
      break;
    YS::OBJ::stop(v3, id, 0.0);
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

