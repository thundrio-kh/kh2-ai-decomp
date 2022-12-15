---
---
---
name: trap_act_table_add
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
push actName ; (string) 
push unk3 ; (unknown) 
push pc ; (int) routine to process this act
push unk5 ; (unknown) 
push unk6 ; (unknown) 
push unk7 ; (unknown) 
push unk8 ; (unknown) 
push unk9 ; (unknown) 
push unk10 ; (unknown) 
push unk11 ; (unknown) 
push unk12 ; (unknown) 
syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::ACT::TABLE::add(YS::ACT::TABLE *const this, const char *label, int priority, int entry, int *callback)
/----- (0000000000502E4C) ----------------------------------------------------
void __fastcall YS::trap_act_table_add(BD_VALUE_21 *args)
{
  YS::ACT::TABLE::add(
    (YS::ACT::TABLE *const)(*args)[0],
    (const char *)*(unsigned int *)&(*args)[4],
    *(_DWORD *)&(*args)[8],
    *(_DWORD *)&(*args)[12],
    (int *)(unsigned int)((_DWORD)args + 16));
}
->
/----- (0000000000401710) ----------------------------------------------------
void __fastcall YS::ACT::TABLE::add(YS::ACT::TABLE *const this, const char *label, int priority, int entry, int *callback)
{
  YS::ACT::TABLE *v5; // r27
  __int16 v7; // r30
  YS::ACT::TABLE *v10; // r26
  __int64 v11; // r24
  YS::ACT::TABLE *v12; // r25
  _DWORD *v13; // r4
  __int64 v14; // r9
  YS::ACT::TABLE *v15; // r8
  int v16; // r3
  __int64 v17; // r29
  __int64 v18; // ctr
  __int64 v19; // r3
  unsigned __int64 v20; // r4
  __int64 back_chain; // [sp+0h] [-B0h]

  v5 = this;
  v7 = entry;
  if ( (_DWORD)this )
  {
    v11 = 0LL;
    v12 = this;
    v10 = 0LL;
    while ( 1 )
    {
      v13 = (_DWORD *)*(unsigned int *)&v12->Elem[0][0];
      if ( (_DWORD)v13 )
      {
        if ( !(unsigned int)strcmp(label, v13) )
          break;
      }
      ++v11;
      v12 = (YS::ACT::TABLE *)(unsigned int)((_DWORD)v12 + 32);
      if ( (int)v11 >= 128 )
        goto LABEL_8;
    }
    v10 = v12;
  }
  else
  {
    v10 = 0LL;
  }
LABEL_8:
  if ( !(_DWORD)v10 )
  {
    if ( (_DWORD)v5 )
    {
      v14 = 0LL;
      v15 = v5;
      do
      {
        if ( !*(_DWORD *)&v15->Elem[0][0] )
        {
          v10 = v15;
          goto LABEL_16;
        }
        ++v14;
        v15 = (YS::ACT::TABLE *)(unsigned int)((_DWORD)v15 + 32);
      }
      while ( (int)v14 < 128 );
      v10 = 0LL;
    }
    else
    {
      v10 = 0LL;
    }
LABEL_16:
    if ( !(_DWORD)v10 )
    {
      ErrorPrintf(
        "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
        "elem != NULL",
        "common",
        "C:\\hd25\\kingdom2\\yasui\\libys\\act.cpp",
        45LL,
        "add",
        (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
      ErrorRaise();
      Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\act.cpp", 45);
    }
    *(_DWORD *)&v10->Elem[0][0] = (_DWORD)label;
  }
  v16 = priority >> 16;
  *(_WORD *)&v10->Elem[0][4] = priority;
  v17 = 0LL;
  v18 = 11LL;
  *(_WORD *)&v10->Elem[0][6] = v16;
  *(_WORD *)&v10->Elem[0][8] = v7;
  do
  {
    v19 = (int)v17;
    v17 += 4LL;
    v20 = (unsigned int)((_DWORD)v10 + 10);
    v10 = (YS::ACT::TABLE *)((char *)v10 + 2);
    *(_WORD *)v20 = *(int *)((char *)callback + v19);
    --v18;
  }
  while ( v18 );
}
// 401800: variable 'back_chain' is possibly undefined


---
---
---
appears in:

---
---
---
example usage from NA

