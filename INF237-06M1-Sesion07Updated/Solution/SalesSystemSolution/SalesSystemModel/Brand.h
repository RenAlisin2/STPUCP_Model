#pragma once
using namespace System;

namespace SalesSystemModel {
	[Serializable]
	public ref class Brand
	{
	public:
		property int Id;
		property String^ Name;
		property String^ Country;
		property String^ Warranty;
	};
}
