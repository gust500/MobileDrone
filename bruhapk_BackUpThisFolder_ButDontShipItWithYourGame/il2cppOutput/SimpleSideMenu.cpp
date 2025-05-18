#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<System.Int32>
struct Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404;
// System.Action`2<System.Int32,System.Int32>
struct Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.Events.UnityEvent`1<System.Int32Enum>
struct UnityEvent_1_t090B79D1A655BCAB01BC91C7409AC476DC731B81;
// UnityEngine.Events.UnityEvent`1<DanielLochner.Assets.SimpleSideMenu.State>
struct UnityEvent_1_t4F4D71D8A21119887E211188B8312B8332CDED73;
// UnityEngine.Events.UnityEvent`2<System.Int32Enum,System.Int32Enum>
struct UnityEvent_2_t0B199A7D77AC76D1AAC960592A617D014E6C54E4;
// UnityEngine.Events.UnityEvent`2<DanielLochner.Assets.SimpleSideMenu.State,DanielLochner.Assets.SimpleSideMenu.State>
struct UnityEvent_2_t376FE0489E50AD7FFE5CD9DEE752167A2904D102;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// UnityEngine.UI.Text[]
struct TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832;
// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.UI.CanvasScaler
struct CanvasScaler_t3BC095205EAD308CF3EAC27136A73387AC32FC3B;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707;
// System.Exception
struct Exception_t;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// DanielLochner.Assets.SimpleSideMenu.SimpleSideMenu
struct SimpleSideMenu_tCB0D978B855B8B0DF5CDF28638208B0BF0033259;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// UnityEngine.Canvas/WillRenderCanvases
struct WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24;

IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityEvent_1_t4F4D71D8A21119887E211188B8312B8332CDED73_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityEvent_2_t376FE0489E50AD7FFE5CD9DEE752167A2904D102_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral353DD056B628EBD9C028B3B73EF568B6104818BD;
IL2CPP_EXTERN_C String_t* _stringLiteral4FAD7856BCE41FCDF1BF95ED0F7570B9C075A4CA;
IL2CPP_EXTERN_C String_t* _stringLiteral866B861B6C080C35A3290E9D160870B1328CC301;
IL2CPP_EXTERN_C String_t* _stringLiteral8E6F5806732308563F765198B3AF0BFC2BD916AB;
IL2CPP_EXTERN_C String_t* _stringLiteralA081128306F2DC05B07AD2FF98775C7D1611D07A;
IL2CPP_EXTERN_C String_t* _stringLiteralD5DE9A4E0E5478896EDE5CE4AD9A3293B62CD972;
IL2CPP_EXTERN_C String_t* _stringLiteralE5A1D96CE41BD597A30172C890508C2BB5810152;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInParent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m5FB554DD7C0F662DAB84C0F292B221CAE3F0A5B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCanvasScaler_t3BC095205EAD308CF3EAC27136A73387AC32FC3B_m82FD65AA44C2243A4866779598E55571D3576DAE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_m60FA17F75591FF93A15D1D1FE5969B8CB9E5FAAC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA327C9E1CA12BC531D587E7567F2067B96E6B6A0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m771EB78FF8813B5AFF21AC0D252E5461943E6388_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentsInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m531D23F4AD96C7E6896EE31533EAFE928D694C21_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SimpleSideMenu_Start_m10D05B2C8F53840D92A235D3F80C8F19F19563E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SimpleSideMenu_ToggleState_m1F4F50820971936D8E325EC70F21A85020675545_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SimpleSideMenu_U3CSetupU3Eb__107_0_m6A4F5C6480EB10E0B50A5237485D2AFEC1069772_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_Invoke_mCD6DF2E7C4184A832B81787F0AF0C82E561D2BC9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_m74CB6ED924F4B916B6583CB537ECA623F6BA60AD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_2_Invoke_m59C85672CA5C41CA0DE2EA8F93D0C8E3847CDDB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_2__ctor_m3F639E40BCCBCC2FC3DE07E7C362E9A49BBC34B9_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tE400A69934F0D4A74F5FABCC751987D44F88852E 
{
};

// UnityEngine.EventSystems.AbstractEventData
struct AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7  : public RuntimeObject
{
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
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

// UnityEngine.Events.UnityEvent`1<DanielLochner.Assets.SimpleSideMenu.State>
struct UnityEvent_1_t4F4D71D8A21119887E211188B8312B8332CDED73  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`2<DanielLochner.Assets.SimpleSideMenu.State,DanielLochner.Assets.SimpleSideMenu.State>
struct UnityEvent_2_t376FE0489E50AD7FFE5CD9DEE752167A2904D102  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`2::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F  : public AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7
{
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___m_EventSystem_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};

// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
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

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 
{
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	// System.Single UnityEngine.EventSystems.RaycastResult::distance
	float ___distance_2;
	// System.Single UnityEngine.EventSystems.RaycastResult::index
	float ___index_3;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::depth
	int32_t ___depth_4;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingLayer
	int32_t ___sortingLayer_5;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingOrder
	int32_t ___sortingOrder_6;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::displayIndex
	int32_t ___displayIndex_10;
};
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_pinvoke
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	int32_t ___displayIndex_10;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_com
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	int32_t ___displayIndex_10;
};

// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C  : public UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977
{
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB  : public BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F
{
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerEnter>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerEnterU3Ek__BackingField_2;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::m_PointerPress
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_PointerPress_3;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<lastPress>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3ClastPressU3Ek__BackingField_4;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<rawPointerPress>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CrawPointerPressU3Ek__BackingField_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerDrag>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerDragU3Ek__BackingField_6;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerClick>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerClickU3Ek__BackingField_7;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerCurrentRaycast>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CpointerCurrentRaycastU3Ek__BackingField_8;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerPressRaycast>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CpointerPressRaycastU3Ek__BackingField_9;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityEngine.EventSystems.PointerEventData::hovered
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___hovered_10;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<eligibleForClick>k__BackingField
	bool ___U3CeligibleForClickU3Ek__BackingField_11;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<pointerId>k__BackingField
	int32_t ___U3CpointerIdU3Ek__BackingField_12;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<position>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpositionU3Ek__BackingField_13;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<delta>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CdeltaU3Ek__BackingField_14;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<pressPosition>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpressPositionU3Ek__BackingField_15;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldPosition>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldPositionU3Ek__BackingField_16;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldNormal>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldNormalU3Ek__BackingField_17;
	// System.Single UnityEngine.EventSystems.PointerEventData::<clickTime>k__BackingField
	float ___U3CclickTimeU3Ek__BackingField_18;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_19;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<scrollDelta>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CscrollDeltaU3Ek__BackingField_20;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<useDragThreshold>k__BackingField
	bool ___U3CuseDragThresholdU3Ek__BackingField_21;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<dragging>k__BackingField
	bool ___U3CdraggingU3Ek__BackingField_22;
	// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerEventData::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_23;
	// System.Single UnityEngine.EventSystems.PointerEventData::<pressure>k__BackingField
	float ___U3CpressureU3Ek__BackingField_24;
	// System.Single UnityEngine.EventSystems.PointerEventData::<tangentialPressure>k__BackingField
	float ___U3CtangentialPressureU3Ek__BackingField_25;
	// System.Single UnityEngine.EventSystems.PointerEventData::<altitudeAngle>k__BackingField
	float ___U3CaltitudeAngleU3Ek__BackingField_26;
	// System.Single UnityEngine.EventSystems.PointerEventData::<azimuthAngle>k__BackingField
	float ___U3CazimuthAngleU3Ek__BackingField_27;
	// System.Single UnityEngine.EventSystems.PointerEventData::<twist>k__BackingField
	float ___U3CtwistU3Ek__BackingField_28;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radius>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusU3Ek__BackingField_29;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radiusVariance>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusVarianceU3Ek__BackingField_30;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<fullyExited>k__BackingField
	bool ___U3CfullyExitedU3Ek__BackingField_31;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<reentered>k__BackingField
	bool ___U3CreenteredU3Ek__BackingField_32;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7  : public MulticastDelegate_t
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5  : public Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1
{
};

// DanielLochner.Assets.SimpleSideMenu.SimpleSideMenu
struct SimpleSideMenu_tCB0D978B855B8B0DF5CDF28638208B0BF0033259  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// DanielLochner.Assets.SimpleSideMenu.Placement DanielLochner.Assets.SimpleSideMenu.SimpleSideMenu::placement
	int32_t ___placement_4;
	// DanielLochner.Assets.SimpleSideMenu.State DanielLochner.Assets.SimpleSideMenu.SimpleSideMenu::defaultState
	int32_t ___defaultState_5;
	// System.Single DanielLochner.Assets.SimpleSideMenu.SimpleSideMenu::transitionSpeed
	float ___transitionSpeed_6;
	// System.Single DanielLochner.Assets.SimpleSideMenu.SimpleSideMenu::thresholdDragSpeed
	float ___thresholdDragSpeed_7;
	// System.Single DanielLochner.Assets.SimpleSideMenu.SimpleSideMenu::thresholdDraggedFraction
	float ___thresholdDraggedFraction_8;
	// UnityEngine.GameObject DanielLochner.Assets.SimpleSideMenu.SimpleSideMenu::handle
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___handle_9;
	// System.Boolean DanielLochner.Assets.SimpleSideMenu.SimpleSideMenu::isHandleDraggable
	bool ___isHandleDraggable_10;
	// System.Boolean DanielLochner.Assets.SimpleSideMenu.SimpleSideMenu::isMenuDraggable
	bool ___isMenuDraggable_11;
	// System.Boolean DanielLochner.Assets.SimpleSideMenu.SimpleSideMenu::handleToggleStateOnPressed
	bool ___handleToggleStateOnPressed_12;
	// System.Boolean DanielLochner.Assets.SimpleSideMenu.SimpleSideMenu::useOverlay
	bool ___useOverlay_13;
	// UnityEngine.Color DanielLochner.Assets.SimpleSideMenu.SimpleSideMenu::overlayColour
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___overlayColour_14;
	// System.Boolean DanielLochner.Assets.SimpleSideMenu.SimpleSideMenu::useBlur
	bool ___useBlur_15;
	// UnityEngine.Material DanielLochner.Assets.SimpleSideMenu.SimpleSideMenu::blurMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___blurMaterial_16;
	// System.Int32 DanielLochner.Assets.SimpleSideMenu.SimpleSideMenu::blurRadius
	int32_t ___blurRadius_17;
	// System.Boolean DanielLochner.Assets.SimpleSideMenu.SimpleSideMenu::overlayCloseOnPressed
	bool ___overlayCloseOnPressed_18;
	// UnityEngine.Events.UnityEvent`1<DanielLochner.Assets.SimpleSideMenu.State> DanielLochner.Assets.SimpleSideMenu.SimpleSideMenu::onStateSelecting
	UnityEvent_1_t4F4D71D8A21119887E211188B8312B8332CDED73* ___onStateSelecting_19;
	// UnityEngine.Events.UnityEvent`1<DanielLochner.Assets.SimpleSideMenu.State> DanielLochner.Assets.SimpleSideMenu.SimpleSideMenu::onStateSelected
	UnityEvent_1_t4F4D71D8A21119887E211188B8312B8332CDED73* ___onStateSelected_20;
	// UnityEngine.Events.UnityEvent`2<DanielLochner.Assets.SimpleSideMenu.State,DanielLochner.Assets.SimpleSideMenu.State> DanielLochner.Assets.SimpleSideMenu.SimpleSideMenu::onStateChanging
	UnityEvent_2_t376FE0489E50AD7FFE5CD9DEE752167A2904D102* ___onStateChanging_21;
	// UnityEngine.Events.UnityEvent`2<DanielLochner.Assets.SimpleSideMenu.State,DanielLochner.Assets.SimpleSideMenu.State> DanielLochner.Assets.SimpleSideMenu.SimpleSideMenu::onStateChanged
	UnityEvent_2_t376FE0489E50AD7FFE5CD9DEE752167A2904D102* ___onStateChanged_22;
	// System.Single DanielLochner.Assets.SimpleSideMenu.SimpleSideMenu::previousTime
	float ___previousTime_23;
	// System.Boolean DanielLochner.Assets.SimpleSideMenu.SimpleSideMenu::isDragging
	bool ___isDragging_24;
	// System.Boolean DanielLochner.Assets.SimpleSideMenu.SimpleSideMenu::isPotentialDrag
	bool ___isPotentialDrag_25;
	// UnityEngine.Vector2 DanielLochner.Assets.SimpleSideMenu.SimpleSideMenu::closedPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___closedPosition_26;
	// UnityEngine.Vector2 DanielLochner.Assets.SimpleSideMenu.SimpleSideMenu::openPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___openPosition_27;
	// UnityEngine.Vector2 DanielLochner.Assets.SimpleSideMenu.SimpleSideMenu::startPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___startPosition_28;
	// UnityEngine.Vector2 DanielLochner.Assets.SimpleSideMenu.SimpleSideMenu::releaseVelocity
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___releaseVelocity_29;
	// UnityEngine.Vector2 DanielLochner.Assets.SimpleSideMenu.SimpleSideMenu::dragVelocity
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___dragVelocity_30;
	// UnityEngine.Vector2 DanielLochner.Assets.SimpleSideMenu.SimpleSideMenu::menuSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___menuSize_31;
	// UnityEngine.Vector3 DanielLochner.Assets.SimpleSideMenu.SimpleSideMenu::previousPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___previousPosition_32;
	// UnityEngine.GameObject DanielLochner.Assets.SimpleSideMenu.SimpleSideMenu::overlay
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___overlay_33;
	// UnityEngine.GameObject DanielLochner.Assets.SimpleSideMenu.SimpleSideMenu::blur
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___blur_34;
	// UnityEngine.RectTransform DanielLochner.Assets.SimpleSideMenu.SimpleSideMenu::rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___rectTransform_35;
	// UnityEngine.RectTransform DanielLochner.Assets.SimpleSideMenu.SimpleSideMenu::canvasRectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___canvasRectTransform_36;
	// UnityEngine.UI.Image DanielLochner.Assets.SimpleSideMenu.SimpleSideMenu::overlayImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___overlayImage_37;
	// UnityEngine.UI.Image DanielLochner.Assets.SimpleSideMenu.SimpleSideMenu::blurImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___blurImage_38;
	// UnityEngine.UI.CanvasScaler DanielLochner.Assets.SimpleSideMenu.SimpleSideMenu::canvasScaler
	CanvasScaler_t3BC095205EAD308CF3EAC27136A73387AC32FC3B* ___canvasScaler_39;
	// UnityEngine.Canvas DanielLochner.Assets.SimpleSideMenu.SimpleSideMenu::canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___canvas_40;
	// DanielLochner.Assets.SimpleSideMenu.State DanielLochner.Assets.SimpleSideMenu.SimpleSideMenu::<CurrentState>k__BackingField
	int32_t ___U3CCurrentStateU3Ek__BackingField_41;
	// DanielLochner.Assets.SimpleSideMenu.State DanielLochner.Assets.SimpleSideMenu.SimpleSideMenu::<TargetState>k__BackingField
	int32_t ___U3CTargetStateU3Ek__BackingField_42;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.UI.CanvasScaler
struct CanvasScaler_t3BC095205EAD308CF3EAC27136A73387AC32FC3B  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.UI.CanvasScaler/ScaleMode UnityEngine.UI.CanvasScaler::m_UiScaleMode
	int32_t ___m_UiScaleMode_4;
	// System.Single UnityEngine.UI.CanvasScaler::m_ReferencePixelsPerUnit
	float ___m_ReferencePixelsPerUnit_5;
	// System.Single UnityEngine.UI.CanvasScaler::m_ScaleFactor
	float ___m_ScaleFactor_6;
	// UnityEngine.Vector2 UnityEngine.UI.CanvasScaler::m_ReferenceResolution
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_ReferenceResolution_7;
	// UnityEngine.UI.CanvasScaler/ScreenMatchMode UnityEngine.UI.CanvasScaler::m_ScreenMatchMode
	int32_t ___m_ScreenMatchMode_8;
	// System.Single UnityEngine.UI.CanvasScaler::m_MatchWidthOrHeight
	float ___m_MatchWidthOrHeight_9;
	// UnityEngine.UI.CanvasScaler/Unit UnityEngine.UI.CanvasScaler::m_PhysicalUnit
	int32_t ___m_PhysicalUnit_11;
	// System.Single UnityEngine.UI.CanvasScaler::m_FallbackScreenDPI
	float ___m_FallbackScreenDPI_12;
	// System.Single UnityEngine.UI.CanvasScaler::m_DefaultSpriteDPI
	float ___m_DefaultSpriteDPI_13;
	// System.Single UnityEngine.UI.CanvasScaler::m_DynamicPixelsPerUnit
	float ___m_DynamicPixelsPerUnit_14;
	// UnityEngine.Canvas UnityEngine.UI.CanvasScaler::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_15;
	// System.Single UnityEngine.UI.CanvasScaler::m_PrevScaleFactor
	float ___m_PrevScaleFactor_16;
	// System.Single UnityEngine.UI.CanvasScaler::m_PrevReferencePixelsPerUnit
	float ___m_PrevReferencePixelsPerUnit_17;
	// System.Boolean UnityEngine.UI.CanvasScaler::m_PresetInfoIsWorld
	bool ___m_PresetInfoIsWorld_18;
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTargetCache
	bool ___m_RaycastTargetCache_11;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_12;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_13;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_14;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_15;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_16;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_19;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_20;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_23;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_24;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_25;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_26;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* ___m_OnClick_20;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_27;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_28;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_32;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_33;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_34;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_35;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_36;
};

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_38;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_OverrideSprite_39;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_40;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_41;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_42;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_43;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_44;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_45;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_46;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_47;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_48;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_49;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_50;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_51;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_37;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_39;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_40;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_42;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_43;
};

// <Module>

// <Module>

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// UnityEngine.Events.UnityEvent`1<DanielLochner.Assets.SimpleSideMenu.State>

// UnityEngine.Events.UnityEvent`1<DanielLochner.Assets.SimpleSideMenu.State>

// UnityEngine.Events.UnityEvent`2<DanielLochner.Assets.SimpleSideMenu.State,DanielLochner.Assets.SimpleSideMenu.State>

// UnityEngine.Events.UnityEvent`2<DanielLochner.Assets.SimpleSideMenu.State,DanielLochner.Assets.SimpleSideMenu.State>

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// UnityEngine.Color

// UnityEngine.Color

// System.Double

// System.Double

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// UnityEngine.Rect

// UnityEngine.Rect

// System.Single

// System.Single

// UnityEngine.Events.UnityEvent

// UnityEngine.Events.UnityEvent

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector2

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector3

// System.Void

// System.Void

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// UnityEngine.UI.Button/ButtonClickedEvent

// UnityEngine.UI.Button/ButtonClickedEvent

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.GameObject

// UnityEngine.GameObject

// UnityEngine.Material

// UnityEngine.Material

// UnityEngine.EventSystems.PointerEventData

// UnityEngine.EventSystems.PointerEventData

// UnityEngine.Transform

// UnityEngine.Transform

// UnityEngine.Events.UnityAction

// UnityEngine.Events.UnityAction

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.Camera

// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_StaticFields
{
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::preWillRenderCanvases
	WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC* ___preWillRenderCanvases_4;
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::willRenderCanvases
	WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC* ___willRenderCanvases_5;
	// System.Action`1<System.Int32> UnityEngine.Canvas::<externBeginRenderOverlays>k__BackingField
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___U3CexternBeginRenderOverlaysU3Ek__BackingField_6;
	// System.Action`2<System.Int32,System.Int32> UnityEngine.Canvas::<externRenderOverlaysBefore>k__BackingField
	Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8* ___U3CexternRenderOverlaysBeforeU3Ek__BackingField_7;
	// System.Action`1<System.Int32> UnityEngine.Canvas::<externEndRenderOverlays>k__BackingField
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___U3CexternEndRenderOverlaysU3Ek__BackingField_8;
};

// UnityEngine.Canvas

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_StaticFields
{
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24* ___reapplyDrivenProperties_4;
};

// UnityEngine.RectTransform

// DanielLochner.Assets.SimpleSideMenu.SimpleSideMenu

// DanielLochner.Assets.SimpleSideMenu.SimpleSideMenu

// UnityEngine.UI.CanvasScaler

// UnityEngine.UI.CanvasScaler

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_21;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_22;
};

// UnityEngine.UI.Graphic

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// UnityEngine.UI.Selectable

// UnityEngine.UI.Button

// UnityEngine.UI.Button

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_ETC1DefaultUI_37;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_VertScratch_52;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_UVScratch_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Xy_54;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Uv_55;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* ___m_TrackedTexturelessImages_56;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_57;
};

// UnityEngine.UI.Image

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_41;
};

// UnityEngine.UI.Text
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.UI.Text[]
struct TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353  : public RuntimeArray
{
	ALIGN_FIELD (8) Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* m_Items[1];

	inline Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32Enum>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_mB03FAFB4EA9BB010481D103709FB149F26D2D1D0_gshared (UnityEvent_1_t090B79D1A655BCAB01BC91C7409AC476DC731B81* __this, int32_t ___0_arg0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInParent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponentInParent_TisRuntimeObject_m6746D6BB99912B1B509746C993906492F86CD119_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T[] UnityEngine.GameObject::GetComponentsInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* GameObject_GetComponentsInChildren_TisRuntimeObject_m6F69570C0224EE6620FD43C4DDB0F0AB152A1B20_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`2<System.Int32Enum,System.Int32Enum>::Invoke(T0,T1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_2_Invoke_m718C68D37B8F6926533C5530D2A7ED9A80C537D5_gshared (UnityEvent_2_t0B199A7D77AC76D1AAC960592A617D014E6C54E4* __this, int32_t ___0_arg0, int32_t ___1_arg1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32Enum>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_mB02CA1F5BD6D866640636D18011AC3329058C26B_gshared (UnityEvent_1_t090B79D1A655BCAB01BC91C7409AC476DC731B81* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`2<System.Int32Enum,System.Int32Enum>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_2__ctor_m71FE6B8CDBE4AA9947F0876C455F4D4712A60BA3_gshared (UnityEvent_2_t0B199A7D77AC76D1AAC960592A617D014E6C54E4* __this, const RuntimeMethod* method) ;

// UnityEngine.Vector2 UnityEngine.RectTransform::get_anchoredPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_b, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// UnityEngine.Rect UnityEngine.RectTransform::get_rect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m94F967AB31244EACE68C3BE1DD85B69ED3334C0E (RuntimeObject* ___0_message, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_context, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.UI.Button>()
inline Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Void DanielLochner.Assets.SimpleSideMenu.SimpleSideMenu::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleSideMenu_Initialize_m806F05F2709471F0D7B4B869127E73019D71CBC4 (SimpleSideMenu_tCB0D978B855B8B0DF5CDF28638208B0BF0033259* __this, const RuntimeMethod* method) ;
// System.Boolean DanielLochner.Assets.SimpleSideMenu.SimpleSideMenu::get_IsValidConfig()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimpleSideMenu_get_IsValidConfig_m73048B423F61665C84AC7C0F54396BBD54A01B07 (SimpleSideMenu_tCB0D978B855B8B0DF5CDF28638208B0BF0033259* __this, const RuntimeMethod* method) ;
// System.Void DanielLochner.Assets.SimpleSideMenu.SimpleSideMenu::Setup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleSideMenu_Setup_mCDDEEA06F1A1C3890C53C7179136E1DA22894841 (SimpleSideMenu_tCB0D978B855B8B0DF5CDF28638208B0BF0033259* __this, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void DanielLochner.Assets.SimpleSideMenu.SimpleSideMenu::HandleState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleSideMenu_HandleState_m3A135D9B46AE0618FD28A6A6C08F14F078AC1AC9 (SimpleSideMenu_tCB0D978B855B8B0DF5CDF28638208B0BF0033259* __this, const RuntimeMethod* method) ;
// System.Void DanielLochner.Assets.SimpleSideMenu.SimpleSideMenu::HandleOverlay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleSideMenu_HandleOverlay_m132B3724E350F0912A1BF374F0A98D7FDB8F6B16 (SimpleSideMenu_tCB0D978B855B8B0DF5CDF28638208B0BF0033259* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::get_pointerEnter()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* PointerEventData_get_pointerEnter_m6CE76D5C0C36C4666CDDE348B57885C52D495A4B_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::get_position()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) ;
// UnityEngine.RenderMode UnityEngine.Canvas::get_renderMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Canvas_get_renderMode_m1BEF259548C6CAD27E4466F31D20752D246688CC (Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* __this, const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.Canvas::get_worldCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Canvas_get_worldCamera_mD2FDE13B61A5213F4E64B40008EB0A8D2D07B853 (Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.RectTransformUtility::ScreenPointToLocalPointInRectangle(UnityEngine.RectTransform,UnityEngine.Vector2,UnityEngine.Camera,UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RectTransformUtility_ScreenPointToLocalPointInRectangle_m01A75CAFB6D1019F1C65BA606635EAB10AF31195 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___0_rect, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_screenPoint, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___2_cam, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___3_localPoint, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// DanielLochner.Assets.SimpleSideMenu.State DanielLochner.Assets.SimpleSideMenu.SimpleSideMenu::get_TargetState()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SimpleSideMenu_get_TargetState_m98186EED40E0C6476C6F1ABE69FB0A8189BD9BB6_inline (SimpleSideMenu_tCB0D978B855B8B0DF5CDF28638208B0BF0033259* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_b, const RuntimeMethod* method) ;
// System.Single System.Math::Min(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Math_Min_mE913811A2F7566294BF4649A434282634E7254B3 (float ___0_val1, float ___1_val2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) ;
// System.Single System.Math::Max(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Math_Max_mB55ACEA482E7F67E61496C4C7C54FE0BB7BE78EA (float ___0_val1, float ___1_val2, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___0_value, float ___1_min, float ___2_max, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_anchoredPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) ;
// DanielLochner.Assets.SimpleSideMenu.State DanielLochner.Assets.SimpleSideMenu.SimpleSideMenu::get_CurrentState()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SimpleSideMenu_get_CurrentState_mDF0DF68DB8C65AF82ECFDF85A741A5395232494E_inline (SimpleSideMenu_tCB0D978B855B8B0DF5CDF28638208B0BF0033259* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<DanielLochner.Assets.SimpleSideMenu.State>::Invoke(T0)
inline void UnityEvent_1_Invoke_mCD6DF2E7C4184A832B81787F0AF0C82E561D2BC9 (UnityEvent_1_t4F4D71D8A21119887E211188B8312B8332CDED73* __this, int32_t ___0_arg0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t4F4D71D8A21119887E211188B8312B8332CDED73*, int32_t, const RuntimeMethod*))UnityEvent_1_Invoke_mB03FAFB4EA9BB010481D103709FB149F26D2D1D0_gshared)(__this, ___0_arg0, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_v, const RuntimeMethod* method) ;
// System.Void DanielLochner.Assets.SimpleSideMenu.SimpleSideMenu::Open()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleSideMenu_Open_mD3B9D07C54629497301394D74D800CA41376AFFE (SimpleSideMenu_tCB0D978B855B8B0DF5CDF28638208B0BF0033259* __this, const RuntimeMethod* method) ;
// System.Void DanielLochner.Assets.SimpleSideMenu.SimpleSideMenu::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleSideMenu_Close_m88E9188B4C8DC27C108B4428346DAA00CF797C0F (SimpleSideMenu_tCB0D978B855B8B0DF5CDF28638208B0BF0033259* __this, const RuntimeMethod* method) ;
// System.Single DanielLochner.Assets.SimpleSideMenu.SimpleSideMenu::get_StateProgress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SimpleSideMenu_get_StateProgress_mB30C2CCA595504DEBDB9FDE0BD71956E6E0DD6EF (SimpleSideMenu_tCB0D978B855B8B0DF5CDF28638208B0BF0033259* __this, const RuntimeMethod* method) ;
// System.Void DanielLochner.Assets.SimpleSideMenu.SimpleSideMenu::ToggleState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleSideMenu_ToggleState_m1F4F50820971936D8E325EC70F21A85020675545 (SimpleSideMenu_tCB0D978B855B8B0DF5CDF28638208B0BF0033259* __this, const RuntimeMethod* method) ;
// System.Void DanielLochner.Assets.SimpleSideMenu.SimpleSideMenu::SetState(DanielLochner.Assets.SimpleSideMenu.State)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleSideMenu_SetState_m8BFAB600E007F74D08F58D6544D7ABADC835B0DD (SimpleSideMenu_tCB0D978B855B8B0DF5CDF28638208B0BF0033259* __this, int32_t ___0_state, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.RectTransform>()
inline RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponentInParent<UnityEngine.Canvas>()
inline Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* Component_GetComponentInParent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m5FB554DD7C0F662DAB84C0F292B221CAE3F0A5B3 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInParent_TisRuntimeObject_m6746D6BB99912B1B509746C993906492F86CD119_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.UI.CanvasScaler>()
inline CanvasScaler_t3BC095205EAD308CF3EAC27136A73387AC32FC3B* Component_GetComponent_TisCanvasScaler_t3BC095205EAD308CF3EAC27136A73387AC32FC3B_m82FD65AA44C2243A4866779598E55571D3576DAE (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  CanvasScaler_t3BC095205EAD308CF3EAC27136A73387AC32FC3B* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Single UnityEngine.Camera::get_fieldOfView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_fieldOfView_m9A93F17BBF89F496AE231C21817AFD1C1E833FBB (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Canvas::set_planeDistance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Canvas_set_planeDistance_m730278089C7546A512385305C1F250C6477C279E (Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.Camera::get_farClipPlane()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_farClipPlane_m1D7128B85B5DB866F75FBE8CEBA48335716B67BD (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Canvas::get_planeDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Canvas_get_planeDistance_mA37842426E220D0CDA03606E674B581F67BC3338 (Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_farClipPlane(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_farClipPlane_m84EF39B09573168734613481FD979BFF31C60139 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, float ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Rect::get_size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Rect_get_size_mFB990FFC0FE0152179C8C74A59E4AC258CB44267 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_sizeDelta(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_anchorMin(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchorMin_m931442ABE3368D6D4309F43DF1D64AB64B0F52E3 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_anchorMax(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchorMax_m52829ABEDD229ABD3DA20BCA676FA1DCA4A39B7D (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_pivot(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_pivot_m79D0177D383D432A93C2615F1932B739B1C6E146 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) ;
// System.Void DanielLochner.Assets.SimpleSideMenu.SimpleSideMenu::set_CurrentState(DanielLochner.Assets.SimpleSideMenu.State)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SimpleSideMenu_set_CurrentState_mB64C389137E36D15B9BCE201C127A0ACB7B53AE4_inline (SimpleSideMenu_tCB0D978B855B8B0DF5CDF28638208B0BF0033259* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131 (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___0_call, const RuntimeMethod* method) ;
// T[] UnityEngine.GameObject::GetComponentsInChildren<UnityEngine.UI.Text>()
inline TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353* GameObject_GetComponentsInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m531D23F4AD96C7E6896EE31533EAFE928D694C21 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponentsInChildren_TisRuntimeObject_m6F69570C0224EE6620FD43C4DDB0F0AB152A1B20_gshared)(__this, method);
}
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Transform::GetSiblingIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_GetSiblingIndex_m45EE497589C36D1FBED87FB802BD80A95CE68575 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetSiblingIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetSiblingIndex_m8A3B81F08B93991C05BFA89ADA2146836C4FC4B2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.GameObject::get_layer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GameObject_get_layer_m108902B9C89E9F837CE06B9942AA42307450FEAF (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::set_layer(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_set_layer_m6E1AF478A2CC86BD222B96317BEB78B7D89B18D0 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<UnityEngine.RectTransform>()
inline RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* GameObject_AddComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m771EB78FF8813B5AFF21AC0D252E5461943E6388 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// UnityEngine.Vector2 UnityEngine.Vector2::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_one_m9097EB8DC23C26118A591AF16702796C3EF51DFB_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_offsetMin(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_offsetMin_m07F38B4105C7CA9CC9FBDC9ED0DB008602880AB9 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_offsetMax(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_offsetMax_m5514D09D86516F2C0E25FA6D11A3A4274D3D002D (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<UnityEngine.UI.Image>()
inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* GameObject_AddComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA327C9E1CA12BC531D587E7567F2067B96E6B6A0 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void UnityEngine.Material::.ctor(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material__ctor_mFCC42FB90257F1E8F7516A8640A79C465A39961C (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___0_source, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___0_name, int32_t ___1_value, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_clear_m02E023A7D396B973288B3915F6F24FBF7E0DC81D_inline (const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<UnityEngine.UI.Button>()
inline Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* GameObject_AddComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_m60FA17F75591FF93A15D1D1FE5969B8CB9E5FAAC (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void UnityEngine.UI.Selectable::set_transition(UnityEngine.UI.Selectable/Transition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Selectable_set_transition_m67F9584736EB6891A314C9804489368C430F0F59 (Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_unscaledDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_unscaledDeltaTime_mF057EECA857E5C0F90A3F910D26D3EE59F27C4B5 (const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::Lerp(UnityEngine.Vector2,UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_Lerp_m1A36103F7967F653A929556E26E6D052C298C00C_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_b, float ___2_t, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`2<DanielLochner.Assets.SimpleSideMenu.State,DanielLochner.Assets.SimpleSideMenu.State>::Invoke(T0,T1)
inline void UnityEvent_2_Invoke_m59C85672CA5C41CA0DE2EA8F93D0C8E3847CDDB4 (UnityEvent_2_t376FE0489E50AD7FFE5CD9DEE752167A2904D102* __this, int32_t ___0_arg0, int32_t ___1_arg1, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_2_t376FE0489E50AD7FFE5CD9DEE752167A2904D102*, int32_t, int32_t, const RuntimeMethod*))UnityEvent_2_Invoke_m718C68D37B8F6926533C5530D2A7ED9A80C537D5_gshared)(__this, ___0_arg0, ___1_arg1, method);
}
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) ;
// System.Void DanielLochner.Assets.SimpleSideMenu.SimpleSideMenu::set_TargetState(DanielLochner.Assets.SimpleSideMenu.State)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SimpleSideMenu_set_TargetState_m59B43F9DBA479E61064CE67B8A5E98A59B807D22_inline (SimpleSideMenu_tCB0D978B855B8B0DF5CDF28638208B0BF0033259* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<DanielLochner.Assets.SimpleSideMenu.State>::.ctor()
inline void UnityEvent_1__ctor_m74CB6ED924F4B916B6583CB537ECA623F6BA60AD (UnityEvent_1_t4F4D71D8A21119887E211188B8312B8332CDED73* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t4F4D71D8A21119887E211188B8312B8332CDED73*, const RuntimeMethod*))UnityEvent_1__ctor_mB02CA1F5BD6D866640636D18011AC3329058C26B_gshared)(__this, method);
}
// System.Void UnityEngine.Events.UnityEvent`2<DanielLochner.Assets.SimpleSideMenu.State,DanielLochner.Assets.SimpleSideMenu.State>::.ctor()
inline void UnityEvent_2__ctor_m3F639E40BCCBCC2FC3DE07E7C362E9A49BBC34B9 (UnityEvent_2_t376FE0489E50AD7FFE5CD9DEE752167A2904D102* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_2_t376FE0489E50AD7FFE5CD9DEE752167A2904D102*, const RuntimeMethod*))UnityEvent_2__ctor_m71FE6B8CDBE4AA9947F0876C455F4D4712A60BA3_gshared)(__this, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) ;
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
// DanielLochner.Assets.SimpleSideMenu.Placement DanielLochner.Assets.SimpleSideMenu.SimpleSideMenu::get_Placement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SimpleSideMenu_get_Placement_m4C67662C0813445D0AF60C7F1032EFA3CA7A689F (SimpleSideMenu_tCB0D978B855B8B0DF5CDF28638208B0BF0033259* __this, const RuntimeMethod* method) 
{
	{
		// get => placement;
		int32_t L_0 = __this->___placement_4;
		return L_0;
	}
}
// System.Void DanielLochner.Assets.SimpleSideMenu.SimpleSideMenu::set_Placement(DanielLochner.Assets.SimpleSideMenu.Placement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleSideMenu_set_Placement_m9BD225CF2FEEDC7E09760EDE5A404F90668C94FC (SimpleSideMenu_tCB0D978B855B8B0DF5CDF28638208B0BF0033259* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// set => placement = value;
		int32_t L_0 = ___0_value;
		__this->___placement_4 = L_0;
		return;
	}
}
// DanielLochner.Assets.SimpleSideMenu.State DanielLochner.Assets.SimpleSideMenu.SimpleSideMenu::get_DefaultState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SimpleSideMenu_get_DefaultState_m8255C2622E5D596BF98C579FB79339C601637164 (SimpleSideMenu_tCB0D978B855B8B0DF5CDF28638208B0BF0033259* __this, const RuntimeMethod* method) 
{
	{
		// get => defaultState;
		int32_t L_0 = __this->___defaultState_5;
		return L_0;
	}
}
// System.Void DanielLochner.Assets.SimpleSideMenu.SimpleSideMenu::set_DefaultState(DanielLochner.Assets.SimpleSideMenu.State)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleSideMenu_set_DefaultState_m7DC71954A2D595683576484DB4AF93B84D87492D (SimpleSideMenu_tCB0D978B855B8B0DF5CDF28638208B0BF0033259* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// set => defaultState = value;
		int32_t L_0 = ___0_value;
		__this->___defaultState_5 = L_0;
		return;
	}
}
// System.Single DanielLochner.Assets.SimpleSideMenu.SimpleSideMenu::get_TransitionSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SimpleSideMenu_get_TransitionSpeed_mAFC84FF62E0950D9D8AE5340433975BE84A20882 (SimpleSideMenu_tCB0D978B855B8B0DF5CDF28638208B0BF0033259* __this, const RuntimeMethod* method) 
{
	{
		// get => transitionSpeed;
		float L_0 = __this->___transitionSpeed_6;
		return L_0;
	}
}
// System.Void DanielLochner.Assets.SimpleSideMenu.SimpleSideMenu::set_TransitionSpeed(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleSideMenu_set_TransitionSpeed_m07CA1DF27DA84BA390E0100EB27F1E9B12C37472 (SimpleSideMenu_tCB0D978B855B8B0DF5CDF28638208B0BF0033259* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// set => transitionSpeed = value;
		float L_0 = ___0_value;
		__this->___transitionSpeed_6 = L_0;
		return;
	}
}
// System.Single DanielLochner.Assets.SimpleSideMenu.SimpleSideMenu::get_ThresholdDragSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SimpleSideMenu_get_ThresholdDragSpeed_m342D2C81F99CCDBBED70F932DB9B01EB11E84F12 (SimpleSideMenu_tCB0D978B855B8B0DF5CDF28638208B0BF0033259* __this, const RuntimeMethod* method) 
{
	{
		// get => thresholdDragSpeed;
		float L_0 = __this->___thresholdDragSpeed_7;
		return L_0;
	}
}
// System.Void DanielLochner.Assets.SimpleSideMenu.SimpleSideMenu::set_ThresholdDragSpeed(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleSideMenu_set_ThresholdDragSpeed_m13162AA451B9CE0DD0D4F445B5B05EC94EC251AE (SimpleSideMenu_tCB0D978B855B8B0DF5CDF28638208B0BF0033259* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// set => thresholdDragSpeed = value;
		float L_0 = ___0_value;
		__this->___thresholdDragSpeed_7 = L_0;
		return;
	}
}
// System.Single DanielLochner.Assets.SimpleSideMenu.SimpleSideMenu::get_ThresholdDraggedFraction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SimpleSideMenu_get_ThresholdDraggedFraction_mB89D0713165017C084D97CF9869FA70B3E223DA5 (SimpleSideMenu_tCB0D978B855B8B0DF5CDF28638208B0BF0033259* __this, const RuntimeMethod* method) 
{
	{
		// get => thresholdDraggedFraction;
		float L_0 = __this->___thresholdDraggedFraction_8;
		return L_0;
	}
}
// System.Void DanielLochner.Assets.SimpleSideMenu.SimpleSideMenu::set_ThresholdDraggedFraction(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleSideMenu_set_ThresholdDraggedFraction_m8F711B7B656ACF76B33094B2652F9946CEF126CF (SimpleSideMenu_tCB0D978B855B8B0DF5CDF28638208B0BF0033259* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// set => thresholdDraggedFraction = value;
		float L_0 = ___0_value;
		__this->___thresholdDraggedFraction_8 = L_0;
		return;
	}
}
// UnityEngine.GameObject DanielLochner.Assets.SimpleSideMenu.SimpleSideMenu::get_Handle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* SimpleSideMenu_get_Handle_m3FA3158633D7F4E0D0140345DF6A6D76042F99CA (SimpleSideMenu_tCB0D978B855B8B0DF5CDF28638208B0BF0033259* __this, const RuntimeMethod* method) 
{
	{
		// get => handle;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___handle_9;
		return L_0;
	}
}
// System.Void DanielLochner.Assets.SimpleSideMenu.SimpleSideMenu::set_Handle(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleSideMenu_set_Handle_mCC2071C6B961A1E91ABAD0B4C109352CC2C007E9 (SimpleSideMenu_tCB0D978B855B8B0DF5CDF28638208B0BF0033259* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_value, const RuntimeMethod* method) 
{
	{
		// set => handle = value;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___0_value;
		__this->___handle_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___handle_9), (void*)L_0);
		return;
	}
}
// System.Boolean DanielLochner.Assets.SimpleSideMenu.SimpleSideMenu::get_HandleDraggable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimpleSideMenu_get_HandleDraggable_m9B882A6128D8C980329CBEB95CC641B8281C68E0 (SimpleSideMenu_tCB0D978B855B8B0DF5CDF28638208B0BF0033259* __this, const RuntimeMethod* method) 
{
	{
		// get => isHandleDraggable;
		bool L_0 = __this->___isHandleDraggable_10;
		return L_0;
	}
}
// System.Void DanielLochner.Assets.SimpleSideMenu.SimpleSideMenu::set_HandleDraggable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleSideMenu_set_HandleDraggable_mB8F83489DBB1701B70741DD95BA7460F454FDCAE (SimpleSideMenu_tCB0D978B855B8B0DF5CDF28638208B0BF0033259* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// set => isHandleDraggable = value;
		bool L_0 = ___0_value;
		__this->___isHandleDraggable_10 = L_0;
		return;
	}
}
// System.Boolean DanielLochner.Assets.SimpleSideMenu.SimpleSideMenu::get_MenuDraggable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimpleSideMenu_get_MenuDraggable_m9762D2C947F9E1B404FAA0FBCC676C6EC438E4C7 (SimpleSideMenu_tCB0D978B855B8B0DF5CDF28638208B0BF0033259* __this, const RuntimeMethod* method) 
{
	{
		// get => isMenuDraggable;
		bool L_0 = __this->___isMenuDraggable_11;
		return L_0;
	}
}
// System.Void DanielLochner.Assets.SimpleSideMenu.SimpleSideMenu::set_MenuDraggable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleSideMenu_set_MenuDraggable_mEC338C967EACCE122E7975D9F7B04ED5A7A683D7 (SimpleSideMenu_tCB0D978B855B8B0DF5CDF28638208B0BF0033259* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// set => isMenuDraggable = value;
		bool L_0 = ___0_value;
		__this->___isMenuDraggable_11 = L_0;
		return;
	}
}
// System.Boolean DanielLochner.Assets.SimpleSideMenu.SimpleSideMenu::get_HandleToggleStateOnPressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimpleSideMenu_get_HandleToggleStateOnPressed_m75FBEB7E4812FEA2180AF6D9A5CA9CDC1D6B6235 (SimpleSideMenu_tCB0D978B855B8B0DF5CDF28638208B0BF0033259* __this, const RuntimeMethod* method) 
{
	{
		// get => handleToggleStateOnPressed;
		bool L_0 = __this->___handleToggleStateOnPressed_12;
		return L_0;
	}
}
// System.Void DanielLochner.Assets.SimpleSideMenu.SimpleSideMenu::set_HandleToggleStateOnPressed(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleSideMenu_set_HandleToggleStateOnPressed_m587AF47B084AC2146F5ED2599C0713043550ACF9 (SimpleSideMenu_tCB0D978B855B8B0DF5CDF28638208B0BF0033259* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// set => handleToggleStateOnPressed = value;
		bool L_0 = ___0_value;
		__this->___handleToggleStateOnPressed_12 = L_0;
		return;
	}
}
// System.Boolean DanielLochner.Assets.SimpleSideMenu.SimpleSideMenu::get_UseOverlay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimpleSideMenu_get_UseOverlay_m2902909460E81F97C61C77A407B3E6C459E3A143 (SimpleSideMenu_tCB0D978B855B8B0DF5CDF28638208B0BF0033259* __this, const RuntimeMethod* method) 
{
	{
		// get => useOverlay;
		bool L_0 = __this->___useOverlay_13;
		return L_0;
	}
}
// System.Void DanielLochner.Assets.SimpleSideMenu.SimpleSideMenu::set_UseOverlay(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleSideMenu_set_UseOverlay_mAB87D54166DEBDEFE15220912FB921F1C51555A1 (SimpleSideMenu_tCB0D978B855B8B0DF5CDF28638208B0BF0033259* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// set => useOverlay = value;
		bool L_0 = ___0_value;
		__this->___useOverlay_13 = L_0;
		return;
	}
}
// UnityEngine.Color DanielLochner.Assets.SimpleSideMenu.SimpleSideMenu::get_OverlayColour()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F SimpleSideMenu_get_OverlayColour_m3F70C9CFD72ECB3E143D8BA26B82CCF8C57F4FF8 (SimpleSideMenu_tCB0D978B855B8B0DF5CDF28638208B0BF0033259* __this, const RuntimeMethod* method) 
{
	{
		// get => overlayColour;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___overlayColour_14;
		return L_0;
	}
}
// System.Void DanielLochner.Assets.SimpleSideMenu.SimpleSideMenu::set_OverlayColour(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleSideMenu_set_OverlayColour_m5610F2BB609F2333FEB5A24D813D3BDDA898D142 (SimpleSideMenu_tCB0D978B855B8B0DF5CDF28638208B0BF0033259* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method) 
{
	{
		// set => overlayColour = value;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___0_value;
		__this->___overlayColour_14 = L_0;
		return;
	}
}
// System.Boolean DanielLochner.Assets.SimpleSideMenu.SimpleSideMenu::get_UseBlur()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimpleSideMenu_get_UseBlur_m869F7B13DF0431995A309F170121746E875AD81E (SimpleSideMenu_tCB0D978B855B8B0DF5CDF28638208B0BF0033259* __this, const RuntimeMethod* method) 
{
	{
		// get => useBlur;
		bool L_0 = __this->___useBlur_15;
		return L_0;
	}
}
// System.Void DanielLochner.Assets.SimpleSideMenu.SimpleSideMenu::set_UseBlur(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleSideMenu_set_UseBlur_mE959F938AD90405BE7AE8D1A1EB3D50D5B3086A2 (SimpleSideMenu_tCB0D978B855B8B0DF5CDF28638208B0BF0033259* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// set => useBlur = value;
		bool L_0 = ___0_value;
		__this->___useBlur_15 = L_0;
		return;
	}
}
// System.Int32 DanielLochner.Assets.SimpleSideMenu.SimpleSideMenu::get_BlurRadius()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SimpleSideMenu_get_BlurRadius_m3B7AF69EFBB06FB917149BAEF0AAFBC6B6CCDFFF (SimpleSideMenu_tCB0D978B855B8B0DF5CDF28638208B0BF0033259* __this, const RuntimeMethod* method) 
{
	{
		// get => blurRadius;
		int32_t L_0 = __this->___blurRadius_17;
		return L_0;
	}
}
// System.Void DanielLochner.Assets.SimpleSideMenu.SimpleSideMenu::set_BlurRadius(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleSideMenu_set_BlurRadius_mF980D2EB1EE55FDDF409594EBD458129AAEB72F6 (SimpleSideMenu_tCB0D978B855B8B0DF5CDF28638208B0BF0033259* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// set => blurRadius = value;
		int32_t L_0 = ___0_value;
		__this->___blurRadius_17 = L_0;
		return;
	}
}
// System.Boolean DanielLochner.Assets.SimpleSideMenu.SimpleSideMenu::get_OverlayCloseOnPressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimpleSideMenu_get_OverlayCloseOnPressed_m059FA31FBB026C0919C798C1229D60EA1A7763A3 (SimpleSideMenu_tCB0D978B855B8B0DF5CDF28638208B0BF0033259* __this, const RuntimeMethod* method) 
{
	{
		// get => overlayCloseOnPressed;
		bool L_0 = __this->___overlayCloseOnPressed_18;
		return L_0;
	}
}
// System.Void DanielLochner.Assets.SimpleSideMenu.SimpleSideMenu::set_OverlayCloseOnPressed(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleSideMenu_set_OverlayCloseOnPressed_mBBB25F9145135140E1A789D938718ED8DA98CF5D (SimpleSideMenu_tCB0D978B855B8B0DF5CDF28638208B0BF0033259* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// set => overlayCloseOnPressed = value;
		bool L_0 = ___0_value;
		__this->___overlayCloseOnPressed_18 = L_0;
		return;
	}
}
// UnityEngine.Events.UnityEvent`1<DanielLochner.Assets.SimpleSideMenu.State> DanielLochner.Assets.SimpleSideMenu.SimpleSideMenu::get_OnStateSelecting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityEvent_1_t4F4D71D8A21119887E211188B8312B8332CDED73* SimpleSideMenu_get_OnStateSelecting_m5044A0D59BE283C2D549F3F7936482846C04F4F5 (SimpleSideMenu_tCB0D978B855B8B0DF5CDF28638208B0BF0033259* __this, const RuntimeMethod* method) 
{
	{
		// get => onStateSelecting;
		UnityEvent_1_t4F4D71D8A21119887E211188B8312B8332CDED73* L_0 = __this->___onStateSelecting_19;
		return L_0;
	}
}
// UnityEngine.Events.UnityEvent`1<DanielLochner.Assets.SimpleSideMenu.State> DanielLochner.Assets.SimpleSideMenu.SimpleSideMenu::get_OnStateSelected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityEvent_1_t4F4D71D8A21119887E211188B8312B8332CDED73* SimpleSideMenu_get_OnStateSelected_m7A3D7092E828B2CEBA089C63DA4B3941120A7047 (SimpleSideMenu_tCB0D978B855B8B0DF5CDF28638208B0BF0033259* __this, const RuntimeMethod* method) 
{
	{
		// get => onStateSelected;
		UnityEvent_1_t4F4D71D8A21119887E211188B8312B8332CDED73* L_0 = __this->___onStateSelected_20;
		return L_0;
	}
}
// UnityEngine.Events.UnityEvent`2<DanielLochner.Assets.SimpleSideMenu.State,DanielLochner.Assets.SimpleSideMenu.State> DanielLochner.Assets.SimpleSideMenu.SimpleSideMenu::get_OnStateChanging()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityEvent_2_t376FE0489E50AD7FFE5CD9DEE752167A2904D102* SimpleSideMenu_get_OnStateChanging_m81E038D8519D31C2D7E4D9026FE5E929E08D1E83 (SimpleSideMenu_tCB0D978B855B8B0DF5CDF28638208B0BF0033259* __this, const RuntimeMethod* method) 
{
	{
		// get => onStateChanged;
		UnityEvent_2_t376FE0489E50AD7FFE5CD9DEE752167A2904D102* L_0 = __this->___onStateChanged_22;
		return L_0;
	}
}
// UnityEngine.Events.UnityEvent`2<DanielLochner.Assets.SimpleSideMenu.State,DanielLochner.Assets.SimpleSideMenu.State> DanielLochner.Assets.SimpleSideMenu.SimpleSideMenu::get_OnStateChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityEvent_2_t376FE0489E50AD7FFE5CD9DEE752167A2904D102* SimpleSideMenu_get_OnStateChanged_m66A035EFD9FCE4A06FD8D186AB497BB6F4C40FA3 (SimpleSideMenu_tCB0D978B855B8B0DF5CDF28638208B0BF0033259* __this, const RuntimeMethod* method) 
{
	{
		// get => onStateChanged;
		UnityEvent_2_t376FE0489E50AD7FFE5CD9DEE752167A2904D102* L_0 = __this->___onStateChanged_22;
		return L_0;
	}
}
// DanielLochner.Assets.SimpleSideMenu.State DanielLochner.Assets.SimpleSideMenu.SimpleSideMenu::get_CurrentState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SimpleSideMenu_get_CurrentState_mDF0DF68DB8C65AF82ECFDF85A741A5395232494E (SimpleSideMenu_tCB0D978B855B8B0DF5CDF28638208B0BF0033259* __this, const RuntimeMethod* method) 
{
	{
		// get;
		int32_t L_0 = __this->___U3CCurrentStateU3Ek__BackingField_41;
		return L_0;
	}
}
// System.Void DanielLochner.Assets.SimpleSideMenu.SimpleSideMenu::set_CurrentState(DanielLochner.Assets.SimpleSideMenu.State)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleSideMenu_set_CurrentState_mB64C389137E36D15B9BCE201C127A0ACB7B53AE4 (SimpleSideMenu_tCB0D978B855B8B0DF5CDF28638208B0BF0033259* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// private set;
		int32_t L_0 = ___0_value;
		__this->___U3CCurrentStateU3Ek__BackingField_41 = L_0;
		return;
	}
}
// DanielLochner.Assets.SimpleSideMenu.State DanielLochner.Assets.SimpleSideMenu.SimpleSideMenu::get_TargetState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SimpleSideMenu_get_TargetState_m98186EED40E0C6476C6F1ABE69FB0A8189BD9BB6 (SimpleSideMenu_tCB0D978B855B8B0DF5CDF28638208B0BF0033259* __this, const RuntimeMethod* method) 
{
	{
		// get;
		int32_t L_0 = __this->___U3CTargetStateU3Ek__BackingField_42;
		return L_0;
	}
}
// System.Void DanielLochner.Assets.SimpleSideMenu.SimpleSideMenu::set_TargetState(DanielLochner.Assets.SimpleSideMenu.State)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleSideMenu_set_TargetState_m59B43F9DBA479E61064CE67B8A5E98A59B807D22 (SimpleSideMenu_tCB0D978B855B8B0DF5CDF28638208B0BF0033259* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// private set;
		int32_t L_0 = ___0_value;
		__this->___U3CTargetStateU3Ek__BackingField_42 = L_0;
		return;
	}
}
// System.Single DanielLochner.Assets.SimpleSideMenu.SimpleSideMenu::get_StateProgress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SimpleSideMenu_get_StateProgress_mB30C2CCA595504DEBDB9FDE0BD71956E6E0DD6EF (SimpleSideMenu_tCB0D978B855B8B0DF5CDF28638208B0BF0033259* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	int32_t G_B3_0 = 0;
	float G_B5_0 = 0.0f;
	float G_B4_0 = 0.0f;
	float G_B6_0 = 0.0f;
	float G_B6_1 = 0.0f;
	{
		// bool isLeftOrRight = (placement == Placement.Left) || (placement == Placement.Right);
		int32_t L_0 = __this->___placement_4;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_1 = __this->___placement_4;
		G_B3_0 = ((((int32_t)L_1) == ((int32_t)1))? 1 : 0);
		goto IL_0015;
	}

IL_0014:
	{
		G_B3_0 = 1;
	}

IL_0015:
	{
		V_0 = (bool)G_B3_0;
		// return ((rectTransform.anchoredPosition - closedPosition).magnitude / (isLeftOrRight ? rectTransform.rect.width : rectTransform.rect.height));
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_2 = __this->___rectTransform_35;
		NullCheck(L_2);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680(L_2, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = __this->___closedPosition_26;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_3, L_4, NULL);
		V_1 = L_5;
		float L_6;
		L_6 = Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline((&V_1), NULL);
		bool L_7 = V_0;
		G_B4_0 = L_6;
		if (L_7)
		{
			G_B5_0 = L_6;
			goto IL_004c;
		}
	}
	{
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_8 = __this->___rectTransform_35;
		NullCheck(L_8);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_9;
		L_9 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_8, NULL);
		V_2 = L_9;
		float L_10;
		L_10 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&V_2), NULL);
		G_B6_0 = L_10;
		G_B6_1 = G_B4_0;
		goto IL_005f;
	}

IL_004c:
	{
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_11 = __this->___rectTransform_35;
		NullCheck(L_11);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_12;
		L_12 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_11, NULL);
		V_2 = L_12;
		float L_13;
		L_13 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&V_2), NULL);
		G_B6_0 = L_13;
		G_B6_1 = G_B5_0;
	}

IL_005f:
	{
		V_3 = ((float)(G_B6_1/G_B6_0));
		goto IL_0063;
	}

IL_0063:
	{
		// }
		float L_14 = V_3;
		return L_14;
	}
}
// System.Boolean DanielLochner.Assets.SimpleSideMenu.SimpleSideMenu::get_IsValidConfig()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimpleSideMenu_get_IsValidConfig_m73048B423F61665C84AC7C0F54396BBD54A01B07 (SimpleSideMenu_tCB0D978B855B8B0DF5CDF28638208B0BF0033259* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral866B861B6C080C35A3290E9D160870B1328CC301);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E6F5806732308563F765198B3AF0BFC2BD916AB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA081128306F2DC05B07AD2FF98775C7D1611D07A);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	int32_t G_B6_0 = 0;
	int32_t G_B11_0 = 0;
	{
		// bool valid = true;
		V_0 = (bool)1;
		// if (transitionSpeed <= 0)
		float L_0 = __this->___transitionSpeed_6;
		V_1 = (bool)((((int32_t)((!(((float)L_0) <= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_002c;
		}
	}
	{
		// Debug.LogError("<b>[SimpleSideMenu]</b> Transition speed cannot be less than or equal to zero.", gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m94F967AB31244EACE68C3BE1DD85B69ED3334C0E(_stringLiteral866B861B6C080C35A3290E9D160870B1328CC301, L_2, NULL);
		// valid = false;
		V_0 = (bool)0;
	}

IL_002c:
	{
		// if (handle != null && isHandleDraggable && handle.transform.parent != rectTransform)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___handle_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_005f;
		}
	}
	{
		bool L_5 = __this->___isHandleDraggable_10;
		if (!L_5)
		{
			goto IL_005f;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___handle_9;
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_6, NULL);
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_7, NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_9 = __this->___rectTransform_35;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_8, L_9, NULL);
		G_B6_0 = ((int32_t)(L_10));
		goto IL_0060;
	}

IL_005f:
	{
		G_B6_0 = 0;
	}

IL_0060:
	{
		V_2 = (bool)G_B6_0;
		bool L_11 = V_2;
		if (!L_11)
		{
			goto IL_0079;
		}
	}
	{
		// Debug.LogError("<b>[SimpleSideMenu]</b> The drag handle must be a child of the side menu in order for it to be draggable.", gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
		L_12 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m94F967AB31244EACE68C3BE1DD85B69ED3334C0E(_stringLiteralA081128306F2DC05B07AD2FF98775C7D1611D07A, L_12, NULL);
		// valid = false;
		V_0 = (bool)0;
	}

IL_0079:
	{
		// if (handleToggleStateOnPressed && handle.GetComponent<Button>() == null)
		bool L_13 = __this->___handleToggleStateOnPressed_12;
		if (!L_13)
		{
			goto IL_0094;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = __this->___handle_9;
		NullCheck(L_14);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_15;
		L_15 = GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290(L_14, GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_15, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		G_B11_0 = ((int32_t)(L_16));
		goto IL_0095;
	}

IL_0094:
	{
		G_B11_0 = 0;
	}

IL_0095:
	{
		V_3 = (bool)G_B11_0;
		bool L_17 = V_3;
		if (!L_17)
		{
			goto IL_00ae;
		}
	}
	{
		// Debug.LogError("<b>[SimpleSideMenu]</b> The handle must have a \"Button\" component attached to it in order for it to be able to toggle the state of the side menu when pressed.", gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18;
		L_18 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m94F967AB31244EACE68C3BE1DD85B69ED3334C0E(_stringLiteral8E6F5806732308563F765198B3AF0BFC2BD916AB, L_18, NULL);
		// valid = false;
		V_0 = (bool)0;
	}

IL_00ae:
	{
		// return valid;
		bool L_19 = V_0;
		V_4 = L_19;
		goto IL_00b3;
	}

IL_00b3:
	{
		// }
		bool L_20 = V_4;
		return L_20;
	}
}
// System.Void DanielLochner.Assets.SimpleSideMenu.SimpleSideMenu::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleSideMenu_Awake_mB760CFB936A9471BE649E39F11DBDC1E255D2DD2 (SimpleSideMenu_tCB0D978B855B8B0DF5CDF28638208B0BF0033259* __this, const RuntimeMethod* method) 
{
	{
		// Initialize();
		SimpleSideMenu_Initialize_m806F05F2709471F0D7B4B869127E73019D71CBC4(__this, NULL);
		// }
		return;
	}
}
// System.Void DanielLochner.Assets.SimpleSideMenu.SimpleSideMenu::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleSideMenu_Start_m10D05B2C8F53840D92A235D3F80C8F19F19563E8 (SimpleSideMenu_tCB0D978B855B8B0DF5CDF28638208B0BF0033259* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (IsValidConfig)
		bool L_0;
		L_0 = SimpleSideMenu_get_IsValidConfig_m73048B423F61665C84AC7C0F54396BBD54A01B07(__this, NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		// Setup();
		SimpleSideMenu_Setup_mCDDEEA06F1A1C3890C53C7179136E1DA22894841(__this, NULL);
		goto IL_0022;
	}

IL_0016:
	{
		// throw new Exception("Invalid configuration.");
		Exception_t* L_2 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4FAD7856BCE41FCDF1BF95ED0F7570B9C075A4CA)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SimpleSideMenu_Start_m10D05B2C8F53840D92A235D3F80C8F19F19563E8_RuntimeMethod_var)));
	}

IL_0022:
	{
		// }
		return;
	}
}
// System.Void DanielLochner.Assets.SimpleSideMenu.SimpleSideMenu::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleSideMenu_Update_m8E9F77E282422CCBC483A45F8EEDE2F587320E29 (SimpleSideMenu_tCB0D978B855B8B0DF5CDF28638208B0BF0033259* __this, const RuntimeMethod* method) 
{
	{
		// HandleState();
		SimpleSideMenu_HandleState_m3A135D9B46AE0618FD28A6A6C08F14F078AC1AC9(__this, NULL);
		// HandleOverlay();
		SimpleSideMenu_HandleOverlay_m132B3724E350F0912A1BF374F0A98D7FDB8F6B16(__this, NULL);
		// }
		return;
	}
}
// System.Void DanielLochner.Assets.SimpleSideMenu.SimpleSideMenu::OnInitializePotentialDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleSideMenu_OnInitializePotentialDrag_m4D7C9B4484CB9FFB0C67A6892B159E7F45B223F0 (SimpleSideMenu_tCB0D978B855B8B0DF5CDF28638208B0BF0033259* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_eventData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SimpleSideMenu_tCB0D978B855B8B0DF5CDF28638208B0BF0033259* G_B2_0 = NULL;
	SimpleSideMenu_tCB0D978B855B8B0DF5CDF28638208B0BF0033259* G_B1_0 = NULL;
	SimpleSideMenu_tCB0D978B855B8B0DF5CDF28638208B0BF0033259* G_B6_0 = NULL;
	SimpleSideMenu_tCB0D978B855B8B0DF5CDF28638208B0BF0033259* G_B4_0 = NULL;
	SimpleSideMenu_tCB0D978B855B8B0DF5CDF28638208B0BF0033259* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	SimpleSideMenu_tCB0D978B855B8B0DF5CDF28638208B0BF0033259* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	SimpleSideMenu_tCB0D978B855B8B0DF5CDF28638208B0BF0033259* G_B7_1 = NULL;
	{
		// isPotentialDrag = (isHandleDraggable && eventData.pointerEnter == handle) || (isMenuDraggable && eventData.pointerEnter == gameObject);
		bool L_0 = __this->___isHandleDraggable_10;
		G_B1_0 = __this;
		if (!L_0)
		{
			G_B2_0 = __this;
			goto IL_001d;
		}
	}
	{
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_1 = ___0_eventData;
		NullCheck(L_1);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = PointerEventData_get_pointerEnter_m6CE76D5C0C36C4666CDDE348B57885C52D495A4B_inline(L_1, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___handle_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, L_3, NULL);
		G_B2_0 = G_B1_0;
		if (L_4)
		{
			G_B6_0 = G_B1_0;
			goto IL_003b;
		}
	}

IL_001d:
	{
		bool L_5 = __this->___isMenuDraggable_11;
		G_B3_0 = G_B2_0;
		if (!L_5)
		{
			G_B4_0 = G_B2_0;
			goto IL_0038;
		}
	}
	{
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_6 = ___0_eventData;
		NullCheck(L_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = PointerEventData_get_pointerEnter_m6CE76D5C0C36C4666CDDE348B57885C52D495A4B_inline(L_6, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_7, L_8, NULL);
		G_B5_0 = ((int32_t)(L_9));
		G_B5_1 = G_B3_0;
		goto IL_0039;
	}

IL_0038:
	{
		G_B5_0 = 0;
		G_B5_1 = G_B4_0;
	}

IL_0039:
	{
		G_B7_0 = G_B5_0;
		G_B7_1 = G_B5_1;
		goto IL_003c;
	}

IL_003b:
	{
		G_B7_0 = 1;
		G_B7_1 = G_B6_0;
	}

IL_003c:
	{
		NullCheck(G_B7_1);
		G_B7_1->___isPotentialDrag_25 = (bool)G_B7_0;
		// }
		return;
	}
}
// System.Void DanielLochner.Assets.SimpleSideMenu.SimpleSideMenu::OnBeginDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleSideMenu_OnBeginDrag_m06746097731405A33A09BB0388AC47B03B8C6867 (SimpleSideMenu_tCB0D978B855B8B0DF5CDF28638208B0BF0033259* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_eventData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* G_B2_1 = NULL;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* G_B1_1 = NULL;
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* G_B3_0 = NULL;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 G_B3_1;
	memset((&G_B3_1), 0, sizeof(G_B3_1));
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* G_B3_2 = NULL;
	{
		// isDragging = isPotentialDrag;
		bool L_0 = __this->___isPotentialDrag_25;
		__this->___isDragging_24 = L_0;
		// if (RectTransformUtility.ScreenPointToLocalPointInRectangle(canvasRectTransform, eventData.position, canvas.renderMode == RenderMode.ScreenSpaceOverlay ? null : canvas.worldCamera, out Vector2 mouseLocalPosition))
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1 = __this->___canvasRectTransform_36;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_2 = ___0_eventData;
		NullCheck(L_2);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline(L_2, NULL);
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_4 = __this->___canvas_40;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = Canvas_get_renderMode_m1BEF259548C6CAD27E4466F31D20752D246688CC(L_4, NULL);
		G_B1_0 = L_3;
		G_B1_1 = L_1;
		if (!L_5)
		{
			G_B2_0 = L_3;
			G_B2_1 = L_1;
			goto IL_0033;
		}
	}
	{
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_6 = __this->___canvas_40;
		NullCheck(L_6);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_7;
		L_7 = Canvas_get_worldCamera_mD2FDE13B61A5213F4E64B40008EB0A8D2D07B853(L_6, NULL);
		G_B3_0 = L_7;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_0034;
	}

IL_0033:
	{
		G_B3_0 = ((Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184*)(NULL));
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_0034:
	{
		il2cpp_codegen_runtime_class_init_inline(RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = RectTransformUtility_ScreenPointToLocalPointInRectangle_m01A75CAFB6D1019F1C65BA606635EAB10AF31195(G_B3_2, G_B3_1, G_B3_0, (&V_0), NULL);
		V_1 = L_8;
		bool L_9 = V_1;
		if (!L_9)
		{
			goto IL_0048;
		}
	}
	{
		// startPosition = mouseLocalPosition;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10 = V_0;
		__this->___startPosition_28 = L_10;
	}

IL_0048:
	{
		// previousPosition = rectTransform.position;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_11 = __this->___rectTransform_35;
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_11, NULL);
		__this->___previousPosition_32 = L_12;
		// }
		return;
	}
}
// System.Void DanielLochner.Assets.SimpleSideMenu.SimpleSideMenu::OnDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleSideMenu_OnDrag_m264412CEF1D8E011537CD416FBECE3A97FBA9D6D (SimpleSideMenu_tCB0D978B855B8B0DF5CDF28638208B0BF0033259* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_eventData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mCD6DF2E7C4184A832B81787F0AF0C82E561D2BC9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_6;
	memset((&V_6), 0, sizeof(V_6));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* G_B3_1 = NULL;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* G_B2_1 = NULL;
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* G_B4_0 = NULL;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 G_B4_1;
	memset((&G_B4_1), 0, sizeof(G_B4_1));
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* G_B4_2 = NULL;
	int32_t G_B6_0 = 0;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 G_B10_0;
	memset((&G_B10_0), 0, sizeof(G_B10_0));
	float G_B14_0 = 0.0f;
	float G_B18_0 = 0.0f;
	{
		// if (isDragging && RectTransformUtility.ScreenPointToLocalPointInRectangle(canvasRectTransform, eventData.position, canvas.renderMode == RenderMode.ScreenSpaceOverlay ? null : canvas.worldCamera, out Vector2 mouseLocalPosition))
		bool L_0 = __this->___isDragging_24;
		if (!L_0)
		{
			goto IL_0039;
		}
	}
	{
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1 = __this->___canvasRectTransform_36;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_2 = ___0_eventData;
		NullCheck(L_2);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline(L_2, NULL);
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_4 = __this->___canvas_40;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = Canvas_get_renderMode_m1BEF259548C6CAD27E4466F31D20752D246688CC(L_4, NULL);
		G_B2_0 = L_3;
		G_B2_1 = L_1;
		if (!L_5)
		{
			G_B3_0 = L_3;
			G_B3_1 = L_1;
			goto IL_002f;
		}
	}
	{
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_6 = __this->___canvas_40;
		NullCheck(L_6);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_7;
		L_7 = Canvas_get_worldCamera_mD2FDE13B61A5213F4E64B40008EB0A8D2D07B853(L_6, NULL);
		G_B4_0 = L_7;
		G_B4_1 = G_B2_0;
		G_B4_2 = G_B2_1;
		goto IL_0030;
	}

IL_002f:
	{
		G_B4_0 = ((Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184*)(NULL));
		G_B4_1 = G_B3_0;
		G_B4_2 = G_B3_1;
	}

IL_0030:
	{
		il2cpp_codegen_runtime_class_init_inline(RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = RectTransformUtility_ScreenPointToLocalPointInRectangle_m01A75CAFB6D1019F1C65BA606635EAB10AF31195(G_B4_2, G_B4_1, G_B4_0, (&V_0), NULL);
		G_B6_0 = ((int32_t)(L_8));
		goto IL_003a;
	}

IL_0039:
	{
		G_B6_0 = 0;
	}

IL_003a:
	{
		V_1 = (bool)G_B6_0;
		bool L_9 = V_1;
		if (!L_9)
		{
			goto IL_0187;
		}
	}
	{
		// Vector2 displacement = ((TargetState == State.Closed) ? closedPosition : openPosition) + (mouseLocalPosition - startPosition);
		int32_t L_10;
		L_10 = SimpleSideMenu_get_TargetState_m98186EED40E0C6476C6F1ABE69FB0A8189BD9BB6_inline(__this, NULL);
		if (!L_10)
		{
			goto IL_0052;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11 = __this->___openPosition_27;
		G_B10_0 = L_11;
		goto IL_0058;
	}

IL_0052:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12 = __this->___closedPosition_26;
		G_B10_0 = L_12;
	}

IL_0058:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14 = __this->___startPosition_28;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15;
		L_15 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_13, L_14, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16;
		L_16 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(G_B10_0, L_15, NULL);
		V_2 = L_16;
		// float x = (placement == Placement.Left || placement == Placement.Right)  ? displacement.x : rectTransform.anchoredPosition.x;
		int32_t L_17 = __this->___placement_4;
		if (!L_17)
		{
			goto IL_008d;
		}
	}
	{
		int32_t L_18 = __this->___placement_4;
		if ((((int32_t)L_18) == ((int32_t)1)))
		{
			goto IL_008d;
		}
	}
	{
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_19 = __this->___rectTransform_35;
		NullCheck(L_19);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_20;
		L_20 = RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680(L_19, NULL);
		float L_21 = L_20.___x_0;
		G_B14_0 = L_21;
		goto IL_0093;
	}

IL_008d:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_22 = V_2;
		float L_23 = L_22.___x_0;
		G_B14_0 = L_23;
	}

IL_0093:
	{
		V_3 = G_B14_0;
		// float y = (placement == Placement.Top  || placement == Placement.Bottom) ? displacement.y : rectTransform.anchoredPosition.y;
		int32_t L_24 = __this->___placement_4;
		if ((((int32_t)L_24) == ((int32_t)2)))
		{
			goto IL_00b8;
		}
	}
	{
		int32_t L_25 = __this->___placement_4;
		if ((((int32_t)L_25) == ((int32_t)3)))
		{
			goto IL_00b8;
		}
	}
	{
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_26 = __this->___rectTransform_35;
		NullCheck(L_26);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_27;
		L_27 = RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680(L_26, NULL);
		float L_28 = L_27.___y_1;
		G_B18_0 = L_28;
		goto IL_00be;
	}

IL_00b8:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_29 = V_2;
		float L_30 = L_29.___y_1;
		G_B18_0 = L_30;
	}

IL_00be:
	{
		V_4 = G_B18_0;
		// Vector2 min = new Vector2(Math.Min(closedPosition.x, openPosition.x), Math.Min(closedPosition.y, openPosition.y));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_31 = (&__this->___closedPosition_26);
		float L_32 = L_31->___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_33 = (&__this->___openPosition_27);
		float L_34 = L_33->___x_0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		float L_35;
		L_35 = Math_Min_mE913811A2F7566294BF4649A434282634E7254B3(L_32, L_34, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_36 = (&__this->___closedPosition_26);
		float L_37 = L_36->___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_38 = (&__this->___openPosition_27);
		float L_39 = L_38->___y_1;
		float L_40;
		L_40 = Math_Min_mE913811A2F7566294BF4649A434282634E7254B3(L_37, L_39, NULL);
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_5), L_35, L_40, NULL);
		// Vector2 max = new Vector2(Math.Max(closedPosition.x, openPosition.x), Math.Max(closedPosition.y, openPosition.y));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_41 = (&__this->___closedPosition_26);
		float L_42 = L_41->___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_43 = (&__this->___openPosition_27);
		float L_44 = L_43->___x_0;
		float L_45;
		L_45 = Math_Max_mB55ACEA482E7F67E61496C4C7C54FE0BB7BE78EA(L_42, L_44, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_46 = (&__this->___closedPosition_26);
		float L_47 = L_46->___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_48 = (&__this->___openPosition_27);
		float L_49 = L_48->___y_1;
		float L_50;
		L_50 = Math_Max_mB55ACEA482E7F67E61496C4C7C54FE0BB7BE78EA(L_47, L_49, NULL);
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_6), L_45, L_50, NULL);
		// rectTransform.anchoredPosition = new Vector2(Mathf.Clamp(x, min.x, max.x), Mathf.Clamp(y, min.y, max.y));
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_51 = __this->___rectTransform_35;
		float L_52 = V_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_53 = V_5;
		float L_54 = L_53.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_55 = V_6;
		float L_56 = L_55.___x_0;
		float L_57;
		L_57 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_52, L_54, L_56, NULL);
		float L_58 = V_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_59 = V_5;
		float L_60 = L_59.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_61 = V_6;
		float L_62 = L_61.___y_1;
		float L_63;
		L_63 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_58, L_60, L_62, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_64;
		memset((&L_64), 0, sizeof(L_64));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_64), L_57, L_63, /*hidden argument*/NULL);
		NullCheck(L_51);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_51, L_64, NULL);
		// onStateSelecting.Invoke(CurrentState);
		UnityEvent_1_t4F4D71D8A21119887E211188B8312B8332CDED73* L_65 = __this->___onStateSelecting_19;
		int32_t L_66;
		L_66 = SimpleSideMenu_get_CurrentState_mDF0DF68DB8C65AF82ECFDF85A741A5395232494E_inline(__this, NULL);
		NullCheck(L_65);
		UnityEvent_1_Invoke_mCD6DF2E7C4184A832B81787F0AF0C82E561D2BC9(L_65, L_66, UnityEvent_1_Invoke_mCD6DF2E7C4184A832B81787F0AF0C82E561D2BC9_RuntimeMethod_var);
	}

IL_0187:
	{
		// dragVelocity = (rectTransform.position - previousPosition) / (Time.time - previousTime);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_67 = __this->___rectTransform_35;
		NullCheck(L_67);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_68;
		L_68 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_67, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_69 = __this->___previousPosition_32;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_70;
		L_70 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_68, L_69, NULL);
		float L_71;
		L_71 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_72 = __this->___previousTime_23;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_73;
		L_73 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_70, ((float)il2cpp_codegen_subtract(L_71, L_72)), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_74;
		L_74 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_73, NULL);
		__this->___dragVelocity_30 = L_74;
		// previousPosition = rectTransform.position;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_75 = __this->___rectTransform_35;
		NullCheck(L_75);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_76;
		L_76 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_75, NULL);
		__this->___previousPosition_32 = L_76;
		// previousTime = Time.time;
		float L_77;
		L_77 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___previousTime_23 = L_77;
		// }
		return;
	}
}
// System.Void DanielLochner.Assets.SimpleSideMenu.SimpleSideMenu::OnEndDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleSideMenu_OnEndDrag_m46D32D13C141058EAA994943D8F86536488FD033 (SimpleSideMenu_tCB0D978B855B8B0DF5CDF28638208B0BF0033259* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_eventData, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	float V_7 = 0.0f;
	bool V_8 = false;
	float G_B23_0 = 0.0f;
	{
		// isDragging = false;
		__this->___isDragging_24 = (bool)0;
		// releaseVelocity = dragVelocity;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___dragVelocity_30;
		__this->___releaseVelocity_29 = L_0;
		// if (releaseVelocity.magnitude > thresholdDragSpeed)
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_1 = (&__this->___releaseVelocity_29);
		float L_2;
		L_2 = Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline(L_1, NULL);
		float L_3 = __this->___thresholdDragSpeed_7;
		V_0 = (bool)((((float)L_2) > ((float)L_3))? 1 : 0);
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_010f;
		}
	}
	{
		// switch (placement)
		int32_t L_5 = __this->___placement_4;
		V_2 = L_5;
		int32_t L_6 = V_2;
		V_1 = L_6;
		int32_t L_7 = V_1;
		switch (L_7)
		{
			case 0:
			{
				goto IL_0053;
			}
			case 1:
			{
				goto IL_0082;
			}
			case 2:
			{
				goto IL_00b0;
			}
			case 3:
			{
				goto IL_00de;
			}
		}
	}
	{
		goto IL_010c;
	}

IL_0053:
	{
		// if (releaseVelocity.x > 0)
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_8 = (&__this->___releaseVelocity_29);
		float L_9 = L_8->___x_0;
		V_3 = (bool)((((float)L_9) > ((float)(0.0f)))? 1 : 0);
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_0074;
		}
	}
	{
		// Open();
		SimpleSideMenu_Open_mD3B9D07C54629497301394D74D800CA41376AFFE(__this, NULL);
		goto IL_007d;
	}

IL_0074:
	{
		// Close();
		SimpleSideMenu_Close_m88E9188B4C8DC27C108B4428346DAA00CF797C0F(__this, NULL);
	}

IL_007d:
	{
		// break;
		goto IL_010c;
	}

IL_0082:
	{
		// if (releaseVelocity.x < 0)
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_11 = (&__this->___releaseVelocity_29);
		float L_12 = L_11->___x_0;
		V_4 = (bool)((((float)L_12) < ((float)(0.0f)))? 1 : 0);
		bool L_13 = V_4;
		if (!L_13)
		{
			goto IL_00a5;
		}
	}
	{
		// Open();
		SimpleSideMenu_Open_mD3B9D07C54629497301394D74D800CA41376AFFE(__this, NULL);
		goto IL_00ae;
	}

IL_00a5:
	{
		// Close();
		SimpleSideMenu_Close_m88E9188B4C8DC27C108B4428346DAA00CF797C0F(__this, NULL);
	}

IL_00ae:
	{
		// break;
		goto IL_010c;
	}

IL_00b0:
	{
		// if (releaseVelocity.y < 0)
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_14 = (&__this->___releaseVelocity_29);
		float L_15 = L_14->___y_1;
		V_5 = (bool)((((float)L_15) < ((float)(0.0f)))? 1 : 0);
		bool L_16 = V_5;
		if (!L_16)
		{
			goto IL_00d3;
		}
	}
	{
		// Open();
		SimpleSideMenu_Open_mD3B9D07C54629497301394D74D800CA41376AFFE(__this, NULL);
		goto IL_00dc;
	}

IL_00d3:
	{
		// Close();
		SimpleSideMenu_Close_m88E9188B4C8DC27C108B4428346DAA00CF797C0F(__this, NULL);
	}

IL_00dc:
	{
		// break;
		goto IL_010c;
	}

IL_00de:
	{
		// if (releaseVelocity.y > 0)
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_17 = (&__this->___releaseVelocity_29);
		float L_18 = L_17->___y_1;
		V_6 = (bool)((((float)L_18) > ((float)(0.0f)))? 1 : 0);
		bool L_19 = V_6;
		if (!L_19)
		{
			goto IL_0101;
		}
	}
	{
		// Open();
		SimpleSideMenu_Open_mD3B9D07C54629497301394D74D800CA41376AFFE(__this, NULL);
		goto IL_010a;
	}

IL_0101:
	{
		// Close();
		SimpleSideMenu_Close_m88E9188B4C8DC27C108B4428346DAA00CF797C0F(__this, NULL);
	}

IL_010a:
	{
		// break;
		goto IL_010c;
	}

IL_010c:
	{
		goto IL_015a;
	}

IL_010f:
	{
		// float nextStateProgress = (TargetState == State.Open) ? 1 - StateProgress : StateProgress;
		int32_t L_20;
		L_20 = SimpleSideMenu_get_TargetState_m98186EED40E0C6476C6F1ABE69FB0A8189BD9BB6_inline(__this, NULL);
		if ((((int32_t)L_20) == ((int32_t)1)))
		{
			goto IL_0121;
		}
	}
	{
		float L_21;
		L_21 = SimpleSideMenu_get_StateProgress_mB30C2CCA595504DEBDB9FDE0BD71956E6E0DD6EF(__this, NULL);
		G_B23_0 = L_21;
		goto IL_012d;
	}

IL_0121:
	{
		float L_22;
		L_22 = SimpleSideMenu_get_StateProgress_mB30C2CCA595504DEBDB9FDE0BD71956E6E0DD6EF(__this, NULL);
		G_B23_0 = ((float)il2cpp_codegen_subtract((1.0f), L_22));
	}

IL_012d:
	{
		V_7 = G_B23_0;
		// if (nextStateProgress > thresholdDraggedFraction)
		float L_23 = V_7;
		float L_24 = __this->___thresholdDraggedFraction_8;
		V_8 = (bool)((((float)L_23) > ((float)L_24))? 1 : 0);
		bool L_25 = V_8;
		if (!L_25)
		{
			goto IL_014a;
		}
	}
	{
		// ToggleState();
		SimpleSideMenu_ToggleState_m1F4F50820971936D8E325EC70F21A85020675545(__this, NULL);
		goto IL_0159;
	}

IL_014a:
	{
		// SetState(CurrentState);
		int32_t L_26;
		L_26 = SimpleSideMenu_get_CurrentState_mDF0DF68DB8C65AF82ECFDF85A741A5395232494E_inline(__this, NULL);
		SimpleSideMenu_SetState_m8BFAB600E007F74D08F58D6544D7ABADC835B0DD(__this, L_26, NULL);
	}

IL_0159:
	{
	}

IL_015a:
	{
		// }
		return;
	}
}
// System.Void DanielLochner.Assets.SimpleSideMenu.SimpleSideMenu::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleSideMenu_Initialize_m806F05F2709471F0D7B4B869127E73019D71CBC4 (SimpleSideMenu_tCB0D978B855B8B0DF5CDF28638208B0BF0033259* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInParent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m5FB554DD7C0F662DAB84C0F292B221CAE3F0A5B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCanvasScaler_t3BC095205EAD308CF3EAC27136A73387AC32FC3B_m82FD65AA44C2243A4866779598E55571D3576DAE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// rectTransform = GetComponent<RectTransform>();
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0;
		L_0 = Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4(__this, Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		__this->___rectTransform_35 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rectTransform_35), (void*)L_0);
		// canvas = GetComponentInParent<Canvas>();
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_1;
		L_1 = Component_GetComponentInParent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m5FB554DD7C0F662DAB84C0F292B221CAE3F0A5B3(__this, Component_GetComponentInParent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m5FB554DD7C0F662DAB84C0F292B221CAE3F0A5B3_RuntimeMethod_var);
		__this->___canvas_40 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___canvas_40), (void*)L_1);
		// if (canvas != null)
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_2 = __this->___canvas_40;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_3;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_004d;
		}
	}
	{
		// canvasScaler = canvas.GetComponent<CanvasScaler>();
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_5 = __this->___canvas_40;
		NullCheck(L_5);
		CanvasScaler_t3BC095205EAD308CF3EAC27136A73387AC32FC3B* L_6;
		L_6 = Component_GetComponent_TisCanvasScaler_t3BC095205EAD308CF3EAC27136A73387AC32FC3B_m82FD65AA44C2243A4866779598E55571D3576DAE(L_5, Component_GetComponent_TisCanvasScaler_t3BC095205EAD308CF3EAC27136A73387AC32FC3B_m82FD65AA44C2243A4866779598E55571D3576DAE_RuntimeMethod_var);
		__this->___canvasScaler_39 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___canvasScaler_39), (void*)L_6);
		// canvasRectTransform = canvas.GetComponent<RectTransform>();
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_7 = __this->___canvas_40;
		NullCheck(L_7);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_8;
		L_8 = Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4(L_7, Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		__this->___canvasRectTransform_36 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___canvasRectTransform_36), (void*)L_8);
	}

IL_004d:
	{
		// }
		return;
	}
}
// System.Void DanielLochner.Assets.SimpleSideMenu.SimpleSideMenu::Setup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleSideMenu_Setup_mCDDEEA06F1A1C3890C53C7179136E1DA22894841 (SimpleSideMenu_tCB0D978B855B8B0DF5CDF28638208B0BF0033259* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_m60FA17F75591FF93A15D1D1FE5969B8CB9E5FAAC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA327C9E1CA12BC531D587E7567F2067B96E6B6A0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m771EB78FF8813B5AFF21AC0D252E5461943E6388_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentsInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m531D23F4AD96C7E6896EE31533EAFE928D694C21_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleSideMenu_ToggleState_m1F4F50820971936D8E325EC70F21A85020675545_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleSideMenu_U3CSetupU3Eb__107_0_m6A4F5C6480EB10E0B50A5237485D2AFEC1069772_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral353DD056B628EBD9C028B3B73EF568B6104818BD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD5DE9A4E0E5478896EDE5CE4AD9A3293B62CD972);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE5A1D96CE41BD597A30172C890508C2BB5810152);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	bool V_9 = false;
	bool V_10 = false;
	TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353* V_11 = NULL;
	int32_t V_12 = 0;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* V_13 = NULL;
	bool V_14 = false;
	bool V_15 = false;
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* V_16 = NULL;
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* V_17 = NULL;
	bool V_18 = false;
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* V_19 = NULL;
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* G_B12_0 = NULL;
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* G_B11_0 = NULL;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 G_B13_0;
	memset((&G_B13_0), 0, sizeof(G_B13_0));
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* G_B13_1 = NULL;
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* G_B27_0 = NULL;
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* G_B26_0 = NULL;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F G_B28_0;
	memset((&G_B28_0), 0, sizeof(G_B28_0));
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* G_B28_1 = NULL;
	{
		// if (canvas.renderMode == RenderMode.ScreenSpaceCamera)
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_0 = __this->___canvas_40;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Canvas_get_renderMode_m1BEF259548C6CAD27E4466F31D20752D246688CC(L_0, NULL);
		V_3 = (bool)((((int32_t)L_1) == ((int32_t)1))? 1 : 0);
		bool L_2 = V_3;
		if (!L_2)
		{
			goto IL_00a6;
		}
	}
	{
		// canvas.planeDistance = (canvasRectTransform.rect.height / 2f) / Mathf.Tan((canvas.worldCamera.fieldOfView / 2f) * Mathf.Deg2Rad);
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_3 = __this->___canvas_40;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_4 = __this->___canvasRectTransform_36;
		NullCheck(L_4);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_5;
		L_5 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_4, NULL);
		V_4 = L_5;
		float L_6;
		L_6 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&V_4), NULL);
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_7 = __this->___canvas_40;
		NullCheck(L_7);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_8;
		L_8 = Canvas_get_worldCamera_mD2FDE13B61A5213F4E64B40008EB0A8D2D07B853(L_7, NULL);
		NullCheck(L_8);
		float L_9;
		L_9 = Camera_get_fieldOfView_m9A93F17BBF89F496AE231C21817AFD1C1E833FBB(L_8, NULL);
		float L_10;
		L_10 = tanf(((float)il2cpp_codegen_multiply(((float)(L_9/(2.0f))), (0.0174532924f))));
		NullCheck(L_3);
		Canvas_set_planeDistance_m730278089C7546A512385305C1F250C6477C279E(L_3, ((float)(((float)(L_6/(2.0f)))/L_10)), NULL);
		// if (canvas.worldCamera.farClipPlane < canvas.planeDistance)
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_11 = __this->___canvas_40;
		NullCheck(L_11);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_12;
		L_12 = Canvas_get_worldCamera_mD2FDE13B61A5213F4E64B40008EB0A8D2D07B853(L_11, NULL);
		NullCheck(L_12);
		float L_13;
		L_13 = Camera_get_farClipPlane_m1D7128B85B5DB866F75FBE8CEBA48335716B67BD(L_12, NULL);
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_14 = __this->___canvas_40;
		NullCheck(L_14);
		float L_15;
		L_15 = Canvas_get_planeDistance_mA37842426E220D0CDA03606E674B581F67BC3338(L_14, NULL);
		V_5 = (bool)((((float)L_13) < ((float)L_15))? 1 : 0);
		bool L_16 = V_5;
		if (!L_16)
		{
			goto IL_00a5;
		}
	}
	{
		// canvas.worldCamera.farClipPlane = Mathf.Ceil(canvas.planeDistance);
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_17 = __this->___canvas_40;
		NullCheck(L_17);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_18;
		L_18 = Canvas_get_worldCamera_mD2FDE13B61A5213F4E64B40008EB0A8D2D07B853(L_17, NULL);
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_19 = __this->___canvas_40;
		NullCheck(L_19);
		float L_20;
		L_20 = Canvas_get_planeDistance_mA37842426E220D0CDA03606E674B581F67BC3338(L_19, NULL);
		float L_21;
		L_21 = ceilf(L_20);
		NullCheck(L_18);
		Camera_set_farClipPlane_m84EF39B09573168734613481FD979BFF31C60139(L_18, L_21, NULL);
	}

IL_00a5:
	{
	}

IL_00a6:
	{
		// Vector2 anchorMin = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_22;
		L_22 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		V_0 = L_22;
		// Vector2 anchorMax = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_23;
		L_23 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		V_1 = L_23;
		// Vector2 pivot = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_24;
		L_24 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		V_2 = L_24;
		// switch (placement)
		int32_t L_25 = __this->___placement_4;
		V_7 = L_25;
		int32_t L_26 = V_7;
		V_6 = L_26;
		int32_t L_27 = V_6;
		switch (L_27)
		{
			case 0:
			{
				goto IL_00e0;
			}
			case 1:
			{
				goto IL_0167;
			}
			case 2:
			{
				goto IL_01f4;
			}
			case 3:
			{
				goto IL_0281;
			}
		}
	}
	{
		goto IL_0305;
	}

IL_00e0:
	{
		// anchorMin = new Vector2(0, 0.5f);
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_0), (0.0f), (0.5f), NULL);
		// anchorMax = new Vector2(0, 0.5f);
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_1), (0.0f), (0.5f), NULL);
		// pivot = new Vector2(1, 0.5f);
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_2), (1.0f), (0.5f), NULL);
		// closedPosition = new Vector2(0, rectTransform.localPosition.y);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_28 = __this->___rectTransform_35;
		NullCheck(L_28);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_28, NULL);
		float L_30 = L_29.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_31;
		memset((&L_31), 0, sizeof(L_31));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_31), (0.0f), L_30, /*hidden argument*/NULL);
		__this->___closedPosition_26 = L_31;
		// openPosition = new Vector2(rectTransform.rect.width, rectTransform.localPosition.y);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_32 = __this->___rectTransform_35;
		NullCheck(L_32);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_33;
		L_33 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_32, NULL);
		V_4 = L_33;
		float L_34;
		L_34 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&V_4), NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_35 = __this->___rectTransform_35;
		NullCheck(L_35);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36;
		L_36 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_35, NULL);
		float L_37 = L_36.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_38;
		memset((&L_38), 0, sizeof(L_38));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_38), L_34, L_37, /*hidden argument*/NULL);
		__this->___openPosition_27 = L_38;
		// break;
		goto IL_0305;
	}

IL_0167:
	{
		// anchorMin = new Vector2(1, 0.5f);
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_0), (1.0f), (0.5f), NULL);
		// anchorMax = new Vector2(1, 0.5f);
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_1), (1.0f), (0.5f), NULL);
		// pivot = new Vector2(0, 0.5f);
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_2), (0.0f), (0.5f), NULL);
		// closedPosition = new Vector2(0, rectTransform.localPosition.y);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_39 = __this->___rectTransform_35;
		NullCheck(L_39);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40;
		L_40 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_39, NULL);
		float L_41 = L_40.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_42;
		memset((&L_42), 0, sizeof(L_42));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_42), (0.0f), L_41, /*hidden argument*/NULL);
		__this->___closedPosition_26 = L_42;
		// openPosition = new Vector2(-1 * rectTransform.rect.width, rectTransform.localPosition.y);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_43 = __this->___rectTransform_35;
		NullCheck(L_43);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_44;
		L_44 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_43, NULL);
		V_4 = L_44;
		float L_45;
		L_45 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&V_4), NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_46 = __this->___rectTransform_35;
		NullCheck(L_46);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		L_47 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_46, NULL);
		float L_48 = L_47.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_49;
		memset((&L_49), 0, sizeof(L_49));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_49), ((float)il2cpp_codegen_multiply((-1.0f), L_45)), L_48, /*hidden argument*/NULL);
		__this->___openPosition_27 = L_49;
		// break;
		goto IL_0305;
	}

IL_01f4:
	{
		// anchorMin = new Vector2(0.5f, 1);
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_0), (0.5f), (1.0f), NULL);
		// anchorMax = new Vector2(0.5f, 1);
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_1), (0.5f), (1.0f), NULL);
		// pivot = new Vector2(0.5f, 0);
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_2), (0.5f), (0.0f), NULL);
		// closedPosition = new Vector2(rectTransform.localPosition.x, 0);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_50 = __this->___rectTransform_35;
		NullCheck(L_50);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_51;
		L_51 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_50, NULL);
		float L_52 = L_51.___x_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_53;
		memset((&L_53), 0, sizeof(L_53));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_53), L_52, (0.0f), /*hidden argument*/NULL);
		__this->___closedPosition_26 = L_53;
		// openPosition = new Vector2(rectTransform.localPosition.x, -1 * rectTransform.rect.height);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_54 = __this->___rectTransform_35;
		NullCheck(L_54);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_55;
		L_55 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_54, NULL);
		float L_56 = L_55.___x_2;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_57 = __this->___rectTransform_35;
		NullCheck(L_57);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_58;
		L_58 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_57, NULL);
		V_4 = L_58;
		float L_59;
		L_59 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&V_4), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_60;
		memset((&L_60), 0, sizeof(L_60));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_60), L_56, ((float)il2cpp_codegen_multiply((-1.0f), L_59)), /*hidden argument*/NULL);
		__this->___openPosition_27 = L_60;
		// break;
		goto IL_0305;
	}

IL_0281:
	{
		// anchorMin = new Vector2(0.5f, 0);
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_0), (0.5f), (0.0f), NULL);
		// anchorMax = new Vector2(0.5f, 0);
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_1), (0.5f), (0.0f), NULL);
		// pivot = new Vector2(0.5f, 1);
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_2), (0.5f), (1.0f), NULL);
		// closedPosition = new Vector2(rectTransform.localPosition.x, 0);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_61 = __this->___rectTransform_35;
		NullCheck(L_61);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_62;
		L_62 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_61, NULL);
		float L_63 = L_62.___x_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_64;
		memset((&L_64), 0, sizeof(L_64));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_64), L_63, (0.0f), /*hidden argument*/NULL);
		__this->___closedPosition_26 = L_64;
		// openPosition = new Vector2(rectTransform.localPosition.x, rectTransform.rect.height);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_65 = __this->___rectTransform_35;
		NullCheck(L_65);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_66;
		L_66 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_65, NULL);
		float L_67 = L_66.___x_2;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_68 = __this->___rectTransform_35;
		NullCheck(L_68);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_69;
		L_69 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_68, NULL);
		V_4 = L_69;
		float L_70;
		L_70 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&V_4), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_71;
		memset((&L_71), 0, sizeof(L_71));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_71), L_67, L_70, /*hidden argument*/NULL);
		__this->___openPosition_27 = L_71;
		// break;
		goto IL_0305;
	}

IL_0305:
	{
		// rectTransform.sizeDelta = rectTransform.rect.size;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_72 = __this->___rectTransform_35;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_73 = __this->___rectTransform_35;
		NullCheck(L_73);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_74;
		L_74 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_73, NULL);
		V_4 = L_74;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_75;
		L_75 = Rect_get_size_mFB990FFC0FE0152179C8C74A59E4AC258CB44267((&V_4), NULL);
		NullCheck(L_72);
		RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5(L_72, L_75, NULL);
		// rectTransform.anchorMin = anchorMin;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_76 = __this->___rectTransform_35;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_77 = V_0;
		NullCheck(L_76);
		RectTransform_set_anchorMin_m931442ABE3368D6D4309F43DF1D64AB64B0F52E3(L_76, L_77, NULL);
		// rectTransform.anchorMax = anchorMax;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_78 = __this->___rectTransform_35;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_79 = V_1;
		NullCheck(L_78);
		RectTransform_set_anchorMax_m52829ABEDD229ABD3DA20BCA676FA1DCA4A39B7D(L_78, L_79, NULL);
		// rectTransform.pivot = pivot;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_80 = __this->___rectTransform_35;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_81 = V_2;
		NullCheck(L_80);
		RectTransform_set_pivot_m79D0177D383D432A93C2615F1932B739B1C6E146(L_80, L_81, NULL);
		// SetState(CurrentState = defaultState);
		int32_t L_82 = __this->___defaultState_5;
		int32_t L_83 = L_82;
		V_8 = L_83;
		SimpleSideMenu_set_CurrentState_mB64C389137E36D15B9BCE201C127A0ACB7B53AE4_inline(__this, L_83, NULL);
		int32_t L_84 = V_8;
		SimpleSideMenu_SetState_m8BFAB600E007F74D08F58D6544D7ABADC835B0DD(__this, L_84, NULL);
		// rectTransform.anchoredPosition = (defaultState == State.Closed) ? closedPosition : openPosition;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_85 = __this->___rectTransform_35;
		int32_t L_86 = __this->___defaultState_5;
		G_B11_0 = L_85;
		if (!L_86)
		{
			G_B12_0 = L_85;
			goto IL_037b;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_87 = __this->___openPosition_27;
		G_B13_0 = L_87;
		G_B13_1 = G_B11_0;
		goto IL_0381;
	}

IL_037b:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_88 = __this->___closedPosition_26;
		G_B13_0 = L_88;
		G_B13_1 = G_B12_0;
	}

IL_0381:
	{
		NullCheck(G_B13_1);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(G_B13_1, G_B13_0, NULL);
		// if (handle != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_89 = __this->___handle_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_90;
		L_90 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_89, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_9 = L_90;
		bool L_91 = V_9;
		if (!L_91)
		{
			goto IL_0416;
		}
	}
	{
		// if (handleToggleStateOnPressed)
		bool L_92 = __this->___handleToggleStateOnPressed_12;
		V_10 = L_92;
		bool L_93 = V_10;
		if (!L_93)
		{
			goto IL_03ca;
		}
	}
	{
		// handle.GetComponent<Button>().onClick.AddListener(ToggleState);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_94 = __this->___handle_9;
		NullCheck(L_94);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_95;
		L_95 = GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290(L_94, GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var);
		NullCheck(L_95);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_96;
		L_96 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C(L_95, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_97 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_97);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_97, __this, (intptr_t)((void*)SimpleSideMenu_ToggleState_m1F4F50820971936D8E325EC70F21A85020675545_RuntimeMethod_var), NULL);
		NullCheck(L_96);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_96, L_97, NULL);
	}

IL_03ca:
	{
		// foreach (Text text in handle.GetComponentsInChildren<Text>())
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_98 = __this->___handle_9;
		NullCheck(L_98);
		TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353* L_99;
		L_99 = GameObject_GetComponentsInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m531D23F4AD96C7E6896EE31533EAFE928D694C21(L_98, GameObject_GetComponentsInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m531D23F4AD96C7E6896EE31533EAFE928D694C21_RuntimeMethod_var);
		V_11 = L_99;
		V_12 = 0;
		goto IL_040d;
	}

IL_03dd:
	{
		// foreach (Text text in handle.GetComponentsInChildren<Text>())
		TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353* L_100 = V_11;
		int32_t L_101 = V_12;
		NullCheck(L_100);
		int32_t L_102 = L_101;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_103 = (L_100)->GetAt(static_cast<il2cpp_array_size_t>(L_102));
		V_13 = L_103;
		// if (text.gameObject != handle) text.raycastTarget = false;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_104 = V_13;
		NullCheck(L_104);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_105;
		L_105 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_104, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_106 = __this->___handle_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_107;
		L_107 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_105, L_106, NULL);
		V_14 = L_107;
		bool L_108 = V_14;
		if (!L_108)
		{
			goto IL_0406;
		}
	}
	{
		// if (text.gameObject != handle) text.raycastTarget = false;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_109 = V_13;
		NullCheck(L_109);
		VirtualActionInvoker1< bool >::Invoke(25 /* System.Void UnityEngine.UI.Graphic::set_raycastTarget(System.Boolean) */, L_109, (bool)0);
	}

IL_0406:
	{
		int32_t L_110 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_110, 1));
	}

IL_040d:
	{
		// foreach (Text text in handle.GetComponentsInChildren<Text>())
		int32_t L_111 = V_12;
		TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353* L_112 = V_11;
		NullCheck(L_112);
		if ((((int32_t)L_111) < ((int32_t)((int32_t)(((RuntimeArray*)L_112)->max_length)))))
		{
			goto IL_03dd;
		}
	}
	{
	}

IL_0416:
	{
		// if (useOverlay)
		bool L_113 = __this->___useOverlay_13;
		V_15 = L_113;
		bool L_114 = V_15;
		if (!L_114)
		{
			goto IL_0657;
		}
	}
	{
		// overlay = new GameObject(gameObject.name + " (Overlay)");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_115;
		L_115 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_115);
		String_t* L_116;
		L_116 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_115, NULL);
		String_t* L_117;
		L_117 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_116, _stringLiteralD5DE9A4E0E5478896EDE5CE4AD9A3293B62CD972, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_118 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_118);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_118, L_117, NULL);
		__this->___overlay_33 = L_118;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___overlay_33), (void*)L_118);
		// overlay.transform.parent = transform.parent;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_119 = __this->___overlay_33;
		NullCheck(L_119);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_120;
		L_120 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_119, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_121;
		L_121 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_121);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_122;
		L_122 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_121, NULL);
		NullCheck(L_120);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_120, L_122, NULL);
		// overlay.transform.localScale = Vector3.one;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_123 = __this->___overlay_33;
		NullCheck(L_123);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_124;
		L_124 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_123, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_125;
		L_125 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		NullCheck(L_124);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_124, L_125, NULL);
		// overlay.transform.SetSiblingIndex(transform.GetSiblingIndex());
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_126 = __this->___overlay_33;
		NullCheck(L_126);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_127;
		L_127 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_126, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_128;
		L_128 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_128);
		int32_t L_129;
		L_129 = Transform_GetSiblingIndex_m45EE497589C36D1FBED87FB802BD80A95CE68575(L_128, NULL);
		NullCheck(L_127);
		Transform_SetSiblingIndex_m8A3B81F08B93991C05BFA89ADA2146836C4FC4B2(L_127, L_129, NULL);
		// overlay.layer = gameObject.layer;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_130 = __this->___overlay_33;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_131;
		L_131 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_131);
		int32_t L_132;
		L_132 = GameObject_get_layer_m108902B9C89E9F837CE06B9942AA42307450FEAF(L_131, NULL);
		NullCheck(L_130);
		GameObject_set_layer_m6E1AF478A2CC86BD222B96317BEB78B7D89B18D0(L_130, L_132, NULL);
		// if (useBlur)
		bool L_133 = __this->___useBlur_15;
		V_18 = L_133;
		bool L_134 = V_18;
		if (!L_134)
		{
			goto IL_05a1;
		}
	}
	{
		// blur = new GameObject(gameObject.name + " (Blur)");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_135;
		L_135 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_135);
		String_t* L_136;
		L_136 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_135, NULL);
		String_t* L_137;
		L_137 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_136, _stringLiteral353DD056B628EBD9C028B3B73EF568B6104818BD, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_138 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_138);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_138, L_137, NULL);
		__this->___blur_34 = L_138;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___blur_34), (void*)L_138);
		// blur.transform.parent = transform.parent;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_139 = __this->___blur_34;
		NullCheck(L_139);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_140;
		L_140 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_139, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_141;
		L_141 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_141);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_142;
		L_142 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_141, NULL);
		NullCheck(L_140);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_140, L_142, NULL);
		// blur.transform.SetSiblingIndex(transform.GetSiblingIndex());
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_143 = __this->___blur_34;
		NullCheck(L_143);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_144;
		L_144 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_143, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_145;
		L_145 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_145);
		int32_t L_146;
		L_146 = Transform_GetSiblingIndex_m45EE497589C36D1FBED87FB802BD80A95CE68575(L_145, NULL);
		NullCheck(L_144);
		Transform_SetSiblingIndex_m8A3B81F08B93991C05BFA89ADA2146836C4FC4B2(L_144, L_146, NULL);
		// RectTransform blurRectTransform = blur.AddComponent<RectTransform>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_147 = __this->___blur_34;
		NullCheck(L_147);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_148;
		L_148 = GameObject_AddComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m771EB78FF8813B5AFF21AC0D252E5461943E6388(L_147, GameObject_AddComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m771EB78FF8813B5AFF21AC0D252E5461943E6388_RuntimeMethod_var);
		V_19 = L_148;
		// blurRectTransform.anchorMin = Vector2.zero;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_149 = V_19;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_150;
		L_150 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		NullCheck(L_149);
		RectTransform_set_anchorMin_m931442ABE3368D6D4309F43DF1D64AB64B0F52E3(L_149, L_150, NULL);
		// blurRectTransform.anchorMax = Vector2.one;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_151 = V_19;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_152;
		L_152 = Vector2_get_one_m9097EB8DC23C26118A591AF16702796C3EF51DFB_inline(NULL);
		NullCheck(L_151);
		RectTransform_set_anchorMax_m52829ABEDD229ABD3DA20BCA676FA1DCA4A39B7D(L_151, L_152, NULL);
		// blurRectTransform.offsetMin = Vector2.zero;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_153 = V_19;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_154;
		L_154 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		NullCheck(L_153);
		RectTransform_set_offsetMin_m07F38B4105C7CA9CC9FBDC9ED0DB008602880AB9(L_153, L_154, NULL);
		// blurRectTransform.offsetMax = Vector2.zero;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_155 = V_19;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_156;
		L_156 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		NullCheck(L_155);
		RectTransform_set_offsetMax_m5514D09D86516F2C0E25FA6D11A3A4274D3D002D(L_155, L_156, NULL);
		// blurImage = blur.AddComponent<Image>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_157 = __this->___blur_34;
		NullCheck(L_157);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_158;
		L_158 = GameObject_AddComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA327C9E1CA12BC531D587E7567F2067B96E6B6A0(L_157, GameObject_AddComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA327C9E1CA12BC531D587E7567F2067B96E6B6A0_RuntimeMethod_var);
		__this->___blurImage_38 = L_158;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___blurImage_38), (void*)L_158);
		// blurImage.raycastTarget = false;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_159 = __this->___blurImage_38;
		NullCheck(L_159);
		VirtualActionInvoker1< bool >::Invoke(25 /* System.Void UnityEngine.UI.Graphic::set_raycastTarget(System.Boolean) */, L_159, (bool)0);
		// blurImage.material = new Material(blurMaterial);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_160 = __this->___blurImage_38;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_161 = __this->___blurMaterial_16;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_162 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_162);
		Material__ctor_mFCC42FB90257F1E8F7516A8640A79C465A39961C(L_162, L_161, NULL);
		NullCheck(L_160);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_160, L_162);
		// blurImage.material.SetInt("_Radius", 0);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_163 = __this->___blurImage_38;
		NullCheck(L_163);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_164;
		L_164 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_163);
		NullCheck(L_164);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_164, _stringLiteralE5A1D96CE41BD597A30172C890508C2BB5810152, 0, NULL);
	}

IL_05a1:
	{
		// RectTransform overlayRectTransform = overlay.AddComponent<RectTransform>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_165 = __this->___overlay_33;
		NullCheck(L_165);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_166;
		L_166 = GameObject_AddComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m771EB78FF8813B5AFF21AC0D252E5461943E6388(L_165, GameObject_AddComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m771EB78FF8813B5AFF21AC0D252E5461943E6388_RuntimeMethod_var);
		V_16 = L_166;
		// overlayRectTransform.anchorMin = Vector2.zero;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_167 = V_16;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_168;
		L_168 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		NullCheck(L_167);
		RectTransform_set_anchorMin_m931442ABE3368D6D4309F43DF1D64AB64B0F52E3(L_167, L_168, NULL);
		// overlayRectTransform.anchorMax = Vector2.one;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_169 = V_16;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_170;
		L_170 = Vector2_get_one_m9097EB8DC23C26118A591AF16702796C3EF51DFB_inline(NULL);
		NullCheck(L_169);
		RectTransform_set_anchorMax_m52829ABEDD229ABD3DA20BCA676FA1DCA4A39B7D(L_169, L_170, NULL);
		// overlayRectTransform.offsetMin = Vector2.zero;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_171 = V_16;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_172;
		L_172 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		NullCheck(L_171);
		RectTransform_set_offsetMin_m07F38B4105C7CA9CC9FBDC9ED0DB008602880AB9(L_171, L_172, NULL);
		// overlayRectTransform.offsetMax = Vector2.zero;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_173 = V_16;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_174;
		L_174 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		NullCheck(L_173);
		RectTransform_set_offsetMax_m5514D09D86516F2C0E25FA6D11A3A4274D3D002D(L_173, L_174, NULL);
		// overlayImage = overlay.AddComponent<Image>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_175 = __this->___overlay_33;
		NullCheck(L_175);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_176;
		L_176 = GameObject_AddComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA327C9E1CA12BC531D587E7567F2067B96E6B6A0(L_175, GameObject_AddComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA327C9E1CA12BC531D587E7567F2067B96E6B6A0_RuntimeMethod_var);
		__this->___overlayImage_37 = L_176;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___overlayImage_37), (void*)L_176);
		// overlayImage.color = (defaultState == State.Open) ? overlayColour : Color.clear;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_177 = __this->___overlayImage_37;
		int32_t L_178 = __this->___defaultState_5;
		G_B26_0 = L_177;
		if ((((int32_t)L_178) == ((int32_t)1)))
		{
			G_B27_0 = L_177;
			goto IL_0609;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_179;
		L_179 = Color_get_clear_m02E023A7D396B973288B3915F6F24FBF7E0DC81D_inline(NULL);
		G_B28_0 = L_179;
		G_B28_1 = G_B26_0;
		goto IL_060f;
	}

IL_0609:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_180 = __this->___overlayColour_14;
		G_B28_0 = L_180;
		G_B28_1 = G_B27_0;
	}

IL_060f:
	{
		NullCheck(G_B28_1);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, G_B28_1, G_B28_0);
		// overlayImage.raycastTarget = overlayCloseOnPressed;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_181 = __this->___overlayImage_37;
		bool L_182 = __this->___overlayCloseOnPressed_18;
		NullCheck(L_181);
		VirtualActionInvoker1< bool >::Invoke(25 /* System.Void UnityEngine.UI.Graphic::set_raycastTarget(System.Boolean) */, L_181, L_182);
		// Button overlayButton = overlay.AddComponent<Button>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_183 = __this->___overlay_33;
		NullCheck(L_183);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_184;
		L_184 = GameObject_AddComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_m60FA17F75591FF93A15D1D1FE5969B8CB9E5FAAC(L_183, GameObject_AddComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_m60FA17F75591FF93A15D1D1FE5969B8CB9E5FAAC_RuntimeMethod_var);
		V_17 = L_184;
		// overlayButton.transition = Selectable.Transition.None;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_185 = V_17;
		NullCheck(L_185);
		Selectable_set_transition_m67F9584736EB6891A314C9804489368C430F0F59(L_185, 0, NULL);
		// overlayButton.onClick.AddListener(delegate { Close(); });
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_186 = V_17;
		NullCheck(L_186);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_187;
		L_187 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C(L_186, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_188 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_188);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_188, __this, (intptr_t)((void*)SimpleSideMenu_U3CSetupU3Eb__107_0_m6A4F5C6480EB10E0B50A5237485D2AFEC1069772_RuntimeMethod_var), NULL);
		NullCheck(L_187);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_187, L_188, NULL);
	}

IL_0657:
	{
		// }
		return;
	}
}
// System.Void DanielLochner.Assets.SimpleSideMenu.SimpleSideMenu::HandleState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleSideMenu_HandleState_m3A135D9B46AE0618FD28A6A6C08F14F078AC1AC9 (SimpleSideMenu_tCB0D978B855B8B0DF5CDF28638208B0BF0033259* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_2_Invoke_m59C85672CA5C41CA0DE2EA8F93D0C8E3847CDDB4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	bool V_3 = false;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_5;
	memset((&V_5), 0, sizeof(V_5));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	{
		// if (!isDragging)
		bool L_0 = __this->___isDragging_24;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_00ed;
		}
	}
	{
		// Vector2 targetPosition = (TargetState == State.Closed) ? closedPosition : openPosition;
		int32_t L_2;
		L_2 = SimpleSideMenu_get_TargetState_m98186EED40E0C6476C6F1ABE69FB0A8189BD9BB6_inline(__this, NULL);
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = __this->___openPosition_27;
		G_B4_0 = L_3;
		goto IL_0028;
	}

IL_0022:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = __this->___closedPosition_26;
		G_B4_0 = L_4;
	}

IL_0028:
	{
		V_1 = G_B4_0;
		// rectTransform.anchoredPosition = Vector2.Lerp(rectTransform.anchoredPosition, targetPosition, Time.unscaledDeltaTime * transitionSpeed);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_5 = __this->___rectTransform_35;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_6 = __this->___rectTransform_35;
		NullCheck(L_6);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680(L_6, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = V_1;
		float L_9;
		L_9 = Time_get_unscaledDeltaTime_mF057EECA857E5C0F90A3F910D26D3EE59F27C4B5(NULL);
		float L_10 = __this->___transitionSpeed_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		L_11 = Vector2_Lerp_m1A36103F7967F653A929556E26E6D052C298C00C_inline(L_7, L_8, ((float)il2cpp_codegen_multiply(L_9, L_10)), NULL);
		NullCheck(L_5);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_5, L_11, NULL);
		// if (CurrentState != TargetState)
		int32_t L_12;
		L_12 = SimpleSideMenu_get_CurrentState_mDF0DF68DB8C65AF82ECFDF85A741A5395232494E_inline(__this, NULL);
		int32_t L_13;
		L_13 = SimpleSideMenu_get_TargetState_m98186EED40E0C6476C6F1ABE69FB0A8189BD9BB6_inline(__this, NULL);
		V_2 = (bool)((((int32_t)((((int32_t)L_12) == ((int32_t)L_13))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_14 = V_2;
		if (!L_14)
		{
			goto IL_00ec;
		}
	}
	{
		// if ((rectTransform.anchoredPosition - targetPosition).magnitude <= rectTransform.rect.width / 10f)
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_15 = __this->___rectTransform_35;
		NullCheck(L_15);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16;
		L_16 = RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680(L_15, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18;
		L_18 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_16, L_17, NULL);
		V_4 = L_18;
		float L_19;
		L_19 = Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline((&V_4), NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_20 = __this->___rectTransform_35;
		NullCheck(L_20);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_21;
		L_21 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_20, NULL);
		V_5 = L_21;
		float L_22;
		L_22 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&V_5), NULL);
		V_3 = (bool)((((int32_t)((!(((float)L_19) <= ((float)((float)(L_22/(10.0f))))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_23 = V_3;
		if (!L_23)
		{
			goto IL_00d1;
		}
	}
	{
		// CurrentState = TargetState;
		int32_t L_24;
		L_24 = SimpleSideMenu_get_TargetState_m98186EED40E0C6476C6F1ABE69FB0A8189BD9BB6_inline(__this, NULL);
		SimpleSideMenu_set_CurrentState_mB64C389137E36D15B9BCE201C127A0ACB7B53AE4_inline(__this, L_24, NULL);
		// onStateChanged.Invoke(CurrentState, TargetState);
		UnityEvent_2_t376FE0489E50AD7FFE5CD9DEE752167A2904D102* L_25 = __this->___onStateChanged_22;
		int32_t L_26;
		L_26 = SimpleSideMenu_get_CurrentState_mDF0DF68DB8C65AF82ECFDF85A741A5395232494E_inline(__this, NULL);
		int32_t L_27;
		L_27 = SimpleSideMenu_get_TargetState_m98186EED40E0C6476C6F1ABE69FB0A8189BD9BB6_inline(__this, NULL);
		NullCheck(L_25);
		UnityEvent_2_Invoke_m59C85672CA5C41CA0DE2EA8F93D0C8E3847CDDB4(L_25, L_26, L_27, UnityEvent_2_Invoke_m59C85672CA5C41CA0DE2EA8F93D0C8E3847CDDB4_RuntimeMethod_var);
		goto IL_00eb;
	}

IL_00d1:
	{
		// onStateChanging.Invoke(CurrentState, TargetState);
		UnityEvent_2_t376FE0489E50AD7FFE5CD9DEE752167A2904D102* L_28 = __this->___onStateChanging_21;
		int32_t L_29;
		L_29 = SimpleSideMenu_get_CurrentState_mDF0DF68DB8C65AF82ECFDF85A741A5395232494E_inline(__this, NULL);
		int32_t L_30;
		L_30 = SimpleSideMenu_get_TargetState_m98186EED40E0C6476C6F1ABE69FB0A8189BD9BB6_inline(__this, NULL);
		NullCheck(L_28);
		UnityEvent_2_Invoke_m59C85672CA5C41CA0DE2EA8F93D0C8E3847CDDB4(L_28, L_29, L_30, UnityEvent_2_Invoke_m59C85672CA5C41CA0DE2EA8F93D0C8E3847CDDB4_RuntimeMethod_var);
	}

IL_00eb:
	{
	}

IL_00ec:
	{
	}

IL_00ed:
	{
		// }
		return;
	}
}
// System.Void DanielLochner.Assets.SimpleSideMenu.SimpleSideMenu::HandleOverlay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleSideMenu_HandleOverlay_m132B3724E350F0912A1BF374F0A98D7FDB8F6B16 (SimpleSideMenu_tCB0D978B855B8B0DF5CDF28638208B0BF0033259* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE5A1D96CE41BD597A30172C890508C2BB5810152);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* G_B3_0 = NULL;
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* G_B2_0 = NULL;
	int32_t G_B4_0 = 0;
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* G_B4_1 = NULL;
	{
		// if (useOverlay)
		bool L_0 = __this->___useOverlay_13;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_00a5;
		}
	}
	{
		// overlayImage.raycastTarget = overlayCloseOnPressed && (TargetState == State.Open);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_2 = __this->___overlayImage_37;
		bool L_3 = __this->___overlayCloseOnPressed_18;
		G_B2_0 = L_2;
		if (!L_3)
		{
			G_B3_0 = L_2;
			goto IL_0028;
		}
	}
	{
		int32_t L_4;
		L_4 = SimpleSideMenu_get_TargetState_m98186EED40E0C6476C6F1ABE69FB0A8189BD9BB6_inline(__this, NULL);
		G_B4_0 = ((((int32_t)L_4) == ((int32_t)1))? 1 : 0);
		G_B4_1 = G_B2_0;
		goto IL_0029;
	}

IL_0028:
	{
		G_B4_0 = 0;
		G_B4_1 = G_B3_0;
	}

IL_0029:
	{
		NullCheck(G_B4_1);
		VirtualActionInvoker1< bool >::Invoke(25 /* System.Void UnityEngine.UI.Graphic::set_raycastTarget(System.Boolean) */, G_B4_1, (bool)G_B4_0);
		// overlayImage.color = new Color(overlayColour.r, overlayColour.g, overlayColour.b, overlayColour.a * StateProgress);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_5 = __this->___overlayImage_37;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_6 = (&__this->___overlayColour_14);
		float L_7 = L_6->___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_8 = (&__this->___overlayColour_14);
		float L_9 = L_8->___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_10 = (&__this->___overlayColour_14);
		float L_11 = L_10->___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_12 = (&__this->___overlayColour_14);
		float L_13 = L_12->___a_3;
		float L_14;
		L_14 = SimpleSideMenu_get_StateProgress_mB30C2CCA595504DEBDB9FDE0BD71956E6E0DD6EF(__this, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_15;
		memset((&L_15), 0, sizeof(L_15));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_15), L_7, L_9, L_11, ((float)il2cpp_codegen_multiply(L_13, L_14)), /*hidden argument*/NULL);
		NullCheck(L_5);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_5, L_15);
		// if (useBlur)
		bool L_16 = __this->___useBlur_15;
		V_1 = L_16;
		bool L_17 = V_1;
		if (!L_17)
		{
			goto IL_00a4;
		}
	}
	{
		// blurImage.material.SetInt("_Radius", (int)(blurRadius * StateProgress));
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_18 = __this->___blurImage_38;
		NullCheck(L_18);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_19;
		L_19 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_18);
		int32_t L_20 = __this->___blurRadius_17;
		float L_21;
		L_21 = SimpleSideMenu_get_StateProgress_mB30C2CCA595504DEBDB9FDE0BD71956E6E0DD6EF(__this, NULL);
		NullCheck(L_19);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_19, _stringLiteralE5A1D96CE41BD597A30172C890508C2BB5810152, il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_multiply(((float)L_20), L_21))), NULL);
	}

IL_00a4:
	{
	}

IL_00a5:
	{
		// }
		return;
	}
}
// System.Void DanielLochner.Assets.SimpleSideMenu.SimpleSideMenu::SetState(DanielLochner.Assets.SimpleSideMenu.State)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleSideMenu_SetState_m8BFAB600E007F74D08F58D6544D7ABADC835B0DD (SimpleSideMenu_tCB0D978B855B8B0DF5CDF28638208B0BF0033259* __this, int32_t ___0_state, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mCD6DF2E7C4184A832B81787F0AF0C82E561D2BC9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// onStateSelected.Invoke(TargetState = state);
		UnityEvent_1_t4F4D71D8A21119887E211188B8312B8332CDED73* L_0 = __this->___onStateSelected_20;
		int32_t L_1 = ___0_state;
		int32_t L_2 = L_1;
		V_0 = L_2;
		SimpleSideMenu_set_TargetState_m59B43F9DBA479E61064CE67B8A5E98A59B807D22_inline(__this, L_2, NULL);
		int32_t L_3 = V_0;
		NullCheck(L_0);
		UnityEvent_1_Invoke_mCD6DF2E7C4184A832B81787F0AF0C82E561D2BC9(L_0, L_3, UnityEvent_1_Invoke_mCD6DF2E7C4184A832B81787F0AF0C82E561D2BC9_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void DanielLochner.Assets.SimpleSideMenu.SimpleSideMenu::ToggleState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleSideMenu_ToggleState_m1F4F50820971936D8E325EC70F21A85020675545 (SimpleSideMenu_tCB0D978B855B8B0DF5CDF28638208B0BF0033259* __this, const RuntimeMethod* method) 
{
	{
		// SetState((State)(((int)TargetState + 1) % 2));
		int32_t L_0;
		L_0 = SimpleSideMenu_get_TargetState_m98186EED40E0C6476C6F1ABE69FB0A8189BD9BB6_inline(__this, NULL);
		SimpleSideMenu_SetState_m8BFAB600E007F74D08F58D6544D7ABADC835B0DD(__this, ((int32_t)(((int32_t)il2cpp_codegen_add((int32_t)L_0, 1))%2)), NULL);
		// }
		return;
	}
}
// System.Void DanielLochner.Assets.SimpleSideMenu.SimpleSideMenu::Open()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleSideMenu_Open_mD3B9D07C54629497301394D74D800CA41376AFFE (SimpleSideMenu_tCB0D978B855B8B0DF5CDF28638208B0BF0033259* __this, const RuntimeMethod* method) 
{
	{
		// SetState(State.Open);
		SimpleSideMenu_SetState_m8BFAB600E007F74D08F58D6544D7ABADC835B0DD(__this, 1, NULL);
		// }
		return;
	}
}
// System.Void DanielLochner.Assets.SimpleSideMenu.SimpleSideMenu::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleSideMenu_Close_m88E9188B4C8DC27C108B4428346DAA00CF797C0F (SimpleSideMenu_tCB0D978B855B8B0DF5CDF28638208B0BF0033259* __this, const RuntimeMethod* method) 
{
	{
		// SetState(State.Closed);
		SimpleSideMenu_SetState_m8BFAB600E007F74D08F58D6544D7ABADC835B0DD(__this, 0, NULL);
		// }
		return;
	}
}
// System.Void DanielLochner.Assets.SimpleSideMenu.SimpleSideMenu::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleSideMenu__ctor_mF78F35C696BEB0DDF06454442A3908BFBB99E400 (SimpleSideMenu_tCB0D978B855B8B0DF5CDF28638208B0BF0033259* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_m74CB6ED924F4B916B6583CB537ECA623F6BA60AD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_t4F4D71D8A21119887E211188B8312B8332CDED73_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_2__ctor_m3F639E40BCCBCC2FC3DE07E7C362E9A49BBC34B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_2_t376FE0489E50AD7FFE5CD9DEE752167A2904D102_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] private Placement placement = Placement.Left;
		__this->___placement_4 = 0;
		// [SerializeField] private State defaultState = State.Closed;
		__this->___defaultState_5 = 0;
		// [SerializeField] private float transitionSpeed = 10f;
		__this->___transitionSpeed_6 = (10.0f);
		// [SerializeField] private float thresholdDragSpeed = 0f;
		__this->___thresholdDragSpeed_7 = (0.0f);
		// [SerializeField] private float thresholdDraggedFraction = 0.5f;
		__this->___thresholdDraggedFraction_8 = (0.5f);
		// [SerializeField] private GameObject handle = null;
		__this->___handle_9 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___handle_9), (void*)(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
		// [SerializeField] private bool isHandleDraggable = true;
		__this->___isHandleDraggable_10 = (bool)1;
		// [SerializeField] private bool isMenuDraggable = false;
		__this->___isMenuDraggable_11 = (bool)0;
		// [SerializeField] private bool handleToggleStateOnPressed = true;
		__this->___handleToggleStateOnPressed_12 = (bool)1;
		// [SerializeField] private bool useOverlay = true;
		__this->___useOverlay_13 = (bool)1;
		// [SerializeField] private Color overlayColour = new Color(0, 0, 0, 0.25f);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (0.0f), (0.0f), (0.25f), /*hidden argument*/NULL);
		__this->___overlayColour_14 = L_0;
		// [SerializeField] private bool useBlur = false;
		__this->___useBlur_15 = (bool)0;
		// [SerializeField] private int blurRadius = 10;
		__this->___blurRadius_17 = ((int32_t)10);
		// [SerializeField] private bool overlayCloseOnPressed = true;
		__this->___overlayCloseOnPressed_18 = (bool)1;
		// [SerializeField] private UnityEvent<State> onStateSelecting = new UnityEvent<State>();
		UnityEvent_1_t4F4D71D8A21119887E211188B8312B8332CDED73* L_1 = (UnityEvent_1_t4F4D71D8A21119887E211188B8312B8332CDED73*)il2cpp_codegen_object_new(UnityEvent_1_t4F4D71D8A21119887E211188B8312B8332CDED73_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		UnityEvent_1__ctor_m74CB6ED924F4B916B6583CB537ECA623F6BA60AD(L_1, UnityEvent_1__ctor_m74CB6ED924F4B916B6583CB537ECA623F6BA60AD_RuntimeMethod_var);
		__this->___onStateSelecting_19 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___onStateSelecting_19), (void*)L_1);
		// [SerializeField] private UnityEvent<State> onStateSelected = new UnityEvent<State>();
		UnityEvent_1_t4F4D71D8A21119887E211188B8312B8332CDED73* L_2 = (UnityEvent_1_t4F4D71D8A21119887E211188B8312B8332CDED73*)il2cpp_codegen_object_new(UnityEvent_1_t4F4D71D8A21119887E211188B8312B8332CDED73_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		UnityEvent_1__ctor_m74CB6ED924F4B916B6583CB537ECA623F6BA60AD(L_2, UnityEvent_1__ctor_m74CB6ED924F4B916B6583CB537ECA623F6BA60AD_RuntimeMethod_var);
		__this->___onStateSelected_20 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___onStateSelected_20), (void*)L_2);
		// [SerializeField] private UnityEvent<State, State> onStateChanging = new UnityEvent<State, State>();
		UnityEvent_2_t376FE0489E50AD7FFE5CD9DEE752167A2904D102* L_3 = (UnityEvent_2_t376FE0489E50AD7FFE5CD9DEE752167A2904D102*)il2cpp_codegen_object_new(UnityEvent_2_t376FE0489E50AD7FFE5CD9DEE752167A2904D102_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		UnityEvent_2__ctor_m3F639E40BCCBCC2FC3DE07E7C362E9A49BBC34B9(L_3, UnityEvent_2__ctor_m3F639E40BCCBCC2FC3DE07E7C362E9A49BBC34B9_RuntimeMethod_var);
		__this->___onStateChanging_21 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___onStateChanging_21), (void*)L_3);
		// [SerializeField] private UnityEvent<State, State> onStateChanged = new UnityEvent<State, State>();
		UnityEvent_2_t376FE0489E50AD7FFE5CD9DEE752167A2904D102* L_4 = (UnityEvent_2_t376FE0489E50AD7FFE5CD9DEE752167A2904D102*)il2cpp_codegen_object_new(UnityEvent_2_t376FE0489E50AD7FFE5CD9DEE752167A2904D102_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		UnityEvent_2__ctor_m3F639E40BCCBCC2FC3DE07E7C362E9A49BBC34B9(L_4, UnityEvent_2__ctor_m3F639E40BCCBCC2FC3DE07E7C362E9A49BBC34B9_RuntimeMethod_var);
		__this->___onStateChanged_22 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___onStateChanged_22), (void*)L_4);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void DanielLochner.Assets.SimpleSideMenu.SimpleSideMenu::<Setup>b__107_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleSideMenu_U3CSetupU3Eb__107_0_m6A4F5C6480EB10E0B50A5237485D2AFEC1069772 (SimpleSideMenu_tCB0D978B855B8B0DF5CDF28638208B0BF0033259* __this, const RuntimeMethod* method) 
{
	{
		// overlayButton.onClick.AddListener(delegate { Close(); });
		SimpleSideMenu_Close_m88E9188B4C8DC27C108B4428346DAA00CF797C0F(__this, NULL);
		// overlayButton.onClick.AddListener(delegate { Close(); });
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_b, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_a;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___1_b;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___0_a;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___1_b;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_0;
		float L_1 = __this->___x_0;
		float L_2 = __this->___y_1;
		float L_3 = __this->___y_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_4;
		L_4 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3))))));
		V_0 = ((float)L_4);
		goto IL_0026;
	}

IL_0026:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* PointerEventData_get_pointerEnter_m6CE76D5C0C36C4666CDDE348B57885C52D495A4B_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) 
{
	{
		// public GameObject pointerEnter { get; set; }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___U3CpointerEnterU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2 position { get; set; }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___U3CpositionU3Ek__BackingField_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SimpleSideMenu_get_TargetState_m98186EED40E0C6476C6F1ABE69FB0A8189BD9BB6_inline (SimpleSideMenu_tCB0D978B855B8B0DF5CDF28638208B0BF0033259* __this, const RuntimeMethod* method) 
{
	{
		// get;
		int32_t L_0 = __this->___U3CTargetStateU3Ek__BackingField_42;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_b, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_a;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___1_b;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___0_a;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___1_b;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_0 = L_0;
		float L_1 = ___1_y;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___0_value, float ___1_min, float ___2_max, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___0_value;
		float L_1 = ___1_min;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___1_min;
		___0_value = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___0_value;
		float L_5 = ___2_max;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___2_max;
		___0_value = L_7;
	}

IL_0019:
	{
		float L_8 = ___0_value;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SimpleSideMenu_get_CurrentState_mDF0DF68DB8C65AF82ECFDF85A741A5395232494E_inline (SimpleSideMenu_tCB0D978B855B8B0DF5CDF28638208B0BF0033259* __this, const RuntimeMethod* method) 
{
	{
		// get;
		int32_t L_0 = __this->___U3CCurrentStateU3Ek__BackingField_41;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		float L_2 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_a;
		float L_4 = L_3.___y_3;
		float L_5 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___z_4;
		float L_8 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_v, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_v;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_v;
		float L_3 = L_2.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___zeroVector_2;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SimpleSideMenu_set_CurrentState_mB64C389137E36D15B9BCE201C127A0ACB7B53AE4_inline (SimpleSideMenu_tCB0D978B855B8B0DF5CDF28638208B0BF0033259* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// private set;
		int32_t L_0 = ___0_value;
		__this->___U3CCurrentStateU3Ek__BackingField_41 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___oneVector_6;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_one_m9097EB8DC23C26118A591AF16702796C3EF51DFB_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___oneVector_3;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_clear_m02E023A7D396B973288B3915F6F24FBF7E0DC81D_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_Lerp_m1A36103F7967F653A929556E26E6D052C298C00C_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_b, float ___2_t, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___2_t;
		float L_1;
		L_1 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_0, NULL);
		___2_t = L_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___0_a;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___1_b;
		float L_5 = L_4.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___0_a;
		float L_7 = L_6.___x_0;
		float L_8 = ___2_t;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = ___0_a;
		float L_10 = L_9.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11 = ___1_b;
		float L_12 = L_11.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13 = ___0_a;
		float L_14 = L_13.___y_1;
		float L_15 = ___2_t;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_16), ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_7)), L_8)))), ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, L_14)), L_15)))), /*hidden argument*/NULL);
		V_0 = L_16;
		goto IL_003d;
	}

IL_003d:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17 = V_0;
		return L_17;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_r;
		__this->___r_0 = L_0;
		float L_1 = ___1_g;
		__this->___g_1 = L_1;
		float L_2 = ___2_b;
		__this->___b_2 = L_2;
		float L_3 = ___3_a;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SimpleSideMenu_set_TargetState_m59B43F9DBA479E61064CE67B8A5E98A59B807D22_inline (SimpleSideMenu_tCB0D978B855B8B0DF5CDF28638208B0BF0033259* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// private set;
		int32_t L_0 = ___0_value;
		__this->___U3CTargetStateU3Ek__BackingField_42 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_2 = L_0;
		float L_1 = ___1_y;
		__this->___y_3 = L_1;
		float L_2 = ___2_z;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___0_value;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___0_value;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___0_value;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
