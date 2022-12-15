---
---
---
name: trap_attack_new
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
push unk3 ; (unknown) 
push unk4 ; (unknown) 
syscall 2, 10 ; trap_attack_new (4 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::ATTACK_MAGIC::ATTACK_MAGIC(YS::ATTACK_MAGIC_3 *const this, YS::BTLOBJ *owner, __int64 param_id, int combo_group, __int64 level, int attack_id)
/----- (00000000004F42D8) ----------------------------------------------------
void __fastcall YS::trap_attack_new(BD_VALUE_19 *args)
{
  int v2; // r30
  YS::ATTACK_MAGIC_3 *v3; // r29
  __int64 v4; // r30
  unsigned __int64 v5; // r28
  __int64 v6; // r30
  __int64 back_chain; // [sp+0h] [-A0h]

  v2 = 0;
  v3 = (YS::ATTACK_MAGIC_3 *)AREA::Alloc(0x140u);
  if ( (_DWORD)v3 )
  {
    v4 = *(unsigned int *)args;
    v5 = (unsigned int)*(_QWORD *)(back_chain + 16);
    if ( !(_DWORD)v4 )
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
    if ( (v4 & 3) != 0 )
    {
      ErrorPrintf(
        "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
        "(((u_int)arg) & 3) == 0",
        "common",
        "C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h",
        49LL,
        "ToOBJ",
        (const void *)v5);
      ErrorRaise();
      Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h", 49);
    }
    v6 = *(unsigned int *)(v4 + 4);
    if ( (*(_DWORD *)(v6 + 1416) & 2) == 0 )
    {
      ErrorPrintf(
        "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
        "TOOBJ(obj)->is_btlobj()",
        "common",
        "../../yasui/libys/btlobj.h",
        178LL,
        "TOBTLOBJ",
        (const void *)v5);
      ErrorRaise();
      Axa::AxaAssert("../../yasui/libys/btlobj.h", 178);
    }
    YS::ATTACK_MAGIC::ATTACK_MAGIC(
      v3,
      (YS::BTLOBJ *)v6,
      *(int *)&(*args)[4],
      *(_DWORD *)&(*args)[8],
      *(int *)&(*args)[12],
      -1);
    v2 = (int)v3;
  }
  *(_DWORD *)args = v2;
}
// 4F4324: variable 'back_chain' is possibly undefined
->
/----- (000000000050C3AC) ----------------------------------------------------
void __fastcall YS::ATTACK_MAGIC::ATTACK_MAGIC(YS::ATTACK_MAGIC_3 *const this, YS::BTLOBJ *owner, __int64 param_id, int combo_group, __int64 level, int attack_id)
{
  int *v7; // r5
  int v8; // r4

  YS::ATTACK::ATTACK((YS::ATTACK *)this, owner, (YS::STDOBJ *)owner, param_id, level, attack_id, combo_group);
  *(_DWORD *)&(*this)[196] = 0;
  *(_DWORD *)&(*this)[200] = 0;
  *(_DWORD *)this = 7671784;
  v7 = (int *)(unsigned int)((_DWORD)this + 4);
  *(_DWORD *)&(*this)[204] = 0;
  *(_DWORD *)&(*this)[216] = 0;
  *(_DWORD *)&(*this)[212] = 0;
  *(_DWORD *)&(*this)[208] = 0;
  *(_DWORD *)&(*this)[220] = 1065353216;
  *(_DWORD *)&(*this)[232] = 0;
  *(_DWORD *)&(*this)[228] = 0;
  *(_DWORD *)&(*this)[280] = 0;
  *(_DWORD *)&(*this)[224] = 0;
  *(_DWORD *)&(*this)[236] = 1065353216;
  *(_DWORD *)&(*this)[248] = 0;
  *(_DWORD *)&(*this)[244] = 0;
  *(_DWORD *)&(*this)[240] = 0;
  *(_DWORD *)&(*this)[252] = 1065353216;
  *(_DWORD *)&(*this)[256] = 0;
  *(_DWORD *)&(*this)[260] = 0;
  *(_DWORD *)&(*this)[264] = 0;
  v8 = *v7;
  *(_DWORD *)&(*this)[268] = 0;
  *(_DWORD *)&(*this)[304] = 0;
  *(_DWORD *)&(*this)[308] = 0;
  *(_DWORD *)&(*this)[312] = 0;
  *(_DWORD *)&(*this)[316] = 0;
  *v7 = v8 | 0x100;
}


/----- (00000000006D4704) ----------------------------------------------------
void __fastcall YS::ATTACK_MAGIC::~ATTACK_MAGIC(YS::ATTACK_MAGIC *this)
{
  *(_DWORD *)this->baseclass_0 = 7671784;
  YS::ATTACK::~ATTACK((YS::ATTACK *)this);
}


/----- (00000000006D4760) ----------------------------------------------------
void __fastcall YS::ATTACK_MAGIC::~ATTACK_MAGIC(YS::ATTACK_MAGIC *this)
{
  *(_DWORD *)this->baseclass_0 = 7671784;
  YS::ATTACK::~ATTACK((YS::ATTACK *)this);
  AREA::Free((unsigned int *)this);
}


---
---
---
appears in:

---
---
---
example usage from NA

