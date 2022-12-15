---
---
---
name: trap_obj_show_shadow
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
syscall 6, 64 ; trap_obj_show_shadow (1 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::OBJ::show_shadow(YS::OBJ_130 *const this)
/----- (0000000000627DB4) ----------------------------------------------------
void __fastcall Ts::trap_obj_show_shadow(BD_VALUE_25 *args)
{
  __int64 v1; // r30
  unsigned __int64 v2; // r31
  __int64 back_chain; // [sp+0h] [-90h]

  v1 = *(unsigned int *)args;
  v2 = (unsigned int)*(_QWORD *)(back_chain + 16);
  if ( !(_DWORD)v1 )
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
  if ( (v1 & 3) != 0 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "(((u_int)arg) & 3) == 0",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h",
      49LL,
      "ToOBJ",
      (const void *)v2);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h", 49);
  }
  YS::OBJ::show_shadow((YS::OBJ_130 *const)*(unsigned int *)(v1 + 4));
}
// 627DD4: variable 'back_chain' is possibly undefined
->
/----- (00000000004697F4) ----------------------------------------------------
void __fastcall YS::OBJ::show_shadow(YS::OBJ_130 *const this)
{
  int v1; // r31
  unsigned int v2; // r4

  v1 = (int)this;
  v2 = (unsigned __int8)(*this)[2476];
  if ( v2 <= 2 )
  {
    if ( !(*this)[2476] )
    {
      *(_DWORD *)(unsigned int)((_DWORD)this + 268) |= 0x200u;
      return;
    }
LABEL_10:
    if ( (int)(v2 - 1) > 0 )
    {
      if ( (int)(v2 - 1) <= 1 )
      {
        *(_DWORD *)(unsigned int)((_DWORD)this + 1896) = (*(_DWORD *)(unsigned int)((_DWORD)this + 1896) | 0x200) & 0xFFFFFBFF;
        goto LABEL_19;
      }
      if ( (int)(v2 - 1) <= 2 )
      {
        *(_DWORD *)(unsigned int)((_DWORD)this + 1896) = *(_DWORD *)(unsigned int)((_DWORD)this + 1896) & 0xFFFFFDFF | 0x400;
        goto LABEL_19;
      }
    }
    else if ( (int)(v2 - 1) > -1 )
    {
      *(_DWORD *)(unsigned int)((_DWORD)this + 1896) &= 0xFFFFF9FF;
LABEL_19:
      *(_DWORD *)(unsigned int)(v1 + 268) &= 0xFFFFFDFF;
      return;
    }
    ErrorPrintf("*ERROR! ");
    ErrorPrintf("not support shadow size");
    ErrorPrintf(" *\n");
    ErrorRaise();
    Axa::AxaAssert("../harata/objdrawlist.h", 138);
    goto LABEL_19;
  }
  if ( (unsigned __int8)(*this)[2476] <= 5u )
  {
    if ( (unsigned __int8)(*this)[2476] <= 3u )
      goto LABEL_10;
LABEL_20:
    if ( (int)(v2 - 4) > 0 )
    {
      if ( (int)(v2 - 4) <= 1 )
      {
        *(_DWORD *)(unsigned int)((_DWORD)this + 1896) = (*(_DWORD *)(unsigned int)((_DWORD)this + 1896) | 0x200) & 0xFFFFFBFF;
        goto LABEL_29;
      }
      if ( (int)(v2 - 4) <= 2 )
      {
        *(_DWORD *)(unsigned int)((_DWORD)this + 1896) = *(_DWORD *)(unsigned int)((_DWORD)this + 1896) & 0xFFFFFDFF | 0x400;
        goto LABEL_29;
      }
    }
    else if ( (int)(v2 - 4) > -1 )
    {
      *(_DWORD *)(unsigned int)((_DWORD)this + 1896) &= 0xFFFFF9FF;
LABEL_29:
      *(_DWORD *)(unsigned int)(v1 + 268) |= 0x200u;
      return;
    }
    ErrorPrintf("*ERROR! ");
    ErrorPrintf("not support shadow size");
    ErrorPrintf(" *\n");
    ErrorRaise();
    Axa::AxaAssert("../harata/objdrawlist.h", 138);
    goto LABEL_29;
  }
  if ( (unsigned __int8)(*this)[2476] <= 6u )
    goto LABEL_20;
}


---
---
---
appears in:

---
---
---
example usage from NA

