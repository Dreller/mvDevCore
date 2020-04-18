* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
* Name:     DC.INC.H
* Type:     Include file
* Author:   dreller
* Date:     Apr 13, 2020
* Git:      mvDevCore
* System:   openQM 3.4.18
* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
* Include file for DEVCORE programs.
* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
*
* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *

EQU DC$MVSYS        TO "QM"        ;* MV System (QM, UV)
EQU DC$MSTR.ACCT    TO "QMSYS"     ;* Master Account (QMSYS, UV)
EQU DC$ACCT.FILE    TO "ACCOUNTS"  ;* File for ACCOUNTS in master acct
EQU DC$QP.ACC       TO "Q.SYS.ACC" ;* Qptr to system acct, ACCOUNTS.
EQU DC$QP.VOC       TO "Q.SYS.VOC" ;* Qptr to system acct, VOC.

EQU DC$DICT.FILE    TO 1 
EQU DC$DICT.TYPE    TO 2 
EQU DC$DICT.NUMBER  TO 3
EQU DC$DICT.ALIGN   TO 4
EQU DC$DICT.WIDTH   TO 5
EQU DC$DICT.OCONV   TO 6
EQU DC$DICT.NAME    TO 7
EQU DC$DICT.TITLE   TO 8
EQU DC$DICT.DESC    TO 9
EQU DC$DICT.FORMULA TO 10
EQU DC$DICT.MV      TO 11 
EQU DC$DICT.ASSOC   TO 12
