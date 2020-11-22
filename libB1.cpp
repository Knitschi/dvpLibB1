#include <dvpLibB1_2_0_0/libB1.h>

#include <iostream>

namespace dvpLibB1_2_0_0
{

	void b1UseValueType(dvpLibC_1_1_0::ValueType value)
	{
		std::cout << "Called dpvLibB1::b1UseValueType() with argument " << value.foo << value.bar << "\n";
	}

	dvpLibC_1_1_0::ValueType b1ReturnValueType()
	{
		return dvpLibC_1_1_0::ValueType{ 3, 4 };
	}

	void b1UseComplexType(dvpLibC_1_1_0::ComplexType* value)
	{
		std::cout << "Called dpvLibB2::b2UseComplexType() with argument " << value->getFoo() << "\n";
	}

	std::unique_ptr<dvpLibC_1_1_0::ComplexType> globalComplexType = nullptr;

	dvpLibC_1_1_0::ComplexType* b1ReturnComplexType()
	{
		if (!globalComplexType)
		{
			globalComplexType = std::make_unique<dvpLibC_1_1_0::ComplexType>();
		}
		return globalComplexType.get();
	}

	void b1SetComplexType(std::unique_ptr<dvpLibC_1_1_0::ComplexType> value)
	{
		globalComplexType = std::move(value);
	}

	std::unique_ptr<dvpLibC_1_1_0::ComplexType> b1CreateComplexType()
	{
		return std::make_unique<dvpLibC_1_1_0::ComplexType>();
	}

}
