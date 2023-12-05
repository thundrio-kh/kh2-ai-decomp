## trap_progress_is_secret_movie* (save)

syscall 0, 101 ; trap_progress_is_secret_movie (0 in, 1 out)

Checks if the secret movie is unlocked

#### Input parameters
| Name | Type | Description
|------|------|------------


#### Return Parameters
| Name | Type
|------|-----
| unk   | unknown   


<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| ard\es00\es_s.bdscript       |           

</details>

<details>
	<summary>Example Usage From ard\es00\es_s.bdscript</summary>
TR3:
 gosub 4, L39
 syscall 0, 101 ; trap_progress_is_secret_movie (0 in, 1 out)
 jz L30
 pushImm 7
 pushImm 0
 syscall 1, 41 ; trap_signal_call (2 in, 0 out)
 jmp L38
</details>

