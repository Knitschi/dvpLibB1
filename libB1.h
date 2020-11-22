#pragma once

#include <memory>

#include <dvpLibC_1_1_0/ValueType.h>
#include <dvpLibC_1_1_0/ComplexType.h>

#include <dvpLibB1_2_0_0/dvpLibB1_export.h>

namespace dvpLibB1_2_0_0
{
	DVPLIBB1_EXPORT void b1UseValueType(dvpLibC_1_1_0::ValueType value);
	DVPLIBB1_EXPORT dvpLibC_1_1_0::ValueType b1ReturnValueType();

	DVPLIBB1_EXPORT void b1UseComplexType(dvpLibC_1_1_0::ComplexType* value);
	DVPLIBB1_EXPORT dvpLibC_1_1_0::ComplexType* b1ReturnComplexType();

	DVPLIBB1_EXPORT void b1SetComplexType(std::unique_ptr<dvpLibC_1_1_0::ComplexType> value);
	DVPLIBB1_EXPORT std::unique_ptr<dvpLibC_1_1_0::ComplexType> b1CreateComplexType();
}
