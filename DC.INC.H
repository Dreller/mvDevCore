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