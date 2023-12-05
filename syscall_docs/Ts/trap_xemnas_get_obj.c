---
---
---
name: trap_xemnas_get_obj
---
---
---
category: special
---
---
---
documentation level: untested
---
---
---
push type ; (int)  (Whether or not to get the clone or actual xemnas object?)
syscall 6, 59 ; trap_xemnas_get_obj (1 in, 1 out)
pop xemnas ; (YS::OBJ_125)
---
---
---
description: Get a Xemnas object
---
---
---
decompiled code:
YS::OBJ_252 *__fastcall Ts::XEMNAS::Get(int type)
/----- (000000000062782C) ----------------------------------------------------
void __fastcall Ts::trap_xemnas_get_obj(BD_VALUE_25 *args)
{
  *(_DWORD *)args = (unsigned int)Ts::XEMNAS::Get(*(_DWORD *)args);
}
->
/----- (000000000062A0C0) ----------------------------------------------------
YS::OBJ_252 *__fastcall Ts::XEMNAS::Get(int type)
{
  YS::OBJ_132 *v1; // r29
  YS::OBJ_125 *v3; // r3

  v1 = 0LL;
  while ( 1 )
  {
    v3 = YS::OBJ::Each(v1);
    v1 = v3;
    if ( !(_DWORD)v3 )
      break;
    if ( (unsigned int)YS::OBJ::get_part_num(v3) == 4007 )
    {
      if ( (unsigned int)YS::OBJ::get_unit_arg(v1, 1) == 1 )
      {
        if ( !type )
          return v1;
      }
      else if ( type )
      {
        return v1;
      }
    }
  }
  return 0LL;
}


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
L15077:
 pushFromPSp 0
 pushImm 1
 syscall 6, 59 ; trap_xemnas_get_obj (1 in, 1 out)
 gosub 8, L302
 pushFromPSp 0
 ret 
