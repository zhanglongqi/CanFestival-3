/*
This file is part of CanFestival, a library implementing CanOpen Stack. 

Copyright (C): Edouard TISSERANT and Francis DUPIN

See COPYING file for copyrights details.

This library is free software; you can redistribute it and/or
modify it under the terms of the GNU Lesser General Public
License as published by the Free Software Foundation; either
version 2.1 of the License, or (at your option) any later version.

This library is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
Lesser General Public License for more details.

You should have received a copy of the GNU Lesser General Public
License along with this library; if not, write to the Free Software
Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#include "SlaveA.h"
#include "Master.h"
#include "TestMasterSlaveLSS.h"

/*****************************************************************************/
void TestSlaveA_heartbeatError(CO_Data* d, UNS8 heartbeatID) {
    eprintf("TestSlaveA_heartbeatError %d\n", heartbeatID);
}

void TestSlaveA_initialisation(CO_Data* d) {
    eprintf("TestSlaveA_initialisation\n");
}

void TestSlaveA_preOperational(CO_Data* d) {
    eprintf("TestSlaveA_preOperational\n");
}

void TestSlaveA_operational(CO_Data* d) {
    eprintf("TestSlaveA_operational\n");
}

void TestSlaveA_stopped(CO_Data* d) {
    eprintf("TestSlaveA_stopped\n");
}

void TestSlaveA_post_sync(CO_Data* d) {
    eprintf("TestSlaveA_post_sync\n");
}

void TestSlaveA_post_TPDO(CO_Data* d) {
    eprintf("TestSlaveA_post_TPDO\n");
    SlaveAMap1++;
    SlaveAMap2 += 2;
}

void TestSlaveA_storeODSubIndex(CO_Data* d, UNS16 wIndex, UNS8 bSubindex) {
    /*TODO : 
     * - call getODEntry for index and subindex, 
     * - save content to file, database, flash, nvram, ...
     * 
     * To ease flash organisation, index of variable to store
     * can be established by scanning d->objdict[d->ObjdictSize]
     * for variables to store.
     * 
     * */
    eprintf("TestSlaveA_storeODSubIndex : %4.4x %2.2x\n", wIndex, bSubindex);
}

void TestSlaveA_post_emcy(CO_Data* d, UNS8 nodeID, UNS16 errCode, UNS8 errReg) {
    eprintf("SlaveA received EMCY message. Node: %2.2x  ErrorCode: %4.4x  ErrorRegister: %2.2x\n", nodeID, errCode, errReg);
}

void TestSlaveA_NMT_Slave_Communications_Reset_Callback(CO_Data* d) {
    eprintf("TestSlaveA_NMT_Slave_Communications_Reset_Callback\n");
}

void TestSlaveA_StoreConfiguration(CO_Data* d, UNS8 *error, UNS8 *spec_error) {
    eprintf("TestSlaveA_StoreConfiguration\n");
}

