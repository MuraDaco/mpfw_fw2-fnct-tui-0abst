//  *******************************************************************************
//  
//  mpfw / fw2 - Multi Platform FirmWare FrameWork
//  Copyright (C) (2023) Marco Dau
//  
//  This program is free software: you can redistribute it and/or modify
//  it under the terms of the GNU Affero General Public License as published
//  by the Free Software Foundation, either version 3 of the License, or
//  (at your option) any later version.
//  
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU Affero General Public License for more details.
//  
//  You should have received a copy of the GNU Affero General Public License
//  along with this program.  If not, see <https://www.gnu.org/licenses/>.
//  
//  You can contact me by the following email address
//  marco <d o t> ing <d o t> dau <a t> gmail <d o t> com
//  
//  *******************************************************************************

/*
 * tuiFnctAbstUnit1Cntr.cpp
 *
 *  Created on: Jan, 31st 2025 (Fri)
 *      Author: Marco Dau
 */
 

#include "tuiFnctAbstUnit1Cntr.h"

#define RECURSIVELY         true
#define NOT_RECURSIVELY     false

#include <iostream>
#include <stdexcept>


tuiFnctAbstUnit1Cntr_t::tuiFnctAbstUnit1Cntr_t      (const char* p_strName, dtyCntnr0BaseUnit_t* p_pCntnr     )   :
    tuiFnctAbstUnit0_t           (p_strName)
    ,g_pCntnr                   {p_pCntnr}
{}

bool tuiFnctAbstUnit1Cntr_t::init   	            ([[maybe_unused]] dtyIntfcAbstractUnitGraphic_t* p_this)  {
    initChildren(p_this);
    return true;
}

bool tuiFnctAbstUnit1Cntr_t::initChildren       (dtyIntfcAbstractUnitGraphic_t* p_this) 	{
    g_pCntnr->initDisplayBox(p_this);

    return true;
}

// --------------------- Container section - START

void tuiFnctAbstUnit1Cntr_t::updCoordNboundsChilds      (void)  {
    g_pCntnr->updCoordNboundsChilds();
}

// --------------------- Container section - END

void tuiFnctAbstUnit1Cntr_t::displayChildren     ([[maybe_unused]] dtyIntfcAbstractUnitGraphic_t* p_this, bool p_recursively)    {
    g_pCntnr->displayChilds(p_recursively);
}

void tuiFnctAbstUnit1Cntr_t::refreshChildren     ([[maybe_unused]] dtyIntfcAbstractUnitGraphic_t* p_this)    {
    g_pCntnr->displayChilds(NOT_RECURSIVELY);
}


bool tuiFnctAbstUnit1Cntr_t::selectByMouse     (dtyIntfcAbstractUnitGraphic_t* p_this)    {

    if(!g_pCntnr->selectElementsByMouse())
        p_this->deselectBackNeventOn();

    return true;
}

bool tuiFnctAbstUnit1Cntr_t::clickingChild               ([[maybe_unused]] dtyIntfcAbstractUnitGraphic_t* p_this)    {

    return g_pCntnr->selectElementsByMouse();
}

void tuiFnctAbstUnit1Cntr_t::vEventHndlKey_up            ([[maybe_unused]] dtyIntfcAbstractUnitGraphic_t* p_this)    {
    g_pCntnr->selectSubBoxUp();
    g_pCntnr->displayChilds(RECURSIVELY);
}

void tuiFnctAbstUnit1Cntr_t::vEventHndlKey_down	        ([[maybe_unused]] dtyIntfcAbstractUnitGraphic_t* p_this)  {
    g_pCntnr->selectSubBoxDown();
    g_pCntnr->displayChilds(RECURSIVELY);
}

void tuiFnctAbstUnit1Cntr_t::vEventHndlKey_enter	        ([[maybe_unused]] dtyIntfcAbstractUnitGraphic_t* p_this)  {
    dtyIntfcAbstractUnitGraphic_t* l_element = static_cast<dtyIntfcAbstractUnitGraphic_t*>(g_pCntnr->getSelect());
    int rc = strcmp("-", g_strName);
    if(l_element)   {
    if(rc == 0)    {

                            // try { 
                            //     throw 10; 
                            // } catch (int i) {
                            //     std::cout << " the integer exception was caught, with value: " << g_strName << " " << i << '\n';
                            //     std::exit(i);
                            // }
    }
        if(l_element->isSelected())  {
           l_element->deselectBackNeventOn();
        }
    }

}

void tuiFnctAbstUnit1Cntr_t::vEventHndlMouse_rollUp      ([[maybe_unused]] dtyIntfcAbstractUnitGraphic_t* p_this)    {
    g_pCntnr->displayBoxRollUp();
    g_pCntnr->displayChilds(RECURSIVELY);

}

void tuiFnctAbstUnit1Cntr_t::vEventHndlMouse_rollDown	([[maybe_unused]] dtyIntfcAbstractUnitGraphic_t* p_this)  {
    g_pCntnr->displayBoxRollDown();
    g_pCntnr->displayChilds(RECURSIVELY);

}



