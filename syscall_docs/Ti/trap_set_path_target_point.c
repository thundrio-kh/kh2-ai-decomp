---
---
---
name: trap_set_path_target_point
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
push unk1 ; (unknown)  (fetchValue: 16) (pushImm: 0,111) (pushFromFSpVal: 108) (pushFromFSp: 0)
push unk2 ; (unknown)  (gosub: 12, L2665,12, L3439,4, L1500) (pushImm: -1)
syscall 5, 13 ; trap_set_path_target_point (2 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall Ti::Path::set_target_point(Ti::Path_3 *const this, YS::OBJ_273 *obj, int point_index)
/----- (000000000065A590) ----------------------------------------------------
void __fastcall Ti::trap_set_path_target_point(BD_VALUE_26 *args)
{
  __int64 v2; // r30
  unsigned __int64 v3; // r29
  __int64 v4; // r30
  Ti::Path_3 *v5; // r3
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
  v4 = *(unsigned int *)(v2 + 4);
  if ( !(_DWORD)v4 || !*(_DWORD *)(v4 + 1288) )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "obj && obj->Path",
      "common",
      "C:\\hd25\\kingdom2\\taito\\trapnpc.cpp",
      220LL,
      "trap_set_path_target_point",
      (const void *)v3);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\taito\\trapnpc.cpp", 220);
  }
  if ( (_DWORD)v4 )
  {
    v5 = (Ti::Path_3 *)*(unsigned int *)(v4 + 1288);
    if ( (_DWORD)v5 )
      Ti::Path::set_target_point(v5, (YS::OBJ_273 *)v4, *(_DWORD *)&(*args)[4]);
  }
}
// 65A5B4: variable 'back_chain' is possibly undefined
->
/----- (0000000000656180) ----------------------------------------------------
void __fastcall Ti::Path::set_target_point(Ti::Path_3 *const this, YS::OBJ_273 *obj, int point_index)
{
  *(_DWORD *)&(*this)[140] = point_index;
}


---
---
---
appears in:
obj\N_AL070_BTL\n_al.bdscript ((N) Jafar clone (BTL) (AL))
obj\N_BB060_BTL\n_bb.bdscript ((N) Lumière (BTL) (BB))
obj\N_BB070_BTL\n_bb.bdscript ((N) Mrs. Potts (BTL) (BB))
---
---
---
example usage from obj\N_AL070_BTL\n_al.bdscript
L1140:
 pushFromFSp 0
 gosub 4, L1376
 pushFromFSp 0
 pushFromFSp 0
 pushFromFSp 0
 fetchValue 16
 gosub 4, L1500
 syscall 5, 13 ; trap_set_path_target_point (2 in, 0 out)
 pushFromFSp 0
 pushFromFSp 0
 pushImmf 10
 syscall 5, 3 ; trap_get_path_dir (2 in, 1 out)
 memcpyToSp 16, 16
 pushFromPSp 16
 pushFromFSp 0
 fetchValue 44
 syscall 1, 111 ; trap_obj_set_movement (3 in, 0 out)
 jmp L1178
