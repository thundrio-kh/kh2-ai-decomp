---
---
---
name: trap_obj_stop_start
---
---
---
category: object
---
---
---
documentation level: untested
---
---
---
push id ; (int)  (unknown)
push mask ; (int) (unknown)
syscall 6, 50 ; trap_obj_stop_start (2 in, 0 out)
---
---
---
description: Either start the stop action or stop the start action
---
---
---
decompiled code:
void __fastcall YS::OBJ::StopStart(int id, u_int mask)
/----- (0000000000627514) ----------------------------------------------------
void __fastcall Ts::trap_obj_stop_start(BD_VALUE_25 *args)
{
  YS::OBJ::StopStart(*(_DWORD *)args, *(_DWORD *)&(*args)[4]);
}
->
/----- (0000000000462470) ----------------------------------------------------
void __fastcall YS::OBJ::StopStart(int id, u_int mask)
{
  YS::OBJ_132 *v2; // r28
  unsigned int *v5; // r3
  char v6; // r5

  v2 = 0LL;
  while ( 1 )
  {
    v5 = (unsigned int *)YS::OBJ::Each(v2);
    v2 = (YS::OBJ_132 *)v5;
    if ( !(_DWORD)v5 )
      break;
    v6 = 0;
    if ( (v5[354] & 0x80) == 0 )
      v6 = *(_BYTE *)(v5[2] + 4LL);
    if ( ((1 << v6) & mask) != 0 && (v5[510] & 4) == 0 )
      YS::STOP::start((YS::STOP *const)(unsigned int)((_DWORD)v5 + 1304), id, 0.0);
  }
}


---
---
---
appears in:

---
---
---
example usage from NA

