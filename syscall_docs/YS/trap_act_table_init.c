---
---
---
name: trap_act_table_init
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
syscall 1, 5 ; trap_act_table_init (1 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::ACT::TABLE::init(YS::ACT::TABLE *const this)
/----- (0000000000502E24) ----------------------------------------------------
void __fastcall YS::trap_act_table_init(BD_VALUE_21 *args)
{
  YS::ACT::TABLE::init((YS::ACT::TABLE *const)(*args)[0]);
}
->
/----- (0000000000401698) ----------------------------------------------------
void __fastcall YS::ACT::TABLE::init(YS::ACT::TABLE *const this)
{
  __int64 v1; // r4
  __int64 v2; // ctr
  __int64 v3; // r10
  __int64 v4; // r6

  v1 = 0LL;
  v2 = 16LL;
  do
  {
    *(_DWORD *)&this->Elem[0][(int)v1] = 0;
    *(_DWORD *)&this->Elem[1][(int)v1] = 0;
    *(_DWORD *)&this->Elem[2][(int)v1] = 0;
    v3 = (int)v1 + 192;
    *(_DWORD *)&this->Elem[3][(int)v1] = 0;
    v4 = (int)v1 + 224;
    *(_DWORD *)&this->Elem[4][(int)v1] = 0;
    *(_DWORD *)&this->Elem[5][(int)v1] = 0;
    v1 += 256LL;
    *(_DWORD *)&this->Elem[0][v3] = 0;
    *(_DWORD *)&this->Elem[0][v4] = 0;
    --v2;
  }
  while ( v2 );
}


---
---
---
appears in:

---
---
---
example usage from NA

