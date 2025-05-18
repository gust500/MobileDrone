#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>



// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// DanielLochner.Assets.ButtonAttribute
struct ButtonAttribute_t0886F956C68CC1360F24E516C75AB2F1E1FAF4FB;
// DanielLochner.Assets.DontDrawIfAttribute
struct DontDrawIfAttribute_t7240D0E55DB739ECA1C16B656C12E18308DDDF99;
// DanielLochner.Assets.DrawIfAttribute
struct DrawIfAttribute_tEEBACC2F052428AECB408D64A27ACBA507108D81;
// DanielLochner.Assets.DrawIfAttributeBase
struct DrawIfAttributeBase_tF4DFC8600D48FB82265A86EE3C9281A56C61608B;
// DanielLochner.Assets.HasFlagAttribute
struct HasFlagAttribute_tD7ED6350CF8E8384CE19373A0B0166FC1A1DEE52;
// DanielLochner.Assets.IndentAttribute
struct IndentAttribute_t854F6DF57F301B0BC9F21CBE17F0858FD99C9EE1;
// DanielLochner.Assets.Margins
struct Margins_t8DDEFA2068F938441A8F739E62815DC0F232C8A0;
// UnityEngine.PropertyAttribute
struct PropertyAttribute_t5E0CB5A6CDA6E24CBD4FF26DE3B0C29D8BB54BF0;
// DanielLochner.Assets.ReadOnlyAttribute
struct ReadOnlyAttribute_tBFEB01F81A292AD2A1B3288045EBD4BAADF2A45E;
// DanielLochner.Assets.RenameAttribute
struct RenameAttribute_tA1322E407D41F8FA1B3325EB313FBC053004F0EC;
// System.String
struct String_t;


struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t60EAFE652EEB50BDF688CDE94F4F4EE5CBE9074E 
{
};

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};

// DanielLochner.Assets.Margins
struct Margins_t8DDEFA2068F938441A8F739E62815DC0F232C8A0  : public RuntimeObject
{
	// System.Single DanielLochner.Assets.Margins::Left
	float ___Left_0;
	// System.Single DanielLochner.Assets.Margins::Right
	float ___Right_1;
	// System.Single DanielLochner.Assets.Margins::Top
	float ___Top_2;
	// System.Single DanielLochner.Assets.Margins::Bottom
	float ___Bottom_3;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// DanielLochner.Assets.MinMax
struct MinMax_tA889633E68F715FD812EAC9E01B6FC6981B38091 
{
	// System.Single DanielLochner.Assets.MinMax::min
	float ___min_0;
	// System.Single DanielLochner.Assets.MinMax::max
	float ___max_1;
};

// UnityEngine.PropertyAttribute
struct PropertyAttribute_t5E0CB5A6CDA6E24CBD4FF26DE3B0C29D8BB54BF0  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// DanielLochner.Assets.ButtonAttribute
struct ButtonAttribute_t0886F956C68CC1360F24E516C75AB2F1E1FAF4FB  : public PropertyAttribute_t5E0CB5A6CDA6E24CBD4FF26DE3B0C29D8BB54BF0
{
	// System.String DanielLochner.Assets.ButtonAttribute::methodName
	String_t* ___methodName_0;
	// System.Object[] DanielLochner.Assets.ButtonAttribute::methodArguments
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___methodArguments_1;
	// System.Single DanielLochner.Assets.ButtonAttribute::buttonHeight
	float ___buttonHeight_2;
};

// DanielLochner.Assets.DrawIfAttributeBase
struct DrawIfAttributeBase_tF4DFC8600D48FB82265A86EE3C9281A56C61608B  : public PropertyAttribute_t5E0CB5A6CDA6E24CBD4FF26DE3B0C29D8BB54BF0
{
	// System.String DanielLochner.Assets.DrawIfAttributeBase::propertyName
	String_t* ___propertyName_0;
	// System.Object DanielLochner.Assets.DrawIfAttributeBase::propertyValue
	RuntimeObject* ___propertyValue_1;
	// System.Boolean DanielLochner.Assets.DrawIfAttributeBase::indent
	bool ___indent_2;
	// System.Boolean DanielLochner.Assets.DrawIfAttributeBase::readOnly
	bool ___readOnly_3;
};

// DanielLochner.Assets.HasFlagAttribute
struct HasFlagAttribute_tD7ED6350CF8E8384CE19373A0B0166FC1A1DEE52  : public PropertyAttribute_t5E0CB5A6CDA6E24CBD4FF26DE3B0C29D8BB54BF0
{
	// System.String DanielLochner.Assets.HasFlagAttribute::enumPropertyName
	String_t* ___enumPropertyName_0;
	// System.Object DanielLochner.Assets.HasFlagAttribute::enumFlagValue
	RuntimeObject* ___enumFlagValue_1;
};

// DanielLochner.Assets.IndentAttribute
struct IndentAttribute_t854F6DF57F301B0BC9F21CBE17F0858FD99C9EE1  : public PropertyAttribute_t5E0CB5A6CDA6E24CBD4FF26DE3B0C29D8BB54BF0
{
	// System.Int32 DanielLochner.Assets.IndentAttribute::<NumLevels>k__BackingField
	int32_t ___U3CNumLevelsU3Ek__BackingField_0;
};

// DanielLochner.Assets.ReadOnlyAttribute
struct ReadOnlyAttribute_tBFEB01F81A292AD2A1B3288045EBD4BAADF2A45E  : public PropertyAttribute_t5E0CB5A6CDA6E24CBD4FF26DE3B0C29D8BB54BF0
{
};

// DanielLochner.Assets.RenameAttribute
struct RenameAttribute_tA1322E407D41F8FA1B3325EB313FBC053004F0EC  : public PropertyAttribute_t5E0CB5A6CDA6E24CBD4FF26DE3B0C29D8BB54BF0
{
	// System.String DanielLochner.Assets.RenameAttribute::<NewName>k__BackingField
	String_t* ___U3CNewNameU3Ek__BackingField_0;
};

// DanielLochner.Assets.DontDrawIfAttribute
struct DontDrawIfAttribute_t7240D0E55DB739ECA1C16B656C12E18308DDDF99  : public DrawIfAttributeBase_tF4DFC8600D48FB82265A86EE3C9281A56C61608B
{
};

// DanielLochner.Assets.DrawIfAttribute
struct DrawIfAttribute_tEEBACC2F052428AECB408D64A27ACBA507108D81  : public DrawIfAttributeBase_tF4DFC8600D48FB82265A86EE3C9281A56C61608B
{
};

// <Module>

// <Module>

// DanielLochner.Assets.Margins

// DanielLochner.Assets.Margins

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Int32

// System.Int32

// DanielLochner.Assets.MinMax

// DanielLochner.Assets.MinMax

// UnityEngine.PropertyAttribute

// UnityEngine.PropertyAttribute

// System.Single

// System.Single

// System.Void

// System.Void

// DanielLochner.Assets.ButtonAttribute

// DanielLochner.Assets.ButtonAttribute

// DanielLochner.Assets.DrawIfAttributeBase

// DanielLochner.Assets.DrawIfAttributeBase

// DanielLochner.Assets.HasFlagAttribute

// DanielLochner.Assets.HasFlagAttribute

// DanielLochner.Assets.IndentAttribute

// DanielLochner.Assets.IndentAttribute

// DanielLochner.Assets.ReadOnlyAttribute

// DanielLochner.Assets.ReadOnlyAttribute

// DanielLochner.Assets.RenameAttribute

// DanielLochner.Assets.RenameAttribute

// DanielLochner.Assets.DontDrawIfAttribute

// DanielLochner.Assets.DontDrawIfAttribute

// DanielLochner.Assets.DrawIfAttribute

// DanielLochner.Assets.DrawIfAttribute
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};



// System.Void UnityEngine.PropertyAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyAttribute__ctor_m19247686E165101F140615C7306DC2DA3953D97D (PropertyAttribute_t5E0CB5A6CDA6E24CBD4FF26DE3B0C29D8BB54BF0* __this, const RuntimeMethod* method) ;
// System.Void DanielLochner.Assets.DrawIfAttributeBase::.ctor(System.String,System.Object,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DrawIfAttributeBase__ctor_m3C12DA06E5CF130139050E1E0F5B2722B6CAA5A9 (DrawIfAttributeBase_tF4DFC8600D48FB82265A86EE3C9281A56C61608B* __this, String_t* ___0_propertyName, RuntimeObject* ___1_propertyValue, bool ___2_indent, bool ___3_readOnly, const RuntimeMethod* method) ;
// System.Void DanielLochner.Assets.IndentAttribute::set_NumLevels(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IndentAttribute_set_NumLevels_mD65D4717E75D44589C102CF08B089FB9A48C8006_inline (IndentAttribute_t854F6DF57F301B0BC9F21CBE17F0858FD99C9EE1* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void DanielLochner.Assets.MinMax::.ctor(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinMax__ctor_m171D381310DBC66F3F052D87CDE5BE93DA4330E4 (MinMax_tA889633E68F715FD812EAC9E01B6FC6981B38091* __this, float ___0_min, float ___1_max, const RuntimeMethod* method) ;
// System.Void DanielLochner.Assets.RenameAttribute::set_NewName(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RenameAttribute_set_NewName_m03D41C9B5207AC128E56420DA5898D6D190EF21D_inline (RenameAttribute_tA1322E407D41F8FA1B3325EB313FBC053004F0EC* __this, String_t* ___0_value, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DanielLochner.Assets.ButtonAttribute::.ctor(System.String,System.Single,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonAttribute__ctor_m26DAF4A522A52C273A9904283077891C4DE2D0CC (ButtonAttribute_t0886F956C68CC1360F24E516C75AB2F1E1FAF4FB* __this, String_t* ___0_methodName, float ___1_buttonHeight, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_methodArguments, const RuntimeMethod* method) 
{
	{
		// public ButtonAttribute(string methodName, float buttonHeight = 25f, params object[] methodArguments)
		PropertyAttribute__ctor_m19247686E165101F140615C7306DC2DA3953D97D(__this, NULL);
		// this.methodName = methodName;
		String_t* L_0 = ___0_methodName;
		__this->___methodName_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___methodName_0), (void*)L_0);
		// this.buttonHeight = buttonHeight;
		float L_1 = ___1_buttonHeight;
		__this->___buttonHeight_2 = L_1;
		// this.methodArguments = methodArguments;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___2_methodArguments;
		__this->___methodArguments_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___methodArguments_1), (void*)L_2);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DanielLochner.Assets.DontDrawIfAttribute::.ctor(System.String,System.Object,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DontDrawIfAttribute__ctor_m3F0EA5F634A42D01E749034E5A52005D1D9582C0 (DontDrawIfAttribute_t7240D0E55DB739ECA1C16B656C12E18308DDDF99* __this, String_t* ___0_propertyName, RuntimeObject* ___1_propertyValue, bool ___2_indent, bool ___3_readOnly, const RuntimeMethod* method) 
{
	{
		// public DontDrawIfAttribute(string propertyName, object propertyValue, bool indent = false, bool readOnly = false) : base(propertyName, propertyValue, indent, readOnly) { }
		String_t* L_0 = ___0_propertyName;
		RuntimeObject* L_1 = ___1_propertyValue;
		bool L_2 = ___2_indent;
		bool L_3 = ___3_readOnly;
		DrawIfAttributeBase__ctor_m3C12DA06E5CF130139050E1E0F5B2722B6CAA5A9(__this, L_0, L_1, L_2, L_3, NULL);
		// public DontDrawIfAttribute(string propertyName, object propertyValue, bool indent = false, bool readOnly = false) : base(propertyName, propertyValue, indent, readOnly) { }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DanielLochner.Assets.DrawIfAttribute::.ctor(System.String,System.Object,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DrawIfAttribute__ctor_mF7F702CF5428A0244858BDEE5E1B3E2402DEACF7 (DrawIfAttribute_tEEBACC2F052428AECB408D64A27ACBA507108D81* __this, String_t* ___0_propertyName, RuntimeObject* ___1_propertyValue, bool ___2_indent, bool ___3_readOnly, const RuntimeMethod* method) 
{
	{
		// public DrawIfAttribute(string propertyName, object propertyValue, bool indent = false, bool readOnly = false) : base(propertyName, propertyValue, indent, readOnly) { }
		String_t* L_0 = ___0_propertyName;
		RuntimeObject* L_1 = ___1_propertyValue;
		bool L_2 = ___2_indent;
		bool L_3 = ___3_readOnly;
		DrawIfAttributeBase__ctor_m3C12DA06E5CF130139050E1E0F5B2722B6CAA5A9(__this, L_0, L_1, L_2, L_3, NULL);
		// public DrawIfAttribute(string propertyName, object propertyValue, bool indent = false, bool readOnly = false) : base(propertyName, propertyValue, indent, readOnly) { }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DanielLochner.Assets.DrawIfAttributeBase::.ctor(System.String,System.Object,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DrawIfAttributeBase__ctor_m3C12DA06E5CF130139050E1E0F5B2722B6CAA5A9 (DrawIfAttributeBase_tF4DFC8600D48FB82265A86EE3C9281A56C61608B* __this, String_t* ___0_propertyName, RuntimeObject* ___1_propertyValue, bool ___2_indent, bool ___3_readOnly, const RuntimeMethod* method) 
{
	{
		// public DrawIfAttributeBase(string propertyName, object propertyValue, bool indent = false, bool readOnly = false)
		PropertyAttribute__ctor_m19247686E165101F140615C7306DC2DA3953D97D(__this, NULL);
		// this.propertyName = propertyName;
		String_t* L_0 = ___0_propertyName;
		__this->___propertyName_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___propertyName_0), (void*)L_0);
		// this.propertyValue = propertyValue;
		RuntimeObject* L_1 = ___1_propertyValue;
		__this->___propertyValue_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___propertyValue_1), (void*)L_1);
		// this.indent = indent;
		bool L_2 = ___2_indent;
		__this->___indent_2 = L_2;
		// this.readOnly = readOnly;
		bool L_3 = ___3_readOnly;
		__this->___readOnly_3 = L_3;
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DanielLochner.Assets.HasFlagAttribute::.ctor(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HasFlagAttribute__ctor_mE28C78C3771AB44D3DF5A1365CA1169A9DF5BCD6 (HasFlagAttribute_tD7ED6350CF8E8384CE19373A0B0166FC1A1DEE52* __this, String_t* ___0_enumPropertyName, RuntimeObject* ___1_enumFlagValue, const RuntimeMethod* method) 
{
	{
		// public HasFlagAttribute(string enumPropertyName, object enumFlagValue)
		PropertyAttribute__ctor_m19247686E165101F140615C7306DC2DA3953D97D(__this, NULL);
		// this.enumPropertyName = enumPropertyName;
		String_t* L_0 = ___0_enumPropertyName;
		__this->___enumPropertyName_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enumPropertyName_0), (void*)L_0);
		// this.enumFlagValue = enumFlagValue;
		RuntimeObject* L_1 = ___1_enumFlagValue;
		__this->___enumFlagValue_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enumFlagValue_1), (void*)L_1);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 DanielLochner.Assets.IndentAttribute::get_NumLevels()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IndentAttribute_get_NumLevels_m0B36348C4E7A312FD30DE76445C40A3555BE467C (IndentAttribute_t854F6DF57F301B0BC9F21CBE17F0858FD99C9EE1* __this, const RuntimeMethod* method) 
{
	{
		// public int NumLevels { get; set; }
		int32_t L_0 = __this->___U3CNumLevelsU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void DanielLochner.Assets.IndentAttribute::set_NumLevels(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndentAttribute_set_NumLevels_mD65D4717E75D44589C102CF08B089FB9A48C8006 (IndentAttribute_t854F6DF57F301B0BC9F21CBE17F0858FD99C9EE1* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public int NumLevels { get; set; }
		int32_t L_0 = ___0_value;
		__this->___U3CNumLevelsU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.Void DanielLochner.Assets.IndentAttribute::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndentAttribute__ctor_m0F30331F38EE35E69E86CAE2490D93E3C16E972E (IndentAttribute_t854F6DF57F301B0BC9F21CBE17F0858FD99C9EE1* __this, int32_t ___0_numLevels, const RuntimeMethod* method) 
{
	{
		// public IndentAttribute(int numLevels = 1)
		PropertyAttribute__ctor_m19247686E165101F140615C7306DC2DA3953D97D(__this, NULL);
		// NumLevels = numLevels;
		int32_t L_0 = ___0_numLevels;
		IndentAttribute_set_NumLevels_mD65D4717E75D44589C102CF08B089FB9A48C8006_inline(__this, L_0, NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DanielLochner.Assets.Margins::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Margins__ctor_mD0360F7BD9BF5F1E252A17EF761AD750F645041E (Margins_t8DDEFA2068F938441A8F739E62815DC0F232C8A0* __this, float ___0_m, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// public Margins(float m)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// Left = Right = Top = Bottom = m;
		float L_0 = ___0_m;
		float L_1 = L_0;
		V_0 = L_1;
		__this->___Bottom_3 = L_1;
		float L_2 = V_0;
		float L_3 = L_2;
		V_0 = L_3;
		__this->___Top_2 = L_3;
		float L_4 = V_0;
		float L_5 = L_4;
		V_0 = L_5;
		__this->___Right_1 = L_5;
		float L_6 = V_0;
		__this->___Left_0 = L_6;
		// }
		return;
	}
}
// System.Void DanielLochner.Assets.Margins::.ctor(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Margins__ctor_m415D42A7BB34913948B5F9953189B0C97C94F595 (Margins_t8DDEFA2068F938441A8F739E62815DC0F232C8A0* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// public Margins(float x, float y)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// Left = Right = x;
		float L_0 = ___0_x;
		float L_1 = L_0;
		V_0 = L_1;
		__this->___Right_1 = L_1;
		float L_2 = V_0;
		__this->___Left_0 = L_2;
		// Top = Bottom = y;
		float L_3 = ___1_y;
		float L_4 = L_3;
		V_0 = L_4;
		__this->___Bottom_3 = L_4;
		float L_5 = V_0;
		__this->___Top_2 = L_5;
		// }
		return;
	}
}
// System.Void DanielLochner.Assets.Margins::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Margins__ctor_mCCDA245F3561874FFFF63E617144E7052AC0F8FD (Margins_t8DDEFA2068F938441A8F739E62815DC0F232C8A0* __this, float ___0_l, float ___1_r, float ___2_t, float ___3_b, const RuntimeMethod* method) 
{
	{
		// public Margins(float l, float r, float t, float b)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// Left = l;
		float L_0 = ___0_l;
		__this->___Left_0 = L_0;
		// Right = r;
		float L_1 = ___1_r;
		__this->___Right_1 = L_1;
		// Top = t;
		float L_2 = ___2_t;
		__this->___Top_2 = L_2;
		// Bottom = b;
		float L_3 = ___3_b;
		__this->___Bottom_3 = L_3;
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DanielLochner.Assets.MinMax::.ctor(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinMax__ctor_m171D381310DBC66F3F052D87CDE5BE93DA4330E4 (MinMax_tA889633E68F715FD812EAC9E01B6FC6981B38091* __this, float ___0_min, float ___1_max, const RuntimeMethod* method) 
{
	{
		// this.min = min;
		float L_0 = ___0_min;
		__this->___min_0 = L_0;
		// this.max = max;
		float L_1 = ___1_max;
		__this->___max_1 = L_1;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void MinMax__ctor_m171D381310DBC66F3F052D87CDE5BE93DA4330E4_AdjustorThunk (RuntimeObject* __this, float ___0_min, float ___1_max, const RuntimeMethod* method)
{
	MinMax_tA889633E68F715FD812EAC9E01B6FC6981B38091* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MinMax_tA889633E68F715FD812EAC9E01B6FC6981B38091*>(__this + _offset);
	MinMax__ctor_m171D381310DBC66F3F052D87CDE5BE93DA4330E4(_thisAdjusted, ___0_min, ___1_max, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DanielLochner.Assets.ReadOnlyAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyAttribute__ctor_m6FC3C7FDDF6511A9048F04A700B9B59957B414AD (ReadOnlyAttribute_tBFEB01F81A292AD2A1B3288045EBD4BAADF2A45E* __this, const RuntimeMethod* method) 
{
	{
		PropertyAttribute__ctor_m19247686E165101F140615C7306DC2DA3953D97D(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String DanielLochner.Assets.RenameAttribute::get_NewName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RenameAttribute_get_NewName_m3368DC9DFF77A85827236D148BC02FA5F782EA49 (RenameAttribute_tA1322E407D41F8FA1B3325EB313FBC053004F0EC* __this, const RuntimeMethod* method) 
{
	{
		// public string NewName { get; private set; }
		String_t* L_0 = __this->___U3CNewNameU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void DanielLochner.Assets.RenameAttribute::set_NewName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenameAttribute_set_NewName_m03D41C9B5207AC128E56420DA5898D6D190EF21D (RenameAttribute_tA1322E407D41F8FA1B3325EB313FBC053004F0EC* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string NewName { get; private set; }
		String_t* L_0 = ___0_value;
		__this->___U3CNewNameU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNewNameU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Void DanielLochner.Assets.RenameAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenameAttribute__ctor_m623C4F716B0833F7701DCFEC3470B9B81ABAFFCD (RenameAttribute_tA1322E407D41F8FA1B3325EB313FBC053004F0EC* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	{
		// public RenameAttribute(string name)
		PropertyAttribute__ctor_m19247686E165101F140615C7306DC2DA3953D97D(__this, NULL);
		// NewName = name;
		String_t* L_0 = ___0_name;
		RenameAttribute_set_NewName_m03D41C9B5207AC128E56420DA5898D6D190EF21D_inline(__this, L_0, NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IndentAttribute_set_NumLevels_mD65D4717E75D44589C102CF08B089FB9A48C8006_inline (IndentAttribute_t854F6DF57F301B0BC9F21CBE17F0858FD99C9EE1* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public int NumLevels { get; set; }
		int32_t L_0 = ___0_value;
		__this->___U3CNumLevelsU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RenameAttribute_set_NewName_m03D41C9B5207AC128E56420DA5898D6D190EF21D_inline (RenameAttribute_tA1322E407D41F8FA1B3325EB313FBC053004F0EC* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string NewName { get; private set; }
		String_t* L_0 = ___0_value;
		__this->___U3CNewNameU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNewNameU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
