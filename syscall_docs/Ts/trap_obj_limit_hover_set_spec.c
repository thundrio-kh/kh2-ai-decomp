---
---
---
name: trap_obj_limit_hover_set_spec
---
---
---
category: limit
---
---
---
documentation level: untested
---
---
---
push spec ; (Ts::ACTION_LIMIT_HOVER_0::SPEC *)  (A limit hover spec)
syscall 7, 21 ; trap_obj_limit_hover_set_spec (1 in, 0 out)
---
---
---
description: Set the spec for a limit hover
---
---
---
decompiled code:
void __fastcall Ts::ACTION_LIMIT_HOVER::SetSpec(Ts::ACTION_LIMIT_HOVER_0::SPEC *spec)
/----- (0000000000623ED0) ----------------------------------------------------
void __fastcall Ts::trap_obj_limit_hover_set_spec(BD_VALUE_24 *args)
{
  Ts::ACTION_LIMIT_HOVER::SetSpec((Ts::ACTION_LIMIT_HOVER_0::SPEC *)(*args)[0]);
}
->
/----- (000000000061D0CC) ----------------------------------------------------
void __fastcall Ts::ACTION_LIMIT_HOVER::SetSpec(Ts::ACTION_LIMIT_HOVER_0::SPEC *spec)
{
  float v1; // r7
  float v2; // r8
  float v3; // r9
  float v4; // r6
  float v5; // r7
  float v6; // r8

  v1 = spec->RunSpeed;
  v2 = spec->TurnSpeed;
  v3 = spec->Accel;
  Ts::ACTION_LIMIT_HOVER::Spec = spec->WalkSpeed;
  flt_3EACE04 = v1;
  flt_3EACE08 = v2;
  flt_3EACE0C = v3;
  v4 = spec->BrakeSlow;
  v5 = spec->RequireBrakeSlowSpeed;
  v6 = spec->HeightFromFloor;
  flt_3EACE10 = spec->Brake;
  flt_3EACE14 = v4;
  flt_3EACE18 = v5;
  flt_3EACE1C = v6;
  flt_3EACE20 = spec->MainteSpeed;
}
// 3EACE00: using guessed type float Ts::ACTION_LIMIT_HOVER::Spec;
// 3EACE04: using guessed type float flt_3EACE04;
// 3EACE08: using guessed type float flt_3EACE08;
// 3EACE0C: using guessed type float flt_3EACE0C;
// 3EACE10: using guessed type float flt_3EACE10;
// 3EACE14: using guessed type float flt_3EACE14;
// 3EACE18: using guessed type float flt_3EACE18;
// 3EACE1C: using guessed type float flt_3EACE1C;
// 3EACE20: using guessed type float flt_3EACE20;


---
---
---
appears in:
limit\tron\limi.bdscript
obj\P_AL010\p_al.bdscript ((P) Genie)
---
---
---
example usage from limit\tron\limi.bdscript
L609:
 gosub 4, L616
 pushFromPWp W0
 syscall 7, 21 ; trap_obj_limit_hover_set_spec (1 in, 0 out)
 ret 
