---
---
---
name: trap_obj_fadeout_se
---
---
---
category: sound
---
---
---
documentation level: untested
---
---
---
push id ; (int)  (ID of the sound effect)
push fadetime ; (int)  (Time to take to fade out)
syscall 6, 71 ; trap_obj_fadeout_se (2 in, 0 out)
---
---
---
description: Fadeout a sound effect
---
---
---
decompiled code:
void __fastcall SOUND::destroySe(u_int id, int fadetime, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
/----- (0000000000628B00) ----------------------------------------------------
void __fastcall Ts::trap_obj_fadeout_se(BD_VALUE_25 *args, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
{
  SOUND::destroySe(*(_DWORD *)args, *(_DWORD *)&(*args)[4], *(unsigned int *)&(*args)[4], a4, a5, a6, a7, a8);
}
->
/----- (0000000000138360) ----------------------------------------------------
void __fastcall SOUND::destroySe(u_int id, int fadetime, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
{
  int v8; // r6
  __int64 v9; // r5
  __int64 v10; // r31
  __int64 v11; // r7

  v8 = 0;
  v9 = (unsigned int)s_seList;
  while ( 1 )
  {
    v10 = (unsigned int)s_seList;
    if ( v8 )
      v10 = *(unsigned int *)(unsigned int)(v8 + 28);
    else
      v9 = (unsigned int)s_seList;
    v8 = v10;
    if ( !(_DWORD)v10 )
      break;
    v11 = *(unsigned int *)(v10 + 20);
    if ( (_DWORD)v11 == id )
    {
      SE3D::fadeOut((SE3D_12 *const)v10, fadetime, v9, v10, v11, a6, a7, a8);
      *(_BYTE *)(v10 + 48) = 4;
      return;
    }
  }
}
// A352C8: using guessed type int s_seList;


---
---
---
appears in:
obj\B_EX370\b_ex.bdscript ((B) Zexion (Absent Silhouette))
---
---
---
example usage from obj\B_EX370\b_ex.bdscript
L13066:
 popToSp 0
 pushFromFSp 0
 fetchValue 0
 pushImm 0
 sub 
 ipos 
 jz L13093
 pushFromFSpVal 0
 pushImm 0
 syscall 6, 71 ; trap_obj_fadeout_se (2 in, 0 out)
 pushImm -1
 popToSpVal 0
 jmp L13093
