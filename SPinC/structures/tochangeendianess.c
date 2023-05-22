#include<stdio.h>
#include<inttypes.h>

typedef union
{
 	uint32_t u32Rawdata;
 	uint8_t u8DataBuff[4];
 } RawData;
 
 uint32_t ChangeEndianess(uint32_t u32Value)
 {
 	RawData uChangeData, uOriginalData;
 	uOriginalData.u32Rawdata = u32Value;
 	
 	// change the value
 	
 	uChangeData.u8DataBuff[0] = uOriginalData.u8DataBuff[3];
 	uChangeData.u8DataBuff[1] = uOriginalData.u8DataBuff[2];
 	uChangeData.u8DataBuff[2] = uOriginalData.u8DataBuff[1];
 	uChangeData.u8DataBuff[3] = uOriginalData.u8DataBuff[0];
 	return (uChangeData.u32Rawdata);
 }
 
 int main()
 {
 	uint32_t u32CheckData = 0x11223344;
 	uint32_t u32ResultData = 0;
 	u32ResultData = ChangeEndianess(u32CheckData);
 	printf("Original Byte Order = 0x%x\r\n", u32CheckData);
 	printf("Converted Byte Order = 0x%x\r\n", u32ResultData);
 	return 0;
 }
