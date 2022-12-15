---
---
---
name: trap_command_set_side_b
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
syscall 1, 337 ; trap_command_set_side_b (0 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::FIELD_COMMAND::set_side(YS::FIELD_COMMAND_1 *const this, int side)
/----- (0000000000508790) ----------------------------------------------------
void __fastcall YS::trap_command_set_side_b(BD_VALUE_21 *args)
{
  YS::FIELD_COMMAND::set_side((YS::FIELD_COMMAND_1 *const)*((unsigned int *)YS::PLAYER::Player + 721), 6);
}
// 7FE80C: using guessed type void *__ptr32 YS::PLAYER::Player;
->
/----- (000000000042BCD8) ----------------------------------------------------
void __fastcall YS::FIELD_COMMAND::set_side(YS::FIELD_COMMAND_1 *const this, int side)
{
  *(_DWORD *)&(*this)[2724] = side;
  YS::COMMAND_MENU::set_cursor(
    (YS::COMMAND_MENU_3 *const)(unsigned int)((_DWORD)this + 116 * side + 36),
    *(_DWORD *)(*(unsigned int *)*(unsigned int *)&(*this)[2240] + 0x6CLL));
  YS::PLAYER_COMMAND::close((YS::PLAYER_COMMAND_12 *const)this, 0);
  YS::PLAYER_COMMAND::open((YS::PLAYER_COMMAND_12 *const)this, *(_DWORD *)&(*this)[2724], 0);
}


---
---
---
appears in:

---
---
---
example usage from NA

