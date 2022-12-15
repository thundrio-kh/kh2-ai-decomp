---
---
---
name: trap_flare_set_pos
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
syscall 7, 6 ; trap_flare_set_pos (2 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall Ts::FLARE::set_pos(Ts::FLARE_0 *const this, RCFVector pos)
/----- (000000000062341C) ----------------------------------------------------
void __fastcall Ts::trap_flare_set_pos(BD_VALUE_24 *args)
{
  Ts::FLARE::set_pos((Ts::FLARE_0 *const)(*args)[0], (RCFVector)*(unsigned int *)&(*args)[4]);
}
->
/----- (000000000062A838) ----------------------------------------------------
void __fastcall Ts::FLARE::set_pos(Ts::FLARE_0 *const this, RCFVector pos)
{
  __int64 v4; // r10
  __int64 v5; // r9
  __int64 v6; // r8
  __int64 v7; // r7
  __int64 v8; // r6
  __int64 v9; // r5
  __int64 v10; // r4
  ryj::EFFECT_144 *v11; // r3
  __int64 v12; // r10
  __int64 v13; // r9
  __int64 v14; // r8
  __int64 v15; // r7
  __int64 v16; // r6
  __int64 v17; // r5
  __int64 v18; // r4
  kn::FVector *v19; // r3

  kn::FVector::operator=((kn::FVector *const)this, pos);
  kn::FVector::operator=((kn::FVector *const)(unsigned int)((_DWORD)this + 32), pos);
  v11 = (ryj::EFFECT_144 *)*(unsigned int *)&(*this)[60];
  if ( (_DWORD)v11 )
  {
    if ( ryj::EFFECT::is_active(v11, v10, v9, v8, v7, v6, v5, v4) )
    {
      v19 = (kn::FVector *)ryj::EFFECT::pos(
                             (ryj::EFFECT_144 *const)*(unsigned int *)&(*this)[60],
                             v18,
                             v17,
                             v16,
                             v15,
                             v14,
                             v13,
                             v12);
      kn::FVector::operator=(v19, pos);
    }
  }
}
// 62A87C: variable 'v10' is possibly undefined
// 62A87C: variable 'v9' is possibly undefined
// 62A87C: variable 'v8' is possibly undefined
// 62A87C: variable 'v7' is possibly undefined
// 62A87C: variable 'v6' is possibly undefined
// 62A87C: variable 'v5' is possibly undefined
// 62A87C: variable 'v4' is possibly undefined
// 62A890: variable 'v18' is possibly undefined
// 62A890: variable 'v17' is possibly undefined
// 62A890: variable 'v16' is possibly undefined
// 62A890: variable 'v15' is possibly undefined
// 62A890: variable 'v14' is possibly undefined
// 62A890: variable 'v13' is possibly undefined
// 62A890: variable 'v12' is possibly undefined


---
---
---
appears in:

---
---
---
example usage from NA

