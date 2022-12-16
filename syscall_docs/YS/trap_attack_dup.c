---
---
---
name: trap_attack_dup
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
push unk1 ; (unknown)  (pushFromFSpVal: 28,32,68) (pushFromFSp: 68,76)
push unk2 ; (unknown)  (pushImm: 1165,1181,249,502)
syscall 2, 31 ; trap_attack_dup (2 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
YS::ATTACK_MAGIC_3 *__fastcall YS::ATTACK_MAGIC::dup(YS::ATTACK_MAGIC_3 *const this, __int64 param_id)
/----- (00000000004F4680) ----------------------------------------------------
void __fastcall YS::trap_attack_dup(BD_VALUE_19 *args)
{
  *(_DWORD *)args = (unsigned int)YS::ATTACK_MAGIC::dup((YS::ATTACK_MAGIC_3 *const)(*args)[0], *(int *)&(*args)[4]);
}
->
/----- (000000000050CD10) ----------------------------------------------------
YS::ATTACK_MAGIC_3 *__fastcall YS::ATTACK_MAGIC::dup(YS::ATTACK_MAGIC_3 *const this, __int64 param_id)
{
  YS::ATTACK_MAGIC_3 *v4; // r28
  YS::ATTACK_MAGIC_3 *v5; // r3
  YS::ATTACK_MAGIC_3 *v6; // r29
  YS::ATTACK_MAGIC_3 *result; // r3

  v4 = 0LL;
  v5 = (YS::ATTACK_MAGIC_3 *)AREA::Alloc(0x140u);
  v6 = v5;
  if ( (_DWORD)v5 )
  {
    YS::ATTACK_MAGIC::ATTACK_MAGIC(
      v5,
      (YS::BTLOBJ *)*(unsigned int *)&(*this)[12],
      param_id,
      *(_DWORD *)&(*this)[32],
      *(int *)&(*this)[24],
      *(_DWORD *)&(*this)[28]);
    v4 = v6;
  }
  result = v4;
  *(_DWORD *)&(*v4)[36] = *(_DWORD *)&(*this)[36];
  return result;
}


---
---
---
appears in:
magic\FIRE_1\fire.bdscript
magic\FIRE_1lk\fire.bdscript
magic\FIRE_2\fire.bdscript
magic\FIRE_2lk\fire.bdscript
magic\FIRE_3\fire.bdscript
magic\FIRE_3lk\fire.bdscript
magic\thunder1\thun.bdscript
magic\THUNDER_1\thun.bdscript
magic\THUNDER_1lk\thun.bdscript
magic\THUNDER_2\thun.bdscript
magic\THUNDER_2lk\thun.bdscript
magic\THUNDER_3\thun.bdscript
magic\THUNDER_3lk\thun.bdscript
obj\P_EX020\p_ex.bdscript ((P) Donald)
obj\P_EX020_NM\p_ex.bdscript ((P) Donald (NM))
obj\P_EX020_TR\p_ex.bdscript ((P) Donald (TR))
obj\P_EX020_XM\p_ex.bdscript ((P) Donald (XM))
obj\P_TR000\p_tr.bdscript ((P) Tron)
obj\P_WI020\p_ex.bdscript ((P) Donald (WI))
---
---
---
example usage from magic\FIRE_1\fire.bdscript
L227:
 halt 
 pushFromFSp 0
 pushImm 502
 gosub 12, L517
 popToSpVal 32
 pushFromFSpVal 32
 pushFromFSpVal 24
 fetchValue 0
 pushFromFSpVal 24
 fetchValue 4
 syscall 2, 11 ; trap_attack_set_radius (3 in, 0 out)
 pushFromFSp 0
 gosub 12, L505
 jz L305
 pushFromFSpVal 32
 pushImm 502
 syscall 2, 31 ; trap_attack_dup (2 in, 1 out)
 popToSp 24
 pushFromFSp 24
 pushFromFSpVal 24
 fetchValue 0
 pushImmf 30
 subf 
 pushFromFSpVal 24
 fetchValue 4
 pushImmf 30
 subf 
 syscall 2, 11 ; trap_attack_set_radius (3 in, 0 out)
 pushFromFSp 0
 gosub 12, L464
 jz L303
 pushFromFSpVal 32
 pushImmf 450
 pushFromFSpVal 24
 fetchValue 4
 syscall 2, 11 ; trap_attack_set_radius (3 in, 0 out)
 jmp L303
