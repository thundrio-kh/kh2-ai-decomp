---
---
---
name: trap_obj_each_all
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
push unk1 ; (unknown)  (pushFromFSpVal: 4)
syscall 1, 331 ; trap_obj_each_all (1 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
YS::OBJ_132 *__fastcall YS::OBJ::Each(YS::OBJ_132 *obj)
/----- (0000000000502184) ----------------------------------------------------
void __fastcall YS::trap_obj_each_all(BD_VALUE_21 *args)
{
  *(_DWORD *)args = (unsigned int)YS::OBJ::Each((YS::OBJ_132 *)(*args)[0]);
}
->
/----- (000000000046DAC0) ----------------------------------------------------
YS::OBJ_132 *__fastcall YS::OBJ::Each(YS::OBJ_132 *obj)
{
  unsigned __int64 v1; // r31

  LODWORD(v1) = (_DWORD)obj;
  do
  {
    if ( (_DWORD)v1 )
      v1 = *(unsigned int *)(unsigned int)(v1 + 2228);
    else
      v1 = (unsigned int)YS::ObjList;
  }
  while ( (_DWORD)v1 && YS::OBJ::is_leave((YS::OBJ_128 *const)v1) );
  return (YS::OBJ_132 *)v1;
}
// 2A9FC18: using guessed type int YS::ObjList;


---
---
---
appears in:
msn\TT04_MS301\tt04.bdscript
msn\TT05_MS403\tt05.bdscript
msn\TT05_MS404\tt05.bdscript
obj\F_EH050\f_eh.bdscript ((F) Floating building 1 (EH))
obj\F_EH060\f_eh.bdscript ((F) Floating building 2 (EH))
obj\P_EH000_SIDECAR\p_eh.bdscript ((P) Riku riding sidecar)
---
---
---
example usage from msn\TT04_MS301\tt04.bdscript
L214:
 popToSp 0
 pushFromFSpVal 4
 syscall 1, 331 ; trap_obj_each_all (1 in, 1 out)
 popToSpVal 4
 pushFromFSpVal 4
 pushImm 0
 sub 
 neqz 
 ret 
