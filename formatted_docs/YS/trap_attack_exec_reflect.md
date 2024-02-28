## trap_attack_exec_reflect* (attack)

`syscall 2, 26 ; trap_attack_exec_reflect (1 in, 0 out)`

reflects an attack. Unsure if it changes the direction of the attack, or changes it's attributes.

#### Input parameters
| Name | Type | Description
|------|------|------------
| attack   | YS::ATTACK_MAGIC *   | attack object to be reflected


Example Usage From obj\N_CM020_BTL\n_cm.bdscript
```plaintext
L75:
 jz L83
 pushFromFSp 4
 syscall 2, 26 ; trap_attack_exec_reflect (1 in, 0 out)
 jmp L83
```





	Appears in:
| filename | Entity (obj)
|----------|-------------
| obj\N_CM020_BTL\n_cm.bdscript       | ((N) Lexaeus (BTL) (CM))          



