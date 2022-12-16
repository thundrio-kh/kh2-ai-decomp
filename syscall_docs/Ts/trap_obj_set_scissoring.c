---
---
---
name: trap_obj_set_scissoring
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
push unk1 ; (unknown)  (pushFromPSp: 36)
push unk2 ; (unknown)  (pushImm: 0,1)
syscall 6, 65 ; trap_obj_set_scissoring (2 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:

/----- (0000000000627EC0) ----------------------------------------------------
void __fastcall Ts::trap_obj_set_scissoring(BD_VALUE_25 *args)
{
  __int64 v1; // r31
  unsigned __int64 v2; // r30
  __int64 v3; // r30
  unsigned __int64 v4; // r31
  __int64 back_chain; // [sp+0h] [-90h]

  if ( *(_DWORD *)&(*args)[4] )
  {
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
    *(_DWORD *)(unsigned int)(*(_DWORD *)(v1 + 4) + 1896) |= 0x20u;
  }
  else
  {
    v3 = *(unsigned int *)args;
    v4 = (unsigned int)*(_QWORD *)(back_chain + 16);
    if ( !(_DWORD)v3 )
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
    if ( (v3 & 3) != 0 )
    {
      ErrorPrintf(
        "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
        "(((u_int)arg) & 3) == 0",
        "common",
        "C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h",
        49LL,
        "ToOBJ",
        (const void *)v4);
      ErrorRaise();
      Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h", 49);
    }
    *(_DWORD *)(unsigned int)(*(_DWORD *)(v3 + 4) + 1896) &= 0xFFFFFFDF;
  }
}
// 627EF0: variable 'back_chain' is possibly undefined

//BASIC
---
---
---
appears in:
obj\B_EX170_LAST\b_ex.bdscript ((B) Xemnas (Final))
obj\B_EX170_LAST_LV99\b_ex.bdscript ((B99) Xemnas (Final) (Limit Cut The World of Nothing)?)
---
---
---
example usage from obj\B_EX170_LAST\b_ex.bdscript
L7475:
 popToSp 0
 pushFromFSp 0
 pushImm 0
 gosub 12, L1645
 memcpyToSp 16, 36
 pushFromPSp 36
 pushImm 1
 syscall 6, 65 ; trap_obj_set_scissoring (2 in, 0 out)
 pushFromFSp 0
 syscall 1, 238 ; trap_obj_motion_capture_id (1 in, 1 out)
 popToSp 32
 pushFromFSp 0
 pushFromFSp 32
 gosub 12, L7671
 drop 
 pushFromFSp 0
 fetchValue 4
 syscall 1, 309 ; trap_sysobj_is_player (1 in, 1 out)
 jz L7558
 pushFromPSp 16
 pushImmf 1
 gosub 12, L737
 pushFromFSp 0
 pushFromPSp 16
 syscall 1, 217 ; trap_obj_set_pos_trans (2 in, 0 out)
 pushFromPSp 16
 pushImmf 0
 pushImmf 0
 pushImmf -1
 pushImmf 1
 gosub 12, L344
 pushFromFSp 0
 pushFromPSp 16
 syscall 1, 79 ; trap_obj_set_dir (2 in, 0 out)
 pushFromPWp W176
 pushFromPAi L27887 ; ___ai '71' (L27887)
 syscall 1, 164 ; trap_obj_camera_start_global (2 in, 0 out)
 jmp L7558
