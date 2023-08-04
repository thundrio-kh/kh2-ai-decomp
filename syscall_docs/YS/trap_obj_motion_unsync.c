---
---
---
name: trap_obj_motion_unsync
---
---
---
category: mset
---
---
---
documentation level: untested
---
---
---
push parent ; (YS::MOTION_289)  (A motion set)
push child ; (YS::MOTION_289)  (A motion set)
syscall 1, 236 ; trap_obj_motion_unsync (2 in, 0 out)
---
---
---
description: Unsyncs two motion sets
---
---
---
decompiled code:
void __fastcall YS::MOTION::unsync(YS::MOTION_289 *const this, YS::MOTION_289 *child)
/----- (00000000004FF448) ----------------------------------------------------
void __fastcall YS::trap_obj_motion_unsync(BD_VALUE_21 *args)
{
  __int64 v2; // r30
  unsigned __int64 v3; // r29
  __int64 v4; // r31
  YS::MOTION_289 *v5; // r30
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
  v4 = *(unsigned int *)&(*args)[4];
  v5 = (YS::MOTION_289 *)(unsigned int)(*(_DWORD *)(v2 + 4) + 320);
  if ( !(_DWORD)v4 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "arg != NULL",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h",
      48LL,
      "ToOBJ",
      (const void *)v3);
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
      (const void *)v3);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h", 49);
  }
  YS::MOTION::unsync(v5, (YS::MOTION_289 *)(unsigned int)(*(_DWORD *)(v4 + 4) + 320));
}
// 4FF46C: variable 'back_chain' is possibly undefined
->
/----- (000000000045C8D0) ----------------------------------------------------
void __fastcall YS::MOTION::unsync(YS::MOTION_289 *const this, YS::MOTION_289 *child)
{
  int v3; // r26
  int v4; // r24
  unsigned __int64 v5; // r6
  __int64 back_chain; // [sp+0h] [-B0h]

  v3 = (int)child;
  v4 = *(_DWORD *)&(*this)[148];
  if ( (_DWORD)child == v4 )
  {
    v4 = 0;
    *(_DWORD *)&(*this)[148] = *(_DWORD *)(unsigned int)((_DWORD)child + 156);
  }
  else
  {
    while ( 1 )
    {
      v5 = (unsigned int)(v4 + 156);
      if ( *(_DWORD *)v5 == v3 )
        break;
      v4 = *(_DWORD *)v5;
      if ( !*(_DWORD *)v5 )
      {
        ErrorPrintf(
          "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
          "prev != NULL",
          "common",
          "../yasui/list.h",
          131LL,
          "unlink",
          (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
        ErrorRaise();
        Axa::AxaAssert("../yasui/list.h", 131);
      }
    }
    *(_DWORD *)v5 = *(_DWORD *)(unsigned int)(v3 + 156);
  }
  if ( v3 == *(_DWORD *)&(*this)[152] )
    *(_DWORD *)&(*this)[152] = v4;
  *(_DWORD *)(unsigned int)(v3 + 156) = 0;
}
// 45C970: variable 'back_chain' is possibly undefined


---
---
---
appears in:
limit\donald2\limi.bdscript
limit\donald2_wi\limi.bdscript
limit\goofy2\limi.bdscript
limit\goofy2_wi\limi.bdscript
obj\B_EX100\b_ex.bdscript ((B) Twilight Thorn)
obj\P_CA000\p_ca.bdscript ((P) Jack Sparrow)
obj\P_CA000_HUMAN\p_ca.bdscript ((P) Jack Sparrow (human))
obj\P_CA000_HUMAN_LOW\p_ca.bdscript ((P) Jack Sparrow (human) (LOW))
obj\P_CA000_LOW\p_ca.bdscript ((P) Jack Sparrow (LOW))
obj\P_EX030\p_ex.bdscript ((P) Goofy)
obj\P_EX030_NM\p_ex.bdscript ((P) Goofy (NM))
obj\P_EX030_TR\p_ex.bdscript ((N) Goofy (TR))
obj\P_EX030_XM\p_ex.bdscript ((P) Goofy (XM))
obj\P_EX100_KH1F\limi.bdscript ((P) Sora (Limit))
obj\P_EX100_NM_KH1F\limi.bdscript ((P) Sora (NM) (Limit))
obj\P_EX100_TR_KH1F\limi.bdscript ((P) Sora (TR) (Limit))
obj\P_EX100_WI_KH1F\limi.bdscript ((P) Sora (WI) (Limit))
obj\P_EX100_XM_KH1F\limi.bdscript ((P) Sora (XM) (Limit))
obj\P_TR000\p_tr.bdscript ((P) Tron)
obj\P_WI030\p_ex.bdscript ((P) Goofy (WI))
---
---
---
example usage from limit\donald2\limi.bdscript
L6188:
 popToSp 4
 popToSp 0
 pushFromFSp 0
 syscall 1, 161 ; trap_obj_is_attach (1 in, 1 out)
 jz L6210
 pushFromFSp 0
 syscall 1, 102 ; trap_obj_detach (1 in, 0 out)
 pushFromFSp 4
 pushFromFSp 0
 syscall 1, 236 ; trap_obj_motion_unsync (2 in, 0 out)
 jmp L6210
