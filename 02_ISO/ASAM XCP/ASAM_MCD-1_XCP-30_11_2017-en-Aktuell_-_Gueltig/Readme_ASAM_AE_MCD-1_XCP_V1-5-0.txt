/************************************************************** 
*** ASAM AE_MCD1_XCP                                        *** 
*** Version :  1.5.0                                        ***
*** Date:      2017/11/30                                   *** 
***************************************************************/

XCP 1.5. consists of one Base standard and Associated Standards 
for each physical bus resp. network type and the description to 
build a Seed&Key DLL. Also the Software Debugging over XCP is
contained

Directory Specification: 
    Directory Base Standard:
    - ASAM_AE_MCD-1-XCP_BS_Protocol-Layer-Specification_V1-5-0
    
    Directory AS Transport Layer:
    - ASAM_AE_MCD-1-XCP_AS_CAN-Transport-Layer_V1-5-0
    - ASAM_AE_MCD-1-XCP_AS_Ethernet-Transport-Layer_V1-5-0
    - ASAM_AE_MCD-1-XCP_AS_Flexray-Transport-Layer_V1-5-0
    - ASAM_AE_MCD-1-XCP_AS_SxI-Transport-Layer_V1-5-0
    - ASAM_AE_MCD-1-XCP_AS_USB-Transport-Layer_V1-5-0
    
    AS SoftwareDebuggingOverXCP:
    - ASAM_AE_MCD-1-XCP_SW-DBG-over-XCP_AS_V1-0-0
    
    - XCP Compatibility Matrix V1-5-0

Directory AML_Sources:
    - XCPplus_v1_5.aml
    - XCP_v1_5_common.aml
    - XCP_v1_5_definitions.aml
    - XCP_v1_5_on_CAN.aml
    - XCP_v1_5_on_FLX.aml
    - XCP_v1_5_on_SxI.aml
    - XCP_v1_5_on_TCP_IP.aml
    - XCP_v1_5_on_UDP_IP.aml
    - XCP_v1_5_on_USB.aml
    
  Directory XCP_1.5_AML_example:
    - XCP_v1_5_example.a2l
    - XCP_v1_5_IF_DATA_example.a2l
    - XCPplus_v1_5_IF_DATA_example.aml

Directory SeednKey-DLL-Template: 
    - ASAM_AE_MCD-1-XCP_AS_How-to-make-a-Seed-&-Key-DLL-for-XCP_V1-5-0
    - seedNKeyXcpMain.cpp
    - Callconv.h
    - SeedNKeyXcp.dsp
    - seedNKeyXcp.h
    
Directory Revision History:
    - ASAM_AE_MCD-1_XCP_Revision_History_V1-5-0
