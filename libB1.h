#pragma once

#include <memory>

#include VERSIONED_PATH(dvpLibC_direct, ValueType.h)
#include VERSIONED_PATH(dvpLibC_direct, ComplexType.h)

#include VERSIONED_PATH(dvpLibB1_self, dvpLibB1_export.h)

namespace dvpLibB1
{
	DVPLIBB1_EXPORT void b1UseValueType(dvpLibC::ValueType value);
	DVPLIBB1_EXPORT dvpLibC::ValueType b1ReturnValueType();

	DVPLIBB1_EXPORT void b1UseComplexType(dvpLibC::ComplexType* value);
	DVPLIBB1_EXPORT dvpLibC::ComplexType* b1ReturnComplexType();

	DVPLIBB1_EXPORT void b1SetComplexType(std::unique_ptr<dvpLibC::ComplexType> value);
	DVPLIBB1_EXPORT std::unique_ptr<dvpLibC::ComplexType> b1CreateComplexType();
}
