//===========================================
//  Generated file - do not modify
//===========================================

#include "API/Skeleton/Lidar1d/DL100/DL100_V001_004_000/include/DL100_CoLa_Extension.h"


namespace ssbl
{
namespace DL100_V001_004_000_Skeleton
{
	void DL100_CoLaBSerializer::Serialize(uint8_t* pDest, storeParameterPage_t& rSrc, uint32_t* pOffset)
	{

		CoLaBSerializer::Serialize(pDest, rSrc.success , pOffset);
	}

	void DL100_CoLaBSerializer::Serialize(uint8_t* pDest, FlexString506& rSrc, uint32_t* pOffset)
	{
		SerializeFlexString(pDest, rSrc.Text, rSrc.uiLength,506, pOffset);
	}

	void DL100_CoLaBSerializer::Serialize(uint8_t* pDest, getDebugData_t& rSrc, uint32_t* pOffset)
	{

		CoLaBSerializer::Serialize(pDest, rSrc.frameCnt , pOffset);
		Serialize(pDest, rSrc.buffer , pOffset);
	}


} // namespace DL100_V001_004_000_Skeleton
} // namespace ssbl


namespace ssbl
{
namespace DL100_V001_004_000_Skeleton
{
	void DL100_CoLaBDeserializer::Deserialize(uint8_t* pSrc, storeParameterPage_t& rDest, uint32_t* pOffset)
	{

		CoLaBDeserializer::Deserialize(pSrc, rDest.success , pOffset);
	}

	void DL100_CoLaBDeserializer::Deserialize(uint8_t* pSrc, FlexString506& rDest, uint32_t* pOffset)
	{
		DeserializeFlexString(pSrc, &rDest.Text[0],&rDest.uiLength,506 , pOffset);
	}

	void DL100_CoLaBDeserializer::Deserialize(uint8_t* pSrc, getDebugData_t& rDest, uint32_t* pOffset)
	{

		CoLaBDeserializer::Deserialize(pSrc, rDest.frameCnt , pOffset);
		Deserialize(pSrc, rDest.buffer , pOffset);
	}


} // namespace DL100_V001_004_000_Skeleton
} // namespace ssbl
