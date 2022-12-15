---
---
---
name: trap_obj_act_wedge
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
syscall 1, 81 ; trap_obj_act_wedge (2 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::ACT::wedge(YS::ACT_86 *const this, const char *label)
/----- (00000000004FC578) ----------------------------------------------------
void __fastcall YS::trap_obj_act_wedge(BD_VALUE_21 *args)
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
  YS::ACT::wedge(
    (YS::ACT_86 *const)(unsigned int)(*(_DWORD *)(v2 + 4) + 768),
    (const char *)*(unsigned int *)&(*args)[4]);
}
// 4FC59C: variable 'back_chain' is possibly undefined
->
/----- (0000000000400B90) ----------------------------------------------------
void __fastcall YS::ACT::wedge(YS::ACT_86 *const this, const char *label)
{
  unsigned __int64 v4; // r29
  __int64 v5; // r27
  _DWORD *v6; // r4
  YS::VM_377 *v7; // r3
  int v8; // r4
  int v9; // r4
  int v10; // r3
  int v11; // r28
  int v12; // r29
  const char *v13; // r3
  __int64 back_chain; // [sp+0h] [-B0h]
  BD_VALUE_0 v15; // [sp+70h] [-40h] BYREF
  int v16; // [sp+74h] [-3Ch]
  int v17; // [sp+78h] [-38h]

  v4 = *(unsigned int *)&(*this)[140];
  if ( !(_DWORD)v4 )
    goto LABEL_16;
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
      goto LABEL_16;
  }
  if ( (_DWORD)v4 )
  {
    v7 = (YS::VM_377 *)*(unsigned int *)&(*this)[148];
    if ( (_DWORD)v7 )
    {
      v15 = *(BD_VALUE_0 *)&(*this)[136];
      v8 = *(unsigned __int16 *)(*(unsigned int *)&(*this)[144] + 0xALL);
      if ( *(_DWORD *)(*(unsigned int *)(*(_DWORD *)&v15 + 4LL) + 0x484LL) != 0 && v8 != 0 )
      {
        YS::VM::syscallback(
          (YS::VM_377 *const)*(unsigned int *)(*(unsigned int *)(*(_DWORD *)&v15 + 4LL) + 0x484LL),
          v8,
          &v15,
          1,
          0LL);
        v7 = (YS::VM_377 *)*(unsigned int *)&(*this)[148];
      }
      YS::VM::destroy(v7);
      *(_DWORD *)&(*this)[148] = 0;
      *(_DWORD *)&(*this)[144] = 0;
    }
    v16 = v4;
    v17 = 0;
    v9 = (*(_DWORD *)&(*this)[4] + 15) % 16;
    v10 = *(_DWORD *)this;
    *(_DWORD *)&(*this)[4] = v9;
    v11 = v16;
    v12 = v17;
    if ( v9 == v10 )
    {
      ErrorPrintf(
        "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
        "!is_empty()",
        "common",
        "../yasui/queue.h",
        55LL,
        "shift",
        (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
      ErrorRaise();
      Axa::AxaAssert("../yasui/queue.h", 55);
      v9 = *(_DWORD *)&(*this)[4];
    }
    *(_DWORD *)(unsigned int)((_DWORD)this + 8 * v9 + 8) = v11;
    *(_DWORD *)((unsigned int)((_DWORD)this + 8 * v9 + 8) + 4LL) = v12;
    *(_DWORD *)&(*this)[152] = 0;
  }
  else
  {
LABEL_16:
    ErrorPrintf("*ERROR! ");
    v13 = YS::OBJ::get_entry_name((YS::OBJ_125 *const)*(unsigned int *)(*(unsigned int *)&(*this)[136] + 4LL));
    ErrorPrintf("no such act, %s, '%s'", v13, label);
    ErrorPrintf(" *\n");
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\act.cpp", 410);
  }
}
// 400CAC: variable 'back_chain' is possibly undefined


---
---
---
appears in:

---
---
---
example usage from NA

