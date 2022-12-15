---
---
---
name: trap_obj_act_start
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
syscall 1, 8 ; trap_obj_act_start (2 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::ACT::start(YS::ACT_86 *const this, const YS::ACT::TABLE::ELEM_86 *elem, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
/----- (00000000004FC330) ----------------------------------------------------
void __fastcall YS::trap_obj_act_start(BD_VALUE_21 *args, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // r29
  unsigned __int64 v8; // r30
  __int64 back_chain; // [sp+0h] [-90h]

  v7 = *(unsigned int *)args;
  v8 = (unsigned int)*(_QWORD *)(back_chain + 16);
  if ( !(_DWORD)v7 )
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
  if ( (v7 & 3) != 0 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "(((u_int)arg) & 3) == 0",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h",
      49LL,
      "ToOBJ",
      (const void *)v8);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h", 49);
  }
  YS::ACT::start(
    (YS::ACT_86 *const)(unsigned int)(*(_DWORD *)(v7 + 4) + 768),
    (const char *)*(unsigned int *)&(*args)[4],
    a3,
    a4,
    a5,
    a6);
}
// 4FC354: variable 'back_chain' is possibly undefined
// 4FC42C: variable 'a3' is possibly undefined
// 4FC42C: variable 'a4' is possibly undefined
// 4FC42C: variable 'a5' is possibly undefined
// 4FC42C: variable 'a6' is possibly undefined
->
/----- (00000000003FFF64) ----------------------------------------------------
void __fastcall YS::ACT::start(YS::ACT_86 *const this, const YS::ACT::TABLE::ELEM_86 *elem, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
{
  __int64 v10; // r5
  unsigned __int64 v11; // r28
  __int64 v12; // r6
  __int64 v13; // r10
  __int64 v14; // r9
  __int64 v15; // r8
  __int64 v16; // r7
  __int64 v17; // r6
  __int64 v18; // r5
  __int64 v19; // r4
  __int64 v20; // r10
  __int64 v21; // r9
  __int64 v22; // r8
  __int64 v23; // r7
  __int64 v24; // r6
  __int64 v25; // r5
  __int64 v26; // r4
  __int64 v27; // r10
  __int64 v28; // r9
  __int64 v29; // r8
  __int64 v30; // r7
  __int64 v31; // r6
  __int64 v32; // r5
  __int64 v33; // r4
  YS::VM_377 *v34; // r3
  YS::VM_377 *v35; // r5
  int v36; // r4
  const char *v37; // r3
  __int64 v38; // r10
  __int64 v39; // r9
  __int64 v40; // r8
  __int64 v41; // r7
  __int64 v42; // r6
  __int64 v43; // r10
  __int64 v44; // r9
  __int64 v45; // r8
  __int64 v46; // r7
  __int64 v47; // r6
  __int64 v48; // r5
  __int64 v49; // r4
  __int64 v50; // r10
  __int64 v51; // r9
  __int64 v52; // r8
  __int64 v53; // r7
  __int64 v54; // r6
  __int64 v55; // r5
  __int64 v56; // r4
  unsigned int v57; // r3
  int v58; // r4
  __int16 v59; // r30
  YS::VM_377 *v60; // r3
  __int64 back_chain; // [sp+0h] [-A0h]
  BD_VALUE_0 v62; // [sp+70h] [-30h] BYREF
  BD_VALUE_0 v63[3]; // [sp+74h] [-2Ch] BYREF

  v10 = *(unsigned int *)&(*this)[136];
  v11 = (unsigned int)*(_QWORD *)(back_chain + 16);
  if ( !(_DWORD)v10
    || !*(_DWORD *)(*(unsigned int *)&(*this)[136] + 4LL)
    || !*(_DWORD *)(*(unsigned int *)(*(unsigned int *)&(*this)[136] + 4LL) + 0x484LL) )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "VmObj != NULL && VmObj->Obj != NULL && VmObj->Obj->Vm != NULL",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\act.cpp",
      275LL,
      "start",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\act.cpp", 275);
    v10 = *(unsigned int *)&(*this)[136];
  }
  v12 = *(unsigned int *)(v10 + 4);
  if ( (*(_DWORD *)(*(unsigned int *)(v12 + 0x484) + 0x1CLL) & 2) != 0 )
  {
    printf((unsigned int)"[%s:%d]", (__int64)"C:\\hd25\\kingdom2\\yasui\\libys\\act.cpp", 278LL, v12, a5, a6, a7, a8);
    printf((unsigned int)"\x1B[31m** WARNING! ", v19, v18, v17, v16, v15, v14, v13);
    printf((unsigned int)"start act when vm-end", v26, v25, v24, v23, v22, v21, v20);
    printf((unsigned int)" **\x1B[00m\n", v33, v32, v31, v30, v29, v28, v27);
  }
  else
  {
    v34 = (YS::VM_377 *)*(unsigned int *)&(*this)[148];
    if ( (_DWORD)v34 )
    {
      v63[0] = (BD_VALUE_0)v10;
      v35 = (YS::VM_377 *)*(unsigned int *)(v12 + 1156);
      v36 = *(unsigned __int16 *)(*(unsigned int *)&(*this)[144] + 0xALL);
      if ( (_DWORD)v35 != 0 && v36 != 0 )
      {
        YS::VM::syscallback(v35, v36, v63, 1, 0LL);
        v34 = (YS::VM_377 *)*(unsigned int *)&(*this)[148];
      }
      YS::VM::destroy(v34);
      *(_DWORD *)&(*this)[148] = 0;
      *(_DWORD *)&(*this)[144] = 0;
    }
    if ( !(_DWORD)elem )
    {
      ErrorPrintf(
        "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
        "elem != NULL",
        "common",
        "C:\\hd25\\kingdom2\\yasui\\libys\\act.cpp",
        282LL,
        "start",
        (const void *)v11);
      ErrorRaise();
      Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\act.cpp", 282);
    }
    v37 = YS::OBJ::get_entry_name((YS::OBJ_125 *const)*(unsigned int *)(*(unsigned int *)&(*this)[136] + 4LL));
    printf((unsigned int)"%s act start '%s'\n", (__int64)v37, *(unsigned int *)elem, v42, v41, v40, v39, v38);
    if ( (unsigned int)strstr(*(_DWORD *)elem, "dead") )
      printf((unsigned int)"\n", v49, v48, v47, v46, v45, v44, v43);
    if ( (unsigned int)strstr(*(_DWORD *)elem, "appear") )
      printf((unsigned int)"\n", v56, v55, v54, v53, v52, v51, v50);
    v62 = *(BD_VALUE_0 *)&(*this)[136];
    v57 = (unsigned int)YS::VM::dup(
                          (YS::VM_377 *const)*(unsigned int *)(*(unsigned int *)(*(_DWORD *)&v62 + 4LL) + 0x484LL),
                          0,
                          *(unsigned __int16 *)&(*elem)[8],
                          &v62,
                          1);
    v58 = *(unsigned __int16 *)&(*elem)[22];
    *(_DWORD *)&(*this)[152] = *(unsigned __int16 *)&(*elem)[4];
    *(_DWORD *)&(*this)[144] = (_DWORD)elem;
    *(_DWORD *)&(*this)[148] = v57;
    *(_DWORD *)(unsigned int)((_DWORD)this + 156) = 0;
    v59 = *(_WORD *)&(*elem)[6];
    if ( (v59 & 2) != 0 )
      *(_DWORD *)(unsigned int)((_DWORD)this + 156) |= 1u;
    if ( (v59 & 1) == 0 )
      *(_DWORD *)(unsigned int)((_DWORD)this + 156) |= 4u;
    *(_DWORD *)(unsigned int)((_DWORD)this + 156) |= 2u;
    v60 = (YS::VM_377 *)*(unsigned int *)(*(unsigned int *)(*(unsigned int *)&(*this)[136] + 4LL) + 0x484LL);
    if ( (_DWORD)v60 )
    {
      if ( v58 )
        YS::VM::syscallback(v60, v58, &v62, 1, 0LL);
    }
  }
}
// 3FFF8C: variable 'back_chain' is possibly undefined
// 400040: variable 'a5' is possibly undefined
// 400040: variable 'a6' is possibly undefined
// 400040: variable 'a7' is possibly undefined
// 400040: variable 'a8' is possibly undefined
// 400050: variable 'v19' is possibly undefined
// 400050: variable 'v18' is possibly undefined
// 400050: variable 'v17' is possibly undefined
// 400050: variable 'v16' is possibly undefined
// 400050: variable 'v15' is possibly undefined
// 400050: variable 'v14' is possibly undefined
// 400050: variable 'v13' is possibly undefined
// 400060: variable 'v26' is possibly undefined
// 400060: variable 'v25' is possibly undefined
// 400060: variable 'v24' is possibly undefined
// 400060: variable 'v23' is possibly undefined
// 400060: variable 'v22' is possibly undefined
// 400060: variable 'v21' is possibly undefined
// 400060: variable 'v20' is possibly undefined
// 400070: variable 'v33' is possibly undefined
// 400070: variable 'v32' is possibly undefined
// 400070: variable 'v31' is possibly undefined
// 400070: variable 'v30' is possibly undefined
// 400070: variable 'v29' is possibly undefined
// 400070: variable 'v28' is possibly undefined
// 400070: variable 'v27' is possibly undefined
// 400154: variable 'v42' is possibly undefined
// 400154: variable 'v41' is possibly undefined
// 400154: variable 'v40' is possibly undefined
// 400154: variable 'v39' is possibly undefined
// 400154: variable 'v38' is possibly undefined
// 400180: variable 'v49' is possibly undefined
// 400180: variable 'v48' is possibly undefined
// 400180: variable 'v47' is possibly undefined
// 400180: variable 'v46' is possibly undefined
// 400180: variable 'v45' is possibly undefined
// 400180: variable 'v44' is possibly undefined
// 400180: variable 'v43' is possibly undefined
// 4001AC: variable 'v56' is possibly undefined
// 4001AC: variable 'v55' is possibly undefined
// 4001AC: variable 'v54' is possibly undefined
// 4001AC: variable 'v53' is possibly undefined
// 4001AC: variable 'v52' is possibly undefined
// 4001AC: variable 'v51' is possibly undefined
// 4001AC: variable 'v50' is possibly undefined


/----- (0000000000400358) ----------------------------------------------------
void __fastcall YS::ACT::start(YS::ACT_86 *const this, const char *label, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  char *v7; // r31
  unsigned __int64 v8; // r28
  unsigned __int64 v9; // r9
  __int64 v10; // r29
  __int64 v11; // r10
  __int64 v12; // r9
  __int64 v13; // r8
  __int64 v14; // r7
  __int64 v15; // r6
  __int64 v16; // r5
  __int64 back_chain; // [sp+0h] [-90h]

  v7 = (char *)label;
  v8 = *(unsigned int *)&(*this)[140];
  v9 = (unsigned int)*(_QWORD *)(back_chain + 16);
  if ( !(_DWORD)v8 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "CurrentTable != NULL",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\act.cpp",
      316LL,
      "start",
      (const void *)v9);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\act.cpp", 316);
    v8 = *(unsigned int *)&(*this)[140];
  }
  if ( (*(_DWORD *)&(*this)[156] & 1) == 0 )
  {
    if ( !(_DWORD)v8 )
      goto LABEL_13;
    v10 = 0LL;
    while ( 1 )
    {
      label = (const char *)*(unsigned int *)v8;
      if ( (_DWORD)label )
      {
        if ( !(unsigned int)strcmp(v7, label) )
          break;
      }
      ++v10;
      v8 = (unsigned int)(v8 + 32);
      if ( (int)v10 >= 128 )
        goto LABEL_13;
    }
    if ( (_DWORD)v8 )
    {
      YS::ACT::clear(this);
      YS::ACT::start(this, (const YS::ACT::TABLE::ELEM_86 *)v8, v16, v15, v14, v13, v12, v11);
    }
    else
    {
LABEL_13:
      ErrorPrintf("*ERROR! ", label, a3, a4, a5, a6, v9);
      ErrorPrintf("no such act, '%s'", v7);
      ErrorPrintf(" *\n");
      ErrorRaise();
      Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\act.cpp", 328);
    }
  }
}
// 400380: variable 'back_chain' is possibly undefined
// 400458: variable 'v16' is possibly undefined
// 400458: variable 'v15' is possibly undefined
// 400458: variable 'v14' is possibly undefined
// 400458: variable 'v13' is possibly undefined
// 400458: variable 'v12' is possibly undefined
// 400458: variable 'v11' is possibly undefined
// 400468: variable 'label' is possibly undefined
// 400468: variable 'a3' is possibly undefined
// 400468: variable 'a4' is possibly undefined
// 400468: variable 'a5' is possibly undefined
// 400468: variable 'a6' is possibly undefined
// 400468: variable 'v9' is possibly undefined


---
---
---
appears in:

---
---
---
example usage from NA

