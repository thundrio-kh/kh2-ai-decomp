---
---
---
name: trap_obj_act_push
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
syscall 1, 9 ; trap_obj_act_push (2 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::ACT::push(YS::ACT_86 *const this, const char *label)
/----- (00000000004FC454) ----------------------------------------------------
void __fastcall YS::trap_obj_act_push(BD_VALUE_21 *args)
{
  __int64 v2; // r29
  unsigned __int64 v3; // r30
  __int64 back_chain; // [sp+0h] [-90h]

  v2 = *(unsigned int *)args;
  v3 = (unsigned int)*(_QWORD *)(back_chain + 16);
  if ( !(_DWORD)v2 )
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
  if ( (v2 & 3) != 0 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "(((u_int)arg) & 3) == 0",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h",
      49LL,
      "ToOBJ",
      (const void *)v3);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h", 49);
  }
  YS::ACT::push(
    (YS::ACT_86 *const)(unsigned int)(*(_DWORD *)(v2 + 4) + 768),
    (const char *)*(unsigned int *)&(*args)[4]);
}
// 4FC478: variable 'back_chain' is possibly undefined
->
/----- (000000000040099C) ----------------------------------------------------
void __fastcall YS::ACT::push(YS::ACT_86 *const this, const char *label)
{
  unsigned __int64 v4; // r28
  __int64 v5; // r29
  _DWORD *v6; // r4
  const char *v7; // r3

  if ( (*(_DWORD *)&(*this)[156] & 1) == 0 )
  {
    v4 = *(unsigned int *)&(*this)[140];
    if ( !(_DWORD)v4 )
      goto LABEL_11;
    v5 = 0LL;
    while ( 1 )
    {
      v6 = (_DWORD *)*(unsigned int *)v4;
      if ( (_DWORD)v6 )
      {
        if ( !(unsigned int)strcmp(label, v6) )
          break;
      }
      ++v5;
      v4 = (unsigned int)(v4 + 32);
      if ( (int)v5 >= 128 )
        goto LABEL_11;
    }
    if ( (_DWORD)v4 )
    {
      YS::ACT::_push(this, (const YS::ACT::TABLE::ELEM_86 *)v4);
    }
    else
    {
LABEL_11:
      ErrorPrintf("*ERROR! ");
      v7 = YS::OBJ::get_entry_name((YS::OBJ_125 *const)*(unsigned int *)(*(unsigned int *)&(*this)[136] + 4LL));
      ErrorPrintf("no such act, %s, '%s'", v7, label);
      ErrorPrintf(" *\n");
      ErrorRaise();
      Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\act.cpp", 383);
    }
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

