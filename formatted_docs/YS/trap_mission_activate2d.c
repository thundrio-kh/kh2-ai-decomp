## trap_mission_activate2d* (mission)

syscall 4, 14 ; trap_mission_activate2d (0 in, 0 out)

Turns on custom HUD, such as Demyx timer or hud used by Mushrooms

#### Input parameters
| Name | Type | Description
|------|------|------------




<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| msn\AL10_KINOKO_LEX\kino.bdscript       |           
| msn\BB13_KINOKO_XAL\kino.bdscript       |           
| msn\CA13_KINOKO_LUX\kino.bdscript       |           
| msn\EH03_KINOKO_XEM\kino.bdscript       |           
| msn\HB04_KINOKO_DEM\kino.bdscript       |           
| msn\HE17_KINOKO_ZEX\kino.bdscript       |           
| msn\MU09_KINOKO_VEX\kino.bdscript       |           
| msn\NM07_KINOKO_XIG\kino.bdscript       |           
| msn\TT14_KINOKO_LAR\kino.bdscript       |           
| msn\TT25_KINOKO_AXE\kino.bdscript       |           
| msn\TT36_KINOKO_SAI\kino.bdscript       |           
| msn\TT40_KINOKO_AXE\kino.bdscript       |           
| msn\WI02_KINOKO_MAR\kino.bdscript       |           
| obj\B_EX120\b_ex.bdscript       | ((B) Demyx (Only playing sitar?))          
| obj\B_EX120_HB\b_ex.bdscript       | ((B) Demyx)          
| obj\B_EX120_HB_LV99\b_ex.bdscript       | ((B99) Demyx (Limit Cut))          

</details>

<details>
	<summary>Example Usage From msn\AL10_KINOKO_LEX\kino.bdscript</summary>
L108:
 syscall 4, 14 ; trap_mission_activate2d (0 in, 0 out)
 ret
</details>

