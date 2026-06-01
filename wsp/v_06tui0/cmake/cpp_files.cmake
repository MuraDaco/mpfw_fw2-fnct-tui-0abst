#   *******************************************************************************
#   
#   mpfw / fw2 - Multi Platform FirmWare FrameWork 
#       library that contains the "main" entry point and, 
#       eventualy, application code that is platform dependent
#   Copyright (C) (2023) Marco Dau
#   
#   This program is free software: you can redistribute it and/or modify
#   it under the terms of the GNU Affero General Public License as published
#   by the Free Software Foundation, either version 3 of the License, or
#   (at your option) any later version.
#   
#   This program is distributed in the hope that it will be useful,
#   but WITHOUT ANY WARRANTY; without even the implied warranty of
#   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
#   GNU Affero General Public License for more details.
#   
#   You should have received a copy of the GNU Affero General Public License
#   along with this program.  If not, see <https://www.gnu.org/licenses/>.
#   
#   You can contact me by the following email address
#   marco <d o t> ing <d o t> dau <a t> gmail <d o t> com
#   
#   *******************************************************************************

include_guard()


    set(CURR_MOD_NAME       FNCT-TUI-0ABST)

    set(${CURR_MOD_NAME}_cmmn_SOURCE_FILES_CPP

        ${${CURR_MOD_NAME}_SRC_DIR}/dty/intfc/cntnr/dtyCntnr1ArrayTuiList.cpp
        ${${CURR_MOD_NAME}_SRC_DIR}/dty/intfc/cntnr/dtyCntnr1ArrayTuiMap.cpp
        ${${CURR_MOD_NAME}_SRC_DIR}/dty/intfc/cntnr/dtyCntnr1StreamList/v_${FNCT-TUI-0ABST_dtyCntnr1StreamList_VER}/dtyCntnr1StreamList.cpp
        ${${CURR_MOD_NAME}_SRC_DIR}/dty/intfc/cntnr/dtyCntnr1StreamListX.cpp
        ${${CURR_MOD_NAME}_SRC_DIR}/dty/intfc/cntnr/dtyCntnr1StreamUnitStringV1.cpp

        ${${CURR_MOD_NAME}_SRC_DIR}/fnct/tuiFnctAbstUnit0.cpp
        ${${CURR_MOD_NAME}_SRC_DIR}/fnct/tuiFnctAbstUnit1Cntnr.cpp
        ${${CURR_MOD_NAME}_SRC_DIR}/fnct/tuiFnctAbstUnit1Map.cpp
        ${${CURR_MOD_NAME}_SRC_DIR}/fnct/tuiFnctRealUnit1Button.cpp
        ${${CURR_MOD_NAME}_SRC_DIR}/fnct/tuiFnctRealUnit1Debug.cpp
        ${${CURR_MOD_NAME}_SRC_DIR}/fnct/tuiFnctRealUnit1Ebox.cpp
        ${${CURR_MOD_NAME}_SRC_DIR}/fnct/tuiFnctRealUnit1FormattedString.cpp
        ${${CURR_MOD_NAME}_SRC_DIR}/fnct/tuiFnctRealUnit1FormattedStringCntnr.cpp
        ${${CURR_MOD_NAME}_SRC_DIR}/fnct/tuiFnctRealUnit1Map.cpp
        ${${CURR_MOD_NAME}_SRC_DIR}/fnct/tuiFnctRealUnit1MmyInt.cpp
        ${${CURR_MOD_NAME}_SRC_DIR}/fnct/tuiFnctRealUnit2Cntnr.cpp

        ${${CURR_MOD_NAME}_SRC_DIR}/grph/tuiGrphAbstUnit0.cpp
        ${${CURR_MOD_NAME}_SRC_DIR}/grph/tuiGrphAbstUnit1State.cpp
        ${${CURR_MOD_NAME}_SRC_DIR}/grph/tuiGrphAbstUnit2Coord.cpp
        ${${CURR_MOD_NAME}_SRC_DIR}/grph/tuiGrphAbstUnit3Event.cpp

    )

