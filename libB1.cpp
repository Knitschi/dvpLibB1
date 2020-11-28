
#define dvpLibB1Ver dvpLibB1_2_0_0
#include CPF_VERSIONED_INCLUDE(dvpLibB1Ver, libB1.h)

#include <iostream>


CPF_VERSIONED_NAMESPACE(dvpLibB1Ver)
{

	void b1UseValueType(dvpLibCVer::ValueType value)
	{
		std::cout << "Called dpvLibB1::b1UseValueType() with argument " << value.foo << value.bar << "\n";
	}

	dvpLibCVer::ValueType b1ReturnValueType()
	{
		return dvpLibCVer::ValueType{ 3, 4 };
	}

	void b1UseComplexType(dvpLibCVer::ComplexType* value)
	{
		std::cout << "Called dpvLibB2::b2UseComplexType() with argument " << value->getFoo() << "\n";
	}

	std::unique_ptr<dvpLibCVer::ComplexType> globalComplexType = nullptr;

	dvpLibCVer::ComplexType* b1ReturnComplexType()
	{
		if (!globalComplexType)
		{
			globalComplexType = std::make_unique<dvpLibCVer::ComplexType>();
		}
		return globalComplexType.get();
	}

	void b1SetComplexType(std::unique_ptr<dvpLibCVer::ComplexType> value)
	{
		globalComplexType = std::move(value);
	}

	std::unique_ptr<dvpLibCVer::ComplexType> b1CreateComplexType()
	{
		return std::make_unique<dvpLibCVer::ComplexType>();
	}

}
