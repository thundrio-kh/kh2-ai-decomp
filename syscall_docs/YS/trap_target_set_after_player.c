---
---
---
name: trap_target_set_after_player
---
---
---
category: unused
---
---
---
documentation level: untested
---
---
---
push unk1 ; (unknown) 
push unk2 ; (unknown) 
syscall 1, 163 ; trap_target_set_after_player (2 in, 0 out)
---
---
---
description: Doesnt appear to do anything except print some debug warnings
---
---
---
decompiled code:

/----- (0000000000509010) ----------------------------------------------------
void __fastcall YS::trap_target_set_after_player(BD_VALUE_21 *args, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
{
  __int64 v8; // r10
  __int64 v9; // r9
  __int64 v10; // r8
  __int64 v11; // r7
  __int64 v12; // r6
  __int64 v13; // r5
  __int64 v14; // r4
  __int64 v15; // r10
  __int64 v16; // r9
  __int64 v17; // r8
  __int64 v18; // r7
  __int64 v19; // r6
  __int64 v20; // r5
  __int64 v21; // r4
  __int64 v22; // r10
  __int64 v23; // r9
  __int64 v24; // r8
  __int64 v25; // r7
  __int64 v26; // r6
  __int64 v27; // r5
  __int64 v28; // r4

  printf((unsigned int)"[%s:%d]", (__int64)"C:\\hd25\\kingdom2\\yasui\\libys\\trapfield.cpp", 806LL, a4, a5, a6, a7, a8);
  printf((unsigned int)"\x1B[31m** WARNING! ", v14, v13, v12, v11, v10, v9, v8);
  printf((unsigned int)"obsolete TARGET.set_after_player", v21, v20, v19, v18, v17, v16, v15);
  printf((unsigned int)" **\x1B[00m\n", v28, v27, v26, v25, v24, v23, v22);
}
// 509040: variable 'v14' is possibly undefined
// 509040: variable 'v13' is possibly undefined
// 509040: variable 'v12' is possibly undefined
// 509040: variable 'v11' is possibly undefined
// 509040: variable 'v10' is possibly undefined
// 509040: variable 'v9' is possibly undefined
// 509040: variable 'v8' is possibly undefined
// 509050: variable 'v21' is possibly undefined
// 509050: variable 'v20' is possibly undefined
// 509050: variable 'v19' is possibly undefined
// 509050: variable 'v18' is possibly undefined
// 509050: variable 'v17' is possibly undefined
// 509050: variable 'v16' is possibly undefined
// 509050: variable 'v15' is possibly undefined
// 509060: variable 'v28' is possibly undefined
// 509060: variable 'v27' is possibly undefined
// 509060: variable 'v26' is possibly undefined
// 509060: variable 'v25' is possibly undefined
// 509060: variable 'v24' is possibly undefined
// 509060: variable 'v23' is possibly undefined
// 509060: variable 'v22' is possibly undefined

//BASIC
---
---
---
appears in:

---
---
---
example usage from NA

