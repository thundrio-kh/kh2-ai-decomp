---
---
---
name: trap_obj_reset_pos
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
push unk1 ; (unknown)  (memcpyToSp: 16, 16,16, 32,16, 48) (pushFromFSp: 0,4) (pushFromPSp: 16,32,48,64,80)
push unk2 ; (unknown)  (pushFromPSp: 16,32,48,64) (pushFromFSp: 4) (pushFromPSpVal: 16)
syscall 1, 153 ; trap_obj_reset_pos (2 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::OBJ::reset_pos(YS::OBJ_125 *const this, const kn::FVector *pos)
/----- (00000000004F83D0) ----------------------------------------------------
void __fastcall YS::trap_obj_reset_pos(BD_VALUE_21 *args)
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
  YS::OBJ::reset_pos((YS::OBJ_125 *const)*(unsigned int *)(v2 + 4), (const kn::FVector *)*(unsigned int *)&(*args)[4]);
}
// 4F83F4: variable 'back_chain' is possibly undefined
->
/----- (000000000045EAD8) ----------------------------------------------------
void __fastcall YS::OBJ::reset_pos(YS::OBJ_125 *const this, const kn::FVector *pos)
{
  unsigned __int64 v4; // r29
  __int64 back_chain; // [sp+0h] [-90h]

  v4 = (unsigned int)*(_QWORD *)(back_chain + 16);
  if ( !(_DWORD)this )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "this != NULL",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\obj.cpp",
      630LL,
      "reset_pos",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\obj.cpp", 630);
  }
  if ( ((unsigned __int8)this & 3) != 0 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "(((u_int)this) & 3) == 0",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\obj.cpp",
      631LL,
      "reset_pos",
      (const void *)v4);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\obj.cpp", 631);
  }
  *(_DWORD *)(unsigned int)((_DWORD)this + 264) |= 0x200000u;
  if ( !(unsigned int)YS::OBJ::is_valid(this) )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "is_valid()",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\obj.cpp",
      604LL,
      "set_pos",
      (const void *)v4);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\obj.cpp", 604);
  }
  kn::FVector::operator=((kn::FVector *const)(unsigned int)((_DWORD)this + 1344), pos);
  *(_DWORD *)&(*this)[1356] = 1065353216;
  YS::OBJ::make_matrix(this);
  if ( (*(_DWORD *)&(*this)[1416] & 2) != 0 )
  {
    *(_DWORD *)&(*this)[2780] = 0;
    *(_DWORD *)&(*this)[2776] = 0;
    *(_DWORD *)&(*this)[2772] = 0;
    *(_DWORD *)&(*this)[2768] = 0;
  }
}
// 45EB00: variable 'back_chain' is possibly undefined


---
---
---
appears in:
obj\B_BB130\b_bb.bdscript ((B) Thresholder’s possessor?)
obj\B_EX150\b_ex.bdscript ((B) Luxord (WORKS! can’t be killed, or paused))
obj\B_EX150_LV99\b_ex.bdscript ((B99) Luxord (Limit Cut))
obj\B_EX370\b_ex.bdscript ((B) Zexion (Absent Silhouette))
obj\B_EX380\b_ex.bdscript ((F) Zexion’s book)
obj\B_EX390\b_ex.bdscript ((B) Hooded Roxas)
obj\B_EX400\b_ex.bdscript ((B) Larxene (Absent Silhouette))
obj\B_EX410\b_ex.bdscript ((P) Sora book)
obj\B_EX420\b_ex.bdscript ((B) Lingering Will)
obj\M_EX350_13\m_ex.bdscript ((M) Mushroom 13 (EX))
obj\N_CM000_BTL\n_cm.bdscript ((N) Marluxia (BTL) (CM))
obj\N_CM020_BTL\n_cm.bdscript ((N) Lexaeus (BTL) (CM))
obj\N_EX760_BTL\n_ex.bdscript ((B) Pete (BTL))
---
---
---
example usage from obj\B_BB130\b_bb.bdscript
L4066:
 popToSp 0
 pushFromFSp 0
 pushFromFSp 0
 syscall 1, 147 ; trap_obj_pos (1 in, 1 out)
 memcpyToSp 16, 32
 pushFromPSp 32
 syscall 1, 153 ; trap_obj_reset_pos (2 in, 0 out)
 pushFromFSp 0
 pushFromFSp 0
 syscall 1, 147 ; trap_obj_pos (1 in, 1 out)
 memcpyToSp 16, 32
 pushFromPSp 32
 syscall 1, 148 ; trap_obj_set_pos (2 in, 0 out)
 pushFromFSp 0
 syscall 1, 147 ; trap_obj_pos (1 in, 1 out)
 memcpyToSp 16, 32
 pushFromPSp 32
 memcpyToSp 16, 16
 pushFromPSp 16
 pushImm 4
 add 
 dup 
 fetchValue 0
 pushImmf 115
 subf 
 memcpy 0
 pushImmf 30
 gosub 12, L1515
 pushFromFSp 0
 pushImmf 0.05
 syscall 1, 107 ; trap_obj_motion_speed (2 in, 0 out)
 gosub 12, L1593
 ret 
