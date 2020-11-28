#pragma once

#include <memory>

#define dvpLibCVer dvpLibC_2_0_0
#include CPF_VERSIONED_INCLUDE(dvpLibCVer, ValueType.h)
#include CPF_VERSIONED_INCLUDE(dvpLibCVer, ComplexType.h)

#define dvpLibB1Ver dvpLibB1_2_0_0
#include CPF_VERSIONED_INCLUDE(dvpLibB1Ver, dvpLibB1_2_0_0_export.h)

CPF_VERSIONED_NAMESPACE(dvpLibB1Ver)
{
	DVPLIBB1_2_0_0_EXPORT void b1UseValueType(dvpLibC_2_0_0::ValueType value);
	DVPLIBB1_2_0_0_EXPORT dvpLibC_2_0_0::ValueType b1ReturnValueType();

	DVPLIBB1_2_0_0_EXPORT void b1UseComplexType(dvpLibC_2_0_0::ComplexType* value);
	DVPLIBB1_2_0_0_EXPORT dvpLibC_2_0_0::ComplexType* b1ReturnComplexType();

	DVPLIBB1_2_0_0_EXPORT void b1SetComplexType(std::unique_ptr<dvpLibC_2_0_0::ComplexType> value);
	DVPLIBB1_2_0_0_EXPORT std::unique_ptr<dvpLibC_2_0_0::ComplexType> b1CreateComplexType();
}
