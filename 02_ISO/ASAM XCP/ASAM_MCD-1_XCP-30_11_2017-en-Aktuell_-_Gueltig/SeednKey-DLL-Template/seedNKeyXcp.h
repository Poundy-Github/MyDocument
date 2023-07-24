//*****************************************************************************
/// @file        seedNKeyXcp.h
/// @author      Alex Lunkenheimer (ETAS/PAC-Lr), Ralf Koenig (Vector/vis-krf)
/// @responsible author
/// @brief       DLL-Main for Seed'n Key for XCP
/// @history     2002-09-16,Lr:   - draft
///              2003-02-07,Lr:   - DLL-API using extern "C"
///                               - adapted privileges to XCP-Spec V1.0,Rev22
///              2017-11-03,krf:  - adapted privileges to XCP-Spec V1.5
//*****************************************************************************
#ifndef SEED_N_KEY_XCP_H
#define SEED_N_KEY_XCP_H

//*****************************************************************************
//                               includes
//*****************************************************************************
#include <windows.h>

//*****************************************************************************
//                               typedefs
//*****************************************************************************
typedef DWORD TXcpSkExtFncRet;        // return code

//*****************************************************************************
//                               constants
//*****************************************************************************
// return codes
const TXcpSkExtFncRet XcpSkExtFncAck                      = 0; // o.k.
const TXcpSkExtFncRet XcpSkExtFncErrPrivilegeNotAvailable = 1; // the requested privilege can not be unlocked with this DLL
const TXcpSkExtFncRet XcpSkExtFncErrInvalidSeedLength     = 2; // the seed length is wrong, key could not be computed
const TXcpSkExtFncRet XcpSkExtFncErrUnsufficientKeyLength = 3; // the space for the key is too small
// privileges
const BYTE            XcpSkPrivCalPag                     = 0x01; // Calibration & Page Mngmnt privilege
const BYTE            XcpSkPrivDaq                        = 0x04; // Acquisition privilege
const BYTE            XcpSkPrivStim                       = 0x08; // Stimulation privilege
const BYTE            XcpSkPrivPgm                        = 0x10; // Programming privilege
const BYTE            XcpSkPrivDbg                        = 0x20; // Debugging privilege


//*****************************************************************************
//                               prototypes
//*****************************************************************************
EXTERN_C TXcpSkExtFncRet CALL_CONV XCP_GetAvailablePrivileges(BYTE *privilege);
EXTERN_C TXcpSkExtFncRet CALL_CONV XCP_ComputeKeyFromSeed(BYTE privilege, 
                                                       BYTE byteLenSeed, BYTE *seed,
                                                       BYTE *byteLenKey, BYTE *key);

#endif
