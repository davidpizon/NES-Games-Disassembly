; keep your global constant values inside this file

; some comments were taken from Solstice room data documentation
; https://www.romhacking.net/documents/783/



; MISC
con_prg_bank                            = $00 ; 
con_tile_id                             = $00 ; 
con_room_id                             = $00 ; 



; ram_buttons
; ram_copy_buttons
con_btn_Right                           = $01 ; 
con_btn_Left                            = $02 ; 
con_btn_Down                            = $04 ; 
con_btn_Up                              = $08 ; 
con_btn_Start                           = $10 ; 
con_btn_Select                          = $20 ; 
con_btn_B                               = $40 ; 
con_btn_A                               = $80 ; 

con_btns_UD                             = con_btn_Up + con_btn_Down                                 ; 0C
con_btns_LR                             = con_btn_Left + con_btn_Right                              ; 03
con_btns_Dpad                           = con_btn_Right + con_btn_Left + con_btn_Down + con_btn_Up  ; 0F
con_btns_SSAB                           = con_btn_Start + con_btn_Select + con_btn_A + con_btn_B    ; F0



; bankswitch pointers
; need comments at 0x007F8B
con_bsw_00                              = $00 * $03 ; 00 
con_bsw_01                              = $01 * $03 ; 03 
con_bsw_02                              = $02 * $03 ; 06 
con_bsw_03                              = $03 * $03 ; 09 
con_bsw_04                              = $04 * $03 ; 0C 
con_bsw_05                              = $05 * $03 ; 0F 
con_bsw_06                              = $06 * $03 ; 12 
con_bsw_07                              = $07 * $03 ; 15 
con_bsw_08                              = $08 * $03 ; 18 
con_bsw_09                              = $09 * $03 ; 1B 
con_bsw_0A                              = $0A * $03 ; 1E 
con_bsw_prepare_static_screen           = $0B * $03 ; 21 
con_bsw_set_room_visited_flag           = $0C * $03 ; 24 
con_bsw_clear_room_visited_flag         = $0D * $03 ; 27 
con_bsw_check_if_room_was_visited       = $0E * $03 ; 2A 
con_bsw_draw_scroll_content_1           = $0F * $03 ; 2D 
con_bsw_draw_scroll_content_2           = $10 * $03 ; 30 
con_bsw_11                              = $11 * $03 ; 33 
con_bsw_set_bonus_picked_flag           = $12 * $03 ; 36 
con_bsw_clear_bonus_picked_flag         = $13 * $03 ; 39 
con_bsw_check_if_bonus_was_picked       = $14 * $03 ; 3C 
con_bsw_15                              = $15 * $03 ; 3F 
con_bsw_16                              = $16 * $03 ; 42 
con_bsw_17                              = $17 * $03 ; 45 
con_bsw_18                              = $18 * $03 ; 48 
con_bsw_19                              = $19 * $03 ; 4B 
con_bsw_1A                              = $1A * $03 ; 4E 
con_bsw_1B                              = $1B * $03 ; 51 
con_bsw_1C                              = $1C * $03 ; 54 
con_bsw_1D                              = $1D * $03 ; 57 
con_bsw_display_value                   = $1E * $03 ; 5A 
con_bsw_1F                              = $1F * $03 ; 5D 
con_bsw_draw_static_screen              = $20 * $03 ; 60 
con_bsw_21                              = $21 * $03 ; 63 
con_bsw_22                              = $22 * $03 ; 66 
con_bsw_23                              = $23 * $03 ; 69 
con_bsw_24                              = $24 * $03 ; 6C 
con_bsw_enter_cheat                     = $25 * $03 ; 6F 
con_bsw_26                              = $26 * $03 ; 72 



; ram_sfx_1
; ram_sfx_2
; sound effects, need comments at 0x015753
con_sfx_teleport                        = $00 ; Enter teleporter
; con_sfx_01                            = $01 ; unused, some sort of hit/contact/tap
con_sfx_drink_potion                    = $02 ; Potion use
con_sfx_pickup_item                     = $03 ; pick up block
con_sfx_drop_item                       = $04 ; drop block
con_sfx_death                           = $05 ; death
; con_sfx_06                            = $06 ; unused, some sort of click
con_sfx_paper                           = $07 ; scrolling paper during pause menu
con_sfx_pickup_bonus_item               = $08 ; boots, keys, Credits
con_sfx_detonate                        = $09 ; activate Detonator



; need comments at 0x0141F9
con_music_story                         = $00 ; story sequence music
con_music_gameplay                      = $01 ; gameplay music
con_music_game_over                     = $02 ; game over screen
con_music_continue                      = $03 ; continue screen
con_music_final                         = $04 ; final cut-scene & credits
con_music_logo                          = $05 ; CSG imagesoft inc presents
con_music_title                         = $06 ; title screen



; ram_obj_id
; need comments at 0x001EB3
; con_obj_id_00                         = $00 ; 
con_obj_id_01                           = $01 ; Troll that changes direction clock-wise when it reaches wall
con_obj_id_02                           = $02 ; same as above but counter-clock wise
con_obj_id_03                           = $03 ; Troll that chooses direction at random(only used in room 18)
con_obj_id_04                           = $04 ; Troll that moves around randomly
con_obj_id_05                           = $05 ; Slime Ball that moves around randomly
con_obj_id_06                           = $06 ; Moving thin platform 
con_obj_id_07                           = $07 ; Floating block with Z-gravity
con_obj_id_08                           = $08 ; Block that moves to celling and then to floor
; con_obj_id_09                         = $09 ; (unused) X/Y moving thing platform with Z-gravity
con_obj_id_0A                           = $0A ; Ghost that moves randomly
con_obj_id_0B                           = $0B ; Skeleton that moves randomly
con_obj_id_0C                           = $0C ; Ghost that moves back and forth 
; con_obj_id_0D                         = $0D ; (unused) Skeleton that moves back and forth
con_obj_id_0E                           = $0E ; Troll that moves back and forth 
con_obj_id_0F                           = $0F ; Ghost that chases player
con_obj_id_10                           = $10 ; Skeleton that chases player
con_obj_id_11                           = $11 ; Troll that chases player
con_obj_id_12                           = $12 ; Slime Ball that chases player
con_obj_id_13                           = $13 ; Normal Crystal ball
con_obj_id_14                           = $14 ; spike ball that moves from celling to floor (~3 blocks)
con_obj_id_15                           = $15 ; spike ball but starts one block higher
con_obj_id_16                           = $16 ; same as 08 but doesnt go all the way to the celling (1 blocks less)
con_obj_id_17                           = $17 ; spike ball but starts one block higher
con_obj_id_18                           = $18 ; Another spike ball
con_obj_id_19                           = $19 ; ...Another spike ball
con_obj_id_1A                           = $1A ; moving thin platform (z-gravity)
con_obj_id_1B                           = $1B ; One-off crystall ball with slight Z-gravity
con_obj_id_1C                           = $1C ; Troll that moves counter-clock wise and climbs up walls (used in room 8A only)
con_obj_id_1D                           = $1D ; Ghost that moves counter-clock wise and climbs up walls, (used in room AC only)
con_obj_id_1E                           = $1E ; Skeleton that moves counter-clock wise and climbs up walls, (used in room AC only)
con_obj_id_1F                           = $1F ; same as 1C but just moves forward (odd)
con_obj_id_20                           = $20 ; Same as 1D
con_obj_id_21                           = $21 ; same as 1E
con_obj_id_22                           = $22 ; same as 1E
con_obj_id_23                           = $23 ; Same as 1D
con_obj_id_24                           = $24 ; same as 08 but doesnt go all the way to the celling (2 blocks less)
con_obj_id_25                           = $25 ; Blasting bomb (two red balls that spin in-place)
; con_obj_id_26                         = $26 ; (unused) Lanky three legged spider, moves randomly
; con_obj_id_27                         = $27 ; (unused) Lanky three legged spider thtat moves back and forth
con_obj_id_28                           = $28 ; Lanky three legged spider that chases player
con_obj_id_detonator_00                 = $29 ; Detonator #1            (Room E4)
con_obj_id_trig_det_00                  = $2A ; Triggered detonator #1  (Room E4)
con_obj_id_detonator_01                 = $2B ; Detonator #2            (Room 46)
con_obj_id_trig_det_01                  = $2C ; Triggered detonator #2  (Room 46)
con_obj_id_detonator_02                 = $2D ; Detonator #3            (Room FA)
con_obj_id_trig_det_02                  = $2E ; Triggered detonator #3  (Room FA)
con_obj_id_2F                           = $2F ; Worm, moves randomly
con_obj_id_30                           = $30 ; Worm, moves back and forth 
con_obj_id_31                           = $31 ; Worm, chases player
; con_obj_id_32                         = $32 ; (unused) Tusk Demon, moves radomly
con_obj_id_33                           = $33 ; Tusk Demon, moves back and forth  
con_obj_id_34                           = $34 ; Tusk Demon, chases player
; con_obj_id_35                         = $35 ; (unused) Leg monster, moves randomly
; con_obj_id_36                         = $36 ; (unused) Leg monster, moves back and forth
con_obj_id_37                           = $37 ; Leg monster, chases player (only used in room 56)
con_obj_id_38                           = $38 ; same as 1C
con_obj_id_39                           = $39 ; same as 1C
con_obj_id_3A                           = $3A ; same as 1C
con_obj_id_3B                           = $3B ; Same as 1D
con_obj_id_3C                           = $3C ; Same as 1D
con_obj_id_3D                           = $3D ; Same as 1D
con_obj_id_3E                           = $3E ; same as 1E
con_obj_id_3F                           = $3F ; same as 1E
con_obj_id_40                           = $40 ; Lanky three legged spider that moves counter-clock wise and climbs up walls(used in room DD only)
con_obj_id_41                           = $41 ; Same as 1D
; con_obj_id_42                         = $42 ; 
; con_obj_id_43                         = $43 ; 
; con_obj_id_44                         = $44 ; 
; con_obj_id_45                         = $45 ; 
; con_obj_id_46                         = $46 ; 
; con_obj_id_47                         = $47 ; 
; con_obj_id_48                         = $48 ; 
; con_obj_id_49                         = $49 ; 
; con_obj_id_4A                         = $4A ; 
; con_obj_id_4B                         = $4B ; 
; con_obj_id_4C                         = $4C ; 
; con_obj_id_4D                         = $4D ; 
; con_obj_id_4E                         = $4E ; 
; con_obj_id_4F                         = $4F ; 
; con_obj_id_50                         = $50 ; 
; con_obj_id_51                         = $51 ; 
; con_obj_id_52                         = $52 ; 
; con_obj_id_53                         = $53 ; 
; con_obj_id_54                         = $54 ; 
; con_obj_id_55                         = $55 ; 
; con_obj_id_56                         = $56 ; 
; con_obj_id_57                         = $57 ; 
; con_obj_id_58                         = $58 ; 
; con_obj_id_59                         = $59 ; 
; con_obj_id_5A                         = $5A ; 
; con_obj_id_5B                         = $5B ; 
; con_obj_id_5C                         = $5C ; 
; con_obj_id_5D                         = $5D ; 
; con_obj_id_5E                         = $5E ; 
; con_obj_id_5F                         = $5F ; 
; con_obj_id_60                         = $60 ; 
; con_obj_id_61                         = $61 ; 
; con_obj_id_62                         = $62 ; 
; con_obj_id_63                         = $63 ; 
; con_obj_id_64                         = $64 ; 
; con_obj_id_65                         = $65 ; 
; con_obj_id_66                         = $66 ; 
; con_obj_id_67                         = $67 ; 
; con_obj_id_68                         = $68 ; 
; con_obj_id_69                         = $69 ; 
; con_obj_id_6A                         = $6A ; 
; con_obj_id_6B                         = $6B ; 
; con_obj_id_6C                         = $6C ; 
; con_obj_id_6D                         = $6D ; 
; con_obj_id_6E                         = $6E ; 
; con_obj_id_6F                         = $6F ; 
; con_obj_id_70                         = $70 ; 
; con_obj_id_71                         = $71 ; 
; con_obj_id_72                         = $72 ; 
; con_obj_id_73                         = $73 ; 
; con_obj_id_74                         = $74 ; 
; con_obj_id_75                         = $75 ; 
; con_obj_id_76                         = $76 ; 
; con_obj_id_77                         = $77 ; 
; con_obj_id_78                         = $78 ; 
; con_obj_id_79                         = $79 ; 
; con_obj_id_7A                         = $7A ; 
; con_obj_id_7B                         = $7B ; 
; con_obj_id_7C                         = $7C ; 
; con_obj_id_7D                         = $7D ; 
; con_obj_id_7E                         = $7E ; 
; con_obj_id_7F                         = $7F ; 
con_obj_id_pickable_block_00            = $80 ; Pick-able square block 1
con_obj_id_pickable_block_01            = $81 ; Pick-able square block 2
con_obj_id_pickable_block_02            = $82 ; Pick-able rounded block 1
con_obj_id_pickable_block_03            = $83 ; Pick-able square block 3 (hollow)
con_obj_id_pickable_block_04            = $84 ; Pick-able rounded block 2 (circle)
; con_obj_id_85                         = $85 ; 
; con_obj_id_86                         = $86 ; 
; con_obj_id_87                         = $87 ; 
; con_obj_id_88                         = $88 ; 
; con_obj_id_89                         = $89 ; 
; con_obj_id_8A                         = $8A ; 
; con_obj_id_8B                         = $8B ; 
; con_obj_id_8C                         = $8C ; 
; con_obj_id_8D                         = $8D ; 
; con_obj_id_8E                         = $8E ; 
; con_obj_id_8F                         = $8F ; 
; con_obj_id_90                         = $90 ; 
; con_obj_id_91                         = $91 ; 
; con_obj_id_92                         = $92 ; 
; con_obj_id_93                         = $93 ; 
; con_obj_id_94                         = $94 ; 
; con_obj_id_95                         = $95 ; 
; con_obj_id_96                         = $96 ; 
; con_obj_id_97                         = $97 ; 
; con_obj_id_98                         = $98 ; 
; con_obj_id_99                         = $99 ; 
; con_obj_id_9A                         = $9A ; 
; con_obj_id_9B                         = $9B ; 
; con_obj_id_9C                         = $9C ; 
; con_obj_id_9D                         = $9D ; 
; con_obj_id_9E                         = $9E ; 
; con_obj_id_9F                         = $9F ; 
; con_obj_id_A0                         = $A0 ; 
; con_obj_id_A1                         = $A1 ; 
; con_obj_id_A2                         = $A2 ; 
; con_obj_id_A3                         = $A3 ; 
; con_obj_id_A4                         = $A4 ; 
; con_obj_id_A5                         = $A5 ; 
; con_obj_id_A6                         = $A6 ; 
; con_obj_id_A7                         = $A7 ; 
; con_obj_id_A8                         = $A8 ; 
; con_obj_id_A9                         = $A9 ; 
; con_obj_id_AA                         = $AA ; 
; con_obj_id_AB                         = $AB ; 
; con_obj_id_AC                         = $AC ; 
; con_obj_id_AD                         = $AD ; 
; con_obj_id_AE                         = $AE ; 
; con_obj_id_AF                         = $AF ; 
; con_obj_id_B0                         = $B0 ; 
; con_obj_id_B1                         = $B1 ; 
; con_obj_id_B2                         = $B2 ; 
; con_obj_id_B3                         = $B3 ; 
; con_obj_id_B4                         = $B4 ; 
; con_obj_id_B5                         = $B5 ; 
; con_obj_id_B6                         = $B6 ; 
; con_obj_id_B7                         = $B7 ; 
; con_obj_id_B8                         = $B8 ; 
; con_obj_id_B9                         = $B9 ; 
; con_obj_id_BA                         = $BA ; 
; con_obj_id_BB                         = $BB ; 
; con_obj_id_BC                         = $BC ; 
; con_obj_id_BD                         = $BD ; 
; con_obj_id_BE                         = $BE ; 
; con_obj_id_BF                         = $BF ; 
con_obj_id_hat_00                       = $C0 ; Hat 1
con_obj_id_hat_01                       = $C1 ; Hat 2
con_obj_id_hat_02                       = $C2 ; Hat 3
con_obj_id_hat_03                       = $C3 ; Hat 4
con_obj_id_hat_04                       = $C4 ; Hat 5
con_obj_id_hat_05                       = $C5 ; Hat 6
con_obj_id_hat_06                       = $C6 ; Hat 7
con_obj_id_hat_07                       = $C7 ; Hat 8
con_obj_id_hat_08                       = $C8 ; Hat 9
con_obj_id_hat_09                       = $C9 ; Hat 10
con_obj_id_hat_0A                       = $CA ; Hat 11
con_obj_id_hat_0B                       = $CB ; Hat 12
con_obj_id_hat_0C                       = $CC ; Hat 13
con_obj_id_hat_0D                       = $CD ; Hat 14
; con_obj_id_CE                         = $CE ; unused hat
; con_obj_id_CF                         = $CF ; unused hat
con_obj_id_magic_boots                  = $D0 ; Magic boots 
con_obj_id_key_top_left                 = $D1 ; Key (top left)      Room 0F
con_obj_id_key_top_right                = $D2 ; Key (top right)     Room C7
con_obj_id_key_bottom_left              = $D3 ; Key (bottom left)   Room E2
con_obj_id_key_bottom_right             = $D4 ; Key (bottom right)  Room 77
con_obj_id_staff_piece_00               = $D5 ; Staff piece 1
con_obj_id_staff_piece_01               = $D6 ; Staff piece 2
con_obj_id_staff_piece_02               = $D7 ; Staff piece 3
con_obj_id_staff_piece_03               = $D8 ; Staff piece 4
con_obj_id_staff_piece_04               = $D9 ; Staff piece 5
con_obj_id_staff_piece_05               = $DA ; Staff piece 6
con_obj_id_potion_yellow_00             = $DB ; Yellow potion
con_obj_id_potion_blue_00               = $DC ; Blue potion
con_obj_id_potion_green_00              = $DD ; Green potion
con_obj_id_potion_blue_01               = $DE ; Blue potion
con_obj_id_potion_blue_02               = $DF ; Blue potion
con_obj_id_potion_purple_00             = $E0 ; Purple potion
con_obj_id_potion_blue_03               = $E1 ; Blue potion
con_obj_id_potion_yellow_01             = $E2 ; Yellow potion
con_obj_id_potion_blue_04               = $E3 ; Blue potion
con_obj_id_potion_yellow_02             = $E4 ; Yellow potion
con_obj_id_potion_purple_01             = $E5 ; Purple potion
con_obj_id_potion_yellow_03             = $E6 ; Yellow potion
con_obj_id_potion_green_01              = $E7 ; Green potion
con_obj_id_potion_yellow_04             = $E8 ; Yellow potion
con_obj_id_potion_purple_02             = $E9 ; Purple potion
con_obj_id_potion_yellow_05             = $EA ; Yellow potion
con_obj_id_credit_00                    = $EB ; Credit (takes you to room 0D)
con_obj_id_credit_01                    = $EC ; Credit (takes you to room 42)
con_obj_id_credit_02                    = $ED ; Credit (takes you to room 25)
con_obj_id_credit_03                    = $EE ; Credit (takes you to room C9)
con_obj_id_credit_04                    = $EF ; Credit (takes you to room A8)
con_obj_id_credit_05                    = $F0 ; Credit (takes you to room 6D)
con_obj_id_credit_06                    = $F1 ; Credit (takes you to room 57)
con_obj_id_credit_07                    = $F2 ; Credit (takes you to room F0)
; con_obj_id_F3                         = $F3 ; 
; con_obj_id_F4                         = $F4 ; 
; con_obj_id_F5                         = $F5 ; 
; con_obj_id_F6                         = $F6 ; 
; con_obj_id_F7                         = $F7 ; 
; con_obj_id_F8                         = $F8 ; 
; con_obj_id_F9                         = $F9 ; 
; con_obj_id_FA                         = $FA ; 
; con_obj_id_FB                         = $FB ; 
; con_obj_id_FC                         = $FC ; 
; con_obj_id_FD                         = $FD ; 
; con_obj_id_FE                         = $FE ; 
; con_obj_id_FF                         = $FF ; 



; sound engine control bytes
; 0x014323 0x014585 0x0147C9 0x014A0D 0x014B90 0x014D1A
con_se_cb_80                            = $80 ; 
con_se_cb_81                            = $81 ; 
con_se_cb_82                            = $82 ; 
con_se_cb_stop                          = $83 ; 
con_se_cb_jsr                           = $84 ; 
con_se_cb_rts                           = $85 ; 
con_se_cb_86                            = $86 ; 
con_se_cb_87                            = $87 ; 
con_se_cb_jmp                           = $88 ; 
con_se_cb_89                            = $89 ; 
con_se_cb_8A                            = $8A ; 
con_se_cb_8B                            = $8B ; 
con_se_cb_8C                            = $8C ; 
con_se_cb_8D                            = $8D ; 
con_se_cb_8E                            = $8E ; 
con_se_cb_8F                            = $8F ; 
con_se_cb_90                            = $90 ; 
; con_se_cb_91                          = $91 ; unused
con_se_cb_loop                          = $92 ; 
con_se_cb_93                            = $93 ; 
con_se_cb_94                            = $94 ; 



