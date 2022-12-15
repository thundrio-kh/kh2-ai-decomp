/----- (00000000004F4704) ----------------------------------------------------
void __fastcall YS::trap_attack_set_hit_callback(BD_VALUE_19 *args)
{
  _DWORD *v1; // r5
  int v2; // r6
  int v3; // r3

  v1 = (_DWORD *)(*args)[0];
  v2 = *(_DWORD *)&(*args)[4];
  v3 = *(_DWORD *)&(*args)[8];
  v1[35] = YS::VM::Current;
  v1[36] = v2;
  v1[37] = v3;
}
// 7FE85C: using guessed type void *__ptr32 YS::VM::Current;

//BASIC