#define SERIAL0_BASE 0xfe02000
#define INTERRUPT_BASE 0xfe0a000
#define CLOCK_BASE 0xfe06000
#define MEMORY_ERR_BASE 0xfe08000
#define MONBSS_BASE 0xffffe000
#define STACK_BASE 0xfe60000
#define TRAPVECTOR_BASE 0xfe60c00
#define PROM_BASE 0xfef0000
#define KEYB_CONTROL 0xfe00004
#define KEYB_DATA 0xfe00006

#define NUMCONTEXTS 8
#define NUMPMEGS 256
#define PGSPERSEG 16
#define BYTESPERPG 8192
#define BYTES_PG_SHIFT 13
#define ADRSPC_SIZE 0x10000000
#define	MAPADDRMASK 0xfffe000
#define PMAPOFF 0x10000000
#define SMAPOFF 0x20000000
#define	IDPROMOFF 0x0
#define CONTEXTOFF 0x30000000
#define CONTEXTMASK 0x7
#define FC_MAP 0x3
#define FC_SP 0x6
#define LEDOFF 0x70000000
#define ENABLEOFF 0x40000000
#define BUSERROFF 0x60000000
#define PMREALBITS 0xff07ffff

#define PME_MEM_0 0xc0000000
#define PME_MEM_1 0xc0000001
#define PME_CLOCK 0xc4000030
#define PME_PROM 0xc4000080
#define PME_INVALID 0x20000000
#define PME_DES 0xc40000e0
#define PME_COLOR_STAT 0xc807fb84
#define PME_COLOR_ZOOM 0xc807fb86
#define PME_COLOR_WPAN 0xc807fb85
#define PME_COLOR_PPAN 0xc807fb86
#define PME_COLOR_VZOOM 0xc807fb87
#define PME_COLOR_MAPS 0xc807fb88
#define PME_COLOR_MASK 0xc807fb85

#define INITSP 0xfe60c00
#define USERCODE 0x2000
#define PROMSIZE 0x10000
#define INUARTA 0x1
#define INUARTB 0x2
#define NMIFREQ 0x64

#define g_bestack 0xffffe000
#define sizeofbestack 0x5c
#define g_bestack_fvo 0xffffe006
#define g_beregs 0xffffe05c
#define g_because 0xffffe0a0
#define g_memorysize 0xffffe0a8
#define g_memoryavail 0xffffe0ac
#define g_memorybitmap 0xffffe0b0
#define g_memoryworking 0xffffe0b4
#define g_resetaddr 0xffffe292
#define g_resetaddrcomp 0xffffe296
#define g_resetmap 0xffffe29a
#define g_resetmapcomp 0xffffe29e
#define g_prevkey 0xffffe205
#define g_debounce 0xffffe28c
#define g_init_bounce 0xffffe28d
#define g_loop 0xffffe28e
#define g_nmiclock 0xffffe0a4
#define g_echo 0xffffe28f
#define g_insource 0xffffe28a
#define g_outsink 0xffffe28b
#define g_bootparam 0xffffe166
#define g_translation 0xffffe274
#define g_keybid 0xffffe207
#define g_keybuf 0xffffe208
#define g_font 0xffffe324
#define g_linebuf 0xffffe10c
#define g_lineptr 0xffffe15e
#define g_linesize 0xffffe162
#define gp 0xffffe000
#define g_keyrinit 0xffffe278
#define g_keyrtick 0xffffe280
#define g_busbuf 0xffffe0c4
#define g_diag_state 0xffffe0c8
#define g_leds 0xffffe0a2
#define g_keybzscc 0xffffe200
#define g_inzscc 0xffffe282
#define g_fbthere 0xffffe290
#define g_fbtype 0xffffe376
#define g_ax 0xffffe328
#define g_ay 0xffffe32c
#define g_vector_cmd 0xffffe108

#define GXBase 0xffffe2d4
#define fbaddr 0xffffe2d4

#define EVEC_RESET 0x0
#define EVEC_DOG 0x3
#define EVEC_BOOTING 0x2
#define EVEC_BUSERR 0x8
#define	EVEC_LEVEL7 0x7c
#define EVEC_TRAP1 0x84
#define EVEC_TRAPE 0xb8
#define EVEC_KCMD 0x1
#define EVEC_ABORT 0x7d
#define EVEC_MEMERR 0x7e
#define EVEC_MENU_TSTS 0x5
#define EVEC_BOOT_EXEC 0x4
#define FVO_OFFSET 0xfff
#define sizeofintstack 0x8
#define i_fvo 0x6

#define ZSRR0_BREAK 0x80
#define ZSRR0_RX_READY 0x1
#define ZSRR0_TX_READY 0x4
#define ZSWR0_RESET_STATUS 0x10
#define zscc_control 0x0
#define zscc_data 0x2
#define sizeofzscc 0x4
#define A_CONTROL 0x4
#define A_DATA 0x6
#define B_CONTROL 0x0

#define v_printf 0xfef0084

#define PROMBIT 0x7
#define CXBIT 0x8
#define SEGBIT 0x9
#define PMBIT 0xa
#define MEMBIT 0xb
#define DESFOUND 0xd
#define DESBIT 0xc
#define MCONBIT 0x19
#define MADDRBIT 0x1a
#define MTRANBIT 0x1b
#define LEDQUICK 0xc350
#define LEDLONG 0x3d090

#define DESSELOFF 0x2
#define DESREGOFF 0x0
#define DESR_IO 0x0
#define DESR_CMD_STAT 0x2
#define DESR_MODE 0x6
#define DESC_RESET 0x0
#define DESC_STOP 0xe0
#define DESC_START 0xc0
#define DESC_START_DEC 0x40
#define DESC_START_ENC 0x41
#define DESC_LOAD_E_KEY 0x11
#define DESC_LOAD_D_KEY 0x12
#define DESS_MST_FLAG 0x1
#define DESS_SLAVE_FLAG 0x2
#define DESS_AUX_FLAG 0x4
#define DESS_PAR 0x8
#define DESS_LPAR 0x10
#define DESS_BUSY 0x20
#define DESS_CMD_PEND 0x40
#define DESS_STARTED 0x80
#define DESM_ECB 0x0
#define DESM_CFB 0x1
#define DESM_CBC 0x2
#define DESM_ME_SC 0x0
#define DESM_MC_SE 0x4
#define DESM_M_ONLY 0x8
#define DESM_DECRYPT 0x0
#define DESM_ENCRYPT 0x10

#define mis_d0 0x0
#define mis_a7 0x3c
#define mis_msp 0x40
#define mis_usp 0x44
#define mis_sfc 0x48
#define mis_dfc 0x4c
#define mis_vbase 0x50
#define mis_cacr 0x58
#define mis_caar 0x54
#define mis_context 0x5c
#define mis_sr 0x62
#define mis_pc 0x64
#define mis_vector 0x68
#define mis_size 0x6e

#define	clk_intrreg 0x10

#define	MR_ER 0x0
#define	PER_INTR 0x80
#define	PER_CHECK 0x10

#define	IR_ENA_INT 0x1
#define	IR_ENA_CLK7 0x80

#define	ENA_DIAG 0x1
#define	ENA_COPY 0x4
#define	ENA_VIDEO 0x8
#define	ENA_CACHE 0x10
#define	ENA_SDVMA 0x20
#define	ENA_FPP 0x40
#define	ENA_NOTBOOT 0x80
#define	CACR_CLEAR 0x8
#define	CACR_ENABLE 0x1
#define	CACR_CLEAR_ENT 0x4
