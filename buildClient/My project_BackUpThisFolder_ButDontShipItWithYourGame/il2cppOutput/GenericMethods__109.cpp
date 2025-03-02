#include "pch-cpp.hpp"





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
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct ConstrainedFuncInvoker0
{
	static inline R Invoke (RuntimeClass* type, const RuntimeMethod* constrainedMethod, void* boxBuffer, void* obj)
	{
		R ret;
		il2cpp_codegen_runtime_constrained_call(type, constrainedMethod, boxBuffer, obj, NULL, &ret);
		return ret;
	}
};

struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
struct IEqualityComparer_1_t2CA7720C7ADCCDECD3B02E45878B4478619D5347;
struct KeyCollection_tB45A861D090B15129521119AE48ED3813820A974;
struct ValueCollection_t038245E04B5D2A80048D9F8021A23E69A0C9DBAA;
struct EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct Font_tC95270EA3198038970422D78B74A7F2E218A96B6;
struct FontAsset_t61A6446D934E582651044E33D250EA8D306AB958;
struct IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D;
struct IPropertyBagVisitor_tE8B9B7E14DBF946E6E65BD0ECC8679268715BF5A;
struct ManagedObjectClone_t6E754ED2624B829553A94A85A0D62AD51B58FCD6;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27;
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
struct String_t;
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
struct Type_t;
struct UnsafePackedBinaryStream_tA167AA778E63332B246152289D19AED3846C8DFE;
struct VectorImage_t7BD8CE948377FFE95FCA0C48014ACDFC13B8F8FC;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_tB45A861D090B15129521119AE48ED3813820A974* ____keys;
	ValueCollection_t038245E04B5D2A80048D9F8021A23E69A0C9DBAA* ____values;
	RuntimeObject* ____syncRoot;
};
struct TypeTraits_1_tFE90E3B2683C0197B0BCDD15879B0B07DC84A24A  : public RuntimeObject
{
};
struct TypeTraits_1_t735C9596C4B0AACA90B2BE965362D57FA9C03B5E  : public RuntimeObject
{
};
struct TypeTraits_1_t8FFE575690EA6AC4B4647919E785D2AE72BE6D9B  : public RuntimeObject
{
};
struct TypeTraits_1_tADDF36A68586641E7714027F3533EC4E0DD869F6  : public RuntimeObject
{
};
struct TypeTraits_1_tF91BA2C79345F433195944D0618AB02D92236B21  : public RuntimeObject
{
};
struct TypeTraits_1_tB01FA3B4A03D597A48820CE7FCC333DCA70FACC9  : public RuntimeObject
{
};
struct TypeTraits_1_t21080F26F6131ECBC06910EE13D1DE330D245551  : public RuntimeObject
{
};
struct TypeTraits_1_tA6D1100439FC903C4E5199EE4D277273E18BF039  : public RuntimeObject
{
};
struct TypeTraits_1_t94405784E845EA464968A7BA6455EE4082C988EF  : public RuntimeObject
{
};
struct TypeTraits_1_t14492BDEFA66B94D1A35E842BFAB7898518438E4  : public RuntimeObject
{
};
struct TypeTraits_1_t8883CD81D797B05BC15979287C7B2BC58F033BC9  : public RuntimeObject
{
};
struct TypeTraits_1_tC1A46C3724D2DAD269AF6BD39D20DE59150FDF28  : public RuntimeObject
{
};
struct TypeTraits_1_t9A92FED6D60DACE8C551B7F9D3A8C19FFD695D8A  : public RuntimeObject
{
};
struct TypeTraits_1_tC6016152C0B1EA884A010EA192A177AF6D450C2E  : public RuntimeObject
{
};
struct TypeTraits_1_t2F0140ACB0515BDDC870EC97E27CB7FE1A3E632B  : public RuntimeObject
{
};
struct TypeTraits_1_t489E41DF3938E924D32457D7DE82598F4FD0A2DE  : public RuntimeObject
{
};
struct TypeTraits_1_tB9DCCD3BBF3EE862519183C720AAC6BA3A86B1D1  : public RuntimeObject
{
};
struct TypeTraits_1_t7FBD6A3FBFE466CC7C2D8D3C046790A1B7E343E9  : public RuntimeObject
{
};
struct TypeTraits_1_tFAC2D7C6B051CC5476CDC3CD6449AED4A5D87408  : public RuntimeObject
{
};
struct TypeTraits_1_t3F99D60DF484D7154D83563634764473B340414C  : public RuntimeObject
{
};
struct TypeTraits_1_t202E31FDCB5BFA14FDF87807FDAF5B04EB5F8034  : public RuntimeObject
{
};
struct TypeTraits_1_tD909FCFAF79D42896A1FC2CD20FB1ABCAAA257DD  : public RuntimeObject
{
};
struct TypeTraits_1_tFA0B43A2A3A7C2204717987FEC00B04AA9F81F00  : public RuntimeObject
{
};
struct TypeTraits_1_t1702AD010C5DC0B1F26D46D5D2A182E9CAFCD640  : public RuntimeObject
{
};
struct TypeTraits_1_tFB3FC779258BD8C9717811E3C3FB85E125EFC8FB  : public RuntimeObject
{
};
struct TypeTraits_1_tCFF7A75C3914FB515773955DB32BE7BC4A1346DF  : public RuntimeObject
{
};
struct TypeTraits_1_tCC4BDF8E0A12FD764908EC189D75E770E4C60943  : public RuntimeObject
{
};
struct TypeTraits_1_t757ADFB4D991E864C5C73DA2C8ECE7DB437E2DDF  : public RuntimeObject
{
};
struct TypeTraits_1_tC847C5AECFD56D7A03E78146847095A698E8A9D6  : public RuntimeObject
{
};
struct TypeTraits_1_t2745081C9EBBFB683CA88BDE5D022B3E28F023BC  : public RuntimeObject
{
};
struct TypeTraits_1_t9E0AB7A057AA6EE1CF91911858169EA0D58BB816  : public RuntimeObject
{
};
struct TypeTraits_1_tEC4AD2AA03E1549DCDDCA8138E36D91F7BF393BB  : public RuntimeObject
{
};
struct TypeTraits_1_tB395B95685AE971ABD5B79C40A58224E776FC934  : public RuntimeObject
{
};
struct TypeTraits_1_t71057E7D8F22A723DE8C778E71218D6DDFD2BAF0  : public RuntimeObject
{
};
struct TypeTraits_1_t863F95920EE834C0519085F7BDCA06C58BCD1DE3  : public RuntimeObject
{
};
struct TypeTraits_1_t621E3790C21984BE382EC32D6FE8EF59F9C81E4F  : public RuntimeObject
{
};
struct TypeTraits_1_t3FA85198159658E010E08BB434B6F0D95CCF4310  : public RuntimeObject
{
};
struct TypeTraits_1_t12A4EFA4F288B8AEB9D8AF24C08B0E6BEC4A5283  : public RuntimeObject
{
};
struct TypeTraits_1_tB2BACC988B95FD4748EEAD9E106CEA7F11DBBE4B  : public RuntimeObject
{
};
struct TypeTraits_1_tE403F840B1E4A05D3004758D60018F70BE11D92D  : public RuntimeObject
{
};
struct ManagedObjectClone_t6E754ED2624B829553A94A85A0D62AD51B58FCD6  : public RuntimeObject
{
	Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* ___m_References;
	RuntimeObject* ___m_RootSource;
	RuntimeObject* ___m_RootDestination;
	RuntimeObject* ___m_Stack;
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 
{
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___m_Texture;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___m_RenderTexture;
	VectorImage_t7BD8CE948377FFE95FCA0C48014ACDFC13B8F8FC* ___m_VectorImage;
};
struct Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_marshaled_pinvoke
{
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___m_Texture;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___m_RenderTexture;
	VectorImage_t7BD8CE948377FFE95FCA0C48014ACDFC13B8F8FC* ___m_VectorImage;
};
struct Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_marshaled_com
{
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___m_Texture;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___m_RenderTexture;
	VectorImage_t7BD8CE948377FFE95FCA0C48014ACDFC13B8F8FC* ___m_VectorImage;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	float ___r;
	float ___g;
	float ___b;
	float ___a;
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};
struct FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C 
{
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___m_Font;
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___m_FontAsset;
};
struct FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_marshaled_pinvoke
{
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___m_Font;
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___m_FontAsset;
};
struct FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_marshaled_com
{
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___m_Font;
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___m_FontAsset;
};
struct Handle_t734A63706EDE11FF0429B53F7756AE2873E1F665 
{
	int32_t ___Index;
	int32_t ___Version;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	float ___x;
	float ___y;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	float ___x;
	float ___y;
	float ___z;
};
struct Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 
{
	int32_t ___m_X;
	int32_t ___m_Y;
	int32_t ___m_Z;
};
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
struct BackgroundPositionKeyword_tE680A05B983D256AADC8E2CF1CA169D004B8641B 
{
	int32_t ___value__;
};
struct BackgroundSizeType_tD194B20FF5086D494ABF8D799124D2FC4FFCC674 
{
	int32_t ___value__;
};
struct Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82 
{
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___U3CtextureU3Ek__BackingField;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3ChotspotU3Ek__BackingField;
	int32_t ___U3CdefaultCursorIdU3Ek__BackingField;
};
struct Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82_marshaled_pinvoke
{
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___U3CtextureU3Ek__BackingField;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3ChotspotU3Ek__BackingField;
	int32_t ___U3CdefaultCursorIdU3Ek__BackingField;
};
struct Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82_marshaled_com
{
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___U3CtextureU3Ek__BackingField;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3ChotspotU3Ek__BackingField;
	int32_t ___U3CdefaultCursorIdU3Ek__BackingField;
};
struct EasingMode_tEF87477B9B9EB2524525550AE5ABEBC00FC7B0DF 
{
	int32_t ___value__;
};
struct Int32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C 
{
	int32_t ___value__;
};
struct Repeat_tC0330B75B12D24B063BA5151AF3BB73B85D8B840 
{
	int32_t ___value__;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Scale;
	bool ___m_IsNone;
};
struct Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_marshaled_pinvoke
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Scale;
	int32_t ___m_IsNone;
};
struct Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_marshaled_com
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Scale;
	int32_t ___m_IsNone;
};
struct SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC 
{
	UnsafePackedBinaryStream_tA167AA778E63332B246152289D19AED3846C8DFE* ___m_Stream;
	Handle_t734A63706EDE11FF0429B53F7756AE2873E1F665 ___m_Handle;
};
struct StyleKeyword_t2812E72266C15CBA8927586972DC2FD27B10E705 
{
	int32_t ___value__;
};
struct StylePropertyId_tA3B8A5213F5BA43F9C5443B27B165D744713BE69 
{
	int32_t ___value__;
};
struct TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___offset;
	float ___blurRadius;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color;
};
struct TimeUnit_t56A79CDB672E98A4EE28002BD23B6D5E0BAA2649 
{
	int32_t ___value__;
};
struct VisitExceptionKind_t7E6C3EABD5439F2B4CA31C246B2AA4AC16A77DF5 
{
	int32_t ___value__;
};
struct VisitReturnCode_t795FEB928E847C526F470080AA94B33FAC60BC75 
{
	int32_t ___value__;
};
struct Unit_t21DCD5C095F7DC1A0B9A47CAF8CAD3E7776CD3DB 
{
	int32_t ___value__;
};
struct Unit_t7A9C3ABB0618BEBFDC1813D07080CE0C145448ED 
{
	int32_t ___value__;
};
struct Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC 
{
	float ___m_Value;
	int32_t ___m_Unit;
};
struct BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F 
{
	int32_t ___x;
	int32_t ___y;
};
struct EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4 
{
	int32_t ___m_Mode;
};
struct Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 
{
	float ___m_Value;
	int32_t ___m_Unit;
};
struct StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B 
{
	Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B_marshaled_pinvoke
{
	Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_marshaled_pinvoke ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B_marshaled_com
{
	Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_marshaled_com ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610 
{
	Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82 ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610_marshaled_pinvoke
{
	Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82_marshaled_pinvoke ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610_marshaled_com
{
	Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82_marshaled_com ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841 
{
	float ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C 
{
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C_marshaled_pinvoke
{
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C_marshaled_com
{
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4 
{
	int32_t ___m_Keyword;
	FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C ___m_Value;
};
struct StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4_marshaled_pinvoke
{
	int32_t ___m_Keyword;
	FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_marshaled_pinvoke ___m_Value;
};
struct StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4_marshaled_com
{
	int32_t ___m_Keyword;
	FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_marshaled_com ___m_Value;
};
struct StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D 
{
	int32_t ___m_Value;
	int32_t ___m_Keyword;
};
struct StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF 
{
	int32_t ___U3CidU3Ek__BackingField;
	String_t* ___U3CnameU3Ek__BackingField;
};
struct StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_marshaled_pinvoke
{
	int32_t ___U3CidU3Ek__BackingField;
	char* ___U3CnameU3Ek__BackingField;
};
struct StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_marshaled_com
{
	int32_t ___U3CidU3Ek__BackingField;
	Il2CppChar* ___U3CnameU3Ek__BackingField;
};
struct StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC 
{
	Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7 ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC_marshaled_pinvoke
{
	Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_marshaled_pinvoke ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC_marshaled_com
{
	Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_marshaled_com ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252 
{
	int32_t ___m_Keyword;
	TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05 ___m_Value;
};
struct TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E 
{
	float ___m_Value;
	int32_t ___m_Unit;
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE 
{
	int32_t ___U3CIgnoreExceptionsU3Ek__BackingField;
};
struct BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 
{
	int32_t ___keyword;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___offset;
};
struct BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7 
{
	int32_t ___m_SizeType;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_X;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_Y;
};
struct Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7 
{
	Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC ___m_Angle;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Axis;
	bool ___m_IsNone;
};
struct Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_marshaled_pinvoke
{
	Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC ___m_Angle;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Axis;
	int32_t ___m_IsNone;
};
struct Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_marshaled_com
{
	Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC ___m_Angle;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Axis;
	int32_t ___m_IsNone;
};
struct StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866 
{
	BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8 
{
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_Value;
	int32_t ___m_Keyword;
};
struct TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 
{
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_X;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_Y;
	float ___m_Z;
};
struct Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E 
{
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_X;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_Y;
	float ___m_Z;
	bool ___m_isNone;
};
struct Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_marshaled_pinvoke
{
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_X;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_Y;
	float ___m_Z;
	int32_t ___m_isNone;
};
struct Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_marshaled_com
{
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_X;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_Y;
	float ___m_Z;
	int32_t ___m_isNone;
};
struct StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3 
{
	BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008 
{
	BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7 ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B 
{
	Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7 ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B_marshaled_pinvoke
{
	Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_marshaled_pinvoke ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B_marshaled_com
{
	Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_marshaled_com ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6 
{
	TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089 
{
	Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089_marshaled_pinvoke
{
	Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_marshaled_pinvoke ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089_marshaled_com
{
	Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_marshaled_com ___m_Value;
	int32_t ___m_Keyword;
};
struct TypeTraits_1_tFE90E3B2683C0197B0BCDD15879B0B07DC84A24A_StaticFields
{
	bool ___U3CIsValueTypeU3Ek__BackingField;
	bool ___U3CIsPrimitiveU3Ek__BackingField;
	bool ___U3CIsInterfaceU3Ek__BackingField;
	bool ___U3CIsAbstractU3Ek__BackingField;
	bool ___U3CIsArrayU3Ek__BackingField;
	bool ___U3CIsMultidimensionalArrayU3Ek__BackingField;
	bool ___U3CIsEnumU3Ek__BackingField;
	bool ___U3CIsEnumFlagsU3Ek__BackingField;
	bool ___U3CIsNullableU3Ek__BackingField;
	bool ___U3CIsObjectU3Ek__BackingField;
	bool ___U3CIsStringU3Ek__BackingField;
	bool ___U3CIsContainerU3Ek__BackingField;
	bool ___U3CCanBeNullU3Ek__BackingField;
	bool ___U3CIsPrimitiveOrStringU3Ek__BackingField;
	bool ___U3CIsAbstractOrInterfaceU3Ek__BackingField;
	bool ___U3CIsUnityObjectU3Ek__BackingField;
	bool ___U3CIsLazyLoadReferenceU3Ek__BackingField;
};
struct TypeTraits_1_t735C9596C4B0AACA90B2BE965362D57FA9C03B5E_StaticFields
{
	bool ___U3CIsValueTypeU3Ek__BackingField;
	bool ___U3CIsPrimitiveU3Ek__BackingField;
	bool ___U3CIsInterfaceU3Ek__BackingField;
	bool ___U3CIsAbstractU3Ek__BackingField;
	bool ___U3CIsArrayU3Ek__BackingField;
	bool ___U3CIsMultidimensionalArrayU3Ek__BackingField;
	bool ___U3CIsEnumU3Ek__BackingField;
	bool ___U3CIsEnumFlagsU3Ek__BackingField;
	bool ___U3CIsNullableU3Ek__BackingField;
	bool ___U3CIsObjectU3Ek__BackingField;
	bool ___U3CIsStringU3Ek__BackingField;
	bool ___U3CIsContainerU3Ek__BackingField;
	bool ___U3CCanBeNullU3Ek__BackingField;
	bool ___U3CIsPrimitiveOrStringU3Ek__BackingField;
	bool ___U3CIsAbstractOrInterfaceU3Ek__BackingField;
	bool ___U3CIsUnityObjectU3Ek__BackingField;
	bool ___U3CIsLazyLoadReferenceU3Ek__BackingField;
};
struct TypeTraits_1_t8FFE575690EA6AC4B4647919E785D2AE72BE6D9B_StaticFields
{
	bool ___U3CIsValueTypeU3Ek__BackingField;
	bool ___U3CIsPrimitiveU3Ek__BackingField;
	bool ___U3CIsInterfaceU3Ek__BackingField;
	bool ___U3CIsAbstractU3Ek__BackingField;
	bool ___U3CIsArrayU3Ek__BackingField;
	bool ___U3CIsMultidimensionalArrayU3Ek__BackingField;
	bool ___U3CIsEnumU3Ek__BackingField;
	bool ___U3CIsEnumFlagsU3Ek__BackingField;
	bool ___U3CIsNullableU3Ek__BackingField;
	bool ___U3CIsObjectU3Ek__BackingField;
	bool ___U3CIsStringU3Ek__BackingField;
	bool ___U3CIsContainerU3Ek__BackingField;
	bool ___U3CCanBeNullU3Ek__BackingField;
	bool ___U3CIsPrimitiveOrStringU3Ek__BackingField;
	bool ___U3CIsAbstractOrInterfaceU3Ek__BackingField;
	bool ___U3CIsUnityObjectU3Ek__BackingField;
	bool ___U3CIsLazyLoadReferenceU3Ek__BackingField;
};
struct TypeTraits_1_tADDF36A68586641E7714027F3533EC4E0DD869F6_StaticFields
{
	bool ___U3CIsValueTypeU3Ek__BackingField;
	bool ___U3CIsPrimitiveU3Ek__BackingField;
	bool ___U3CIsInterfaceU3Ek__BackingField;
	bool ___U3CIsAbstractU3Ek__BackingField;
	bool ___U3CIsArrayU3Ek__BackingField;
	bool ___U3CIsMultidimensionalArrayU3Ek__BackingField;
	bool ___U3CIsEnumU3Ek__BackingField;
	bool ___U3CIsEnumFlagsU3Ek__BackingField;
	bool ___U3CIsNullableU3Ek__BackingField;
	bool ___U3CIsObjectU3Ek__BackingField;
	bool ___U3CIsStringU3Ek__BackingField;
	bool ___U3CIsContainerU3Ek__BackingField;
	bool ___U3CCanBeNullU3Ek__BackingField;
	bool ___U3CIsPrimitiveOrStringU3Ek__BackingField;
	bool ___U3CIsAbstractOrInterfaceU3Ek__BackingField;
	bool ___U3CIsUnityObjectU3Ek__BackingField;
	bool ___U3CIsLazyLoadReferenceU3Ek__BackingField;
};
struct TypeTraits_1_tF91BA2C79345F433195944D0618AB02D92236B21_StaticFields
{
	bool ___U3CIsValueTypeU3Ek__BackingField;
	bool ___U3CIsPrimitiveU3Ek__BackingField;
	bool ___U3CIsInterfaceU3Ek__BackingField;
	bool ___U3CIsAbstractU3Ek__BackingField;
	bool ___U3CIsArrayU3Ek__BackingField;
	bool ___U3CIsMultidimensionalArrayU3Ek__BackingField;
	bool ___U3CIsEnumU3Ek__BackingField;
	bool ___U3CIsEnumFlagsU3Ek__BackingField;
	bool ___U3CIsNullableU3Ek__BackingField;
	bool ___U3CIsObjectU3Ek__BackingField;
	bool ___U3CIsStringU3Ek__BackingField;
	bool ___U3CIsContainerU3Ek__BackingField;
	bool ___U3CCanBeNullU3Ek__BackingField;
	bool ___U3CIsPrimitiveOrStringU3Ek__BackingField;
	bool ___U3CIsAbstractOrInterfaceU3Ek__BackingField;
	bool ___U3CIsUnityObjectU3Ek__BackingField;
	bool ___U3CIsLazyLoadReferenceU3Ek__BackingField;
};
struct TypeTraits_1_tB01FA3B4A03D597A48820CE7FCC333DCA70FACC9_StaticFields
{
	bool ___U3CIsValueTypeU3Ek__BackingField;
	bool ___U3CIsPrimitiveU3Ek__BackingField;
	bool ___U3CIsInterfaceU3Ek__BackingField;
	bool ___U3CIsAbstractU3Ek__BackingField;
	bool ___U3CIsArrayU3Ek__BackingField;
	bool ___U3CIsMultidimensionalArrayU3Ek__BackingField;
	bool ___U3CIsEnumU3Ek__BackingField;
	bool ___U3CIsEnumFlagsU3Ek__BackingField;
	bool ___U3CIsNullableU3Ek__BackingField;
	bool ___U3CIsObjectU3Ek__BackingField;
	bool ___U3CIsStringU3Ek__BackingField;
	bool ___U3CIsContainerU3Ek__BackingField;
	bool ___U3CCanBeNullU3Ek__BackingField;
	bool ___U3CIsPrimitiveOrStringU3Ek__BackingField;
	bool ___U3CIsAbstractOrInterfaceU3Ek__BackingField;
	bool ___U3CIsUnityObjectU3Ek__BackingField;
	bool ___U3CIsLazyLoadReferenceU3Ek__BackingField;
};
struct TypeTraits_1_t21080F26F6131ECBC06910EE13D1DE330D245551_StaticFields
{
	bool ___U3CIsValueTypeU3Ek__BackingField;
	bool ___U3CIsPrimitiveU3Ek__BackingField;
	bool ___U3CIsInterfaceU3Ek__BackingField;
	bool ___U3CIsAbstractU3Ek__BackingField;
	bool ___U3CIsArrayU3Ek__BackingField;
	bool ___U3CIsMultidimensionalArrayU3Ek__BackingField;
	bool ___U3CIsEnumU3Ek__BackingField;
	bool ___U3CIsEnumFlagsU3Ek__BackingField;
	bool ___U3CIsNullableU3Ek__BackingField;
	bool ___U3CIsObjectU3Ek__BackingField;
	bool ___U3CIsStringU3Ek__BackingField;
	bool ___U3CIsContainerU3Ek__BackingField;
	bool ___U3CCanBeNullU3Ek__BackingField;
	bool ___U3CIsPrimitiveOrStringU3Ek__BackingField;
	bool ___U3CIsAbstractOrInterfaceU3Ek__BackingField;
	bool ___U3CIsUnityObjectU3Ek__BackingField;
	bool ___U3CIsLazyLoadReferenceU3Ek__BackingField;
};
struct TypeTraits_1_tA6D1100439FC903C4E5199EE4D277273E18BF039_StaticFields
{
	bool ___U3CIsValueTypeU3Ek__BackingField;
	bool ___U3CIsPrimitiveU3Ek__BackingField;
	bool ___U3CIsInterfaceU3Ek__BackingField;
	bool ___U3CIsAbstractU3Ek__BackingField;
	bool ___U3CIsArrayU3Ek__BackingField;
	bool ___U3CIsMultidimensionalArrayU3Ek__BackingField;
	bool ___U3CIsEnumU3Ek__BackingField;
	bool ___U3CIsEnumFlagsU3Ek__BackingField;
	bool ___U3CIsNullableU3Ek__BackingField;
	bool ___U3CIsObjectU3Ek__BackingField;
	bool ___U3CIsStringU3Ek__BackingField;
	bool ___U3CIsContainerU3Ek__BackingField;
	bool ___U3CCanBeNullU3Ek__BackingField;
	bool ___U3CIsPrimitiveOrStringU3Ek__BackingField;
	bool ___U3CIsAbstractOrInterfaceU3Ek__BackingField;
	bool ___U3CIsUnityObjectU3Ek__BackingField;
	bool ___U3CIsLazyLoadReferenceU3Ek__BackingField;
};
struct TypeTraits_1_t94405784E845EA464968A7BA6455EE4082C988EF_StaticFields
{
	bool ___U3CIsValueTypeU3Ek__BackingField;
	bool ___U3CIsPrimitiveU3Ek__BackingField;
	bool ___U3CIsInterfaceU3Ek__BackingField;
	bool ___U3CIsAbstractU3Ek__BackingField;
	bool ___U3CIsArrayU3Ek__BackingField;
	bool ___U3CIsMultidimensionalArrayU3Ek__BackingField;
	bool ___U3CIsEnumU3Ek__BackingField;
	bool ___U3CIsEnumFlagsU3Ek__BackingField;
	bool ___U3CIsNullableU3Ek__BackingField;
	bool ___U3CIsObjectU3Ek__BackingField;
	bool ___U3CIsStringU3Ek__BackingField;
	bool ___U3CIsContainerU3Ek__BackingField;
	bool ___U3CCanBeNullU3Ek__BackingField;
	bool ___U3CIsPrimitiveOrStringU3Ek__BackingField;
	bool ___U3CIsAbstractOrInterfaceU3Ek__BackingField;
	bool ___U3CIsUnityObjectU3Ek__BackingField;
	bool ___U3CIsLazyLoadReferenceU3Ek__BackingField;
};
struct TypeTraits_1_t14492BDEFA66B94D1A35E842BFAB7898518438E4_StaticFields
{
	bool ___U3CIsValueTypeU3Ek__BackingField;
	bool ___U3CIsPrimitiveU3Ek__BackingField;
	bool ___U3CIsInterfaceU3Ek__BackingField;
	bool ___U3CIsAbstractU3Ek__BackingField;
	bool ___U3CIsArrayU3Ek__BackingField;
	bool ___U3CIsMultidimensionalArrayU3Ek__BackingField;
	bool ___U3CIsEnumU3Ek__BackingField;
	bool ___U3CIsEnumFlagsU3Ek__BackingField;
	bool ___U3CIsNullableU3Ek__BackingField;
	bool ___U3CIsObjectU3Ek__BackingField;
	bool ___U3CIsStringU3Ek__BackingField;
	bool ___U3CIsContainerU3Ek__BackingField;
	bool ___U3CCanBeNullU3Ek__BackingField;
	bool ___U3CIsPrimitiveOrStringU3Ek__BackingField;
	bool ___U3CIsAbstractOrInterfaceU3Ek__BackingField;
	bool ___U3CIsUnityObjectU3Ek__BackingField;
	bool ___U3CIsLazyLoadReferenceU3Ek__BackingField;
};
struct TypeTraits_1_t8883CD81D797B05BC15979287C7B2BC58F033BC9_StaticFields
{
	bool ___U3CIsValueTypeU3Ek__BackingField;
	bool ___U3CIsPrimitiveU3Ek__BackingField;
	bool ___U3CIsInterfaceU3Ek__BackingField;
	bool ___U3CIsAbstractU3Ek__BackingField;
	bool ___U3CIsArrayU3Ek__BackingField;
	bool ___U3CIsMultidimensionalArrayU3Ek__BackingField;
	bool ___U3CIsEnumU3Ek__BackingField;
	bool ___U3CIsEnumFlagsU3Ek__BackingField;
	bool ___U3CIsNullableU3Ek__BackingField;
	bool ___U3CIsObjectU3Ek__BackingField;
	bool ___U3CIsStringU3Ek__BackingField;
	bool ___U3CIsContainerU3Ek__BackingField;
	bool ___U3CCanBeNullU3Ek__BackingField;
	bool ___U3CIsPrimitiveOrStringU3Ek__BackingField;
	bool ___U3CIsAbstractOrInterfaceU3Ek__BackingField;
	bool ___U3CIsUnityObjectU3Ek__BackingField;
	bool ___U3CIsLazyLoadReferenceU3Ek__BackingField;
};
struct TypeTraits_1_tC1A46C3724D2DAD269AF6BD39D20DE59150FDF28_StaticFields
{
	bool ___U3CIsValueTypeU3Ek__BackingField;
	bool ___U3CIsPrimitiveU3Ek__BackingField;
	bool ___U3CIsInterfaceU3Ek__BackingField;
	bool ___U3CIsAbstractU3Ek__BackingField;
	bool ___U3CIsArrayU3Ek__BackingField;
	bool ___U3CIsMultidimensionalArrayU3Ek__BackingField;
	bool ___U3CIsEnumU3Ek__BackingField;
	bool ___U3CIsEnumFlagsU3Ek__BackingField;
	bool ___U3CIsNullableU3Ek__BackingField;
	bool ___U3CIsObjectU3Ek__BackingField;
	bool ___U3CIsStringU3Ek__BackingField;
	bool ___U3CIsContainerU3Ek__BackingField;
	bool ___U3CCanBeNullU3Ek__BackingField;
	bool ___U3CIsPrimitiveOrStringU3Ek__BackingField;
	bool ___U3CIsAbstractOrInterfaceU3Ek__BackingField;
	bool ___U3CIsUnityObjectU3Ek__BackingField;
	bool ___U3CIsLazyLoadReferenceU3Ek__BackingField;
};
struct TypeTraits_1_t9A92FED6D60DACE8C551B7F9D3A8C19FFD695D8A_StaticFields
{
	bool ___U3CIsValueTypeU3Ek__BackingField;
	bool ___U3CIsPrimitiveU3Ek__BackingField;
	bool ___U3CIsInterfaceU3Ek__BackingField;
	bool ___U3CIsAbstractU3Ek__BackingField;
	bool ___U3CIsArrayU3Ek__BackingField;
	bool ___U3CIsMultidimensionalArrayU3Ek__BackingField;
	bool ___U3CIsEnumU3Ek__BackingField;
	bool ___U3CIsEnumFlagsU3Ek__BackingField;
	bool ___U3CIsNullableU3Ek__BackingField;
	bool ___U3CIsObjectU3Ek__BackingField;
	bool ___U3CIsStringU3Ek__BackingField;
	bool ___U3CIsContainerU3Ek__BackingField;
	bool ___U3CCanBeNullU3Ek__BackingField;
	bool ___U3CIsPrimitiveOrStringU3Ek__BackingField;
	bool ___U3CIsAbstractOrInterfaceU3Ek__BackingField;
	bool ___U3CIsUnityObjectU3Ek__BackingField;
	bool ___U3CIsLazyLoadReferenceU3Ek__BackingField;
};
struct TypeTraits_1_tC6016152C0B1EA884A010EA192A177AF6D450C2E_StaticFields
{
	bool ___U3CIsValueTypeU3Ek__BackingField;
	bool ___U3CIsPrimitiveU3Ek__BackingField;
	bool ___U3CIsInterfaceU3Ek__BackingField;
	bool ___U3CIsAbstractU3Ek__BackingField;
	bool ___U3CIsArrayU3Ek__BackingField;
	bool ___U3CIsMultidimensionalArrayU3Ek__BackingField;
	bool ___U3CIsEnumU3Ek__BackingField;
	bool ___U3CIsEnumFlagsU3Ek__BackingField;
	bool ___U3CIsNullableU3Ek__BackingField;
	bool ___U3CIsObjectU3Ek__BackingField;
	bool ___U3CIsStringU3Ek__BackingField;
	bool ___U3CIsContainerU3Ek__BackingField;
	bool ___U3CCanBeNullU3Ek__BackingField;
	bool ___U3CIsPrimitiveOrStringU3Ek__BackingField;
	bool ___U3CIsAbstractOrInterfaceU3Ek__BackingField;
	bool ___U3CIsUnityObjectU3Ek__BackingField;
	bool ___U3CIsLazyLoadReferenceU3Ek__BackingField;
};
struct TypeTraits_1_t2F0140ACB0515BDDC870EC97E27CB7FE1A3E632B_StaticFields
{
	bool ___U3CIsValueTypeU3Ek__BackingField;
	bool ___U3CIsPrimitiveU3Ek__BackingField;
	bool ___U3CIsInterfaceU3Ek__BackingField;
	bool ___U3CIsAbstractU3Ek__BackingField;
	bool ___U3CIsArrayU3Ek__BackingField;
	bool ___U3CIsMultidimensionalArrayU3Ek__BackingField;
	bool ___U3CIsEnumU3Ek__BackingField;
	bool ___U3CIsEnumFlagsU3Ek__BackingField;
	bool ___U3CIsNullableU3Ek__BackingField;
	bool ___U3CIsObjectU3Ek__BackingField;
	bool ___U3CIsStringU3Ek__BackingField;
	bool ___U3CIsContainerU3Ek__BackingField;
	bool ___U3CCanBeNullU3Ek__BackingField;
	bool ___U3CIsPrimitiveOrStringU3Ek__BackingField;
	bool ___U3CIsAbstractOrInterfaceU3Ek__BackingField;
	bool ___U3CIsUnityObjectU3Ek__BackingField;
	bool ___U3CIsLazyLoadReferenceU3Ek__BackingField;
};
struct TypeTraits_1_t489E41DF3938E924D32457D7DE82598F4FD0A2DE_StaticFields
{
	bool ___U3CIsValueTypeU3Ek__BackingField;
	bool ___U3CIsPrimitiveU3Ek__BackingField;
	bool ___U3CIsInterfaceU3Ek__BackingField;
	bool ___U3CIsAbstractU3Ek__BackingField;
	bool ___U3CIsArrayU3Ek__BackingField;
	bool ___U3CIsMultidimensionalArrayU3Ek__BackingField;
	bool ___U3CIsEnumU3Ek__BackingField;
	bool ___U3CIsEnumFlagsU3Ek__BackingField;
	bool ___U3CIsNullableU3Ek__BackingField;
	bool ___U3CIsObjectU3Ek__BackingField;
	bool ___U3CIsStringU3Ek__BackingField;
	bool ___U3CIsContainerU3Ek__BackingField;
	bool ___U3CCanBeNullU3Ek__BackingField;
	bool ___U3CIsPrimitiveOrStringU3Ek__BackingField;
	bool ___U3CIsAbstractOrInterfaceU3Ek__BackingField;
	bool ___U3CIsUnityObjectU3Ek__BackingField;
	bool ___U3CIsLazyLoadReferenceU3Ek__BackingField;
};
struct TypeTraits_1_tB9DCCD3BBF3EE862519183C720AAC6BA3A86B1D1_StaticFields
{
	bool ___U3CIsValueTypeU3Ek__BackingField;
	bool ___U3CIsPrimitiveU3Ek__BackingField;
	bool ___U3CIsInterfaceU3Ek__BackingField;
	bool ___U3CIsAbstractU3Ek__BackingField;
	bool ___U3CIsArrayU3Ek__BackingField;
	bool ___U3CIsMultidimensionalArrayU3Ek__BackingField;
	bool ___U3CIsEnumU3Ek__BackingField;
	bool ___U3CIsEnumFlagsU3Ek__BackingField;
	bool ___U3CIsNullableU3Ek__BackingField;
	bool ___U3CIsObjectU3Ek__BackingField;
	bool ___U3CIsStringU3Ek__BackingField;
	bool ___U3CIsContainerU3Ek__BackingField;
	bool ___U3CCanBeNullU3Ek__BackingField;
	bool ___U3CIsPrimitiveOrStringU3Ek__BackingField;
	bool ___U3CIsAbstractOrInterfaceU3Ek__BackingField;
	bool ___U3CIsUnityObjectU3Ek__BackingField;
	bool ___U3CIsLazyLoadReferenceU3Ek__BackingField;
};
struct TypeTraits_1_t7FBD6A3FBFE466CC7C2D8D3C046790A1B7E343E9_StaticFields
{
	bool ___U3CIsValueTypeU3Ek__BackingField;
	bool ___U3CIsPrimitiveU3Ek__BackingField;
	bool ___U3CIsInterfaceU3Ek__BackingField;
	bool ___U3CIsAbstractU3Ek__BackingField;
	bool ___U3CIsArrayU3Ek__BackingField;
	bool ___U3CIsMultidimensionalArrayU3Ek__BackingField;
	bool ___U3CIsEnumU3Ek__BackingField;
	bool ___U3CIsEnumFlagsU3Ek__BackingField;
	bool ___U3CIsNullableU3Ek__BackingField;
	bool ___U3CIsObjectU3Ek__BackingField;
	bool ___U3CIsStringU3Ek__BackingField;
	bool ___U3CIsContainerU3Ek__BackingField;
	bool ___U3CCanBeNullU3Ek__BackingField;
	bool ___U3CIsPrimitiveOrStringU3Ek__BackingField;
	bool ___U3CIsAbstractOrInterfaceU3Ek__BackingField;
	bool ___U3CIsUnityObjectU3Ek__BackingField;
	bool ___U3CIsLazyLoadReferenceU3Ek__BackingField;
};
struct TypeTraits_1_tFAC2D7C6B051CC5476CDC3CD6449AED4A5D87408_StaticFields
{
	bool ___U3CIsValueTypeU3Ek__BackingField;
	bool ___U3CIsPrimitiveU3Ek__BackingField;
	bool ___U3CIsInterfaceU3Ek__BackingField;
	bool ___U3CIsAbstractU3Ek__BackingField;
	bool ___U3CIsArrayU3Ek__BackingField;
	bool ___U3CIsMultidimensionalArrayU3Ek__BackingField;
	bool ___U3CIsEnumU3Ek__BackingField;
	bool ___U3CIsEnumFlagsU3Ek__BackingField;
	bool ___U3CIsNullableU3Ek__BackingField;
	bool ___U3CIsObjectU3Ek__BackingField;
	bool ___U3CIsStringU3Ek__BackingField;
	bool ___U3CIsContainerU3Ek__BackingField;
	bool ___U3CCanBeNullU3Ek__BackingField;
	bool ___U3CIsPrimitiveOrStringU3Ek__BackingField;
	bool ___U3CIsAbstractOrInterfaceU3Ek__BackingField;
	bool ___U3CIsUnityObjectU3Ek__BackingField;
	bool ___U3CIsLazyLoadReferenceU3Ek__BackingField;
};
struct TypeTraits_1_t3F99D60DF484D7154D83563634764473B340414C_StaticFields
{
	bool ___U3CIsValueTypeU3Ek__BackingField;
	bool ___U3CIsPrimitiveU3Ek__BackingField;
	bool ___U3CIsInterfaceU3Ek__BackingField;
	bool ___U3CIsAbstractU3Ek__BackingField;
	bool ___U3CIsArrayU3Ek__BackingField;
	bool ___U3CIsMultidimensionalArrayU3Ek__BackingField;
	bool ___U3CIsEnumU3Ek__BackingField;
	bool ___U3CIsEnumFlagsU3Ek__BackingField;
	bool ___U3CIsNullableU3Ek__BackingField;
	bool ___U3CIsObjectU3Ek__BackingField;
	bool ___U3CIsStringU3Ek__BackingField;
	bool ___U3CIsContainerU3Ek__BackingField;
	bool ___U3CCanBeNullU3Ek__BackingField;
	bool ___U3CIsPrimitiveOrStringU3Ek__BackingField;
	bool ___U3CIsAbstractOrInterfaceU3Ek__BackingField;
	bool ___U3CIsUnityObjectU3Ek__BackingField;
	bool ___U3CIsLazyLoadReferenceU3Ek__BackingField;
};
struct TypeTraits_1_t202E31FDCB5BFA14FDF87807FDAF5B04EB5F8034_StaticFields
{
	bool ___U3CIsValueTypeU3Ek__BackingField;
	bool ___U3CIsPrimitiveU3Ek__BackingField;
	bool ___U3CIsInterfaceU3Ek__BackingField;
	bool ___U3CIsAbstractU3Ek__BackingField;
	bool ___U3CIsArrayU3Ek__BackingField;
	bool ___U3CIsMultidimensionalArrayU3Ek__BackingField;
	bool ___U3CIsEnumU3Ek__BackingField;
	bool ___U3CIsEnumFlagsU3Ek__BackingField;
	bool ___U3CIsNullableU3Ek__BackingField;
	bool ___U3CIsObjectU3Ek__BackingField;
	bool ___U3CIsStringU3Ek__BackingField;
	bool ___U3CIsContainerU3Ek__BackingField;
	bool ___U3CCanBeNullU3Ek__BackingField;
	bool ___U3CIsPrimitiveOrStringU3Ek__BackingField;
	bool ___U3CIsAbstractOrInterfaceU3Ek__BackingField;
	bool ___U3CIsUnityObjectU3Ek__BackingField;
	bool ___U3CIsLazyLoadReferenceU3Ek__BackingField;
};
struct TypeTraits_1_tD909FCFAF79D42896A1FC2CD20FB1ABCAAA257DD_StaticFields
{
	bool ___U3CIsValueTypeU3Ek__BackingField;
	bool ___U3CIsPrimitiveU3Ek__BackingField;
	bool ___U3CIsInterfaceU3Ek__BackingField;
	bool ___U3CIsAbstractU3Ek__BackingField;
	bool ___U3CIsArrayU3Ek__BackingField;
	bool ___U3CIsMultidimensionalArrayU3Ek__BackingField;
	bool ___U3CIsEnumU3Ek__BackingField;
	bool ___U3CIsEnumFlagsU3Ek__BackingField;
	bool ___U3CIsNullableU3Ek__BackingField;
	bool ___U3CIsObjectU3Ek__BackingField;
	bool ___U3CIsStringU3Ek__BackingField;
	bool ___U3CIsContainerU3Ek__BackingField;
	bool ___U3CCanBeNullU3Ek__BackingField;
	bool ___U3CIsPrimitiveOrStringU3Ek__BackingField;
	bool ___U3CIsAbstractOrInterfaceU3Ek__BackingField;
	bool ___U3CIsUnityObjectU3Ek__BackingField;
	bool ___U3CIsLazyLoadReferenceU3Ek__BackingField;
};
struct TypeTraits_1_tFA0B43A2A3A7C2204717987FEC00B04AA9F81F00_StaticFields
{
	bool ___U3CIsValueTypeU3Ek__BackingField;
	bool ___U3CIsPrimitiveU3Ek__BackingField;
	bool ___U3CIsInterfaceU3Ek__BackingField;
	bool ___U3CIsAbstractU3Ek__BackingField;
	bool ___U3CIsArrayU3Ek__BackingField;
	bool ___U3CIsMultidimensionalArrayU3Ek__BackingField;
	bool ___U3CIsEnumU3Ek__BackingField;
	bool ___U3CIsEnumFlagsU3Ek__BackingField;
	bool ___U3CIsNullableU3Ek__BackingField;
	bool ___U3CIsObjectU3Ek__BackingField;
	bool ___U3CIsStringU3Ek__BackingField;
	bool ___U3CIsContainerU3Ek__BackingField;
	bool ___U3CCanBeNullU3Ek__BackingField;
	bool ___U3CIsPrimitiveOrStringU3Ek__BackingField;
	bool ___U3CIsAbstractOrInterfaceU3Ek__BackingField;
	bool ___U3CIsUnityObjectU3Ek__BackingField;
	bool ___U3CIsLazyLoadReferenceU3Ek__BackingField;
};
struct TypeTraits_1_t1702AD010C5DC0B1F26D46D5D2A182E9CAFCD640_StaticFields
{
	bool ___U3CIsValueTypeU3Ek__BackingField;
	bool ___U3CIsPrimitiveU3Ek__BackingField;
	bool ___U3CIsInterfaceU3Ek__BackingField;
	bool ___U3CIsAbstractU3Ek__BackingField;
	bool ___U3CIsArrayU3Ek__BackingField;
	bool ___U3CIsMultidimensionalArrayU3Ek__BackingField;
	bool ___U3CIsEnumU3Ek__BackingField;
	bool ___U3CIsEnumFlagsU3Ek__BackingField;
	bool ___U3CIsNullableU3Ek__BackingField;
	bool ___U3CIsObjectU3Ek__BackingField;
	bool ___U3CIsStringU3Ek__BackingField;
	bool ___U3CIsContainerU3Ek__BackingField;
	bool ___U3CCanBeNullU3Ek__BackingField;
	bool ___U3CIsPrimitiveOrStringU3Ek__BackingField;
	bool ___U3CIsAbstractOrInterfaceU3Ek__BackingField;
	bool ___U3CIsUnityObjectU3Ek__BackingField;
	bool ___U3CIsLazyLoadReferenceU3Ek__BackingField;
};
struct TypeTraits_1_tFB3FC779258BD8C9717811E3C3FB85E125EFC8FB_StaticFields
{
	bool ___U3CIsValueTypeU3Ek__BackingField;
	bool ___U3CIsPrimitiveU3Ek__BackingField;
	bool ___U3CIsInterfaceU3Ek__BackingField;
	bool ___U3CIsAbstractU3Ek__BackingField;
	bool ___U3CIsArrayU3Ek__BackingField;
	bool ___U3CIsMultidimensionalArrayU3Ek__BackingField;
	bool ___U3CIsEnumU3Ek__BackingField;
	bool ___U3CIsEnumFlagsU3Ek__BackingField;
	bool ___U3CIsNullableU3Ek__BackingField;
	bool ___U3CIsObjectU3Ek__BackingField;
	bool ___U3CIsStringU3Ek__BackingField;
	bool ___U3CIsContainerU3Ek__BackingField;
	bool ___U3CCanBeNullU3Ek__BackingField;
	bool ___U3CIsPrimitiveOrStringU3Ek__BackingField;
	bool ___U3CIsAbstractOrInterfaceU3Ek__BackingField;
	bool ___U3CIsUnityObjectU3Ek__BackingField;
	bool ___U3CIsLazyLoadReferenceU3Ek__BackingField;
};
struct TypeTraits_1_tCFF7A75C3914FB515773955DB32BE7BC4A1346DF_StaticFields
{
	bool ___U3CIsValueTypeU3Ek__BackingField;
	bool ___U3CIsPrimitiveU3Ek__BackingField;
	bool ___U3CIsInterfaceU3Ek__BackingField;
	bool ___U3CIsAbstractU3Ek__BackingField;
	bool ___U3CIsArrayU3Ek__BackingField;
	bool ___U3CIsMultidimensionalArrayU3Ek__BackingField;
	bool ___U3CIsEnumU3Ek__BackingField;
	bool ___U3CIsEnumFlagsU3Ek__BackingField;
	bool ___U3CIsNullableU3Ek__BackingField;
	bool ___U3CIsObjectU3Ek__BackingField;
	bool ___U3CIsStringU3Ek__BackingField;
	bool ___U3CIsContainerU3Ek__BackingField;
	bool ___U3CCanBeNullU3Ek__BackingField;
	bool ___U3CIsPrimitiveOrStringU3Ek__BackingField;
	bool ___U3CIsAbstractOrInterfaceU3Ek__BackingField;
	bool ___U3CIsUnityObjectU3Ek__BackingField;
	bool ___U3CIsLazyLoadReferenceU3Ek__BackingField;
};
struct TypeTraits_1_tCC4BDF8E0A12FD764908EC189D75E770E4C60943_StaticFields
{
	bool ___U3CIsValueTypeU3Ek__BackingField;
	bool ___U3CIsPrimitiveU3Ek__BackingField;
	bool ___U3CIsInterfaceU3Ek__BackingField;
	bool ___U3CIsAbstractU3Ek__BackingField;
	bool ___U3CIsArrayU3Ek__BackingField;
	bool ___U3CIsMultidimensionalArrayU3Ek__BackingField;
	bool ___U3CIsEnumU3Ek__BackingField;
	bool ___U3CIsEnumFlagsU3Ek__BackingField;
	bool ___U3CIsNullableU3Ek__BackingField;
	bool ___U3CIsObjectU3Ek__BackingField;
	bool ___U3CIsStringU3Ek__BackingField;
	bool ___U3CIsContainerU3Ek__BackingField;
	bool ___U3CCanBeNullU3Ek__BackingField;
	bool ___U3CIsPrimitiveOrStringU3Ek__BackingField;
	bool ___U3CIsAbstractOrInterfaceU3Ek__BackingField;
	bool ___U3CIsUnityObjectU3Ek__BackingField;
	bool ___U3CIsLazyLoadReferenceU3Ek__BackingField;
};
struct TypeTraits_1_t757ADFB4D991E864C5C73DA2C8ECE7DB437E2DDF_StaticFields
{
	bool ___U3CIsValueTypeU3Ek__BackingField;
	bool ___U3CIsPrimitiveU3Ek__BackingField;
	bool ___U3CIsInterfaceU3Ek__BackingField;
	bool ___U3CIsAbstractU3Ek__BackingField;
	bool ___U3CIsArrayU3Ek__BackingField;
	bool ___U3CIsMultidimensionalArrayU3Ek__BackingField;
	bool ___U3CIsEnumU3Ek__BackingField;
	bool ___U3CIsEnumFlagsU3Ek__BackingField;
	bool ___U3CIsNullableU3Ek__BackingField;
	bool ___U3CIsObjectU3Ek__BackingField;
	bool ___U3CIsStringU3Ek__BackingField;
	bool ___U3CIsContainerU3Ek__BackingField;
	bool ___U3CCanBeNullU3Ek__BackingField;
	bool ___U3CIsPrimitiveOrStringU3Ek__BackingField;
	bool ___U3CIsAbstractOrInterfaceU3Ek__BackingField;
	bool ___U3CIsUnityObjectU3Ek__BackingField;
	bool ___U3CIsLazyLoadReferenceU3Ek__BackingField;
};
struct TypeTraits_1_tC847C5AECFD56D7A03E78146847095A698E8A9D6_StaticFields
{
	bool ___U3CIsValueTypeU3Ek__BackingField;
	bool ___U3CIsPrimitiveU3Ek__BackingField;
	bool ___U3CIsInterfaceU3Ek__BackingField;
	bool ___U3CIsAbstractU3Ek__BackingField;
	bool ___U3CIsArrayU3Ek__BackingField;
	bool ___U3CIsMultidimensionalArrayU3Ek__BackingField;
	bool ___U3CIsEnumU3Ek__BackingField;
	bool ___U3CIsEnumFlagsU3Ek__BackingField;
	bool ___U3CIsNullableU3Ek__BackingField;
	bool ___U3CIsObjectU3Ek__BackingField;
	bool ___U3CIsStringU3Ek__BackingField;
	bool ___U3CIsContainerU3Ek__BackingField;
	bool ___U3CCanBeNullU3Ek__BackingField;
	bool ___U3CIsPrimitiveOrStringU3Ek__BackingField;
	bool ___U3CIsAbstractOrInterfaceU3Ek__BackingField;
	bool ___U3CIsUnityObjectU3Ek__BackingField;
	bool ___U3CIsLazyLoadReferenceU3Ek__BackingField;
};
struct TypeTraits_1_t2745081C9EBBFB683CA88BDE5D022B3E28F023BC_StaticFields
{
	bool ___U3CIsValueTypeU3Ek__BackingField;
	bool ___U3CIsPrimitiveU3Ek__BackingField;
	bool ___U3CIsInterfaceU3Ek__BackingField;
	bool ___U3CIsAbstractU3Ek__BackingField;
	bool ___U3CIsArrayU3Ek__BackingField;
	bool ___U3CIsMultidimensionalArrayU3Ek__BackingField;
	bool ___U3CIsEnumU3Ek__BackingField;
	bool ___U3CIsEnumFlagsU3Ek__BackingField;
	bool ___U3CIsNullableU3Ek__BackingField;
	bool ___U3CIsObjectU3Ek__BackingField;
	bool ___U3CIsStringU3Ek__BackingField;
	bool ___U3CIsContainerU3Ek__BackingField;
	bool ___U3CCanBeNullU3Ek__BackingField;
	bool ___U3CIsPrimitiveOrStringU3Ek__BackingField;
	bool ___U3CIsAbstractOrInterfaceU3Ek__BackingField;
	bool ___U3CIsUnityObjectU3Ek__BackingField;
	bool ___U3CIsLazyLoadReferenceU3Ek__BackingField;
};
struct TypeTraits_1_t9E0AB7A057AA6EE1CF91911858169EA0D58BB816_StaticFields
{
	bool ___U3CIsValueTypeU3Ek__BackingField;
	bool ___U3CIsPrimitiveU3Ek__BackingField;
	bool ___U3CIsInterfaceU3Ek__BackingField;
	bool ___U3CIsAbstractU3Ek__BackingField;
	bool ___U3CIsArrayU3Ek__BackingField;
	bool ___U3CIsMultidimensionalArrayU3Ek__BackingField;
	bool ___U3CIsEnumU3Ek__BackingField;
	bool ___U3CIsEnumFlagsU3Ek__BackingField;
	bool ___U3CIsNullableU3Ek__BackingField;
	bool ___U3CIsObjectU3Ek__BackingField;
	bool ___U3CIsStringU3Ek__BackingField;
	bool ___U3CIsContainerU3Ek__BackingField;
	bool ___U3CCanBeNullU3Ek__BackingField;
	bool ___U3CIsPrimitiveOrStringU3Ek__BackingField;
	bool ___U3CIsAbstractOrInterfaceU3Ek__BackingField;
	bool ___U3CIsUnityObjectU3Ek__BackingField;
	bool ___U3CIsLazyLoadReferenceU3Ek__BackingField;
};
struct TypeTraits_1_tEC4AD2AA03E1549DCDDCA8138E36D91F7BF393BB_StaticFields
{
	bool ___U3CIsValueTypeU3Ek__BackingField;
	bool ___U3CIsPrimitiveU3Ek__BackingField;
	bool ___U3CIsInterfaceU3Ek__BackingField;
	bool ___U3CIsAbstractU3Ek__BackingField;
	bool ___U3CIsArrayU3Ek__BackingField;
	bool ___U3CIsMultidimensionalArrayU3Ek__BackingField;
	bool ___U3CIsEnumU3Ek__BackingField;
	bool ___U3CIsEnumFlagsU3Ek__BackingField;
	bool ___U3CIsNullableU3Ek__BackingField;
	bool ___U3CIsObjectU3Ek__BackingField;
	bool ___U3CIsStringU3Ek__BackingField;
	bool ___U3CIsContainerU3Ek__BackingField;
	bool ___U3CCanBeNullU3Ek__BackingField;
	bool ___U3CIsPrimitiveOrStringU3Ek__BackingField;
	bool ___U3CIsAbstractOrInterfaceU3Ek__BackingField;
	bool ___U3CIsUnityObjectU3Ek__BackingField;
	bool ___U3CIsLazyLoadReferenceU3Ek__BackingField;
};
struct TypeTraits_1_tB395B95685AE971ABD5B79C40A58224E776FC934_StaticFields
{
	bool ___U3CIsValueTypeU3Ek__BackingField;
	bool ___U3CIsPrimitiveU3Ek__BackingField;
	bool ___U3CIsInterfaceU3Ek__BackingField;
	bool ___U3CIsAbstractU3Ek__BackingField;
	bool ___U3CIsArrayU3Ek__BackingField;
	bool ___U3CIsMultidimensionalArrayU3Ek__BackingField;
	bool ___U3CIsEnumU3Ek__BackingField;
	bool ___U3CIsEnumFlagsU3Ek__BackingField;
	bool ___U3CIsNullableU3Ek__BackingField;
	bool ___U3CIsObjectU3Ek__BackingField;
	bool ___U3CIsStringU3Ek__BackingField;
	bool ___U3CIsContainerU3Ek__BackingField;
	bool ___U3CCanBeNullU3Ek__BackingField;
	bool ___U3CIsPrimitiveOrStringU3Ek__BackingField;
	bool ___U3CIsAbstractOrInterfaceU3Ek__BackingField;
	bool ___U3CIsUnityObjectU3Ek__BackingField;
	bool ___U3CIsLazyLoadReferenceU3Ek__BackingField;
};
struct TypeTraits_1_t71057E7D8F22A723DE8C778E71218D6DDFD2BAF0_StaticFields
{
	bool ___U3CIsValueTypeU3Ek__BackingField;
	bool ___U3CIsPrimitiveU3Ek__BackingField;
	bool ___U3CIsInterfaceU3Ek__BackingField;
	bool ___U3CIsAbstractU3Ek__BackingField;
	bool ___U3CIsArrayU3Ek__BackingField;
	bool ___U3CIsMultidimensionalArrayU3Ek__BackingField;
	bool ___U3CIsEnumU3Ek__BackingField;
	bool ___U3CIsEnumFlagsU3Ek__BackingField;
	bool ___U3CIsNullableU3Ek__BackingField;
	bool ___U3CIsObjectU3Ek__BackingField;
	bool ___U3CIsStringU3Ek__BackingField;
	bool ___U3CIsContainerU3Ek__BackingField;
	bool ___U3CCanBeNullU3Ek__BackingField;
	bool ___U3CIsPrimitiveOrStringU3Ek__BackingField;
	bool ___U3CIsAbstractOrInterfaceU3Ek__BackingField;
	bool ___U3CIsUnityObjectU3Ek__BackingField;
	bool ___U3CIsLazyLoadReferenceU3Ek__BackingField;
};
struct TypeTraits_1_t863F95920EE834C0519085F7BDCA06C58BCD1DE3_StaticFields
{
	bool ___U3CIsValueTypeU3Ek__BackingField;
	bool ___U3CIsPrimitiveU3Ek__BackingField;
	bool ___U3CIsInterfaceU3Ek__BackingField;
	bool ___U3CIsAbstractU3Ek__BackingField;
	bool ___U3CIsArrayU3Ek__BackingField;
	bool ___U3CIsMultidimensionalArrayU3Ek__BackingField;
	bool ___U3CIsEnumU3Ek__BackingField;
	bool ___U3CIsEnumFlagsU3Ek__BackingField;
	bool ___U3CIsNullableU3Ek__BackingField;
	bool ___U3CIsObjectU3Ek__BackingField;
	bool ___U3CIsStringU3Ek__BackingField;
	bool ___U3CIsContainerU3Ek__BackingField;
	bool ___U3CCanBeNullU3Ek__BackingField;
	bool ___U3CIsPrimitiveOrStringU3Ek__BackingField;
	bool ___U3CIsAbstractOrInterfaceU3Ek__BackingField;
	bool ___U3CIsUnityObjectU3Ek__BackingField;
	bool ___U3CIsLazyLoadReferenceU3Ek__BackingField;
};
struct TypeTraits_1_t621E3790C21984BE382EC32D6FE8EF59F9C81E4F_StaticFields
{
	bool ___U3CIsValueTypeU3Ek__BackingField;
	bool ___U3CIsPrimitiveU3Ek__BackingField;
	bool ___U3CIsInterfaceU3Ek__BackingField;
	bool ___U3CIsAbstractU3Ek__BackingField;
	bool ___U3CIsArrayU3Ek__BackingField;
	bool ___U3CIsMultidimensionalArrayU3Ek__BackingField;
	bool ___U3CIsEnumU3Ek__BackingField;
	bool ___U3CIsEnumFlagsU3Ek__BackingField;
	bool ___U3CIsNullableU3Ek__BackingField;
	bool ___U3CIsObjectU3Ek__BackingField;
	bool ___U3CIsStringU3Ek__BackingField;
	bool ___U3CIsContainerU3Ek__BackingField;
	bool ___U3CCanBeNullU3Ek__BackingField;
	bool ___U3CIsPrimitiveOrStringU3Ek__BackingField;
	bool ___U3CIsAbstractOrInterfaceU3Ek__BackingField;
	bool ___U3CIsUnityObjectU3Ek__BackingField;
	bool ___U3CIsLazyLoadReferenceU3Ek__BackingField;
};
struct TypeTraits_1_t3FA85198159658E010E08BB434B6F0D95CCF4310_StaticFields
{
	bool ___U3CIsValueTypeU3Ek__BackingField;
	bool ___U3CIsPrimitiveU3Ek__BackingField;
	bool ___U3CIsInterfaceU3Ek__BackingField;
	bool ___U3CIsAbstractU3Ek__BackingField;
	bool ___U3CIsArrayU3Ek__BackingField;
	bool ___U3CIsMultidimensionalArrayU3Ek__BackingField;
	bool ___U3CIsEnumU3Ek__BackingField;
	bool ___U3CIsEnumFlagsU3Ek__BackingField;
	bool ___U3CIsNullableU3Ek__BackingField;
	bool ___U3CIsObjectU3Ek__BackingField;
	bool ___U3CIsStringU3Ek__BackingField;
	bool ___U3CIsContainerU3Ek__BackingField;
	bool ___U3CCanBeNullU3Ek__BackingField;
	bool ___U3CIsPrimitiveOrStringU3Ek__BackingField;
	bool ___U3CIsAbstractOrInterfaceU3Ek__BackingField;
	bool ___U3CIsUnityObjectU3Ek__BackingField;
	bool ___U3CIsLazyLoadReferenceU3Ek__BackingField;
};
struct TypeTraits_1_t12A4EFA4F288B8AEB9D8AF24C08B0E6BEC4A5283_StaticFields
{
	bool ___U3CIsValueTypeU3Ek__BackingField;
	bool ___U3CIsPrimitiveU3Ek__BackingField;
	bool ___U3CIsInterfaceU3Ek__BackingField;
	bool ___U3CIsAbstractU3Ek__BackingField;
	bool ___U3CIsArrayU3Ek__BackingField;
	bool ___U3CIsMultidimensionalArrayU3Ek__BackingField;
	bool ___U3CIsEnumU3Ek__BackingField;
	bool ___U3CIsEnumFlagsU3Ek__BackingField;
	bool ___U3CIsNullableU3Ek__BackingField;
	bool ___U3CIsObjectU3Ek__BackingField;
	bool ___U3CIsStringU3Ek__BackingField;
	bool ___U3CIsContainerU3Ek__BackingField;
	bool ___U3CCanBeNullU3Ek__BackingField;
	bool ___U3CIsPrimitiveOrStringU3Ek__BackingField;
	bool ___U3CIsAbstractOrInterfaceU3Ek__BackingField;
	bool ___U3CIsUnityObjectU3Ek__BackingField;
	bool ___U3CIsLazyLoadReferenceU3Ek__BackingField;
};
struct TypeTraits_1_tB2BACC988B95FD4748EEAD9E106CEA7F11DBBE4B_StaticFields
{
	bool ___U3CIsValueTypeU3Ek__BackingField;
	bool ___U3CIsPrimitiveU3Ek__BackingField;
	bool ___U3CIsInterfaceU3Ek__BackingField;
	bool ___U3CIsAbstractU3Ek__BackingField;
	bool ___U3CIsArrayU3Ek__BackingField;
	bool ___U3CIsMultidimensionalArrayU3Ek__BackingField;
	bool ___U3CIsEnumU3Ek__BackingField;
	bool ___U3CIsEnumFlagsU3Ek__BackingField;
	bool ___U3CIsNullableU3Ek__BackingField;
	bool ___U3CIsObjectU3Ek__BackingField;
	bool ___U3CIsStringU3Ek__BackingField;
	bool ___U3CIsContainerU3Ek__BackingField;
	bool ___U3CCanBeNullU3Ek__BackingField;
	bool ___U3CIsPrimitiveOrStringU3Ek__BackingField;
	bool ___U3CIsAbstractOrInterfaceU3Ek__BackingField;
	bool ___U3CIsUnityObjectU3Ek__BackingField;
	bool ___U3CIsLazyLoadReferenceU3Ek__BackingField;
};
struct TypeTraits_1_tE403F840B1E4A05D3004758D60018F70BE11D92D_StaticFields
{
	bool ___U3CIsValueTypeU3Ek__BackingField;
	bool ___U3CIsPrimitiveU3Ek__BackingField;
	bool ___U3CIsInterfaceU3Ek__BackingField;
	bool ___U3CIsAbstractU3Ek__BackingField;
	bool ___U3CIsArrayU3Ek__BackingField;
	bool ___U3CIsMultidimensionalArrayU3Ek__BackingField;
	bool ___U3CIsEnumU3Ek__BackingField;
	bool ___U3CIsEnumFlagsU3Ek__BackingField;
	bool ___U3CIsNullableU3Ek__BackingField;
	bool ___U3CIsObjectU3Ek__BackingField;
	bool ___U3CIsStringU3Ek__BackingField;
	bool ___U3CIsContainerU3Ek__BackingField;
	bool ___U3CCanBeNullU3Ek__BackingField;
	bool ___U3CIsPrimitiveOrStringU3Ek__BackingField;
	bool ___U3CIsAbstractOrInterfaceU3Ek__BackingField;
	bool ___U3CIsUnityObjectU3Ek__BackingField;
	bool ___U3CIsLazyLoadReferenceU3Ek__BackingField;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector;
};
struct Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_StaticFields
{
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Zero;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_One;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Up;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Down;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Left;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Right;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Forward;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Back;
};
struct Type_t_StaticFields
{
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder;
	Il2CppChar ___Delimiter;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes;
	RuntimeObject* ___Missing;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif


IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsContainer_m09E64BD1591FB99C645EEBB13818E96BD276A910_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_mD8C1C97EEFB80C1D10345B27C921B3107DC17719_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m34379A3583A38EDDB72134FED4BEF56D2A5D0BC5_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyContainer_TryAccept_TisBackground_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_mF6FF31B397D562D83C0A24424DE4F6B4A5E7EE3C_gshared (RuntimeObject* ___0_visitor, Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsContainer_m3C5F1818CDCF1B3B51278B90926C6423F84B2C3C_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_m0593429012E73872335C7F3058A5D2027B1FF643_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_mF477B5DC4E7614585579DE3FDB399B21C104CB4E_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyContainer_TryAccept_TisBackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56_m3D50143E04ED0F49C6779363F6084E9A26827D57_gshared (RuntimeObject* ___0_visitor, BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsContainer_m0DE5E9583D0EA919AE01523EC7CE7649FFCE6F54_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_mB553A71A1C80612E9D79BBEC3C3CC85355E343FD_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m4B9BF8692A76065F40E050B75EE6702C6C784D30_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyContainer_TryAccept_TisBackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F_mFE49BF0EE9BA94472F29A37E035D2450807460BF_gshared (RuntimeObject* ___0_visitor, BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsContainer_m14E4DAA47CE7873DE5C17F95F3BEFA0869609BB3_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_m1E761EC4F6A20442B87753E1E6E8EA11B5FEE574_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_mD14761B683AB06C19DEE30867E250C46F6C8A11B_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyContainer_TryAccept_TisBackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7_mAB479DE5245FF9524873B80429E940E0C7F43F21_gshared (RuntimeObject* ___0_visitor, BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsContainer_mBE907BDA3A99126677DFF55E587BCD457EB39A4A_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_mDB94662967E66AC074FE137EE4BD9FE82C76C0AB_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m00FCB5EF45C052616B43E1773B7FECC659D28F6E_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyContainer_TryAccept_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mA4496631791398E2C1146B6666206CB67A799D4C_gshared (RuntimeObject* ___0_visitor, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsContainer_m9954C20121DAAFEFE7509702CC85124310BA3F83_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_mAAD948E1BCC65D96F56C5DAD5F0A83D116272304_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m03C73EA225C7C6C16C2639EB5F76A808A2788050_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyContainer_TryAccept_TisCursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82_m998EC4F726294610076C7C460525D0A3670FD943_gshared (RuntimeObject* ___0_visitor, Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsContainer_mBF4BFF0A6D1C23DF7294C1A793CCC3FA21D22822_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_mDDCC371571712BD98B3A2EAA177F5D2E5E97FAD5_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m1D8B7A9107E1AC42133ADBB9D3E09F84BCC142DF_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyContainer_TryAccept_TisEasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4_m4CEB456F13C968A3F03D24002BF37838E229EBB3_gshared (RuntimeObject* ___0_visitor, EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsContainer_m06C3A79C67236D6160E0E130244694827B949182_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_m686F9F739041D767C3ACA256B3A68D6573B73B61_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_mCD2F075EE8FA987FED25F36ACC13C6D0F4A32693_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyContainer_TryAccept_TisFontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_mDBE15826524114DF897566E7853B93939B669D2A_gshared (RuntimeObject* ___0_visitor, FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsContainer_m0D78DAA55CA1CA3AE94272FDFF02D1C1BC1763C6_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_mE0F90826548B0C3102050B135AABD7FCF73A5120_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m11497792427A6500E5BEC1F44B26CED5E4E210BB_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyContainer_TryAccept_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mABCC1382ABBE35AC40535DC61778853B410E6E09_gshared (RuntimeObject* ___0_visitor, int32_t* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsContainer_mE25A4132A83087A571AA1CAE994FA56614EA64D7_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_mB145F76964DE36569385F83F550741253F97BC8B_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m38FEC63D8762D52AF73C146A830156829593F37C_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyContainer_TryAccept_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mE2C5312C7AD108F2362FA0565EE9F7A64FBF635E_gshared (RuntimeObject* ___0_visitor, int32_t* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsContainer_m2299324716E9073847D43B5EE074036241CE2FDB_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_m0D87D0851EC5F34630C609FC128C8673317DCEAA_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_mA5B381E720E0FDAE69EC5B76BA5DD0C67DEABD63_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyContainer_TryAccept_TisLength_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256_mFD5C09CC7FB80860303CD624D0FE8482999D38E1_gshared (RuntimeObject* ___0_visitor, Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsContainer_mF635D475A726AB153ADB8A392F952CD771C9B9D6_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_m735F17A1CDBD434E62378EBF10F8B56495139E17_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m15C2D35A2D23101135FF92723A5F1C06CA8FA59D_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyContainer_TryAccept_TisRuntimeObject_mB6FB92B27875A6970EB6B2F948AE57066573F29D_gshared (RuntimeObject* ___0_visitor, RuntimeObject** ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsContainer_m8743C852501A5A11E54F14DEA2070D10EB63A21F_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_mB861B1B55CFCEBC9DFF4387F456C2AC80B02A103_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_mFD19BE22C91DFC05260F1AA812448E708E0FAFE3_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyContainer_TryAccept_TisRotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_m197D2A535A0FA83B533E74E8EC98DF87A07B836A_gshared (RuntimeObject* ___0_visitor, Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsContainer_m55AA7A282B79A29C3DA24B56683A5897E5F7E9A0_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_mC0DCE60D34CB3B625A7E957DD755BAAE3F5ADE91_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_mC7D50F5D193AA2EF3F84648A392176B9A906180A_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyContainer_TryAccept_TisScale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_m93AC34DAE08AE05780AA25F16DC96BCDC02FE91D_gshared (RuntimeObject* ___0_visitor, Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsContainer_m371300A2F6CA88E8CC34EA1D30226DADF20DF159_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_mE4C358BCE5CA8EAEC8AFCE80969A622525644AE4_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m0581F21AE7DCD3653CA50C2B1A83596515E469CE_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyContainer_TryAccept_TisSerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC_mB8750F45235AFA82A6724320A2F8ACA1AA525DDB_gshared (RuntimeObject* ___0_visitor, SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsContainer_m66017AAD546A97E689F25A40839FDDB2DDC69F2C_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_m1070B18AE5014C462C176214EB504B80ABCF9E56_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_mE0107930FB17433A36E048CFF09C97DDDED87752_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyContainer_TryAccept_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m9CDE3AA2B96127B4CE0770D082481A17743A7799_gshared (RuntimeObject* ___0_visitor, float* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsContainer_mD0ED35F34834D1848D0D597AF906C3F712DAE09B_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_m7220BB2ACCEE1EA2053D2E92E0DBE25DC43647B8_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m73DDE09E2C01B3DF5142420E2426E2A515C308C8_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyContainer_TryAccept_TisStyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B_m8371037627164AAAFB02CA8C9B1A8E9B7D45904F_gshared (RuntimeObject* ___0_visitor, StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsContainer_m37D42BF4D5B4D9B0438EC68FF5805247017DD90D_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_m0285698C5170350BB9326DA5102DE8A5CA6DE357_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m056052FE7567159FC8E6E245B57CCF22EAFB9A0C_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyContainer_TryAccept_TisStyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3_mE8575A040F0962B42852A5EBDAA07B6B7DA6EDE4_gshared (RuntimeObject* ___0_visitor, StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsContainer_m71E5DD5E57922A24E5D8ACDC63720DA12180D119_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_mD22045184FA0539BA7AFCFABEAD125438AD5D418_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_mCF6752FCDB191E6473D9F399BF25CE84E02C61B3_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyContainer_TryAccept_TisStyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866_mD3FB81C2CEE20D3AC2B423BB0560D963465E524A_gshared (RuntimeObject* ___0_visitor, StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsContainer_m392F4C8C66B4A071756DB71F627CAC269285D1BA_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_m33625EC55E4DE2F45D4BB9979B71B6394DCAA84B_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m56D7A6A534892EC5D12D9A62CF04B0A27D3BD35B_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyContainer_TryAccept_TisStyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008_m84F0CCCB010274BA518744F14B2FC6445DCA64E4_gshared (RuntimeObject* ___0_visitor, StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsContainer_m464DECD495CB2BC744CE122AAD07403C501AF87B_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_mE961AAB25B0D1DD6A17564895842AF7BD52468DB_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m914EFA8D02D4B138FB957D9FFF73248121E5D2C0_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyContainer_TryAccept_TisStyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910_mCBBB30A4AD883F139CE44666FD3C8778CB07B16F_gshared (RuntimeObject* ___0_visitor, StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsContainer_m28DFE80F9F70333A9ECB62AE877098092F39A47B_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_mFE2AA6D4EF3606873E12E0201D79FECF7E52BFF5_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_mC864FBD8DC0E7F1EA00C328D2FDEACC7CD9DF1A4_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyContainer_TryAccept_TisStyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610_m2C02CF1F5A9538E557BF82F156DCE7A2995A5328_gshared (RuntimeObject* ___0_visitor, StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsContainer_m72D732937C93BD7AE8F529A0430A8C7906DCD0F3_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_m7A2EAA2C303B5864C0220CBD342C75E269A4AAA3_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m071C355797B42D5CCB33F14B83229C2C0D11580A_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyContainer_TryAccept_TisStyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841_mC1145110F1C81F318995CEEFB20B682D49804A7F_gshared (RuntimeObject* ___0_visitor, StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsContainer_mC27F117CAABDF35DCE60B44ED90CA5E0C316E87B_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_m171E276B62877B02E9840B204D3ED28130D8DFCD_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m9BCC29E05C59AD59DAE817B570638E3899BD6523_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyContainer_TryAccept_TisStyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C_m3B228336F8CC4BED768530FB6DCDC469BC79AB2B_gshared (RuntimeObject* ___0_visitor, StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsContainer_m2503D4240E029F16D5C98BD8DC5B732B8A02C98E_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_m9812594FA23CC694FBDE4CA32625D3FBA1177A29_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m0F180F5B26765420CF3E3E12F04CA3225153AFCA_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyContainer_TryAccept_TisStyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4_m1440A46C83BF7263E40864A952DEC63AF982643D_gshared (RuntimeObject* ___0_visitor, StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsContainer_m748E564407EE5311B3129B6563800575345A24B3_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_mBF67FA3A6F82EA4FD80F246E3D2AB424D28FD667_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_mE15BF77911B4BEB5D3725CFAC54F480025A030CE_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyContainer_TryAccept_TisStyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D_mF91BAFA67958A7398E1F94B6762EBA9CFF390C19_gshared (RuntimeObject* ___0_visitor, StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsContainer_m916B9C203D96F12013B160116CA44AA967C225D4_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_mBE2469309A59E9E64ED306132C6DB40EA211B02B_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m434194C02E674305D5939C3FB4388F1A60128356_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyContainer_TryAccept_TisStyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8_mB9341E816B066B0A26BAD0F13896EBF26F51E9CE_gshared (RuntimeObject* ___0_visitor, StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsContainer_m9DFB57E57F4AC783DEAAC4F0A5E1CB11A90BA299_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_mAB96CAD5D360071A2AC29CEFA10D8376FE5A716C_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_mB64CD1414AA6476F61F0C3568F12424180F97654_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyContainer_TryAccept_TisStylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_m7B2D8DCCDFA8462A7A8420D259FAF18714AE26C8_gshared (RuntimeObject* ___0_visitor, StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsContainer_m908BDA55B06C8C24176F0E7F23FBE5D2CC34DC25_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_mC18B485E8C55F324812CBB67B78A007B739115E4_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m2E1C8DF463CE67BB42937B640C27F546CAB0DE93_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyContainer_TryAccept_TisStyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B_m56D96CE7F98A37D61EFD5E3531CCC994A95F1EED_gshared (RuntimeObject* ___0_visitor, StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsContainer_m26D8E5CB65881B90C23D386F1820AF754B074F26_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_mE022DBB0602AAADCAA703B4A54242852A8965853_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m98BDAC1965215084D492BD054E3438503B1F8176_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyContainer_TryAccept_TisStyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC_m0AC52A2D94D76CAE679622449130C1C2D8BC8F1B_gshared (RuntimeObject* ___0_visitor, StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsContainer_m1D1A832B4A280B5CC5A8F6103512BD85C232D534_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_m989233B2F7F633EFE624A0CF8A5F9D3DAC75F00E_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_mD7AD2570031FF055D5EB8EC2F245A5A638022D20_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyContainer_TryAccept_TisStyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252_mEE806BBA02B2263493CED060EEE1BB5658A03DFC_gshared (RuntimeObject* ___0_visitor, StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsContainer_mB84DCA55DC40F517EE6B897F549822CF99051417_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_m1499F4A014158A9E43B430FA922C10FA9BF42BDA_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m772EE1B98C79503AD94637C553736BDDA5E113E4_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyContainer_TryAccept_TisStyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6_m881CEAED0013770CEC9FF3D498862D9D361EC557_gshared (RuntimeObject* ___0_visitor, StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsContainer_m423D4EE31271BFF343FB125B5237B9FF71CFF524_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_m4BCDE88FF19C72620C04896DCEC626E7A9621B31_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m472AD8D1120723C7E282C958A563BAB1A9843EB4_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyContainer_TryAccept_TisStyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089_mDD40AB576CCBA8847DD3C5DC38B09914537AF56F_gshared (RuntimeObject* ___0_visitor, StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsContainer_m3D4A64F52976BCB0D13C18E6667B03A7DDCBACED_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_m867A30A06DF4DAE601C1437681BE61D0B03D0735_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m6D68904DCEC1B9E468B23D863D622ED2F08B3ACB_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyContainer_TryAccept_TisTextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05_m4ADF89A14B52E7B6CCBAFF6E49ACAE830A118224_gshared (RuntimeObject* ___0_visitor, TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsContainer_m35FC9B6070CEB5A54D8C4333B165F7DCB68D66D9_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_mA68BE2F93E951687D0F1ABE4A6A4A65A00DBB8B3_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m83BB11321A8205868232E6A9791231FCCAEE17E9_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyContainer_TryAccept_TisTimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E_m819FAFDED283FA7D709E3A9C5E5452897535732A_gshared (RuntimeObject* ___0_visitor, TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsContainer_m6A352A501393CAE8E5F280361DA8F7D8C4689AF9_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_mAC32D5C4424D52F5A3E7FE46DC053073AC0B2521_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m908C71E0F54A69691D54C444E2C23EF5C540FD1F_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyContainer_TryAccept_TisTransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502_mE5EBF77562B54CD1975DF95AFDDBBA0B8B0BF9E4_gshared (RuntimeObject* ___0_visitor, TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsContainer_m5324709E9C1E2AFCCE54DFE57CA9E5A134A5D7FC_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_mA069B0BDEC214B763CC8ECBCE3B72C13664A29E8_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m468FD08CF92AA9CE1355826B4E5A8A7B92647567_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyContainer_TryAccept_TisTranslate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_m13B506EBE2662AA1EC36B1496B8EC4914253AAB1_gshared (RuntimeObject* ___0_visitor, Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsContainer_m3CE73AFB74643BE29712805CBCAAE3AA11CEBA7F_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_m81BDFE95146A69F74EE7C1A8E7AF5B5700CF0BB3_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_mC876849E832B2360A89D63D4816C6D9EF7994527_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyContainer_TryAccept_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m86391134C0A805647DED0CEC6F6AA3FBEB6A4F96_gshared (RuntimeObject* ___0_visitor, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsContainer_m645CA7ABB91F0969D300A5965BEBB28C0D8445F3_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_m483FA59577B89A7210F233A7EA408B41FD9723BD_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m64554136176110FBD6D5948F7A8593317282D43D_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyContainer_TryAccept_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mE3B117E9CD2BEF9BEE2858069A392B02963737B6_gshared (RuntimeObject* ___0_visitor, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsContainer_mE287247F6E75ABBF9A49966FC51C6A66A4BF1FBE_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_mD80D3A5E3EBEA503B228255B59012C64EAC0968C_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m2E3E7C39FB0C7BFCE1F3BBFCA4135DF4945EAB8E_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyContainer_TryAccept_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m34950CB76D9D51770C30AA4ACF7C6B99E5A50062_gshared (RuntimeObject* ___0_visitor, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method) ;

inline bool TypeTraits_1_get_IsContainer_m09E64BD1591FB99C645EEBB13818E96BD276A910_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsContainer_m09E64BD1591FB99C645EEBB13818E96BD276A910_gshared_inline)(method);
}
inline bool TypeTraits_1_get_CanBeNull_mD8C1C97EEFB80C1D10345B27C921B3107DC17719_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_CanBeNull_mD8C1C97EEFB80C1D10345B27C921B3107DC17719_gshared_inline)(method);
}
inline bool TypeTraits_1_get_IsValueType_m34379A3583A38EDDB72134FED4BEF56D2A5D0BC5_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsValueType_m34379A3583A38EDDB72134FED4BEF56D2A5D0BC5_gshared_inline)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeTraits_IsContainer_m46D04F3E3219371CC5F133E2CC54BCA46FD72505 (Type_t* ___0_type, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318 (Type_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
inline bool Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849 (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*, RuntimeObject*, RuntimeObject**, const RuntimeMethod*))Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared)(__this, ___0_key, ___1_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673 (Type_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57 (RuntimeArray* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeArray* Array_CreateInstance_m13B202130951A03AF5F52470A19E17D3AD2A8983 (Type_t* ___0_elementType, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172 (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Activator_CreateInstance_mFF030428C64FDDFACC74DFAC97388A1C628BFBCF (Type_t* ___0_type, const RuntimeMethod* method) ;
inline void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329 (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
inline void Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1 (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___0_key, ___1_value, method);
}
inline bool PropertyContainer_TryAccept_TisBackground_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_mF6FF31B397D562D83C0A24424DE4F6B4A5E7EE3C (RuntimeObject* ___0_visitor, Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8*, int32_t*, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE, const RuntimeMethod*))PropertyContainer_TryAccept_TisBackground_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_mF6FF31B397D562D83C0A24424DE4F6B4A5E7EE3C_gshared)(___0_visitor, ___1_container, ___2_returnCode, ___3_parameters, method);
}
inline bool TypeTraits_1_get_IsContainer_m3C5F1818CDCF1B3B51278B90926C6423F84B2C3C_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsContainer_m3C5F1818CDCF1B3B51278B90926C6423F84B2C3C_gshared_inline)(method);
}
inline bool TypeTraits_1_get_CanBeNull_m0593429012E73872335C7F3058A5D2027B1FF643_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_CanBeNull_m0593429012E73872335C7F3058A5D2027B1FF643_gshared_inline)(method);
}
inline bool TypeTraits_1_get_IsValueType_mF477B5DC4E7614585579DE3FDB399B21C104CB4E_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsValueType_mF477B5DC4E7614585579DE3FDB399B21C104CB4E_gshared_inline)(method);
}
inline bool PropertyContainer_TryAccept_TisBackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56_m3D50143E04ED0F49C6779363F6084E9A26827D57 (RuntimeObject* ___0_visitor, BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56*, int32_t*, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE, const RuntimeMethod*))PropertyContainer_TryAccept_TisBackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56_m3D50143E04ED0F49C6779363F6084E9A26827D57_gshared)(___0_visitor, ___1_container, ___2_returnCode, ___3_parameters, method);
}
inline bool TypeTraits_1_get_IsContainer_m0DE5E9583D0EA919AE01523EC7CE7649FFCE6F54_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsContainer_m0DE5E9583D0EA919AE01523EC7CE7649FFCE6F54_gshared_inline)(method);
}
inline bool TypeTraits_1_get_CanBeNull_mB553A71A1C80612E9D79BBEC3C3CC85355E343FD_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_CanBeNull_mB553A71A1C80612E9D79BBEC3C3CC85355E343FD_gshared_inline)(method);
}
inline bool TypeTraits_1_get_IsValueType_m4B9BF8692A76065F40E050B75EE6702C6C784D30_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsValueType_m4B9BF8692A76065F40E050B75EE6702C6C784D30_gshared_inline)(method);
}
inline bool PropertyContainer_TryAccept_TisBackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F_mFE49BF0EE9BA94472F29A37E035D2450807460BF (RuntimeObject* ___0_visitor, BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F*, int32_t*, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE, const RuntimeMethod*))PropertyContainer_TryAccept_TisBackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F_mFE49BF0EE9BA94472F29A37E035D2450807460BF_gshared)(___0_visitor, ___1_container, ___2_returnCode, ___3_parameters, method);
}
inline bool TypeTraits_1_get_IsContainer_m14E4DAA47CE7873DE5C17F95F3BEFA0869609BB3_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsContainer_m14E4DAA47CE7873DE5C17F95F3BEFA0869609BB3_gshared_inline)(method);
}
inline bool TypeTraits_1_get_CanBeNull_m1E761EC4F6A20442B87753E1E6E8EA11B5FEE574_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_CanBeNull_m1E761EC4F6A20442B87753E1E6E8EA11B5FEE574_gshared_inline)(method);
}
inline bool TypeTraits_1_get_IsValueType_mD14761B683AB06C19DEE30867E250C46F6C8A11B_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsValueType_mD14761B683AB06C19DEE30867E250C46F6C8A11B_gshared_inline)(method);
}
inline bool PropertyContainer_TryAccept_TisBackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7_mAB479DE5245FF9524873B80429E940E0C7F43F21 (RuntimeObject* ___0_visitor, BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7*, int32_t*, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE, const RuntimeMethod*))PropertyContainer_TryAccept_TisBackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7_mAB479DE5245FF9524873B80429E940E0C7F43F21_gshared)(___0_visitor, ___1_container, ___2_returnCode, ___3_parameters, method);
}
inline bool TypeTraits_1_get_IsContainer_mBE907BDA3A99126677DFF55E587BCD457EB39A4A_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsContainer_mBE907BDA3A99126677DFF55E587BCD457EB39A4A_gshared_inline)(method);
}
inline bool TypeTraits_1_get_CanBeNull_mDB94662967E66AC074FE137EE4BD9FE82C76C0AB_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_CanBeNull_mDB94662967E66AC074FE137EE4BD9FE82C76C0AB_gshared_inline)(method);
}
inline bool TypeTraits_1_get_IsValueType_m00FCB5EF45C052616B43E1773B7FECC659D28F6E_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsValueType_m00FCB5EF45C052616B43E1773B7FECC659D28F6E_gshared_inline)(method);
}
inline bool PropertyContainer_TryAccept_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mA4496631791398E2C1146B6666206CB67A799D4C (RuntimeObject* ___0_visitor, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*, int32_t*, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE, const RuntimeMethod*))PropertyContainer_TryAccept_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mA4496631791398E2C1146B6666206CB67A799D4C_gshared)(___0_visitor, ___1_container, ___2_returnCode, ___3_parameters, method);
}
inline bool TypeTraits_1_get_IsContainer_m9954C20121DAAFEFE7509702CC85124310BA3F83_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsContainer_m9954C20121DAAFEFE7509702CC85124310BA3F83_gshared_inline)(method);
}
inline bool TypeTraits_1_get_CanBeNull_mAAD948E1BCC65D96F56C5DAD5F0A83D116272304_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_CanBeNull_mAAD948E1BCC65D96F56C5DAD5F0A83D116272304_gshared_inline)(method);
}
inline bool TypeTraits_1_get_IsValueType_m03C73EA225C7C6C16C2639EB5F76A808A2788050_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsValueType_m03C73EA225C7C6C16C2639EB5F76A808A2788050_gshared_inline)(method);
}
inline bool PropertyContainer_TryAccept_TisCursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82_m998EC4F726294610076C7C460525D0A3670FD943 (RuntimeObject* ___0_visitor, Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82*, int32_t*, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE, const RuntimeMethod*))PropertyContainer_TryAccept_TisCursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82_m998EC4F726294610076C7C460525D0A3670FD943_gshared)(___0_visitor, ___1_container, ___2_returnCode, ___3_parameters, method);
}
inline bool TypeTraits_1_get_IsContainer_mBF4BFF0A6D1C23DF7294C1A793CCC3FA21D22822_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsContainer_mBF4BFF0A6D1C23DF7294C1A793CCC3FA21D22822_gshared_inline)(method);
}
inline bool TypeTraits_1_get_CanBeNull_mDDCC371571712BD98B3A2EAA177F5D2E5E97FAD5_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_CanBeNull_mDDCC371571712BD98B3A2EAA177F5D2E5E97FAD5_gshared_inline)(method);
}
inline bool TypeTraits_1_get_IsValueType_m1D8B7A9107E1AC42133ADBB9D3E09F84BCC142DF_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsValueType_m1D8B7A9107E1AC42133ADBB9D3E09F84BCC142DF_gshared_inline)(method);
}
inline bool PropertyContainer_TryAccept_TisEasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4_m4CEB456F13C968A3F03D24002BF37838E229EBB3 (RuntimeObject* ___0_visitor, EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4*, int32_t*, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE, const RuntimeMethod*))PropertyContainer_TryAccept_TisEasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4_m4CEB456F13C968A3F03D24002BF37838E229EBB3_gshared)(___0_visitor, ___1_container, ___2_returnCode, ___3_parameters, method);
}
inline bool TypeTraits_1_get_IsContainer_m06C3A79C67236D6160E0E130244694827B949182_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsContainer_m06C3A79C67236D6160E0E130244694827B949182_gshared_inline)(method);
}
inline bool TypeTraits_1_get_CanBeNull_m686F9F739041D767C3ACA256B3A68D6573B73B61_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_CanBeNull_m686F9F739041D767C3ACA256B3A68D6573B73B61_gshared_inline)(method);
}
inline bool TypeTraits_1_get_IsValueType_mCD2F075EE8FA987FED25F36ACC13C6D0F4A32693_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsValueType_mCD2F075EE8FA987FED25F36ACC13C6D0F4A32693_gshared_inline)(method);
}
inline bool PropertyContainer_TryAccept_TisFontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_mDBE15826524114DF897566E7853B93939B669D2A (RuntimeObject* ___0_visitor, FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C*, int32_t*, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE, const RuntimeMethod*))PropertyContainer_TryAccept_TisFontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_mDBE15826524114DF897566E7853B93939B669D2A_gshared)(___0_visitor, ___1_container, ___2_returnCode, ___3_parameters, method);
}
inline bool TypeTraits_1_get_IsContainer_m0D78DAA55CA1CA3AE94272FDFF02D1C1BC1763C6_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsContainer_m0D78DAA55CA1CA3AE94272FDFF02D1C1BC1763C6_gshared_inline)(method);
}
inline bool TypeTraits_1_get_CanBeNull_mE0F90826548B0C3102050B135AABD7FCF73A5120_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_CanBeNull_mE0F90826548B0C3102050B135AABD7FCF73A5120_gshared_inline)(method);
}
inline bool TypeTraits_1_get_IsValueType_m11497792427A6500E5BEC1F44B26CED5E4E210BB_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsValueType_m11497792427A6500E5BEC1F44B26CED5E4E210BB_gshared_inline)(method);
}
inline bool PropertyContainer_TryAccept_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mABCC1382ABBE35AC40535DC61778853B410E6E09 (RuntimeObject* ___0_visitor, int32_t* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, int32_t*, int32_t*, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE, const RuntimeMethod*))PropertyContainer_TryAccept_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mABCC1382ABBE35AC40535DC61778853B410E6E09_gshared)(___0_visitor, ___1_container, ___2_returnCode, ___3_parameters, method);
}
inline bool TypeTraits_1_get_IsContainer_mE25A4132A83087A571AA1CAE994FA56614EA64D7_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsContainer_mE25A4132A83087A571AA1CAE994FA56614EA64D7_gshared_inline)(method);
}
inline bool TypeTraits_1_get_CanBeNull_mB145F76964DE36569385F83F550741253F97BC8B_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_CanBeNull_mB145F76964DE36569385F83F550741253F97BC8B_gshared_inline)(method);
}
inline bool TypeTraits_1_get_IsValueType_m38FEC63D8762D52AF73C146A830156829593F37C_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsValueType_m38FEC63D8762D52AF73C146A830156829593F37C_gshared_inline)(method);
}
inline bool PropertyContainer_TryAccept_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mE2C5312C7AD108F2362FA0565EE9F7A64FBF635E (RuntimeObject* ___0_visitor, int32_t* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, int32_t*, int32_t*, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE, const RuntimeMethod*))PropertyContainer_TryAccept_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mE2C5312C7AD108F2362FA0565EE9F7A64FBF635E_gshared)(___0_visitor, ___1_container, ___2_returnCode, ___3_parameters, method);
}
inline bool TypeTraits_1_get_IsContainer_m2299324716E9073847D43B5EE074036241CE2FDB_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsContainer_m2299324716E9073847D43B5EE074036241CE2FDB_gshared_inline)(method);
}
inline bool TypeTraits_1_get_CanBeNull_m0D87D0851EC5F34630C609FC128C8673317DCEAA_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_CanBeNull_m0D87D0851EC5F34630C609FC128C8673317DCEAA_gshared_inline)(method);
}
inline bool TypeTraits_1_get_IsValueType_mA5B381E720E0FDAE69EC5B76BA5DD0C67DEABD63_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsValueType_mA5B381E720E0FDAE69EC5B76BA5DD0C67DEABD63_gshared_inline)(method);
}
inline bool PropertyContainer_TryAccept_TisLength_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256_mFD5C09CC7FB80860303CD624D0FE8482999D38E1 (RuntimeObject* ___0_visitor, Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256*, int32_t*, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE, const RuntimeMethod*))PropertyContainer_TryAccept_TisLength_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256_mFD5C09CC7FB80860303CD624D0FE8482999D38E1_gshared)(___0_visitor, ___1_container, ___2_returnCode, ___3_parameters, method);
}
inline bool TypeTraits_1_get_IsContainer_mF635D475A726AB153ADB8A392F952CD771C9B9D6_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsContainer_mF635D475A726AB153ADB8A392F952CD771C9B9D6_gshared_inline)(method);
}
inline bool TypeTraits_1_get_CanBeNull_m735F17A1CDBD434E62378EBF10F8B56495139E17_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_CanBeNull_m735F17A1CDBD434E62378EBF10F8B56495139E17_gshared_inline)(method);
}
inline bool TypeTraits_1_get_IsValueType_m15C2D35A2D23101135FF92723A5F1C06CA8FA59D_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsValueType_m15C2D35A2D23101135FF92723A5F1C06CA8FA59D_gshared_inline)(method);
}
inline bool PropertyContainer_TryAccept_TisRuntimeObject_mB6FB92B27875A6970EB6B2F948AE57066573F29D (RuntimeObject* ___0_visitor, RuntimeObject** ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, RuntimeObject**, int32_t*, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE, const RuntimeMethod*))PropertyContainer_TryAccept_TisRuntimeObject_mB6FB92B27875A6970EB6B2F948AE57066573F29D_gshared)(___0_visitor, ___1_container, ___2_returnCode, ___3_parameters, method);
}
inline bool TypeTraits_1_get_IsContainer_m8743C852501A5A11E54F14DEA2070D10EB63A21F_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsContainer_m8743C852501A5A11E54F14DEA2070D10EB63A21F_gshared_inline)(method);
}
inline bool TypeTraits_1_get_CanBeNull_mB861B1B55CFCEBC9DFF4387F456C2AC80B02A103_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_CanBeNull_mB861B1B55CFCEBC9DFF4387F456C2AC80B02A103_gshared_inline)(method);
}
inline bool TypeTraits_1_get_IsValueType_mFD19BE22C91DFC05260F1AA812448E708E0FAFE3_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsValueType_mFD19BE22C91DFC05260F1AA812448E708E0FAFE3_gshared_inline)(method);
}
inline bool PropertyContainer_TryAccept_TisRotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_m197D2A535A0FA83B533E74E8EC98DF87A07B836A (RuntimeObject* ___0_visitor, Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7*, int32_t*, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE, const RuntimeMethod*))PropertyContainer_TryAccept_TisRotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_m197D2A535A0FA83B533E74E8EC98DF87A07B836A_gshared)(___0_visitor, ___1_container, ___2_returnCode, ___3_parameters, method);
}
inline bool TypeTraits_1_get_IsContainer_m55AA7A282B79A29C3DA24B56683A5897E5F7E9A0_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsContainer_m55AA7A282B79A29C3DA24B56683A5897E5F7E9A0_gshared_inline)(method);
}
inline bool TypeTraits_1_get_CanBeNull_mC0DCE60D34CB3B625A7E957DD755BAAE3F5ADE91_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_CanBeNull_mC0DCE60D34CB3B625A7E957DD755BAAE3F5ADE91_gshared_inline)(method);
}
inline bool TypeTraits_1_get_IsValueType_mC7D50F5D193AA2EF3F84648A392176B9A906180A_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsValueType_mC7D50F5D193AA2EF3F84648A392176B9A906180A_gshared_inline)(method);
}
inline bool PropertyContainer_TryAccept_TisScale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_m93AC34DAE08AE05780AA25F16DC96BCDC02FE91D (RuntimeObject* ___0_visitor, Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7*, int32_t*, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE, const RuntimeMethod*))PropertyContainer_TryAccept_TisScale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_m93AC34DAE08AE05780AA25F16DC96BCDC02FE91D_gshared)(___0_visitor, ___1_container, ___2_returnCode, ___3_parameters, method);
}
inline bool TypeTraits_1_get_IsContainer_m371300A2F6CA88E8CC34EA1D30226DADF20DF159_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsContainer_m371300A2F6CA88E8CC34EA1D30226DADF20DF159_gshared_inline)(method);
}
inline bool TypeTraits_1_get_CanBeNull_mE4C358BCE5CA8EAEC8AFCE80969A622525644AE4_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_CanBeNull_mE4C358BCE5CA8EAEC8AFCE80969A622525644AE4_gshared_inline)(method);
}
inline bool TypeTraits_1_get_IsValueType_m0581F21AE7DCD3653CA50C2B1A83596515E469CE_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsValueType_m0581F21AE7DCD3653CA50C2B1A83596515E469CE_gshared_inline)(method);
}
inline bool PropertyContainer_TryAccept_TisSerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC_mB8750F45235AFA82A6724320A2F8ACA1AA525DDB (RuntimeObject* ___0_visitor, SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*, int32_t*, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE, const RuntimeMethod*))PropertyContainer_TryAccept_TisSerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC_mB8750F45235AFA82A6724320A2F8ACA1AA525DDB_gshared)(___0_visitor, ___1_container, ___2_returnCode, ___3_parameters, method);
}
inline bool TypeTraits_1_get_IsContainer_m66017AAD546A97E689F25A40839FDDB2DDC69F2C_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsContainer_m66017AAD546A97E689F25A40839FDDB2DDC69F2C_gshared_inline)(method);
}
inline bool TypeTraits_1_get_CanBeNull_m1070B18AE5014C462C176214EB504B80ABCF9E56_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_CanBeNull_m1070B18AE5014C462C176214EB504B80ABCF9E56_gshared_inline)(method);
}
inline bool TypeTraits_1_get_IsValueType_mE0107930FB17433A36E048CFF09C97DDDED87752_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsValueType_mE0107930FB17433A36E048CFF09C97DDDED87752_gshared_inline)(method);
}
inline bool PropertyContainer_TryAccept_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m9CDE3AA2B96127B4CE0770D082481A17743A7799 (RuntimeObject* ___0_visitor, float* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, float*, int32_t*, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE, const RuntimeMethod*))PropertyContainer_TryAccept_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m9CDE3AA2B96127B4CE0770D082481A17743A7799_gshared)(___0_visitor, ___1_container, ___2_returnCode, ___3_parameters, method);
}
inline bool TypeTraits_1_get_IsContainer_mD0ED35F34834D1848D0D597AF906C3F712DAE09B_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsContainer_mD0ED35F34834D1848D0D597AF906C3F712DAE09B_gshared_inline)(method);
}
inline bool TypeTraits_1_get_CanBeNull_m7220BB2ACCEE1EA2053D2E92E0DBE25DC43647B8_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_CanBeNull_m7220BB2ACCEE1EA2053D2E92E0DBE25DC43647B8_gshared_inline)(method);
}
inline bool TypeTraits_1_get_IsValueType_m73DDE09E2C01B3DF5142420E2426E2A515C308C8_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsValueType_m73DDE09E2C01B3DF5142420E2426E2A515C308C8_gshared_inline)(method);
}
inline bool PropertyContainer_TryAccept_TisStyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B_m8371037627164AAAFB02CA8C9B1A8E9B7D45904F (RuntimeObject* ___0_visitor, StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*, int32_t*, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE, const RuntimeMethod*))PropertyContainer_TryAccept_TisStyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B_m8371037627164AAAFB02CA8C9B1A8E9B7D45904F_gshared)(___0_visitor, ___1_container, ___2_returnCode, ___3_parameters, method);
}
inline bool TypeTraits_1_get_IsContainer_m37D42BF4D5B4D9B0438EC68FF5805247017DD90D_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsContainer_m37D42BF4D5B4D9B0438EC68FF5805247017DD90D_gshared_inline)(method);
}
inline bool TypeTraits_1_get_CanBeNull_m0285698C5170350BB9326DA5102DE8A5CA6DE357_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_CanBeNull_m0285698C5170350BB9326DA5102DE8A5CA6DE357_gshared_inline)(method);
}
inline bool TypeTraits_1_get_IsValueType_m056052FE7567159FC8E6E245B57CCF22EAFB9A0C_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsValueType_m056052FE7567159FC8E6E245B57CCF22EAFB9A0C_gshared_inline)(method);
}
inline bool PropertyContainer_TryAccept_TisStyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3_mE8575A040F0962B42852A5EBDAA07B6B7DA6EDE4 (RuntimeObject* ___0_visitor, StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3*, int32_t*, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE, const RuntimeMethod*))PropertyContainer_TryAccept_TisStyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3_mE8575A040F0962B42852A5EBDAA07B6B7DA6EDE4_gshared)(___0_visitor, ___1_container, ___2_returnCode, ___3_parameters, method);
}
inline bool TypeTraits_1_get_IsContainer_m71E5DD5E57922A24E5D8ACDC63720DA12180D119_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsContainer_m71E5DD5E57922A24E5D8ACDC63720DA12180D119_gshared_inline)(method);
}
inline bool TypeTraits_1_get_CanBeNull_mD22045184FA0539BA7AFCFABEAD125438AD5D418_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_CanBeNull_mD22045184FA0539BA7AFCFABEAD125438AD5D418_gshared_inline)(method);
}
inline bool TypeTraits_1_get_IsValueType_mCF6752FCDB191E6473D9F399BF25CE84E02C61B3_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsValueType_mCF6752FCDB191E6473D9F399BF25CE84E02C61B3_gshared_inline)(method);
}
inline bool PropertyContainer_TryAccept_TisStyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866_mD3FB81C2CEE20D3AC2B423BB0560D963465E524A (RuntimeObject* ___0_visitor, StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866*, int32_t*, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE, const RuntimeMethod*))PropertyContainer_TryAccept_TisStyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866_mD3FB81C2CEE20D3AC2B423BB0560D963465E524A_gshared)(___0_visitor, ___1_container, ___2_returnCode, ___3_parameters, method);
}
inline bool TypeTraits_1_get_IsContainer_m392F4C8C66B4A071756DB71F627CAC269285D1BA_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsContainer_m392F4C8C66B4A071756DB71F627CAC269285D1BA_gshared_inline)(method);
}
inline bool TypeTraits_1_get_CanBeNull_m33625EC55E4DE2F45D4BB9979B71B6394DCAA84B_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_CanBeNull_m33625EC55E4DE2F45D4BB9979B71B6394DCAA84B_gshared_inline)(method);
}
inline bool TypeTraits_1_get_IsValueType_m56D7A6A534892EC5D12D9A62CF04B0A27D3BD35B_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsValueType_m56D7A6A534892EC5D12D9A62CF04B0A27D3BD35B_gshared_inline)(method);
}
inline bool PropertyContainer_TryAccept_TisStyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008_m84F0CCCB010274BA518744F14B2FC6445DCA64E4 (RuntimeObject* ___0_visitor, StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008*, int32_t*, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE, const RuntimeMethod*))PropertyContainer_TryAccept_TisStyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008_m84F0CCCB010274BA518744F14B2FC6445DCA64E4_gshared)(___0_visitor, ___1_container, ___2_returnCode, ___3_parameters, method);
}
inline bool TypeTraits_1_get_IsContainer_m464DECD495CB2BC744CE122AAD07403C501AF87B_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsContainer_m464DECD495CB2BC744CE122AAD07403C501AF87B_gshared_inline)(method);
}
inline bool TypeTraits_1_get_CanBeNull_mE961AAB25B0D1DD6A17564895842AF7BD52468DB_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_CanBeNull_mE961AAB25B0D1DD6A17564895842AF7BD52468DB_gshared_inline)(method);
}
inline bool TypeTraits_1_get_IsValueType_m914EFA8D02D4B138FB957D9FFF73248121E5D2C0_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsValueType_m914EFA8D02D4B138FB957D9FFF73248121E5D2C0_gshared_inline)(method);
}
inline bool PropertyContainer_TryAccept_TisStyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910_mCBBB30A4AD883F139CE44666FD3C8778CB07B16F (RuntimeObject* ___0_visitor, StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910*, int32_t*, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE, const RuntimeMethod*))PropertyContainer_TryAccept_TisStyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910_mCBBB30A4AD883F139CE44666FD3C8778CB07B16F_gshared)(___0_visitor, ___1_container, ___2_returnCode, ___3_parameters, method);
}
inline bool TypeTraits_1_get_IsContainer_m28DFE80F9F70333A9ECB62AE877098092F39A47B_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsContainer_m28DFE80F9F70333A9ECB62AE877098092F39A47B_gshared_inline)(method);
}
inline bool TypeTraits_1_get_CanBeNull_mFE2AA6D4EF3606873E12E0201D79FECF7E52BFF5_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_CanBeNull_mFE2AA6D4EF3606873E12E0201D79FECF7E52BFF5_gshared_inline)(method);
}
inline bool TypeTraits_1_get_IsValueType_mC864FBD8DC0E7F1EA00C328D2FDEACC7CD9DF1A4_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsValueType_mC864FBD8DC0E7F1EA00C328D2FDEACC7CD9DF1A4_gshared_inline)(method);
}
inline bool PropertyContainer_TryAccept_TisStyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610_m2C02CF1F5A9538E557BF82F156DCE7A2995A5328 (RuntimeObject* ___0_visitor, StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610*, int32_t*, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE, const RuntimeMethod*))PropertyContainer_TryAccept_TisStyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610_m2C02CF1F5A9538E557BF82F156DCE7A2995A5328_gshared)(___0_visitor, ___1_container, ___2_returnCode, ___3_parameters, method);
}
inline bool TypeTraits_1_get_IsContainer_m72D732937C93BD7AE8F529A0430A8C7906DCD0F3_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsContainer_m72D732937C93BD7AE8F529A0430A8C7906DCD0F3_gshared_inline)(method);
}
inline bool TypeTraits_1_get_CanBeNull_m7A2EAA2C303B5864C0220CBD342C75E269A4AAA3_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_CanBeNull_m7A2EAA2C303B5864C0220CBD342C75E269A4AAA3_gshared_inline)(method);
}
inline bool TypeTraits_1_get_IsValueType_m071C355797B42D5CCB33F14B83229C2C0D11580A_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsValueType_m071C355797B42D5CCB33F14B83229C2C0D11580A_gshared_inline)(method);
}
inline bool PropertyContainer_TryAccept_TisStyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841_mC1145110F1C81F318995CEEFB20B682D49804A7F (RuntimeObject* ___0_visitor, StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841*, int32_t*, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE, const RuntimeMethod*))PropertyContainer_TryAccept_TisStyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841_mC1145110F1C81F318995CEEFB20B682D49804A7F_gshared)(___0_visitor, ___1_container, ___2_returnCode, ___3_parameters, method);
}
inline bool TypeTraits_1_get_IsContainer_mC27F117CAABDF35DCE60B44ED90CA5E0C316E87B_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsContainer_mC27F117CAABDF35DCE60B44ED90CA5E0C316E87B_gshared_inline)(method);
}
inline bool TypeTraits_1_get_CanBeNull_m171E276B62877B02E9840B204D3ED28130D8DFCD_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_CanBeNull_m171E276B62877B02E9840B204D3ED28130D8DFCD_gshared_inline)(method);
}
inline bool TypeTraits_1_get_IsValueType_m9BCC29E05C59AD59DAE817B570638E3899BD6523_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsValueType_m9BCC29E05C59AD59DAE817B570638E3899BD6523_gshared_inline)(method);
}
inline bool PropertyContainer_TryAccept_TisStyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C_m3B228336F8CC4BED768530FB6DCDC469BC79AB2B (RuntimeObject* ___0_visitor, StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C*, int32_t*, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE, const RuntimeMethod*))PropertyContainer_TryAccept_TisStyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C_m3B228336F8CC4BED768530FB6DCDC469BC79AB2B_gshared)(___0_visitor, ___1_container, ___2_returnCode, ___3_parameters, method);
}
inline bool TypeTraits_1_get_IsContainer_m2503D4240E029F16D5C98BD8DC5B732B8A02C98E_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsContainer_m2503D4240E029F16D5C98BD8DC5B732B8A02C98E_gshared_inline)(method);
}
inline bool TypeTraits_1_get_CanBeNull_m9812594FA23CC694FBDE4CA32625D3FBA1177A29_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_CanBeNull_m9812594FA23CC694FBDE4CA32625D3FBA1177A29_gshared_inline)(method);
}
inline bool TypeTraits_1_get_IsValueType_m0F180F5B26765420CF3E3E12F04CA3225153AFCA_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsValueType_m0F180F5B26765420CF3E3E12F04CA3225153AFCA_gshared_inline)(method);
}
inline bool PropertyContainer_TryAccept_TisStyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4_m1440A46C83BF7263E40864A952DEC63AF982643D (RuntimeObject* ___0_visitor, StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4*, int32_t*, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE, const RuntimeMethod*))PropertyContainer_TryAccept_TisStyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4_m1440A46C83BF7263E40864A952DEC63AF982643D_gshared)(___0_visitor, ___1_container, ___2_returnCode, ___3_parameters, method);
}
inline bool TypeTraits_1_get_IsContainer_m748E564407EE5311B3129B6563800575345A24B3_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsContainer_m748E564407EE5311B3129B6563800575345A24B3_gshared_inline)(method);
}
inline bool TypeTraits_1_get_CanBeNull_mBF67FA3A6F82EA4FD80F246E3D2AB424D28FD667_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_CanBeNull_mBF67FA3A6F82EA4FD80F246E3D2AB424D28FD667_gshared_inline)(method);
}
inline bool TypeTraits_1_get_IsValueType_mE15BF77911B4BEB5D3725CFAC54F480025A030CE_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsValueType_mE15BF77911B4BEB5D3725CFAC54F480025A030CE_gshared_inline)(method);
}
inline bool PropertyContainer_TryAccept_TisStyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D_mF91BAFA67958A7398E1F94B6762EBA9CFF390C19 (RuntimeObject* ___0_visitor, StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D*, int32_t*, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE, const RuntimeMethod*))PropertyContainer_TryAccept_TisStyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D_mF91BAFA67958A7398E1F94B6762EBA9CFF390C19_gshared)(___0_visitor, ___1_container, ___2_returnCode, ___3_parameters, method);
}
inline bool TypeTraits_1_get_IsContainer_m916B9C203D96F12013B160116CA44AA967C225D4_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsContainer_m916B9C203D96F12013B160116CA44AA967C225D4_gshared_inline)(method);
}
inline bool TypeTraits_1_get_CanBeNull_mBE2469309A59E9E64ED306132C6DB40EA211B02B_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_CanBeNull_mBE2469309A59E9E64ED306132C6DB40EA211B02B_gshared_inline)(method);
}
inline bool TypeTraits_1_get_IsValueType_m434194C02E674305D5939C3FB4388F1A60128356_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsValueType_m434194C02E674305D5939C3FB4388F1A60128356_gshared_inline)(method);
}
inline bool PropertyContainer_TryAccept_TisStyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8_mB9341E816B066B0A26BAD0F13896EBF26F51E9CE (RuntimeObject* ___0_visitor, StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8*, int32_t*, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE, const RuntimeMethod*))PropertyContainer_TryAccept_TisStyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8_mB9341E816B066B0A26BAD0F13896EBF26F51E9CE_gshared)(___0_visitor, ___1_container, ___2_returnCode, ___3_parameters, method);
}
inline bool TypeTraits_1_get_IsContainer_m9DFB57E57F4AC783DEAAC4F0A5E1CB11A90BA299_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsContainer_m9DFB57E57F4AC783DEAAC4F0A5E1CB11A90BA299_gshared_inline)(method);
}
inline bool TypeTraits_1_get_CanBeNull_mAB96CAD5D360071A2AC29CEFA10D8376FE5A716C_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_CanBeNull_mAB96CAD5D360071A2AC29CEFA10D8376FE5A716C_gshared_inline)(method);
}
inline bool TypeTraits_1_get_IsValueType_mB64CD1414AA6476F61F0C3568F12424180F97654_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsValueType_mB64CD1414AA6476F61F0C3568F12424180F97654_gshared_inline)(method);
}
inline bool PropertyContainer_TryAccept_TisStylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_m7B2D8DCCDFA8462A7A8420D259FAF18714AE26C8 (RuntimeObject* ___0_visitor, StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF*, int32_t*, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE, const RuntimeMethod*))PropertyContainer_TryAccept_TisStylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_m7B2D8DCCDFA8462A7A8420D259FAF18714AE26C8_gshared)(___0_visitor, ___1_container, ___2_returnCode, ___3_parameters, method);
}
inline bool TypeTraits_1_get_IsContainer_m908BDA55B06C8C24176F0E7F23FBE5D2CC34DC25_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsContainer_m908BDA55B06C8C24176F0E7F23FBE5D2CC34DC25_gshared_inline)(method);
}
inline bool TypeTraits_1_get_CanBeNull_mC18B485E8C55F324812CBB67B78A007B739115E4_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_CanBeNull_mC18B485E8C55F324812CBB67B78A007B739115E4_gshared_inline)(method);
}
inline bool TypeTraits_1_get_IsValueType_m2E1C8DF463CE67BB42937B640C27F546CAB0DE93_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsValueType_m2E1C8DF463CE67BB42937B640C27F546CAB0DE93_gshared_inline)(method);
}
inline bool PropertyContainer_TryAccept_TisStyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B_m56D96CE7F98A37D61EFD5E3531CCC994A95F1EED (RuntimeObject* ___0_visitor, StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B*, int32_t*, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE, const RuntimeMethod*))PropertyContainer_TryAccept_TisStyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B_m56D96CE7F98A37D61EFD5E3531CCC994A95F1EED_gshared)(___0_visitor, ___1_container, ___2_returnCode, ___3_parameters, method);
}
inline bool TypeTraits_1_get_IsContainer_m26D8E5CB65881B90C23D386F1820AF754B074F26_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsContainer_m26D8E5CB65881B90C23D386F1820AF754B074F26_gshared_inline)(method);
}
inline bool TypeTraits_1_get_CanBeNull_mE022DBB0602AAADCAA703B4A54242852A8965853_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_CanBeNull_mE022DBB0602AAADCAA703B4A54242852A8965853_gshared_inline)(method);
}
inline bool TypeTraits_1_get_IsValueType_m98BDAC1965215084D492BD054E3438503B1F8176_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsValueType_m98BDAC1965215084D492BD054E3438503B1F8176_gshared_inline)(method);
}
inline bool PropertyContainer_TryAccept_TisStyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC_m0AC52A2D94D76CAE679622449130C1C2D8BC8F1B (RuntimeObject* ___0_visitor, StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC*, int32_t*, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE, const RuntimeMethod*))PropertyContainer_TryAccept_TisStyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC_m0AC52A2D94D76CAE679622449130C1C2D8BC8F1B_gshared)(___0_visitor, ___1_container, ___2_returnCode, ___3_parameters, method);
}
inline bool TypeTraits_1_get_IsContainer_m1D1A832B4A280B5CC5A8F6103512BD85C232D534_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsContainer_m1D1A832B4A280B5CC5A8F6103512BD85C232D534_gshared_inline)(method);
}
inline bool TypeTraits_1_get_CanBeNull_m989233B2F7F633EFE624A0CF8A5F9D3DAC75F00E_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_CanBeNull_m989233B2F7F633EFE624A0CF8A5F9D3DAC75F00E_gshared_inline)(method);
}
inline bool TypeTraits_1_get_IsValueType_mD7AD2570031FF055D5EB8EC2F245A5A638022D20_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsValueType_mD7AD2570031FF055D5EB8EC2F245A5A638022D20_gshared_inline)(method);
}
inline bool PropertyContainer_TryAccept_TisStyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252_mEE806BBA02B2263493CED060EEE1BB5658A03DFC (RuntimeObject* ___0_visitor, StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252*, int32_t*, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE, const RuntimeMethod*))PropertyContainer_TryAccept_TisStyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252_mEE806BBA02B2263493CED060EEE1BB5658A03DFC_gshared)(___0_visitor, ___1_container, ___2_returnCode, ___3_parameters, method);
}
inline bool TypeTraits_1_get_IsContainer_mB84DCA55DC40F517EE6B897F549822CF99051417_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsContainer_mB84DCA55DC40F517EE6B897F549822CF99051417_gshared_inline)(method);
}
inline bool TypeTraits_1_get_CanBeNull_m1499F4A014158A9E43B430FA922C10FA9BF42BDA_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_CanBeNull_m1499F4A014158A9E43B430FA922C10FA9BF42BDA_gshared_inline)(method);
}
inline bool TypeTraits_1_get_IsValueType_m772EE1B98C79503AD94637C553736BDDA5E113E4_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsValueType_m772EE1B98C79503AD94637C553736BDDA5E113E4_gshared_inline)(method);
}
inline bool PropertyContainer_TryAccept_TisStyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6_m881CEAED0013770CEC9FF3D498862D9D361EC557 (RuntimeObject* ___0_visitor, StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6*, int32_t*, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE, const RuntimeMethod*))PropertyContainer_TryAccept_TisStyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6_m881CEAED0013770CEC9FF3D498862D9D361EC557_gshared)(___0_visitor, ___1_container, ___2_returnCode, ___3_parameters, method);
}
inline bool TypeTraits_1_get_IsContainer_m423D4EE31271BFF343FB125B5237B9FF71CFF524_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsContainer_m423D4EE31271BFF343FB125B5237B9FF71CFF524_gshared_inline)(method);
}
inline bool TypeTraits_1_get_CanBeNull_m4BCDE88FF19C72620C04896DCEC626E7A9621B31_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_CanBeNull_m4BCDE88FF19C72620C04896DCEC626E7A9621B31_gshared_inline)(method);
}
inline bool TypeTraits_1_get_IsValueType_m472AD8D1120723C7E282C958A563BAB1A9843EB4_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsValueType_m472AD8D1120723C7E282C958A563BAB1A9843EB4_gshared_inline)(method);
}
inline bool PropertyContainer_TryAccept_TisStyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089_mDD40AB576CCBA8847DD3C5DC38B09914537AF56F (RuntimeObject* ___0_visitor, StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089*, int32_t*, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE, const RuntimeMethod*))PropertyContainer_TryAccept_TisStyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089_mDD40AB576CCBA8847DD3C5DC38B09914537AF56F_gshared)(___0_visitor, ___1_container, ___2_returnCode, ___3_parameters, method);
}
inline bool TypeTraits_1_get_IsContainer_m3D4A64F52976BCB0D13C18E6667B03A7DDCBACED_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsContainer_m3D4A64F52976BCB0D13C18E6667B03A7DDCBACED_gshared_inline)(method);
}
inline bool TypeTraits_1_get_CanBeNull_m867A30A06DF4DAE601C1437681BE61D0B03D0735_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_CanBeNull_m867A30A06DF4DAE601C1437681BE61D0B03D0735_gshared_inline)(method);
}
inline bool TypeTraits_1_get_IsValueType_m6D68904DCEC1B9E468B23D863D622ED2F08B3ACB_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsValueType_m6D68904DCEC1B9E468B23D863D622ED2F08B3ACB_gshared_inline)(method);
}
inline bool PropertyContainer_TryAccept_TisTextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05_m4ADF89A14B52E7B6CCBAFF6E49ACAE830A118224 (RuntimeObject* ___0_visitor, TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05*, int32_t*, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE, const RuntimeMethod*))PropertyContainer_TryAccept_TisTextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05_m4ADF89A14B52E7B6CCBAFF6E49ACAE830A118224_gshared)(___0_visitor, ___1_container, ___2_returnCode, ___3_parameters, method);
}
inline bool TypeTraits_1_get_IsContainer_m35FC9B6070CEB5A54D8C4333B165F7DCB68D66D9_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsContainer_m35FC9B6070CEB5A54D8C4333B165F7DCB68D66D9_gshared_inline)(method);
}
inline bool TypeTraits_1_get_CanBeNull_mA68BE2F93E951687D0F1ABE4A6A4A65A00DBB8B3_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_CanBeNull_mA68BE2F93E951687D0F1ABE4A6A4A65A00DBB8B3_gshared_inline)(method);
}
inline bool TypeTraits_1_get_IsValueType_m83BB11321A8205868232E6A9791231FCCAEE17E9_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsValueType_m83BB11321A8205868232E6A9791231FCCAEE17E9_gshared_inline)(method);
}
inline bool PropertyContainer_TryAccept_TisTimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E_m819FAFDED283FA7D709E3A9C5E5452897535732A (RuntimeObject* ___0_visitor, TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E*, int32_t*, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE, const RuntimeMethod*))PropertyContainer_TryAccept_TisTimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E_m819FAFDED283FA7D709E3A9C5E5452897535732A_gshared)(___0_visitor, ___1_container, ___2_returnCode, ___3_parameters, method);
}
inline bool TypeTraits_1_get_IsContainer_m6A352A501393CAE8E5F280361DA8F7D8C4689AF9_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsContainer_m6A352A501393CAE8E5F280361DA8F7D8C4689AF9_gshared_inline)(method);
}
inline bool TypeTraits_1_get_CanBeNull_mAC32D5C4424D52F5A3E7FE46DC053073AC0B2521_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_CanBeNull_mAC32D5C4424D52F5A3E7FE46DC053073AC0B2521_gshared_inline)(method);
}
inline bool TypeTraits_1_get_IsValueType_m908C71E0F54A69691D54C444E2C23EF5C540FD1F_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsValueType_m908C71E0F54A69691D54C444E2C23EF5C540FD1F_gshared_inline)(method);
}
inline bool PropertyContainer_TryAccept_TisTransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502_mE5EBF77562B54CD1975DF95AFDDBBA0B8B0BF9E4 (RuntimeObject* ___0_visitor, TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502*, int32_t*, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE, const RuntimeMethod*))PropertyContainer_TryAccept_TisTransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502_mE5EBF77562B54CD1975DF95AFDDBBA0B8B0BF9E4_gshared)(___0_visitor, ___1_container, ___2_returnCode, ___3_parameters, method);
}
inline bool TypeTraits_1_get_IsContainer_m5324709E9C1E2AFCCE54DFE57CA9E5A134A5D7FC_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsContainer_m5324709E9C1E2AFCCE54DFE57CA9E5A134A5D7FC_gshared_inline)(method);
}
inline bool TypeTraits_1_get_CanBeNull_mA069B0BDEC214B763CC8ECBCE3B72C13664A29E8_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_CanBeNull_mA069B0BDEC214B763CC8ECBCE3B72C13664A29E8_gshared_inline)(method);
}
inline bool TypeTraits_1_get_IsValueType_m468FD08CF92AA9CE1355826B4E5A8A7B92647567_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsValueType_m468FD08CF92AA9CE1355826B4E5A8A7B92647567_gshared_inline)(method);
}
inline bool PropertyContainer_TryAccept_TisTranslate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_m13B506EBE2662AA1EC36B1496B8EC4914253AAB1 (RuntimeObject* ___0_visitor, Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E*, int32_t*, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE, const RuntimeMethod*))PropertyContainer_TryAccept_TisTranslate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_m13B506EBE2662AA1EC36B1496B8EC4914253AAB1_gshared)(___0_visitor, ___1_container, ___2_returnCode, ___3_parameters, method);
}
inline bool TypeTraits_1_get_IsContainer_m3CE73AFB74643BE29712805CBCAAE3AA11CEBA7F_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsContainer_m3CE73AFB74643BE29712805CBCAAE3AA11CEBA7F_gshared_inline)(method);
}
inline bool TypeTraits_1_get_CanBeNull_m81BDFE95146A69F74EE7C1A8E7AF5B5700CF0BB3_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_CanBeNull_m81BDFE95146A69F74EE7C1A8E7AF5B5700CF0BB3_gshared_inline)(method);
}
inline bool TypeTraits_1_get_IsValueType_mC876849E832B2360A89D63D4816C6D9EF7994527_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsValueType_mC876849E832B2360A89D63D4816C6D9EF7994527_gshared_inline)(method);
}
inline bool PropertyContainer_TryAccept_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m86391134C0A805647DED0CEC6F6AA3FBEB6A4F96 (RuntimeObject* ___0_visitor, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*, int32_t*, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE, const RuntimeMethod*))PropertyContainer_TryAccept_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m86391134C0A805647DED0CEC6F6AA3FBEB6A4F96_gshared)(___0_visitor, ___1_container, ___2_returnCode, ___3_parameters, method);
}
inline bool TypeTraits_1_get_IsContainer_m645CA7ABB91F0969D300A5965BEBB28C0D8445F3_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsContainer_m645CA7ABB91F0969D300A5965BEBB28C0D8445F3_gshared_inline)(method);
}
inline bool TypeTraits_1_get_CanBeNull_m483FA59577B89A7210F233A7EA408B41FD9723BD_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_CanBeNull_m483FA59577B89A7210F233A7EA408B41FD9723BD_gshared_inline)(method);
}
inline bool TypeTraits_1_get_IsValueType_m64554136176110FBD6D5948F7A8593317282D43D_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsValueType_m64554136176110FBD6D5948F7A8593317282D43D_gshared_inline)(method);
}
inline bool PropertyContainer_TryAccept_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mE3B117E9CD2BEF9BEE2858069A392B02963737B6 (RuntimeObject* ___0_visitor, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*, int32_t*, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE, const RuntimeMethod*))PropertyContainer_TryAccept_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mE3B117E9CD2BEF9BEE2858069A392B02963737B6_gshared)(___0_visitor, ___1_container, ___2_returnCode, ___3_parameters, method);
}
inline bool TypeTraits_1_get_IsContainer_mE287247F6E75ABBF9A49966FC51C6A66A4BF1FBE_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsContainer_mE287247F6E75ABBF9A49966FC51C6A66A4BF1FBE_gshared_inline)(method);
}
inline bool TypeTraits_1_get_CanBeNull_mD80D3A5E3EBEA503B228255B59012C64EAC0968C_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_CanBeNull_mD80D3A5E3EBEA503B228255B59012C64EAC0968C_gshared_inline)(method);
}
inline bool TypeTraits_1_get_IsValueType_m2E3E7C39FB0C7BFCE1F3BBFCA4135DF4945EAB8E_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsValueType_m2E3E7C39FB0C7BFCE1F3BBFCA4135DF4945EAB8E_gshared_inline)(method);
}
inline bool PropertyContainer_TryAccept_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m34950CB76D9D51770C30AA4ACF7C6B99E5A50062 (RuntimeObject* ___0_visitor, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*, int32_t*, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE, const RuntimeMethod*))PropertyContainer_TryAccept_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m34950CB76D9D51770C30AA4ACF7C6B99E5A50062_gshared)(___0_visitor, ___1_container, ___2_returnCode, ___3_parameters, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManagedObjectClone_CloneValue_TisBackground_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_mFCC3A216178DE009BEF49BEAF033ACDC41062090_gshared (ManagedObjectClone_t6E754ED2624B829553A94A85A0D62AD51B58FCD6* __this, Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8* ___0_dstValue, Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 ___1_srcValue, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	Type_t* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	RuntimeObject* V_9 = NULL;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t V_13 = 0;
	RuntimeObject* V_14 = NULL;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	int32_t V_19 = 0;
	VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE V_20;
	memset((&V_20), 0, sizeof(V_20));
	int32_t G_B5_0 = 0;
	int32_t G_B16_0 = 0;
	int32_t G_B22_0 = 0;
	int32_t G_B29_0 = 0;
	RuntimeArray* G_B32_0 = NULL;
	RuntimeArray* G_B31_0 = NULL;
	int32_t G_B33_0 = 0;
	int32_t G_B35_0 = 0;
	int32_t G_B41_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_0;
		L_0 = TypeTraits_1_get_IsContainer_m09E64BD1591FB99C645EEBB13818E96BD276A910_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8* L_2 = ___0_dstValue;
		Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 L_3 = ___1_srcValue;
		*(Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8*)L_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)&(((Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8*)L_2)->___m_Texture), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8*)L_2)->___m_Sprite), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8*)L_2)->___m_RenderTexture), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8*)L_2)->___m_VectorImage), (void*)NULL);
		#endif
		goto IL_027c;
	}

IL_001a:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_4;
		L_4 = TypeTraits_1_get_CanBeNull_mD8C1C97EEFB80C1D10345B27C921B3107DC17719_inline(il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 L_5 = ___1_srcValue;
		G_B5_0 = ((int32_t)(false));
		goto IL_002d;
	}

IL_002c:
	{
		G_B5_0 = 0;
	}

IL_002d:
	{
		V_2 = (bool)G_B5_0;
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_003e;
		}
	}
	{
		Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8* L_7 = ___0_dstValue;
		il2cpp_codegen_initobj(L_7, sizeof(Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8));
		goto IL_027c;
	}

IL_003e:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_8;
		L_8 = TypeTraits_1_get_IsValueType_m34379A3583A38EDDB72134FED4BEF56D2A5D0BC5_inline(il2cpp_rgctx_method(method->rgctx_data, 5));
		V_3 = L_8;
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_0055;
		}
	}
	{
		Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8* L_10 = ___0_dstValue;
		il2cpp_codegen_initobj(L_10, sizeof(Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8));
		goto IL_0237;
	}

IL_0055:
	{
		Il2CppFakeBox<Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8> L_11(il2cpp_rgctx_data(method->rgctx_data, 3), (&___1_srcValue));
		Type_t* L_12;
		L_12 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((&L_11), NULL);
		V_4 = L_12;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		Type_t* L_15 = V_4;
		NullCheck(L_14);
		bool L_16;
		L_16 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_14, L_15);
		V_6 = L_16;
		bool L_17 = V_6;
		if (!L_17)
		{
			goto IL_0089;
		}
	}
	{
		Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8* L_18 = ___0_dstValue;
		Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 L_19 = ___1_srcValue;
		*(Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8*)L_18 = L_19;
		Il2CppCodeGenWriteBarrier((void**)&(((Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8*)L_18)->___m_Texture), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8*)L_18)->___m_Sprite), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8*)L_18)->___m_RenderTexture), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8*)L_18)->___m_VectorImage), (void*)NULL);
		#endif
		goto IL_027c;
	}

IL_0089:
	{
		Type_t* L_20 = V_4;
		bool L_21;
		L_21 = TypeTraits_IsContainer_m46D04F3E3219371CC5F133E2CC54BCA46FD72505(L_20, NULL);
		V_7 = (bool)((((int32_t)L_21) == ((int32_t)0))? 1 : 0);
		bool L_22 = V_7;
		if (!L_22)
		{
			goto IL_00a6;
		}
	}
	{
		Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8* L_23 = ___0_dstValue;
		Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 L_24 = ___1_srcValue;
		*(Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8*)L_23 = L_24;
		Il2CppCodeGenWriteBarrier((void**)&(((Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8*)L_23)->___m_Texture), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8*)L_23)->___m_Sprite), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8*)L_23)->___m_RenderTexture), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8*)L_23)->___m_VectorImage), (void*)NULL);
		#endif
		goto IL_027c;
	}

IL_00a6:
	{
		Type_t* L_25 = V_4;
		NullCheck(L_25);
		bool L_26;
		L_26 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_25, NULL);
		if (L_26)
		{
			goto IL_00c5;
		}
	}
	{
		Type_t* L_27 = V_4;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_28 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.string_class->byval_arg) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_29;
		L_29 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_28, NULL);
		bool L_30;
		L_30 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_27, L_29, NULL);
		G_B16_0 = ((((int32_t)L_30) == ((int32_t)0))? 1 : 0);
		goto IL_00c6;
	}

IL_00c5:
	{
		G_B16_0 = 0;
	}

IL_00c6:
	{
		V_5 = (bool)G_B16_0;
		bool L_31 = V_5;
		V_8 = L_31;
		bool L_32 = V_8;
		if (!L_32)
		{
			goto IL_0134;
		}
	}
	{
		RuntimeObject* L_33 = __this->___m_RootSource;
		Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 L_34 = ___1_srcValue;
		Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 L_35 = L_34;
		RuntimeObject* L_36 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_35);
		V_10 = (bool)((((RuntimeObject*)(RuntimeObject*)L_33) == ((RuntimeObject*)(RuntimeObject*)L_36))? 1 : 0);
		bool L_37 = V_10;
		if (!L_37)
		{
			goto IL_00fc;
		}
	}
	{
		Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8* L_38 = ___0_dstValue;
		RuntimeObject* L_39 = __this->___m_RootDestination;
		*(Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8*)L_38 = ((*(Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8*)UnBox(L_39, il2cpp_rgctx_data(method->rgctx_data, 3))));
		Il2CppCodeGenWriteBarrier((void**)&(((Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8*)L_38)->___m_Texture), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8*)L_38)->___m_Sprite), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8*)L_38)->___m_RenderTexture), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8*)L_38)->___m_VectorImage), (void*)NULL);
		#endif
		goto IL_027c;
	}

IL_00fc:
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_40 = __this->___m_References;
		if (!L_40)
		{
			goto IL_0119;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_41 = __this->___m_References;
		Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 L_42 = ___1_srcValue;
		Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 L_43 = L_42;
		RuntimeObject* L_44 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_43);
		NullCheck(L_41);
		bool L_45;
		L_45 = Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849(L_41, L_44, (&V_9), Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		G_B22_0 = ((int32_t)(L_45));
		goto IL_011a;
	}

IL_0119:
	{
		G_B22_0 = 0;
	}

IL_011a:
	{
		V_11 = (bool)G_B22_0;
		bool L_46 = V_11;
		if (!L_46)
		{
			goto IL_0133;
		}
	}
	{
		Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8* L_47 = ___0_dstValue;
		RuntimeObject* L_48 = V_9;
		*(Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8*)L_47 = ((*(Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8*)UnBox(L_48, il2cpp_rgctx_data(method->rgctx_data, 3))));
		Il2CppCodeGenWriteBarrier((void**)&(((Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8*)L_47)->___m_Texture), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8*)L_47)->___m_Sprite), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8*)L_47)->___m_RenderTexture), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8*)L_47)->___m_VectorImage), (void*)NULL);
		#endif
		goto IL_027c;
	}

IL_0133:
	{
	}

IL_0134:
	{
		Type_t* L_49 = V_4;
		NullCheck(L_49);
		bool L_50;
		L_50 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_49, NULL);
		V_12 = L_50;
		bool L_51 = V_12;
		if (!L_51)
		{
			goto IL_01b6;
		}
	}
	{
		Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 L_52 = ___1_srcValue;
		Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 L_53 = L_52;
		RuntimeObject* L_54 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_53);
		V_14 = (RuntimeObject*)NULL;
		RuntimeObject* L_55 = V_14;
		if (L_55)
		{
			goto IL_0156;
		}
	}
	{
		G_B29_0 = 0;
		goto IL_015d;
	}

IL_0156:
	{
		RuntimeObject* L_56 = V_14;
		NullCheck((RuntimeObject*)L_56);
		int32_t L_57;
		L_57 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_56);
		G_B29_0 = L_57;
	}

IL_015d:
	{
		V_13 = G_B29_0;
	}
	{
		Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8* L_59 = ___0_dstValue;
		Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 L_60 = (*(Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8*)L_59);
		Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 L_61 = L_60;
		RuntimeObject* L_62 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_61);
		RuntimeArray* L_63 = ((RuntimeArray*)IsInstClass((RuntimeObject*)L_62, il2cpp_defaults.array_class));
		if (L_63)
		{
			G_B32_0 = L_63;
			goto IL_0183;
		}
		G_B31_0 = L_63;
	}
	{
		G_B33_0 = 1;
		goto IL_018f;
	}

IL_0183:
	{
		NullCheck(G_B32_0);
		int32_t L_64;
		L_64 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(G_B32_0, NULL);
		int32_t L_65 = V_13;
		G_B33_0 = ((((int32_t)((((int32_t)L_64) == ((int32_t)L_65))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_018f:
	{
		G_B35_0 = G_B33_0;
		goto IL_0192;
	}

IL_0192:
	{
		V_15 = (bool)G_B35_0;
		bool L_66 = V_15;
		if (!L_66)
		{
			goto IL_01b3;
		}
	}
	{
		Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8* L_67 = ___0_dstValue;
		Type_t* L_68 = V_4;
		NullCheck(L_68);
		Type_t* L_69;
		L_69 = VirtualFuncInvoker0< Type_t* >::Invoke(48, L_68);
		int32_t L_70 = V_13;
		RuntimeArray* L_71;
		L_71 = Array_CreateInstance_m13B202130951A03AF5F52470A19E17D3AD2A8983(L_69, L_70, NULL);
		*(Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8*)L_67 = ((*(Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8*)UnBox((RuntimeObject*)L_71, il2cpp_rgctx_data(method->rgctx_data, 3))));
		Il2CppCodeGenWriteBarrier((void**)&(((Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8*)L_67)->___m_Texture), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8*)L_67)->___m_Sprite), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8*)L_67)->___m_RenderTexture), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8*)L_67)->___m_VectorImage), (void*)NULL);
		#endif
	}

IL_01b3:
	{
		goto IL_01f5;
	}

IL_01b6:
	{
	}
	{
		Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8* L_73 = ___0_dstValue;
		Il2CppFakeBox<Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8> L_74(il2cpp_rgctx_data(method->rgctx_data, 3), L_73);
		Type_t* L_75;
		L_75 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((&L_74), NULL);
		Type_t* L_76 = V_4;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_77;
		L_77 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_75, L_76, NULL);
		G_B41_0 = ((int32_t)(L_77));
		goto IL_01da;
	}

IL_01da:
	{
		V_16 = (bool)G_B41_0;
		bool L_78 = V_16;
		if (!L_78)
		{
			goto IL_01f4;
		}
	}
	{
		Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8* L_79 = ___0_dstValue;
		Type_t* L_80 = V_4;
		RuntimeObject* L_81;
		L_81 = Activator_CreateInstance_mFF030428C64FDDFACC74DFAC97388A1C628BFBCF(L_80, NULL);
		*(Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8*)L_79 = ((*(Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8*)UnBox(L_81, il2cpp_rgctx_data(method->rgctx_data, 3))));
		Il2CppCodeGenWriteBarrier((void**)&(((Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8*)L_79)->___m_Texture), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8*)L_79)->___m_Sprite), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8*)L_79)->___m_RenderTexture), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8*)L_79)->___m_VectorImage), (void*)NULL);
		#endif
	}

IL_01f4:
	{
	}

IL_01f5:
	{
		bool L_82 = V_5;
		V_17 = L_82;
		bool L_83 = V_17;
		if (!L_83)
		{
			goto IL_0236;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_84 = __this->___m_References;
		V_18 = (bool)((((RuntimeObject*)(Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*)L_84) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_85 = V_18;
		if (!L_85)
		{
			goto IL_0218;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_86 = (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*)il2cpp_codegen_object_new(Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329(L_86, Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_RuntimeMethod_var);
		__this->___m_References = L_86;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_References), (void*)L_86);
	}

IL_0218:
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_87 = __this->___m_References;
		Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 L_88 = ___1_srcValue;
		Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 L_89 = L_88;
		RuntimeObject* L_90 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_89);
		Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8* L_91 = ___0_dstValue;
		Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 L_92 = (*(Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8*)L_91);
		Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 L_93 = L_92;
		RuntimeObject* L_94 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_93);
		NullCheck(L_87);
		Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1(L_87, L_90, L_94, Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
	}

IL_0236:
	{
	}

IL_0237:
	{
		RuntimeObject* L_95 = __this->___m_Stack;
		V_0 = L_95;
		Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8* L_96 = ___0_dstValue;
		Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 L_97 = (*(Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8*)L_96);
		Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 L_98 = L_97;
		RuntimeObject* L_99 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_98);
		__this->___m_Stack = L_99;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Stack), (void*)L_99);
		il2cpp_codegen_initobj((&V_20), sizeof(VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE));
		VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE L_100 = V_20;
		bool L_101;
		L_101 = PropertyContainer_TryAccept_TisBackground_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_mF6FF31B397D562D83C0A24424DE4F6B4A5E7EE3C((RuntimeObject*)__this, (&___1_srcValue), (&V_19), L_100, il2cpp_rgctx_method(method->rgctx_data, 7));
		Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8* L_102 = ___0_dstValue;
		RuntimeObject* L_103 = __this->___m_Stack;
		*(Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8*)L_102 = ((*(Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8*)UnBox(L_103, il2cpp_rgctx_data(method->rgctx_data, 3))));
		Il2CppCodeGenWriteBarrier((void**)&(((Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8*)L_102)->___m_Texture), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8*)L_102)->___m_Sprite), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8*)L_102)->___m_RenderTexture), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8*)L_102)->___m_VectorImage), (void*)NULL);
		#endif
		RuntimeObject* L_104 = V_0;
		__this->___m_Stack = L_104;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Stack), (void*)L_104);
	}

IL_027c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManagedObjectClone_CloneValue_TisBackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56_mBA28435E0EF643AC077AB2551DD28B3A6AAC4D12_gshared (ManagedObjectClone_t6E754ED2624B829553A94A85A0D62AD51B58FCD6* __this, BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56* ___0_dstValue, BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 ___1_srcValue, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	Type_t* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	RuntimeObject* V_9 = NULL;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t V_13 = 0;
	RuntimeObject* V_14 = NULL;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	int32_t V_19 = 0;
	VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE V_20;
	memset((&V_20), 0, sizeof(V_20));
	int32_t G_B5_0 = 0;
	int32_t G_B16_0 = 0;
	int32_t G_B22_0 = 0;
	int32_t G_B29_0 = 0;
	RuntimeArray* G_B32_0 = NULL;
	RuntimeArray* G_B31_0 = NULL;
	int32_t G_B33_0 = 0;
	int32_t G_B35_0 = 0;
	int32_t G_B41_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_0;
		L_0 = TypeTraits_1_get_IsContainer_m3C5F1818CDCF1B3B51278B90926C6423F84B2C3C_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56* L_2 = ___0_dstValue;
		BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 L_3 = ___1_srcValue;
		*(BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56*)L_2 = L_3;
		goto IL_027c;
	}

IL_001a:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_4;
		L_4 = TypeTraits_1_get_CanBeNull_m0593429012E73872335C7F3058A5D2027B1FF643_inline(il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 L_5 = ___1_srcValue;
		G_B5_0 = ((int32_t)(false));
		goto IL_002d;
	}

IL_002c:
	{
		G_B5_0 = 0;
	}

IL_002d:
	{
		V_2 = (bool)G_B5_0;
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_003e;
		}
	}
	{
		BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56* L_7 = ___0_dstValue;
		il2cpp_codegen_initobj(L_7, sizeof(BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56));
		goto IL_027c;
	}

IL_003e:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_8;
		L_8 = TypeTraits_1_get_IsValueType_mF477B5DC4E7614585579DE3FDB399B21C104CB4E_inline(il2cpp_rgctx_method(method->rgctx_data, 5));
		V_3 = L_8;
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_0055;
		}
	}
	{
		BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56* L_10 = ___0_dstValue;
		il2cpp_codegen_initobj(L_10, sizeof(BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56));
		goto IL_0237;
	}

IL_0055:
	{
		Il2CppFakeBox<BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56> L_11(il2cpp_rgctx_data(method->rgctx_data, 3), (&___1_srcValue));
		Type_t* L_12;
		L_12 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((&L_11), NULL);
		V_4 = L_12;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		Type_t* L_15 = V_4;
		NullCheck(L_14);
		bool L_16;
		L_16 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_14, L_15);
		V_6 = L_16;
		bool L_17 = V_6;
		if (!L_17)
		{
			goto IL_0089;
		}
	}
	{
		BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56* L_18 = ___0_dstValue;
		BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 L_19 = ___1_srcValue;
		*(BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56*)L_18 = L_19;
		goto IL_027c;
	}

IL_0089:
	{
		Type_t* L_20 = V_4;
		bool L_21;
		L_21 = TypeTraits_IsContainer_m46D04F3E3219371CC5F133E2CC54BCA46FD72505(L_20, NULL);
		V_7 = (bool)((((int32_t)L_21) == ((int32_t)0))? 1 : 0);
		bool L_22 = V_7;
		if (!L_22)
		{
			goto IL_00a6;
		}
	}
	{
		BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56* L_23 = ___0_dstValue;
		BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 L_24 = ___1_srcValue;
		*(BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56*)L_23 = L_24;
		goto IL_027c;
	}

IL_00a6:
	{
		Type_t* L_25 = V_4;
		NullCheck(L_25);
		bool L_26;
		L_26 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_25, NULL);
		if (L_26)
		{
			goto IL_00c5;
		}
	}
	{
		Type_t* L_27 = V_4;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_28 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.string_class->byval_arg) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_29;
		L_29 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_28, NULL);
		bool L_30;
		L_30 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_27, L_29, NULL);
		G_B16_0 = ((((int32_t)L_30) == ((int32_t)0))? 1 : 0);
		goto IL_00c6;
	}

IL_00c5:
	{
		G_B16_0 = 0;
	}

IL_00c6:
	{
		V_5 = (bool)G_B16_0;
		bool L_31 = V_5;
		V_8 = L_31;
		bool L_32 = V_8;
		if (!L_32)
		{
			goto IL_0134;
		}
	}
	{
		RuntimeObject* L_33 = __this->___m_RootSource;
		BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 L_34 = ___1_srcValue;
		BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 L_35 = L_34;
		RuntimeObject* L_36 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_35);
		V_10 = (bool)((((RuntimeObject*)(RuntimeObject*)L_33) == ((RuntimeObject*)(RuntimeObject*)L_36))? 1 : 0);
		bool L_37 = V_10;
		if (!L_37)
		{
			goto IL_00fc;
		}
	}
	{
		BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56* L_38 = ___0_dstValue;
		RuntimeObject* L_39 = __this->___m_RootDestination;
		*(BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56*)L_38 = ((*(BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56*)UnBox(L_39, il2cpp_rgctx_data(method->rgctx_data, 3))));
		goto IL_027c;
	}

IL_00fc:
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_40 = __this->___m_References;
		if (!L_40)
		{
			goto IL_0119;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_41 = __this->___m_References;
		BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 L_42 = ___1_srcValue;
		BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 L_43 = L_42;
		RuntimeObject* L_44 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_43);
		NullCheck(L_41);
		bool L_45;
		L_45 = Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849(L_41, L_44, (&V_9), Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		G_B22_0 = ((int32_t)(L_45));
		goto IL_011a;
	}

IL_0119:
	{
		G_B22_0 = 0;
	}

IL_011a:
	{
		V_11 = (bool)G_B22_0;
		bool L_46 = V_11;
		if (!L_46)
		{
			goto IL_0133;
		}
	}
	{
		BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56* L_47 = ___0_dstValue;
		RuntimeObject* L_48 = V_9;
		*(BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56*)L_47 = ((*(BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56*)UnBox(L_48, il2cpp_rgctx_data(method->rgctx_data, 3))));
		goto IL_027c;
	}

IL_0133:
	{
	}

IL_0134:
	{
		Type_t* L_49 = V_4;
		NullCheck(L_49);
		bool L_50;
		L_50 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_49, NULL);
		V_12 = L_50;
		bool L_51 = V_12;
		if (!L_51)
		{
			goto IL_01b6;
		}
	}
	{
		BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 L_52 = ___1_srcValue;
		BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 L_53 = L_52;
		RuntimeObject* L_54 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_53);
		V_14 = (RuntimeObject*)NULL;
		RuntimeObject* L_55 = V_14;
		if (L_55)
		{
			goto IL_0156;
		}
	}
	{
		G_B29_0 = 0;
		goto IL_015d;
	}

IL_0156:
	{
		RuntimeObject* L_56 = V_14;
		NullCheck((RuntimeObject*)L_56);
		int32_t L_57;
		L_57 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_56);
		G_B29_0 = L_57;
	}

IL_015d:
	{
		V_13 = G_B29_0;
	}
	{
		BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56* L_59 = ___0_dstValue;
		BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 L_60 = (*(BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56*)L_59);
		BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 L_61 = L_60;
		RuntimeObject* L_62 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_61);
		RuntimeArray* L_63 = ((RuntimeArray*)IsInstClass((RuntimeObject*)L_62, il2cpp_defaults.array_class));
		if (L_63)
		{
			G_B32_0 = L_63;
			goto IL_0183;
		}
		G_B31_0 = L_63;
	}
	{
		G_B33_0 = 1;
		goto IL_018f;
	}

IL_0183:
	{
		NullCheck(G_B32_0);
		int32_t L_64;
		L_64 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(G_B32_0, NULL);
		int32_t L_65 = V_13;
		G_B33_0 = ((((int32_t)((((int32_t)L_64) == ((int32_t)L_65))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_018f:
	{
		G_B35_0 = G_B33_0;
		goto IL_0192;
	}

IL_0192:
	{
		V_15 = (bool)G_B35_0;
		bool L_66 = V_15;
		if (!L_66)
		{
			goto IL_01b3;
		}
	}
	{
		BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56* L_67 = ___0_dstValue;
		Type_t* L_68 = V_4;
		NullCheck(L_68);
		Type_t* L_69;
		L_69 = VirtualFuncInvoker0< Type_t* >::Invoke(48, L_68);
		int32_t L_70 = V_13;
		RuntimeArray* L_71;
		L_71 = Array_CreateInstance_m13B202130951A03AF5F52470A19E17D3AD2A8983(L_69, L_70, NULL);
		*(BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56*)L_67 = ((*(BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56*)UnBox((RuntimeObject*)L_71, il2cpp_rgctx_data(method->rgctx_data, 3))));
	}

IL_01b3:
	{
		goto IL_01f5;
	}

IL_01b6:
	{
	}
	{
		BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56* L_73 = ___0_dstValue;
		Il2CppFakeBox<BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56> L_74(il2cpp_rgctx_data(method->rgctx_data, 3), L_73);
		Type_t* L_75;
		L_75 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((&L_74), NULL);
		Type_t* L_76 = V_4;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_77;
		L_77 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_75, L_76, NULL);
		G_B41_0 = ((int32_t)(L_77));
		goto IL_01da;
	}

IL_01da:
	{
		V_16 = (bool)G_B41_0;
		bool L_78 = V_16;
		if (!L_78)
		{
			goto IL_01f4;
		}
	}
	{
		BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56* L_79 = ___0_dstValue;
		Type_t* L_80 = V_4;
		RuntimeObject* L_81;
		L_81 = Activator_CreateInstance_mFF030428C64FDDFACC74DFAC97388A1C628BFBCF(L_80, NULL);
		*(BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56*)L_79 = ((*(BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56*)UnBox(L_81, il2cpp_rgctx_data(method->rgctx_data, 3))));
	}

IL_01f4:
	{
	}

IL_01f5:
	{
		bool L_82 = V_5;
		V_17 = L_82;
		bool L_83 = V_17;
		if (!L_83)
		{
			goto IL_0236;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_84 = __this->___m_References;
		V_18 = (bool)((((RuntimeObject*)(Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*)L_84) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_85 = V_18;
		if (!L_85)
		{
			goto IL_0218;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_86 = (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*)il2cpp_codegen_object_new(Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329(L_86, Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_RuntimeMethod_var);
		__this->___m_References = L_86;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_References), (void*)L_86);
	}

IL_0218:
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_87 = __this->___m_References;
		BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 L_88 = ___1_srcValue;
		BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 L_89 = L_88;
		RuntimeObject* L_90 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_89);
		BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56* L_91 = ___0_dstValue;
		BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 L_92 = (*(BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56*)L_91);
		BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 L_93 = L_92;
		RuntimeObject* L_94 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_93);
		NullCheck(L_87);
		Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1(L_87, L_90, L_94, Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
	}

IL_0236:
	{
	}

IL_0237:
	{
		RuntimeObject* L_95 = __this->___m_Stack;
		V_0 = L_95;
		BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56* L_96 = ___0_dstValue;
		BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 L_97 = (*(BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56*)L_96);
		BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 L_98 = L_97;
		RuntimeObject* L_99 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_98);
		__this->___m_Stack = L_99;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Stack), (void*)L_99);
		il2cpp_codegen_initobj((&V_20), sizeof(VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE));
		VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE L_100 = V_20;
		bool L_101;
		L_101 = PropertyContainer_TryAccept_TisBackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56_m3D50143E04ED0F49C6779363F6084E9A26827D57((RuntimeObject*)__this, (&___1_srcValue), (&V_19), L_100, il2cpp_rgctx_method(method->rgctx_data, 7));
		BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56* L_102 = ___0_dstValue;
		RuntimeObject* L_103 = __this->___m_Stack;
		*(BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56*)L_102 = ((*(BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56*)UnBox(L_103, il2cpp_rgctx_data(method->rgctx_data, 3))));
		RuntimeObject* L_104 = V_0;
		__this->___m_Stack = L_104;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Stack), (void*)L_104);
	}

IL_027c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManagedObjectClone_CloneValue_TisBackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F_m154B4DD3FFB675FB50BA731018C40D46F8219DFE_gshared (ManagedObjectClone_t6E754ED2624B829553A94A85A0D62AD51B58FCD6* __this, BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F* ___0_dstValue, BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F ___1_srcValue, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	Type_t* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	RuntimeObject* V_9 = NULL;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t V_13 = 0;
	RuntimeObject* V_14 = NULL;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	int32_t V_19 = 0;
	VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE V_20;
	memset((&V_20), 0, sizeof(V_20));
	int32_t G_B5_0 = 0;
	int32_t G_B16_0 = 0;
	int32_t G_B22_0 = 0;
	int32_t G_B29_0 = 0;
	RuntimeArray* G_B32_0 = NULL;
	RuntimeArray* G_B31_0 = NULL;
	int32_t G_B33_0 = 0;
	int32_t G_B35_0 = 0;
	int32_t G_B41_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_0;
		L_0 = TypeTraits_1_get_IsContainer_m0DE5E9583D0EA919AE01523EC7CE7649FFCE6F54_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F* L_2 = ___0_dstValue;
		BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F L_3 = ___1_srcValue;
		*(BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F*)L_2 = L_3;
		goto IL_027c;
	}

IL_001a:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_4;
		L_4 = TypeTraits_1_get_CanBeNull_mB553A71A1C80612E9D79BBEC3C3CC85355E343FD_inline(il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F L_5 = ___1_srcValue;
		G_B5_0 = ((int32_t)(false));
		goto IL_002d;
	}

IL_002c:
	{
		G_B5_0 = 0;
	}

IL_002d:
	{
		V_2 = (bool)G_B5_0;
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_003e;
		}
	}
	{
		BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F* L_7 = ___0_dstValue;
		il2cpp_codegen_initobj(L_7, sizeof(BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F));
		goto IL_027c;
	}

IL_003e:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_8;
		L_8 = TypeTraits_1_get_IsValueType_m4B9BF8692A76065F40E050B75EE6702C6C784D30_inline(il2cpp_rgctx_method(method->rgctx_data, 5));
		V_3 = L_8;
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_0055;
		}
	}
	{
		BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F* L_10 = ___0_dstValue;
		il2cpp_codegen_initobj(L_10, sizeof(BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F));
		goto IL_0237;
	}

IL_0055:
	{
		Il2CppFakeBox<BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F> L_11(il2cpp_rgctx_data(method->rgctx_data, 3), (&___1_srcValue));
		Type_t* L_12;
		L_12 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((&L_11), NULL);
		V_4 = L_12;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		Type_t* L_15 = V_4;
		NullCheck(L_14);
		bool L_16;
		L_16 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_14, L_15);
		V_6 = L_16;
		bool L_17 = V_6;
		if (!L_17)
		{
			goto IL_0089;
		}
	}
	{
		BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F* L_18 = ___0_dstValue;
		BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F L_19 = ___1_srcValue;
		*(BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F*)L_18 = L_19;
		goto IL_027c;
	}

IL_0089:
	{
		Type_t* L_20 = V_4;
		bool L_21;
		L_21 = TypeTraits_IsContainer_m46D04F3E3219371CC5F133E2CC54BCA46FD72505(L_20, NULL);
		V_7 = (bool)((((int32_t)L_21) == ((int32_t)0))? 1 : 0);
		bool L_22 = V_7;
		if (!L_22)
		{
			goto IL_00a6;
		}
	}
	{
		BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F* L_23 = ___0_dstValue;
		BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F L_24 = ___1_srcValue;
		*(BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F*)L_23 = L_24;
		goto IL_027c;
	}

IL_00a6:
	{
		Type_t* L_25 = V_4;
		NullCheck(L_25);
		bool L_26;
		L_26 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_25, NULL);
		if (L_26)
		{
			goto IL_00c5;
		}
	}
	{
		Type_t* L_27 = V_4;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_28 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.string_class->byval_arg) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_29;
		L_29 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_28, NULL);
		bool L_30;
		L_30 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_27, L_29, NULL);
		G_B16_0 = ((((int32_t)L_30) == ((int32_t)0))? 1 : 0);
		goto IL_00c6;
	}

IL_00c5:
	{
		G_B16_0 = 0;
	}

IL_00c6:
	{
		V_5 = (bool)G_B16_0;
		bool L_31 = V_5;
		V_8 = L_31;
		bool L_32 = V_8;
		if (!L_32)
		{
			goto IL_0134;
		}
	}
	{
		RuntimeObject* L_33 = __this->___m_RootSource;
		BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F L_34 = ___1_srcValue;
		BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F L_35 = L_34;
		RuntimeObject* L_36 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_35);
		V_10 = (bool)((((RuntimeObject*)(RuntimeObject*)L_33) == ((RuntimeObject*)(RuntimeObject*)L_36))? 1 : 0);
		bool L_37 = V_10;
		if (!L_37)
		{
			goto IL_00fc;
		}
	}
	{
		BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F* L_38 = ___0_dstValue;
		RuntimeObject* L_39 = __this->___m_RootDestination;
		*(BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F*)L_38 = ((*(BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F*)UnBox(L_39, il2cpp_rgctx_data(method->rgctx_data, 3))));
		goto IL_027c;
	}

IL_00fc:
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_40 = __this->___m_References;
		if (!L_40)
		{
			goto IL_0119;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_41 = __this->___m_References;
		BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F L_42 = ___1_srcValue;
		BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F L_43 = L_42;
		RuntimeObject* L_44 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_43);
		NullCheck(L_41);
		bool L_45;
		L_45 = Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849(L_41, L_44, (&V_9), Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		G_B22_0 = ((int32_t)(L_45));
		goto IL_011a;
	}

IL_0119:
	{
		G_B22_0 = 0;
	}

IL_011a:
	{
		V_11 = (bool)G_B22_0;
		bool L_46 = V_11;
		if (!L_46)
		{
			goto IL_0133;
		}
	}
	{
		BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F* L_47 = ___0_dstValue;
		RuntimeObject* L_48 = V_9;
		*(BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F*)L_47 = ((*(BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F*)UnBox(L_48, il2cpp_rgctx_data(method->rgctx_data, 3))));
		goto IL_027c;
	}

IL_0133:
	{
	}

IL_0134:
	{
		Type_t* L_49 = V_4;
		NullCheck(L_49);
		bool L_50;
		L_50 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_49, NULL);
		V_12 = L_50;
		bool L_51 = V_12;
		if (!L_51)
		{
			goto IL_01b6;
		}
	}
	{
		BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F L_52 = ___1_srcValue;
		BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F L_53 = L_52;
		RuntimeObject* L_54 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_53);
		V_14 = (RuntimeObject*)NULL;
		RuntimeObject* L_55 = V_14;
		if (L_55)
		{
			goto IL_0156;
		}
	}
	{
		G_B29_0 = 0;
		goto IL_015d;
	}

IL_0156:
	{
		RuntimeObject* L_56 = V_14;
		NullCheck((RuntimeObject*)L_56);
		int32_t L_57;
		L_57 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_56);
		G_B29_0 = L_57;
	}

IL_015d:
	{
		V_13 = G_B29_0;
	}
	{
		BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F* L_59 = ___0_dstValue;
		BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F L_60 = (*(BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F*)L_59);
		BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F L_61 = L_60;
		RuntimeObject* L_62 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_61);
		RuntimeArray* L_63 = ((RuntimeArray*)IsInstClass((RuntimeObject*)L_62, il2cpp_defaults.array_class));
		if (L_63)
		{
			G_B32_0 = L_63;
			goto IL_0183;
		}
		G_B31_0 = L_63;
	}
	{
		G_B33_0 = 1;
		goto IL_018f;
	}

IL_0183:
	{
		NullCheck(G_B32_0);
		int32_t L_64;
		L_64 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(G_B32_0, NULL);
		int32_t L_65 = V_13;
		G_B33_0 = ((((int32_t)((((int32_t)L_64) == ((int32_t)L_65))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_018f:
	{
		G_B35_0 = G_B33_0;
		goto IL_0192;
	}

IL_0192:
	{
		V_15 = (bool)G_B35_0;
		bool L_66 = V_15;
		if (!L_66)
		{
			goto IL_01b3;
		}
	}
	{
		BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F* L_67 = ___0_dstValue;
		Type_t* L_68 = V_4;
		NullCheck(L_68);
		Type_t* L_69;
		L_69 = VirtualFuncInvoker0< Type_t* >::Invoke(48, L_68);
		int32_t L_70 = V_13;
		RuntimeArray* L_71;
		L_71 = Array_CreateInstance_m13B202130951A03AF5F52470A19E17D3AD2A8983(L_69, L_70, NULL);
		*(BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F*)L_67 = ((*(BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F*)UnBox((RuntimeObject*)L_71, il2cpp_rgctx_data(method->rgctx_data, 3))));
	}

IL_01b3:
	{
		goto IL_01f5;
	}

IL_01b6:
	{
	}
	{
		BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F* L_73 = ___0_dstValue;
		Il2CppFakeBox<BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F> L_74(il2cpp_rgctx_data(method->rgctx_data, 3), L_73);
		Type_t* L_75;
		L_75 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((&L_74), NULL);
		Type_t* L_76 = V_4;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_77;
		L_77 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_75, L_76, NULL);
		G_B41_0 = ((int32_t)(L_77));
		goto IL_01da;
	}

IL_01da:
	{
		V_16 = (bool)G_B41_0;
		bool L_78 = V_16;
		if (!L_78)
		{
			goto IL_01f4;
		}
	}
	{
		BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F* L_79 = ___0_dstValue;
		Type_t* L_80 = V_4;
		RuntimeObject* L_81;
		L_81 = Activator_CreateInstance_mFF030428C64FDDFACC74DFAC97388A1C628BFBCF(L_80, NULL);
		*(BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F*)L_79 = ((*(BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F*)UnBox(L_81, il2cpp_rgctx_data(method->rgctx_data, 3))));
	}

IL_01f4:
	{
	}

IL_01f5:
	{
		bool L_82 = V_5;
		V_17 = L_82;
		bool L_83 = V_17;
		if (!L_83)
		{
			goto IL_0236;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_84 = __this->___m_References;
		V_18 = (bool)((((RuntimeObject*)(Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*)L_84) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_85 = V_18;
		if (!L_85)
		{
			goto IL_0218;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_86 = (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*)il2cpp_codegen_object_new(Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329(L_86, Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_RuntimeMethod_var);
		__this->___m_References = L_86;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_References), (void*)L_86);
	}

IL_0218:
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_87 = __this->___m_References;
		BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F L_88 = ___1_srcValue;
		BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F L_89 = L_88;
		RuntimeObject* L_90 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_89);
		BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F* L_91 = ___0_dstValue;
		BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F L_92 = (*(BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F*)L_91);
		BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F L_93 = L_92;
		RuntimeObject* L_94 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_93);
		NullCheck(L_87);
		Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1(L_87, L_90, L_94, Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
	}

IL_0236:
	{
	}

IL_0237:
	{
		RuntimeObject* L_95 = __this->___m_Stack;
		V_0 = L_95;
		BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F* L_96 = ___0_dstValue;
		BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F L_97 = (*(BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F*)L_96);
		BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F L_98 = L_97;
		RuntimeObject* L_99 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_98);
		__this->___m_Stack = L_99;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Stack), (void*)L_99);
		il2cpp_codegen_initobj((&V_20), sizeof(VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE));
		VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE L_100 = V_20;
		bool L_101;
		L_101 = PropertyContainer_TryAccept_TisBackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F_mFE49BF0EE9BA94472F29A37E035D2450807460BF((RuntimeObject*)__this, (&___1_srcValue), (&V_19), L_100, il2cpp_rgctx_method(method->rgctx_data, 7));
		BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F* L_102 = ___0_dstValue;
		RuntimeObject* L_103 = __this->___m_Stack;
		*(BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F*)L_102 = ((*(BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F*)UnBox(L_103, il2cpp_rgctx_data(method->rgctx_data, 3))));
		RuntimeObject* L_104 = V_0;
		__this->___m_Stack = L_104;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Stack), (void*)L_104);
	}

IL_027c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManagedObjectClone_CloneValue_TisBackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7_mADE7B4AE8CC71A0E2A3496E4F3752107C6B982B2_gshared (ManagedObjectClone_t6E754ED2624B829553A94A85A0D62AD51B58FCD6* __this, BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7* ___0_dstValue, BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7 ___1_srcValue, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	Type_t* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	RuntimeObject* V_9 = NULL;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t V_13 = 0;
	RuntimeObject* V_14 = NULL;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	int32_t V_19 = 0;
	VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE V_20;
	memset((&V_20), 0, sizeof(V_20));
	int32_t G_B5_0 = 0;
	int32_t G_B16_0 = 0;
	int32_t G_B22_0 = 0;
	int32_t G_B29_0 = 0;
	RuntimeArray* G_B32_0 = NULL;
	RuntimeArray* G_B31_0 = NULL;
	int32_t G_B33_0 = 0;
	int32_t G_B35_0 = 0;
	int32_t G_B41_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_0;
		L_0 = TypeTraits_1_get_IsContainer_m14E4DAA47CE7873DE5C17F95F3BEFA0869609BB3_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7* L_2 = ___0_dstValue;
		BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7 L_3 = ___1_srcValue;
		*(BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7*)L_2 = L_3;
		goto IL_027c;
	}

IL_001a:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_4;
		L_4 = TypeTraits_1_get_CanBeNull_m1E761EC4F6A20442B87753E1E6E8EA11B5FEE574_inline(il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7 L_5 = ___1_srcValue;
		G_B5_0 = ((int32_t)(false));
		goto IL_002d;
	}

IL_002c:
	{
		G_B5_0 = 0;
	}

IL_002d:
	{
		V_2 = (bool)G_B5_0;
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_003e;
		}
	}
	{
		BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7* L_7 = ___0_dstValue;
		il2cpp_codegen_initobj(L_7, sizeof(BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7));
		goto IL_027c;
	}

IL_003e:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_8;
		L_8 = TypeTraits_1_get_IsValueType_mD14761B683AB06C19DEE30867E250C46F6C8A11B_inline(il2cpp_rgctx_method(method->rgctx_data, 5));
		V_3 = L_8;
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_0055;
		}
	}
	{
		BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7* L_10 = ___0_dstValue;
		il2cpp_codegen_initobj(L_10, sizeof(BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7));
		goto IL_0237;
	}

IL_0055:
	{
		Il2CppFakeBox<BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7> L_11(il2cpp_rgctx_data(method->rgctx_data, 3), (&___1_srcValue));
		Type_t* L_12;
		L_12 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((&L_11), NULL);
		V_4 = L_12;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		Type_t* L_15 = V_4;
		NullCheck(L_14);
		bool L_16;
		L_16 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_14, L_15);
		V_6 = L_16;
		bool L_17 = V_6;
		if (!L_17)
		{
			goto IL_0089;
		}
	}
	{
		BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7* L_18 = ___0_dstValue;
		BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7 L_19 = ___1_srcValue;
		*(BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7*)L_18 = L_19;
		goto IL_027c;
	}

IL_0089:
	{
		Type_t* L_20 = V_4;
		bool L_21;
		L_21 = TypeTraits_IsContainer_m46D04F3E3219371CC5F133E2CC54BCA46FD72505(L_20, NULL);
		V_7 = (bool)((((int32_t)L_21) == ((int32_t)0))? 1 : 0);
		bool L_22 = V_7;
		if (!L_22)
		{
			goto IL_00a6;
		}
	}
	{
		BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7* L_23 = ___0_dstValue;
		BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7 L_24 = ___1_srcValue;
		*(BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7*)L_23 = L_24;
		goto IL_027c;
	}

IL_00a6:
	{
		Type_t* L_25 = V_4;
		NullCheck(L_25);
		bool L_26;
		L_26 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_25, NULL);
		if (L_26)
		{
			goto IL_00c5;
		}
	}
	{
		Type_t* L_27 = V_4;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_28 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.string_class->byval_arg) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_29;
		L_29 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_28, NULL);
		bool L_30;
		L_30 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_27, L_29, NULL);
		G_B16_0 = ((((int32_t)L_30) == ((int32_t)0))? 1 : 0);
		goto IL_00c6;
	}

IL_00c5:
	{
		G_B16_0 = 0;
	}

IL_00c6:
	{
		V_5 = (bool)G_B16_0;
		bool L_31 = V_5;
		V_8 = L_31;
		bool L_32 = V_8;
		if (!L_32)
		{
			goto IL_0134;
		}
	}
	{
		RuntimeObject* L_33 = __this->___m_RootSource;
		BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7 L_34 = ___1_srcValue;
		BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7 L_35 = L_34;
		RuntimeObject* L_36 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_35);
		V_10 = (bool)((((RuntimeObject*)(RuntimeObject*)L_33) == ((RuntimeObject*)(RuntimeObject*)L_36))? 1 : 0);
		bool L_37 = V_10;
		if (!L_37)
		{
			goto IL_00fc;
		}
	}
	{
		BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7* L_38 = ___0_dstValue;
		RuntimeObject* L_39 = __this->___m_RootDestination;
		*(BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7*)L_38 = ((*(BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7*)UnBox(L_39, il2cpp_rgctx_data(method->rgctx_data, 3))));
		goto IL_027c;
	}

IL_00fc:
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_40 = __this->___m_References;
		if (!L_40)
		{
			goto IL_0119;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_41 = __this->___m_References;
		BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7 L_42 = ___1_srcValue;
		BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7 L_43 = L_42;
		RuntimeObject* L_44 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_43);
		NullCheck(L_41);
		bool L_45;
		L_45 = Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849(L_41, L_44, (&V_9), Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		G_B22_0 = ((int32_t)(L_45));
		goto IL_011a;
	}

IL_0119:
	{
		G_B22_0 = 0;
	}

IL_011a:
	{
		V_11 = (bool)G_B22_0;
		bool L_46 = V_11;
		if (!L_46)
		{
			goto IL_0133;
		}
	}
	{
		BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7* L_47 = ___0_dstValue;
		RuntimeObject* L_48 = V_9;
		*(BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7*)L_47 = ((*(BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7*)UnBox(L_48, il2cpp_rgctx_data(method->rgctx_data, 3))));
		goto IL_027c;
	}

IL_0133:
	{
	}

IL_0134:
	{
		Type_t* L_49 = V_4;
		NullCheck(L_49);
		bool L_50;
		L_50 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_49, NULL);
		V_12 = L_50;
		bool L_51 = V_12;
		if (!L_51)
		{
			goto IL_01b6;
		}
	}
	{
		BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7 L_52 = ___1_srcValue;
		BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7 L_53 = L_52;
		RuntimeObject* L_54 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_53);
		V_14 = (RuntimeObject*)NULL;
		RuntimeObject* L_55 = V_14;
		if (L_55)
		{
			goto IL_0156;
		}
	}
	{
		G_B29_0 = 0;
		goto IL_015d;
	}

IL_0156:
	{
		RuntimeObject* L_56 = V_14;
		NullCheck((RuntimeObject*)L_56);
		int32_t L_57;
		L_57 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_56);
		G_B29_0 = L_57;
	}

IL_015d:
	{
		V_13 = G_B29_0;
	}
	{
		BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7* L_59 = ___0_dstValue;
		BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7 L_60 = (*(BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7*)L_59);
		BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7 L_61 = L_60;
		RuntimeObject* L_62 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_61);
		RuntimeArray* L_63 = ((RuntimeArray*)IsInstClass((RuntimeObject*)L_62, il2cpp_defaults.array_class));
		if (L_63)
		{
			G_B32_0 = L_63;
			goto IL_0183;
		}
		G_B31_0 = L_63;
	}
	{
		G_B33_0 = 1;
		goto IL_018f;
	}

IL_0183:
	{
		NullCheck(G_B32_0);
		int32_t L_64;
		L_64 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(G_B32_0, NULL);
		int32_t L_65 = V_13;
		G_B33_0 = ((((int32_t)((((int32_t)L_64) == ((int32_t)L_65))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_018f:
	{
		G_B35_0 = G_B33_0;
		goto IL_0192;
	}

IL_0192:
	{
		V_15 = (bool)G_B35_0;
		bool L_66 = V_15;
		if (!L_66)
		{
			goto IL_01b3;
		}
	}
	{
		BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7* L_67 = ___0_dstValue;
		Type_t* L_68 = V_4;
		NullCheck(L_68);
		Type_t* L_69;
		L_69 = VirtualFuncInvoker0< Type_t* >::Invoke(48, L_68);
		int32_t L_70 = V_13;
		RuntimeArray* L_71;
		L_71 = Array_CreateInstance_m13B202130951A03AF5F52470A19E17D3AD2A8983(L_69, L_70, NULL);
		*(BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7*)L_67 = ((*(BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7*)UnBox((RuntimeObject*)L_71, il2cpp_rgctx_data(method->rgctx_data, 3))));
	}

IL_01b3:
	{
		goto IL_01f5;
	}

IL_01b6:
	{
	}
	{
		BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7* L_73 = ___0_dstValue;
		Il2CppFakeBox<BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7> L_74(il2cpp_rgctx_data(method->rgctx_data, 3), L_73);
		Type_t* L_75;
		L_75 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((&L_74), NULL);
		Type_t* L_76 = V_4;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_77;
		L_77 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_75, L_76, NULL);
		G_B41_0 = ((int32_t)(L_77));
		goto IL_01da;
	}

IL_01da:
	{
		V_16 = (bool)G_B41_0;
		bool L_78 = V_16;
		if (!L_78)
		{
			goto IL_01f4;
		}
	}
	{
		BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7* L_79 = ___0_dstValue;
		Type_t* L_80 = V_4;
		RuntimeObject* L_81;
		L_81 = Activator_CreateInstance_mFF030428C64FDDFACC74DFAC97388A1C628BFBCF(L_80, NULL);
		*(BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7*)L_79 = ((*(BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7*)UnBox(L_81, il2cpp_rgctx_data(method->rgctx_data, 3))));
	}

IL_01f4:
	{
	}

IL_01f5:
	{
		bool L_82 = V_5;
		V_17 = L_82;
		bool L_83 = V_17;
		if (!L_83)
		{
			goto IL_0236;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_84 = __this->___m_References;
		V_18 = (bool)((((RuntimeObject*)(Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*)L_84) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_85 = V_18;
		if (!L_85)
		{
			goto IL_0218;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_86 = (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*)il2cpp_codegen_object_new(Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329(L_86, Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_RuntimeMethod_var);
		__this->___m_References = L_86;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_References), (void*)L_86);
	}

IL_0218:
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_87 = __this->___m_References;
		BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7 L_88 = ___1_srcValue;
		BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7 L_89 = L_88;
		RuntimeObject* L_90 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_89);
		BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7* L_91 = ___0_dstValue;
		BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7 L_92 = (*(BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7*)L_91);
		BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7 L_93 = L_92;
		RuntimeObject* L_94 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_93);
		NullCheck(L_87);
		Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1(L_87, L_90, L_94, Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
	}

IL_0236:
	{
	}

IL_0237:
	{
		RuntimeObject* L_95 = __this->___m_Stack;
		V_0 = L_95;
		BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7* L_96 = ___0_dstValue;
		BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7 L_97 = (*(BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7*)L_96);
		BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7 L_98 = L_97;
		RuntimeObject* L_99 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_98);
		__this->___m_Stack = L_99;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Stack), (void*)L_99);
		il2cpp_codegen_initobj((&V_20), sizeof(VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE));
		VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE L_100 = V_20;
		bool L_101;
		L_101 = PropertyContainer_TryAccept_TisBackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7_mAB479DE5245FF9524873B80429E940E0C7F43F21((RuntimeObject*)__this, (&___1_srcValue), (&V_19), L_100, il2cpp_rgctx_method(method->rgctx_data, 7));
		BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7* L_102 = ___0_dstValue;
		RuntimeObject* L_103 = __this->___m_Stack;
		*(BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7*)L_102 = ((*(BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7*)UnBox(L_103, il2cpp_rgctx_data(method->rgctx_data, 3))));
		RuntimeObject* L_104 = V_0;
		__this->___m_Stack = L_104;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Stack), (void*)L_104);
	}

IL_027c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManagedObjectClone_CloneValue_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m11B751BE328779573041D73100056AC7DDF4624C_gshared (ManagedObjectClone_t6E754ED2624B829553A94A85A0D62AD51B58FCD6* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___0_dstValue, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_srcValue, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	Type_t* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	RuntimeObject* V_9 = NULL;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t V_13 = 0;
	RuntimeObject* V_14 = NULL;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	int32_t V_19 = 0;
	VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE V_20;
	memset((&V_20), 0, sizeof(V_20));
	int32_t G_B5_0 = 0;
	int32_t G_B16_0 = 0;
	int32_t G_B22_0 = 0;
	int32_t G_B29_0 = 0;
	RuntimeArray* G_B32_0 = NULL;
	RuntimeArray* G_B31_0 = NULL;
	int32_t G_B33_0 = 0;
	int32_t G_B35_0 = 0;
	int32_t G_B41_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_0;
		L_0 = TypeTraits_1_get_IsContainer_mBE907BDA3A99126677DFF55E587BCD457EB39A4A_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_2 = ___0_dstValue;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = ___1_srcValue;
		*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)L_2 = L_3;
		goto IL_027c;
	}

IL_001a:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_4;
		L_4 = TypeTraits_1_get_CanBeNull_mDB94662967E66AC074FE137EE4BD9FE82C76C0AB_inline(il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5 = ___1_srcValue;
		G_B5_0 = ((int32_t)(false));
		goto IL_002d;
	}

IL_002c:
	{
		G_B5_0 = 0;
	}

IL_002d:
	{
		V_2 = (bool)G_B5_0;
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_003e;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_7 = ___0_dstValue;
		il2cpp_codegen_initobj(L_7, sizeof(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F));
		goto IL_027c;
	}

IL_003e:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_8;
		L_8 = TypeTraits_1_get_IsValueType_m00FCB5EF45C052616B43E1773B7FECC659D28F6E_inline(il2cpp_rgctx_method(method->rgctx_data, 5));
		V_3 = L_8;
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_0055;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_10 = ___0_dstValue;
		il2cpp_codegen_initobj(L_10, sizeof(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F));
		goto IL_0237;
	}

IL_0055:
	{
		Il2CppFakeBox<Color_tD001788D726C3A7F1379BEED0260B9591F440C1F> L_11(il2cpp_rgctx_data(method->rgctx_data, 3), (&___1_srcValue));
		Type_t* L_12;
		L_12 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((&L_11), NULL);
		V_4 = L_12;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		Type_t* L_15 = V_4;
		NullCheck(L_14);
		bool L_16;
		L_16 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_14, L_15);
		V_6 = L_16;
		bool L_17 = V_6;
		if (!L_17)
		{
			goto IL_0089;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_18 = ___0_dstValue;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_19 = ___1_srcValue;
		*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)L_18 = L_19;
		goto IL_027c;
	}

IL_0089:
	{
		Type_t* L_20 = V_4;
		bool L_21;
		L_21 = TypeTraits_IsContainer_m46D04F3E3219371CC5F133E2CC54BCA46FD72505(L_20, NULL);
		V_7 = (bool)((((int32_t)L_21) == ((int32_t)0))? 1 : 0);
		bool L_22 = V_7;
		if (!L_22)
		{
			goto IL_00a6;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_23 = ___0_dstValue;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_24 = ___1_srcValue;
		*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)L_23 = L_24;
		goto IL_027c;
	}

IL_00a6:
	{
		Type_t* L_25 = V_4;
		NullCheck(L_25);
		bool L_26;
		L_26 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_25, NULL);
		if (L_26)
		{
			goto IL_00c5;
		}
	}
	{
		Type_t* L_27 = V_4;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_28 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.string_class->byval_arg) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_29;
		L_29 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_28, NULL);
		bool L_30;
		L_30 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_27, L_29, NULL);
		G_B16_0 = ((((int32_t)L_30) == ((int32_t)0))? 1 : 0);
		goto IL_00c6;
	}

IL_00c5:
	{
		G_B16_0 = 0;
	}

IL_00c6:
	{
		V_5 = (bool)G_B16_0;
		bool L_31 = V_5;
		V_8 = L_31;
		bool L_32 = V_8;
		if (!L_32)
		{
			goto IL_0134;
		}
	}
	{
		RuntimeObject* L_33 = __this->___m_RootSource;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_34 = ___1_srcValue;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_35 = L_34;
		RuntimeObject* L_36 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_35);
		V_10 = (bool)((((RuntimeObject*)(RuntimeObject*)L_33) == ((RuntimeObject*)(RuntimeObject*)L_36))? 1 : 0);
		bool L_37 = V_10;
		if (!L_37)
		{
			goto IL_00fc;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_38 = ___0_dstValue;
		RuntimeObject* L_39 = __this->___m_RootDestination;
		*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)L_38 = ((*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)UnBox(L_39, il2cpp_rgctx_data(method->rgctx_data, 3))));
		goto IL_027c;
	}

IL_00fc:
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_40 = __this->___m_References;
		if (!L_40)
		{
			goto IL_0119;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_41 = __this->___m_References;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_42 = ___1_srcValue;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_43 = L_42;
		RuntimeObject* L_44 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_43);
		NullCheck(L_41);
		bool L_45;
		L_45 = Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849(L_41, L_44, (&V_9), Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		G_B22_0 = ((int32_t)(L_45));
		goto IL_011a;
	}

IL_0119:
	{
		G_B22_0 = 0;
	}

IL_011a:
	{
		V_11 = (bool)G_B22_0;
		bool L_46 = V_11;
		if (!L_46)
		{
			goto IL_0133;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_47 = ___0_dstValue;
		RuntimeObject* L_48 = V_9;
		*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)L_47 = ((*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)UnBox(L_48, il2cpp_rgctx_data(method->rgctx_data, 3))));
		goto IL_027c;
	}

IL_0133:
	{
	}

IL_0134:
	{
		Type_t* L_49 = V_4;
		NullCheck(L_49);
		bool L_50;
		L_50 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_49, NULL);
		V_12 = L_50;
		bool L_51 = V_12;
		if (!L_51)
		{
			goto IL_01b6;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_52 = ___1_srcValue;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_53 = L_52;
		RuntimeObject* L_54 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_53);
		V_14 = (RuntimeObject*)NULL;
		RuntimeObject* L_55 = V_14;
		if (L_55)
		{
			goto IL_0156;
		}
	}
	{
		G_B29_0 = 0;
		goto IL_015d;
	}

IL_0156:
	{
		RuntimeObject* L_56 = V_14;
		NullCheck((RuntimeObject*)L_56);
		int32_t L_57;
		L_57 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_56);
		G_B29_0 = L_57;
	}

IL_015d:
	{
		V_13 = G_B29_0;
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_59 = ___0_dstValue;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_60 = (*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)L_59);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_61 = L_60;
		RuntimeObject* L_62 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_61);
		RuntimeArray* L_63 = ((RuntimeArray*)IsInstClass((RuntimeObject*)L_62, il2cpp_defaults.array_class));
		if (L_63)
		{
			G_B32_0 = L_63;
			goto IL_0183;
		}
		G_B31_0 = L_63;
	}
	{
		G_B33_0 = 1;
		goto IL_018f;
	}

IL_0183:
	{
		NullCheck(G_B32_0);
		int32_t L_64;
		L_64 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(G_B32_0, NULL);
		int32_t L_65 = V_13;
		G_B33_0 = ((((int32_t)((((int32_t)L_64) == ((int32_t)L_65))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_018f:
	{
		G_B35_0 = G_B33_0;
		goto IL_0192;
	}

IL_0192:
	{
		V_15 = (bool)G_B35_0;
		bool L_66 = V_15;
		if (!L_66)
		{
			goto IL_01b3;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_67 = ___0_dstValue;
		Type_t* L_68 = V_4;
		NullCheck(L_68);
		Type_t* L_69;
		L_69 = VirtualFuncInvoker0< Type_t* >::Invoke(48, L_68);
		int32_t L_70 = V_13;
		RuntimeArray* L_71;
		L_71 = Array_CreateInstance_m13B202130951A03AF5F52470A19E17D3AD2A8983(L_69, L_70, NULL);
		*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)L_67 = ((*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)UnBox((RuntimeObject*)L_71, il2cpp_rgctx_data(method->rgctx_data, 3))));
	}

IL_01b3:
	{
		goto IL_01f5;
	}

IL_01b6:
	{
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_73 = ___0_dstValue;
		Il2CppFakeBox<Color_tD001788D726C3A7F1379BEED0260B9591F440C1F> L_74(il2cpp_rgctx_data(method->rgctx_data, 3), L_73);
		Type_t* L_75;
		L_75 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((&L_74), NULL);
		Type_t* L_76 = V_4;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_77;
		L_77 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_75, L_76, NULL);
		G_B41_0 = ((int32_t)(L_77));
		goto IL_01da;
	}

IL_01da:
	{
		V_16 = (bool)G_B41_0;
		bool L_78 = V_16;
		if (!L_78)
		{
			goto IL_01f4;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_79 = ___0_dstValue;
		Type_t* L_80 = V_4;
		RuntimeObject* L_81;
		L_81 = Activator_CreateInstance_mFF030428C64FDDFACC74DFAC97388A1C628BFBCF(L_80, NULL);
		*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)L_79 = ((*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)UnBox(L_81, il2cpp_rgctx_data(method->rgctx_data, 3))));
	}

IL_01f4:
	{
	}

IL_01f5:
	{
		bool L_82 = V_5;
		V_17 = L_82;
		bool L_83 = V_17;
		if (!L_83)
		{
			goto IL_0236;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_84 = __this->___m_References;
		V_18 = (bool)((((RuntimeObject*)(Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*)L_84) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_85 = V_18;
		if (!L_85)
		{
			goto IL_0218;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_86 = (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*)il2cpp_codegen_object_new(Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329(L_86, Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_RuntimeMethod_var);
		__this->___m_References = L_86;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_References), (void*)L_86);
	}

IL_0218:
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_87 = __this->___m_References;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_88 = ___1_srcValue;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_89 = L_88;
		RuntimeObject* L_90 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_89);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_91 = ___0_dstValue;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_92 = (*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)L_91);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_93 = L_92;
		RuntimeObject* L_94 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_93);
		NullCheck(L_87);
		Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1(L_87, L_90, L_94, Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
	}

IL_0236:
	{
	}

IL_0237:
	{
		RuntimeObject* L_95 = __this->___m_Stack;
		V_0 = L_95;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_96 = ___0_dstValue;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_97 = (*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)L_96);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_98 = L_97;
		RuntimeObject* L_99 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_98);
		__this->___m_Stack = L_99;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Stack), (void*)L_99);
		il2cpp_codegen_initobj((&V_20), sizeof(VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE));
		VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE L_100 = V_20;
		bool L_101;
		L_101 = PropertyContainer_TryAccept_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mA4496631791398E2C1146B6666206CB67A799D4C((RuntimeObject*)__this, (&___1_srcValue), (&V_19), L_100, il2cpp_rgctx_method(method->rgctx_data, 7));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_102 = ___0_dstValue;
		RuntimeObject* L_103 = __this->___m_Stack;
		*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)L_102 = ((*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)UnBox(L_103, il2cpp_rgctx_data(method->rgctx_data, 3))));
		RuntimeObject* L_104 = V_0;
		__this->___m_Stack = L_104;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Stack), (void*)L_104);
	}

IL_027c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManagedObjectClone_CloneValue_TisCursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82_mB59725CBFBAC75CFCE1F8564B50CFD4D7EC24354_gshared (ManagedObjectClone_t6E754ED2624B829553A94A85A0D62AD51B58FCD6* __this, Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82* ___0_dstValue, Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82 ___1_srcValue, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	Type_t* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	RuntimeObject* V_9 = NULL;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t V_13 = 0;
	RuntimeObject* V_14 = NULL;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	int32_t V_19 = 0;
	VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE V_20;
	memset((&V_20), 0, sizeof(V_20));
	int32_t G_B5_0 = 0;
	int32_t G_B16_0 = 0;
	int32_t G_B22_0 = 0;
	int32_t G_B29_0 = 0;
	RuntimeArray* G_B32_0 = NULL;
	RuntimeArray* G_B31_0 = NULL;
	int32_t G_B33_0 = 0;
	int32_t G_B35_0 = 0;
	int32_t G_B41_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_0;
		L_0 = TypeTraits_1_get_IsContainer_m9954C20121DAAFEFE7509702CC85124310BA3F83_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82* L_2 = ___0_dstValue;
		Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82 L_3 = ___1_srcValue;
		*(Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82*)L_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)&(((Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82*)L_2)->___U3CtextureU3Ek__BackingField), (void*)NULL);
		goto IL_027c;
	}

IL_001a:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_4;
		L_4 = TypeTraits_1_get_CanBeNull_mAAD948E1BCC65D96F56C5DAD5F0A83D116272304_inline(il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82 L_5 = ___1_srcValue;
		G_B5_0 = ((int32_t)(false));
		goto IL_002d;
	}

IL_002c:
	{
		G_B5_0 = 0;
	}

IL_002d:
	{
		V_2 = (bool)G_B5_0;
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_003e;
		}
	}
	{
		Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82* L_7 = ___0_dstValue;
		il2cpp_codegen_initobj(L_7, sizeof(Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82));
		goto IL_027c;
	}

IL_003e:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_8;
		L_8 = TypeTraits_1_get_IsValueType_m03C73EA225C7C6C16C2639EB5F76A808A2788050_inline(il2cpp_rgctx_method(method->rgctx_data, 5));
		V_3 = L_8;
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_0055;
		}
	}
	{
		Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82* L_10 = ___0_dstValue;
		il2cpp_codegen_initobj(L_10, sizeof(Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82));
		goto IL_0237;
	}

IL_0055:
	{
		Il2CppFakeBox<Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82> L_11(il2cpp_rgctx_data(method->rgctx_data, 3), (&___1_srcValue));
		Type_t* L_12;
		L_12 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((&L_11), NULL);
		V_4 = L_12;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		Type_t* L_15 = V_4;
		NullCheck(L_14);
		bool L_16;
		L_16 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_14, L_15);
		V_6 = L_16;
		bool L_17 = V_6;
		if (!L_17)
		{
			goto IL_0089;
		}
	}
	{
		Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82* L_18 = ___0_dstValue;
		Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82 L_19 = ___1_srcValue;
		*(Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82*)L_18 = L_19;
		Il2CppCodeGenWriteBarrier((void**)&(((Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82*)L_18)->___U3CtextureU3Ek__BackingField), (void*)NULL);
		goto IL_027c;
	}

IL_0089:
	{
		Type_t* L_20 = V_4;
		bool L_21;
		L_21 = TypeTraits_IsContainer_m46D04F3E3219371CC5F133E2CC54BCA46FD72505(L_20, NULL);
		V_7 = (bool)((((int32_t)L_21) == ((int32_t)0))? 1 : 0);
		bool L_22 = V_7;
		if (!L_22)
		{
			goto IL_00a6;
		}
	}
	{
		Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82* L_23 = ___0_dstValue;
		Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82 L_24 = ___1_srcValue;
		*(Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82*)L_23 = L_24;
		Il2CppCodeGenWriteBarrier((void**)&(((Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82*)L_23)->___U3CtextureU3Ek__BackingField), (void*)NULL);
		goto IL_027c;
	}

IL_00a6:
	{
		Type_t* L_25 = V_4;
		NullCheck(L_25);
		bool L_26;
		L_26 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_25, NULL);
		if (L_26)
		{
			goto IL_00c5;
		}
	}
	{
		Type_t* L_27 = V_4;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_28 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.string_class->byval_arg) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_29;
		L_29 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_28, NULL);
		bool L_30;
		L_30 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_27, L_29, NULL);
		G_B16_0 = ((((int32_t)L_30) == ((int32_t)0))? 1 : 0);
		goto IL_00c6;
	}

IL_00c5:
	{
		G_B16_0 = 0;
	}

IL_00c6:
	{
		V_5 = (bool)G_B16_0;
		bool L_31 = V_5;
		V_8 = L_31;
		bool L_32 = V_8;
		if (!L_32)
		{
			goto IL_0134;
		}
	}
	{
		RuntimeObject* L_33 = __this->___m_RootSource;
		Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82 L_34 = ___1_srcValue;
		Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82 L_35 = L_34;
		RuntimeObject* L_36 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_35);
		V_10 = (bool)((((RuntimeObject*)(RuntimeObject*)L_33) == ((RuntimeObject*)(RuntimeObject*)L_36))? 1 : 0);
		bool L_37 = V_10;
		if (!L_37)
		{
			goto IL_00fc;
		}
	}
	{
		Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82* L_38 = ___0_dstValue;
		RuntimeObject* L_39 = __this->___m_RootDestination;
		*(Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82*)L_38 = ((*(Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82*)UnBox(L_39, il2cpp_rgctx_data(method->rgctx_data, 3))));
		Il2CppCodeGenWriteBarrier((void**)&(((Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82*)L_38)->___U3CtextureU3Ek__BackingField), (void*)NULL);
		goto IL_027c;
	}

IL_00fc:
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_40 = __this->___m_References;
		if (!L_40)
		{
			goto IL_0119;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_41 = __this->___m_References;
		Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82 L_42 = ___1_srcValue;
		Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82 L_43 = L_42;
		RuntimeObject* L_44 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_43);
		NullCheck(L_41);
		bool L_45;
		L_45 = Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849(L_41, L_44, (&V_9), Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		G_B22_0 = ((int32_t)(L_45));
		goto IL_011a;
	}

IL_0119:
	{
		G_B22_0 = 0;
	}

IL_011a:
	{
		V_11 = (bool)G_B22_0;
		bool L_46 = V_11;
		if (!L_46)
		{
			goto IL_0133;
		}
	}
	{
		Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82* L_47 = ___0_dstValue;
		RuntimeObject* L_48 = V_9;
		*(Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82*)L_47 = ((*(Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82*)UnBox(L_48, il2cpp_rgctx_data(method->rgctx_data, 3))));
		Il2CppCodeGenWriteBarrier((void**)&(((Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82*)L_47)->___U3CtextureU3Ek__BackingField), (void*)NULL);
		goto IL_027c;
	}

IL_0133:
	{
	}

IL_0134:
	{
		Type_t* L_49 = V_4;
		NullCheck(L_49);
		bool L_50;
		L_50 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_49, NULL);
		V_12 = L_50;
		bool L_51 = V_12;
		if (!L_51)
		{
			goto IL_01b6;
		}
	}
	{
		Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82 L_52 = ___1_srcValue;
		Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82 L_53 = L_52;
		RuntimeObject* L_54 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_53);
		V_14 = (RuntimeObject*)NULL;
		RuntimeObject* L_55 = V_14;
		if (L_55)
		{
			goto IL_0156;
		}
	}
	{
		G_B29_0 = 0;
		goto IL_015d;
	}

IL_0156:
	{
		RuntimeObject* L_56 = V_14;
		NullCheck((RuntimeObject*)L_56);
		int32_t L_57;
		L_57 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_56);
		G_B29_0 = L_57;
	}

IL_015d:
	{
		V_13 = G_B29_0;
	}
	{
		Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82* L_59 = ___0_dstValue;
		Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82 L_60 = (*(Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82*)L_59);
		Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82 L_61 = L_60;
		RuntimeObject* L_62 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_61);
		RuntimeArray* L_63 = ((RuntimeArray*)IsInstClass((RuntimeObject*)L_62, il2cpp_defaults.array_class));
		if (L_63)
		{
			G_B32_0 = L_63;
			goto IL_0183;
		}
		G_B31_0 = L_63;
	}
	{
		G_B33_0 = 1;
		goto IL_018f;
	}

IL_0183:
	{
		NullCheck(G_B32_0);
		int32_t L_64;
		L_64 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(G_B32_0, NULL);
		int32_t L_65 = V_13;
		G_B33_0 = ((((int32_t)((((int32_t)L_64) == ((int32_t)L_65))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_018f:
	{
		G_B35_0 = G_B33_0;
		goto IL_0192;
	}

IL_0192:
	{
		V_15 = (bool)G_B35_0;
		bool L_66 = V_15;
		if (!L_66)
		{
			goto IL_01b3;
		}
	}
	{
		Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82* L_67 = ___0_dstValue;
		Type_t* L_68 = V_4;
		NullCheck(L_68);
		Type_t* L_69;
		L_69 = VirtualFuncInvoker0< Type_t* >::Invoke(48, L_68);
		int32_t L_70 = V_13;
		RuntimeArray* L_71;
		L_71 = Array_CreateInstance_m13B202130951A03AF5F52470A19E17D3AD2A8983(L_69, L_70, NULL);
		*(Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82*)L_67 = ((*(Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82*)UnBox((RuntimeObject*)L_71, il2cpp_rgctx_data(method->rgctx_data, 3))));
		Il2CppCodeGenWriteBarrier((void**)&(((Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82*)L_67)->___U3CtextureU3Ek__BackingField), (void*)NULL);
	}

IL_01b3:
	{
		goto IL_01f5;
	}

IL_01b6:
	{
	}
	{
		Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82* L_73 = ___0_dstValue;
		Il2CppFakeBox<Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82> L_74(il2cpp_rgctx_data(method->rgctx_data, 3), L_73);
		Type_t* L_75;
		L_75 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((&L_74), NULL);
		Type_t* L_76 = V_4;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_77;
		L_77 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_75, L_76, NULL);
		G_B41_0 = ((int32_t)(L_77));
		goto IL_01da;
	}

IL_01da:
	{
		V_16 = (bool)G_B41_0;
		bool L_78 = V_16;
		if (!L_78)
		{
			goto IL_01f4;
		}
	}
	{
		Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82* L_79 = ___0_dstValue;
		Type_t* L_80 = V_4;
		RuntimeObject* L_81;
		L_81 = Activator_CreateInstance_mFF030428C64FDDFACC74DFAC97388A1C628BFBCF(L_80, NULL);
		*(Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82*)L_79 = ((*(Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82*)UnBox(L_81, il2cpp_rgctx_data(method->rgctx_data, 3))));
		Il2CppCodeGenWriteBarrier((void**)&(((Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82*)L_79)->___U3CtextureU3Ek__BackingField), (void*)NULL);
	}

IL_01f4:
	{
	}

IL_01f5:
	{
		bool L_82 = V_5;
		V_17 = L_82;
		bool L_83 = V_17;
		if (!L_83)
		{
			goto IL_0236;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_84 = __this->___m_References;
		V_18 = (bool)((((RuntimeObject*)(Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*)L_84) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_85 = V_18;
		if (!L_85)
		{
			goto IL_0218;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_86 = (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*)il2cpp_codegen_object_new(Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329(L_86, Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_RuntimeMethod_var);
		__this->___m_References = L_86;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_References), (void*)L_86);
	}

IL_0218:
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_87 = __this->___m_References;
		Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82 L_88 = ___1_srcValue;
		Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82 L_89 = L_88;
		RuntimeObject* L_90 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_89);
		Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82* L_91 = ___0_dstValue;
		Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82 L_92 = (*(Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82*)L_91);
		Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82 L_93 = L_92;
		RuntimeObject* L_94 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_93);
		NullCheck(L_87);
		Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1(L_87, L_90, L_94, Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
	}

IL_0236:
	{
	}

IL_0237:
	{
		RuntimeObject* L_95 = __this->___m_Stack;
		V_0 = L_95;
		Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82* L_96 = ___0_dstValue;
		Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82 L_97 = (*(Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82*)L_96);
		Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82 L_98 = L_97;
		RuntimeObject* L_99 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_98);
		__this->___m_Stack = L_99;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Stack), (void*)L_99);
		il2cpp_codegen_initobj((&V_20), sizeof(VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE));
		VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE L_100 = V_20;
		bool L_101;
		L_101 = PropertyContainer_TryAccept_TisCursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82_m998EC4F726294610076C7C460525D0A3670FD943((RuntimeObject*)__this, (&___1_srcValue), (&V_19), L_100, il2cpp_rgctx_method(method->rgctx_data, 7));
		Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82* L_102 = ___0_dstValue;
		RuntimeObject* L_103 = __this->___m_Stack;
		*(Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82*)L_102 = ((*(Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82*)UnBox(L_103, il2cpp_rgctx_data(method->rgctx_data, 3))));
		Il2CppCodeGenWriteBarrier((void**)&(((Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82*)L_102)->___U3CtextureU3Ek__BackingField), (void*)NULL);
		RuntimeObject* L_104 = V_0;
		__this->___m_Stack = L_104;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Stack), (void*)L_104);
	}

IL_027c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManagedObjectClone_CloneValue_TisEasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4_m3C5A758E7186CDD7D0FFDC5BC82B5AB1EC117E34_gshared (ManagedObjectClone_t6E754ED2624B829553A94A85A0D62AD51B58FCD6* __this, EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4* ___0_dstValue, EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4 ___1_srcValue, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	Type_t* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	RuntimeObject* V_9 = NULL;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t V_13 = 0;
	RuntimeObject* V_14 = NULL;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	int32_t V_19 = 0;
	VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE V_20;
	memset((&V_20), 0, sizeof(V_20));
	int32_t G_B5_0 = 0;
	int32_t G_B16_0 = 0;
	int32_t G_B22_0 = 0;
	int32_t G_B29_0 = 0;
	RuntimeArray* G_B32_0 = NULL;
	RuntimeArray* G_B31_0 = NULL;
	int32_t G_B33_0 = 0;
	int32_t G_B35_0 = 0;
	int32_t G_B41_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_0;
		L_0 = TypeTraits_1_get_IsContainer_mBF4BFF0A6D1C23DF7294C1A793CCC3FA21D22822_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4* L_2 = ___0_dstValue;
		EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4 L_3 = ___1_srcValue;
		*(EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4*)L_2 = L_3;
		goto IL_027c;
	}

IL_001a:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_4;
		L_4 = TypeTraits_1_get_CanBeNull_mDDCC371571712BD98B3A2EAA177F5D2E5E97FAD5_inline(il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4 L_5 = ___1_srcValue;
		G_B5_0 = ((int32_t)(false));
		goto IL_002d;
	}

IL_002c:
	{
		G_B5_0 = 0;
	}

IL_002d:
	{
		V_2 = (bool)G_B5_0;
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_003e;
		}
	}
	{
		EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4* L_7 = ___0_dstValue;
		il2cpp_codegen_initobj(L_7, sizeof(EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4));
		goto IL_027c;
	}

IL_003e:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_8;
		L_8 = TypeTraits_1_get_IsValueType_m1D8B7A9107E1AC42133ADBB9D3E09F84BCC142DF_inline(il2cpp_rgctx_method(method->rgctx_data, 5));
		V_3 = L_8;
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_0055;
		}
	}
	{
		EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4* L_10 = ___0_dstValue;
		il2cpp_codegen_initobj(L_10, sizeof(EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4));
		goto IL_0237;
	}

IL_0055:
	{
		Il2CppFakeBox<EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4> L_11(il2cpp_rgctx_data(method->rgctx_data, 3), (&___1_srcValue));
		Type_t* L_12;
		L_12 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((&L_11), NULL);
		V_4 = L_12;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		Type_t* L_15 = V_4;
		NullCheck(L_14);
		bool L_16;
		L_16 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_14, L_15);
		V_6 = L_16;
		bool L_17 = V_6;
		if (!L_17)
		{
			goto IL_0089;
		}
	}
	{
		EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4* L_18 = ___0_dstValue;
		EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4 L_19 = ___1_srcValue;
		*(EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4*)L_18 = L_19;
		goto IL_027c;
	}

IL_0089:
	{
		Type_t* L_20 = V_4;
		bool L_21;
		L_21 = TypeTraits_IsContainer_m46D04F3E3219371CC5F133E2CC54BCA46FD72505(L_20, NULL);
		V_7 = (bool)((((int32_t)L_21) == ((int32_t)0))? 1 : 0);
		bool L_22 = V_7;
		if (!L_22)
		{
			goto IL_00a6;
		}
	}
	{
		EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4* L_23 = ___0_dstValue;
		EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4 L_24 = ___1_srcValue;
		*(EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4*)L_23 = L_24;
		goto IL_027c;
	}

IL_00a6:
	{
		Type_t* L_25 = V_4;
		NullCheck(L_25);
		bool L_26;
		L_26 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_25, NULL);
		if (L_26)
		{
			goto IL_00c5;
		}
	}
	{
		Type_t* L_27 = V_4;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_28 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.string_class->byval_arg) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_29;
		L_29 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_28, NULL);
		bool L_30;
		L_30 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_27, L_29, NULL);
		G_B16_0 = ((((int32_t)L_30) == ((int32_t)0))? 1 : 0);
		goto IL_00c6;
	}

IL_00c5:
	{
		G_B16_0 = 0;
	}

IL_00c6:
	{
		V_5 = (bool)G_B16_0;
		bool L_31 = V_5;
		V_8 = L_31;
		bool L_32 = V_8;
		if (!L_32)
		{
			goto IL_0134;
		}
	}
	{
		RuntimeObject* L_33 = __this->___m_RootSource;
		EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4 L_34 = ___1_srcValue;
		EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4 L_35 = L_34;
		RuntimeObject* L_36 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_35);
		V_10 = (bool)((((RuntimeObject*)(RuntimeObject*)L_33) == ((RuntimeObject*)(RuntimeObject*)L_36))? 1 : 0);
		bool L_37 = V_10;
		if (!L_37)
		{
			goto IL_00fc;
		}
	}
	{
		EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4* L_38 = ___0_dstValue;
		RuntimeObject* L_39 = __this->___m_RootDestination;
		*(EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4*)L_38 = ((*(EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4*)UnBox(L_39, il2cpp_rgctx_data(method->rgctx_data, 3))));
		goto IL_027c;
	}

IL_00fc:
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_40 = __this->___m_References;
		if (!L_40)
		{
			goto IL_0119;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_41 = __this->___m_References;
		EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4 L_42 = ___1_srcValue;
		EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4 L_43 = L_42;
		RuntimeObject* L_44 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_43);
		NullCheck(L_41);
		bool L_45;
		L_45 = Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849(L_41, L_44, (&V_9), Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		G_B22_0 = ((int32_t)(L_45));
		goto IL_011a;
	}

IL_0119:
	{
		G_B22_0 = 0;
	}

IL_011a:
	{
		V_11 = (bool)G_B22_0;
		bool L_46 = V_11;
		if (!L_46)
		{
			goto IL_0133;
		}
	}
	{
		EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4* L_47 = ___0_dstValue;
		RuntimeObject* L_48 = V_9;
		*(EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4*)L_47 = ((*(EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4*)UnBox(L_48, il2cpp_rgctx_data(method->rgctx_data, 3))));
		goto IL_027c;
	}

IL_0133:
	{
	}

IL_0134:
	{
		Type_t* L_49 = V_4;
		NullCheck(L_49);
		bool L_50;
		L_50 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_49, NULL);
		V_12 = L_50;
		bool L_51 = V_12;
		if (!L_51)
		{
			goto IL_01b6;
		}
	}
	{
		EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4 L_52 = ___1_srcValue;
		EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4 L_53 = L_52;
		RuntimeObject* L_54 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_53);
		V_14 = (RuntimeObject*)NULL;
		RuntimeObject* L_55 = V_14;
		if (L_55)
		{
			goto IL_0156;
		}
	}
	{
		G_B29_0 = 0;
		goto IL_015d;
	}

IL_0156:
	{
		RuntimeObject* L_56 = V_14;
		NullCheck((RuntimeObject*)L_56);
		int32_t L_57;
		L_57 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_56);
		G_B29_0 = L_57;
	}

IL_015d:
	{
		V_13 = G_B29_0;
	}
	{
		EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4* L_59 = ___0_dstValue;
		EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4 L_60 = (*(EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4*)L_59);
		EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4 L_61 = L_60;
		RuntimeObject* L_62 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_61);
		RuntimeArray* L_63 = ((RuntimeArray*)IsInstClass((RuntimeObject*)L_62, il2cpp_defaults.array_class));
		if (L_63)
		{
			G_B32_0 = L_63;
			goto IL_0183;
		}
		G_B31_0 = L_63;
	}
	{
		G_B33_0 = 1;
		goto IL_018f;
	}

IL_0183:
	{
		NullCheck(G_B32_0);
		int32_t L_64;
		L_64 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(G_B32_0, NULL);
		int32_t L_65 = V_13;
		G_B33_0 = ((((int32_t)((((int32_t)L_64) == ((int32_t)L_65))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_018f:
	{
		G_B35_0 = G_B33_0;
		goto IL_0192;
	}

IL_0192:
	{
		V_15 = (bool)G_B35_0;
		bool L_66 = V_15;
		if (!L_66)
		{
			goto IL_01b3;
		}
	}
	{
		EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4* L_67 = ___0_dstValue;
		Type_t* L_68 = V_4;
		NullCheck(L_68);
		Type_t* L_69;
		L_69 = VirtualFuncInvoker0< Type_t* >::Invoke(48, L_68);
		int32_t L_70 = V_13;
		RuntimeArray* L_71;
		L_71 = Array_CreateInstance_m13B202130951A03AF5F52470A19E17D3AD2A8983(L_69, L_70, NULL);
		*(EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4*)L_67 = ((*(EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4*)UnBox((RuntimeObject*)L_71, il2cpp_rgctx_data(method->rgctx_data, 3))));
	}

IL_01b3:
	{
		goto IL_01f5;
	}

IL_01b6:
	{
	}
	{
		EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4* L_73 = ___0_dstValue;
		Il2CppFakeBox<EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4> L_74(il2cpp_rgctx_data(method->rgctx_data, 3), L_73);
		Type_t* L_75;
		L_75 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((&L_74), NULL);
		Type_t* L_76 = V_4;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_77;
		L_77 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_75, L_76, NULL);
		G_B41_0 = ((int32_t)(L_77));
		goto IL_01da;
	}

IL_01da:
	{
		V_16 = (bool)G_B41_0;
		bool L_78 = V_16;
		if (!L_78)
		{
			goto IL_01f4;
		}
	}
	{
		EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4* L_79 = ___0_dstValue;
		Type_t* L_80 = V_4;
		RuntimeObject* L_81;
		L_81 = Activator_CreateInstance_mFF030428C64FDDFACC74DFAC97388A1C628BFBCF(L_80, NULL);
		*(EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4*)L_79 = ((*(EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4*)UnBox(L_81, il2cpp_rgctx_data(method->rgctx_data, 3))));
	}

IL_01f4:
	{
	}

IL_01f5:
	{
		bool L_82 = V_5;
		V_17 = L_82;
		bool L_83 = V_17;
		if (!L_83)
		{
			goto IL_0236;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_84 = __this->___m_References;
		V_18 = (bool)((((RuntimeObject*)(Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*)L_84) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_85 = V_18;
		if (!L_85)
		{
			goto IL_0218;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_86 = (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*)il2cpp_codegen_object_new(Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329(L_86, Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_RuntimeMethod_var);
		__this->___m_References = L_86;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_References), (void*)L_86);
	}

IL_0218:
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_87 = __this->___m_References;
		EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4 L_88 = ___1_srcValue;
		EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4 L_89 = L_88;
		RuntimeObject* L_90 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_89);
		EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4* L_91 = ___0_dstValue;
		EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4 L_92 = (*(EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4*)L_91);
		EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4 L_93 = L_92;
		RuntimeObject* L_94 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_93);
		NullCheck(L_87);
		Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1(L_87, L_90, L_94, Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
	}

IL_0236:
	{
	}

IL_0237:
	{
		RuntimeObject* L_95 = __this->___m_Stack;
		V_0 = L_95;
		EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4* L_96 = ___0_dstValue;
		EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4 L_97 = (*(EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4*)L_96);
		EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4 L_98 = L_97;
		RuntimeObject* L_99 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_98);
		__this->___m_Stack = L_99;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Stack), (void*)L_99);
		il2cpp_codegen_initobj((&V_20), sizeof(VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE));
		VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE L_100 = V_20;
		bool L_101;
		L_101 = PropertyContainer_TryAccept_TisEasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4_m4CEB456F13C968A3F03D24002BF37838E229EBB3((RuntimeObject*)__this, (&___1_srcValue), (&V_19), L_100, il2cpp_rgctx_method(method->rgctx_data, 7));
		EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4* L_102 = ___0_dstValue;
		RuntimeObject* L_103 = __this->___m_Stack;
		*(EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4*)L_102 = ((*(EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4*)UnBox(L_103, il2cpp_rgctx_data(method->rgctx_data, 3))));
		RuntimeObject* L_104 = V_0;
		__this->___m_Stack = L_104;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Stack), (void*)L_104);
	}

IL_027c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManagedObjectClone_CloneValue_TisFontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_mF8F330BF0CF59D50CBBB2AEEC33B7AF00521E3E6_gshared (ManagedObjectClone_t6E754ED2624B829553A94A85A0D62AD51B58FCD6* __this, FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C* ___0_dstValue, FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C ___1_srcValue, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	Type_t* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	RuntimeObject* V_9 = NULL;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t V_13 = 0;
	RuntimeObject* V_14 = NULL;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	int32_t V_19 = 0;
	VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE V_20;
	memset((&V_20), 0, sizeof(V_20));
	int32_t G_B5_0 = 0;
	int32_t G_B16_0 = 0;
	int32_t G_B22_0 = 0;
	int32_t G_B29_0 = 0;
	RuntimeArray* G_B32_0 = NULL;
	RuntimeArray* G_B31_0 = NULL;
	int32_t G_B33_0 = 0;
	int32_t G_B35_0 = 0;
	int32_t G_B41_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_0;
		L_0 = TypeTraits_1_get_IsContainer_m06C3A79C67236D6160E0E130244694827B949182_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C* L_2 = ___0_dstValue;
		FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C L_3 = ___1_srcValue;
		*(FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C*)L_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)&(((FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C*)L_2)->___m_Font), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C*)L_2)->___m_FontAsset), (void*)NULL);
		#endif
		goto IL_027c;
	}

IL_001a:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_4;
		L_4 = TypeTraits_1_get_CanBeNull_m686F9F739041D767C3ACA256B3A68D6573B73B61_inline(il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C L_5 = ___1_srcValue;
		G_B5_0 = ((int32_t)(false));
		goto IL_002d;
	}

IL_002c:
	{
		G_B5_0 = 0;
	}

IL_002d:
	{
		V_2 = (bool)G_B5_0;
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_003e;
		}
	}
	{
		FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C* L_7 = ___0_dstValue;
		il2cpp_codegen_initobj(L_7, sizeof(FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C));
		goto IL_027c;
	}

IL_003e:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_8;
		L_8 = TypeTraits_1_get_IsValueType_mCD2F075EE8FA987FED25F36ACC13C6D0F4A32693_inline(il2cpp_rgctx_method(method->rgctx_data, 5));
		V_3 = L_8;
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_0055;
		}
	}
	{
		FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C* L_10 = ___0_dstValue;
		il2cpp_codegen_initobj(L_10, sizeof(FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C));
		goto IL_0237;
	}

IL_0055:
	{
		Il2CppFakeBox<FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C> L_11(il2cpp_rgctx_data(method->rgctx_data, 3), (&___1_srcValue));
		Type_t* L_12;
		L_12 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((&L_11), NULL);
		V_4 = L_12;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		Type_t* L_15 = V_4;
		NullCheck(L_14);
		bool L_16;
		L_16 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_14, L_15);
		V_6 = L_16;
		bool L_17 = V_6;
		if (!L_17)
		{
			goto IL_0089;
		}
	}
	{
		FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C* L_18 = ___0_dstValue;
		FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C L_19 = ___1_srcValue;
		*(FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C*)L_18 = L_19;
		Il2CppCodeGenWriteBarrier((void**)&(((FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C*)L_18)->___m_Font), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C*)L_18)->___m_FontAsset), (void*)NULL);
		#endif
		goto IL_027c;
	}

IL_0089:
	{
		Type_t* L_20 = V_4;
		bool L_21;
		L_21 = TypeTraits_IsContainer_m46D04F3E3219371CC5F133E2CC54BCA46FD72505(L_20, NULL);
		V_7 = (bool)((((int32_t)L_21) == ((int32_t)0))? 1 : 0);
		bool L_22 = V_7;
		if (!L_22)
		{
			goto IL_00a6;
		}
	}
	{
		FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C* L_23 = ___0_dstValue;
		FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C L_24 = ___1_srcValue;
		*(FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C*)L_23 = L_24;
		Il2CppCodeGenWriteBarrier((void**)&(((FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C*)L_23)->___m_Font), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C*)L_23)->___m_FontAsset), (void*)NULL);
		#endif
		goto IL_027c;
	}

IL_00a6:
	{
		Type_t* L_25 = V_4;
		NullCheck(L_25);
		bool L_26;
		L_26 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_25, NULL);
		if (L_26)
		{
			goto IL_00c5;
		}
	}
	{
		Type_t* L_27 = V_4;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_28 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.string_class->byval_arg) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_29;
		L_29 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_28, NULL);
		bool L_30;
		L_30 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_27, L_29, NULL);
		G_B16_0 = ((((int32_t)L_30) == ((int32_t)0))? 1 : 0);
		goto IL_00c6;
	}

IL_00c5:
	{
		G_B16_0 = 0;
	}

IL_00c6:
	{
		V_5 = (bool)G_B16_0;
		bool L_31 = V_5;
		V_8 = L_31;
		bool L_32 = V_8;
		if (!L_32)
		{
			goto IL_0134;
		}
	}
	{
		RuntimeObject* L_33 = __this->___m_RootSource;
		FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C L_34 = ___1_srcValue;
		FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C L_35 = L_34;
		RuntimeObject* L_36 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_35);
		V_10 = (bool)((((RuntimeObject*)(RuntimeObject*)L_33) == ((RuntimeObject*)(RuntimeObject*)L_36))? 1 : 0);
		bool L_37 = V_10;
		if (!L_37)
		{
			goto IL_00fc;
		}
	}
	{
		FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C* L_38 = ___0_dstValue;
		RuntimeObject* L_39 = __this->___m_RootDestination;
		*(FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C*)L_38 = ((*(FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C*)UnBox(L_39, il2cpp_rgctx_data(method->rgctx_data, 3))));
		Il2CppCodeGenWriteBarrier((void**)&(((FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C*)L_38)->___m_Font), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C*)L_38)->___m_FontAsset), (void*)NULL);
		#endif
		goto IL_027c;
	}

IL_00fc:
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_40 = __this->___m_References;
		if (!L_40)
		{
			goto IL_0119;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_41 = __this->___m_References;
		FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C L_42 = ___1_srcValue;
		FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C L_43 = L_42;
		RuntimeObject* L_44 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_43);
		NullCheck(L_41);
		bool L_45;
		L_45 = Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849(L_41, L_44, (&V_9), Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		G_B22_0 = ((int32_t)(L_45));
		goto IL_011a;
	}

IL_0119:
	{
		G_B22_0 = 0;
	}

IL_011a:
	{
		V_11 = (bool)G_B22_0;
		bool L_46 = V_11;
		if (!L_46)
		{
			goto IL_0133;
		}
	}
	{
		FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C* L_47 = ___0_dstValue;
		RuntimeObject* L_48 = V_9;
		*(FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C*)L_47 = ((*(FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C*)UnBox(L_48, il2cpp_rgctx_data(method->rgctx_data, 3))));
		Il2CppCodeGenWriteBarrier((void**)&(((FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C*)L_47)->___m_Font), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C*)L_47)->___m_FontAsset), (void*)NULL);
		#endif
		goto IL_027c;
	}

IL_0133:
	{
	}

IL_0134:
	{
		Type_t* L_49 = V_4;
		NullCheck(L_49);
		bool L_50;
		L_50 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_49, NULL);
		V_12 = L_50;
		bool L_51 = V_12;
		if (!L_51)
		{
			goto IL_01b6;
		}
	}
	{
		FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C L_52 = ___1_srcValue;
		FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C L_53 = L_52;
		RuntimeObject* L_54 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_53);
		V_14 = (RuntimeObject*)NULL;
		RuntimeObject* L_55 = V_14;
		if (L_55)
		{
			goto IL_0156;
		}
	}
	{
		G_B29_0 = 0;
		goto IL_015d;
	}

IL_0156:
	{
		RuntimeObject* L_56 = V_14;
		NullCheck((RuntimeObject*)L_56);
		int32_t L_57;
		L_57 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_56);
		G_B29_0 = L_57;
	}

IL_015d:
	{
		V_13 = G_B29_0;
	}
	{
		FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C* L_59 = ___0_dstValue;
		FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C L_60 = (*(FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C*)L_59);
		FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C L_61 = L_60;
		RuntimeObject* L_62 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_61);
		RuntimeArray* L_63 = ((RuntimeArray*)IsInstClass((RuntimeObject*)L_62, il2cpp_defaults.array_class));
		if (L_63)
		{
			G_B32_0 = L_63;
			goto IL_0183;
		}
		G_B31_0 = L_63;
	}
	{
		G_B33_0 = 1;
		goto IL_018f;
	}

IL_0183:
	{
		NullCheck(G_B32_0);
		int32_t L_64;
		L_64 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(G_B32_0, NULL);
		int32_t L_65 = V_13;
		G_B33_0 = ((((int32_t)((((int32_t)L_64) == ((int32_t)L_65))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_018f:
	{
		G_B35_0 = G_B33_0;
		goto IL_0192;
	}

IL_0192:
	{
		V_15 = (bool)G_B35_0;
		bool L_66 = V_15;
		if (!L_66)
		{
			goto IL_01b3;
		}
	}
	{
		FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C* L_67 = ___0_dstValue;
		Type_t* L_68 = V_4;
		NullCheck(L_68);
		Type_t* L_69;
		L_69 = VirtualFuncInvoker0< Type_t* >::Invoke(48, L_68);
		int32_t L_70 = V_13;
		RuntimeArray* L_71;
		L_71 = Array_CreateInstance_m13B202130951A03AF5F52470A19E17D3AD2A8983(L_69, L_70, NULL);
		*(FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C*)L_67 = ((*(FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C*)UnBox((RuntimeObject*)L_71, il2cpp_rgctx_data(method->rgctx_data, 3))));
		Il2CppCodeGenWriteBarrier((void**)&(((FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C*)L_67)->___m_Font), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C*)L_67)->___m_FontAsset), (void*)NULL);
		#endif
	}

IL_01b3:
	{
		goto IL_01f5;
	}

IL_01b6:
	{
	}
	{
		FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C* L_73 = ___0_dstValue;
		Il2CppFakeBox<FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C> L_74(il2cpp_rgctx_data(method->rgctx_data, 3), L_73);
		Type_t* L_75;
		L_75 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((&L_74), NULL);
		Type_t* L_76 = V_4;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_77;
		L_77 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_75, L_76, NULL);
		G_B41_0 = ((int32_t)(L_77));
		goto IL_01da;
	}

IL_01da:
	{
		V_16 = (bool)G_B41_0;
		bool L_78 = V_16;
		if (!L_78)
		{
			goto IL_01f4;
		}
	}
	{
		FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C* L_79 = ___0_dstValue;
		Type_t* L_80 = V_4;
		RuntimeObject* L_81;
		L_81 = Activator_CreateInstance_mFF030428C64FDDFACC74DFAC97388A1C628BFBCF(L_80, NULL);
		*(FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C*)L_79 = ((*(FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C*)UnBox(L_81, il2cpp_rgctx_data(method->rgctx_data, 3))));
		Il2CppCodeGenWriteBarrier((void**)&(((FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C*)L_79)->___m_Font), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C*)L_79)->___m_FontAsset), (void*)NULL);
		#endif
	}

IL_01f4:
	{
	}

IL_01f5:
	{
		bool L_82 = V_5;
		V_17 = L_82;
		bool L_83 = V_17;
		if (!L_83)
		{
			goto IL_0236;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_84 = __this->___m_References;
		V_18 = (bool)((((RuntimeObject*)(Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*)L_84) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_85 = V_18;
		if (!L_85)
		{
			goto IL_0218;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_86 = (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*)il2cpp_codegen_object_new(Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329(L_86, Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_RuntimeMethod_var);
		__this->___m_References = L_86;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_References), (void*)L_86);
	}

IL_0218:
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_87 = __this->___m_References;
		FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C L_88 = ___1_srcValue;
		FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C L_89 = L_88;
		RuntimeObject* L_90 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_89);
		FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C* L_91 = ___0_dstValue;
		FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C L_92 = (*(FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C*)L_91);
		FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C L_93 = L_92;
		RuntimeObject* L_94 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_93);
		NullCheck(L_87);
		Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1(L_87, L_90, L_94, Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
	}

IL_0236:
	{
	}

IL_0237:
	{
		RuntimeObject* L_95 = __this->___m_Stack;
		V_0 = L_95;
		FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C* L_96 = ___0_dstValue;
		FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C L_97 = (*(FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C*)L_96);
		FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C L_98 = L_97;
		RuntimeObject* L_99 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_98);
		__this->___m_Stack = L_99;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Stack), (void*)L_99);
		il2cpp_codegen_initobj((&V_20), sizeof(VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE));
		VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE L_100 = V_20;
		bool L_101;
		L_101 = PropertyContainer_TryAccept_TisFontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_mDBE15826524114DF897566E7853B93939B669D2A((RuntimeObject*)__this, (&___1_srcValue), (&V_19), L_100, il2cpp_rgctx_method(method->rgctx_data, 7));
		FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C* L_102 = ___0_dstValue;
		RuntimeObject* L_103 = __this->___m_Stack;
		*(FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C*)L_102 = ((*(FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C*)UnBox(L_103, il2cpp_rgctx_data(method->rgctx_data, 3))));
		Il2CppCodeGenWriteBarrier((void**)&(((FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C*)L_102)->___m_Font), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C*)L_102)->___m_FontAsset), (void*)NULL);
		#endif
		RuntimeObject* L_104 = V_0;
		__this->___m_Stack = L_104;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Stack), (void*)L_104);
	}

IL_027c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManagedObjectClone_CloneValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m142C6205DEB9F2F711696D3E7627DE45C006CF25_gshared (ManagedObjectClone_t6E754ED2624B829553A94A85A0D62AD51B58FCD6* __this, int32_t* ___0_dstValue, int32_t ___1_srcValue, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	Type_t* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	RuntimeObject* V_9 = NULL;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t V_13 = 0;
	RuntimeObject* V_14 = NULL;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	int32_t V_19 = 0;
	VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE V_20;
	memset((&V_20), 0, sizeof(V_20));
	int32_t G_B5_0 = 0;
	int32_t G_B16_0 = 0;
	int32_t G_B22_0 = 0;
	int32_t G_B29_0 = 0;
	RuntimeArray* G_B32_0 = NULL;
	RuntimeArray* G_B31_0 = NULL;
	int32_t G_B33_0 = 0;
	int32_t G_B35_0 = 0;
	int32_t G_B41_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_0;
		L_0 = TypeTraits_1_get_IsContainer_m0D78DAA55CA1CA3AE94272FDFF02D1C1BC1763C6_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		int32_t* L_2 = ___0_dstValue;
		int32_t L_3 = ___1_srcValue;
		*(int32_t*)L_2 = L_3;
		goto IL_027c;
	}

IL_001a:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_4;
		L_4 = TypeTraits_1_get_CanBeNull_mE0F90826548B0C3102050B135AABD7FCF73A5120_inline(il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_5 = ___1_srcValue;
		G_B5_0 = ((int32_t)(false));
		goto IL_002d;
	}

IL_002c:
	{
		G_B5_0 = 0;
	}

IL_002d:
	{
		V_2 = (bool)G_B5_0;
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_003e;
		}
	}
	{
		int32_t* L_7 = ___0_dstValue;
		il2cpp_codegen_initobj(L_7, sizeof(int32_t));
		goto IL_027c;
	}

IL_003e:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_8;
		L_8 = TypeTraits_1_get_IsValueType_m11497792427A6500E5BEC1F44B26CED5E4E210BB_inline(il2cpp_rgctx_method(method->rgctx_data, 5));
		V_3 = L_8;
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_0055;
		}
	}
	{
		int32_t* L_10 = ___0_dstValue;
		il2cpp_codegen_initobj(L_10, sizeof(int32_t));
		goto IL_0237;
	}

IL_0055:
	{
		Il2CppFakeBox<int32_t> L_11(il2cpp_rgctx_data(method->rgctx_data, 3), (&___1_srcValue));
		Type_t* L_12;
		L_12 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((&L_11), NULL);
		V_4 = L_12;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		Type_t* L_15 = V_4;
		NullCheck(L_14);
		bool L_16;
		L_16 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_14, L_15);
		V_6 = L_16;
		bool L_17 = V_6;
		if (!L_17)
		{
			goto IL_0089;
		}
	}
	{
		int32_t* L_18 = ___0_dstValue;
		int32_t L_19 = ___1_srcValue;
		*(int32_t*)L_18 = L_19;
		goto IL_027c;
	}

IL_0089:
	{
		Type_t* L_20 = V_4;
		bool L_21;
		L_21 = TypeTraits_IsContainer_m46D04F3E3219371CC5F133E2CC54BCA46FD72505(L_20, NULL);
		V_7 = (bool)((((int32_t)L_21) == ((int32_t)0))? 1 : 0);
		bool L_22 = V_7;
		if (!L_22)
		{
			goto IL_00a6;
		}
	}
	{
		int32_t* L_23 = ___0_dstValue;
		int32_t L_24 = ___1_srcValue;
		*(int32_t*)L_23 = L_24;
		goto IL_027c;
	}

IL_00a6:
	{
		Type_t* L_25 = V_4;
		NullCheck(L_25);
		bool L_26;
		L_26 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_25, NULL);
		if (L_26)
		{
			goto IL_00c5;
		}
	}
	{
		Type_t* L_27 = V_4;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_28 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.string_class->byval_arg) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_29;
		L_29 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_28, NULL);
		bool L_30;
		L_30 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_27, L_29, NULL);
		G_B16_0 = ((((int32_t)L_30) == ((int32_t)0))? 1 : 0);
		goto IL_00c6;
	}

IL_00c5:
	{
		G_B16_0 = 0;
	}

IL_00c6:
	{
		V_5 = (bool)G_B16_0;
		bool L_31 = V_5;
		V_8 = L_31;
		bool L_32 = V_8;
		if (!L_32)
		{
			goto IL_0134;
		}
	}
	{
		RuntimeObject* L_33 = __this->___m_RootSource;
		int32_t L_34 = ___1_srcValue;
		int32_t L_35 = L_34;
		RuntimeObject* L_36 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_35);
		V_10 = (bool)((((RuntimeObject*)(RuntimeObject*)L_33) == ((RuntimeObject*)(RuntimeObject*)L_36))? 1 : 0);
		bool L_37 = V_10;
		if (!L_37)
		{
			goto IL_00fc;
		}
	}
	{
		int32_t* L_38 = ___0_dstValue;
		RuntimeObject* L_39 = __this->___m_RootDestination;
		*(int32_t*)L_38 = ((*(int32_t*)UnBox(L_39, il2cpp_rgctx_data(method->rgctx_data, 3))));
		goto IL_027c;
	}

IL_00fc:
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_40 = __this->___m_References;
		if (!L_40)
		{
			goto IL_0119;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_41 = __this->___m_References;
		int32_t L_42 = ___1_srcValue;
		int32_t L_43 = L_42;
		RuntimeObject* L_44 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_43);
		NullCheck(L_41);
		bool L_45;
		L_45 = Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849(L_41, L_44, (&V_9), Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		G_B22_0 = ((int32_t)(L_45));
		goto IL_011a;
	}

IL_0119:
	{
		G_B22_0 = 0;
	}

IL_011a:
	{
		V_11 = (bool)G_B22_0;
		bool L_46 = V_11;
		if (!L_46)
		{
			goto IL_0133;
		}
	}
	{
		int32_t* L_47 = ___0_dstValue;
		RuntimeObject* L_48 = V_9;
		*(int32_t*)L_47 = ((*(int32_t*)UnBox(L_48, il2cpp_rgctx_data(method->rgctx_data, 3))));
		goto IL_027c;
	}

IL_0133:
	{
	}

IL_0134:
	{
		Type_t* L_49 = V_4;
		NullCheck(L_49);
		bool L_50;
		L_50 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_49, NULL);
		V_12 = L_50;
		bool L_51 = V_12;
		if (!L_51)
		{
			goto IL_01b6;
		}
	}
	{
		int32_t L_52 = ___1_srcValue;
		int32_t L_53 = L_52;
		RuntimeObject* L_54 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_53);
		V_14 = (RuntimeObject*)NULL;
		RuntimeObject* L_55 = V_14;
		if (L_55)
		{
			goto IL_0156;
		}
	}
	{
		G_B29_0 = 0;
		goto IL_015d;
	}

IL_0156:
	{
		RuntimeObject* L_56 = V_14;
		NullCheck((RuntimeObject*)L_56);
		int32_t L_57;
		L_57 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_56);
		G_B29_0 = L_57;
	}

IL_015d:
	{
		V_13 = G_B29_0;
	}
	{
		int32_t* L_59 = ___0_dstValue;
		int32_t L_60 = (*(int32_t*)L_59);
		int32_t L_61 = L_60;
		RuntimeObject* L_62 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_61);
		RuntimeArray* L_63 = ((RuntimeArray*)IsInstClass((RuntimeObject*)L_62, il2cpp_defaults.array_class));
		if (L_63)
		{
			G_B32_0 = L_63;
			goto IL_0183;
		}
		G_B31_0 = L_63;
	}
	{
		G_B33_0 = 1;
		goto IL_018f;
	}

IL_0183:
	{
		NullCheck(G_B32_0);
		int32_t L_64;
		L_64 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(G_B32_0, NULL);
		int32_t L_65 = V_13;
		G_B33_0 = ((((int32_t)((((int32_t)L_64) == ((int32_t)L_65))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_018f:
	{
		G_B35_0 = G_B33_0;
		goto IL_0192;
	}

IL_0192:
	{
		V_15 = (bool)G_B35_0;
		bool L_66 = V_15;
		if (!L_66)
		{
			goto IL_01b3;
		}
	}
	{
		int32_t* L_67 = ___0_dstValue;
		Type_t* L_68 = V_4;
		NullCheck(L_68);
		Type_t* L_69;
		L_69 = VirtualFuncInvoker0< Type_t* >::Invoke(48, L_68);
		int32_t L_70 = V_13;
		RuntimeArray* L_71;
		L_71 = Array_CreateInstance_m13B202130951A03AF5F52470A19E17D3AD2A8983(L_69, L_70, NULL);
		*(int32_t*)L_67 = ((*(int32_t*)UnBox((RuntimeObject*)L_71, il2cpp_rgctx_data(method->rgctx_data, 3))));
	}

IL_01b3:
	{
		goto IL_01f5;
	}

IL_01b6:
	{
	}
	{
		int32_t* L_73 = ___0_dstValue;
		Il2CppFakeBox<int32_t> L_74(il2cpp_rgctx_data(method->rgctx_data, 3), L_73);
		Type_t* L_75;
		L_75 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((&L_74), NULL);
		Type_t* L_76 = V_4;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_77;
		L_77 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_75, L_76, NULL);
		G_B41_0 = ((int32_t)(L_77));
		goto IL_01da;
	}

IL_01da:
	{
		V_16 = (bool)G_B41_0;
		bool L_78 = V_16;
		if (!L_78)
		{
			goto IL_01f4;
		}
	}
	{
		int32_t* L_79 = ___0_dstValue;
		Type_t* L_80 = V_4;
		RuntimeObject* L_81;
		L_81 = Activator_CreateInstance_mFF030428C64FDDFACC74DFAC97388A1C628BFBCF(L_80, NULL);
		*(int32_t*)L_79 = ((*(int32_t*)UnBox(L_81, il2cpp_rgctx_data(method->rgctx_data, 3))));
	}

IL_01f4:
	{
	}

IL_01f5:
	{
		bool L_82 = V_5;
		V_17 = L_82;
		bool L_83 = V_17;
		if (!L_83)
		{
			goto IL_0236;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_84 = __this->___m_References;
		V_18 = (bool)((((RuntimeObject*)(Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*)L_84) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_85 = V_18;
		if (!L_85)
		{
			goto IL_0218;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_86 = (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*)il2cpp_codegen_object_new(Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329(L_86, Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_RuntimeMethod_var);
		__this->___m_References = L_86;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_References), (void*)L_86);
	}

IL_0218:
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_87 = __this->___m_References;
		int32_t L_88 = ___1_srcValue;
		int32_t L_89 = L_88;
		RuntimeObject* L_90 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_89);
		int32_t* L_91 = ___0_dstValue;
		int32_t L_92 = (*(int32_t*)L_91);
		int32_t L_93 = L_92;
		RuntimeObject* L_94 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_93);
		NullCheck(L_87);
		Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1(L_87, L_90, L_94, Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
	}

IL_0236:
	{
	}

IL_0237:
	{
		RuntimeObject* L_95 = __this->___m_Stack;
		V_0 = L_95;
		int32_t* L_96 = ___0_dstValue;
		int32_t L_97 = (*(int32_t*)L_96);
		int32_t L_98 = L_97;
		RuntimeObject* L_99 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_98);
		__this->___m_Stack = L_99;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Stack), (void*)L_99);
		il2cpp_codegen_initobj((&V_20), sizeof(VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE));
		VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE L_100 = V_20;
		bool L_101;
		L_101 = PropertyContainer_TryAccept_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mABCC1382ABBE35AC40535DC61778853B410E6E09((RuntimeObject*)__this, (&___1_srcValue), (&V_19), L_100, il2cpp_rgctx_method(method->rgctx_data, 7));
		int32_t* L_102 = ___0_dstValue;
		RuntimeObject* L_103 = __this->___m_Stack;
		*(int32_t*)L_102 = ((*(int32_t*)UnBox(L_103, il2cpp_rgctx_data(method->rgctx_data, 3))));
		RuntimeObject* L_104 = V_0;
		__this->___m_Stack = L_104;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Stack), (void*)L_104);
	}

IL_027c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManagedObjectClone_CloneValue_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m296259F9705F24201819BD8F9DF3560FC58731E0_gshared (ManagedObjectClone_t6E754ED2624B829553A94A85A0D62AD51B58FCD6* __this, int32_t* ___0_dstValue, int32_t ___1_srcValue, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	Type_t* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	RuntimeObject* V_9 = NULL;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t V_13 = 0;
	RuntimeObject* V_14 = NULL;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	int32_t V_19 = 0;
	VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE V_20;
	memset((&V_20), 0, sizeof(V_20));
	int32_t G_B5_0 = 0;
	int32_t G_B16_0 = 0;
	int32_t G_B22_0 = 0;
	int32_t G_B29_0 = 0;
	RuntimeArray* G_B32_0 = NULL;
	RuntimeArray* G_B31_0 = NULL;
	int32_t G_B33_0 = 0;
	int32_t G_B35_0 = 0;
	int32_t G_B41_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_0;
		L_0 = TypeTraits_1_get_IsContainer_mE25A4132A83087A571AA1CAE994FA56614EA64D7_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		int32_t* L_2 = ___0_dstValue;
		int32_t L_3 = ___1_srcValue;
		*(int32_t*)L_2 = L_3;
		goto IL_027c;
	}

IL_001a:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_4;
		L_4 = TypeTraits_1_get_CanBeNull_mB145F76964DE36569385F83F550741253F97BC8B_inline(il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_5 = ___1_srcValue;
		G_B5_0 = ((int32_t)(false));
		goto IL_002d;
	}

IL_002c:
	{
		G_B5_0 = 0;
	}

IL_002d:
	{
		V_2 = (bool)G_B5_0;
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_003e;
		}
	}
	{
		int32_t* L_7 = ___0_dstValue;
		il2cpp_codegen_initobj(L_7, sizeof(int32_t));
		goto IL_027c;
	}

IL_003e:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_8;
		L_8 = TypeTraits_1_get_IsValueType_m38FEC63D8762D52AF73C146A830156829593F37C_inline(il2cpp_rgctx_method(method->rgctx_data, 5));
		V_3 = L_8;
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_0055;
		}
	}
	{
		int32_t* L_10 = ___0_dstValue;
		il2cpp_codegen_initobj(L_10, sizeof(int32_t));
		goto IL_0237;
	}

IL_0055:
	{
		Il2CppFakeBox<int32_t> L_11(il2cpp_rgctx_data(method->rgctx_data, 3), (&___1_srcValue));
		Type_t* L_12;
		L_12 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((&L_11), NULL);
		V_4 = L_12;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		Type_t* L_15 = V_4;
		NullCheck(L_14);
		bool L_16;
		L_16 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_14, L_15);
		V_6 = L_16;
		bool L_17 = V_6;
		if (!L_17)
		{
			goto IL_0089;
		}
	}
	{
		int32_t* L_18 = ___0_dstValue;
		int32_t L_19 = ___1_srcValue;
		*(int32_t*)L_18 = L_19;
		goto IL_027c;
	}

IL_0089:
	{
		Type_t* L_20 = V_4;
		bool L_21;
		L_21 = TypeTraits_IsContainer_m46D04F3E3219371CC5F133E2CC54BCA46FD72505(L_20, NULL);
		V_7 = (bool)((((int32_t)L_21) == ((int32_t)0))? 1 : 0);
		bool L_22 = V_7;
		if (!L_22)
		{
			goto IL_00a6;
		}
	}
	{
		int32_t* L_23 = ___0_dstValue;
		int32_t L_24 = ___1_srcValue;
		*(int32_t*)L_23 = L_24;
		goto IL_027c;
	}

IL_00a6:
	{
		Type_t* L_25 = V_4;
		NullCheck(L_25);
		bool L_26;
		L_26 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_25, NULL);
		if (L_26)
		{
			goto IL_00c5;
		}
	}
	{
		Type_t* L_27 = V_4;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_28 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.string_class->byval_arg) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_29;
		L_29 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_28, NULL);
		bool L_30;
		L_30 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_27, L_29, NULL);
		G_B16_0 = ((((int32_t)L_30) == ((int32_t)0))? 1 : 0);
		goto IL_00c6;
	}

IL_00c5:
	{
		G_B16_0 = 0;
	}

IL_00c6:
	{
		V_5 = (bool)G_B16_0;
		bool L_31 = V_5;
		V_8 = L_31;
		bool L_32 = V_8;
		if (!L_32)
		{
			goto IL_0134;
		}
	}
	{
		RuntimeObject* L_33 = __this->___m_RootSource;
		int32_t L_34 = ___1_srcValue;
		int32_t L_35 = L_34;
		RuntimeObject* L_36 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_35);
		V_10 = (bool)((((RuntimeObject*)(RuntimeObject*)L_33) == ((RuntimeObject*)(RuntimeObject*)L_36))? 1 : 0);
		bool L_37 = V_10;
		if (!L_37)
		{
			goto IL_00fc;
		}
	}
	{
		int32_t* L_38 = ___0_dstValue;
		RuntimeObject* L_39 = __this->___m_RootDestination;
		*(int32_t*)L_38 = ((*(int32_t*)UnBox(L_39, il2cpp_rgctx_data(method->rgctx_data, 3))));
		goto IL_027c;
	}

IL_00fc:
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_40 = __this->___m_References;
		if (!L_40)
		{
			goto IL_0119;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_41 = __this->___m_References;
		int32_t L_42 = ___1_srcValue;
		int32_t L_43 = L_42;
		RuntimeObject* L_44 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_43);
		NullCheck(L_41);
		bool L_45;
		L_45 = Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849(L_41, L_44, (&V_9), Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		G_B22_0 = ((int32_t)(L_45));
		goto IL_011a;
	}

IL_0119:
	{
		G_B22_0 = 0;
	}

IL_011a:
	{
		V_11 = (bool)G_B22_0;
		bool L_46 = V_11;
		if (!L_46)
		{
			goto IL_0133;
		}
	}
	{
		int32_t* L_47 = ___0_dstValue;
		RuntimeObject* L_48 = V_9;
		*(int32_t*)L_47 = ((*(int32_t*)UnBox(L_48, il2cpp_rgctx_data(method->rgctx_data, 3))));
		goto IL_027c;
	}

IL_0133:
	{
	}

IL_0134:
	{
		Type_t* L_49 = V_4;
		NullCheck(L_49);
		bool L_50;
		L_50 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_49, NULL);
		V_12 = L_50;
		bool L_51 = V_12;
		if (!L_51)
		{
			goto IL_01b6;
		}
	}
	{
		int32_t L_52 = ___1_srcValue;
		int32_t L_53 = L_52;
		RuntimeObject* L_54 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_53);
		V_14 = (RuntimeObject*)NULL;
		RuntimeObject* L_55 = V_14;
		if (L_55)
		{
			goto IL_0156;
		}
	}
	{
		G_B29_0 = 0;
		goto IL_015d;
	}

IL_0156:
	{
		RuntimeObject* L_56 = V_14;
		NullCheck((RuntimeObject*)L_56);
		int32_t L_57;
		L_57 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_56);
		G_B29_0 = L_57;
	}

IL_015d:
	{
		V_13 = G_B29_0;
	}
	{
		int32_t* L_59 = ___0_dstValue;
		int32_t L_60 = (*(int32_t*)L_59);
		int32_t L_61 = L_60;
		RuntimeObject* L_62 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_61);
		RuntimeArray* L_63 = ((RuntimeArray*)IsInstClass((RuntimeObject*)L_62, il2cpp_defaults.array_class));
		if (L_63)
		{
			G_B32_0 = L_63;
			goto IL_0183;
		}
		G_B31_0 = L_63;
	}
	{
		G_B33_0 = 1;
		goto IL_018f;
	}

IL_0183:
	{
		NullCheck(G_B32_0);
		int32_t L_64;
		L_64 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(G_B32_0, NULL);
		int32_t L_65 = V_13;
		G_B33_0 = ((((int32_t)((((int32_t)L_64) == ((int32_t)L_65))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_018f:
	{
		G_B35_0 = G_B33_0;
		goto IL_0192;
	}

IL_0192:
	{
		V_15 = (bool)G_B35_0;
		bool L_66 = V_15;
		if (!L_66)
		{
			goto IL_01b3;
		}
	}
	{
		int32_t* L_67 = ___0_dstValue;
		Type_t* L_68 = V_4;
		NullCheck(L_68);
		Type_t* L_69;
		L_69 = VirtualFuncInvoker0< Type_t* >::Invoke(48, L_68);
		int32_t L_70 = V_13;
		RuntimeArray* L_71;
		L_71 = Array_CreateInstance_m13B202130951A03AF5F52470A19E17D3AD2A8983(L_69, L_70, NULL);
		*(int32_t*)L_67 = ((*(int32_t*)UnBox((RuntimeObject*)L_71, il2cpp_rgctx_data(method->rgctx_data, 3))));
	}

IL_01b3:
	{
		goto IL_01f5;
	}

IL_01b6:
	{
	}
	{
		int32_t* L_73 = ___0_dstValue;
		Il2CppFakeBox<int32_t> L_74(il2cpp_rgctx_data(method->rgctx_data, 3), L_73);
		Type_t* L_75;
		L_75 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((&L_74), NULL);
		Type_t* L_76 = V_4;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_77;
		L_77 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_75, L_76, NULL);
		G_B41_0 = ((int32_t)(L_77));
		goto IL_01da;
	}

IL_01da:
	{
		V_16 = (bool)G_B41_0;
		bool L_78 = V_16;
		if (!L_78)
		{
			goto IL_01f4;
		}
	}
	{
		int32_t* L_79 = ___0_dstValue;
		Type_t* L_80 = V_4;
		RuntimeObject* L_81;
		L_81 = Activator_CreateInstance_mFF030428C64FDDFACC74DFAC97388A1C628BFBCF(L_80, NULL);
		*(int32_t*)L_79 = ((*(int32_t*)UnBox(L_81, il2cpp_rgctx_data(method->rgctx_data, 3))));
	}

IL_01f4:
	{
	}

IL_01f5:
	{
		bool L_82 = V_5;
		V_17 = L_82;
		bool L_83 = V_17;
		if (!L_83)
		{
			goto IL_0236;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_84 = __this->___m_References;
		V_18 = (bool)((((RuntimeObject*)(Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*)L_84) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_85 = V_18;
		if (!L_85)
		{
			goto IL_0218;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_86 = (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*)il2cpp_codegen_object_new(Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329(L_86, Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_RuntimeMethod_var);
		__this->___m_References = L_86;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_References), (void*)L_86);
	}

IL_0218:
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_87 = __this->___m_References;
		int32_t L_88 = ___1_srcValue;
		int32_t L_89 = L_88;
		RuntimeObject* L_90 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_89);
		int32_t* L_91 = ___0_dstValue;
		int32_t L_92 = (*(int32_t*)L_91);
		int32_t L_93 = L_92;
		RuntimeObject* L_94 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_93);
		NullCheck(L_87);
		Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1(L_87, L_90, L_94, Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
	}

IL_0236:
	{
	}

IL_0237:
	{
		RuntimeObject* L_95 = __this->___m_Stack;
		V_0 = L_95;
		int32_t* L_96 = ___0_dstValue;
		int32_t L_97 = (*(int32_t*)L_96);
		int32_t L_98 = L_97;
		RuntimeObject* L_99 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_98);
		__this->___m_Stack = L_99;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Stack), (void*)L_99);
		il2cpp_codegen_initobj((&V_20), sizeof(VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE));
		VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE L_100 = V_20;
		bool L_101;
		L_101 = PropertyContainer_TryAccept_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mE2C5312C7AD108F2362FA0565EE9F7A64FBF635E((RuntimeObject*)__this, (&___1_srcValue), (&V_19), L_100, il2cpp_rgctx_method(method->rgctx_data, 7));
		int32_t* L_102 = ___0_dstValue;
		RuntimeObject* L_103 = __this->___m_Stack;
		*(int32_t*)L_102 = ((*(int32_t*)UnBox(L_103, il2cpp_rgctx_data(method->rgctx_data, 3))));
		RuntimeObject* L_104 = V_0;
		__this->___m_Stack = L_104;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Stack), (void*)L_104);
	}

IL_027c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManagedObjectClone_CloneValue_TisLength_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256_m1FCBB3CED58B13DF6D6E6EC910C06E8BD42F17F9_gshared (ManagedObjectClone_t6E754ED2624B829553A94A85A0D62AD51B58FCD6* __this, Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256* ___0_dstValue, Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___1_srcValue, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	Type_t* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	RuntimeObject* V_9 = NULL;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t V_13 = 0;
	RuntimeObject* V_14 = NULL;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	int32_t V_19 = 0;
	VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE V_20;
	memset((&V_20), 0, sizeof(V_20));
	int32_t G_B5_0 = 0;
	int32_t G_B16_0 = 0;
	int32_t G_B22_0 = 0;
	int32_t G_B29_0 = 0;
	RuntimeArray* G_B32_0 = NULL;
	RuntimeArray* G_B31_0 = NULL;
	int32_t G_B33_0 = 0;
	int32_t G_B35_0 = 0;
	int32_t G_B41_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_0;
		L_0 = TypeTraits_1_get_IsContainer_m2299324716E9073847D43B5EE074036241CE2FDB_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256* L_2 = ___0_dstValue;
		Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 L_3 = ___1_srcValue;
		*(Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256*)L_2 = L_3;
		goto IL_027c;
	}

IL_001a:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_4;
		L_4 = TypeTraits_1_get_CanBeNull_m0D87D0851EC5F34630C609FC128C8673317DCEAA_inline(il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 L_5 = ___1_srcValue;
		G_B5_0 = ((int32_t)(false));
		goto IL_002d;
	}

IL_002c:
	{
		G_B5_0 = 0;
	}

IL_002d:
	{
		V_2 = (bool)G_B5_0;
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_003e;
		}
	}
	{
		Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256* L_7 = ___0_dstValue;
		il2cpp_codegen_initobj(L_7, sizeof(Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256));
		goto IL_027c;
	}

IL_003e:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_8;
		L_8 = TypeTraits_1_get_IsValueType_mA5B381E720E0FDAE69EC5B76BA5DD0C67DEABD63_inline(il2cpp_rgctx_method(method->rgctx_data, 5));
		V_3 = L_8;
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_0055;
		}
	}
	{
		Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256* L_10 = ___0_dstValue;
		il2cpp_codegen_initobj(L_10, sizeof(Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256));
		goto IL_0237;
	}

IL_0055:
	{
		Il2CppFakeBox<Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256> L_11(il2cpp_rgctx_data(method->rgctx_data, 3), (&___1_srcValue));
		Type_t* L_12;
		L_12 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((&L_11), NULL);
		V_4 = L_12;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		Type_t* L_15 = V_4;
		NullCheck(L_14);
		bool L_16;
		L_16 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_14, L_15);
		V_6 = L_16;
		bool L_17 = V_6;
		if (!L_17)
		{
			goto IL_0089;
		}
	}
	{
		Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256* L_18 = ___0_dstValue;
		Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 L_19 = ___1_srcValue;
		*(Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256*)L_18 = L_19;
		goto IL_027c;
	}

IL_0089:
	{
		Type_t* L_20 = V_4;
		bool L_21;
		L_21 = TypeTraits_IsContainer_m46D04F3E3219371CC5F133E2CC54BCA46FD72505(L_20, NULL);
		V_7 = (bool)((((int32_t)L_21) == ((int32_t)0))? 1 : 0);
		bool L_22 = V_7;
		if (!L_22)
		{
			goto IL_00a6;
		}
	}
	{
		Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256* L_23 = ___0_dstValue;
		Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 L_24 = ___1_srcValue;
		*(Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256*)L_23 = L_24;
		goto IL_027c;
	}

IL_00a6:
	{
		Type_t* L_25 = V_4;
		NullCheck(L_25);
		bool L_26;
		L_26 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_25, NULL);
		if (L_26)
		{
			goto IL_00c5;
		}
	}
	{
		Type_t* L_27 = V_4;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_28 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.string_class->byval_arg) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_29;
		L_29 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_28, NULL);
		bool L_30;
		L_30 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_27, L_29, NULL);
		G_B16_0 = ((((int32_t)L_30) == ((int32_t)0))? 1 : 0);
		goto IL_00c6;
	}

IL_00c5:
	{
		G_B16_0 = 0;
	}

IL_00c6:
	{
		V_5 = (bool)G_B16_0;
		bool L_31 = V_5;
		V_8 = L_31;
		bool L_32 = V_8;
		if (!L_32)
		{
			goto IL_0134;
		}
	}
	{
		RuntimeObject* L_33 = __this->___m_RootSource;
		Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 L_34 = ___1_srcValue;
		Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 L_35 = L_34;
		RuntimeObject* L_36 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_35);
		V_10 = (bool)((((RuntimeObject*)(RuntimeObject*)L_33) == ((RuntimeObject*)(RuntimeObject*)L_36))? 1 : 0);
		bool L_37 = V_10;
		if (!L_37)
		{
			goto IL_00fc;
		}
	}
	{
		Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256* L_38 = ___0_dstValue;
		RuntimeObject* L_39 = __this->___m_RootDestination;
		*(Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256*)L_38 = ((*(Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256*)UnBox(L_39, il2cpp_rgctx_data(method->rgctx_data, 3))));
		goto IL_027c;
	}

IL_00fc:
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_40 = __this->___m_References;
		if (!L_40)
		{
			goto IL_0119;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_41 = __this->___m_References;
		Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 L_42 = ___1_srcValue;
		Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 L_43 = L_42;
		RuntimeObject* L_44 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_43);
		NullCheck(L_41);
		bool L_45;
		L_45 = Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849(L_41, L_44, (&V_9), Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		G_B22_0 = ((int32_t)(L_45));
		goto IL_011a;
	}

IL_0119:
	{
		G_B22_0 = 0;
	}

IL_011a:
	{
		V_11 = (bool)G_B22_0;
		bool L_46 = V_11;
		if (!L_46)
		{
			goto IL_0133;
		}
	}
	{
		Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256* L_47 = ___0_dstValue;
		RuntimeObject* L_48 = V_9;
		*(Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256*)L_47 = ((*(Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256*)UnBox(L_48, il2cpp_rgctx_data(method->rgctx_data, 3))));
		goto IL_027c;
	}

IL_0133:
	{
	}

IL_0134:
	{
		Type_t* L_49 = V_4;
		NullCheck(L_49);
		bool L_50;
		L_50 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_49, NULL);
		V_12 = L_50;
		bool L_51 = V_12;
		if (!L_51)
		{
			goto IL_01b6;
		}
	}
	{
		Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 L_52 = ___1_srcValue;
		Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 L_53 = L_52;
		RuntimeObject* L_54 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_53);
		V_14 = (RuntimeObject*)NULL;
		RuntimeObject* L_55 = V_14;
		if (L_55)
		{
			goto IL_0156;
		}
	}
	{
		G_B29_0 = 0;
		goto IL_015d;
	}

IL_0156:
	{
		RuntimeObject* L_56 = V_14;
		NullCheck((RuntimeObject*)L_56);
		int32_t L_57;
		L_57 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_56);
		G_B29_0 = L_57;
	}

IL_015d:
	{
		V_13 = G_B29_0;
	}
	{
		Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256* L_59 = ___0_dstValue;
		Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 L_60 = (*(Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256*)L_59);
		Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 L_61 = L_60;
		RuntimeObject* L_62 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_61);
		RuntimeArray* L_63 = ((RuntimeArray*)IsInstClass((RuntimeObject*)L_62, il2cpp_defaults.array_class));
		if (L_63)
		{
			G_B32_0 = L_63;
			goto IL_0183;
		}
		G_B31_0 = L_63;
	}
	{
		G_B33_0 = 1;
		goto IL_018f;
	}

IL_0183:
	{
		NullCheck(G_B32_0);
		int32_t L_64;
		L_64 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(G_B32_0, NULL);
		int32_t L_65 = V_13;
		G_B33_0 = ((((int32_t)((((int32_t)L_64) == ((int32_t)L_65))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_018f:
	{
		G_B35_0 = G_B33_0;
		goto IL_0192;
	}

IL_0192:
	{
		V_15 = (bool)G_B35_0;
		bool L_66 = V_15;
		if (!L_66)
		{
			goto IL_01b3;
		}
	}
	{
		Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256* L_67 = ___0_dstValue;
		Type_t* L_68 = V_4;
		NullCheck(L_68);
		Type_t* L_69;
		L_69 = VirtualFuncInvoker0< Type_t* >::Invoke(48, L_68);
		int32_t L_70 = V_13;
		RuntimeArray* L_71;
		L_71 = Array_CreateInstance_m13B202130951A03AF5F52470A19E17D3AD2A8983(L_69, L_70, NULL);
		*(Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256*)L_67 = ((*(Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256*)UnBox((RuntimeObject*)L_71, il2cpp_rgctx_data(method->rgctx_data, 3))));
	}

IL_01b3:
	{
		goto IL_01f5;
	}

IL_01b6:
	{
	}
	{
		Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256* L_73 = ___0_dstValue;
		Il2CppFakeBox<Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256> L_74(il2cpp_rgctx_data(method->rgctx_data, 3), L_73);
		Type_t* L_75;
		L_75 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((&L_74), NULL);
		Type_t* L_76 = V_4;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_77;
		L_77 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_75, L_76, NULL);
		G_B41_0 = ((int32_t)(L_77));
		goto IL_01da;
	}

IL_01da:
	{
		V_16 = (bool)G_B41_0;
		bool L_78 = V_16;
		if (!L_78)
		{
			goto IL_01f4;
		}
	}
	{
		Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256* L_79 = ___0_dstValue;
		Type_t* L_80 = V_4;
		RuntimeObject* L_81;
		L_81 = Activator_CreateInstance_mFF030428C64FDDFACC74DFAC97388A1C628BFBCF(L_80, NULL);
		*(Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256*)L_79 = ((*(Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256*)UnBox(L_81, il2cpp_rgctx_data(method->rgctx_data, 3))));
	}

IL_01f4:
	{
	}

IL_01f5:
	{
		bool L_82 = V_5;
		V_17 = L_82;
		bool L_83 = V_17;
		if (!L_83)
		{
			goto IL_0236;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_84 = __this->___m_References;
		V_18 = (bool)((((RuntimeObject*)(Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*)L_84) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_85 = V_18;
		if (!L_85)
		{
			goto IL_0218;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_86 = (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*)il2cpp_codegen_object_new(Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329(L_86, Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_RuntimeMethod_var);
		__this->___m_References = L_86;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_References), (void*)L_86);
	}

IL_0218:
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_87 = __this->___m_References;
		Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 L_88 = ___1_srcValue;
		Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 L_89 = L_88;
		RuntimeObject* L_90 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_89);
		Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256* L_91 = ___0_dstValue;
		Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 L_92 = (*(Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256*)L_91);
		Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 L_93 = L_92;
		RuntimeObject* L_94 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_93);
		NullCheck(L_87);
		Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1(L_87, L_90, L_94, Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
	}

IL_0236:
	{
	}

IL_0237:
	{
		RuntimeObject* L_95 = __this->___m_Stack;
		V_0 = L_95;
		Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256* L_96 = ___0_dstValue;
		Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 L_97 = (*(Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256*)L_96);
		Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 L_98 = L_97;
		RuntimeObject* L_99 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_98);
		__this->___m_Stack = L_99;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Stack), (void*)L_99);
		il2cpp_codegen_initobj((&V_20), sizeof(VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE));
		VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE L_100 = V_20;
		bool L_101;
		L_101 = PropertyContainer_TryAccept_TisLength_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256_mFD5C09CC7FB80860303CD624D0FE8482999D38E1((RuntimeObject*)__this, (&___1_srcValue), (&V_19), L_100, il2cpp_rgctx_method(method->rgctx_data, 7));
		Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256* L_102 = ___0_dstValue;
		RuntimeObject* L_103 = __this->___m_Stack;
		*(Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256*)L_102 = ((*(Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256*)UnBox(L_103, il2cpp_rgctx_data(method->rgctx_data, 3))));
		RuntimeObject* L_104 = V_0;
		__this->___m_Stack = L_104;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Stack), (void*)L_104);
	}

IL_027c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManagedObjectClone_CloneValue_TisRuntimeObject_m88008E435FA50A5F6B4109D32BD66F5DCEF2FE19_gshared (ManagedObjectClone_t6E754ED2624B829553A94A85A0D62AD51B58FCD6* __this, RuntimeObject** ___0_dstValue, RuntimeObject* ___1_srcValue, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	Type_t* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	RuntimeObject* V_9 = NULL;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t V_13 = 0;
	RuntimeObject* V_14 = NULL;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	int32_t V_19 = 0;
	VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE V_20;
	memset((&V_20), 0, sizeof(V_20));
	int32_t G_B5_0 = 0;
	int32_t G_B16_0 = 0;
	int32_t G_B22_0 = 0;
	int32_t G_B29_0 = 0;
	RuntimeArray* G_B32_0 = NULL;
	RuntimeArray* G_B31_0 = NULL;
	int32_t G_B33_0 = 0;
	int32_t G_B35_0 = 0;
	int32_t G_B41_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_0;
		L_0 = TypeTraits_1_get_IsContainer_mF635D475A726AB153ADB8A392F952CD771C9B9D6_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_2 = ___0_dstValue;
		RuntimeObject* L_3 = ___1_srcValue;
		*(RuntimeObject**)L_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_2, (void*)L_3);
		goto IL_027c;
	}

IL_001a:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_4;
		L_4 = TypeTraits_1_get_CanBeNull_m735F17A1CDBD434E62378EBF10F8B56495139E17_inline(il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_5 = ___1_srcValue;
		G_B5_0 = ((((RuntimeObject*)(RuntimeObject*)L_5) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		goto IL_002d;
	}

IL_002c:
	{
		G_B5_0 = 0;
	}

IL_002d:
	{
		V_2 = (bool)G_B5_0;
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_003e;
		}
	}
	{
		RuntimeObject** L_7 = ___0_dstValue;
		il2cpp_codegen_initobj(L_7, sizeof(RuntimeObject*));
		goto IL_027c;
	}

IL_003e:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_8;
		L_8 = TypeTraits_1_get_IsValueType_m15C2D35A2D23101135FF92723A5F1C06CA8FA59D_inline(il2cpp_rgctx_method(method->rgctx_data, 5));
		V_3 = L_8;
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_0055;
		}
	}
	{
		RuntimeObject** L_10 = ___0_dstValue;
		il2cpp_codegen_initobj(L_10, sizeof(RuntimeObject*));
		goto IL_0237;
	}

IL_0055:
	{
		NullCheck((___1_srcValue));
		Type_t* L_11;
		L_11 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((___1_srcValue), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_4 = L_11;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		Type_t* L_14 = V_4;
		NullCheck(L_13);
		bool L_15;
		L_15 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_13, L_14);
		V_6 = L_15;
		bool L_16 = V_6;
		if (!L_16)
		{
			goto IL_0089;
		}
	}
	{
		RuntimeObject** L_17 = ___0_dstValue;
		RuntimeObject* L_18 = ___1_srcValue;
		*(RuntimeObject**)L_17 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_17, (void*)L_18);
		goto IL_027c;
	}

IL_0089:
	{
		Type_t* L_19 = V_4;
		bool L_20;
		L_20 = TypeTraits_IsContainer_m46D04F3E3219371CC5F133E2CC54BCA46FD72505(L_19, NULL);
		V_7 = (bool)((((int32_t)L_20) == ((int32_t)0))? 1 : 0);
		bool L_21 = V_7;
		if (!L_21)
		{
			goto IL_00a6;
		}
	}
	{
		RuntimeObject** L_22 = ___0_dstValue;
		RuntimeObject* L_23 = ___1_srcValue;
		*(RuntimeObject**)L_22 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_22, (void*)L_23);
		goto IL_027c;
	}

IL_00a6:
	{
		Type_t* L_24 = V_4;
		NullCheck(L_24);
		bool L_25;
		L_25 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_24, NULL);
		if (L_25)
		{
			goto IL_00c5;
		}
	}
	{
		Type_t* L_26 = V_4;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_27 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.string_class->byval_arg) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_28;
		L_28 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_27, NULL);
		bool L_29;
		L_29 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_26, L_28, NULL);
		G_B16_0 = ((((int32_t)L_29) == ((int32_t)0))? 1 : 0);
		goto IL_00c6;
	}

IL_00c5:
	{
		G_B16_0 = 0;
	}

IL_00c6:
	{
		V_5 = (bool)G_B16_0;
		bool L_30 = V_5;
		V_8 = L_30;
		bool L_31 = V_8;
		if (!L_31)
		{
			goto IL_0134;
		}
	}
	{
		RuntimeObject* L_32 = __this->___m_RootSource;
		RuntimeObject* L_33 = ___1_srcValue;
		V_10 = (bool)((((RuntimeObject*)(RuntimeObject*)L_32) == ((RuntimeObject*)(RuntimeObject*)L_33))? 1 : 0);
		bool L_34 = V_10;
		if (!L_34)
		{
			goto IL_00fc;
		}
	}
	{
		RuntimeObject** L_35 = ___0_dstValue;
		RuntimeObject* L_36 = __this->___m_RootDestination;
		*(RuntimeObject**)L_35 = ((RuntimeObject*)Castclass((RuntimeObject*)L_36, il2cpp_rgctx_data(method->rgctx_data, 3)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_35, (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_36, il2cpp_rgctx_data(method->rgctx_data, 3))));
		goto IL_027c;
	}

IL_00fc:
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_37 = __this->___m_References;
		if (!L_37)
		{
			goto IL_0119;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_38 = __this->___m_References;
		RuntimeObject* L_39 = ___1_srcValue;
		NullCheck(L_38);
		bool L_40;
		L_40 = Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849(L_38, L_39, (&V_9), Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		G_B22_0 = ((int32_t)(L_40));
		goto IL_011a;
	}

IL_0119:
	{
		G_B22_0 = 0;
	}

IL_011a:
	{
		V_11 = (bool)G_B22_0;
		bool L_41 = V_11;
		if (!L_41)
		{
			goto IL_0133;
		}
	}
	{
		RuntimeObject** L_42 = ___0_dstValue;
		RuntimeObject* L_43 = V_9;
		*(RuntimeObject**)L_42 = ((RuntimeObject*)Castclass((RuntimeObject*)L_43, il2cpp_rgctx_data(method->rgctx_data, 3)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_42, (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_43, il2cpp_rgctx_data(method->rgctx_data, 3))));
		goto IL_027c;
	}

IL_0133:
	{
	}

IL_0134:
	{
		Type_t* L_44 = V_4;
		NullCheck(L_44);
		bool L_45;
		L_45 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_44, NULL);
		V_12 = L_45;
		bool L_46 = V_12;
		if (!L_46)
		{
			goto IL_01b6;
		}
	}
	{
		RuntimeObject* L_47 = ___1_srcValue;
		V_14 = ((RuntimeObject*)IsInst((RuntimeObject*)L_47, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var));
		RuntimeObject* L_48 = V_14;
		if (L_48)
		{
			goto IL_0156;
		}
	}
	{
		G_B29_0 = 0;
		goto IL_015d;
	}

IL_0156:
	{
		RuntimeObject* L_49 = V_14;
		NullCheck((RuntimeObject*)L_49);
		int32_t L_50;
		L_50 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_49);
		G_B29_0 = L_50;
	}

IL_015d:
	{
		V_13 = G_B29_0;
		RuntimeObject** L_51 = ___0_dstValue;
		RuntimeObject* L_52 = (*(RuntimeObject**)L_51);
		if (!L_52)
		{
			goto IL_0191;
		}
	}
	{
		RuntimeObject** L_53 = ___0_dstValue;
		RuntimeObject* L_54 = (*(RuntimeObject**)L_53);
		RuntimeArray* L_55 = ((RuntimeArray*)IsInstClass((RuntimeObject*)L_54, il2cpp_defaults.array_class));
		if (L_55)
		{
			G_B32_0 = L_55;
			goto IL_0183;
		}
		G_B31_0 = L_55;
	}
	{
		G_B33_0 = 1;
		goto IL_018f;
	}

IL_0183:
	{
		NullCheck(G_B32_0);
		int32_t L_56;
		L_56 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(G_B32_0, NULL);
		int32_t L_57 = V_13;
		G_B33_0 = ((((int32_t)((((int32_t)L_56) == ((int32_t)L_57))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_018f:
	{
		G_B35_0 = G_B33_0;
		goto IL_0192;
	}

IL_0191:
	{
		G_B35_0 = 1;
	}

IL_0192:
	{
		V_15 = (bool)G_B35_0;
		bool L_58 = V_15;
		if (!L_58)
		{
			goto IL_01b3;
		}
	}
	{
		RuntimeObject** L_59 = ___0_dstValue;
		Type_t* L_60 = V_4;
		NullCheck(L_60);
		Type_t* L_61;
		L_61 = VirtualFuncInvoker0< Type_t* >::Invoke(48, L_60);
		int32_t L_62 = V_13;
		RuntimeArray* L_63;
		L_63 = Array_CreateInstance_m13B202130951A03AF5F52470A19E17D3AD2A8983(L_61, L_62, NULL);
		*(RuntimeObject**)L_59 = ((RuntimeObject*)Castclass((RuntimeObject*)L_63, il2cpp_rgctx_data(method->rgctx_data, 3)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_59, (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_63, il2cpp_rgctx_data(method->rgctx_data, 3))));
	}

IL_01b3:
	{
		goto IL_01f5;
	}

IL_01b6:
	{
		RuntimeObject** L_64 = ___0_dstValue;
		RuntimeObject* L_65 = (*(RuntimeObject**)L_64);
		if (!L_65)
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject** L_66 = ___0_dstValue;
		NullCheck((*L_66));
		Type_t* L_67;
		L_67 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((*L_66), il2cpp_rgctx_method(method->rgctx_data, 6));
		Type_t* L_68 = V_4;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_69;
		L_69 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_67, L_68, NULL);
		G_B41_0 = ((int32_t)(L_69));
		goto IL_01da;
	}

IL_01d9:
	{
		G_B41_0 = 1;
	}

IL_01da:
	{
		V_16 = (bool)G_B41_0;
		bool L_70 = V_16;
		if (!L_70)
		{
			goto IL_01f4;
		}
	}
	{
		RuntimeObject** L_71 = ___0_dstValue;
		Type_t* L_72 = V_4;
		RuntimeObject* L_73;
		L_73 = Activator_CreateInstance_mFF030428C64FDDFACC74DFAC97388A1C628BFBCF(L_72, NULL);
		*(RuntimeObject**)L_71 = ((RuntimeObject*)Castclass((RuntimeObject*)L_73, il2cpp_rgctx_data(method->rgctx_data, 3)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_71, (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_73, il2cpp_rgctx_data(method->rgctx_data, 3))));
	}

IL_01f4:
	{
	}

IL_01f5:
	{
		bool L_74 = V_5;
		V_17 = L_74;
		bool L_75 = V_17;
		if (!L_75)
		{
			goto IL_0236;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_76 = __this->___m_References;
		V_18 = (bool)((((RuntimeObject*)(Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*)L_76) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_77 = V_18;
		if (!L_77)
		{
			goto IL_0218;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_78 = (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*)il2cpp_codegen_object_new(Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329(L_78, Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_RuntimeMethod_var);
		__this->___m_References = L_78;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_References), (void*)L_78);
	}

IL_0218:
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_79 = __this->___m_References;
		RuntimeObject* L_80 = ___1_srcValue;
		RuntimeObject** L_81 = ___0_dstValue;
		RuntimeObject* L_82 = (*(RuntimeObject**)L_81);
		NullCheck(L_79);
		Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1(L_79, L_80, L_82, Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
	}

IL_0236:
	{
	}

IL_0237:
	{
		RuntimeObject* L_83 = __this->___m_Stack;
		V_0 = L_83;
		RuntimeObject** L_84 = ___0_dstValue;
		RuntimeObject* L_85 = (*(RuntimeObject**)L_84);
		__this->___m_Stack = L_85;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Stack), (void*)L_85);
		il2cpp_codegen_initobj((&V_20), sizeof(VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE));
		VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE L_86 = V_20;
		bool L_87;
		L_87 = PropertyContainer_TryAccept_TisRuntimeObject_mB6FB92B27875A6970EB6B2F948AE57066573F29D((RuntimeObject*)__this, (&___1_srcValue), (&V_19), L_86, il2cpp_rgctx_method(method->rgctx_data, 7));
		RuntimeObject** L_88 = ___0_dstValue;
		RuntimeObject* L_89 = __this->___m_Stack;
		*(RuntimeObject**)L_88 = ((RuntimeObject*)Castclass((RuntimeObject*)L_89, il2cpp_rgctx_data(method->rgctx_data, 3)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_88, (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_89, il2cpp_rgctx_data(method->rgctx_data, 3))));
		RuntimeObject* L_90 = V_0;
		__this->___m_Stack = L_90;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Stack), (void*)L_90);
	}

IL_027c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManagedObjectClone_CloneValue_TisRotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_m80480375886F03AE4FCD7070F1BD00A708285ADD_gshared (ManagedObjectClone_t6E754ED2624B829553A94A85A0D62AD51B58FCD6* __this, Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7* ___0_dstValue, Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7 ___1_srcValue, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	Type_t* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	RuntimeObject* V_9 = NULL;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t V_13 = 0;
	RuntimeObject* V_14 = NULL;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	int32_t V_19 = 0;
	VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE V_20;
	memset((&V_20), 0, sizeof(V_20));
	int32_t G_B5_0 = 0;
	int32_t G_B16_0 = 0;
	int32_t G_B22_0 = 0;
	int32_t G_B29_0 = 0;
	RuntimeArray* G_B32_0 = NULL;
	RuntimeArray* G_B31_0 = NULL;
	int32_t G_B33_0 = 0;
	int32_t G_B35_0 = 0;
	int32_t G_B41_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_0;
		L_0 = TypeTraits_1_get_IsContainer_m8743C852501A5A11E54F14DEA2070D10EB63A21F_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7* L_2 = ___0_dstValue;
		Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7 L_3 = ___1_srcValue;
		*(Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7*)L_2 = L_3;
		goto IL_027c;
	}

IL_001a:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_4;
		L_4 = TypeTraits_1_get_CanBeNull_mB861B1B55CFCEBC9DFF4387F456C2AC80B02A103_inline(il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7 L_5 = ___1_srcValue;
		G_B5_0 = ((int32_t)(false));
		goto IL_002d;
	}

IL_002c:
	{
		G_B5_0 = 0;
	}

IL_002d:
	{
		V_2 = (bool)G_B5_0;
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_003e;
		}
	}
	{
		Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7* L_7 = ___0_dstValue;
		il2cpp_codegen_initobj(L_7, sizeof(Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7));
		goto IL_027c;
	}

IL_003e:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_8;
		L_8 = TypeTraits_1_get_IsValueType_mFD19BE22C91DFC05260F1AA812448E708E0FAFE3_inline(il2cpp_rgctx_method(method->rgctx_data, 5));
		V_3 = L_8;
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_0055;
		}
	}
	{
		Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7* L_10 = ___0_dstValue;
		il2cpp_codegen_initobj(L_10, sizeof(Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7));
		goto IL_0237;
	}

IL_0055:
	{
		Il2CppFakeBox<Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7> L_11(il2cpp_rgctx_data(method->rgctx_data, 3), (&___1_srcValue));
		Type_t* L_12;
		L_12 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((&L_11), NULL);
		V_4 = L_12;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		Type_t* L_15 = V_4;
		NullCheck(L_14);
		bool L_16;
		L_16 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_14, L_15);
		V_6 = L_16;
		bool L_17 = V_6;
		if (!L_17)
		{
			goto IL_0089;
		}
	}
	{
		Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7* L_18 = ___0_dstValue;
		Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7 L_19 = ___1_srcValue;
		*(Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7*)L_18 = L_19;
		goto IL_027c;
	}

IL_0089:
	{
		Type_t* L_20 = V_4;
		bool L_21;
		L_21 = TypeTraits_IsContainer_m46D04F3E3219371CC5F133E2CC54BCA46FD72505(L_20, NULL);
		V_7 = (bool)((((int32_t)L_21) == ((int32_t)0))? 1 : 0);
		bool L_22 = V_7;
		if (!L_22)
		{
			goto IL_00a6;
		}
	}
	{
		Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7* L_23 = ___0_dstValue;
		Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7 L_24 = ___1_srcValue;
		*(Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7*)L_23 = L_24;
		goto IL_027c;
	}

IL_00a6:
	{
		Type_t* L_25 = V_4;
		NullCheck(L_25);
		bool L_26;
		L_26 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_25, NULL);
		if (L_26)
		{
			goto IL_00c5;
		}
	}
	{
		Type_t* L_27 = V_4;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_28 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.string_class->byval_arg) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_29;
		L_29 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_28, NULL);
		bool L_30;
		L_30 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_27, L_29, NULL);
		G_B16_0 = ((((int32_t)L_30) == ((int32_t)0))? 1 : 0);
		goto IL_00c6;
	}

IL_00c5:
	{
		G_B16_0 = 0;
	}

IL_00c6:
	{
		V_5 = (bool)G_B16_0;
		bool L_31 = V_5;
		V_8 = L_31;
		bool L_32 = V_8;
		if (!L_32)
		{
			goto IL_0134;
		}
	}
	{
		RuntimeObject* L_33 = __this->___m_RootSource;
		Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7 L_34 = ___1_srcValue;
		Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7 L_35 = L_34;
		RuntimeObject* L_36 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_35);
		V_10 = (bool)((((RuntimeObject*)(RuntimeObject*)L_33) == ((RuntimeObject*)(RuntimeObject*)L_36))? 1 : 0);
		bool L_37 = V_10;
		if (!L_37)
		{
			goto IL_00fc;
		}
	}
	{
		Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7* L_38 = ___0_dstValue;
		RuntimeObject* L_39 = __this->___m_RootDestination;
		*(Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7*)L_38 = ((*(Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7*)UnBox(L_39, il2cpp_rgctx_data(method->rgctx_data, 3))));
		goto IL_027c;
	}

IL_00fc:
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_40 = __this->___m_References;
		if (!L_40)
		{
			goto IL_0119;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_41 = __this->___m_References;
		Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7 L_42 = ___1_srcValue;
		Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7 L_43 = L_42;
		RuntimeObject* L_44 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_43);
		NullCheck(L_41);
		bool L_45;
		L_45 = Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849(L_41, L_44, (&V_9), Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		G_B22_0 = ((int32_t)(L_45));
		goto IL_011a;
	}

IL_0119:
	{
		G_B22_0 = 0;
	}

IL_011a:
	{
		V_11 = (bool)G_B22_0;
		bool L_46 = V_11;
		if (!L_46)
		{
			goto IL_0133;
		}
	}
	{
		Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7* L_47 = ___0_dstValue;
		RuntimeObject* L_48 = V_9;
		*(Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7*)L_47 = ((*(Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7*)UnBox(L_48, il2cpp_rgctx_data(method->rgctx_data, 3))));
		goto IL_027c;
	}

IL_0133:
	{
	}

IL_0134:
	{
		Type_t* L_49 = V_4;
		NullCheck(L_49);
		bool L_50;
		L_50 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_49, NULL);
		V_12 = L_50;
		bool L_51 = V_12;
		if (!L_51)
		{
			goto IL_01b6;
		}
	}
	{
		Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7 L_52 = ___1_srcValue;
		Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7 L_53 = L_52;
		RuntimeObject* L_54 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_53);
		V_14 = (RuntimeObject*)NULL;
		RuntimeObject* L_55 = V_14;
		if (L_55)
		{
			goto IL_0156;
		}
	}
	{
		G_B29_0 = 0;
		goto IL_015d;
	}

IL_0156:
	{
		RuntimeObject* L_56 = V_14;
		NullCheck((RuntimeObject*)L_56);
		int32_t L_57;
		L_57 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_56);
		G_B29_0 = L_57;
	}

IL_015d:
	{
		V_13 = G_B29_0;
	}
	{
		Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7* L_59 = ___0_dstValue;
		Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7 L_60 = (*(Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7*)L_59);
		Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7 L_61 = L_60;
		RuntimeObject* L_62 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_61);
		RuntimeArray* L_63 = ((RuntimeArray*)IsInstClass((RuntimeObject*)L_62, il2cpp_defaults.array_class));
		if (L_63)
		{
			G_B32_0 = L_63;
			goto IL_0183;
		}
		G_B31_0 = L_63;
	}
	{
		G_B33_0 = 1;
		goto IL_018f;
	}

IL_0183:
	{
		NullCheck(G_B32_0);
		int32_t L_64;
		L_64 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(G_B32_0, NULL);
		int32_t L_65 = V_13;
		G_B33_0 = ((((int32_t)((((int32_t)L_64) == ((int32_t)L_65))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_018f:
	{
		G_B35_0 = G_B33_0;
		goto IL_0192;
	}

IL_0192:
	{
		V_15 = (bool)G_B35_0;
		bool L_66 = V_15;
		if (!L_66)
		{
			goto IL_01b3;
		}
	}
	{
		Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7* L_67 = ___0_dstValue;
		Type_t* L_68 = V_4;
		NullCheck(L_68);
		Type_t* L_69;
		L_69 = VirtualFuncInvoker0< Type_t* >::Invoke(48, L_68);
		int32_t L_70 = V_13;
		RuntimeArray* L_71;
		L_71 = Array_CreateInstance_m13B202130951A03AF5F52470A19E17D3AD2A8983(L_69, L_70, NULL);
		*(Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7*)L_67 = ((*(Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7*)UnBox((RuntimeObject*)L_71, il2cpp_rgctx_data(method->rgctx_data, 3))));
	}

IL_01b3:
	{
		goto IL_01f5;
	}

IL_01b6:
	{
	}
	{
		Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7* L_73 = ___0_dstValue;
		Il2CppFakeBox<Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7> L_74(il2cpp_rgctx_data(method->rgctx_data, 3), L_73);
		Type_t* L_75;
		L_75 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((&L_74), NULL);
		Type_t* L_76 = V_4;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_77;
		L_77 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_75, L_76, NULL);
		G_B41_0 = ((int32_t)(L_77));
		goto IL_01da;
	}

IL_01da:
	{
		V_16 = (bool)G_B41_0;
		bool L_78 = V_16;
		if (!L_78)
		{
			goto IL_01f4;
		}
	}
	{
		Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7* L_79 = ___0_dstValue;
		Type_t* L_80 = V_4;
		RuntimeObject* L_81;
		L_81 = Activator_CreateInstance_mFF030428C64FDDFACC74DFAC97388A1C628BFBCF(L_80, NULL);
		*(Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7*)L_79 = ((*(Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7*)UnBox(L_81, il2cpp_rgctx_data(method->rgctx_data, 3))));
	}

IL_01f4:
	{
	}

IL_01f5:
	{
		bool L_82 = V_5;
		V_17 = L_82;
		bool L_83 = V_17;
		if (!L_83)
		{
			goto IL_0236;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_84 = __this->___m_References;
		V_18 = (bool)((((RuntimeObject*)(Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*)L_84) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_85 = V_18;
		if (!L_85)
		{
			goto IL_0218;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_86 = (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*)il2cpp_codegen_object_new(Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329(L_86, Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_RuntimeMethod_var);
		__this->___m_References = L_86;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_References), (void*)L_86);
	}

IL_0218:
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_87 = __this->___m_References;
		Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7 L_88 = ___1_srcValue;
		Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7 L_89 = L_88;
		RuntimeObject* L_90 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_89);
		Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7* L_91 = ___0_dstValue;
		Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7 L_92 = (*(Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7*)L_91);
		Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7 L_93 = L_92;
		RuntimeObject* L_94 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_93);
		NullCheck(L_87);
		Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1(L_87, L_90, L_94, Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
	}

IL_0236:
	{
	}

IL_0237:
	{
		RuntimeObject* L_95 = __this->___m_Stack;
		V_0 = L_95;
		Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7* L_96 = ___0_dstValue;
		Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7 L_97 = (*(Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7*)L_96);
		Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7 L_98 = L_97;
		RuntimeObject* L_99 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_98);
		__this->___m_Stack = L_99;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Stack), (void*)L_99);
		il2cpp_codegen_initobj((&V_20), sizeof(VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE));
		VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE L_100 = V_20;
		bool L_101;
		L_101 = PropertyContainer_TryAccept_TisRotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_m197D2A535A0FA83B533E74E8EC98DF87A07B836A((RuntimeObject*)__this, (&___1_srcValue), (&V_19), L_100, il2cpp_rgctx_method(method->rgctx_data, 7));
		Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7* L_102 = ___0_dstValue;
		RuntimeObject* L_103 = __this->___m_Stack;
		*(Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7*)L_102 = ((*(Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7*)UnBox(L_103, il2cpp_rgctx_data(method->rgctx_data, 3))));
		RuntimeObject* L_104 = V_0;
		__this->___m_Stack = L_104;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Stack), (void*)L_104);
	}

IL_027c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManagedObjectClone_CloneValue_TisScale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_m7FC5FFFAE6389F883CBDA8BF03D74A9DFF8267A8_gshared (ManagedObjectClone_t6E754ED2624B829553A94A85A0D62AD51B58FCD6* __this, Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7* ___0_dstValue, Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7 ___1_srcValue, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	Type_t* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	RuntimeObject* V_9 = NULL;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t V_13 = 0;
	RuntimeObject* V_14 = NULL;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	int32_t V_19 = 0;
	VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE V_20;
	memset((&V_20), 0, sizeof(V_20));
	int32_t G_B5_0 = 0;
	int32_t G_B16_0 = 0;
	int32_t G_B22_0 = 0;
	int32_t G_B29_0 = 0;
	RuntimeArray* G_B32_0 = NULL;
	RuntimeArray* G_B31_0 = NULL;
	int32_t G_B33_0 = 0;
	int32_t G_B35_0 = 0;
	int32_t G_B41_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_0;
		L_0 = TypeTraits_1_get_IsContainer_m55AA7A282B79A29C3DA24B56683A5897E5F7E9A0_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7* L_2 = ___0_dstValue;
		Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7 L_3 = ___1_srcValue;
		*(Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7*)L_2 = L_3;
		goto IL_027c;
	}

IL_001a:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_4;
		L_4 = TypeTraits_1_get_CanBeNull_mC0DCE60D34CB3B625A7E957DD755BAAE3F5ADE91_inline(il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7 L_5 = ___1_srcValue;
		G_B5_0 = ((int32_t)(false));
		goto IL_002d;
	}

IL_002c:
	{
		G_B5_0 = 0;
	}

IL_002d:
	{
		V_2 = (bool)G_B5_0;
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_003e;
		}
	}
	{
		Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7* L_7 = ___0_dstValue;
		il2cpp_codegen_initobj(L_7, sizeof(Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7));
		goto IL_027c;
	}

IL_003e:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_8;
		L_8 = TypeTraits_1_get_IsValueType_mC7D50F5D193AA2EF3F84648A392176B9A906180A_inline(il2cpp_rgctx_method(method->rgctx_data, 5));
		V_3 = L_8;
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_0055;
		}
	}
	{
		Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7* L_10 = ___0_dstValue;
		il2cpp_codegen_initobj(L_10, sizeof(Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7));
		goto IL_0237;
	}

IL_0055:
	{
		Il2CppFakeBox<Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7> L_11(il2cpp_rgctx_data(method->rgctx_data, 3), (&___1_srcValue));
		Type_t* L_12;
		L_12 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((&L_11), NULL);
		V_4 = L_12;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		Type_t* L_15 = V_4;
		NullCheck(L_14);
		bool L_16;
		L_16 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_14, L_15);
		V_6 = L_16;
		bool L_17 = V_6;
		if (!L_17)
		{
			goto IL_0089;
		}
	}
	{
		Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7* L_18 = ___0_dstValue;
		Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7 L_19 = ___1_srcValue;
		*(Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7*)L_18 = L_19;
		goto IL_027c;
	}

IL_0089:
	{
		Type_t* L_20 = V_4;
		bool L_21;
		L_21 = TypeTraits_IsContainer_m46D04F3E3219371CC5F133E2CC54BCA46FD72505(L_20, NULL);
		V_7 = (bool)((((int32_t)L_21) == ((int32_t)0))? 1 : 0);
		bool L_22 = V_7;
		if (!L_22)
		{
			goto IL_00a6;
		}
	}
	{
		Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7* L_23 = ___0_dstValue;
		Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7 L_24 = ___1_srcValue;
		*(Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7*)L_23 = L_24;
		goto IL_027c;
	}

IL_00a6:
	{
		Type_t* L_25 = V_4;
		NullCheck(L_25);
		bool L_26;
		L_26 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_25, NULL);
		if (L_26)
		{
			goto IL_00c5;
		}
	}
	{
		Type_t* L_27 = V_4;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_28 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.string_class->byval_arg) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_29;
		L_29 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_28, NULL);
		bool L_30;
		L_30 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_27, L_29, NULL);
		G_B16_0 = ((((int32_t)L_30) == ((int32_t)0))? 1 : 0);
		goto IL_00c6;
	}

IL_00c5:
	{
		G_B16_0 = 0;
	}

IL_00c6:
	{
		V_5 = (bool)G_B16_0;
		bool L_31 = V_5;
		V_8 = L_31;
		bool L_32 = V_8;
		if (!L_32)
		{
			goto IL_0134;
		}
	}
	{
		RuntimeObject* L_33 = __this->___m_RootSource;
		Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7 L_34 = ___1_srcValue;
		Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7 L_35 = L_34;
		RuntimeObject* L_36 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_35);
		V_10 = (bool)((((RuntimeObject*)(RuntimeObject*)L_33) == ((RuntimeObject*)(RuntimeObject*)L_36))? 1 : 0);
		bool L_37 = V_10;
		if (!L_37)
		{
			goto IL_00fc;
		}
	}
	{
		Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7* L_38 = ___0_dstValue;
		RuntimeObject* L_39 = __this->___m_RootDestination;
		*(Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7*)L_38 = ((*(Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7*)UnBox(L_39, il2cpp_rgctx_data(method->rgctx_data, 3))));
		goto IL_027c;
	}

IL_00fc:
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_40 = __this->___m_References;
		if (!L_40)
		{
			goto IL_0119;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_41 = __this->___m_References;
		Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7 L_42 = ___1_srcValue;
		Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7 L_43 = L_42;
		RuntimeObject* L_44 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_43);
		NullCheck(L_41);
		bool L_45;
		L_45 = Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849(L_41, L_44, (&V_9), Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		G_B22_0 = ((int32_t)(L_45));
		goto IL_011a;
	}

IL_0119:
	{
		G_B22_0 = 0;
	}

IL_011a:
	{
		V_11 = (bool)G_B22_0;
		bool L_46 = V_11;
		if (!L_46)
		{
			goto IL_0133;
		}
	}
	{
		Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7* L_47 = ___0_dstValue;
		RuntimeObject* L_48 = V_9;
		*(Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7*)L_47 = ((*(Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7*)UnBox(L_48, il2cpp_rgctx_data(method->rgctx_data, 3))));
		goto IL_027c;
	}

IL_0133:
	{
	}

IL_0134:
	{
		Type_t* L_49 = V_4;
		NullCheck(L_49);
		bool L_50;
		L_50 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_49, NULL);
		V_12 = L_50;
		bool L_51 = V_12;
		if (!L_51)
		{
			goto IL_01b6;
		}
	}
	{
		Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7 L_52 = ___1_srcValue;
		Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7 L_53 = L_52;
		RuntimeObject* L_54 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_53);
		V_14 = (RuntimeObject*)NULL;
		RuntimeObject* L_55 = V_14;
		if (L_55)
		{
			goto IL_0156;
		}
	}
	{
		G_B29_0 = 0;
		goto IL_015d;
	}

IL_0156:
	{
		RuntimeObject* L_56 = V_14;
		NullCheck((RuntimeObject*)L_56);
		int32_t L_57;
		L_57 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_56);
		G_B29_0 = L_57;
	}

IL_015d:
	{
		V_13 = G_B29_0;
	}
	{
		Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7* L_59 = ___0_dstValue;
		Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7 L_60 = (*(Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7*)L_59);
		Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7 L_61 = L_60;
		RuntimeObject* L_62 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_61);
		RuntimeArray* L_63 = ((RuntimeArray*)IsInstClass((RuntimeObject*)L_62, il2cpp_defaults.array_class));
		if (L_63)
		{
			G_B32_0 = L_63;
			goto IL_0183;
		}
		G_B31_0 = L_63;
	}
	{
		G_B33_0 = 1;
		goto IL_018f;
	}

IL_0183:
	{
		NullCheck(G_B32_0);
		int32_t L_64;
		L_64 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(G_B32_0, NULL);
		int32_t L_65 = V_13;
		G_B33_0 = ((((int32_t)((((int32_t)L_64) == ((int32_t)L_65))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_018f:
	{
		G_B35_0 = G_B33_0;
		goto IL_0192;
	}

IL_0192:
	{
		V_15 = (bool)G_B35_0;
		bool L_66 = V_15;
		if (!L_66)
		{
			goto IL_01b3;
		}
	}
	{
		Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7* L_67 = ___0_dstValue;
		Type_t* L_68 = V_4;
		NullCheck(L_68);
		Type_t* L_69;
		L_69 = VirtualFuncInvoker0< Type_t* >::Invoke(48, L_68);
		int32_t L_70 = V_13;
		RuntimeArray* L_71;
		L_71 = Array_CreateInstance_m13B202130951A03AF5F52470A19E17D3AD2A8983(L_69, L_70, NULL);
		*(Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7*)L_67 = ((*(Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7*)UnBox((RuntimeObject*)L_71, il2cpp_rgctx_data(method->rgctx_data, 3))));
	}

IL_01b3:
	{
		goto IL_01f5;
	}

IL_01b6:
	{
	}
	{
		Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7* L_73 = ___0_dstValue;
		Il2CppFakeBox<Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7> L_74(il2cpp_rgctx_data(method->rgctx_data, 3), L_73);
		Type_t* L_75;
		L_75 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((&L_74), NULL);
		Type_t* L_76 = V_4;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_77;
		L_77 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_75, L_76, NULL);
		G_B41_0 = ((int32_t)(L_77));
		goto IL_01da;
	}

IL_01da:
	{
		V_16 = (bool)G_B41_0;
		bool L_78 = V_16;
		if (!L_78)
		{
			goto IL_01f4;
		}
	}
	{
		Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7* L_79 = ___0_dstValue;
		Type_t* L_80 = V_4;
		RuntimeObject* L_81;
		L_81 = Activator_CreateInstance_mFF030428C64FDDFACC74DFAC97388A1C628BFBCF(L_80, NULL);
		*(Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7*)L_79 = ((*(Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7*)UnBox(L_81, il2cpp_rgctx_data(method->rgctx_data, 3))));
	}

IL_01f4:
	{
	}

IL_01f5:
	{
		bool L_82 = V_5;
		V_17 = L_82;
		bool L_83 = V_17;
		if (!L_83)
		{
			goto IL_0236;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_84 = __this->___m_References;
		V_18 = (bool)((((RuntimeObject*)(Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*)L_84) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_85 = V_18;
		if (!L_85)
		{
			goto IL_0218;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_86 = (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*)il2cpp_codegen_object_new(Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329(L_86, Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_RuntimeMethod_var);
		__this->___m_References = L_86;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_References), (void*)L_86);
	}

IL_0218:
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_87 = __this->___m_References;
		Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7 L_88 = ___1_srcValue;
		Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7 L_89 = L_88;
		RuntimeObject* L_90 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_89);
		Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7* L_91 = ___0_dstValue;
		Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7 L_92 = (*(Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7*)L_91);
		Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7 L_93 = L_92;
		RuntimeObject* L_94 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_93);
		NullCheck(L_87);
		Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1(L_87, L_90, L_94, Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
	}

IL_0236:
	{
	}

IL_0237:
	{
		RuntimeObject* L_95 = __this->___m_Stack;
		V_0 = L_95;
		Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7* L_96 = ___0_dstValue;
		Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7 L_97 = (*(Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7*)L_96);
		Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7 L_98 = L_97;
		RuntimeObject* L_99 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_98);
		__this->___m_Stack = L_99;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Stack), (void*)L_99);
		il2cpp_codegen_initobj((&V_20), sizeof(VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE));
		VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE L_100 = V_20;
		bool L_101;
		L_101 = PropertyContainer_TryAccept_TisScale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_m93AC34DAE08AE05780AA25F16DC96BCDC02FE91D((RuntimeObject*)__this, (&___1_srcValue), (&V_19), L_100, il2cpp_rgctx_method(method->rgctx_data, 7));
		Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7* L_102 = ___0_dstValue;
		RuntimeObject* L_103 = __this->___m_Stack;
		*(Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7*)L_102 = ((*(Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7*)UnBox(L_103, il2cpp_rgctx_data(method->rgctx_data, 3))));
		RuntimeObject* L_104 = V_0;
		__this->___m_Stack = L_104;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Stack), (void*)L_104);
	}

IL_027c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManagedObjectClone_CloneValue_TisSerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC_m1235A75D8E0E59C890E79D5BA6B8CC733C7EC4A8_gshared (ManagedObjectClone_t6E754ED2624B829553A94A85A0D62AD51B58FCD6* __this, SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* ___0_dstValue, SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC ___1_srcValue, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	Type_t* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	RuntimeObject* V_9 = NULL;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t V_13 = 0;
	RuntimeObject* V_14 = NULL;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	int32_t V_19 = 0;
	VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE V_20;
	memset((&V_20), 0, sizeof(V_20));
	int32_t G_B5_0 = 0;
	int32_t G_B16_0 = 0;
	int32_t G_B22_0 = 0;
	int32_t G_B29_0 = 0;
	RuntimeArray* G_B32_0 = NULL;
	RuntimeArray* G_B31_0 = NULL;
	int32_t G_B33_0 = 0;
	int32_t G_B35_0 = 0;
	int32_t G_B41_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_0;
		L_0 = TypeTraits_1_get_IsContainer_m371300A2F6CA88E8CC34EA1D30226DADF20DF159_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* L_2 = ___0_dstValue;
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC L_3 = ___1_srcValue;
		*(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)L_2 = L_3;
		goto IL_027c;
	}

IL_001a:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_4;
		L_4 = TypeTraits_1_get_CanBeNull_mE4C358BCE5CA8EAEC8AFCE80969A622525644AE4_inline(il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC L_5 = ___1_srcValue;
		G_B5_0 = ((int32_t)(false));
		goto IL_002d;
	}

IL_002c:
	{
		G_B5_0 = 0;
	}

IL_002d:
	{
		V_2 = (bool)G_B5_0;
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_003e;
		}
	}
	{
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* L_7 = ___0_dstValue;
		il2cpp_codegen_initobj(L_7, sizeof(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC));
		goto IL_027c;
	}

IL_003e:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_8;
		L_8 = TypeTraits_1_get_IsValueType_m0581F21AE7DCD3653CA50C2B1A83596515E469CE_inline(il2cpp_rgctx_method(method->rgctx_data, 5));
		V_3 = L_8;
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_0055;
		}
	}
	{
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* L_10 = ___0_dstValue;
		il2cpp_codegen_initobj(L_10, sizeof(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC));
		goto IL_0237;
	}

IL_0055:
	{
		Il2CppFakeBox<SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC> L_11(il2cpp_rgctx_data(method->rgctx_data, 3), (&___1_srcValue));
		Type_t* L_12;
		L_12 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((&L_11), NULL);
		V_4 = L_12;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		Type_t* L_15 = V_4;
		NullCheck(L_14);
		bool L_16;
		L_16 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_14, L_15);
		V_6 = L_16;
		bool L_17 = V_6;
		if (!L_17)
		{
			goto IL_0089;
		}
	}
	{
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* L_18 = ___0_dstValue;
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC L_19 = ___1_srcValue;
		*(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)L_18 = L_19;
		goto IL_027c;
	}

IL_0089:
	{
		Type_t* L_20 = V_4;
		bool L_21;
		L_21 = TypeTraits_IsContainer_m46D04F3E3219371CC5F133E2CC54BCA46FD72505(L_20, NULL);
		V_7 = (bool)((((int32_t)L_21) == ((int32_t)0))? 1 : 0);
		bool L_22 = V_7;
		if (!L_22)
		{
			goto IL_00a6;
		}
	}
	{
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* L_23 = ___0_dstValue;
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC L_24 = ___1_srcValue;
		*(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)L_23 = L_24;
		goto IL_027c;
	}

IL_00a6:
	{
		Type_t* L_25 = V_4;
		NullCheck(L_25);
		bool L_26;
		L_26 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_25, NULL);
		if (L_26)
		{
			goto IL_00c5;
		}
	}
	{
		Type_t* L_27 = V_4;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_28 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.string_class->byval_arg) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_29;
		L_29 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_28, NULL);
		bool L_30;
		L_30 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_27, L_29, NULL);
		G_B16_0 = ((((int32_t)L_30) == ((int32_t)0))? 1 : 0);
		goto IL_00c6;
	}

IL_00c5:
	{
		G_B16_0 = 0;
	}

IL_00c6:
	{
		V_5 = (bool)G_B16_0;
		bool L_31 = V_5;
		V_8 = L_31;
		bool L_32 = V_8;
		if (!L_32)
		{
			goto IL_0134;
		}
	}
	{
		RuntimeObject* L_33 = __this->___m_RootSource;
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC L_34 = ___1_srcValue;
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC L_35 = L_34;
		RuntimeObject* L_36 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_35);
		V_10 = (bool)((((RuntimeObject*)(RuntimeObject*)L_33) == ((RuntimeObject*)(RuntimeObject*)L_36))? 1 : 0);
		bool L_37 = V_10;
		if (!L_37)
		{
			goto IL_00fc;
		}
	}
	{
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* L_38 = ___0_dstValue;
		RuntimeObject* L_39 = __this->___m_RootDestination;
		*(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)L_38 = ((*(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)UnBox(L_39, il2cpp_rgctx_data(method->rgctx_data, 3))));
		goto IL_027c;
	}

IL_00fc:
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_40 = __this->___m_References;
		if (!L_40)
		{
			goto IL_0119;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_41 = __this->___m_References;
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC L_42 = ___1_srcValue;
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC L_43 = L_42;
		RuntimeObject* L_44 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_43);
		NullCheck(L_41);
		bool L_45;
		L_45 = Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849(L_41, L_44, (&V_9), Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		G_B22_0 = ((int32_t)(L_45));
		goto IL_011a;
	}

IL_0119:
	{
		G_B22_0 = 0;
	}

IL_011a:
	{
		V_11 = (bool)G_B22_0;
		bool L_46 = V_11;
		if (!L_46)
		{
			goto IL_0133;
		}
	}
	{
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* L_47 = ___0_dstValue;
		RuntimeObject* L_48 = V_9;
		*(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)L_47 = ((*(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)UnBox(L_48, il2cpp_rgctx_data(method->rgctx_data, 3))));
		goto IL_027c;
	}

IL_0133:
	{
	}

IL_0134:
	{
		Type_t* L_49 = V_4;
		NullCheck(L_49);
		bool L_50;
		L_50 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_49, NULL);
		V_12 = L_50;
		bool L_51 = V_12;
		if (!L_51)
		{
			goto IL_01b6;
		}
	}
	{
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC L_52 = ___1_srcValue;
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC L_53 = L_52;
		RuntimeObject* L_54 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_53);
		V_14 = (RuntimeObject*)NULL;
		RuntimeObject* L_55 = V_14;
		if (L_55)
		{
			goto IL_0156;
		}
	}
	{
		G_B29_0 = 0;
		goto IL_015d;
	}

IL_0156:
	{
		RuntimeObject* L_56 = V_14;
		NullCheck((RuntimeObject*)L_56);
		int32_t L_57;
		L_57 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_56);
		G_B29_0 = L_57;
	}

IL_015d:
	{
		V_13 = G_B29_0;
	}
	{
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* L_59 = ___0_dstValue;
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC L_60 = (*(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)L_59);
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC L_61 = L_60;
		RuntimeObject* L_62 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_61);
		RuntimeArray* L_63 = ((RuntimeArray*)IsInstClass((RuntimeObject*)L_62, il2cpp_defaults.array_class));
		if (L_63)
		{
			G_B32_0 = L_63;
			goto IL_0183;
		}
		G_B31_0 = L_63;
	}
	{
		G_B33_0 = 1;
		goto IL_018f;
	}

IL_0183:
	{
		NullCheck(G_B32_0);
		int32_t L_64;
		L_64 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(G_B32_0, NULL);
		int32_t L_65 = V_13;
		G_B33_0 = ((((int32_t)((((int32_t)L_64) == ((int32_t)L_65))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_018f:
	{
		G_B35_0 = G_B33_0;
		goto IL_0192;
	}

IL_0192:
	{
		V_15 = (bool)G_B35_0;
		bool L_66 = V_15;
		if (!L_66)
		{
			goto IL_01b3;
		}
	}
	{
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* L_67 = ___0_dstValue;
		Type_t* L_68 = V_4;
		NullCheck(L_68);
		Type_t* L_69;
		L_69 = VirtualFuncInvoker0< Type_t* >::Invoke(48, L_68);
		int32_t L_70 = V_13;
		RuntimeArray* L_71;
		L_71 = Array_CreateInstance_m13B202130951A03AF5F52470A19E17D3AD2A8983(L_69, L_70, NULL);
		*(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)L_67 = ((*(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)UnBox((RuntimeObject*)L_71, il2cpp_rgctx_data(method->rgctx_data, 3))));
	}

IL_01b3:
	{
		goto IL_01f5;
	}

IL_01b6:
	{
	}
	{
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* L_73 = ___0_dstValue;
		Il2CppFakeBox<SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC> L_74(il2cpp_rgctx_data(method->rgctx_data, 3), L_73);
		Type_t* L_75;
		L_75 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((&L_74), NULL);
		Type_t* L_76 = V_4;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_77;
		L_77 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_75, L_76, NULL);
		G_B41_0 = ((int32_t)(L_77));
		goto IL_01da;
	}

IL_01da:
	{
		V_16 = (bool)G_B41_0;
		bool L_78 = V_16;
		if (!L_78)
		{
			goto IL_01f4;
		}
	}
	{
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* L_79 = ___0_dstValue;
		Type_t* L_80 = V_4;
		RuntimeObject* L_81;
		L_81 = Activator_CreateInstance_mFF030428C64FDDFACC74DFAC97388A1C628BFBCF(L_80, NULL);
		*(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)L_79 = ((*(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)UnBox(L_81, il2cpp_rgctx_data(method->rgctx_data, 3))));
	}

IL_01f4:
	{
	}

IL_01f5:
	{
		bool L_82 = V_5;
		V_17 = L_82;
		bool L_83 = V_17;
		if (!L_83)
		{
			goto IL_0236;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_84 = __this->___m_References;
		V_18 = (bool)((((RuntimeObject*)(Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*)L_84) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_85 = V_18;
		if (!L_85)
		{
			goto IL_0218;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_86 = (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*)il2cpp_codegen_object_new(Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329(L_86, Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_RuntimeMethod_var);
		__this->___m_References = L_86;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_References), (void*)L_86);
	}

IL_0218:
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_87 = __this->___m_References;
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC L_88 = ___1_srcValue;
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC L_89 = L_88;
		RuntimeObject* L_90 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_89);
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* L_91 = ___0_dstValue;
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC L_92 = (*(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)L_91);
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC L_93 = L_92;
		RuntimeObject* L_94 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_93);
		NullCheck(L_87);
		Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1(L_87, L_90, L_94, Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
	}

IL_0236:
	{
	}

IL_0237:
	{
		RuntimeObject* L_95 = __this->___m_Stack;
		V_0 = L_95;
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* L_96 = ___0_dstValue;
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC L_97 = (*(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)L_96);
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC L_98 = L_97;
		RuntimeObject* L_99 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_98);
		__this->___m_Stack = L_99;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Stack), (void*)L_99);
		il2cpp_codegen_initobj((&V_20), sizeof(VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE));
		VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE L_100 = V_20;
		bool L_101;
		L_101 = PropertyContainer_TryAccept_TisSerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC_mB8750F45235AFA82A6724320A2F8ACA1AA525DDB((RuntimeObject*)__this, (&___1_srcValue), (&V_19), L_100, il2cpp_rgctx_method(method->rgctx_data, 7));
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* L_102 = ___0_dstValue;
		RuntimeObject* L_103 = __this->___m_Stack;
		*(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)L_102 = ((*(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)UnBox(L_103, il2cpp_rgctx_data(method->rgctx_data, 3))));
		RuntimeObject* L_104 = V_0;
		__this->___m_Stack = L_104;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Stack), (void*)L_104);
	}

IL_027c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManagedObjectClone_CloneValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m450B1879D88E148B64C001C8E5E10CA750B240E7_gshared (ManagedObjectClone_t6E754ED2624B829553A94A85A0D62AD51B58FCD6* __this, float* ___0_dstValue, float ___1_srcValue, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	Type_t* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	RuntimeObject* V_9 = NULL;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t V_13 = 0;
	RuntimeObject* V_14 = NULL;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	int32_t V_19 = 0;
	VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE V_20;
	memset((&V_20), 0, sizeof(V_20));
	int32_t G_B5_0 = 0;
	int32_t G_B16_0 = 0;
	int32_t G_B22_0 = 0;
	int32_t G_B29_0 = 0;
	RuntimeArray* G_B32_0 = NULL;
	RuntimeArray* G_B31_0 = NULL;
	int32_t G_B33_0 = 0;
	int32_t G_B35_0 = 0;
	int32_t G_B41_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_0;
		L_0 = TypeTraits_1_get_IsContainer_m66017AAD546A97E689F25A40839FDDB2DDC69F2C_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		float* L_2 = ___0_dstValue;
		float L_3 = ___1_srcValue;
		*(float*)L_2 = L_3;
		goto IL_027c;
	}

IL_001a:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_4;
		L_4 = TypeTraits_1_get_CanBeNull_m1070B18AE5014C462C176214EB504B80ABCF9E56_inline(il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		float L_5 = ___1_srcValue;
		G_B5_0 = ((int32_t)(false));
		goto IL_002d;
	}

IL_002c:
	{
		G_B5_0 = 0;
	}

IL_002d:
	{
		V_2 = (bool)G_B5_0;
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_003e;
		}
	}
	{
		float* L_7 = ___0_dstValue;
		il2cpp_codegen_initobj(L_7, sizeof(float));
		goto IL_027c;
	}

IL_003e:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_8;
		L_8 = TypeTraits_1_get_IsValueType_mE0107930FB17433A36E048CFF09C97DDDED87752_inline(il2cpp_rgctx_method(method->rgctx_data, 5));
		V_3 = L_8;
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_0055;
		}
	}
	{
		float* L_10 = ___0_dstValue;
		il2cpp_codegen_initobj(L_10, sizeof(float));
		goto IL_0237;
	}

IL_0055:
	{
		Il2CppFakeBox<float> L_11(il2cpp_rgctx_data(method->rgctx_data, 3), (&___1_srcValue));
		Type_t* L_12;
		L_12 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((&L_11), NULL);
		V_4 = L_12;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		Type_t* L_15 = V_4;
		NullCheck(L_14);
		bool L_16;
		L_16 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_14, L_15);
		V_6 = L_16;
		bool L_17 = V_6;
		if (!L_17)
		{
			goto IL_0089;
		}
	}
	{
		float* L_18 = ___0_dstValue;
		float L_19 = ___1_srcValue;
		*(float*)L_18 = L_19;
		goto IL_027c;
	}

IL_0089:
	{
		Type_t* L_20 = V_4;
		bool L_21;
		L_21 = TypeTraits_IsContainer_m46D04F3E3219371CC5F133E2CC54BCA46FD72505(L_20, NULL);
		V_7 = (bool)((((int32_t)L_21) == ((int32_t)0))? 1 : 0);
		bool L_22 = V_7;
		if (!L_22)
		{
			goto IL_00a6;
		}
	}
	{
		float* L_23 = ___0_dstValue;
		float L_24 = ___1_srcValue;
		*(float*)L_23 = L_24;
		goto IL_027c;
	}

IL_00a6:
	{
		Type_t* L_25 = V_4;
		NullCheck(L_25);
		bool L_26;
		L_26 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_25, NULL);
		if (L_26)
		{
			goto IL_00c5;
		}
	}
	{
		Type_t* L_27 = V_4;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_28 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.string_class->byval_arg) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_29;
		L_29 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_28, NULL);
		bool L_30;
		L_30 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_27, L_29, NULL);
		G_B16_0 = ((((int32_t)L_30) == ((int32_t)0))? 1 : 0);
		goto IL_00c6;
	}

IL_00c5:
	{
		G_B16_0 = 0;
	}

IL_00c6:
	{
		V_5 = (bool)G_B16_0;
		bool L_31 = V_5;
		V_8 = L_31;
		bool L_32 = V_8;
		if (!L_32)
		{
			goto IL_0134;
		}
	}
	{
		RuntimeObject* L_33 = __this->___m_RootSource;
		float L_34 = ___1_srcValue;
		float L_35 = L_34;
		RuntimeObject* L_36 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_35);
		V_10 = (bool)((((RuntimeObject*)(RuntimeObject*)L_33) == ((RuntimeObject*)(RuntimeObject*)L_36))? 1 : 0);
		bool L_37 = V_10;
		if (!L_37)
		{
			goto IL_00fc;
		}
	}
	{
		float* L_38 = ___0_dstValue;
		RuntimeObject* L_39 = __this->___m_RootDestination;
		*(float*)L_38 = ((*(float*)UnBox(L_39, il2cpp_rgctx_data(method->rgctx_data, 3))));
		goto IL_027c;
	}

IL_00fc:
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_40 = __this->___m_References;
		if (!L_40)
		{
			goto IL_0119;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_41 = __this->___m_References;
		float L_42 = ___1_srcValue;
		float L_43 = L_42;
		RuntimeObject* L_44 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_43);
		NullCheck(L_41);
		bool L_45;
		L_45 = Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849(L_41, L_44, (&V_9), Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		G_B22_0 = ((int32_t)(L_45));
		goto IL_011a;
	}

IL_0119:
	{
		G_B22_0 = 0;
	}

IL_011a:
	{
		V_11 = (bool)G_B22_0;
		bool L_46 = V_11;
		if (!L_46)
		{
			goto IL_0133;
		}
	}
	{
		float* L_47 = ___0_dstValue;
		RuntimeObject* L_48 = V_9;
		*(float*)L_47 = ((*(float*)UnBox(L_48, il2cpp_rgctx_data(method->rgctx_data, 3))));
		goto IL_027c;
	}

IL_0133:
	{
	}

IL_0134:
	{
		Type_t* L_49 = V_4;
		NullCheck(L_49);
		bool L_50;
		L_50 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_49, NULL);
		V_12 = L_50;
		bool L_51 = V_12;
		if (!L_51)
		{
			goto IL_01b6;
		}
	}
	{
		float L_52 = ___1_srcValue;
		float L_53 = L_52;
		RuntimeObject* L_54 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_53);
		V_14 = (RuntimeObject*)NULL;
		RuntimeObject* L_55 = V_14;
		if (L_55)
		{
			goto IL_0156;
		}
	}
	{
		G_B29_0 = 0;
		goto IL_015d;
	}

IL_0156:
	{
		RuntimeObject* L_56 = V_14;
		NullCheck((RuntimeObject*)L_56);
		int32_t L_57;
		L_57 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_56);
		G_B29_0 = L_57;
	}

IL_015d:
	{
		V_13 = G_B29_0;
	}
	{
		float* L_59 = ___0_dstValue;
		float L_60 = (*(float*)L_59);
		float L_61 = L_60;
		RuntimeObject* L_62 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_61);
		RuntimeArray* L_63 = ((RuntimeArray*)IsInstClass((RuntimeObject*)L_62, il2cpp_defaults.array_class));
		if (L_63)
		{
			G_B32_0 = L_63;
			goto IL_0183;
		}
		G_B31_0 = L_63;
	}
	{
		G_B33_0 = 1;
		goto IL_018f;
	}

IL_0183:
	{
		NullCheck(G_B32_0);
		int32_t L_64;
		L_64 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(G_B32_0, NULL);
		int32_t L_65 = V_13;
		G_B33_0 = ((((int32_t)((((int32_t)L_64) == ((int32_t)L_65))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_018f:
	{
		G_B35_0 = G_B33_0;
		goto IL_0192;
	}

IL_0192:
	{
		V_15 = (bool)G_B35_0;
		bool L_66 = V_15;
		if (!L_66)
		{
			goto IL_01b3;
		}
	}
	{
		float* L_67 = ___0_dstValue;
		Type_t* L_68 = V_4;
		NullCheck(L_68);
		Type_t* L_69;
		L_69 = VirtualFuncInvoker0< Type_t* >::Invoke(48, L_68);
		int32_t L_70 = V_13;
		RuntimeArray* L_71;
		L_71 = Array_CreateInstance_m13B202130951A03AF5F52470A19E17D3AD2A8983(L_69, L_70, NULL);
		*(float*)L_67 = ((*(float*)UnBox((RuntimeObject*)L_71, il2cpp_rgctx_data(method->rgctx_data, 3))));
	}

IL_01b3:
	{
		goto IL_01f5;
	}

IL_01b6:
	{
	}
	{
		float* L_73 = ___0_dstValue;
		Il2CppFakeBox<float> L_74(il2cpp_rgctx_data(method->rgctx_data, 3), L_73);
		Type_t* L_75;
		L_75 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((&L_74), NULL);
		Type_t* L_76 = V_4;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_77;
		L_77 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_75, L_76, NULL);
		G_B41_0 = ((int32_t)(L_77));
		goto IL_01da;
	}

IL_01da:
	{
		V_16 = (bool)G_B41_0;
		bool L_78 = V_16;
		if (!L_78)
		{
			goto IL_01f4;
		}
	}
	{
		float* L_79 = ___0_dstValue;
		Type_t* L_80 = V_4;
		RuntimeObject* L_81;
		L_81 = Activator_CreateInstance_mFF030428C64FDDFACC74DFAC97388A1C628BFBCF(L_80, NULL);
		*(float*)L_79 = ((*(float*)UnBox(L_81, il2cpp_rgctx_data(method->rgctx_data, 3))));
	}

IL_01f4:
	{
	}

IL_01f5:
	{
		bool L_82 = V_5;
		V_17 = L_82;
		bool L_83 = V_17;
		if (!L_83)
		{
			goto IL_0236;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_84 = __this->___m_References;
		V_18 = (bool)((((RuntimeObject*)(Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*)L_84) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_85 = V_18;
		if (!L_85)
		{
			goto IL_0218;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_86 = (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*)il2cpp_codegen_object_new(Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329(L_86, Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_RuntimeMethod_var);
		__this->___m_References = L_86;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_References), (void*)L_86);
	}

IL_0218:
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_87 = __this->___m_References;
		float L_88 = ___1_srcValue;
		float L_89 = L_88;
		RuntimeObject* L_90 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_89);
		float* L_91 = ___0_dstValue;
		float L_92 = (*(float*)L_91);
		float L_93 = L_92;
		RuntimeObject* L_94 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_93);
		NullCheck(L_87);
		Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1(L_87, L_90, L_94, Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
	}

IL_0236:
	{
	}

IL_0237:
	{
		RuntimeObject* L_95 = __this->___m_Stack;
		V_0 = L_95;
		float* L_96 = ___0_dstValue;
		float L_97 = (*(float*)L_96);
		float L_98 = L_97;
		RuntimeObject* L_99 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_98);
		__this->___m_Stack = L_99;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Stack), (void*)L_99);
		il2cpp_codegen_initobj((&V_20), sizeof(VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE));
		VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE L_100 = V_20;
		bool L_101;
		L_101 = PropertyContainer_TryAccept_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m9CDE3AA2B96127B4CE0770D082481A17743A7799((RuntimeObject*)__this, (&___1_srcValue), (&V_19), L_100, il2cpp_rgctx_method(method->rgctx_data, 7));
		float* L_102 = ___0_dstValue;
		RuntimeObject* L_103 = __this->___m_Stack;
		*(float*)L_102 = ((*(float*)UnBox(L_103, il2cpp_rgctx_data(method->rgctx_data, 3))));
		RuntimeObject* L_104 = V_0;
		__this->___m_Stack = L_104;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Stack), (void*)L_104);
	}

IL_027c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManagedObjectClone_CloneValue_TisStyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B_m1B0423B8E424AFEAC70F9D9364693066211C9511_gshared (ManagedObjectClone_t6E754ED2624B829553A94A85A0D62AD51B58FCD6* __this, StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B* ___0_dstValue, StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B ___1_srcValue, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	Type_t* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	RuntimeObject* V_9 = NULL;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t V_13 = 0;
	RuntimeObject* V_14 = NULL;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	int32_t V_19 = 0;
	VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE V_20;
	memset((&V_20), 0, sizeof(V_20));
	int32_t G_B5_0 = 0;
	int32_t G_B16_0 = 0;
	int32_t G_B22_0 = 0;
	int32_t G_B29_0 = 0;
	RuntimeArray* G_B32_0 = NULL;
	RuntimeArray* G_B31_0 = NULL;
	int32_t G_B33_0 = 0;
	int32_t G_B35_0 = 0;
	int32_t G_B41_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_0;
		L_0 = TypeTraits_1_get_IsContainer_mD0ED35F34834D1848D0D597AF906C3F712DAE09B_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B* L_2 = ___0_dstValue;
		StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B L_3 = ___1_srcValue;
		*(StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_2)->___m_Value))->___m_Texture), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_2)->___m_Value))->___m_Sprite), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_2)->___m_Value))->___m_RenderTexture), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_2)->___m_Value))->___m_VectorImage), (void*)NULL);
		#endif
		goto IL_027c;
	}

IL_001a:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_4;
		L_4 = TypeTraits_1_get_CanBeNull_m7220BB2ACCEE1EA2053D2E92E0DBE25DC43647B8_inline(il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B L_5 = ___1_srcValue;
		G_B5_0 = ((int32_t)(false));
		goto IL_002d;
	}

IL_002c:
	{
		G_B5_0 = 0;
	}

IL_002d:
	{
		V_2 = (bool)G_B5_0;
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_003e;
		}
	}
	{
		StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B* L_7 = ___0_dstValue;
		il2cpp_codegen_initobj(L_7, sizeof(StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B));
		goto IL_027c;
	}

IL_003e:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_8;
		L_8 = TypeTraits_1_get_IsValueType_m73DDE09E2C01B3DF5142420E2426E2A515C308C8_inline(il2cpp_rgctx_method(method->rgctx_data, 5));
		V_3 = L_8;
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_0055;
		}
	}
	{
		StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B* L_10 = ___0_dstValue;
		il2cpp_codegen_initobj(L_10, sizeof(StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B));
		goto IL_0237;
	}

IL_0055:
	{
		Il2CppFakeBox<StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B> L_11(il2cpp_rgctx_data(method->rgctx_data, 3), (&___1_srcValue));
		Type_t* L_12;
		L_12 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((&L_11), NULL);
		V_4 = L_12;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		Type_t* L_15 = V_4;
		NullCheck(L_14);
		bool L_16;
		L_16 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_14, L_15);
		V_6 = L_16;
		bool L_17 = V_6;
		if (!L_17)
		{
			goto IL_0089;
		}
	}
	{
		StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B* L_18 = ___0_dstValue;
		StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B L_19 = ___1_srcValue;
		*(StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_18 = L_19;
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_18)->___m_Value))->___m_Texture), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_18)->___m_Value))->___m_Sprite), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_18)->___m_Value))->___m_RenderTexture), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_18)->___m_Value))->___m_VectorImage), (void*)NULL);
		#endif
		goto IL_027c;
	}

IL_0089:
	{
		Type_t* L_20 = V_4;
		bool L_21;
		L_21 = TypeTraits_IsContainer_m46D04F3E3219371CC5F133E2CC54BCA46FD72505(L_20, NULL);
		V_7 = (bool)((((int32_t)L_21) == ((int32_t)0))? 1 : 0);
		bool L_22 = V_7;
		if (!L_22)
		{
			goto IL_00a6;
		}
	}
	{
		StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B* L_23 = ___0_dstValue;
		StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B L_24 = ___1_srcValue;
		*(StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_23 = L_24;
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_23)->___m_Value))->___m_Texture), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_23)->___m_Value))->___m_Sprite), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_23)->___m_Value))->___m_RenderTexture), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_23)->___m_Value))->___m_VectorImage), (void*)NULL);
		#endif
		goto IL_027c;
	}

IL_00a6:
	{
		Type_t* L_25 = V_4;
		NullCheck(L_25);
		bool L_26;
		L_26 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_25, NULL);
		if (L_26)
		{
			goto IL_00c5;
		}
	}
	{
		Type_t* L_27 = V_4;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_28 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.string_class->byval_arg) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_29;
		L_29 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_28, NULL);
		bool L_30;
		L_30 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_27, L_29, NULL);
		G_B16_0 = ((((int32_t)L_30) == ((int32_t)0))? 1 : 0);
		goto IL_00c6;
	}

IL_00c5:
	{
		G_B16_0 = 0;
	}

IL_00c6:
	{
		V_5 = (bool)G_B16_0;
		bool L_31 = V_5;
		V_8 = L_31;
		bool L_32 = V_8;
		if (!L_32)
		{
			goto IL_0134;
		}
	}
	{
		RuntimeObject* L_33 = __this->___m_RootSource;
		StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B L_34 = ___1_srcValue;
		StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B L_35 = L_34;
		RuntimeObject* L_36 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_35);
		V_10 = (bool)((((RuntimeObject*)(RuntimeObject*)L_33) == ((RuntimeObject*)(RuntimeObject*)L_36))? 1 : 0);
		bool L_37 = V_10;
		if (!L_37)
		{
			goto IL_00fc;
		}
	}
	{
		StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B* L_38 = ___0_dstValue;
		RuntimeObject* L_39 = __this->___m_RootDestination;
		*(StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_38 = ((*(StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)UnBox(L_39, il2cpp_rgctx_data(method->rgctx_data, 3))));
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_38)->___m_Value))->___m_Texture), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_38)->___m_Value))->___m_Sprite), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_38)->___m_Value))->___m_RenderTexture), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_38)->___m_Value))->___m_VectorImage), (void*)NULL);
		#endif
		goto IL_027c;
	}

IL_00fc:
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_40 = __this->___m_References;
		if (!L_40)
		{
			goto IL_0119;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_41 = __this->___m_References;
		StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B L_42 = ___1_srcValue;
		StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B L_43 = L_42;
		RuntimeObject* L_44 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_43);
		NullCheck(L_41);
		bool L_45;
		L_45 = Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849(L_41, L_44, (&V_9), Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		G_B22_0 = ((int32_t)(L_45));
		goto IL_011a;
	}

IL_0119:
	{
		G_B22_0 = 0;
	}

IL_011a:
	{
		V_11 = (bool)G_B22_0;
		bool L_46 = V_11;
		if (!L_46)
		{
			goto IL_0133;
		}
	}
	{
		StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B* L_47 = ___0_dstValue;
		RuntimeObject* L_48 = V_9;
		*(StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_47 = ((*(StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)UnBox(L_48, il2cpp_rgctx_data(method->rgctx_data, 3))));
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_47)->___m_Value))->___m_Texture), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_47)->___m_Value))->___m_Sprite), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_47)->___m_Value))->___m_RenderTexture), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_47)->___m_Value))->___m_VectorImage), (void*)NULL);
		#endif
		goto IL_027c;
	}

IL_0133:
	{
	}

IL_0134:
	{
		Type_t* L_49 = V_4;
		NullCheck(L_49);
		bool L_50;
		L_50 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_49, NULL);
		V_12 = L_50;
		bool L_51 = V_12;
		if (!L_51)
		{
			goto IL_01b6;
		}
	}
	{
		StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B L_52 = ___1_srcValue;
		StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B L_53 = L_52;
		RuntimeObject* L_54 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_53);
		V_14 = (RuntimeObject*)NULL;
		RuntimeObject* L_55 = V_14;
		if (L_55)
		{
			goto IL_0156;
		}
	}
	{
		G_B29_0 = 0;
		goto IL_015d;
	}

IL_0156:
	{
		RuntimeObject* L_56 = V_14;
		NullCheck((RuntimeObject*)L_56);
		int32_t L_57;
		L_57 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_56);
		G_B29_0 = L_57;
	}

IL_015d:
	{
		V_13 = G_B29_0;
	}
	{
		StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B* L_59 = ___0_dstValue;
		StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B L_60 = (*(StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_59);
		StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B L_61 = L_60;
		RuntimeObject* L_62 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_61);
		RuntimeArray* L_63 = ((RuntimeArray*)IsInstClass((RuntimeObject*)L_62, il2cpp_defaults.array_class));
		if (L_63)
		{
			G_B32_0 = L_63;
			goto IL_0183;
		}
		G_B31_0 = L_63;
	}
	{
		G_B33_0 = 1;
		goto IL_018f;
	}

IL_0183:
	{
		NullCheck(G_B32_0);
		int32_t L_64;
		L_64 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(G_B32_0, NULL);
		int32_t L_65 = V_13;
		G_B33_0 = ((((int32_t)((((int32_t)L_64) == ((int32_t)L_65))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_018f:
	{
		G_B35_0 = G_B33_0;
		goto IL_0192;
	}

IL_0192:
	{
		V_15 = (bool)G_B35_0;
		bool L_66 = V_15;
		if (!L_66)
		{
			goto IL_01b3;
		}
	}
	{
		StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B* L_67 = ___0_dstValue;
		Type_t* L_68 = V_4;
		NullCheck(L_68);
		Type_t* L_69;
		L_69 = VirtualFuncInvoker0< Type_t* >::Invoke(48, L_68);
		int32_t L_70 = V_13;
		RuntimeArray* L_71;
		L_71 = Array_CreateInstance_m13B202130951A03AF5F52470A19E17D3AD2A8983(L_69, L_70, NULL);
		*(StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_67 = ((*(StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)UnBox((RuntimeObject*)L_71, il2cpp_rgctx_data(method->rgctx_data, 3))));
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_67)->___m_Value))->___m_Texture), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_67)->___m_Value))->___m_Sprite), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_67)->___m_Value))->___m_RenderTexture), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_67)->___m_Value))->___m_VectorImage), (void*)NULL);
		#endif
	}

IL_01b3:
	{
		goto IL_01f5;
	}

IL_01b6:
	{
	}
	{
		StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B* L_73 = ___0_dstValue;
		Il2CppFakeBox<StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B> L_74(il2cpp_rgctx_data(method->rgctx_data, 3), L_73);
		Type_t* L_75;
		L_75 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((&L_74), NULL);
		Type_t* L_76 = V_4;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_77;
		L_77 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_75, L_76, NULL);
		G_B41_0 = ((int32_t)(L_77));
		goto IL_01da;
	}

IL_01da:
	{
		V_16 = (bool)G_B41_0;
		bool L_78 = V_16;
		if (!L_78)
		{
			goto IL_01f4;
		}
	}
	{
		StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B* L_79 = ___0_dstValue;
		Type_t* L_80 = V_4;
		RuntimeObject* L_81;
		L_81 = Activator_CreateInstance_mFF030428C64FDDFACC74DFAC97388A1C628BFBCF(L_80, NULL);
		*(StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_79 = ((*(StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)UnBox(L_81, il2cpp_rgctx_data(method->rgctx_data, 3))));
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_79)->___m_Value))->___m_Texture), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_79)->___m_Value))->___m_Sprite), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_79)->___m_Value))->___m_RenderTexture), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_79)->___m_Value))->___m_VectorImage), (void*)NULL);
		#endif
	}

IL_01f4:
	{
	}

IL_01f5:
	{
		bool L_82 = V_5;
		V_17 = L_82;
		bool L_83 = V_17;
		if (!L_83)
		{
			goto IL_0236;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_84 = __this->___m_References;
		V_18 = (bool)((((RuntimeObject*)(Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*)L_84) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_85 = V_18;
		if (!L_85)
		{
			goto IL_0218;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_86 = (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*)il2cpp_codegen_object_new(Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329(L_86, Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_RuntimeMethod_var);
		__this->___m_References = L_86;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_References), (void*)L_86);
	}

IL_0218:
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_87 = __this->___m_References;
		StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B L_88 = ___1_srcValue;
		StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B L_89 = L_88;
		RuntimeObject* L_90 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_89);
		StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B* L_91 = ___0_dstValue;
		StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B L_92 = (*(StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_91);
		StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B L_93 = L_92;
		RuntimeObject* L_94 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_93);
		NullCheck(L_87);
		Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1(L_87, L_90, L_94, Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
	}

IL_0236:
	{
	}

IL_0237:
	{
		RuntimeObject* L_95 = __this->___m_Stack;
		V_0 = L_95;
		StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B* L_96 = ___0_dstValue;
		StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B L_97 = (*(StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_96);
		StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B L_98 = L_97;
		RuntimeObject* L_99 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_98);
		__this->___m_Stack = L_99;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Stack), (void*)L_99);
		il2cpp_codegen_initobj((&V_20), sizeof(VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE));
		VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE L_100 = V_20;
		bool L_101;
		L_101 = PropertyContainer_TryAccept_TisStyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B_m8371037627164AAAFB02CA8C9B1A8E9B7D45904F((RuntimeObject*)__this, (&___1_srcValue), (&V_19), L_100, il2cpp_rgctx_method(method->rgctx_data, 7));
		StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B* L_102 = ___0_dstValue;
		RuntimeObject* L_103 = __this->___m_Stack;
		*(StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_102 = ((*(StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)UnBox(L_103, il2cpp_rgctx_data(method->rgctx_data, 3))));
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_102)->___m_Value))->___m_Texture), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_102)->___m_Value))->___m_Sprite), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_102)->___m_Value))->___m_RenderTexture), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_102)->___m_Value))->___m_VectorImage), (void*)NULL);
		#endif
		RuntimeObject* L_104 = V_0;
		__this->___m_Stack = L_104;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Stack), (void*)L_104);
	}

IL_027c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManagedObjectClone_CloneValue_TisStyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3_mCE4BAB88D5CF387644E6F54522BA4FD3716FAF7E_gshared (ManagedObjectClone_t6E754ED2624B829553A94A85A0D62AD51B58FCD6* __this, StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3* ___0_dstValue, StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3 ___1_srcValue, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	Type_t* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	RuntimeObject* V_9 = NULL;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t V_13 = 0;
	RuntimeObject* V_14 = NULL;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	int32_t V_19 = 0;
	VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE V_20;
	memset((&V_20), 0, sizeof(V_20));
	int32_t G_B5_0 = 0;
	int32_t G_B16_0 = 0;
	int32_t G_B22_0 = 0;
	int32_t G_B29_0 = 0;
	RuntimeArray* G_B32_0 = NULL;
	RuntimeArray* G_B31_0 = NULL;
	int32_t G_B33_0 = 0;
	int32_t G_B35_0 = 0;
	int32_t G_B41_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_0;
		L_0 = TypeTraits_1_get_IsContainer_m37D42BF4D5B4D9B0438EC68FF5805247017DD90D_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3* L_2 = ___0_dstValue;
		StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3 L_3 = ___1_srcValue;
		*(StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3*)L_2 = L_3;
		goto IL_027c;
	}

IL_001a:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_4;
		L_4 = TypeTraits_1_get_CanBeNull_m0285698C5170350BB9326DA5102DE8A5CA6DE357_inline(il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3 L_5 = ___1_srcValue;
		G_B5_0 = ((int32_t)(false));
		goto IL_002d;
	}

IL_002c:
	{
		G_B5_0 = 0;
	}

IL_002d:
	{
		V_2 = (bool)G_B5_0;
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_003e;
		}
	}
	{
		StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3* L_7 = ___0_dstValue;
		il2cpp_codegen_initobj(L_7, sizeof(StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3));
		goto IL_027c;
	}

IL_003e:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_8;
		L_8 = TypeTraits_1_get_IsValueType_m056052FE7567159FC8E6E245B57CCF22EAFB9A0C_inline(il2cpp_rgctx_method(method->rgctx_data, 5));
		V_3 = L_8;
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_0055;
		}
	}
	{
		StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3* L_10 = ___0_dstValue;
		il2cpp_codegen_initobj(L_10, sizeof(StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3));
		goto IL_0237;
	}

IL_0055:
	{
		Il2CppFakeBox<StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3> L_11(il2cpp_rgctx_data(method->rgctx_data, 3), (&___1_srcValue));
		Type_t* L_12;
		L_12 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((&L_11), NULL);
		V_4 = L_12;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		Type_t* L_15 = V_4;
		NullCheck(L_14);
		bool L_16;
		L_16 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_14, L_15);
		V_6 = L_16;
		bool L_17 = V_6;
		if (!L_17)
		{
			goto IL_0089;
		}
	}
	{
		StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3* L_18 = ___0_dstValue;
		StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3 L_19 = ___1_srcValue;
		*(StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3*)L_18 = L_19;
		goto IL_027c;
	}

IL_0089:
	{
		Type_t* L_20 = V_4;
		bool L_21;
		L_21 = TypeTraits_IsContainer_m46D04F3E3219371CC5F133E2CC54BCA46FD72505(L_20, NULL);
		V_7 = (bool)((((int32_t)L_21) == ((int32_t)0))? 1 : 0);
		bool L_22 = V_7;
		if (!L_22)
		{
			goto IL_00a6;
		}
	}
	{
		StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3* L_23 = ___0_dstValue;
		StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3 L_24 = ___1_srcValue;
		*(StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3*)L_23 = L_24;
		goto IL_027c;
	}

IL_00a6:
	{
		Type_t* L_25 = V_4;
		NullCheck(L_25);
		bool L_26;
		L_26 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_25, NULL);
		if (L_26)
		{
			goto IL_00c5;
		}
	}
	{
		Type_t* L_27 = V_4;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_28 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.string_class->byval_arg) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_29;
		L_29 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_28, NULL);
		bool L_30;
		L_30 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_27, L_29, NULL);
		G_B16_0 = ((((int32_t)L_30) == ((int32_t)0))? 1 : 0);
		goto IL_00c6;
	}

IL_00c5:
	{
		G_B16_0 = 0;
	}

IL_00c6:
	{
		V_5 = (bool)G_B16_0;
		bool L_31 = V_5;
		V_8 = L_31;
		bool L_32 = V_8;
		if (!L_32)
		{
			goto IL_0134;
		}
	}
	{
		RuntimeObject* L_33 = __this->___m_RootSource;
		StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3 L_34 = ___1_srcValue;
		StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3 L_35 = L_34;
		RuntimeObject* L_36 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_35);
		V_10 = (bool)((((RuntimeObject*)(RuntimeObject*)L_33) == ((RuntimeObject*)(RuntimeObject*)L_36))? 1 : 0);
		bool L_37 = V_10;
		if (!L_37)
		{
			goto IL_00fc;
		}
	}
	{
		StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3* L_38 = ___0_dstValue;
		RuntimeObject* L_39 = __this->___m_RootDestination;
		*(StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3*)L_38 = ((*(StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3*)UnBox(L_39, il2cpp_rgctx_data(method->rgctx_data, 3))));
		goto IL_027c;
	}

IL_00fc:
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_40 = __this->___m_References;
		if (!L_40)
		{
			goto IL_0119;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_41 = __this->___m_References;
		StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3 L_42 = ___1_srcValue;
		StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3 L_43 = L_42;
		RuntimeObject* L_44 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_43);
		NullCheck(L_41);
		bool L_45;
		L_45 = Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849(L_41, L_44, (&V_9), Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		G_B22_0 = ((int32_t)(L_45));
		goto IL_011a;
	}

IL_0119:
	{
		G_B22_0 = 0;
	}

IL_011a:
	{
		V_11 = (bool)G_B22_0;
		bool L_46 = V_11;
		if (!L_46)
		{
			goto IL_0133;
		}
	}
	{
		StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3* L_47 = ___0_dstValue;
		RuntimeObject* L_48 = V_9;
		*(StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3*)L_47 = ((*(StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3*)UnBox(L_48, il2cpp_rgctx_data(method->rgctx_data, 3))));
		goto IL_027c;
	}

IL_0133:
	{
	}

IL_0134:
	{
		Type_t* L_49 = V_4;
		NullCheck(L_49);
		bool L_50;
		L_50 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_49, NULL);
		V_12 = L_50;
		bool L_51 = V_12;
		if (!L_51)
		{
			goto IL_01b6;
		}
	}
	{
		StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3 L_52 = ___1_srcValue;
		StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3 L_53 = L_52;
		RuntimeObject* L_54 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_53);
		V_14 = (RuntimeObject*)NULL;
		RuntimeObject* L_55 = V_14;
		if (L_55)
		{
			goto IL_0156;
		}
	}
	{
		G_B29_0 = 0;
		goto IL_015d;
	}

IL_0156:
	{
		RuntimeObject* L_56 = V_14;
		NullCheck((RuntimeObject*)L_56);
		int32_t L_57;
		L_57 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_56);
		G_B29_0 = L_57;
	}

IL_015d:
	{
		V_13 = G_B29_0;
	}
	{
		StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3* L_59 = ___0_dstValue;
		StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3 L_60 = (*(StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3*)L_59);
		StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3 L_61 = L_60;
		RuntimeObject* L_62 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_61);
		RuntimeArray* L_63 = ((RuntimeArray*)IsInstClass((RuntimeObject*)L_62, il2cpp_defaults.array_class));
		if (L_63)
		{
			G_B32_0 = L_63;
			goto IL_0183;
		}
		G_B31_0 = L_63;
	}
	{
		G_B33_0 = 1;
		goto IL_018f;
	}

IL_0183:
	{
		NullCheck(G_B32_0);
		int32_t L_64;
		L_64 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(G_B32_0, NULL);
		int32_t L_65 = V_13;
		G_B33_0 = ((((int32_t)((((int32_t)L_64) == ((int32_t)L_65))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_018f:
	{
		G_B35_0 = G_B33_0;
		goto IL_0192;
	}

IL_0192:
	{
		V_15 = (bool)G_B35_0;
		bool L_66 = V_15;
		if (!L_66)
		{
			goto IL_01b3;
		}
	}
	{
		StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3* L_67 = ___0_dstValue;
		Type_t* L_68 = V_4;
		NullCheck(L_68);
		Type_t* L_69;
		L_69 = VirtualFuncInvoker0< Type_t* >::Invoke(48, L_68);
		int32_t L_70 = V_13;
		RuntimeArray* L_71;
		L_71 = Array_CreateInstance_m13B202130951A03AF5F52470A19E17D3AD2A8983(L_69, L_70, NULL);
		*(StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3*)L_67 = ((*(StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3*)UnBox((RuntimeObject*)L_71, il2cpp_rgctx_data(method->rgctx_data, 3))));
	}

IL_01b3:
	{
		goto IL_01f5;
	}

IL_01b6:
	{
	}
	{
		StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3* L_73 = ___0_dstValue;
		Il2CppFakeBox<StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3> L_74(il2cpp_rgctx_data(method->rgctx_data, 3), L_73);
		Type_t* L_75;
		L_75 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((&L_74), NULL);
		Type_t* L_76 = V_4;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_77;
		L_77 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_75, L_76, NULL);
		G_B41_0 = ((int32_t)(L_77));
		goto IL_01da;
	}

IL_01da:
	{
		V_16 = (bool)G_B41_0;
		bool L_78 = V_16;
		if (!L_78)
		{
			goto IL_01f4;
		}
	}
	{
		StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3* L_79 = ___0_dstValue;
		Type_t* L_80 = V_4;
		RuntimeObject* L_81;
		L_81 = Activator_CreateInstance_mFF030428C64FDDFACC74DFAC97388A1C628BFBCF(L_80, NULL);
		*(StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3*)L_79 = ((*(StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3*)UnBox(L_81, il2cpp_rgctx_data(method->rgctx_data, 3))));
	}

IL_01f4:
	{
	}

IL_01f5:
	{
		bool L_82 = V_5;
		V_17 = L_82;
		bool L_83 = V_17;
		if (!L_83)
		{
			goto IL_0236;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_84 = __this->___m_References;
		V_18 = (bool)((((RuntimeObject*)(Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*)L_84) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_85 = V_18;
		if (!L_85)
		{
			goto IL_0218;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_86 = (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*)il2cpp_codegen_object_new(Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329(L_86, Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_RuntimeMethod_var);
		__this->___m_References = L_86;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_References), (void*)L_86);
	}

IL_0218:
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_87 = __this->___m_References;
		StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3 L_88 = ___1_srcValue;
		StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3 L_89 = L_88;
		RuntimeObject* L_90 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_89);
		StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3* L_91 = ___0_dstValue;
		StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3 L_92 = (*(StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3*)L_91);
		StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3 L_93 = L_92;
		RuntimeObject* L_94 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_93);
		NullCheck(L_87);
		Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1(L_87, L_90, L_94, Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
	}

IL_0236:
	{
	}

IL_0237:
	{
		RuntimeObject* L_95 = __this->___m_Stack;
		V_0 = L_95;
		StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3* L_96 = ___0_dstValue;
		StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3 L_97 = (*(StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3*)L_96);
		StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3 L_98 = L_97;
		RuntimeObject* L_99 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_98);
		__this->___m_Stack = L_99;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Stack), (void*)L_99);
		il2cpp_codegen_initobj((&V_20), sizeof(VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE));
		VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE L_100 = V_20;
		bool L_101;
		L_101 = PropertyContainer_TryAccept_TisStyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3_mE8575A040F0962B42852A5EBDAA07B6B7DA6EDE4((RuntimeObject*)__this, (&___1_srcValue), (&V_19), L_100, il2cpp_rgctx_method(method->rgctx_data, 7));
		StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3* L_102 = ___0_dstValue;
		RuntimeObject* L_103 = __this->___m_Stack;
		*(StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3*)L_102 = ((*(StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3*)UnBox(L_103, il2cpp_rgctx_data(method->rgctx_data, 3))));
		RuntimeObject* L_104 = V_0;
		__this->___m_Stack = L_104;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Stack), (void*)L_104);
	}

IL_027c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManagedObjectClone_CloneValue_TisStyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866_m9B17BB253521946795508B19D91D0E47BC02E4E3_gshared (ManagedObjectClone_t6E754ED2624B829553A94A85A0D62AD51B58FCD6* __this, StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866* ___0_dstValue, StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866 ___1_srcValue, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	Type_t* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	RuntimeObject* V_9 = NULL;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t V_13 = 0;
	RuntimeObject* V_14 = NULL;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	int32_t V_19 = 0;
	VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE V_20;
	memset((&V_20), 0, sizeof(V_20));
	int32_t G_B5_0 = 0;
	int32_t G_B16_0 = 0;
	int32_t G_B22_0 = 0;
	int32_t G_B29_0 = 0;
	RuntimeArray* G_B32_0 = NULL;
	RuntimeArray* G_B31_0 = NULL;
	int32_t G_B33_0 = 0;
	int32_t G_B35_0 = 0;
	int32_t G_B41_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_0;
		L_0 = TypeTraits_1_get_IsContainer_m71E5DD5E57922A24E5D8ACDC63720DA12180D119_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866* L_2 = ___0_dstValue;
		StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866 L_3 = ___1_srcValue;
		*(StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866*)L_2 = L_3;
		goto IL_027c;
	}

IL_001a:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_4;
		L_4 = TypeTraits_1_get_CanBeNull_mD22045184FA0539BA7AFCFABEAD125438AD5D418_inline(il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866 L_5 = ___1_srcValue;
		G_B5_0 = ((int32_t)(false));
		goto IL_002d;
	}

IL_002c:
	{
		G_B5_0 = 0;
	}

IL_002d:
	{
		V_2 = (bool)G_B5_0;
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_003e;
		}
	}
	{
		StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866* L_7 = ___0_dstValue;
		il2cpp_codegen_initobj(L_7, sizeof(StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866));
		goto IL_027c;
	}

IL_003e:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_8;
		L_8 = TypeTraits_1_get_IsValueType_mCF6752FCDB191E6473D9F399BF25CE84E02C61B3_inline(il2cpp_rgctx_method(method->rgctx_data, 5));
		V_3 = L_8;
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_0055;
		}
	}
	{
		StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866* L_10 = ___0_dstValue;
		il2cpp_codegen_initobj(L_10, sizeof(StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866));
		goto IL_0237;
	}

IL_0055:
	{
		Il2CppFakeBox<StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866> L_11(il2cpp_rgctx_data(method->rgctx_data, 3), (&___1_srcValue));
		Type_t* L_12;
		L_12 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((&L_11), NULL);
		V_4 = L_12;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		Type_t* L_15 = V_4;
		NullCheck(L_14);
		bool L_16;
		L_16 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_14, L_15);
		V_6 = L_16;
		bool L_17 = V_6;
		if (!L_17)
		{
			goto IL_0089;
		}
	}
	{
		StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866* L_18 = ___0_dstValue;
		StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866 L_19 = ___1_srcValue;
		*(StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866*)L_18 = L_19;
		goto IL_027c;
	}

IL_0089:
	{
		Type_t* L_20 = V_4;
		bool L_21;
		L_21 = TypeTraits_IsContainer_m46D04F3E3219371CC5F133E2CC54BCA46FD72505(L_20, NULL);
		V_7 = (bool)((((int32_t)L_21) == ((int32_t)0))? 1 : 0);
		bool L_22 = V_7;
		if (!L_22)
		{
			goto IL_00a6;
		}
	}
	{
		StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866* L_23 = ___0_dstValue;
		StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866 L_24 = ___1_srcValue;
		*(StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866*)L_23 = L_24;
		goto IL_027c;
	}

IL_00a6:
	{
		Type_t* L_25 = V_4;
		NullCheck(L_25);
		bool L_26;
		L_26 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_25, NULL);
		if (L_26)
		{
			goto IL_00c5;
		}
	}
	{
		Type_t* L_27 = V_4;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_28 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.string_class->byval_arg) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_29;
		L_29 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_28, NULL);
		bool L_30;
		L_30 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_27, L_29, NULL);
		G_B16_0 = ((((int32_t)L_30) == ((int32_t)0))? 1 : 0);
		goto IL_00c6;
	}

IL_00c5:
	{
		G_B16_0 = 0;
	}

IL_00c6:
	{
		V_5 = (bool)G_B16_0;
		bool L_31 = V_5;
		V_8 = L_31;
		bool L_32 = V_8;
		if (!L_32)
		{
			goto IL_0134;
		}
	}
	{
		RuntimeObject* L_33 = __this->___m_RootSource;
		StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866 L_34 = ___1_srcValue;
		StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866 L_35 = L_34;
		RuntimeObject* L_36 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_35);
		V_10 = (bool)((((RuntimeObject*)(RuntimeObject*)L_33) == ((RuntimeObject*)(RuntimeObject*)L_36))? 1 : 0);
		bool L_37 = V_10;
		if (!L_37)
		{
			goto IL_00fc;
		}
	}
	{
		StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866* L_38 = ___0_dstValue;
		RuntimeObject* L_39 = __this->___m_RootDestination;
		*(StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866*)L_38 = ((*(StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866*)UnBox(L_39, il2cpp_rgctx_data(method->rgctx_data, 3))));
		goto IL_027c;
	}

IL_00fc:
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_40 = __this->___m_References;
		if (!L_40)
		{
			goto IL_0119;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_41 = __this->___m_References;
		StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866 L_42 = ___1_srcValue;
		StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866 L_43 = L_42;
		RuntimeObject* L_44 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_43);
		NullCheck(L_41);
		bool L_45;
		L_45 = Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849(L_41, L_44, (&V_9), Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		G_B22_0 = ((int32_t)(L_45));
		goto IL_011a;
	}

IL_0119:
	{
		G_B22_0 = 0;
	}

IL_011a:
	{
		V_11 = (bool)G_B22_0;
		bool L_46 = V_11;
		if (!L_46)
		{
			goto IL_0133;
		}
	}
	{
		StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866* L_47 = ___0_dstValue;
		RuntimeObject* L_48 = V_9;
		*(StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866*)L_47 = ((*(StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866*)UnBox(L_48, il2cpp_rgctx_data(method->rgctx_data, 3))));
		goto IL_027c;
	}

IL_0133:
	{
	}

IL_0134:
	{
		Type_t* L_49 = V_4;
		NullCheck(L_49);
		bool L_50;
		L_50 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_49, NULL);
		V_12 = L_50;
		bool L_51 = V_12;
		if (!L_51)
		{
			goto IL_01b6;
		}
	}
	{
		StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866 L_52 = ___1_srcValue;
		StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866 L_53 = L_52;
		RuntimeObject* L_54 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_53);
		V_14 = (RuntimeObject*)NULL;
		RuntimeObject* L_55 = V_14;
		if (L_55)
		{
			goto IL_0156;
		}
	}
	{
		G_B29_0 = 0;
		goto IL_015d;
	}

IL_0156:
	{
		RuntimeObject* L_56 = V_14;
		NullCheck((RuntimeObject*)L_56);
		int32_t L_57;
		L_57 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_56);
		G_B29_0 = L_57;
	}

IL_015d:
	{
		V_13 = G_B29_0;
	}
	{
		StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866* L_59 = ___0_dstValue;
		StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866 L_60 = (*(StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866*)L_59);
		StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866 L_61 = L_60;
		RuntimeObject* L_62 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_61);
		RuntimeArray* L_63 = ((RuntimeArray*)IsInstClass((RuntimeObject*)L_62, il2cpp_defaults.array_class));
		if (L_63)
		{
			G_B32_0 = L_63;
			goto IL_0183;
		}
		G_B31_0 = L_63;
	}
	{
		G_B33_0 = 1;
		goto IL_018f;
	}

IL_0183:
	{
		NullCheck(G_B32_0);
		int32_t L_64;
		L_64 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(G_B32_0, NULL);
		int32_t L_65 = V_13;
		G_B33_0 = ((((int32_t)((((int32_t)L_64) == ((int32_t)L_65))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_018f:
	{
		G_B35_0 = G_B33_0;
		goto IL_0192;
	}

IL_0192:
	{
		V_15 = (bool)G_B35_0;
		bool L_66 = V_15;
		if (!L_66)
		{
			goto IL_01b3;
		}
	}
	{
		StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866* L_67 = ___0_dstValue;
		Type_t* L_68 = V_4;
		NullCheck(L_68);
		Type_t* L_69;
		L_69 = VirtualFuncInvoker0< Type_t* >::Invoke(48, L_68);
		int32_t L_70 = V_13;
		RuntimeArray* L_71;
		L_71 = Array_CreateInstance_m13B202130951A03AF5F52470A19E17D3AD2A8983(L_69, L_70, NULL);
		*(StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866*)L_67 = ((*(StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866*)UnBox((RuntimeObject*)L_71, il2cpp_rgctx_data(method->rgctx_data, 3))));
	}

IL_01b3:
	{
		goto IL_01f5;
	}

IL_01b6:
	{
	}
	{
		StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866* L_73 = ___0_dstValue;
		Il2CppFakeBox<StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866> L_74(il2cpp_rgctx_data(method->rgctx_data, 3), L_73);
		Type_t* L_75;
		L_75 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((&L_74), NULL);
		Type_t* L_76 = V_4;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_77;
		L_77 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_75, L_76, NULL);
		G_B41_0 = ((int32_t)(L_77));
		goto IL_01da;
	}

IL_01da:
	{
		V_16 = (bool)G_B41_0;
		bool L_78 = V_16;
		if (!L_78)
		{
			goto IL_01f4;
		}
	}
	{
		StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866* L_79 = ___0_dstValue;
		Type_t* L_80 = V_4;
		RuntimeObject* L_81;
		L_81 = Activator_CreateInstance_mFF030428C64FDDFACC74DFAC97388A1C628BFBCF(L_80, NULL);
		*(StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866*)L_79 = ((*(StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866*)UnBox(L_81, il2cpp_rgctx_data(method->rgctx_data, 3))));
	}

IL_01f4:
	{
	}

IL_01f5:
	{
		bool L_82 = V_5;
		V_17 = L_82;
		bool L_83 = V_17;
		if (!L_83)
		{
			goto IL_0236;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_84 = __this->___m_References;
		V_18 = (bool)((((RuntimeObject*)(Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*)L_84) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_85 = V_18;
		if (!L_85)
		{
			goto IL_0218;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_86 = (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*)il2cpp_codegen_object_new(Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329(L_86, Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_RuntimeMethod_var);
		__this->___m_References = L_86;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_References), (void*)L_86);
	}

IL_0218:
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_87 = __this->___m_References;
		StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866 L_88 = ___1_srcValue;
		StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866 L_89 = L_88;
		RuntimeObject* L_90 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_89);
		StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866* L_91 = ___0_dstValue;
		StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866 L_92 = (*(StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866*)L_91);
		StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866 L_93 = L_92;
		RuntimeObject* L_94 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_93);
		NullCheck(L_87);
		Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1(L_87, L_90, L_94, Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
	}

IL_0236:
	{
	}

IL_0237:
	{
		RuntimeObject* L_95 = __this->___m_Stack;
		V_0 = L_95;
		StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866* L_96 = ___0_dstValue;
		StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866 L_97 = (*(StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866*)L_96);
		StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866 L_98 = L_97;
		RuntimeObject* L_99 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_98);
		__this->___m_Stack = L_99;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Stack), (void*)L_99);
		il2cpp_codegen_initobj((&V_20), sizeof(VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE));
		VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE L_100 = V_20;
		bool L_101;
		L_101 = PropertyContainer_TryAccept_TisStyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866_mD3FB81C2CEE20D3AC2B423BB0560D963465E524A((RuntimeObject*)__this, (&___1_srcValue), (&V_19), L_100, il2cpp_rgctx_method(method->rgctx_data, 7));
		StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866* L_102 = ___0_dstValue;
		RuntimeObject* L_103 = __this->___m_Stack;
		*(StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866*)L_102 = ((*(StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866*)UnBox(L_103, il2cpp_rgctx_data(method->rgctx_data, 3))));
		RuntimeObject* L_104 = V_0;
		__this->___m_Stack = L_104;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Stack), (void*)L_104);
	}

IL_027c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManagedObjectClone_CloneValue_TisStyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008_m27D37F43C6082EA1CA0D9594621C39A2B12798BD_gshared (ManagedObjectClone_t6E754ED2624B829553A94A85A0D62AD51B58FCD6* __this, StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008* ___0_dstValue, StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008 ___1_srcValue, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	Type_t* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	RuntimeObject* V_9 = NULL;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t V_13 = 0;
	RuntimeObject* V_14 = NULL;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	int32_t V_19 = 0;
	VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE V_20;
	memset((&V_20), 0, sizeof(V_20));
	int32_t G_B5_0 = 0;
	int32_t G_B16_0 = 0;
	int32_t G_B22_0 = 0;
	int32_t G_B29_0 = 0;
	RuntimeArray* G_B32_0 = NULL;
	RuntimeArray* G_B31_0 = NULL;
	int32_t G_B33_0 = 0;
	int32_t G_B35_0 = 0;
	int32_t G_B41_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_0;
		L_0 = TypeTraits_1_get_IsContainer_m392F4C8C66B4A071756DB71F627CAC269285D1BA_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008* L_2 = ___0_dstValue;
		StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008 L_3 = ___1_srcValue;
		*(StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008*)L_2 = L_3;
		goto IL_027c;
	}

IL_001a:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_4;
		L_4 = TypeTraits_1_get_CanBeNull_m33625EC55E4DE2F45D4BB9979B71B6394DCAA84B_inline(il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008 L_5 = ___1_srcValue;
		G_B5_0 = ((int32_t)(false));
		goto IL_002d;
	}

IL_002c:
	{
		G_B5_0 = 0;
	}

IL_002d:
	{
		V_2 = (bool)G_B5_0;
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_003e;
		}
	}
	{
		StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008* L_7 = ___0_dstValue;
		il2cpp_codegen_initobj(L_7, sizeof(StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008));
		goto IL_027c;
	}

IL_003e:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_8;
		L_8 = TypeTraits_1_get_IsValueType_m56D7A6A534892EC5D12D9A62CF04B0A27D3BD35B_inline(il2cpp_rgctx_method(method->rgctx_data, 5));
		V_3 = L_8;
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_0055;
		}
	}
	{
		StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008* L_10 = ___0_dstValue;
		il2cpp_codegen_initobj(L_10, sizeof(StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008));
		goto IL_0237;
	}

IL_0055:
	{
		Il2CppFakeBox<StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008> L_11(il2cpp_rgctx_data(method->rgctx_data, 3), (&___1_srcValue));
		Type_t* L_12;
		L_12 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((&L_11), NULL);
		V_4 = L_12;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		Type_t* L_15 = V_4;
		NullCheck(L_14);
		bool L_16;
		L_16 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_14, L_15);
		V_6 = L_16;
		bool L_17 = V_6;
		if (!L_17)
		{
			goto IL_0089;
		}
	}
	{
		StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008* L_18 = ___0_dstValue;
		StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008 L_19 = ___1_srcValue;
		*(StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008*)L_18 = L_19;
		goto IL_027c;
	}

IL_0089:
	{
		Type_t* L_20 = V_4;
		bool L_21;
		L_21 = TypeTraits_IsContainer_m46D04F3E3219371CC5F133E2CC54BCA46FD72505(L_20, NULL);
		V_7 = (bool)((((int32_t)L_21) == ((int32_t)0))? 1 : 0);
		bool L_22 = V_7;
		if (!L_22)
		{
			goto IL_00a6;
		}
	}
	{
		StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008* L_23 = ___0_dstValue;
		StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008 L_24 = ___1_srcValue;
		*(StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008*)L_23 = L_24;
		goto IL_027c;
	}

IL_00a6:
	{
		Type_t* L_25 = V_4;
		NullCheck(L_25);
		bool L_26;
		L_26 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_25, NULL);
		if (L_26)
		{
			goto IL_00c5;
		}
	}
	{
		Type_t* L_27 = V_4;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_28 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.string_class->byval_arg) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_29;
		L_29 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_28, NULL);
		bool L_30;
		L_30 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_27, L_29, NULL);
		G_B16_0 = ((((int32_t)L_30) == ((int32_t)0))? 1 : 0);
		goto IL_00c6;
	}

IL_00c5:
	{
		G_B16_0 = 0;
	}

IL_00c6:
	{
		V_5 = (bool)G_B16_0;
		bool L_31 = V_5;
		V_8 = L_31;
		bool L_32 = V_8;
		if (!L_32)
		{
			goto IL_0134;
		}
	}
	{
		RuntimeObject* L_33 = __this->___m_RootSource;
		StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008 L_34 = ___1_srcValue;
		StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008 L_35 = L_34;
		RuntimeObject* L_36 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_35);
		V_10 = (bool)((((RuntimeObject*)(RuntimeObject*)L_33) == ((RuntimeObject*)(RuntimeObject*)L_36))? 1 : 0);
		bool L_37 = V_10;
		if (!L_37)
		{
			goto IL_00fc;
		}
	}
	{
		StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008* L_38 = ___0_dstValue;
		RuntimeObject* L_39 = __this->___m_RootDestination;
		*(StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008*)L_38 = ((*(StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008*)UnBox(L_39, il2cpp_rgctx_data(method->rgctx_data, 3))));
		goto IL_027c;
	}

IL_00fc:
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_40 = __this->___m_References;
		if (!L_40)
		{
			goto IL_0119;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_41 = __this->___m_References;
		StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008 L_42 = ___1_srcValue;
		StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008 L_43 = L_42;
		RuntimeObject* L_44 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_43);
		NullCheck(L_41);
		bool L_45;
		L_45 = Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849(L_41, L_44, (&V_9), Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		G_B22_0 = ((int32_t)(L_45));
		goto IL_011a;
	}

IL_0119:
	{
		G_B22_0 = 0;
	}

IL_011a:
	{
		V_11 = (bool)G_B22_0;
		bool L_46 = V_11;
		if (!L_46)
		{
			goto IL_0133;
		}
	}
	{
		StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008* L_47 = ___0_dstValue;
		RuntimeObject* L_48 = V_9;
		*(StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008*)L_47 = ((*(StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008*)UnBox(L_48, il2cpp_rgctx_data(method->rgctx_data, 3))));
		goto IL_027c;
	}

IL_0133:
	{
	}

IL_0134:
	{
		Type_t* L_49 = V_4;
		NullCheck(L_49);
		bool L_50;
		L_50 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_49, NULL);
		V_12 = L_50;
		bool L_51 = V_12;
		if (!L_51)
		{
			goto IL_01b6;
		}
	}
	{
		StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008 L_52 = ___1_srcValue;
		StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008 L_53 = L_52;
		RuntimeObject* L_54 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_53);
		V_14 = (RuntimeObject*)NULL;
		RuntimeObject* L_55 = V_14;
		if (L_55)
		{
			goto IL_0156;
		}
	}
	{
		G_B29_0 = 0;
		goto IL_015d;
	}

IL_0156:
	{
		RuntimeObject* L_56 = V_14;
		NullCheck((RuntimeObject*)L_56);
		int32_t L_57;
		L_57 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_56);
		G_B29_0 = L_57;
	}

IL_015d:
	{
		V_13 = G_B29_0;
	}
	{
		StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008* L_59 = ___0_dstValue;
		StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008 L_60 = (*(StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008*)L_59);
		StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008 L_61 = L_60;
		RuntimeObject* L_62 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_61);
		RuntimeArray* L_63 = ((RuntimeArray*)IsInstClass((RuntimeObject*)L_62, il2cpp_defaults.array_class));
		if (L_63)
		{
			G_B32_0 = L_63;
			goto IL_0183;
		}
		G_B31_0 = L_63;
	}
	{
		G_B33_0 = 1;
		goto IL_018f;
	}

IL_0183:
	{
		NullCheck(G_B32_0);
		int32_t L_64;
		L_64 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(G_B32_0, NULL);
		int32_t L_65 = V_13;
		G_B33_0 = ((((int32_t)((((int32_t)L_64) == ((int32_t)L_65))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_018f:
	{
		G_B35_0 = G_B33_0;
		goto IL_0192;
	}

IL_0192:
	{
		V_15 = (bool)G_B35_0;
		bool L_66 = V_15;
		if (!L_66)
		{
			goto IL_01b3;
		}
	}
	{
		StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008* L_67 = ___0_dstValue;
		Type_t* L_68 = V_4;
		NullCheck(L_68);
		Type_t* L_69;
		L_69 = VirtualFuncInvoker0< Type_t* >::Invoke(48, L_68);
		int32_t L_70 = V_13;
		RuntimeArray* L_71;
		L_71 = Array_CreateInstance_m13B202130951A03AF5F52470A19E17D3AD2A8983(L_69, L_70, NULL);
		*(StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008*)L_67 = ((*(StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008*)UnBox((RuntimeObject*)L_71, il2cpp_rgctx_data(method->rgctx_data, 3))));
	}

IL_01b3:
	{
		goto IL_01f5;
	}

IL_01b6:
	{
	}
	{
		StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008* L_73 = ___0_dstValue;
		Il2CppFakeBox<StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008> L_74(il2cpp_rgctx_data(method->rgctx_data, 3), L_73);
		Type_t* L_75;
		L_75 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((&L_74), NULL);
		Type_t* L_76 = V_4;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_77;
		L_77 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_75, L_76, NULL);
		G_B41_0 = ((int32_t)(L_77));
		goto IL_01da;
	}

IL_01da:
	{
		V_16 = (bool)G_B41_0;
		bool L_78 = V_16;
		if (!L_78)
		{
			goto IL_01f4;
		}
	}
	{
		StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008* L_79 = ___0_dstValue;
		Type_t* L_80 = V_4;
		RuntimeObject* L_81;
		L_81 = Activator_CreateInstance_mFF030428C64FDDFACC74DFAC97388A1C628BFBCF(L_80, NULL);
		*(StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008*)L_79 = ((*(StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008*)UnBox(L_81, il2cpp_rgctx_data(method->rgctx_data, 3))));
	}

IL_01f4:
	{
	}

IL_01f5:
	{
		bool L_82 = V_5;
		V_17 = L_82;
		bool L_83 = V_17;
		if (!L_83)
		{
			goto IL_0236;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_84 = __this->___m_References;
		V_18 = (bool)((((RuntimeObject*)(Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*)L_84) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_85 = V_18;
		if (!L_85)
		{
			goto IL_0218;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_86 = (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*)il2cpp_codegen_object_new(Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329(L_86, Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_RuntimeMethod_var);
		__this->___m_References = L_86;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_References), (void*)L_86);
	}

IL_0218:
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_87 = __this->___m_References;
		StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008 L_88 = ___1_srcValue;
		StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008 L_89 = L_88;
		RuntimeObject* L_90 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_89);
		StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008* L_91 = ___0_dstValue;
		StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008 L_92 = (*(StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008*)L_91);
		StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008 L_93 = L_92;
		RuntimeObject* L_94 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_93);
		NullCheck(L_87);
		Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1(L_87, L_90, L_94, Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
	}

IL_0236:
	{
	}

IL_0237:
	{
		RuntimeObject* L_95 = __this->___m_Stack;
		V_0 = L_95;
		StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008* L_96 = ___0_dstValue;
		StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008 L_97 = (*(StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008*)L_96);
		StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008 L_98 = L_97;
		RuntimeObject* L_99 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_98);
		__this->___m_Stack = L_99;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Stack), (void*)L_99);
		il2cpp_codegen_initobj((&V_20), sizeof(VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE));
		VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE L_100 = V_20;
		bool L_101;
		L_101 = PropertyContainer_TryAccept_TisStyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008_m84F0CCCB010274BA518744F14B2FC6445DCA64E4((RuntimeObject*)__this, (&___1_srcValue), (&V_19), L_100, il2cpp_rgctx_method(method->rgctx_data, 7));
		StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008* L_102 = ___0_dstValue;
		RuntimeObject* L_103 = __this->___m_Stack;
		*(StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008*)L_102 = ((*(StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008*)UnBox(L_103, il2cpp_rgctx_data(method->rgctx_data, 3))));
		RuntimeObject* L_104 = V_0;
		__this->___m_Stack = L_104;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Stack), (void*)L_104);
	}

IL_027c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManagedObjectClone_CloneValue_TisStyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910_m20E4444AC7870670F75AD57DCB4F9C06A0A9EA44_gshared (ManagedObjectClone_t6E754ED2624B829553A94A85A0D62AD51B58FCD6* __this, StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910* ___0_dstValue, StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910 ___1_srcValue, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	Type_t* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	RuntimeObject* V_9 = NULL;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t V_13 = 0;
	RuntimeObject* V_14 = NULL;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	int32_t V_19 = 0;
	VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE V_20;
	memset((&V_20), 0, sizeof(V_20));
	int32_t G_B5_0 = 0;
	int32_t G_B16_0 = 0;
	int32_t G_B22_0 = 0;
	int32_t G_B29_0 = 0;
	RuntimeArray* G_B32_0 = NULL;
	RuntimeArray* G_B31_0 = NULL;
	int32_t G_B33_0 = 0;
	int32_t G_B35_0 = 0;
	int32_t G_B41_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_0;
		L_0 = TypeTraits_1_get_IsContainer_m464DECD495CB2BC744CE122AAD07403C501AF87B_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910* L_2 = ___0_dstValue;
		StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910 L_3 = ___1_srcValue;
		*(StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910*)L_2 = L_3;
		goto IL_027c;
	}

IL_001a:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_4;
		L_4 = TypeTraits_1_get_CanBeNull_mE961AAB25B0D1DD6A17564895842AF7BD52468DB_inline(il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910 L_5 = ___1_srcValue;
		G_B5_0 = ((int32_t)(false));
		goto IL_002d;
	}

IL_002c:
	{
		G_B5_0 = 0;
	}

IL_002d:
	{
		V_2 = (bool)G_B5_0;
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_003e;
		}
	}
	{
		StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910* L_7 = ___0_dstValue;
		il2cpp_codegen_initobj(L_7, sizeof(StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910));
		goto IL_027c;
	}

IL_003e:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_8;
		L_8 = TypeTraits_1_get_IsValueType_m914EFA8D02D4B138FB957D9FFF73248121E5D2C0_inline(il2cpp_rgctx_method(method->rgctx_data, 5));
		V_3 = L_8;
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_0055;
		}
	}
	{
		StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910* L_10 = ___0_dstValue;
		il2cpp_codegen_initobj(L_10, sizeof(StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910));
		goto IL_0237;
	}

IL_0055:
	{
		Il2CppFakeBox<StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910> L_11(il2cpp_rgctx_data(method->rgctx_data, 3), (&___1_srcValue));
		Type_t* L_12;
		L_12 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((&L_11), NULL);
		V_4 = L_12;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		Type_t* L_15 = V_4;
		NullCheck(L_14);
		bool L_16;
		L_16 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_14, L_15);
		V_6 = L_16;
		bool L_17 = V_6;
		if (!L_17)
		{
			goto IL_0089;
		}
	}
	{
		StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910* L_18 = ___0_dstValue;
		StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910 L_19 = ___1_srcValue;
		*(StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910*)L_18 = L_19;
		goto IL_027c;
	}

IL_0089:
	{
		Type_t* L_20 = V_4;
		bool L_21;
		L_21 = TypeTraits_IsContainer_m46D04F3E3219371CC5F133E2CC54BCA46FD72505(L_20, NULL);
		V_7 = (bool)((((int32_t)L_21) == ((int32_t)0))? 1 : 0);
		bool L_22 = V_7;
		if (!L_22)
		{
			goto IL_00a6;
		}
	}
	{
		StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910* L_23 = ___0_dstValue;
		StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910 L_24 = ___1_srcValue;
		*(StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910*)L_23 = L_24;
		goto IL_027c;
	}

IL_00a6:
	{
		Type_t* L_25 = V_4;
		NullCheck(L_25);
		bool L_26;
		L_26 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_25, NULL);
		if (L_26)
		{
			goto IL_00c5;
		}
	}
	{
		Type_t* L_27 = V_4;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_28 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.string_class->byval_arg) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_29;
		L_29 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_28, NULL);
		bool L_30;
		L_30 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_27, L_29, NULL);
		G_B16_0 = ((((int32_t)L_30) == ((int32_t)0))? 1 : 0);
		goto IL_00c6;
	}

IL_00c5:
	{
		G_B16_0 = 0;
	}

IL_00c6:
	{
		V_5 = (bool)G_B16_0;
		bool L_31 = V_5;
		V_8 = L_31;
		bool L_32 = V_8;
		if (!L_32)
		{
			goto IL_0134;
		}
	}
	{
		RuntimeObject* L_33 = __this->___m_RootSource;
		StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910 L_34 = ___1_srcValue;
		StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910 L_35 = L_34;
		RuntimeObject* L_36 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_35);
		V_10 = (bool)((((RuntimeObject*)(RuntimeObject*)L_33) == ((RuntimeObject*)(RuntimeObject*)L_36))? 1 : 0);
		bool L_37 = V_10;
		if (!L_37)
		{
			goto IL_00fc;
		}
	}
	{
		StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910* L_38 = ___0_dstValue;
		RuntimeObject* L_39 = __this->___m_RootDestination;
		*(StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910*)L_38 = ((*(StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910*)UnBox(L_39, il2cpp_rgctx_data(method->rgctx_data, 3))));
		goto IL_027c;
	}

IL_00fc:
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_40 = __this->___m_References;
		if (!L_40)
		{
			goto IL_0119;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_41 = __this->___m_References;
		StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910 L_42 = ___1_srcValue;
		StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910 L_43 = L_42;
		RuntimeObject* L_44 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_43);
		NullCheck(L_41);
		bool L_45;
		L_45 = Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849(L_41, L_44, (&V_9), Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		G_B22_0 = ((int32_t)(L_45));
		goto IL_011a;
	}

IL_0119:
	{
		G_B22_0 = 0;
	}

IL_011a:
	{
		V_11 = (bool)G_B22_0;
		bool L_46 = V_11;
		if (!L_46)
		{
			goto IL_0133;
		}
	}
	{
		StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910* L_47 = ___0_dstValue;
		RuntimeObject* L_48 = V_9;
		*(StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910*)L_47 = ((*(StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910*)UnBox(L_48, il2cpp_rgctx_data(method->rgctx_data, 3))));
		goto IL_027c;
	}

IL_0133:
	{
	}

IL_0134:
	{
		Type_t* L_49 = V_4;
		NullCheck(L_49);
		bool L_50;
		L_50 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_49, NULL);
		V_12 = L_50;
		bool L_51 = V_12;
		if (!L_51)
		{
			goto IL_01b6;
		}
	}
	{
		StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910 L_52 = ___1_srcValue;
		StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910 L_53 = L_52;
		RuntimeObject* L_54 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_53);
		V_14 = (RuntimeObject*)NULL;
		RuntimeObject* L_55 = V_14;
		if (L_55)
		{
			goto IL_0156;
		}
	}
	{
		G_B29_0 = 0;
		goto IL_015d;
	}

IL_0156:
	{
		RuntimeObject* L_56 = V_14;
		NullCheck((RuntimeObject*)L_56);
		int32_t L_57;
		L_57 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_56);
		G_B29_0 = L_57;
	}

IL_015d:
	{
		V_13 = G_B29_0;
	}
	{
		StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910* L_59 = ___0_dstValue;
		StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910 L_60 = (*(StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910*)L_59);
		StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910 L_61 = L_60;
		RuntimeObject* L_62 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_61);
		RuntimeArray* L_63 = ((RuntimeArray*)IsInstClass((RuntimeObject*)L_62, il2cpp_defaults.array_class));
		if (L_63)
		{
			G_B32_0 = L_63;
			goto IL_0183;
		}
		G_B31_0 = L_63;
	}
	{
		G_B33_0 = 1;
		goto IL_018f;
	}

IL_0183:
	{
		NullCheck(G_B32_0);
		int32_t L_64;
		L_64 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(G_B32_0, NULL);
		int32_t L_65 = V_13;
		G_B33_0 = ((((int32_t)((((int32_t)L_64) == ((int32_t)L_65))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_018f:
	{
		G_B35_0 = G_B33_0;
		goto IL_0192;
	}

IL_0192:
	{
		V_15 = (bool)G_B35_0;
		bool L_66 = V_15;
		if (!L_66)
		{
			goto IL_01b3;
		}
	}
	{
		StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910* L_67 = ___0_dstValue;
		Type_t* L_68 = V_4;
		NullCheck(L_68);
		Type_t* L_69;
		L_69 = VirtualFuncInvoker0< Type_t* >::Invoke(48, L_68);
		int32_t L_70 = V_13;
		RuntimeArray* L_71;
		L_71 = Array_CreateInstance_m13B202130951A03AF5F52470A19E17D3AD2A8983(L_69, L_70, NULL);
		*(StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910*)L_67 = ((*(StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910*)UnBox((RuntimeObject*)L_71, il2cpp_rgctx_data(method->rgctx_data, 3))));
	}

IL_01b3:
	{
		goto IL_01f5;
	}

IL_01b6:
	{
	}
	{
		StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910* L_73 = ___0_dstValue;
		Il2CppFakeBox<StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910> L_74(il2cpp_rgctx_data(method->rgctx_data, 3), L_73);
		Type_t* L_75;
		L_75 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((&L_74), NULL);
		Type_t* L_76 = V_4;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_77;
		L_77 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_75, L_76, NULL);
		G_B41_0 = ((int32_t)(L_77));
		goto IL_01da;
	}

IL_01da:
	{
		V_16 = (bool)G_B41_0;
		bool L_78 = V_16;
		if (!L_78)
		{
			goto IL_01f4;
		}
	}
	{
		StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910* L_79 = ___0_dstValue;
		Type_t* L_80 = V_4;
		RuntimeObject* L_81;
		L_81 = Activator_CreateInstance_mFF030428C64FDDFACC74DFAC97388A1C628BFBCF(L_80, NULL);
		*(StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910*)L_79 = ((*(StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910*)UnBox(L_81, il2cpp_rgctx_data(method->rgctx_data, 3))));
	}

IL_01f4:
	{
	}

IL_01f5:
	{
		bool L_82 = V_5;
		V_17 = L_82;
		bool L_83 = V_17;
		if (!L_83)
		{
			goto IL_0236;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_84 = __this->___m_References;
		V_18 = (bool)((((RuntimeObject*)(Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*)L_84) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_85 = V_18;
		if (!L_85)
		{
			goto IL_0218;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_86 = (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*)il2cpp_codegen_object_new(Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329(L_86, Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_RuntimeMethod_var);
		__this->___m_References = L_86;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_References), (void*)L_86);
	}

IL_0218:
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_87 = __this->___m_References;
		StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910 L_88 = ___1_srcValue;
		StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910 L_89 = L_88;
		RuntimeObject* L_90 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_89);
		StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910* L_91 = ___0_dstValue;
		StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910 L_92 = (*(StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910*)L_91);
		StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910 L_93 = L_92;
		RuntimeObject* L_94 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_93);
		NullCheck(L_87);
		Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1(L_87, L_90, L_94, Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
	}

IL_0236:
	{
	}

IL_0237:
	{
		RuntimeObject* L_95 = __this->___m_Stack;
		V_0 = L_95;
		StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910* L_96 = ___0_dstValue;
		StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910 L_97 = (*(StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910*)L_96);
		StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910 L_98 = L_97;
		RuntimeObject* L_99 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_98);
		__this->___m_Stack = L_99;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Stack), (void*)L_99);
		il2cpp_codegen_initobj((&V_20), sizeof(VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE));
		VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE L_100 = V_20;
		bool L_101;
		L_101 = PropertyContainer_TryAccept_TisStyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910_mCBBB30A4AD883F139CE44666FD3C8778CB07B16F((RuntimeObject*)__this, (&___1_srcValue), (&V_19), L_100, il2cpp_rgctx_method(method->rgctx_data, 7));
		StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910* L_102 = ___0_dstValue;
		RuntimeObject* L_103 = __this->___m_Stack;
		*(StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910*)L_102 = ((*(StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910*)UnBox(L_103, il2cpp_rgctx_data(method->rgctx_data, 3))));
		RuntimeObject* L_104 = V_0;
		__this->___m_Stack = L_104;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Stack), (void*)L_104);
	}

IL_027c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManagedObjectClone_CloneValue_TisStyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610_mD6014A050BB768E6183080E989F906A9E8F4E922_gshared (ManagedObjectClone_t6E754ED2624B829553A94A85A0D62AD51B58FCD6* __this, StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610* ___0_dstValue, StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610 ___1_srcValue, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	Type_t* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	RuntimeObject* V_9 = NULL;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t V_13 = 0;
	RuntimeObject* V_14 = NULL;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	int32_t V_19 = 0;
	VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE V_20;
	memset((&V_20), 0, sizeof(V_20));
	int32_t G_B5_0 = 0;
	int32_t G_B16_0 = 0;
	int32_t G_B22_0 = 0;
	int32_t G_B29_0 = 0;
	RuntimeArray* G_B32_0 = NULL;
	RuntimeArray* G_B31_0 = NULL;
	int32_t G_B33_0 = 0;
	int32_t G_B35_0 = 0;
	int32_t G_B41_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_0;
		L_0 = TypeTraits_1_get_IsContainer_m28DFE80F9F70333A9ECB62AE877098092F39A47B_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610* L_2 = ___0_dstValue;
		StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610 L_3 = ___1_srcValue;
		*(StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610*)L_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610*)L_2)->___m_Value))->___U3CtextureU3Ek__BackingField), (void*)NULL);
		goto IL_027c;
	}

IL_001a:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_4;
		L_4 = TypeTraits_1_get_CanBeNull_mFE2AA6D4EF3606873E12E0201D79FECF7E52BFF5_inline(il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610 L_5 = ___1_srcValue;
		G_B5_0 = ((int32_t)(false));
		goto IL_002d;
	}

IL_002c:
	{
		G_B5_0 = 0;
	}

IL_002d:
	{
		V_2 = (bool)G_B5_0;
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_003e;
		}
	}
	{
		StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610* L_7 = ___0_dstValue;
		il2cpp_codegen_initobj(L_7, sizeof(StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610));
		goto IL_027c;
	}

IL_003e:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_8;
		L_8 = TypeTraits_1_get_IsValueType_mC864FBD8DC0E7F1EA00C328D2FDEACC7CD9DF1A4_inline(il2cpp_rgctx_method(method->rgctx_data, 5));
		V_3 = L_8;
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_0055;
		}
	}
	{
		StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610* L_10 = ___0_dstValue;
		il2cpp_codegen_initobj(L_10, sizeof(StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610));
		goto IL_0237;
	}

IL_0055:
	{
		Il2CppFakeBox<StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610> L_11(il2cpp_rgctx_data(method->rgctx_data, 3), (&___1_srcValue));
		Type_t* L_12;
		L_12 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((&L_11), NULL);
		V_4 = L_12;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		Type_t* L_15 = V_4;
		NullCheck(L_14);
		bool L_16;
		L_16 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_14, L_15);
		V_6 = L_16;
		bool L_17 = V_6;
		if (!L_17)
		{
			goto IL_0089;
		}
	}
	{
		StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610* L_18 = ___0_dstValue;
		StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610 L_19 = ___1_srcValue;
		*(StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610*)L_18 = L_19;
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610*)L_18)->___m_Value))->___U3CtextureU3Ek__BackingField), (void*)NULL);
		goto IL_027c;
	}

IL_0089:
	{
		Type_t* L_20 = V_4;
		bool L_21;
		L_21 = TypeTraits_IsContainer_m46D04F3E3219371CC5F133E2CC54BCA46FD72505(L_20, NULL);
		V_7 = (bool)((((int32_t)L_21) == ((int32_t)0))? 1 : 0);
		bool L_22 = V_7;
		if (!L_22)
		{
			goto IL_00a6;
		}
	}
	{
		StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610* L_23 = ___0_dstValue;
		StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610 L_24 = ___1_srcValue;
		*(StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610*)L_23 = L_24;
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610*)L_23)->___m_Value))->___U3CtextureU3Ek__BackingField), (void*)NULL);
		goto IL_027c;
	}

IL_00a6:
	{
		Type_t* L_25 = V_4;
		NullCheck(L_25);
		bool L_26;
		L_26 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_25, NULL);
		if (L_26)
		{
			goto IL_00c5;
		}
	}
	{
		Type_t* L_27 = V_4;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_28 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.string_class->byval_arg) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_29;
		L_29 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_28, NULL);
		bool L_30;
		L_30 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_27, L_29, NULL);
		G_B16_0 = ((((int32_t)L_30) == ((int32_t)0))? 1 : 0);
		goto IL_00c6;
	}

IL_00c5:
	{
		G_B16_0 = 0;
	}

IL_00c6:
	{
		V_5 = (bool)G_B16_0;
		bool L_31 = V_5;
		V_8 = L_31;
		bool L_32 = V_8;
		if (!L_32)
		{
			goto IL_0134;
		}
	}
	{
		RuntimeObject* L_33 = __this->___m_RootSource;
		StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610 L_34 = ___1_srcValue;
		StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610 L_35 = L_34;
		RuntimeObject* L_36 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_35);
		V_10 = (bool)((((RuntimeObject*)(RuntimeObject*)L_33) == ((RuntimeObject*)(RuntimeObject*)L_36))? 1 : 0);
		bool L_37 = V_10;
		if (!L_37)
		{
			goto IL_00fc;
		}
	}
	{
		StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610* L_38 = ___0_dstValue;
		RuntimeObject* L_39 = __this->___m_RootDestination;
		*(StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610*)L_38 = ((*(StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610*)UnBox(L_39, il2cpp_rgctx_data(method->rgctx_data, 3))));
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610*)L_38)->___m_Value))->___U3CtextureU3Ek__BackingField), (void*)NULL);
		goto IL_027c;
	}

IL_00fc:
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_40 = __this->___m_References;
		if (!L_40)
		{
			goto IL_0119;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_41 = __this->___m_References;
		StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610 L_42 = ___1_srcValue;
		StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610 L_43 = L_42;
		RuntimeObject* L_44 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_43);
		NullCheck(L_41);
		bool L_45;
		L_45 = Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849(L_41, L_44, (&V_9), Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		G_B22_0 = ((int32_t)(L_45));
		goto IL_011a;
	}

IL_0119:
	{
		G_B22_0 = 0;
	}

IL_011a:
	{
		V_11 = (bool)G_B22_0;
		bool L_46 = V_11;
		if (!L_46)
		{
			goto IL_0133;
		}
	}
	{
		StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610* L_47 = ___0_dstValue;
		RuntimeObject* L_48 = V_9;
		*(StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610*)L_47 = ((*(StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610*)UnBox(L_48, il2cpp_rgctx_data(method->rgctx_data, 3))));
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610*)L_47)->___m_Value))->___U3CtextureU3Ek__BackingField), (void*)NULL);
		goto IL_027c;
	}

IL_0133:
	{
	}

IL_0134:
	{
		Type_t* L_49 = V_4;
		NullCheck(L_49);
		bool L_50;
		L_50 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_49, NULL);
		V_12 = L_50;
		bool L_51 = V_12;
		if (!L_51)
		{
			goto IL_01b6;
		}
	}
	{
		StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610 L_52 = ___1_srcValue;
		StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610 L_53 = L_52;
		RuntimeObject* L_54 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_53);
		V_14 = (RuntimeObject*)NULL;
		RuntimeObject* L_55 = V_14;
		if (L_55)
		{
			goto IL_0156;
		}
	}
	{
		G_B29_0 = 0;
		goto IL_015d;
	}

IL_0156:
	{
		RuntimeObject* L_56 = V_14;
		NullCheck((RuntimeObject*)L_56);
		int32_t L_57;
		L_57 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_56);
		G_B29_0 = L_57;
	}

IL_015d:
	{
		V_13 = G_B29_0;
	}
	{
		StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610* L_59 = ___0_dstValue;
		StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610 L_60 = (*(StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610*)L_59);
		StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610 L_61 = L_60;
		RuntimeObject* L_62 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_61);
		RuntimeArray* L_63 = ((RuntimeArray*)IsInstClass((RuntimeObject*)L_62, il2cpp_defaults.array_class));
		if (L_63)
		{
			G_B32_0 = L_63;
			goto IL_0183;
		}
		G_B31_0 = L_63;
	}
	{
		G_B33_0 = 1;
		goto IL_018f;
	}

IL_0183:
	{
		NullCheck(G_B32_0);
		int32_t L_64;
		L_64 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(G_B32_0, NULL);
		int32_t L_65 = V_13;
		G_B33_0 = ((((int32_t)((((int32_t)L_64) == ((int32_t)L_65))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_018f:
	{
		G_B35_0 = G_B33_0;
		goto IL_0192;
	}

IL_0192:
	{
		V_15 = (bool)G_B35_0;
		bool L_66 = V_15;
		if (!L_66)
		{
			goto IL_01b3;
		}
	}
	{
		StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610* L_67 = ___0_dstValue;
		Type_t* L_68 = V_4;
		NullCheck(L_68);
		Type_t* L_69;
		L_69 = VirtualFuncInvoker0< Type_t* >::Invoke(48, L_68);
		int32_t L_70 = V_13;
		RuntimeArray* L_71;
		L_71 = Array_CreateInstance_m13B202130951A03AF5F52470A19E17D3AD2A8983(L_69, L_70, NULL);
		*(StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610*)L_67 = ((*(StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610*)UnBox((RuntimeObject*)L_71, il2cpp_rgctx_data(method->rgctx_data, 3))));
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610*)L_67)->___m_Value))->___U3CtextureU3Ek__BackingField), (void*)NULL);
	}

IL_01b3:
	{
		goto IL_01f5;
	}

IL_01b6:
	{
	}
	{
		StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610* L_73 = ___0_dstValue;
		Il2CppFakeBox<StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610> L_74(il2cpp_rgctx_data(method->rgctx_data, 3), L_73);
		Type_t* L_75;
		L_75 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((&L_74), NULL);
		Type_t* L_76 = V_4;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_77;
		L_77 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_75, L_76, NULL);
		G_B41_0 = ((int32_t)(L_77));
		goto IL_01da;
	}

IL_01da:
	{
		V_16 = (bool)G_B41_0;
		bool L_78 = V_16;
		if (!L_78)
		{
			goto IL_01f4;
		}
	}
	{
		StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610* L_79 = ___0_dstValue;
		Type_t* L_80 = V_4;
		RuntimeObject* L_81;
		L_81 = Activator_CreateInstance_mFF030428C64FDDFACC74DFAC97388A1C628BFBCF(L_80, NULL);
		*(StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610*)L_79 = ((*(StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610*)UnBox(L_81, il2cpp_rgctx_data(method->rgctx_data, 3))));
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610*)L_79)->___m_Value))->___U3CtextureU3Ek__BackingField), (void*)NULL);
	}

IL_01f4:
	{
	}

IL_01f5:
	{
		bool L_82 = V_5;
		V_17 = L_82;
		bool L_83 = V_17;
		if (!L_83)
		{
			goto IL_0236;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_84 = __this->___m_References;
		V_18 = (bool)((((RuntimeObject*)(Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*)L_84) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_85 = V_18;
		if (!L_85)
		{
			goto IL_0218;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_86 = (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*)il2cpp_codegen_object_new(Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329(L_86, Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_RuntimeMethod_var);
		__this->___m_References = L_86;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_References), (void*)L_86);
	}

IL_0218:
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_87 = __this->___m_References;
		StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610 L_88 = ___1_srcValue;
		StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610 L_89 = L_88;
		RuntimeObject* L_90 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_89);
		StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610* L_91 = ___0_dstValue;
		StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610 L_92 = (*(StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610*)L_91);
		StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610 L_93 = L_92;
		RuntimeObject* L_94 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_93);
		NullCheck(L_87);
		Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1(L_87, L_90, L_94, Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
	}

IL_0236:
	{
	}

IL_0237:
	{
		RuntimeObject* L_95 = __this->___m_Stack;
		V_0 = L_95;
		StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610* L_96 = ___0_dstValue;
		StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610 L_97 = (*(StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610*)L_96);
		StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610 L_98 = L_97;
		RuntimeObject* L_99 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_98);
		__this->___m_Stack = L_99;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Stack), (void*)L_99);
		il2cpp_codegen_initobj((&V_20), sizeof(VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE));
		VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE L_100 = V_20;
		bool L_101;
		L_101 = PropertyContainer_TryAccept_TisStyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610_m2C02CF1F5A9538E557BF82F156DCE7A2995A5328((RuntimeObject*)__this, (&___1_srcValue), (&V_19), L_100, il2cpp_rgctx_method(method->rgctx_data, 7));
		StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610* L_102 = ___0_dstValue;
		RuntimeObject* L_103 = __this->___m_Stack;
		*(StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610*)L_102 = ((*(StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610*)UnBox(L_103, il2cpp_rgctx_data(method->rgctx_data, 3))));
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610*)L_102)->___m_Value))->___U3CtextureU3Ek__BackingField), (void*)NULL);
		RuntimeObject* L_104 = V_0;
		__this->___m_Stack = L_104;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Stack), (void*)L_104);
	}

IL_027c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManagedObjectClone_CloneValue_TisStyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841_m2ED1F5A2A329D869B6DA02669313EB9740641397_gshared (ManagedObjectClone_t6E754ED2624B829553A94A85A0D62AD51B58FCD6* __this, StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841* ___0_dstValue, StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841 ___1_srcValue, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	Type_t* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	RuntimeObject* V_9 = NULL;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t V_13 = 0;
	RuntimeObject* V_14 = NULL;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	int32_t V_19 = 0;
	VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE V_20;
	memset((&V_20), 0, sizeof(V_20));
	int32_t G_B5_0 = 0;
	int32_t G_B16_0 = 0;
	int32_t G_B22_0 = 0;
	int32_t G_B29_0 = 0;
	RuntimeArray* G_B32_0 = NULL;
	RuntimeArray* G_B31_0 = NULL;
	int32_t G_B33_0 = 0;
	int32_t G_B35_0 = 0;
	int32_t G_B41_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_0;
		L_0 = TypeTraits_1_get_IsContainer_m72D732937C93BD7AE8F529A0430A8C7906DCD0F3_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841* L_2 = ___0_dstValue;
		StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841 L_3 = ___1_srcValue;
		*(StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841*)L_2 = L_3;
		goto IL_027c;
	}

IL_001a:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_4;
		L_4 = TypeTraits_1_get_CanBeNull_m7A2EAA2C303B5864C0220CBD342C75E269A4AAA3_inline(il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841 L_5 = ___1_srcValue;
		G_B5_0 = ((int32_t)(false));
		goto IL_002d;
	}

IL_002c:
	{
		G_B5_0 = 0;
	}

IL_002d:
	{
		V_2 = (bool)G_B5_0;
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_003e;
		}
	}
	{
		StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841* L_7 = ___0_dstValue;
		il2cpp_codegen_initobj(L_7, sizeof(StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841));
		goto IL_027c;
	}

IL_003e:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_8;
		L_8 = TypeTraits_1_get_IsValueType_m071C355797B42D5CCB33F14B83229C2C0D11580A_inline(il2cpp_rgctx_method(method->rgctx_data, 5));
		V_3 = L_8;
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_0055;
		}
	}
	{
		StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841* L_10 = ___0_dstValue;
		il2cpp_codegen_initobj(L_10, sizeof(StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841));
		goto IL_0237;
	}

IL_0055:
	{
		Il2CppFakeBox<StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841> L_11(il2cpp_rgctx_data(method->rgctx_data, 3), (&___1_srcValue));
		Type_t* L_12;
		L_12 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((&L_11), NULL);
		V_4 = L_12;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		Type_t* L_15 = V_4;
		NullCheck(L_14);
		bool L_16;
		L_16 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_14, L_15);
		V_6 = L_16;
		bool L_17 = V_6;
		if (!L_17)
		{
			goto IL_0089;
		}
	}
	{
		StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841* L_18 = ___0_dstValue;
		StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841 L_19 = ___1_srcValue;
		*(StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841*)L_18 = L_19;
		goto IL_027c;
	}

IL_0089:
	{
		Type_t* L_20 = V_4;
		bool L_21;
		L_21 = TypeTraits_IsContainer_m46D04F3E3219371CC5F133E2CC54BCA46FD72505(L_20, NULL);
		V_7 = (bool)((((int32_t)L_21) == ((int32_t)0))? 1 : 0);
		bool L_22 = V_7;
		if (!L_22)
		{
			goto IL_00a6;
		}
	}
	{
		StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841* L_23 = ___0_dstValue;
		StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841 L_24 = ___1_srcValue;
		*(StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841*)L_23 = L_24;
		goto IL_027c;
	}

IL_00a6:
	{
		Type_t* L_25 = V_4;
		NullCheck(L_25);
		bool L_26;
		L_26 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_25, NULL);
		if (L_26)
		{
			goto IL_00c5;
		}
	}
	{
		Type_t* L_27 = V_4;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_28 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.string_class->byval_arg) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_29;
		L_29 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_28, NULL);
		bool L_30;
		L_30 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_27, L_29, NULL);
		G_B16_0 = ((((int32_t)L_30) == ((int32_t)0))? 1 : 0);
		goto IL_00c6;
	}

IL_00c5:
	{
		G_B16_0 = 0;
	}

IL_00c6:
	{
		V_5 = (bool)G_B16_0;
		bool L_31 = V_5;
		V_8 = L_31;
		bool L_32 = V_8;
		if (!L_32)
		{
			goto IL_0134;
		}
	}
	{
		RuntimeObject* L_33 = __this->___m_RootSource;
		StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841 L_34 = ___1_srcValue;
		StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841 L_35 = L_34;
		RuntimeObject* L_36 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_35);
		V_10 = (bool)((((RuntimeObject*)(RuntimeObject*)L_33) == ((RuntimeObject*)(RuntimeObject*)L_36))? 1 : 0);
		bool L_37 = V_10;
		if (!L_37)
		{
			goto IL_00fc;
		}
	}
	{
		StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841* L_38 = ___0_dstValue;
		RuntimeObject* L_39 = __this->___m_RootDestination;
		*(StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841*)L_38 = ((*(StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841*)UnBox(L_39, il2cpp_rgctx_data(method->rgctx_data, 3))));
		goto IL_027c;
	}

IL_00fc:
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_40 = __this->___m_References;
		if (!L_40)
		{
			goto IL_0119;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_41 = __this->___m_References;
		StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841 L_42 = ___1_srcValue;
		StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841 L_43 = L_42;
		RuntimeObject* L_44 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_43);
		NullCheck(L_41);
		bool L_45;
		L_45 = Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849(L_41, L_44, (&V_9), Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		G_B22_0 = ((int32_t)(L_45));
		goto IL_011a;
	}

IL_0119:
	{
		G_B22_0 = 0;
	}

IL_011a:
	{
		V_11 = (bool)G_B22_0;
		bool L_46 = V_11;
		if (!L_46)
		{
			goto IL_0133;
		}
	}
	{
		StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841* L_47 = ___0_dstValue;
		RuntimeObject* L_48 = V_9;
		*(StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841*)L_47 = ((*(StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841*)UnBox(L_48, il2cpp_rgctx_data(method->rgctx_data, 3))));
		goto IL_027c;
	}

IL_0133:
	{
	}

IL_0134:
	{
		Type_t* L_49 = V_4;
		NullCheck(L_49);
		bool L_50;
		L_50 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_49, NULL);
		V_12 = L_50;
		bool L_51 = V_12;
		if (!L_51)
		{
			goto IL_01b6;
		}
	}
	{
		StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841 L_52 = ___1_srcValue;
		StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841 L_53 = L_52;
		RuntimeObject* L_54 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_53);
		V_14 = (RuntimeObject*)NULL;
		RuntimeObject* L_55 = V_14;
		if (L_55)
		{
			goto IL_0156;
		}
	}
	{
		G_B29_0 = 0;
		goto IL_015d;
	}

IL_0156:
	{
		RuntimeObject* L_56 = V_14;
		NullCheck((RuntimeObject*)L_56);
		int32_t L_57;
		L_57 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_56);
		G_B29_0 = L_57;
	}

IL_015d:
	{
		V_13 = G_B29_0;
	}
	{
		StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841* L_59 = ___0_dstValue;
		StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841 L_60 = (*(StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841*)L_59);
		StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841 L_61 = L_60;
		RuntimeObject* L_62 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_61);
		RuntimeArray* L_63 = ((RuntimeArray*)IsInstClass((RuntimeObject*)L_62, il2cpp_defaults.array_class));
		if (L_63)
		{
			G_B32_0 = L_63;
			goto IL_0183;
		}
		G_B31_0 = L_63;
	}
	{
		G_B33_0 = 1;
		goto IL_018f;
	}

IL_0183:
	{
		NullCheck(G_B32_0);
		int32_t L_64;
		L_64 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(G_B32_0, NULL);
		int32_t L_65 = V_13;
		G_B33_0 = ((((int32_t)((((int32_t)L_64) == ((int32_t)L_65))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_018f:
	{
		G_B35_0 = G_B33_0;
		goto IL_0192;
	}

IL_0192:
	{
		V_15 = (bool)G_B35_0;
		bool L_66 = V_15;
		if (!L_66)
		{
			goto IL_01b3;
		}
	}
	{
		StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841* L_67 = ___0_dstValue;
		Type_t* L_68 = V_4;
		NullCheck(L_68);
		Type_t* L_69;
		L_69 = VirtualFuncInvoker0< Type_t* >::Invoke(48, L_68);
		int32_t L_70 = V_13;
		RuntimeArray* L_71;
		L_71 = Array_CreateInstance_m13B202130951A03AF5F52470A19E17D3AD2A8983(L_69, L_70, NULL);
		*(StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841*)L_67 = ((*(StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841*)UnBox((RuntimeObject*)L_71, il2cpp_rgctx_data(method->rgctx_data, 3))));
	}

IL_01b3:
	{
		goto IL_01f5;
	}

IL_01b6:
	{
	}
	{
		StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841* L_73 = ___0_dstValue;
		Il2CppFakeBox<StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841> L_74(il2cpp_rgctx_data(method->rgctx_data, 3), L_73);
		Type_t* L_75;
		L_75 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((&L_74), NULL);
		Type_t* L_76 = V_4;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_77;
		L_77 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_75, L_76, NULL);
		G_B41_0 = ((int32_t)(L_77));
		goto IL_01da;
	}

IL_01da:
	{
		V_16 = (bool)G_B41_0;
		bool L_78 = V_16;
		if (!L_78)
		{
			goto IL_01f4;
		}
	}
	{
		StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841* L_79 = ___0_dstValue;
		Type_t* L_80 = V_4;
		RuntimeObject* L_81;
		L_81 = Activator_CreateInstance_mFF030428C64FDDFACC74DFAC97388A1C628BFBCF(L_80, NULL);
		*(StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841*)L_79 = ((*(StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841*)UnBox(L_81, il2cpp_rgctx_data(method->rgctx_data, 3))));
	}

IL_01f4:
	{
	}

IL_01f5:
	{
		bool L_82 = V_5;
		V_17 = L_82;
		bool L_83 = V_17;
		if (!L_83)
		{
			goto IL_0236;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_84 = __this->___m_References;
		V_18 = (bool)((((RuntimeObject*)(Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*)L_84) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_85 = V_18;
		if (!L_85)
		{
			goto IL_0218;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_86 = (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*)il2cpp_codegen_object_new(Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329(L_86, Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_RuntimeMethod_var);
		__this->___m_References = L_86;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_References), (void*)L_86);
	}

IL_0218:
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_87 = __this->___m_References;
		StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841 L_88 = ___1_srcValue;
		StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841 L_89 = L_88;
		RuntimeObject* L_90 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_89);
		StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841* L_91 = ___0_dstValue;
		StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841 L_92 = (*(StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841*)L_91);
		StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841 L_93 = L_92;
		RuntimeObject* L_94 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_93);
		NullCheck(L_87);
		Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1(L_87, L_90, L_94, Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
	}

IL_0236:
	{
	}

IL_0237:
	{
		RuntimeObject* L_95 = __this->___m_Stack;
		V_0 = L_95;
		StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841* L_96 = ___0_dstValue;
		StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841 L_97 = (*(StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841*)L_96);
		StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841 L_98 = L_97;
		RuntimeObject* L_99 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_98);
		__this->___m_Stack = L_99;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Stack), (void*)L_99);
		il2cpp_codegen_initobj((&V_20), sizeof(VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE));
		VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE L_100 = V_20;
		bool L_101;
		L_101 = PropertyContainer_TryAccept_TisStyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841_mC1145110F1C81F318995CEEFB20B682D49804A7F((RuntimeObject*)__this, (&___1_srcValue), (&V_19), L_100, il2cpp_rgctx_method(method->rgctx_data, 7));
		StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841* L_102 = ___0_dstValue;
		RuntimeObject* L_103 = __this->___m_Stack;
		*(StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841*)L_102 = ((*(StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841*)UnBox(L_103, il2cpp_rgctx_data(method->rgctx_data, 3))));
		RuntimeObject* L_104 = V_0;
		__this->___m_Stack = L_104;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Stack), (void*)L_104);
	}

IL_027c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManagedObjectClone_CloneValue_TisStyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C_m6024479D15E5F148F831C7BBC1C668487893C347_gshared (ManagedObjectClone_t6E754ED2624B829553A94A85A0D62AD51B58FCD6* __this, StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C* ___0_dstValue, StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C ___1_srcValue, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	Type_t* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	RuntimeObject* V_9 = NULL;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t V_13 = 0;
	RuntimeObject* V_14 = NULL;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	int32_t V_19 = 0;
	VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE V_20;
	memset((&V_20), 0, sizeof(V_20));
	int32_t G_B5_0 = 0;
	int32_t G_B16_0 = 0;
	int32_t G_B22_0 = 0;
	int32_t G_B29_0 = 0;
	RuntimeArray* G_B32_0 = NULL;
	RuntimeArray* G_B31_0 = NULL;
	int32_t G_B33_0 = 0;
	int32_t G_B35_0 = 0;
	int32_t G_B41_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_0;
		L_0 = TypeTraits_1_get_IsContainer_mC27F117CAABDF35DCE60B44ED90CA5E0C316E87B_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C* L_2 = ___0_dstValue;
		StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C L_3 = ___1_srcValue;
		*(StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C*)L_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)&(((StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C*)L_2)->___m_Value), (void*)NULL);
		goto IL_027c;
	}

IL_001a:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_4;
		L_4 = TypeTraits_1_get_CanBeNull_m171E276B62877B02E9840B204D3ED28130D8DFCD_inline(il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C L_5 = ___1_srcValue;
		G_B5_0 = ((int32_t)(false));
		goto IL_002d;
	}

IL_002c:
	{
		G_B5_0 = 0;
	}

IL_002d:
	{
		V_2 = (bool)G_B5_0;
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_003e;
		}
	}
	{
		StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C* L_7 = ___0_dstValue;
		il2cpp_codegen_initobj(L_7, sizeof(StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C));
		goto IL_027c;
	}

IL_003e:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_8;
		L_8 = TypeTraits_1_get_IsValueType_m9BCC29E05C59AD59DAE817B570638E3899BD6523_inline(il2cpp_rgctx_method(method->rgctx_data, 5));
		V_3 = L_8;
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_0055;
		}
	}
	{
		StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C* L_10 = ___0_dstValue;
		il2cpp_codegen_initobj(L_10, sizeof(StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C));
		goto IL_0237;
	}

IL_0055:
	{
		Il2CppFakeBox<StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C> L_11(il2cpp_rgctx_data(method->rgctx_data, 3), (&___1_srcValue));
		Type_t* L_12;
		L_12 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((&L_11), NULL);
		V_4 = L_12;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		Type_t* L_15 = V_4;
		NullCheck(L_14);
		bool L_16;
		L_16 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_14, L_15);
		V_6 = L_16;
		bool L_17 = V_6;
		if (!L_17)
		{
			goto IL_0089;
		}
	}
	{
		StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C* L_18 = ___0_dstValue;
		StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C L_19 = ___1_srcValue;
		*(StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C*)L_18 = L_19;
		Il2CppCodeGenWriteBarrier((void**)&(((StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C*)L_18)->___m_Value), (void*)NULL);
		goto IL_027c;
	}

IL_0089:
	{
		Type_t* L_20 = V_4;
		bool L_21;
		L_21 = TypeTraits_IsContainer_m46D04F3E3219371CC5F133E2CC54BCA46FD72505(L_20, NULL);
		V_7 = (bool)((((int32_t)L_21) == ((int32_t)0))? 1 : 0);
		bool L_22 = V_7;
		if (!L_22)
		{
			goto IL_00a6;
		}
	}
	{
		StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C* L_23 = ___0_dstValue;
		StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C L_24 = ___1_srcValue;
		*(StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C*)L_23 = L_24;
		Il2CppCodeGenWriteBarrier((void**)&(((StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C*)L_23)->___m_Value), (void*)NULL);
		goto IL_027c;
	}

IL_00a6:
	{
		Type_t* L_25 = V_4;
		NullCheck(L_25);
		bool L_26;
		L_26 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_25, NULL);
		if (L_26)
		{
			goto IL_00c5;
		}
	}
	{
		Type_t* L_27 = V_4;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_28 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.string_class->byval_arg) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_29;
		L_29 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_28, NULL);
		bool L_30;
		L_30 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_27, L_29, NULL);
		G_B16_0 = ((((int32_t)L_30) == ((int32_t)0))? 1 : 0);
		goto IL_00c6;
	}

IL_00c5:
	{
		G_B16_0 = 0;
	}

IL_00c6:
	{
		V_5 = (bool)G_B16_0;
		bool L_31 = V_5;
		V_8 = L_31;
		bool L_32 = V_8;
		if (!L_32)
		{
			goto IL_0134;
		}
	}
	{
		RuntimeObject* L_33 = __this->___m_RootSource;
		StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C L_34 = ___1_srcValue;
		StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C L_35 = L_34;
		RuntimeObject* L_36 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_35);
		V_10 = (bool)((((RuntimeObject*)(RuntimeObject*)L_33) == ((RuntimeObject*)(RuntimeObject*)L_36))? 1 : 0);
		bool L_37 = V_10;
		if (!L_37)
		{
			goto IL_00fc;
		}
	}
	{
		StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C* L_38 = ___0_dstValue;
		RuntimeObject* L_39 = __this->___m_RootDestination;
		*(StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C*)L_38 = ((*(StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C*)UnBox(L_39, il2cpp_rgctx_data(method->rgctx_data, 3))));
		Il2CppCodeGenWriteBarrier((void**)&(((StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C*)L_38)->___m_Value), (void*)NULL);
		goto IL_027c;
	}

IL_00fc:
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_40 = __this->___m_References;
		if (!L_40)
		{
			goto IL_0119;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_41 = __this->___m_References;
		StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C L_42 = ___1_srcValue;
		StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C L_43 = L_42;
		RuntimeObject* L_44 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_43);
		NullCheck(L_41);
		bool L_45;
		L_45 = Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849(L_41, L_44, (&V_9), Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		G_B22_0 = ((int32_t)(L_45));
		goto IL_011a;
	}

IL_0119:
	{
		G_B22_0 = 0;
	}

IL_011a:
	{
		V_11 = (bool)G_B22_0;
		bool L_46 = V_11;
		if (!L_46)
		{
			goto IL_0133;
		}
	}
	{
		StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C* L_47 = ___0_dstValue;
		RuntimeObject* L_48 = V_9;
		*(StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C*)L_47 = ((*(StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C*)UnBox(L_48, il2cpp_rgctx_data(method->rgctx_data, 3))));
		Il2CppCodeGenWriteBarrier((void**)&(((StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C*)L_47)->___m_Value), (void*)NULL);
		goto IL_027c;
	}

IL_0133:
	{
	}

IL_0134:
	{
		Type_t* L_49 = V_4;
		NullCheck(L_49);
		bool L_50;
		L_50 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_49, NULL);
		V_12 = L_50;
		bool L_51 = V_12;
		if (!L_51)
		{
			goto IL_01b6;
		}
	}
	{
		StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C L_52 = ___1_srcValue;
		StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C L_53 = L_52;
		RuntimeObject* L_54 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_53);
		V_14 = (RuntimeObject*)NULL;
		RuntimeObject* L_55 = V_14;
		if (L_55)
		{
			goto IL_0156;
		}
	}
	{
		G_B29_0 = 0;
		goto IL_015d;
	}

IL_0156:
	{
		RuntimeObject* L_56 = V_14;
		NullCheck((RuntimeObject*)L_56);
		int32_t L_57;
		L_57 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_56);
		G_B29_0 = L_57;
	}

IL_015d:
	{
		V_13 = G_B29_0;
	}
	{
		StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C* L_59 = ___0_dstValue;
		StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C L_60 = (*(StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C*)L_59);
		StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C L_61 = L_60;
		RuntimeObject* L_62 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_61);
		RuntimeArray* L_63 = ((RuntimeArray*)IsInstClass((RuntimeObject*)L_62, il2cpp_defaults.array_class));
		if (L_63)
		{
			G_B32_0 = L_63;
			goto IL_0183;
		}
		G_B31_0 = L_63;
	}
	{
		G_B33_0 = 1;
		goto IL_018f;
	}

IL_0183:
	{
		NullCheck(G_B32_0);
		int32_t L_64;
		L_64 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(G_B32_0, NULL);
		int32_t L_65 = V_13;
		G_B33_0 = ((((int32_t)((((int32_t)L_64) == ((int32_t)L_65))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_018f:
	{
		G_B35_0 = G_B33_0;
		goto IL_0192;
	}

IL_0192:
	{
		V_15 = (bool)G_B35_0;
		bool L_66 = V_15;
		if (!L_66)
		{
			goto IL_01b3;
		}
	}
	{
		StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C* L_67 = ___0_dstValue;
		Type_t* L_68 = V_4;
		NullCheck(L_68);
		Type_t* L_69;
		L_69 = VirtualFuncInvoker0< Type_t* >::Invoke(48, L_68);
		int32_t L_70 = V_13;
		RuntimeArray* L_71;
		L_71 = Array_CreateInstance_m13B202130951A03AF5F52470A19E17D3AD2A8983(L_69, L_70, NULL);
		*(StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C*)L_67 = ((*(StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C*)UnBox((RuntimeObject*)L_71, il2cpp_rgctx_data(method->rgctx_data, 3))));
		Il2CppCodeGenWriteBarrier((void**)&(((StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C*)L_67)->___m_Value), (void*)NULL);
	}

IL_01b3:
	{
		goto IL_01f5;
	}

IL_01b6:
	{
	}
	{
		StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C* L_73 = ___0_dstValue;
		Il2CppFakeBox<StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C> L_74(il2cpp_rgctx_data(method->rgctx_data, 3), L_73);
		Type_t* L_75;
		L_75 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((&L_74), NULL);
		Type_t* L_76 = V_4;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_77;
		L_77 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_75, L_76, NULL);
		G_B41_0 = ((int32_t)(L_77));
		goto IL_01da;
	}

IL_01da:
	{
		V_16 = (bool)G_B41_0;
		bool L_78 = V_16;
		if (!L_78)
		{
			goto IL_01f4;
		}
	}
	{
		StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C* L_79 = ___0_dstValue;
		Type_t* L_80 = V_4;
		RuntimeObject* L_81;
		L_81 = Activator_CreateInstance_mFF030428C64FDDFACC74DFAC97388A1C628BFBCF(L_80, NULL);
		*(StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C*)L_79 = ((*(StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C*)UnBox(L_81, il2cpp_rgctx_data(method->rgctx_data, 3))));
		Il2CppCodeGenWriteBarrier((void**)&(((StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C*)L_79)->___m_Value), (void*)NULL);
	}

IL_01f4:
	{
	}

IL_01f5:
	{
		bool L_82 = V_5;
		V_17 = L_82;
		bool L_83 = V_17;
		if (!L_83)
		{
			goto IL_0236;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_84 = __this->___m_References;
		V_18 = (bool)((((RuntimeObject*)(Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*)L_84) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_85 = V_18;
		if (!L_85)
		{
			goto IL_0218;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_86 = (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*)il2cpp_codegen_object_new(Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329(L_86, Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_RuntimeMethod_var);
		__this->___m_References = L_86;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_References), (void*)L_86);
	}

IL_0218:
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_87 = __this->___m_References;
		StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C L_88 = ___1_srcValue;
		StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C L_89 = L_88;
		RuntimeObject* L_90 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_89);
		StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C* L_91 = ___0_dstValue;
		StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C L_92 = (*(StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C*)L_91);
		StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C L_93 = L_92;
		RuntimeObject* L_94 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_93);
		NullCheck(L_87);
		Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1(L_87, L_90, L_94, Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
	}

IL_0236:
	{
	}

IL_0237:
	{
		RuntimeObject* L_95 = __this->___m_Stack;
		V_0 = L_95;
		StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C* L_96 = ___0_dstValue;
		StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C L_97 = (*(StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C*)L_96);
		StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C L_98 = L_97;
		RuntimeObject* L_99 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_98);
		__this->___m_Stack = L_99;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Stack), (void*)L_99);
		il2cpp_codegen_initobj((&V_20), sizeof(VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE));
		VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE L_100 = V_20;
		bool L_101;
		L_101 = PropertyContainer_TryAccept_TisStyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C_m3B228336F8CC4BED768530FB6DCDC469BC79AB2B((RuntimeObject*)__this, (&___1_srcValue), (&V_19), L_100, il2cpp_rgctx_method(method->rgctx_data, 7));
		StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C* L_102 = ___0_dstValue;
		RuntimeObject* L_103 = __this->___m_Stack;
		*(StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C*)L_102 = ((*(StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C*)UnBox(L_103, il2cpp_rgctx_data(method->rgctx_data, 3))));
		Il2CppCodeGenWriteBarrier((void**)&(((StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C*)L_102)->___m_Value), (void*)NULL);
		RuntimeObject* L_104 = V_0;
		__this->___m_Stack = L_104;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Stack), (void*)L_104);
	}

IL_027c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManagedObjectClone_CloneValue_TisStyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4_mBCD273E33B26652566C077E5FCFDD03803401961_gshared (ManagedObjectClone_t6E754ED2624B829553A94A85A0D62AD51B58FCD6* __this, StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4* ___0_dstValue, StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4 ___1_srcValue, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	Type_t* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	RuntimeObject* V_9 = NULL;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t V_13 = 0;
	RuntimeObject* V_14 = NULL;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	int32_t V_19 = 0;
	VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE V_20;
	memset((&V_20), 0, sizeof(V_20));
	int32_t G_B5_0 = 0;
	int32_t G_B16_0 = 0;
	int32_t G_B22_0 = 0;
	int32_t G_B29_0 = 0;
	RuntimeArray* G_B32_0 = NULL;
	RuntimeArray* G_B31_0 = NULL;
	int32_t G_B33_0 = 0;
	int32_t G_B35_0 = 0;
	int32_t G_B41_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_0;
		L_0 = TypeTraits_1_get_IsContainer_m2503D4240E029F16D5C98BD8DC5B732B8A02C98E_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4* L_2 = ___0_dstValue;
		StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4 L_3 = ___1_srcValue;
		*(StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4*)L_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4*)L_2)->___m_Value))->___m_Font), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4*)L_2)->___m_Value))->___m_FontAsset), (void*)NULL);
		#endif
		goto IL_027c;
	}

IL_001a:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_4;
		L_4 = TypeTraits_1_get_CanBeNull_m9812594FA23CC694FBDE4CA32625D3FBA1177A29_inline(il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4 L_5 = ___1_srcValue;
		G_B5_0 = ((int32_t)(false));
		goto IL_002d;
	}

IL_002c:
	{
		G_B5_0 = 0;
	}

IL_002d:
	{
		V_2 = (bool)G_B5_0;
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_003e;
		}
	}
	{
		StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4* L_7 = ___0_dstValue;
		il2cpp_codegen_initobj(L_7, sizeof(StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4));
		goto IL_027c;
	}

IL_003e:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_8;
		L_8 = TypeTraits_1_get_IsValueType_m0F180F5B26765420CF3E3E12F04CA3225153AFCA_inline(il2cpp_rgctx_method(method->rgctx_data, 5));
		V_3 = L_8;
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_0055;
		}
	}
	{
		StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4* L_10 = ___0_dstValue;
		il2cpp_codegen_initobj(L_10, sizeof(StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4));
		goto IL_0237;
	}

IL_0055:
	{
		Il2CppFakeBox<StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4> L_11(il2cpp_rgctx_data(method->rgctx_data, 3), (&___1_srcValue));
		Type_t* L_12;
		L_12 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((&L_11), NULL);
		V_4 = L_12;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		Type_t* L_15 = V_4;
		NullCheck(L_14);
		bool L_16;
		L_16 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_14, L_15);
		V_6 = L_16;
		bool L_17 = V_6;
		if (!L_17)
		{
			goto IL_0089;
		}
	}
	{
		StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4* L_18 = ___0_dstValue;
		StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4 L_19 = ___1_srcValue;
		*(StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4*)L_18 = L_19;
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4*)L_18)->___m_Value))->___m_Font), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4*)L_18)->___m_Value))->___m_FontAsset), (void*)NULL);
		#endif
		goto IL_027c;
	}

IL_0089:
	{
		Type_t* L_20 = V_4;
		bool L_21;
		L_21 = TypeTraits_IsContainer_m46D04F3E3219371CC5F133E2CC54BCA46FD72505(L_20, NULL);
		V_7 = (bool)((((int32_t)L_21) == ((int32_t)0))? 1 : 0);
		bool L_22 = V_7;
		if (!L_22)
		{
			goto IL_00a6;
		}
	}
	{
		StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4* L_23 = ___0_dstValue;
		StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4 L_24 = ___1_srcValue;
		*(StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4*)L_23 = L_24;
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4*)L_23)->___m_Value))->___m_Font), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4*)L_23)->___m_Value))->___m_FontAsset), (void*)NULL);
		#endif
		goto IL_027c;
	}

IL_00a6:
	{
		Type_t* L_25 = V_4;
		NullCheck(L_25);
		bool L_26;
		L_26 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_25, NULL);
		if (L_26)
		{
			goto IL_00c5;
		}
	}
	{
		Type_t* L_27 = V_4;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_28 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.string_class->byval_arg) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_29;
		L_29 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_28, NULL);
		bool L_30;
		L_30 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_27, L_29, NULL);
		G_B16_0 = ((((int32_t)L_30) == ((int32_t)0))? 1 : 0);
		goto IL_00c6;
	}

IL_00c5:
	{
		G_B16_0 = 0;
	}

IL_00c6:
	{
		V_5 = (bool)G_B16_0;
		bool L_31 = V_5;
		V_8 = L_31;
		bool L_32 = V_8;
		if (!L_32)
		{
			goto IL_0134;
		}
	}
	{
		RuntimeObject* L_33 = __this->___m_RootSource;
		StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4 L_34 = ___1_srcValue;
		StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4 L_35 = L_34;
		RuntimeObject* L_36 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_35);
		V_10 = (bool)((((RuntimeObject*)(RuntimeObject*)L_33) == ((RuntimeObject*)(RuntimeObject*)L_36))? 1 : 0);
		bool L_37 = V_10;
		if (!L_37)
		{
			goto IL_00fc;
		}
	}
	{
		StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4* L_38 = ___0_dstValue;
		RuntimeObject* L_39 = __this->___m_RootDestination;
		*(StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4*)L_38 = ((*(StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4*)UnBox(L_39, il2cpp_rgctx_data(method->rgctx_data, 3))));
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4*)L_38)->___m_Value))->___m_Font), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4*)L_38)->___m_Value))->___m_FontAsset), (void*)NULL);
		#endif
		goto IL_027c;
	}

IL_00fc:
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_40 = __this->___m_References;
		if (!L_40)
		{
			goto IL_0119;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_41 = __this->___m_References;
		StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4 L_42 = ___1_srcValue;
		StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4 L_43 = L_42;
		RuntimeObject* L_44 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_43);
		NullCheck(L_41);
		bool L_45;
		L_45 = Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849(L_41, L_44, (&V_9), Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		G_B22_0 = ((int32_t)(L_45));
		goto IL_011a;
	}

IL_0119:
	{
		G_B22_0 = 0;
	}

IL_011a:
	{
		V_11 = (bool)G_B22_0;
		bool L_46 = V_11;
		if (!L_46)
		{
			goto IL_0133;
		}
	}
	{
		StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4* L_47 = ___0_dstValue;
		RuntimeObject* L_48 = V_9;
		*(StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4*)L_47 = ((*(StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4*)UnBox(L_48, il2cpp_rgctx_data(method->rgctx_data, 3))));
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4*)L_47)->___m_Value))->___m_Font), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4*)L_47)->___m_Value))->___m_FontAsset), (void*)NULL);
		#endif
		goto IL_027c;
	}

IL_0133:
	{
	}

IL_0134:
	{
		Type_t* L_49 = V_4;
		NullCheck(L_49);
		bool L_50;
		L_50 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_49, NULL);
		V_12 = L_50;
		bool L_51 = V_12;
		if (!L_51)
		{
			goto IL_01b6;
		}
	}
	{
		StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4 L_52 = ___1_srcValue;
		StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4 L_53 = L_52;
		RuntimeObject* L_54 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_53);
		V_14 = (RuntimeObject*)NULL;
		RuntimeObject* L_55 = V_14;
		if (L_55)
		{
			goto IL_0156;
		}
	}
	{
		G_B29_0 = 0;
		goto IL_015d;
	}

IL_0156:
	{
		RuntimeObject* L_56 = V_14;
		NullCheck((RuntimeObject*)L_56);
		int32_t L_57;
		L_57 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_56);
		G_B29_0 = L_57;
	}

IL_015d:
	{
		V_13 = G_B29_0;
	}
	{
		StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4* L_59 = ___0_dstValue;
		StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4 L_60 = (*(StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4*)L_59);
		StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4 L_61 = L_60;
		RuntimeObject* L_62 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_61);
		RuntimeArray* L_63 = ((RuntimeArray*)IsInstClass((RuntimeObject*)L_62, il2cpp_defaults.array_class));
		if (L_63)
		{
			G_B32_0 = L_63;
			goto IL_0183;
		}
		G_B31_0 = L_63;
	}
	{
		G_B33_0 = 1;
		goto IL_018f;
	}

IL_0183:
	{
		NullCheck(G_B32_0);
		int32_t L_64;
		L_64 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(G_B32_0, NULL);
		int32_t L_65 = V_13;
		G_B33_0 = ((((int32_t)((((int32_t)L_64) == ((int32_t)L_65))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_018f:
	{
		G_B35_0 = G_B33_0;
		goto IL_0192;
	}

IL_0192:
	{
		V_15 = (bool)G_B35_0;
		bool L_66 = V_15;
		if (!L_66)
		{
			goto IL_01b3;
		}
	}
	{
		StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4* L_67 = ___0_dstValue;
		Type_t* L_68 = V_4;
		NullCheck(L_68);
		Type_t* L_69;
		L_69 = VirtualFuncInvoker0< Type_t* >::Invoke(48, L_68);
		int32_t L_70 = V_13;
		RuntimeArray* L_71;
		L_71 = Array_CreateInstance_m13B202130951A03AF5F52470A19E17D3AD2A8983(L_69, L_70, NULL);
		*(StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4*)L_67 = ((*(StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4*)UnBox((RuntimeObject*)L_71, il2cpp_rgctx_data(method->rgctx_data, 3))));
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4*)L_67)->___m_Value))->___m_Font), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4*)L_67)->___m_Value))->___m_FontAsset), (void*)NULL);
		#endif
	}

IL_01b3:
	{
		goto IL_01f5;
	}

IL_01b6:
	{
	}
	{
		StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4* L_73 = ___0_dstValue;
		Il2CppFakeBox<StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4> L_74(il2cpp_rgctx_data(method->rgctx_data, 3), L_73);
		Type_t* L_75;
		L_75 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((&L_74), NULL);
		Type_t* L_76 = V_4;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_77;
		L_77 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_75, L_76, NULL);
		G_B41_0 = ((int32_t)(L_77));
		goto IL_01da;
	}

IL_01da:
	{
		V_16 = (bool)G_B41_0;
		bool L_78 = V_16;
		if (!L_78)
		{
			goto IL_01f4;
		}
	}
	{
		StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4* L_79 = ___0_dstValue;
		Type_t* L_80 = V_4;
		RuntimeObject* L_81;
		L_81 = Activator_CreateInstance_mFF030428C64FDDFACC74DFAC97388A1C628BFBCF(L_80, NULL);
		*(StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4*)L_79 = ((*(StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4*)UnBox(L_81, il2cpp_rgctx_data(method->rgctx_data, 3))));
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4*)L_79)->___m_Value))->___m_Font), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4*)L_79)->___m_Value))->___m_FontAsset), (void*)NULL);
		#endif
	}

IL_01f4:
	{
	}

IL_01f5:
	{
		bool L_82 = V_5;
		V_17 = L_82;
		bool L_83 = V_17;
		if (!L_83)
		{
			goto IL_0236;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_84 = __this->___m_References;
		V_18 = (bool)((((RuntimeObject*)(Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*)L_84) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_85 = V_18;
		if (!L_85)
		{
			goto IL_0218;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_86 = (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*)il2cpp_codegen_object_new(Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329(L_86, Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_RuntimeMethod_var);
		__this->___m_References = L_86;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_References), (void*)L_86);
	}

IL_0218:
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_87 = __this->___m_References;
		StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4 L_88 = ___1_srcValue;
		StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4 L_89 = L_88;
		RuntimeObject* L_90 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_89);
		StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4* L_91 = ___0_dstValue;
		StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4 L_92 = (*(StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4*)L_91);
		StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4 L_93 = L_92;
		RuntimeObject* L_94 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_93);
		NullCheck(L_87);
		Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1(L_87, L_90, L_94, Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
	}

IL_0236:
	{
	}

IL_0237:
	{
		RuntimeObject* L_95 = __this->___m_Stack;
		V_0 = L_95;
		StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4* L_96 = ___0_dstValue;
		StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4 L_97 = (*(StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4*)L_96);
		StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4 L_98 = L_97;
		RuntimeObject* L_99 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_98);
		__this->___m_Stack = L_99;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Stack), (void*)L_99);
		il2cpp_codegen_initobj((&V_20), sizeof(VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE));
		VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE L_100 = V_20;
		bool L_101;
		L_101 = PropertyContainer_TryAccept_TisStyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4_m1440A46C83BF7263E40864A952DEC63AF982643D((RuntimeObject*)__this, (&___1_srcValue), (&V_19), L_100, il2cpp_rgctx_method(method->rgctx_data, 7));
		StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4* L_102 = ___0_dstValue;
		RuntimeObject* L_103 = __this->___m_Stack;
		*(StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4*)L_102 = ((*(StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4*)UnBox(L_103, il2cpp_rgctx_data(method->rgctx_data, 3))));
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4*)L_102)->___m_Value))->___m_Font), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4*)L_102)->___m_Value))->___m_FontAsset), (void*)NULL);
		#endif
		RuntimeObject* L_104 = V_0;
		__this->___m_Stack = L_104;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Stack), (void*)L_104);
	}

IL_027c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManagedObjectClone_CloneValue_TisStyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D_mD024C33B171AEA347811E743E862D75C04AE44BE_gshared (ManagedObjectClone_t6E754ED2624B829553A94A85A0D62AD51B58FCD6* __this, StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D* ___0_dstValue, StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D ___1_srcValue, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	Type_t* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	RuntimeObject* V_9 = NULL;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t V_13 = 0;
	RuntimeObject* V_14 = NULL;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	int32_t V_19 = 0;
	VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE V_20;
	memset((&V_20), 0, sizeof(V_20));
	int32_t G_B5_0 = 0;
	int32_t G_B16_0 = 0;
	int32_t G_B22_0 = 0;
	int32_t G_B29_0 = 0;
	RuntimeArray* G_B32_0 = NULL;
	RuntimeArray* G_B31_0 = NULL;
	int32_t G_B33_0 = 0;
	int32_t G_B35_0 = 0;
	int32_t G_B41_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_0;
		L_0 = TypeTraits_1_get_IsContainer_m748E564407EE5311B3129B6563800575345A24B3_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D* L_2 = ___0_dstValue;
		StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D L_3 = ___1_srcValue;
		*(StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D*)L_2 = L_3;
		goto IL_027c;
	}

IL_001a:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_4;
		L_4 = TypeTraits_1_get_CanBeNull_mBF67FA3A6F82EA4FD80F246E3D2AB424D28FD667_inline(il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D L_5 = ___1_srcValue;
		G_B5_0 = ((int32_t)(false));
		goto IL_002d;
	}

IL_002c:
	{
		G_B5_0 = 0;
	}

IL_002d:
	{
		V_2 = (bool)G_B5_0;
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_003e;
		}
	}
	{
		StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D* L_7 = ___0_dstValue;
		il2cpp_codegen_initobj(L_7, sizeof(StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D));
		goto IL_027c;
	}

IL_003e:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_8;
		L_8 = TypeTraits_1_get_IsValueType_mE15BF77911B4BEB5D3725CFAC54F480025A030CE_inline(il2cpp_rgctx_method(method->rgctx_data, 5));
		V_3 = L_8;
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_0055;
		}
	}
	{
		StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D* L_10 = ___0_dstValue;
		il2cpp_codegen_initobj(L_10, sizeof(StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D));
		goto IL_0237;
	}

IL_0055:
	{
		Il2CppFakeBox<StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D> L_11(il2cpp_rgctx_data(method->rgctx_data, 3), (&___1_srcValue));
		Type_t* L_12;
		L_12 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((&L_11), NULL);
		V_4 = L_12;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		Type_t* L_15 = V_4;
		NullCheck(L_14);
		bool L_16;
		L_16 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_14, L_15);
		V_6 = L_16;
		bool L_17 = V_6;
		if (!L_17)
		{
			goto IL_0089;
		}
	}
	{
		StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D* L_18 = ___0_dstValue;
		StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D L_19 = ___1_srcValue;
		*(StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D*)L_18 = L_19;
		goto IL_027c;
	}

IL_0089:
	{
		Type_t* L_20 = V_4;
		bool L_21;
		L_21 = TypeTraits_IsContainer_m46D04F3E3219371CC5F133E2CC54BCA46FD72505(L_20, NULL);
		V_7 = (bool)((((int32_t)L_21) == ((int32_t)0))? 1 : 0);
		bool L_22 = V_7;
		if (!L_22)
		{
			goto IL_00a6;
		}
	}
	{
		StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D* L_23 = ___0_dstValue;
		StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D L_24 = ___1_srcValue;
		*(StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D*)L_23 = L_24;
		goto IL_027c;
	}

IL_00a6:
	{
		Type_t* L_25 = V_4;
		NullCheck(L_25);
		bool L_26;
		L_26 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_25, NULL);
		if (L_26)
		{
			goto IL_00c5;
		}
	}
	{
		Type_t* L_27 = V_4;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_28 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.string_class->byval_arg) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_29;
		L_29 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_28, NULL);
		bool L_30;
		L_30 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_27, L_29, NULL);
		G_B16_0 = ((((int32_t)L_30) == ((int32_t)0))? 1 : 0);
		goto IL_00c6;
	}

IL_00c5:
	{
		G_B16_0 = 0;
	}

IL_00c6:
	{
		V_5 = (bool)G_B16_0;
		bool L_31 = V_5;
		V_8 = L_31;
		bool L_32 = V_8;
		if (!L_32)
		{
			goto IL_0134;
		}
	}
	{
		RuntimeObject* L_33 = __this->___m_RootSource;
		StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D L_34 = ___1_srcValue;
		StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D L_35 = L_34;
		RuntimeObject* L_36 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_35);
		V_10 = (bool)((((RuntimeObject*)(RuntimeObject*)L_33) == ((RuntimeObject*)(RuntimeObject*)L_36))? 1 : 0);
		bool L_37 = V_10;
		if (!L_37)
		{
			goto IL_00fc;
		}
	}
	{
		StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D* L_38 = ___0_dstValue;
		RuntimeObject* L_39 = __this->___m_RootDestination;
		*(StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D*)L_38 = ((*(StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D*)UnBox(L_39, il2cpp_rgctx_data(method->rgctx_data, 3))));
		goto IL_027c;
	}

IL_00fc:
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_40 = __this->___m_References;
		if (!L_40)
		{
			goto IL_0119;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_41 = __this->___m_References;
		StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D L_42 = ___1_srcValue;
		StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D L_43 = L_42;
		RuntimeObject* L_44 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_43);
		NullCheck(L_41);
		bool L_45;
		L_45 = Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849(L_41, L_44, (&V_9), Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		G_B22_0 = ((int32_t)(L_45));
		goto IL_011a;
	}

IL_0119:
	{
		G_B22_0 = 0;
	}

IL_011a:
	{
		V_11 = (bool)G_B22_0;
		bool L_46 = V_11;
		if (!L_46)
		{
			goto IL_0133;
		}
	}
	{
		StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D* L_47 = ___0_dstValue;
		RuntimeObject* L_48 = V_9;
		*(StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D*)L_47 = ((*(StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D*)UnBox(L_48, il2cpp_rgctx_data(method->rgctx_data, 3))));
		goto IL_027c;
	}

IL_0133:
	{
	}

IL_0134:
	{
		Type_t* L_49 = V_4;
		NullCheck(L_49);
		bool L_50;
		L_50 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_49, NULL);
		V_12 = L_50;
		bool L_51 = V_12;
		if (!L_51)
		{
			goto IL_01b6;
		}
	}
	{
		StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D L_52 = ___1_srcValue;
		StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D L_53 = L_52;
		RuntimeObject* L_54 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_53);
		V_14 = (RuntimeObject*)NULL;
		RuntimeObject* L_55 = V_14;
		if (L_55)
		{
			goto IL_0156;
		}
	}
	{
		G_B29_0 = 0;
		goto IL_015d;
	}

IL_0156:
	{
		RuntimeObject* L_56 = V_14;
		NullCheck((RuntimeObject*)L_56);
		int32_t L_57;
		L_57 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_56);
		G_B29_0 = L_57;
	}

IL_015d:
	{
		V_13 = G_B29_0;
	}
	{
		StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D* L_59 = ___0_dstValue;
		StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D L_60 = (*(StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D*)L_59);
		StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D L_61 = L_60;
		RuntimeObject* L_62 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_61);
		RuntimeArray* L_63 = ((RuntimeArray*)IsInstClass((RuntimeObject*)L_62, il2cpp_defaults.array_class));
		if (L_63)
		{
			G_B32_0 = L_63;
			goto IL_0183;
		}
		G_B31_0 = L_63;
	}
	{
		G_B33_0 = 1;
		goto IL_018f;
	}

IL_0183:
	{
		NullCheck(G_B32_0);
		int32_t L_64;
		L_64 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(G_B32_0, NULL);
		int32_t L_65 = V_13;
		G_B33_0 = ((((int32_t)((((int32_t)L_64) == ((int32_t)L_65))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_018f:
	{
		G_B35_0 = G_B33_0;
		goto IL_0192;
	}

IL_0192:
	{
		V_15 = (bool)G_B35_0;
		bool L_66 = V_15;
		if (!L_66)
		{
			goto IL_01b3;
		}
	}
	{
		StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D* L_67 = ___0_dstValue;
		Type_t* L_68 = V_4;
		NullCheck(L_68);
		Type_t* L_69;
		L_69 = VirtualFuncInvoker0< Type_t* >::Invoke(48, L_68);
		int32_t L_70 = V_13;
		RuntimeArray* L_71;
		L_71 = Array_CreateInstance_m13B202130951A03AF5F52470A19E17D3AD2A8983(L_69, L_70, NULL);
		*(StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D*)L_67 = ((*(StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D*)UnBox((RuntimeObject*)L_71, il2cpp_rgctx_data(method->rgctx_data, 3))));
	}

IL_01b3:
	{
		goto IL_01f5;
	}

IL_01b6:
	{
	}
	{
		StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D* L_73 = ___0_dstValue;
		Il2CppFakeBox<StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D> L_74(il2cpp_rgctx_data(method->rgctx_data, 3), L_73);
		Type_t* L_75;
		L_75 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((&L_74), NULL);
		Type_t* L_76 = V_4;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_77;
		L_77 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_75, L_76, NULL);
		G_B41_0 = ((int32_t)(L_77));
		goto IL_01da;
	}

IL_01da:
	{
		V_16 = (bool)G_B41_0;
		bool L_78 = V_16;
		if (!L_78)
		{
			goto IL_01f4;
		}
	}
	{
		StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D* L_79 = ___0_dstValue;
		Type_t* L_80 = V_4;
		RuntimeObject* L_81;
		L_81 = Activator_CreateInstance_mFF030428C64FDDFACC74DFAC97388A1C628BFBCF(L_80, NULL);
		*(StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D*)L_79 = ((*(StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D*)UnBox(L_81, il2cpp_rgctx_data(method->rgctx_data, 3))));
	}

IL_01f4:
	{
	}

IL_01f5:
	{
		bool L_82 = V_5;
		V_17 = L_82;
		bool L_83 = V_17;
		if (!L_83)
		{
			goto IL_0236;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_84 = __this->___m_References;
		V_18 = (bool)((((RuntimeObject*)(Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*)L_84) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_85 = V_18;
		if (!L_85)
		{
			goto IL_0218;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_86 = (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*)il2cpp_codegen_object_new(Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329(L_86, Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_RuntimeMethod_var);
		__this->___m_References = L_86;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_References), (void*)L_86);
	}

IL_0218:
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_87 = __this->___m_References;
		StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D L_88 = ___1_srcValue;
		StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D L_89 = L_88;
		RuntimeObject* L_90 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_89);
		StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D* L_91 = ___0_dstValue;
		StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D L_92 = (*(StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D*)L_91);
		StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D L_93 = L_92;
		RuntimeObject* L_94 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_93);
		NullCheck(L_87);
		Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1(L_87, L_90, L_94, Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
	}

IL_0236:
	{
	}

IL_0237:
	{
		RuntimeObject* L_95 = __this->___m_Stack;
		V_0 = L_95;
		StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D* L_96 = ___0_dstValue;
		StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D L_97 = (*(StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D*)L_96);
		StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D L_98 = L_97;
		RuntimeObject* L_99 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_98);
		__this->___m_Stack = L_99;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Stack), (void*)L_99);
		il2cpp_codegen_initobj((&V_20), sizeof(VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE));
		VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE L_100 = V_20;
		bool L_101;
		L_101 = PropertyContainer_TryAccept_TisStyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D_mF91BAFA67958A7398E1F94B6762EBA9CFF390C19((RuntimeObject*)__this, (&___1_srcValue), (&V_19), L_100, il2cpp_rgctx_method(method->rgctx_data, 7));
		StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D* L_102 = ___0_dstValue;
		RuntimeObject* L_103 = __this->___m_Stack;
		*(StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D*)L_102 = ((*(StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D*)UnBox(L_103, il2cpp_rgctx_data(method->rgctx_data, 3))));
		RuntimeObject* L_104 = V_0;
		__this->___m_Stack = L_104;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Stack), (void*)L_104);
	}

IL_027c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManagedObjectClone_CloneValue_TisStyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8_m7EE0B90CCD253F02E96F343529DD3FC62FA5741F_gshared (ManagedObjectClone_t6E754ED2624B829553A94A85A0D62AD51B58FCD6* __this, StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8* ___0_dstValue, StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8 ___1_srcValue, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	Type_t* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	RuntimeObject* V_9 = NULL;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t V_13 = 0;
	RuntimeObject* V_14 = NULL;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	int32_t V_19 = 0;
	VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE V_20;
	memset((&V_20), 0, sizeof(V_20));
	int32_t G_B5_0 = 0;
	int32_t G_B16_0 = 0;
	int32_t G_B22_0 = 0;
	int32_t G_B29_0 = 0;
	RuntimeArray* G_B32_0 = NULL;
	RuntimeArray* G_B31_0 = NULL;
	int32_t G_B33_0 = 0;
	int32_t G_B35_0 = 0;
	int32_t G_B41_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_0;
		L_0 = TypeTraits_1_get_IsContainer_m916B9C203D96F12013B160116CA44AA967C225D4_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8* L_2 = ___0_dstValue;
		StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8 L_3 = ___1_srcValue;
		*(StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8*)L_2 = L_3;
		goto IL_027c;
	}

IL_001a:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_4;
		L_4 = TypeTraits_1_get_CanBeNull_mBE2469309A59E9E64ED306132C6DB40EA211B02B_inline(il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8 L_5 = ___1_srcValue;
		G_B5_0 = ((int32_t)(false));
		goto IL_002d;
	}

IL_002c:
	{
		G_B5_0 = 0;
	}

IL_002d:
	{
		V_2 = (bool)G_B5_0;
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_003e;
		}
	}
	{
		StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8* L_7 = ___0_dstValue;
		il2cpp_codegen_initobj(L_7, sizeof(StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8));
		goto IL_027c;
	}

IL_003e:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_8;
		L_8 = TypeTraits_1_get_IsValueType_m434194C02E674305D5939C3FB4388F1A60128356_inline(il2cpp_rgctx_method(method->rgctx_data, 5));
		V_3 = L_8;
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_0055;
		}
	}
	{
		StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8* L_10 = ___0_dstValue;
		il2cpp_codegen_initobj(L_10, sizeof(StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8));
		goto IL_0237;
	}

IL_0055:
	{
		Il2CppFakeBox<StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8> L_11(il2cpp_rgctx_data(method->rgctx_data, 3), (&___1_srcValue));
		Type_t* L_12;
		L_12 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((&L_11), NULL);
		V_4 = L_12;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		Type_t* L_15 = V_4;
		NullCheck(L_14);
		bool L_16;
		L_16 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_14, L_15);
		V_6 = L_16;
		bool L_17 = V_6;
		if (!L_17)
		{
			goto IL_0089;
		}
	}
	{
		StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8* L_18 = ___0_dstValue;
		StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8 L_19 = ___1_srcValue;
		*(StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8*)L_18 = L_19;
		goto IL_027c;
	}

IL_0089:
	{
		Type_t* L_20 = V_4;
		bool L_21;
		L_21 = TypeTraits_IsContainer_m46D04F3E3219371CC5F133E2CC54BCA46FD72505(L_20, NULL);
		V_7 = (bool)((((int32_t)L_21) == ((int32_t)0))? 1 : 0);
		bool L_22 = V_7;
		if (!L_22)
		{
			goto IL_00a6;
		}
	}
	{
		StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8* L_23 = ___0_dstValue;
		StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8 L_24 = ___1_srcValue;
		*(StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8*)L_23 = L_24;
		goto IL_027c;
	}

IL_00a6:
	{
		Type_t* L_25 = V_4;
		NullCheck(L_25);
		bool L_26;
		L_26 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_25, NULL);
		if (L_26)
		{
			goto IL_00c5;
		}
	}
	{
		Type_t* L_27 = V_4;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_28 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.string_class->byval_arg) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_29;
		L_29 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_28, NULL);
		bool L_30;
		L_30 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_27, L_29, NULL);
		G_B16_0 = ((((int32_t)L_30) == ((int32_t)0))? 1 : 0);
		goto IL_00c6;
	}

IL_00c5:
	{
		G_B16_0 = 0;
	}

IL_00c6:
	{
		V_5 = (bool)G_B16_0;
		bool L_31 = V_5;
		V_8 = L_31;
		bool L_32 = V_8;
		if (!L_32)
		{
			goto IL_0134;
		}
	}
	{
		RuntimeObject* L_33 = __this->___m_RootSource;
		StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8 L_34 = ___1_srcValue;
		StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8 L_35 = L_34;
		RuntimeObject* L_36 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_35);
		V_10 = (bool)((((RuntimeObject*)(RuntimeObject*)L_33) == ((RuntimeObject*)(RuntimeObject*)L_36))? 1 : 0);
		bool L_37 = V_10;
		if (!L_37)
		{
			goto IL_00fc;
		}
	}
	{
		StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8* L_38 = ___0_dstValue;
		RuntimeObject* L_39 = __this->___m_RootDestination;
		*(StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8*)L_38 = ((*(StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8*)UnBox(L_39, il2cpp_rgctx_data(method->rgctx_data, 3))));
		goto IL_027c;
	}

IL_00fc:
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_40 = __this->___m_References;
		if (!L_40)
		{
			goto IL_0119;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_41 = __this->___m_References;
		StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8 L_42 = ___1_srcValue;
		StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8 L_43 = L_42;
		RuntimeObject* L_44 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_43);
		NullCheck(L_41);
		bool L_45;
		L_45 = Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849(L_41, L_44, (&V_9), Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		G_B22_0 = ((int32_t)(L_45));
		goto IL_011a;
	}

IL_0119:
	{
		G_B22_0 = 0;
	}

IL_011a:
	{
		V_11 = (bool)G_B22_0;
		bool L_46 = V_11;
		if (!L_46)
		{
			goto IL_0133;
		}
	}
	{
		StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8* L_47 = ___0_dstValue;
		RuntimeObject* L_48 = V_9;
		*(StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8*)L_47 = ((*(StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8*)UnBox(L_48, il2cpp_rgctx_data(method->rgctx_data, 3))));
		goto IL_027c;
	}

IL_0133:
	{
	}

IL_0134:
	{
		Type_t* L_49 = V_4;
		NullCheck(L_49);
		bool L_50;
		L_50 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_49, NULL);
		V_12 = L_50;
		bool L_51 = V_12;
		if (!L_51)
		{
			goto IL_01b6;
		}
	}
	{
		StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8 L_52 = ___1_srcValue;
		StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8 L_53 = L_52;
		RuntimeObject* L_54 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_53);
		V_14 = (RuntimeObject*)NULL;
		RuntimeObject* L_55 = V_14;
		if (L_55)
		{
			goto IL_0156;
		}
	}
	{
		G_B29_0 = 0;
		goto IL_015d;
	}

IL_0156:
	{
		RuntimeObject* L_56 = V_14;
		NullCheck((RuntimeObject*)L_56);
		int32_t L_57;
		L_57 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_56);
		G_B29_0 = L_57;
	}

IL_015d:
	{
		V_13 = G_B29_0;
	}
	{
		StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8* L_59 = ___0_dstValue;
		StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8 L_60 = (*(StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8*)L_59);
		StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8 L_61 = L_60;
		RuntimeObject* L_62 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_61);
		RuntimeArray* L_63 = ((RuntimeArray*)IsInstClass((RuntimeObject*)L_62, il2cpp_defaults.array_class));
		if (L_63)
		{
			G_B32_0 = L_63;
			goto IL_0183;
		}
		G_B31_0 = L_63;
	}
	{
		G_B33_0 = 1;
		goto IL_018f;
	}

IL_0183:
	{
		NullCheck(G_B32_0);
		int32_t L_64;
		L_64 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(G_B32_0, NULL);
		int32_t L_65 = V_13;
		G_B33_0 = ((((int32_t)((((int32_t)L_64) == ((int32_t)L_65))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_018f:
	{
		G_B35_0 = G_B33_0;
		goto IL_0192;
	}

IL_0192:
	{
		V_15 = (bool)G_B35_0;
		bool L_66 = V_15;
		if (!L_66)
		{
			goto IL_01b3;
		}
	}
	{
		StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8* L_67 = ___0_dstValue;
		Type_t* L_68 = V_4;
		NullCheck(L_68);
		Type_t* L_69;
		L_69 = VirtualFuncInvoker0< Type_t* >::Invoke(48, L_68);
		int32_t L_70 = V_13;
		RuntimeArray* L_71;
		L_71 = Array_CreateInstance_m13B202130951A03AF5F52470A19E17D3AD2A8983(L_69, L_70, NULL);
		*(StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8*)L_67 = ((*(StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8*)UnBox((RuntimeObject*)L_71, il2cpp_rgctx_data(method->rgctx_data, 3))));
	}

IL_01b3:
	{
		goto IL_01f5;
	}

IL_01b6:
	{
	}
	{
		StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8* L_73 = ___0_dstValue;
		Il2CppFakeBox<StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8> L_74(il2cpp_rgctx_data(method->rgctx_data, 3), L_73);
		Type_t* L_75;
		L_75 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((&L_74), NULL);
		Type_t* L_76 = V_4;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_77;
		L_77 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_75, L_76, NULL);
		G_B41_0 = ((int32_t)(L_77));
		goto IL_01da;
	}

IL_01da:
	{
		V_16 = (bool)G_B41_0;
		bool L_78 = V_16;
		if (!L_78)
		{
			goto IL_01f4;
		}
	}
	{
		StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8* L_79 = ___0_dstValue;
		Type_t* L_80 = V_4;
		RuntimeObject* L_81;
		L_81 = Activator_CreateInstance_mFF030428C64FDDFACC74DFAC97388A1C628BFBCF(L_80, NULL);
		*(StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8*)L_79 = ((*(StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8*)UnBox(L_81, il2cpp_rgctx_data(method->rgctx_data, 3))));
	}

IL_01f4:
	{
	}

IL_01f5:
	{
		bool L_82 = V_5;
		V_17 = L_82;
		bool L_83 = V_17;
		if (!L_83)
		{
			goto IL_0236;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_84 = __this->___m_References;
		V_18 = (bool)((((RuntimeObject*)(Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*)L_84) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_85 = V_18;
		if (!L_85)
		{
			goto IL_0218;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_86 = (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*)il2cpp_codegen_object_new(Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329(L_86, Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_RuntimeMethod_var);
		__this->___m_References = L_86;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_References), (void*)L_86);
	}

IL_0218:
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_87 = __this->___m_References;
		StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8 L_88 = ___1_srcValue;
		StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8 L_89 = L_88;
		RuntimeObject* L_90 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_89);
		StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8* L_91 = ___0_dstValue;
		StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8 L_92 = (*(StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8*)L_91);
		StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8 L_93 = L_92;
		RuntimeObject* L_94 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_93);
		NullCheck(L_87);
		Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1(L_87, L_90, L_94, Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
	}

IL_0236:
	{
	}

IL_0237:
	{
		RuntimeObject* L_95 = __this->___m_Stack;
		V_0 = L_95;
		StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8* L_96 = ___0_dstValue;
		StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8 L_97 = (*(StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8*)L_96);
		StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8 L_98 = L_97;
		RuntimeObject* L_99 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_98);
		__this->___m_Stack = L_99;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Stack), (void*)L_99);
		il2cpp_codegen_initobj((&V_20), sizeof(VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE));
		VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE L_100 = V_20;
		bool L_101;
		L_101 = PropertyContainer_TryAccept_TisStyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8_mB9341E816B066B0A26BAD0F13896EBF26F51E9CE((RuntimeObject*)__this, (&___1_srcValue), (&V_19), L_100, il2cpp_rgctx_method(method->rgctx_data, 7));
		StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8* L_102 = ___0_dstValue;
		RuntimeObject* L_103 = __this->___m_Stack;
		*(StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8*)L_102 = ((*(StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8*)UnBox(L_103, il2cpp_rgctx_data(method->rgctx_data, 3))));
		RuntimeObject* L_104 = V_0;
		__this->___m_Stack = L_104;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Stack), (void*)L_104);
	}

IL_027c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManagedObjectClone_CloneValue_TisStylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_m07434CE1169A321996879366509DD835A4CB8353_gshared (ManagedObjectClone_t6E754ED2624B829553A94A85A0D62AD51B58FCD6* __this, StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF* ___0_dstValue, StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF ___1_srcValue, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	Type_t* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	RuntimeObject* V_9 = NULL;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t V_13 = 0;
	RuntimeObject* V_14 = NULL;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	int32_t V_19 = 0;
	VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE V_20;
	memset((&V_20), 0, sizeof(V_20));
	int32_t G_B5_0 = 0;
	int32_t G_B16_0 = 0;
	int32_t G_B22_0 = 0;
	int32_t G_B29_0 = 0;
	RuntimeArray* G_B32_0 = NULL;
	RuntimeArray* G_B31_0 = NULL;
	int32_t G_B33_0 = 0;
	int32_t G_B35_0 = 0;
	int32_t G_B41_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_0;
		L_0 = TypeTraits_1_get_IsContainer_m9DFB57E57F4AC783DEAAC4F0A5E1CB11A90BA299_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF* L_2 = ___0_dstValue;
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF L_3 = ___1_srcValue;
		*(StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF*)L_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)&(((StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF*)L_2)->___U3CnameU3Ek__BackingField), (void*)NULL);
		goto IL_027c;
	}

IL_001a:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_4;
		L_4 = TypeTraits_1_get_CanBeNull_mAB96CAD5D360071A2AC29CEFA10D8376FE5A716C_inline(il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF L_5 = ___1_srcValue;
		G_B5_0 = ((int32_t)(false));
		goto IL_002d;
	}

IL_002c:
	{
		G_B5_0 = 0;
	}

IL_002d:
	{
		V_2 = (bool)G_B5_0;
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_003e;
		}
	}
	{
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF* L_7 = ___0_dstValue;
		il2cpp_codegen_initobj(L_7, sizeof(StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF));
		goto IL_027c;
	}

IL_003e:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_8;
		L_8 = TypeTraits_1_get_IsValueType_mB64CD1414AA6476F61F0C3568F12424180F97654_inline(il2cpp_rgctx_method(method->rgctx_data, 5));
		V_3 = L_8;
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_0055;
		}
	}
	{
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF* L_10 = ___0_dstValue;
		il2cpp_codegen_initobj(L_10, sizeof(StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF));
		goto IL_0237;
	}

IL_0055:
	{
		Il2CppFakeBox<StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF> L_11(il2cpp_rgctx_data(method->rgctx_data, 3), (&___1_srcValue));
		Type_t* L_12;
		L_12 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((&L_11), NULL);
		V_4 = L_12;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		Type_t* L_15 = V_4;
		NullCheck(L_14);
		bool L_16;
		L_16 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_14, L_15);
		V_6 = L_16;
		bool L_17 = V_6;
		if (!L_17)
		{
			goto IL_0089;
		}
	}
	{
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF* L_18 = ___0_dstValue;
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF L_19 = ___1_srcValue;
		*(StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF*)L_18 = L_19;
		Il2CppCodeGenWriteBarrier((void**)&(((StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF*)L_18)->___U3CnameU3Ek__BackingField), (void*)NULL);
		goto IL_027c;
	}

IL_0089:
	{
		Type_t* L_20 = V_4;
		bool L_21;
		L_21 = TypeTraits_IsContainer_m46D04F3E3219371CC5F133E2CC54BCA46FD72505(L_20, NULL);
		V_7 = (bool)((((int32_t)L_21) == ((int32_t)0))? 1 : 0);
		bool L_22 = V_7;
		if (!L_22)
		{
			goto IL_00a6;
		}
	}
	{
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF* L_23 = ___0_dstValue;
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF L_24 = ___1_srcValue;
		*(StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF*)L_23 = L_24;
		Il2CppCodeGenWriteBarrier((void**)&(((StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF*)L_23)->___U3CnameU3Ek__BackingField), (void*)NULL);
		goto IL_027c;
	}

IL_00a6:
	{
		Type_t* L_25 = V_4;
		NullCheck(L_25);
		bool L_26;
		L_26 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_25, NULL);
		if (L_26)
		{
			goto IL_00c5;
		}
	}
	{
		Type_t* L_27 = V_4;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_28 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.string_class->byval_arg) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_29;
		L_29 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_28, NULL);
		bool L_30;
		L_30 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_27, L_29, NULL);
		G_B16_0 = ((((int32_t)L_30) == ((int32_t)0))? 1 : 0);
		goto IL_00c6;
	}

IL_00c5:
	{
		G_B16_0 = 0;
	}

IL_00c6:
	{
		V_5 = (bool)G_B16_0;
		bool L_31 = V_5;
		V_8 = L_31;
		bool L_32 = V_8;
		if (!L_32)
		{
			goto IL_0134;
		}
	}
	{
		RuntimeObject* L_33 = __this->___m_RootSource;
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF L_34 = ___1_srcValue;
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF L_35 = L_34;
		RuntimeObject* L_36 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_35);
		V_10 = (bool)((((RuntimeObject*)(RuntimeObject*)L_33) == ((RuntimeObject*)(RuntimeObject*)L_36))? 1 : 0);
		bool L_37 = V_10;
		if (!L_37)
		{
			goto IL_00fc;
		}
	}
	{
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF* L_38 = ___0_dstValue;
		RuntimeObject* L_39 = __this->___m_RootDestination;
		*(StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF*)L_38 = ((*(StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF*)UnBox(L_39, il2cpp_rgctx_data(method->rgctx_data, 3))));
		Il2CppCodeGenWriteBarrier((void**)&(((StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF*)L_38)->___U3CnameU3Ek__BackingField), (void*)NULL);
		goto IL_027c;
	}

IL_00fc:
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_40 = __this->___m_References;
		if (!L_40)
		{
			goto IL_0119;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_41 = __this->___m_References;
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF L_42 = ___1_srcValue;
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF L_43 = L_42;
		RuntimeObject* L_44 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_43);
		NullCheck(L_41);
		bool L_45;
		L_45 = Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849(L_41, L_44, (&V_9), Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		G_B22_0 = ((int32_t)(L_45));
		goto IL_011a;
	}

IL_0119:
	{
		G_B22_0 = 0;
	}

IL_011a:
	{
		V_11 = (bool)G_B22_0;
		bool L_46 = V_11;
		if (!L_46)
		{
			goto IL_0133;
		}
	}
	{
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF* L_47 = ___0_dstValue;
		RuntimeObject* L_48 = V_9;
		*(StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF*)L_47 = ((*(StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF*)UnBox(L_48, il2cpp_rgctx_data(method->rgctx_data, 3))));
		Il2CppCodeGenWriteBarrier((void**)&(((StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF*)L_47)->___U3CnameU3Ek__BackingField), (void*)NULL);
		goto IL_027c;
	}

IL_0133:
	{
	}

IL_0134:
	{
		Type_t* L_49 = V_4;
		NullCheck(L_49);
		bool L_50;
		L_50 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_49, NULL);
		V_12 = L_50;
		bool L_51 = V_12;
		if (!L_51)
		{
			goto IL_01b6;
		}
	}
	{
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF L_52 = ___1_srcValue;
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF L_53 = L_52;
		RuntimeObject* L_54 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_53);
		V_14 = (RuntimeObject*)NULL;
		RuntimeObject* L_55 = V_14;
		if (L_55)
		{
			goto IL_0156;
		}
	}
	{
		G_B29_0 = 0;
		goto IL_015d;
	}

IL_0156:
	{
		RuntimeObject* L_56 = V_14;
		NullCheck((RuntimeObject*)L_56);
		int32_t L_57;
		L_57 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_56);
		G_B29_0 = L_57;
	}

IL_015d:
	{
		V_13 = G_B29_0;
	}
	{
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF* L_59 = ___0_dstValue;
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF L_60 = (*(StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF*)L_59);
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF L_61 = L_60;
		RuntimeObject* L_62 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_61);
		RuntimeArray* L_63 = ((RuntimeArray*)IsInstClass((RuntimeObject*)L_62, il2cpp_defaults.array_class));
		if (L_63)
		{
			G_B32_0 = L_63;
			goto IL_0183;
		}
		G_B31_0 = L_63;
	}
	{
		G_B33_0 = 1;
		goto IL_018f;
	}

IL_0183:
	{
		NullCheck(G_B32_0);
		int32_t L_64;
		L_64 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(G_B32_0, NULL);
		int32_t L_65 = V_13;
		G_B33_0 = ((((int32_t)((((int32_t)L_64) == ((int32_t)L_65))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_018f:
	{
		G_B35_0 = G_B33_0;
		goto IL_0192;
	}

IL_0192:
	{
		V_15 = (bool)G_B35_0;
		bool L_66 = V_15;
		if (!L_66)
		{
			goto IL_01b3;
		}
	}
	{
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF* L_67 = ___0_dstValue;
		Type_t* L_68 = V_4;
		NullCheck(L_68);
		Type_t* L_69;
		L_69 = VirtualFuncInvoker0< Type_t* >::Invoke(48, L_68);
		int32_t L_70 = V_13;
		RuntimeArray* L_71;
		L_71 = Array_CreateInstance_m13B202130951A03AF5F52470A19E17D3AD2A8983(L_69, L_70, NULL);
		*(StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF*)L_67 = ((*(StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF*)UnBox((RuntimeObject*)L_71, il2cpp_rgctx_data(method->rgctx_data, 3))));
		Il2CppCodeGenWriteBarrier((void**)&(((StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF*)L_67)->___U3CnameU3Ek__BackingField), (void*)NULL);
	}

IL_01b3:
	{
		goto IL_01f5;
	}

IL_01b6:
	{
	}
	{
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF* L_73 = ___0_dstValue;
		Il2CppFakeBox<StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF> L_74(il2cpp_rgctx_data(method->rgctx_data, 3), L_73);
		Type_t* L_75;
		L_75 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((&L_74), NULL);
		Type_t* L_76 = V_4;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_77;
		L_77 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_75, L_76, NULL);
		G_B41_0 = ((int32_t)(L_77));
		goto IL_01da;
	}

IL_01da:
	{
		V_16 = (bool)G_B41_0;
		bool L_78 = V_16;
		if (!L_78)
		{
			goto IL_01f4;
		}
	}
	{
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF* L_79 = ___0_dstValue;
		Type_t* L_80 = V_4;
		RuntimeObject* L_81;
		L_81 = Activator_CreateInstance_mFF030428C64FDDFACC74DFAC97388A1C628BFBCF(L_80, NULL);
		*(StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF*)L_79 = ((*(StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF*)UnBox(L_81, il2cpp_rgctx_data(method->rgctx_data, 3))));
		Il2CppCodeGenWriteBarrier((void**)&(((StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF*)L_79)->___U3CnameU3Ek__BackingField), (void*)NULL);
	}

IL_01f4:
	{
	}

IL_01f5:
	{
		bool L_82 = V_5;
		V_17 = L_82;
		bool L_83 = V_17;
		if (!L_83)
		{
			goto IL_0236;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_84 = __this->___m_References;
		V_18 = (bool)((((RuntimeObject*)(Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*)L_84) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_85 = V_18;
		if (!L_85)
		{
			goto IL_0218;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_86 = (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*)il2cpp_codegen_object_new(Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329(L_86, Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_RuntimeMethod_var);
		__this->___m_References = L_86;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_References), (void*)L_86);
	}

IL_0218:
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_87 = __this->___m_References;
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF L_88 = ___1_srcValue;
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF L_89 = L_88;
		RuntimeObject* L_90 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_89);
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF* L_91 = ___0_dstValue;
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF L_92 = (*(StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF*)L_91);
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF L_93 = L_92;
		RuntimeObject* L_94 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_93);
		NullCheck(L_87);
		Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1(L_87, L_90, L_94, Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
	}

IL_0236:
	{
	}

IL_0237:
	{
		RuntimeObject* L_95 = __this->___m_Stack;
		V_0 = L_95;
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF* L_96 = ___0_dstValue;
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF L_97 = (*(StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF*)L_96);
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF L_98 = L_97;
		RuntimeObject* L_99 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_98);
		__this->___m_Stack = L_99;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Stack), (void*)L_99);
		il2cpp_codegen_initobj((&V_20), sizeof(VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE));
		VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE L_100 = V_20;
		bool L_101;
		L_101 = PropertyContainer_TryAccept_TisStylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_m7B2D8DCCDFA8462A7A8420D259FAF18714AE26C8((RuntimeObject*)__this, (&___1_srcValue), (&V_19), L_100, il2cpp_rgctx_method(method->rgctx_data, 7));
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF* L_102 = ___0_dstValue;
		RuntimeObject* L_103 = __this->___m_Stack;
		*(StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF*)L_102 = ((*(StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF*)UnBox(L_103, il2cpp_rgctx_data(method->rgctx_data, 3))));
		Il2CppCodeGenWriteBarrier((void**)&(((StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF*)L_102)->___U3CnameU3Ek__BackingField), (void*)NULL);
		RuntimeObject* L_104 = V_0;
		__this->___m_Stack = L_104;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Stack), (void*)L_104);
	}

IL_027c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManagedObjectClone_CloneValue_TisStyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B_m66B1E68BAA4DD250849358FC56305CCD8BCE2976_gshared (ManagedObjectClone_t6E754ED2624B829553A94A85A0D62AD51B58FCD6* __this, StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B* ___0_dstValue, StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B ___1_srcValue, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	Type_t* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	RuntimeObject* V_9 = NULL;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t V_13 = 0;
	RuntimeObject* V_14 = NULL;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	int32_t V_19 = 0;
	VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE V_20;
	memset((&V_20), 0, sizeof(V_20));
	int32_t G_B5_0 = 0;
	int32_t G_B16_0 = 0;
	int32_t G_B22_0 = 0;
	int32_t G_B29_0 = 0;
	RuntimeArray* G_B32_0 = NULL;
	RuntimeArray* G_B31_0 = NULL;
	int32_t G_B33_0 = 0;
	int32_t G_B35_0 = 0;
	int32_t G_B41_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_0;
		L_0 = TypeTraits_1_get_IsContainer_m908BDA55B06C8C24176F0E7F23FBE5D2CC34DC25_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B* L_2 = ___0_dstValue;
		StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B L_3 = ___1_srcValue;
		*(StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B*)L_2 = L_3;
		goto IL_027c;
	}

IL_001a:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_4;
		L_4 = TypeTraits_1_get_CanBeNull_mC18B485E8C55F324812CBB67B78A007B739115E4_inline(il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B L_5 = ___1_srcValue;
		G_B5_0 = ((int32_t)(false));
		goto IL_002d;
	}

IL_002c:
	{
		G_B5_0 = 0;
	}

IL_002d:
	{
		V_2 = (bool)G_B5_0;
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_003e;
		}
	}
	{
		StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B* L_7 = ___0_dstValue;
		il2cpp_codegen_initobj(L_7, sizeof(StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B));
		goto IL_027c;
	}

IL_003e:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_8;
		L_8 = TypeTraits_1_get_IsValueType_m2E1C8DF463CE67BB42937B640C27F546CAB0DE93_inline(il2cpp_rgctx_method(method->rgctx_data, 5));
		V_3 = L_8;
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_0055;
		}
	}
	{
		StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B* L_10 = ___0_dstValue;
		il2cpp_codegen_initobj(L_10, sizeof(StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B));
		goto IL_0237;
	}

IL_0055:
	{
		Il2CppFakeBox<StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B> L_11(il2cpp_rgctx_data(method->rgctx_data, 3), (&___1_srcValue));
		Type_t* L_12;
		L_12 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((&L_11), NULL);
		V_4 = L_12;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		Type_t* L_15 = V_4;
		NullCheck(L_14);
		bool L_16;
		L_16 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_14, L_15);
		V_6 = L_16;
		bool L_17 = V_6;
		if (!L_17)
		{
			goto IL_0089;
		}
	}
	{
		StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B* L_18 = ___0_dstValue;
		StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B L_19 = ___1_srcValue;
		*(StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B*)L_18 = L_19;
		goto IL_027c;
	}

IL_0089:
	{
		Type_t* L_20 = V_4;
		bool L_21;
		L_21 = TypeTraits_IsContainer_m46D04F3E3219371CC5F133E2CC54BCA46FD72505(L_20, NULL);
		V_7 = (bool)((((int32_t)L_21) == ((int32_t)0))? 1 : 0);
		bool L_22 = V_7;
		if (!L_22)
		{
			goto IL_00a6;
		}
	}
	{
		StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B* L_23 = ___0_dstValue;
		StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B L_24 = ___1_srcValue;
		*(StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B*)L_23 = L_24;
		goto IL_027c;
	}

IL_00a6:
	{
		Type_t* L_25 = V_4;
		NullCheck(L_25);
		bool L_26;
		L_26 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_25, NULL);
		if (L_26)
		{
			goto IL_00c5;
		}
	}
	{
		Type_t* L_27 = V_4;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_28 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.string_class->byval_arg) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_29;
		L_29 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_28, NULL);
		bool L_30;
		L_30 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_27, L_29, NULL);
		G_B16_0 = ((((int32_t)L_30) == ((int32_t)0))? 1 : 0);
		goto IL_00c6;
	}

IL_00c5:
	{
		G_B16_0 = 0;
	}

IL_00c6:
	{
		V_5 = (bool)G_B16_0;
		bool L_31 = V_5;
		V_8 = L_31;
		bool L_32 = V_8;
		if (!L_32)
		{
			goto IL_0134;
		}
	}
	{
		RuntimeObject* L_33 = __this->___m_RootSource;
		StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B L_34 = ___1_srcValue;
		StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B L_35 = L_34;
		RuntimeObject* L_36 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_35);
		V_10 = (bool)((((RuntimeObject*)(RuntimeObject*)L_33) == ((RuntimeObject*)(RuntimeObject*)L_36))? 1 : 0);
		bool L_37 = V_10;
		if (!L_37)
		{
			goto IL_00fc;
		}
	}
	{
		StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B* L_38 = ___0_dstValue;
		RuntimeObject* L_39 = __this->___m_RootDestination;
		*(StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B*)L_38 = ((*(StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B*)UnBox(L_39, il2cpp_rgctx_data(method->rgctx_data, 3))));
		goto IL_027c;
	}

IL_00fc:
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_40 = __this->___m_References;
		if (!L_40)
		{
			goto IL_0119;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_41 = __this->___m_References;
		StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B L_42 = ___1_srcValue;
		StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B L_43 = L_42;
		RuntimeObject* L_44 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_43);
		NullCheck(L_41);
		bool L_45;
		L_45 = Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849(L_41, L_44, (&V_9), Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		G_B22_0 = ((int32_t)(L_45));
		goto IL_011a;
	}

IL_0119:
	{
		G_B22_0 = 0;
	}

IL_011a:
	{
		V_11 = (bool)G_B22_0;
		bool L_46 = V_11;
		if (!L_46)
		{
			goto IL_0133;
		}
	}
	{
		StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B* L_47 = ___0_dstValue;
		RuntimeObject* L_48 = V_9;
		*(StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B*)L_47 = ((*(StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B*)UnBox(L_48, il2cpp_rgctx_data(method->rgctx_data, 3))));
		goto IL_027c;
	}

IL_0133:
	{
	}

IL_0134:
	{
		Type_t* L_49 = V_4;
		NullCheck(L_49);
		bool L_50;
		L_50 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_49, NULL);
		V_12 = L_50;
		bool L_51 = V_12;
		if (!L_51)
		{
			goto IL_01b6;
		}
	}
	{
		StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B L_52 = ___1_srcValue;
		StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B L_53 = L_52;
		RuntimeObject* L_54 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_53);
		V_14 = (RuntimeObject*)NULL;
		RuntimeObject* L_55 = V_14;
		if (L_55)
		{
			goto IL_0156;
		}
	}
	{
		G_B29_0 = 0;
		goto IL_015d;
	}

IL_0156:
	{
		RuntimeObject* L_56 = V_14;
		NullCheck((RuntimeObject*)L_56);
		int32_t L_57;
		L_57 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_56);
		G_B29_0 = L_57;
	}

IL_015d:
	{
		V_13 = G_B29_0;
	}
	{
		StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B* L_59 = ___0_dstValue;
		StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B L_60 = (*(StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B*)L_59);
		StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B L_61 = L_60;
		RuntimeObject* L_62 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_61);
		RuntimeArray* L_63 = ((RuntimeArray*)IsInstClass((RuntimeObject*)L_62, il2cpp_defaults.array_class));
		if (L_63)
		{
			G_B32_0 = L_63;
			goto IL_0183;
		}
		G_B31_0 = L_63;
	}
	{
		G_B33_0 = 1;
		goto IL_018f;
	}

IL_0183:
	{
		NullCheck(G_B32_0);
		int32_t L_64;
		L_64 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(G_B32_0, NULL);
		int32_t L_65 = V_13;
		G_B33_0 = ((((int32_t)((((int32_t)L_64) == ((int32_t)L_65))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_018f:
	{
		G_B35_0 = G_B33_0;
		goto IL_0192;
	}

IL_0192:
	{
		V_15 = (bool)G_B35_0;
		bool L_66 = V_15;
		if (!L_66)
		{
			goto IL_01b3;
		}
	}
	{
		StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B* L_67 = ___0_dstValue;
		Type_t* L_68 = V_4;
		NullCheck(L_68);
		Type_t* L_69;
		L_69 = VirtualFuncInvoker0< Type_t* >::Invoke(48, L_68);
		int32_t L_70 = V_13;
		RuntimeArray* L_71;
		L_71 = Array_CreateInstance_m13B202130951A03AF5F52470A19E17D3AD2A8983(L_69, L_70, NULL);
		*(StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B*)L_67 = ((*(StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B*)UnBox((RuntimeObject*)L_71, il2cpp_rgctx_data(method->rgctx_data, 3))));
	}

IL_01b3:
	{
		goto IL_01f5;
	}

IL_01b6:
	{
	}
	{
		StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B* L_73 = ___0_dstValue;
		Il2CppFakeBox<StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B> L_74(il2cpp_rgctx_data(method->rgctx_data, 3), L_73);
		Type_t* L_75;
		L_75 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((&L_74), NULL);
		Type_t* L_76 = V_4;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_77;
		L_77 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_75, L_76, NULL);
		G_B41_0 = ((int32_t)(L_77));
		goto IL_01da;
	}

IL_01da:
	{
		V_16 = (bool)G_B41_0;
		bool L_78 = V_16;
		if (!L_78)
		{
			goto IL_01f4;
		}
	}
	{
		StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B* L_79 = ___0_dstValue;
		Type_t* L_80 = V_4;
		RuntimeObject* L_81;
		L_81 = Activator_CreateInstance_mFF030428C64FDDFACC74DFAC97388A1C628BFBCF(L_80, NULL);
		*(StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B*)L_79 = ((*(StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B*)UnBox(L_81, il2cpp_rgctx_data(method->rgctx_data, 3))));
	}

IL_01f4:
	{
	}

IL_01f5:
	{
		bool L_82 = V_5;
		V_17 = L_82;
		bool L_83 = V_17;
		if (!L_83)
		{
			goto IL_0236;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_84 = __this->___m_References;
		V_18 = (bool)((((RuntimeObject*)(Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*)L_84) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_85 = V_18;
		if (!L_85)
		{
			goto IL_0218;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_86 = (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*)il2cpp_codegen_object_new(Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329(L_86, Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_RuntimeMethod_var);
		__this->___m_References = L_86;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_References), (void*)L_86);
	}

IL_0218:
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_87 = __this->___m_References;
		StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B L_88 = ___1_srcValue;
		StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B L_89 = L_88;
		RuntimeObject* L_90 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_89);
		StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B* L_91 = ___0_dstValue;
		StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B L_92 = (*(StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B*)L_91);
		StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B L_93 = L_92;
		RuntimeObject* L_94 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_93);
		NullCheck(L_87);
		Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1(L_87, L_90, L_94, Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
	}

IL_0236:
	{
	}

IL_0237:
	{
		RuntimeObject* L_95 = __this->___m_Stack;
		V_0 = L_95;
		StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B* L_96 = ___0_dstValue;
		StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B L_97 = (*(StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B*)L_96);
		StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B L_98 = L_97;
		RuntimeObject* L_99 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_98);
		__this->___m_Stack = L_99;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Stack), (void*)L_99);
		il2cpp_codegen_initobj((&V_20), sizeof(VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE));
		VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE L_100 = V_20;
		bool L_101;
		L_101 = PropertyContainer_TryAccept_TisStyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B_m56D96CE7F98A37D61EFD5E3531CCC994A95F1EED((RuntimeObject*)__this, (&___1_srcValue), (&V_19), L_100, il2cpp_rgctx_method(method->rgctx_data, 7));
		StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B* L_102 = ___0_dstValue;
		RuntimeObject* L_103 = __this->___m_Stack;
		*(StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B*)L_102 = ((*(StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B*)UnBox(L_103, il2cpp_rgctx_data(method->rgctx_data, 3))));
		RuntimeObject* L_104 = V_0;
		__this->___m_Stack = L_104;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Stack), (void*)L_104);
	}

IL_027c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManagedObjectClone_CloneValue_TisStyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC_mDF864D01E47C2275D9992A5DCED819CE0B0EA61D_gshared (ManagedObjectClone_t6E754ED2624B829553A94A85A0D62AD51B58FCD6* __this, StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC* ___0_dstValue, StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC ___1_srcValue, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	Type_t* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	RuntimeObject* V_9 = NULL;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t V_13 = 0;
	RuntimeObject* V_14 = NULL;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	int32_t V_19 = 0;
	VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE V_20;
	memset((&V_20), 0, sizeof(V_20));
	int32_t G_B5_0 = 0;
	int32_t G_B16_0 = 0;
	int32_t G_B22_0 = 0;
	int32_t G_B29_0 = 0;
	RuntimeArray* G_B32_0 = NULL;
	RuntimeArray* G_B31_0 = NULL;
	int32_t G_B33_0 = 0;
	int32_t G_B35_0 = 0;
	int32_t G_B41_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_0;
		L_0 = TypeTraits_1_get_IsContainer_m26D8E5CB65881B90C23D386F1820AF754B074F26_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC* L_2 = ___0_dstValue;
		StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC L_3 = ___1_srcValue;
		*(StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC*)L_2 = L_3;
		goto IL_027c;
	}

IL_001a:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_4;
		L_4 = TypeTraits_1_get_CanBeNull_mE022DBB0602AAADCAA703B4A54242852A8965853_inline(il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC L_5 = ___1_srcValue;
		G_B5_0 = ((int32_t)(false));
		goto IL_002d;
	}

IL_002c:
	{
		G_B5_0 = 0;
	}

IL_002d:
	{
		V_2 = (bool)G_B5_0;
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_003e;
		}
	}
	{
		StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC* L_7 = ___0_dstValue;
		il2cpp_codegen_initobj(L_7, sizeof(StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC));
		goto IL_027c;
	}

IL_003e:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_8;
		L_8 = TypeTraits_1_get_IsValueType_m98BDAC1965215084D492BD054E3438503B1F8176_inline(il2cpp_rgctx_method(method->rgctx_data, 5));
		V_3 = L_8;
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_0055;
		}
	}
	{
		StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC* L_10 = ___0_dstValue;
		il2cpp_codegen_initobj(L_10, sizeof(StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC));
		goto IL_0237;
	}

IL_0055:
	{
		Il2CppFakeBox<StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC> L_11(il2cpp_rgctx_data(method->rgctx_data, 3), (&___1_srcValue));
		Type_t* L_12;
		L_12 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((&L_11), NULL);
		V_4 = L_12;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		Type_t* L_15 = V_4;
		NullCheck(L_14);
		bool L_16;
		L_16 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_14, L_15);
		V_6 = L_16;
		bool L_17 = V_6;
		if (!L_17)
		{
			goto IL_0089;
		}
	}
	{
		StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC* L_18 = ___0_dstValue;
		StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC L_19 = ___1_srcValue;
		*(StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC*)L_18 = L_19;
		goto IL_027c;
	}

IL_0089:
	{
		Type_t* L_20 = V_4;
		bool L_21;
		L_21 = TypeTraits_IsContainer_m46D04F3E3219371CC5F133E2CC54BCA46FD72505(L_20, NULL);
		V_7 = (bool)((((int32_t)L_21) == ((int32_t)0))? 1 : 0);
		bool L_22 = V_7;
		if (!L_22)
		{
			goto IL_00a6;
		}
	}
	{
		StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC* L_23 = ___0_dstValue;
		StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC L_24 = ___1_srcValue;
		*(StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC*)L_23 = L_24;
		goto IL_027c;
	}

IL_00a6:
	{
		Type_t* L_25 = V_4;
		NullCheck(L_25);
		bool L_26;
		L_26 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_25, NULL);
		if (L_26)
		{
			goto IL_00c5;
		}
	}
	{
		Type_t* L_27 = V_4;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_28 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.string_class->byval_arg) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_29;
		L_29 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_28, NULL);
		bool L_30;
		L_30 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_27, L_29, NULL);
		G_B16_0 = ((((int32_t)L_30) == ((int32_t)0))? 1 : 0);
		goto IL_00c6;
	}

IL_00c5:
	{
		G_B16_0 = 0;
	}

IL_00c6:
	{
		V_5 = (bool)G_B16_0;
		bool L_31 = V_5;
		V_8 = L_31;
		bool L_32 = V_8;
		if (!L_32)
		{
			goto IL_0134;
		}
	}
	{
		RuntimeObject* L_33 = __this->___m_RootSource;
		StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC L_34 = ___1_srcValue;
		StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC L_35 = L_34;
		RuntimeObject* L_36 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_35);
		V_10 = (bool)((((RuntimeObject*)(RuntimeObject*)L_33) == ((RuntimeObject*)(RuntimeObject*)L_36))? 1 : 0);
		bool L_37 = V_10;
		if (!L_37)
		{
			goto IL_00fc;
		}
	}
	{
		StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC* L_38 = ___0_dstValue;
		RuntimeObject* L_39 = __this->___m_RootDestination;
		*(StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC*)L_38 = ((*(StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC*)UnBox(L_39, il2cpp_rgctx_data(method->rgctx_data, 3))));
		goto IL_027c;
	}

IL_00fc:
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_40 = __this->___m_References;
		if (!L_40)
		{
			goto IL_0119;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_41 = __this->___m_References;
		StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC L_42 = ___1_srcValue;
		StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC L_43 = L_42;
		RuntimeObject* L_44 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_43);
		NullCheck(L_41);
		bool L_45;
		L_45 = Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849(L_41, L_44, (&V_9), Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		G_B22_0 = ((int32_t)(L_45));
		goto IL_011a;
	}

IL_0119:
	{
		G_B22_0 = 0;
	}

IL_011a:
	{
		V_11 = (bool)G_B22_0;
		bool L_46 = V_11;
		if (!L_46)
		{
			goto IL_0133;
		}
	}
	{
		StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC* L_47 = ___0_dstValue;
		RuntimeObject* L_48 = V_9;
		*(StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC*)L_47 = ((*(StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC*)UnBox(L_48, il2cpp_rgctx_data(method->rgctx_data, 3))));
		goto IL_027c;
	}

IL_0133:
	{
	}

IL_0134:
	{
		Type_t* L_49 = V_4;
		NullCheck(L_49);
		bool L_50;
		L_50 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_49, NULL);
		V_12 = L_50;
		bool L_51 = V_12;
		if (!L_51)
		{
			goto IL_01b6;
		}
	}
	{
		StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC L_52 = ___1_srcValue;
		StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC L_53 = L_52;
		RuntimeObject* L_54 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_53);
		V_14 = (RuntimeObject*)NULL;
		RuntimeObject* L_55 = V_14;
		if (L_55)
		{
			goto IL_0156;
		}
	}
	{
		G_B29_0 = 0;
		goto IL_015d;
	}

IL_0156:
	{
		RuntimeObject* L_56 = V_14;
		NullCheck((RuntimeObject*)L_56);
		int32_t L_57;
		L_57 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_56);
		G_B29_0 = L_57;
	}

IL_015d:
	{
		V_13 = G_B29_0;
	}
	{
		StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC* L_59 = ___0_dstValue;
		StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC L_60 = (*(StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC*)L_59);
		StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC L_61 = L_60;
		RuntimeObject* L_62 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_61);
		RuntimeArray* L_63 = ((RuntimeArray*)IsInstClass((RuntimeObject*)L_62, il2cpp_defaults.array_class));
		if (L_63)
		{
			G_B32_0 = L_63;
			goto IL_0183;
		}
		G_B31_0 = L_63;
	}
	{
		G_B33_0 = 1;
		goto IL_018f;
	}

IL_0183:
	{
		NullCheck(G_B32_0);
		int32_t L_64;
		L_64 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(G_B32_0, NULL);
		int32_t L_65 = V_13;
		G_B33_0 = ((((int32_t)((((int32_t)L_64) == ((int32_t)L_65))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_018f:
	{
		G_B35_0 = G_B33_0;
		goto IL_0192;
	}

IL_0192:
	{
		V_15 = (bool)G_B35_0;
		bool L_66 = V_15;
		if (!L_66)
		{
			goto IL_01b3;
		}
	}
	{
		StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC* L_67 = ___0_dstValue;
		Type_t* L_68 = V_4;
		NullCheck(L_68);
		Type_t* L_69;
		L_69 = VirtualFuncInvoker0< Type_t* >::Invoke(48, L_68);
		int32_t L_70 = V_13;
		RuntimeArray* L_71;
		L_71 = Array_CreateInstance_m13B202130951A03AF5F52470A19E17D3AD2A8983(L_69, L_70, NULL);
		*(StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC*)L_67 = ((*(StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC*)UnBox((RuntimeObject*)L_71, il2cpp_rgctx_data(method->rgctx_data, 3))));
	}

IL_01b3:
	{
		goto IL_01f5;
	}

IL_01b6:
	{
	}
	{
		StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC* L_73 = ___0_dstValue;
		Il2CppFakeBox<StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC> L_74(il2cpp_rgctx_data(method->rgctx_data, 3), L_73);
		Type_t* L_75;
		L_75 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((&L_74), NULL);
		Type_t* L_76 = V_4;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_77;
		L_77 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_75, L_76, NULL);
		G_B41_0 = ((int32_t)(L_77));
		goto IL_01da;
	}

IL_01da:
	{
		V_16 = (bool)G_B41_0;
		bool L_78 = V_16;
		if (!L_78)
		{
			goto IL_01f4;
		}
	}
	{
		StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC* L_79 = ___0_dstValue;
		Type_t* L_80 = V_4;
		RuntimeObject* L_81;
		L_81 = Activator_CreateInstance_mFF030428C64FDDFACC74DFAC97388A1C628BFBCF(L_80, NULL);
		*(StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC*)L_79 = ((*(StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC*)UnBox(L_81, il2cpp_rgctx_data(method->rgctx_data, 3))));
	}

IL_01f4:
	{
	}

IL_01f5:
	{
		bool L_82 = V_5;
		V_17 = L_82;
		bool L_83 = V_17;
		if (!L_83)
		{
			goto IL_0236;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_84 = __this->___m_References;
		V_18 = (bool)((((RuntimeObject*)(Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*)L_84) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_85 = V_18;
		if (!L_85)
		{
			goto IL_0218;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_86 = (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*)il2cpp_codegen_object_new(Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329(L_86, Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_RuntimeMethod_var);
		__this->___m_References = L_86;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_References), (void*)L_86);
	}

IL_0218:
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_87 = __this->___m_References;
		StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC L_88 = ___1_srcValue;
		StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC L_89 = L_88;
		RuntimeObject* L_90 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_89);
		StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC* L_91 = ___0_dstValue;
		StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC L_92 = (*(StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC*)L_91);
		StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC L_93 = L_92;
		RuntimeObject* L_94 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_93);
		NullCheck(L_87);
		Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1(L_87, L_90, L_94, Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
	}

IL_0236:
	{
	}

IL_0237:
	{
		RuntimeObject* L_95 = __this->___m_Stack;
		V_0 = L_95;
		StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC* L_96 = ___0_dstValue;
		StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC L_97 = (*(StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC*)L_96);
		StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC L_98 = L_97;
		RuntimeObject* L_99 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_98);
		__this->___m_Stack = L_99;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Stack), (void*)L_99);
		il2cpp_codegen_initobj((&V_20), sizeof(VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE));
		VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE L_100 = V_20;
		bool L_101;
		L_101 = PropertyContainer_TryAccept_TisStyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC_m0AC52A2D94D76CAE679622449130C1C2D8BC8F1B((RuntimeObject*)__this, (&___1_srcValue), (&V_19), L_100, il2cpp_rgctx_method(method->rgctx_data, 7));
		StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC* L_102 = ___0_dstValue;
		RuntimeObject* L_103 = __this->___m_Stack;
		*(StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC*)L_102 = ((*(StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC*)UnBox(L_103, il2cpp_rgctx_data(method->rgctx_data, 3))));
		RuntimeObject* L_104 = V_0;
		__this->___m_Stack = L_104;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Stack), (void*)L_104);
	}

IL_027c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManagedObjectClone_CloneValue_TisStyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252_m11CBB2950A0F060C0A44048FDFDBE8F12DFA2268_gshared (ManagedObjectClone_t6E754ED2624B829553A94A85A0D62AD51B58FCD6* __this, StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252* ___0_dstValue, StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252 ___1_srcValue, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	Type_t* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	RuntimeObject* V_9 = NULL;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t V_13 = 0;
	RuntimeObject* V_14 = NULL;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	int32_t V_19 = 0;
	VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE V_20;
	memset((&V_20), 0, sizeof(V_20));
	int32_t G_B5_0 = 0;
	int32_t G_B16_0 = 0;
	int32_t G_B22_0 = 0;
	int32_t G_B29_0 = 0;
	RuntimeArray* G_B32_0 = NULL;
	RuntimeArray* G_B31_0 = NULL;
	int32_t G_B33_0 = 0;
	int32_t G_B35_0 = 0;
	int32_t G_B41_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_0;
		L_0 = TypeTraits_1_get_IsContainer_m1D1A832B4A280B5CC5A8F6103512BD85C232D534_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252* L_2 = ___0_dstValue;
		StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252 L_3 = ___1_srcValue;
		*(StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252*)L_2 = L_3;
		goto IL_027c;
	}

IL_001a:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_4;
		L_4 = TypeTraits_1_get_CanBeNull_m989233B2F7F633EFE624A0CF8A5F9D3DAC75F00E_inline(il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252 L_5 = ___1_srcValue;
		G_B5_0 = ((int32_t)(false));
		goto IL_002d;
	}

IL_002c:
	{
		G_B5_0 = 0;
	}

IL_002d:
	{
		V_2 = (bool)G_B5_0;
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_003e;
		}
	}
	{
		StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252* L_7 = ___0_dstValue;
		il2cpp_codegen_initobj(L_7, sizeof(StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252));
		goto IL_027c;
	}

IL_003e:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_8;
		L_8 = TypeTraits_1_get_IsValueType_mD7AD2570031FF055D5EB8EC2F245A5A638022D20_inline(il2cpp_rgctx_method(method->rgctx_data, 5));
		V_3 = L_8;
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_0055;
		}
	}
	{
		StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252* L_10 = ___0_dstValue;
		il2cpp_codegen_initobj(L_10, sizeof(StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252));
		goto IL_0237;
	}

IL_0055:
	{
		Il2CppFakeBox<StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252> L_11(il2cpp_rgctx_data(method->rgctx_data, 3), (&___1_srcValue));
		Type_t* L_12;
		L_12 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((&L_11), NULL);
		V_4 = L_12;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		Type_t* L_15 = V_4;
		NullCheck(L_14);
		bool L_16;
		L_16 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_14, L_15);
		V_6 = L_16;
		bool L_17 = V_6;
		if (!L_17)
		{
			goto IL_0089;
		}
	}
	{
		StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252* L_18 = ___0_dstValue;
		StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252 L_19 = ___1_srcValue;
		*(StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252*)L_18 = L_19;
		goto IL_027c;
	}

IL_0089:
	{
		Type_t* L_20 = V_4;
		bool L_21;
		L_21 = TypeTraits_IsContainer_m46D04F3E3219371CC5F133E2CC54BCA46FD72505(L_20, NULL);
		V_7 = (bool)((((int32_t)L_21) == ((int32_t)0))? 1 : 0);
		bool L_22 = V_7;
		if (!L_22)
		{
			goto IL_00a6;
		}
	}
	{
		StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252* L_23 = ___0_dstValue;
		StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252 L_24 = ___1_srcValue;
		*(StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252*)L_23 = L_24;
		goto IL_027c;
	}

IL_00a6:
	{
		Type_t* L_25 = V_4;
		NullCheck(L_25);
		bool L_26;
		L_26 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_25, NULL);
		if (L_26)
		{
			goto IL_00c5;
		}
	}
	{
		Type_t* L_27 = V_4;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_28 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.string_class->byval_arg) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_29;
		L_29 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_28, NULL);
		bool L_30;
		L_30 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_27, L_29, NULL);
		G_B16_0 = ((((int32_t)L_30) == ((int32_t)0))? 1 : 0);
		goto IL_00c6;
	}

IL_00c5:
	{
		G_B16_0 = 0;
	}

IL_00c6:
	{
		V_5 = (bool)G_B16_0;
		bool L_31 = V_5;
		V_8 = L_31;
		bool L_32 = V_8;
		if (!L_32)
		{
			goto IL_0134;
		}
	}
	{
		RuntimeObject* L_33 = __this->___m_RootSource;
		StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252 L_34 = ___1_srcValue;
		StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252 L_35 = L_34;
		RuntimeObject* L_36 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_35);
		V_10 = (bool)((((RuntimeObject*)(RuntimeObject*)L_33) == ((RuntimeObject*)(RuntimeObject*)L_36))? 1 : 0);
		bool L_37 = V_10;
		if (!L_37)
		{
			goto IL_00fc;
		}
	}
	{
		StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252* L_38 = ___0_dstValue;
		RuntimeObject* L_39 = __this->___m_RootDestination;
		*(StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252*)L_38 = ((*(StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252*)UnBox(L_39, il2cpp_rgctx_data(method->rgctx_data, 3))));
		goto IL_027c;
	}

IL_00fc:
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_40 = __this->___m_References;
		if (!L_40)
		{
			goto IL_0119;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_41 = __this->___m_References;
		StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252 L_42 = ___1_srcValue;
		StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252 L_43 = L_42;
		RuntimeObject* L_44 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_43);
		NullCheck(L_41);
		bool L_45;
		L_45 = Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849(L_41, L_44, (&V_9), Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		G_B22_0 = ((int32_t)(L_45));
		goto IL_011a;
	}

IL_0119:
	{
		G_B22_0 = 0;
	}

IL_011a:
	{
		V_11 = (bool)G_B22_0;
		bool L_46 = V_11;
		if (!L_46)
		{
			goto IL_0133;
		}
	}
	{
		StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252* L_47 = ___0_dstValue;
		RuntimeObject* L_48 = V_9;
		*(StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252*)L_47 = ((*(StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252*)UnBox(L_48, il2cpp_rgctx_data(method->rgctx_data, 3))));
		goto IL_027c;
	}

IL_0133:
	{
	}

IL_0134:
	{
		Type_t* L_49 = V_4;
		NullCheck(L_49);
		bool L_50;
		L_50 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_49, NULL);
		V_12 = L_50;
		bool L_51 = V_12;
		if (!L_51)
		{
			goto IL_01b6;
		}
	}
	{
		StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252 L_52 = ___1_srcValue;
		StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252 L_53 = L_52;
		RuntimeObject* L_54 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_53);
		V_14 = (RuntimeObject*)NULL;
		RuntimeObject* L_55 = V_14;
		if (L_55)
		{
			goto IL_0156;
		}
	}
	{
		G_B29_0 = 0;
		goto IL_015d;
	}

IL_0156:
	{
		RuntimeObject* L_56 = V_14;
		NullCheck((RuntimeObject*)L_56);
		int32_t L_57;
		L_57 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_56);
		G_B29_0 = L_57;
	}

IL_015d:
	{
		V_13 = G_B29_0;
	}
	{
		StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252* L_59 = ___0_dstValue;
		StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252 L_60 = (*(StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252*)L_59);
		StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252 L_61 = L_60;
		RuntimeObject* L_62 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_61);
		RuntimeArray* L_63 = ((RuntimeArray*)IsInstClass((RuntimeObject*)L_62, il2cpp_defaults.array_class));
		if (L_63)
		{
			G_B32_0 = L_63;
			goto IL_0183;
		}
		G_B31_0 = L_63;
	}
	{
		G_B33_0 = 1;
		goto IL_018f;
	}

IL_0183:
	{
		NullCheck(G_B32_0);
		int32_t L_64;
		L_64 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(G_B32_0, NULL);
		int32_t L_65 = V_13;
		G_B33_0 = ((((int32_t)((((int32_t)L_64) == ((int32_t)L_65))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_018f:
	{
		G_B35_0 = G_B33_0;
		goto IL_0192;
	}

IL_0192:
	{
		V_15 = (bool)G_B35_0;
		bool L_66 = V_15;
		if (!L_66)
		{
			goto IL_01b3;
		}
	}
	{
		StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252* L_67 = ___0_dstValue;
		Type_t* L_68 = V_4;
		NullCheck(L_68);
		Type_t* L_69;
		L_69 = VirtualFuncInvoker0< Type_t* >::Invoke(48, L_68);
		int32_t L_70 = V_13;
		RuntimeArray* L_71;
		L_71 = Array_CreateInstance_m13B202130951A03AF5F52470A19E17D3AD2A8983(L_69, L_70, NULL);
		*(StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252*)L_67 = ((*(StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252*)UnBox((RuntimeObject*)L_71, il2cpp_rgctx_data(method->rgctx_data, 3))));
	}

IL_01b3:
	{
		goto IL_01f5;
	}

IL_01b6:
	{
	}
	{
		StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252* L_73 = ___0_dstValue;
		Il2CppFakeBox<StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252> L_74(il2cpp_rgctx_data(method->rgctx_data, 3), L_73);
		Type_t* L_75;
		L_75 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((&L_74), NULL);
		Type_t* L_76 = V_4;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_77;
		L_77 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_75, L_76, NULL);
		G_B41_0 = ((int32_t)(L_77));
		goto IL_01da;
	}

IL_01da:
	{
		V_16 = (bool)G_B41_0;
		bool L_78 = V_16;
		if (!L_78)
		{
			goto IL_01f4;
		}
	}
	{
		StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252* L_79 = ___0_dstValue;
		Type_t* L_80 = V_4;
		RuntimeObject* L_81;
		L_81 = Activator_CreateInstance_mFF030428C64FDDFACC74DFAC97388A1C628BFBCF(L_80, NULL);
		*(StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252*)L_79 = ((*(StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252*)UnBox(L_81, il2cpp_rgctx_data(method->rgctx_data, 3))));
	}

IL_01f4:
	{
	}

IL_01f5:
	{
		bool L_82 = V_5;
		V_17 = L_82;
		bool L_83 = V_17;
		if (!L_83)
		{
			goto IL_0236;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_84 = __this->___m_References;
		V_18 = (bool)((((RuntimeObject*)(Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*)L_84) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_85 = V_18;
		if (!L_85)
		{
			goto IL_0218;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_86 = (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*)il2cpp_codegen_object_new(Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329(L_86, Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_RuntimeMethod_var);
		__this->___m_References = L_86;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_References), (void*)L_86);
	}

IL_0218:
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_87 = __this->___m_References;
		StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252 L_88 = ___1_srcValue;
		StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252 L_89 = L_88;
		RuntimeObject* L_90 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_89);
		StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252* L_91 = ___0_dstValue;
		StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252 L_92 = (*(StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252*)L_91);
		StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252 L_93 = L_92;
		RuntimeObject* L_94 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_93);
		NullCheck(L_87);
		Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1(L_87, L_90, L_94, Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
	}

IL_0236:
	{
	}

IL_0237:
	{
		RuntimeObject* L_95 = __this->___m_Stack;
		V_0 = L_95;
		StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252* L_96 = ___0_dstValue;
		StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252 L_97 = (*(StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252*)L_96);
		StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252 L_98 = L_97;
		RuntimeObject* L_99 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_98);
		__this->___m_Stack = L_99;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Stack), (void*)L_99);
		il2cpp_codegen_initobj((&V_20), sizeof(VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE));
		VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE L_100 = V_20;
		bool L_101;
		L_101 = PropertyContainer_TryAccept_TisStyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252_mEE806BBA02B2263493CED060EEE1BB5658A03DFC((RuntimeObject*)__this, (&___1_srcValue), (&V_19), L_100, il2cpp_rgctx_method(method->rgctx_data, 7));
		StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252* L_102 = ___0_dstValue;
		RuntimeObject* L_103 = __this->___m_Stack;
		*(StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252*)L_102 = ((*(StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252*)UnBox(L_103, il2cpp_rgctx_data(method->rgctx_data, 3))));
		RuntimeObject* L_104 = V_0;
		__this->___m_Stack = L_104;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Stack), (void*)L_104);
	}

IL_027c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManagedObjectClone_CloneValue_TisStyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6_m8C2E83221E2F808A2A94D87F4B07B4D5A966FE46_gshared (ManagedObjectClone_t6E754ED2624B829553A94A85A0D62AD51B58FCD6* __this, StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6* ___0_dstValue, StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6 ___1_srcValue, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	Type_t* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	RuntimeObject* V_9 = NULL;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t V_13 = 0;
	RuntimeObject* V_14 = NULL;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	int32_t V_19 = 0;
	VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE V_20;
	memset((&V_20), 0, sizeof(V_20));
	int32_t G_B5_0 = 0;
	int32_t G_B16_0 = 0;
	int32_t G_B22_0 = 0;
	int32_t G_B29_0 = 0;
	RuntimeArray* G_B32_0 = NULL;
	RuntimeArray* G_B31_0 = NULL;
	int32_t G_B33_0 = 0;
	int32_t G_B35_0 = 0;
	int32_t G_B41_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_0;
		L_0 = TypeTraits_1_get_IsContainer_mB84DCA55DC40F517EE6B897F549822CF99051417_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6* L_2 = ___0_dstValue;
		StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6 L_3 = ___1_srcValue;
		*(StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6*)L_2 = L_3;
		goto IL_027c;
	}

IL_001a:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_4;
		L_4 = TypeTraits_1_get_CanBeNull_m1499F4A014158A9E43B430FA922C10FA9BF42BDA_inline(il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6 L_5 = ___1_srcValue;
		G_B5_0 = ((int32_t)(false));
		goto IL_002d;
	}

IL_002c:
	{
		G_B5_0 = 0;
	}

IL_002d:
	{
		V_2 = (bool)G_B5_0;
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_003e;
		}
	}
	{
		StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6* L_7 = ___0_dstValue;
		il2cpp_codegen_initobj(L_7, sizeof(StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6));
		goto IL_027c;
	}

IL_003e:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_8;
		L_8 = TypeTraits_1_get_IsValueType_m772EE1B98C79503AD94637C553736BDDA5E113E4_inline(il2cpp_rgctx_method(method->rgctx_data, 5));
		V_3 = L_8;
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_0055;
		}
	}
	{
		StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6* L_10 = ___0_dstValue;
		il2cpp_codegen_initobj(L_10, sizeof(StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6));
		goto IL_0237;
	}

IL_0055:
	{
		Il2CppFakeBox<StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6> L_11(il2cpp_rgctx_data(method->rgctx_data, 3), (&___1_srcValue));
		Type_t* L_12;
		L_12 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((&L_11), NULL);
		V_4 = L_12;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		Type_t* L_15 = V_4;
		NullCheck(L_14);
		bool L_16;
		L_16 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_14, L_15);
		V_6 = L_16;
		bool L_17 = V_6;
		if (!L_17)
		{
			goto IL_0089;
		}
	}
	{
		StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6* L_18 = ___0_dstValue;
		StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6 L_19 = ___1_srcValue;
		*(StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6*)L_18 = L_19;
		goto IL_027c;
	}

IL_0089:
	{
		Type_t* L_20 = V_4;
		bool L_21;
		L_21 = TypeTraits_IsContainer_m46D04F3E3219371CC5F133E2CC54BCA46FD72505(L_20, NULL);
		V_7 = (bool)((((int32_t)L_21) == ((int32_t)0))? 1 : 0);
		bool L_22 = V_7;
		if (!L_22)
		{
			goto IL_00a6;
		}
	}
	{
		StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6* L_23 = ___0_dstValue;
		StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6 L_24 = ___1_srcValue;
		*(StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6*)L_23 = L_24;
		goto IL_027c;
	}

IL_00a6:
	{
		Type_t* L_25 = V_4;
		NullCheck(L_25);
		bool L_26;
		L_26 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_25, NULL);
		if (L_26)
		{
			goto IL_00c5;
		}
	}
	{
		Type_t* L_27 = V_4;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_28 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.string_class->byval_arg) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_29;
		L_29 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_28, NULL);
		bool L_30;
		L_30 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_27, L_29, NULL);
		G_B16_0 = ((((int32_t)L_30) == ((int32_t)0))? 1 : 0);
		goto IL_00c6;
	}

IL_00c5:
	{
		G_B16_0 = 0;
	}

IL_00c6:
	{
		V_5 = (bool)G_B16_0;
		bool L_31 = V_5;
		V_8 = L_31;
		bool L_32 = V_8;
		if (!L_32)
		{
			goto IL_0134;
		}
	}
	{
		RuntimeObject* L_33 = __this->___m_RootSource;
		StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6 L_34 = ___1_srcValue;
		StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6 L_35 = L_34;
		RuntimeObject* L_36 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_35);
		V_10 = (bool)((((RuntimeObject*)(RuntimeObject*)L_33) == ((RuntimeObject*)(RuntimeObject*)L_36))? 1 : 0);
		bool L_37 = V_10;
		if (!L_37)
		{
			goto IL_00fc;
		}
	}
	{
		StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6* L_38 = ___0_dstValue;
		RuntimeObject* L_39 = __this->___m_RootDestination;
		*(StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6*)L_38 = ((*(StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6*)UnBox(L_39, il2cpp_rgctx_data(method->rgctx_data, 3))));
		goto IL_027c;
	}

IL_00fc:
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_40 = __this->___m_References;
		if (!L_40)
		{
			goto IL_0119;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_41 = __this->___m_References;
		StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6 L_42 = ___1_srcValue;
		StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6 L_43 = L_42;
		RuntimeObject* L_44 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_43);
		NullCheck(L_41);
		bool L_45;
		L_45 = Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849(L_41, L_44, (&V_9), Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		G_B22_0 = ((int32_t)(L_45));
		goto IL_011a;
	}

IL_0119:
	{
		G_B22_0 = 0;
	}

IL_011a:
	{
		V_11 = (bool)G_B22_0;
		bool L_46 = V_11;
		if (!L_46)
		{
			goto IL_0133;
		}
	}
	{
		StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6* L_47 = ___0_dstValue;
		RuntimeObject* L_48 = V_9;
		*(StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6*)L_47 = ((*(StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6*)UnBox(L_48, il2cpp_rgctx_data(method->rgctx_data, 3))));
		goto IL_027c;
	}

IL_0133:
	{
	}

IL_0134:
	{
		Type_t* L_49 = V_4;
		NullCheck(L_49);
		bool L_50;
		L_50 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_49, NULL);
		V_12 = L_50;
		bool L_51 = V_12;
		if (!L_51)
		{
			goto IL_01b6;
		}
	}
	{
		StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6 L_52 = ___1_srcValue;
		StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6 L_53 = L_52;
		RuntimeObject* L_54 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_53);
		V_14 = (RuntimeObject*)NULL;
		RuntimeObject* L_55 = V_14;
		if (L_55)
		{
			goto IL_0156;
		}
	}
	{
		G_B29_0 = 0;
		goto IL_015d;
	}

IL_0156:
	{
		RuntimeObject* L_56 = V_14;
		NullCheck((RuntimeObject*)L_56);
		int32_t L_57;
		L_57 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_56);
		G_B29_0 = L_57;
	}

IL_015d:
	{
		V_13 = G_B29_0;
	}
	{
		StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6* L_59 = ___0_dstValue;
		StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6 L_60 = (*(StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6*)L_59);
		StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6 L_61 = L_60;
		RuntimeObject* L_62 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_61);
		RuntimeArray* L_63 = ((RuntimeArray*)IsInstClass((RuntimeObject*)L_62, il2cpp_defaults.array_class));
		if (L_63)
		{
			G_B32_0 = L_63;
			goto IL_0183;
		}
		G_B31_0 = L_63;
	}
	{
		G_B33_0 = 1;
		goto IL_018f;
	}

IL_0183:
	{
		NullCheck(G_B32_0);
		int32_t L_64;
		L_64 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(G_B32_0, NULL);
		int32_t L_65 = V_13;
		G_B33_0 = ((((int32_t)((((int32_t)L_64) == ((int32_t)L_65))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_018f:
	{
		G_B35_0 = G_B33_0;
		goto IL_0192;
	}

IL_0192:
	{
		V_15 = (bool)G_B35_0;
		bool L_66 = V_15;
		if (!L_66)
		{
			goto IL_01b3;
		}
	}
	{
		StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6* L_67 = ___0_dstValue;
		Type_t* L_68 = V_4;
		NullCheck(L_68);
		Type_t* L_69;
		L_69 = VirtualFuncInvoker0< Type_t* >::Invoke(48, L_68);
		int32_t L_70 = V_13;
		RuntimeArray* L_71;
		L_71 = Array_CreateInstance_m13B202130951A03AF5F52470A19E17D3AD2A8983(L_69, L_70, NULL);
		*(StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6*)L_67 = ((*(StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6*)UnBox((RuntimeObject*)L_71, il2cpp_rgctx_data(method->rgctx_data, 3))));
	}

IL_01b3:
	{
		goto IL_01f5;
	}

IL_01b6:
	{
	}
	{
		StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6* L_73 = ___0_dstValue;
		Il2CppFakeBox<StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6> L_74(il2cpp_rgctx_data(method->rgctx_data, 3), L_73);
		Type_t* L_75;
		L_75 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((&L_74), NULL);
		Type_t* L_76 = V_4;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_77;
		L_77 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_75, L_76, NULL);
		G_B41_0 = ((int32_t)(L_77));
		goto IL_01da;
	}

IL_01da:
	{
		V_16 = (bool)G_B41_0;
		bool L_78 = V_16;
		if (!L_78)
		{
			goto IL_01f4;
		}
	}
	{
		StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6* L_79 = ___0_dstValue;
		Type_t* L_80 = V_4;
		RuntimeObject* L_81;
		L_81 = Activator_CreateInstance_mFF030428C64FDDFACC74DFAC97388A1C628BFBCF(L_80, NULL);
		*(StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6*)L_79 = ((*(StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6*)UnBox(L_81, il2cpp_rgctx_data(method->rgctx_data, 3))));
	}

IL_01f4:
	{
	}

IL_01f5:
	{
		bool L_82 = V_5;
		V_17 = L_82;
		bool L_83 = V_17;
		if (!L_83)
		{
			goto IL_0236;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_84 = __this->___m_References;
		V_18 = (bool)((((RuntimeObject*)(Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*)L_84) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_85 = V_18;
		if (!L_85)
		{
			goto IL_0218;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_86 = (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*)il2cpp_codegen_object_new(Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329(L_86, Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_RuntimeMethod_var);
		__this->___m_References = L_86;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_References), (void*)L_86);
	}

IL_0218:
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_87 = __this->___m_References;
		StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6 L_88 = ___1_srcValue;
		StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6 L_89 = L_88;
		RuntimeObject* L_90 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_89);
		StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6* L_91 = ___0_dstValue;
		StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6 L_92 = (*(StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6*)L_91);
		StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6 L_93 = L_92;
		RuntimeObject* L_94 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_93);
		NullCheck(L_87);
		Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1(L_87, L_90, L_94, Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
	}

IL_0236:
	{
	}

IL_0237:
	{
		RuntimeObject* L_95 = __this->___m_Stack;
		V_0 = L_95;
		StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6* L_96 = ___0_dstValue;
		StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6 L_97 = (*(StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6*)L_96);
		StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6 L_98 = L_97;
		RuntimeObject* L_99 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_98);
		__this->___m_Stack = L_99;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Stack), (void*)L_99);
		il2cpp_codegen_initobj((&V_20), sizeof(VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE));
		VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE L_100 = V_20;
		bool L_101;
		L_101 = PropertyContainer_TryAccept_TisStyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6_m881CEAED0013770CEC9FF3D498862D9D361EC557((RuntimeObject*)__this, (&___1_srcValue), (&V_19), L_100, il2cpp_rgctx_method(method->rgctx_data, 7));
		StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6* L_102 = ___0_dstValue;
		RuntimeObject* L_103 = __this->___m_Stack;
		*(StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6*)L_102 = ((*(StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6*)UnBox(L_103, il2cpp_rgctx_data(method->rgctx_data, 3))));
		RuntimeObject* L_104 = V_0;
		__this->___m_Stack = L_104;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Stack), (void*)L_104);
	}

IL_027c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManagedObjectClone_CloneValue_TisStyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089_mD1DC8FA0A5E3DA3CB3821FF8D37282B106358A32_gshared (ManagedObjectClone_t6E754ED2624B829553A94A85A0D62AD51B58FCD6* __this, StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089* ___0_dstValue, StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089 ___1_srcValue, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	Type_t* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	RuntimeObject* V_9 = NULL;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t V_13 = 0;
	RuntimeObject* V_14 = NULL;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	int32_t V_19 = 0;
	VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE V_20;
	memset((&V_20), 0, sizeof(V_20));
	int32_t G_B5_0 = 0;
	int32_t G_B16_0 = 0;
	int32_t G_B22_0 = 0;
	int32_t G_B29_0 = 0;
	RuntimeArray* G_B32_0 = NULL;
	RuntimeArray* G_B31_0 = NULL;
	int32_t G_B33_0 = 0;
	int32_t G_B35_0 = 0;
	int32_t G_B41_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_0;
		L_0 = TypeTraits_1_get_IsContainer_m423D4EE31271BFF343FB125B5237B9FF71CFF524_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089* L_2 = ___0_dstValue;
		StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089 L_3 = ___1_srcValue;
		*(StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089*)L_2 = L_3;
		goto IL_027c;
	}

IL_001a:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_4;
		L_4 = TypeTraits_1_get_CanBeNull_m4BCDE88FF19C72620C04896DCEC626E7A9621B31_inline(il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089 L_5 = ___1_srcValue;
		G_B5_0 = ((int32_t)(false));
		goto IL_002d;
	}

IL_002c:
	{
		G_B5_0 = 0;
	}

IL_002d:
	{
		V_2 = (bool)G_B5_0;
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_003e;
		}
	}
	{
		StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089* L_7 = ___0_dstValue;
		il2cpp_codegen_initobj(L_7, sizeof(StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089));
		goto IL_027c;
	}

IL_003e:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_8;
		L_8 = TypeTraits_1_get_IsValueType_m472AD8D1120723C7E282C958A563BAB1A9843EB4_inline(il2cpp_rgctx_method(method->rgctx_data, 5));
		V_3 = L_8;
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_0055;
		}
	}
	{
		StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089* L_10 = ___0_dstValue;
		il2cpp_codegen_initobj(L_10, sizeof(StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089));
		goto IL_0237;
	}

IL_0055:
	{
		Il2CppFakeBox<StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089> L_11(il2cpp_rgctx_data(method->rgctx_data, 3), (&___1_srcValue));
		Type_t* L_12;
		L_12 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((&L_11), NULL);
		V_4 = L_12;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		Type_t* L_15 = V_4;
		NullCheck(L_14);
		bool L_16;
		L_16 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_14, L_15);
		V_6 = L_16;
		bool L_17 = V_6;
		if (!L_17)
		{
			goto IL_0089;
		}
	}
	{
		StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089* L_18 = ___0_dstValue;
		StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089 L_19 = ___1_srcValue;
		*(StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089*)L_18 = L_19;
		goto IL_027c;
	}

IL_0089:
	{
		Type_t* L_20 = V_4;
		bool L_21;
		L_21 = TypeTraits_IsContainer_m46D04F3E3219371CC5F133E2CC54BCA46FD72505(L_20, NULL);
		V_7 = (bool)((((int32_t)L_21) == ((int32_t)0))? 1 : 0);
		bool L_22 = V_7;
		if (!L_22)
		{
			goto IL_00a6;
		}
	}
	{
		StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089* L_23 = ___0_dstValue;
		StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089 L_24 = ___1_srcValue;
		*(StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089*)L_23 = L_24;
		goto IL_027c;
	}

IL_00a6:
	{
		Type_t* L_25 = V_4;
		NullCheck(L_25);
		bool L_26;
		L_26 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_25, NULL);
		if (L_26)
		{
			goto IL_00c5;
		}
	}
	{
		Type_t* L_27 = V_4;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_28 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.string_class->byval_arg) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_29;
		L_29 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_28, NULL);
		bool L_30;
		L_30 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_27, L_29, NULL);
		G_B16_0 = ((((int32_t)L_30) == ((int32_t)0))? 1 : 0);
		goto IL_00c6;
	}

IL_00c5:
	{
		G_B16_0 = 0;
	}

IL_00c6:
	{
		V_5 = (bool)G_B16_0;
		bool L_31 = V_5;
		V_8 = L_31;
		bool L_32 = V_8;
		if (!L_32)
		{
			goto IL_0134;
		}
	}
	{
		RuntimeObject* L_33 = __this->___m_RootSource;
		StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089 L_34 = ___1_srcValue;
		StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089 L_35 = L_34;
		RuntimeObject* L_36 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_35);
		V_10 = (bool)((((RuntimeObject*)(RuntimeObject*)L_33) == ((RuntimeObject*)(RuntimeObject*)L_36))? 1 : 0);
		bool L_37 = V_10;
		if (!L_37)
		{
			goto IL_00fc;
		}
	}
	{
		StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089* L_38 = ___0_dstValue;
		RuntimeObject* L_39 = __this->___m_RootDestination;
		*(StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089*)L_38 = ((*(StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089*)UnBox(L_39, il2cpp_rgctx_data(method->rgctx_data, 3))));
		goto IL_027c;
	}

IL_00fc:
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_40 = __this->___m_References;
		if (!L_40)
		{
			goto IL_0119;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_41 = __this->___m_References;
		StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089 L_42 = ___1_srcValue;
		StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089 L_43 = L_42;
		RuntimeObject* L_44 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_43);
		NullCheck(L_41);
		bool L_45;
		L_45 = Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849(L_41, L_44, (&V_9), Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		G_B22_0 = ((int32_t)(L_45));
		goto IL_011a;
	}

IL_0119:
	{
		G_B22_0 = 0;
	}

IL_011a:
	{
		V_11 = (bool)G_B22_0;
		bool L_46 = V_11;
		if (!L_46)
		{
			goto IL_0133;
		}
	}
	{
		StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089* L_47 = ___0_dstValue;
		RuntimeObject* L_48 = V_9;
		*(StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089*)L_47 = ((*(StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089*)UnBox(L_48, il2cpp_rgctx_data(method->rgctx_data, 3))));
		goto IL_027c;
	}

IL_0133:
	{
	}

IL_0134:
	{
		Type_t* L_49 = V_4;
		NullCheck(L_49);
		bool L_50;
		L_50 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_49, NULL);
		V_12 = L_50;
		bool L_51 = V_12;
		if (!L_51)
		{
			goto IL_01b6;
		}
	}
	{
		StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089 L_52 = ___1_srcValue;
		StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089 L_53 = L_52;
		RuntimeObject* L_54 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_53);
		V_14 = (RuntimeObject*)NULL;
		RuntimeObject* L_55 = V_14;
		if (L_55)
		{
			goto IL_0156;
		}
	}
	{
		G_B29_0 = 0;
		goto IL_015d;
	}

IL_0156:
	{
		RuntimeObject* L_56 = V_14;
		NullCheck((RuntimeObject*)L_56);
		int32_t L_57;
		L_57 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_56);
		G_B29_0 = L_57;
	}

IL_015d:
	{
		V_13 = G_B29_0;
	}
	{
		StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089* L_59 = ___0_dstValue;
		StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089 L_60 = (*(StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089*)L_59);
		StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089 L_61 = L_60;
		RuntimeObject* L_62 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_61);
		RuntimeArray* L_63 = ((RuntimeArray*)IsInstClass((RuntimeObject*)L_62, il2cpp_defaults.array_class));
		if (L_63)
		{
			G_B32_0 = L_63;
			goto IL_0183;
		}
		G_B31_0 = L_63;
	}
	{
		G_B33_0 = 1;
		goto IL_018f;
	}

IL_0183:
	{
		NullCheck(G_B32_0);
		int32_t L_64;
		L_64 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(G_B32_0, NULL);
		int32_t L_65 = V_13;
		G_B33_0 = ((((int32_t)((((int32_t)L_64) == ((int32_t)L_65))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_018f:
	{
		G_B35_0 = G_B33_0;
		goto IL_0192;
	}

IL_0192:
	{
		V_15 = (bool)G_B35_0;
		bool L_66 = V_15;
		if (!L_66)
		{
			goto IL_01b3;
		}
	}
	{
		StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089* L_67 = ___0_dstValue;
		Type_t* L_68 = V_4;
		NullCheck(L_68);
		Type_t* L_69;
		L_69 = VirtualFuncInvoker0< Type_t* >::Invoke(48, L_68);
		int32_t L_70 = V_13;
		RuntimeArray* L_71;
		L_71 = Array_CreateInstance_m13B202130951A03AF5F52470A19E17D3AD2A8983(L_69, L_70, NULL);
		*(StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089*)L_67 = ((*(StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089*)UnBox((RuntimeObject*)L_71, il2cpp_rgctx_data(method->rgctx_data, 3))));
	}

IL_01b3:
	{
		goto IL_01f5;
	}

IL_01b6:
	{
	}
	{
		StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089* L_73 = ___0_dstValue;
		Il2CppFakeBox<StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089> L_74(il2cpp_rgctx_data(method->rgctx_data, 3), L_73);
		Type_t* L_75;
		L_75 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((&L_74), NULL);
		Type_t* L_76 = V_4;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_77;
		L_77 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_75, L_76, NULL);
		G_B41_0 = ((int32_t)(L_77));
		goto IL_01da;
	}

IL_01da:
	{
		V_16 = (bool)G_B41_0;
		bool L_78 = V_16;
		if (!L_78)
		{
			goto IL_01f4;
		}
	}
	{
		StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089* L_79 = ___0_dstValue;
		Type_t* L_80 = V_4;
		RuntimeObject* L_81;
		L_81 = Activator_CreateInstance_mFF030428C64FDDFACC74DFAC97388A1C628BFBCF(L_80, NULL);
		*(StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089*)L_79 = ((*(StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089*)UnBox(L_81, il2cpp_rgctx_data(method->rgctx_data, 3))));
	}

IL_01f4:
	{
	}

IL_01f5:
	{
		bool L_82 = V_5;
		V_17 = L_82;
		bool L_83 = V_17;
		if (!L_83)
		{
			goto IL_0236;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_84 = __this->___m_References;
		V_18 = (bool)((((RuntimeObject*)(Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*)L_84) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_85 = V_18;
		if (!L_85)
		{
			goto IL_0218;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_86 = (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*)il2cpp_codegen_object_new(Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329(L_86, Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_RuntimeMethod_var);
		__this->___m_References = L_86;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_References), (void*)L_86);
	}

IL_0218:
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_87 = __this->___m_References;
		StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089 L_88 = ___1_srcValue;
		StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089 L_89 = L_88;
		RuntimeObject* L_90 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_89);
		StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089* L_91 = ___0_dstValue;
		StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089 L_92 = (*(StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089*)L_91);
		StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089 L_93 = L_92;
		RuntimeObject* L_94 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_93);
		NullCheck(L_87);
		Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1(L_87, L_90, L_94, Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
	}

IL_0236:
	{
	}

IL_0237:
	{
		RuntimeObject* L_95 = __this->___m_Stack;
		V_0 = L_95;
		StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089* L_96 = ___0_dstValue;
		StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089 L_97 = (*(StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089*)L_96);
		StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089 L_98 = L_97;
		RuntimeObject* L_99 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_98);
		__this->___m_Stack = L_99;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Stack), (void*)L_99);
		il2cpp_codegen_initobj((&V_20), sizeof(VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE));
		VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE L_100 = V_20;
		bool L_101;
		L_101 = PropertyContainer_TryAccept_TisStyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089_mDD40AB576CCBA8847DD3C5DC38B09914537AF56F((RuntimeObject*)__this, (&___1_srcValue), (&V_19), L_100, il2cpp_rgctx_method(method->rgctx_data, 7));
		StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089* L_102 = ___0_dstValue;
		RuntimeObject* L_103 = __this->___m_Stack;
		*(StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089*)L_102 = ((*(StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089*)UnBox(L_103, il2cpp_rgctx_data(method->rgctx_data, 3))));
		RuntimeObject* L_104 = V_0;
		__this->___m_Stack = L_104;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Stack), (void*)L_104);
	}

IL_027c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManagedObjectClone_CloneValue_TisTextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05_mD4340BC97A879404DB779E2CADDDD21E802FAB6A_gshared (ManagedObjectClone_t6E754ED2624B829553A94A85A0D62AD51B58FCD6* __this, TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05* ___0_dstValue, TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05 ___1_srcValue, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	Type_t* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	RuntimeObject* V_9 = NULL;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t V_13 = 0;
	RuntimeObject* V_14 = NULL;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	int32_t V_19 = 0;
	VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE V_20;
	memset((&V_20), 0, sizeof(V_20));
	int32_t G_B5_0 = 0;
	int32_t G_B16_0 = 0;
	int32_t G_B22_0 = 0;
	int32_t G_B29_0 = 0;
	RuntimeArray* G_B32_0 = NULL;
	RuntimeArray* G_B31_0 = NULL;
	int32_t G_B33_0 = 0;
	int32_t G_B35_0 = 0;
	int32_t G_B41_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_0;
		L_0 = TypeTraits_1_get_IsContainer_m3D4A64F52976BCB0D13C18E6667B03A7DDCBACED_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05* L_2 = ___0_dstValue;
		TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05 L_3 = ___1_srcValue;
		*(TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05*)L_2 = L_3;
		goto IL_027c;
	}

IL_001a:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_4;
		L_4 = TypeTraits_1_get_CanBeNull_m867A30A06DF4DAE601C1437681BE61D0B03D0735_inline(il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05 L_5 = ___1_srcValue;
		G_B5_0 = ((int32_t)(false));
		goto IL_002d;
	}

IL_002c:
	{
		G_B5_0 = 0;
	}

IL_002d:
	{
		V_2 = (bool)G_B5_0;
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_003e;
		}
	}
	{
		TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05* L_7 = ___0_dstValue;
		il2cpp_codegen_initobj(L_7, sizeof(TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05));
		goto IL_027c;
	}

IL_003e:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_8;
		L_8 = TypeTraits_1_get_IsValueType_m6D68904DCEC1B9E468B23D863D622ED2F08B3ACB_inline(il2cpp_rgctx_method(method->rgctx_data, 5));
		V_3 = L_8;
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_0055;
		}
	}
	{
		TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05* L_10 = ___0_dstValue;
		il2cpp_codegen_initobj(L_10, sizeof(TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05));
		goto IL_0237;
	}

IL_0055:
	{
		Il2CppFakeBox<TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05> L_11(il2cpp_rgctx_data(method->rgctx_data, 3), (&___1_srcValue));
		Type_t* L_12;
		L_12 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((&L_11), NULL);
		V_4 = L_12;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		Type_t* L_15 = V_4;
		NullCheck(L_14);
		bool L_16;
		L_16 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_14, L_15);
		V_6 = L_16;
		bool L_17 = V_6;
		if (!L_17)
		{
			goto IL_0089;
		}
	}
	{
		TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05* L_18 = ___0_dstValue;
		TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05 L_19 = ___1_srcValue;
		*(TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05*)L_18 = L_19;
		goto IL_027c;
	}

IL_0089:
	{
		Type_t* L_20 = V_4;
		bool L_21;
		L_21 = TypeTraits_IsContainer_m46D04F3E3219371CC5F133E2CC54BCA46FD72505(L_20, NULL);
		V_7 = (bool)((((int32_t)L_21) == ((int32_t)0))? 1 : 0);
		bool L_22 = V_7;
		if (!L_22)
		{
			goto IL_00a6;
		}
	}
	{
		TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05* L_23 = ___0_dstValue;
		TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05 L_24 = ___1_srcValue;
		*(TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05*)L_23 = L_24;
		goto IL_027c;
	}

IL_00a6:
	{
		Type_t* L_25 = V_4;
		NullCheck(L_25);
		bool L_26;
		L_26 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_25, NULL);
		if (L_26)
		{
			goto IL_00c5;
		}
	}
	{
		Type_t* L_27 = V_4;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_28 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.string_class->byval_arg) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_29;
		L_29 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_28, NULL);
		bool L_30;
		L_30 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_27, L_29, NULL);
		G_B16_0 = ((((int32_t)L_30) == ((int32_t)0))? 1 : 0);
		goto IL_00c6;
	}

IL_00c5:
	{
		G_B16_0 = 0;
	}

IL_00c6:
	{
		V_5 = (bool)G_B16_0;
		bool L_31 = V_5;
		V_8 = L_31;
		bool L_32 = V_8;
		if (!L_32)
		{
			goto IL_0134;
		}
	}
	{
		RuntimeObject* L_33 = __this->___m_RootSource;
		TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05 L_34 = ___1_srcValue;
		TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05 L_35 = L_34;
		RuntimeObject* L_36 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_35);
		V_10 = (bool)((((RuntimeObject*)(RuntimeObject*)L_33) == ((RuntimeObject*)(RuntimeObject*)L_36))? 1 : 0);
		bool L_37 = V_10;
		if (!L_37)
		{
			goto IL_00fc;
		}
	}
	{
		TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05* L_38 = ___0_dstValue;
		RuntimeObject* L_39 = __this->___m_RootDestination;
		*(TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05*)L_38 = ((*(TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05*)UnBox(L_39, il2cpp_rgctx_data(method->rgctx_data, 3))));
		goto IL_027c;
	}

IL_00fc:
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_40 = __this->___m_References;
		if (!L_40)
		{
			goto IL_0119;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_41 = __this->___m_References;
		TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05 L_42 = ___1_srcValue;
		TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05 L_43 = L_42;
		RuntimeObject* L_44 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_43);
		NullCheck(L_41);
		bool L_45;
		L_45 = Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849(L_41, L_44, (&V_9), Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		G_B22_0 = ((int32_t)(L_45));
		goto IL_011a;
	}

IL_0119:
	{
		G_B22_0 = 0;
	}

IL_011a:
	{
		V_11 = (bool)G_B22_0;
		bool L_46 = V_11;
		if (!L_46)
		{
			goto IL_0133;
		}
	}
	{
		TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05* L_47 = ___0_dstValue;
		RuntimeObject* L_48 = V_9;
		*(TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05*)L_47 = ((*(TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05*)UnBox(L_48, il2cpp_rgctx_data(method->rgctx_data, 3))));
		goto IL_027c;
	}

IL_0133:
	{
	}

IL_0134:
	{
		Type_t* L_49 = V_4;
		NullCheck(L_49);
		bool L_50;
		L_50 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_49, NULL);
		V_12 = L_50;
		bool L_51 = V_12;
		if (!L_51)
		{
			goto IL_01b6;
		}
	}
	{
		TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05 L_52 = ___1_srcValue;
		TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05 L_53 = L_52;
		RuntimeObject* L_54 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_53);
		V_14 = (RuntimeObject*)NULL;
		RuntimeObject* L_55 = V_14;
		if (L_55)
		{
			goto IL_0156;
		}
	}
	{
		G_B29_0 = 0;
		goto IL_015d;
	}

IL_0156:
	{
		RuntimeObject* L_56 = V_14;
		NullCheck((RuntimeObject*)L_56);
		int32_t L_57;
		L_57 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_56);
		G_B29_0 = L_57;
	}

IL_015d:
	{
		V_13 = G_B29_0;
	}
	{
		TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05* L_59 = ___0_dstValue;
		TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05 L_60 = (*(TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05*)L_59);
		TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05 L_61 = L_60;
		RuntimeObject* L_62 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_61);
		RuntimeArray* L_63 = ((RuntimeArray*)IsInstClass((RuntimeObject*)L_62, il2cpp_defaults.array_class));
		if (L_63)
		{
			G_B32_0 = L_63;
			goto IL_0183;
		}
		G_B31_0 = L_63;
	}
	{
		G_B33_0 = 1;
		goto IL_018f;
	}

IL_0183:
	{
		NullCheck(G_B32_0);
		int32_t L_64;
		L_64 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(G_B32_0, NULL);
		int32_t L_65 = V_13;
		G_B33_0 = ((((int32_t)((((int32_t)L_64) == ((int32_t)L_65))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_018f:
	{
		G_B35_0 = G_B33_0;
		goto IL_0192;
	}

IL_0192:
	{
		V_15 = (bool)G_B35_0;
		bool L_66 = V_15;
		if (!L_66)
		{
			goto IL_01b3;
		}
	}
	{
		TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05* L_67 = ___0_dstValue;
		Type_t* L_68 = V_4;
		NullCheck(L_68);
		Type_t* L_69;
		L_69 = VirtualFuncInvoker0< Type_t* >::Invoke(48, L_68);
		int32_t L_70 = V_13;
		RuntimeArray* L_71;
		L_71 = Array_CreateInstance_m13B202130951A03AF5F52470A19E17D3AD2A8983(L_69, L_70, NULL);
		*(TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05*)L_67 = ((*(TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05*)UnBox((RuntimeObject*)L_71, il2cpp_rgctx_data(method->rgctx_data, 3))));
	}

IL_01b3:
	{
		goto IL_01f5;
	}

IL_01b6:
	{
	}
	{
		TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05* L_73 = ___0_dstValue;
		Il2CppFakeBox<TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05> L_74(il2cpp_rgctx_data(method->rgctx_data, 3), L_73);
		Type_t* L_75;
		L_75 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((&L_74), NULL);
		Type_t* L_76 = V_4;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_77;
		L_77 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_75, L_76, NULL);
		G_B41_0 = ((int32_t)(L_77));
		goto IL_01da;
	}

IL_01da:
	{
		V_16 = (bool)G_B41_0;
		bool L_78 = V_16;
		if (!L_78)
		{
			goto IL_01f4;
		}
	}
	{
		TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05* L_79 = ___0_dstValue;
		Type_t* L_80 = V_4;
		RuntimeObject* L_81;
		L_81 = Activator_CreateInstance_mFF030428C64FDDFACC74DFAC97388A1C628BFBCF(L_80, NULL);
		*(TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05*)L_79 = ((*(TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05*)UnBox(L_81, il2cpp_rgctx_data(method->rgctx_data, 3))));
	}

IL_01f4:
	{
	}

IL_01f5:
	{
		bool L_82 = V_5;
		V_17 = L_82;
		bool L_83 = V_17;
		if (!L_83)
		{
			goto IL_0236;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_84 = __this->___m_References;
		V_18 = (bool)((((RuntimeObject*)(Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*)L_84) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_85 = V_18;
		if (!L_85)
		{
			goto IL_0218;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_86 = (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*)il2cpp_codegen_object_new(Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329(L_86, Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_RuntimeMethod_var);
		__this->___m_References = L_86;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_References), (void*)L_86);
	}

IL_0218:
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_87 = __this->___m_References;
		TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05 L_88 = ___1_srcValue;
		TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05 L_89 = L_88;
		RuntimeObject* L_90 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_89);
		TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05* L_91 = ___0_dstValue;
		TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05 L_92 = (*(TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05*)L_91);
		TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05 L_93 = L_92;
		RuntimeObject* L_94 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_93);
		NullCheck(L_87);
		Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1(L_87, L_90, L_94, Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
	}

IL_0236:
	{
	}

IL_0237:
	{
		RuntimeObject* L_95 = __this->___m_Stack;
		V_0 = L_95;
		TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05* L_96 = ___0_dstValue;
		TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05 L_97 = (*(TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05*)L_96);
		TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05 L_98 = L_97;
		RuntimeObject* L_99 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_98);
		__this->___m_Stack = L_99;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Stack), (void*)L_99);
		il2cpp_codegen_initobj((&V_20), sizeof(VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE));
		VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE L_100 = V_20;
		bool L_101;
		L_101 = PropertyContainer_TryAccept_TisTextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05_m4ADF89A14B52E7B6CCBAFF6E49ACAE830A118224((RuntimeObject*)__this, (&___1_srcValue), (&V_19), L_100, il2cpp_rgctx_method(method->rgctx_data, 7));
		TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05* L_102 = ___0_dstValue;
		RuntimeObject* L_103 = __this->___m_Stack;
		*(TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05*)L_102 = ((*(TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05*)UnBox(L_103, il2cpp_rgctx_data(method->rgctx_data, 3))));
		RuntimeObject* L_104 = V_0;
		__this->___m_Stack = L_104;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Stack), (void*)L_104);
	}

IL_027c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManagedObjectClone_CloneValue_TisTimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E_mF07DB745CAF8FA92CEDD28FA68B8422FBE99B3DC_gshared (ManagedObjectClone_t6E754ED2624B829553A94A85A0D62AD51B58FCD6* __this, TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* ___0_dstValue, TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E ___1_srcValue, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	Type_t* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	RuntimeObject* V_9 = NULL;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t V_13 = 0;
	RuntimeObject* V_14 = NULL;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	int32_t V_19 = 0;
	VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE V_20;
	memset((&V_20), 0, sizeof(V_20));
	int32_t G_B5_0 = 0;
	int32_t G_B16_0 = 0;
	int32_t G_B22_0 = 0;
	int32_t G_B29_0 = 0;
	RuntimeArray* G_B32_0 = NULL;
	RuntimeArray* G_B31_0 = NULL;
	int32_t G_B33_0 = 0;
	int32_t G_B35_0 = 0;
	int32_t G_B41_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_0;
		L_0 = TypeTraits_1_get_IsContainer_m35FC9B6070CEB5A54D8C4333B165F7DCB68D66D9_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* L_2 = ___0_dstValue;
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E L_3 = ___1_srcValue;
		*(TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E*)L_2 = L_3;
		goto IL_027c;
	}

IL_001a:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_4;
		L_4 = TypeTraits_1_get_CanBeNull_mA68BE2F93E951687D0F1ABE4A6A4A65A00DBB8B3_inline(il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E L_5 = ___1_srcValue;
		G_B5_0 = ((int32_t)(false));
		goto IL_002d;
	}

IL_002c:
	{
		G_B5_0 = 0;
	}

IL_002d:
	{
		V_2 = (bool)G_B5_0;
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_003e;
		}
	}
	{
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* L_7 = ___0_dstValue;
		il2cpp_codegen_initobj(L_7, sizeof(TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E));
		goto IL_027c;
	}

IL_003e:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_8;
		L_8 = TypeTraits_1_get_IsValueType_m83BB11321A8205868232E6A9791231FCCAEE17E9_inline(il2cpp_rgctx_method(method->rgctx_data, 5));
		V_3 = L_8;
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_0055;
		}
	}
	{
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* L_10 = ___0_dstValue;
		il2cpp_codegen_initobj(L_10, sizeof(TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E));
		goto IL_0237;
	}

IL_0055:
	{
		Il2CppFakeBox<TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E> L_11(il2cpp_rgctx_data(method->rgctx_data, 3), (&___1_srcValue));
		Type_t* L_12;
		L_12 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((&L_11), NULL);
		V_4 = L_12;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		Type_t* L_15 = V_4;
		NullCheck(L_14);
		bool L_16;
		L_16 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_14, L_15);
		V_6 = L_16;
		bool L_17 = V_6;
		if (!L_17)
		{
			goto IL_0089;
		}
	}
	{
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* L_18 = ___0_dstValue;
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E L_19 = ___1_srcValue;
		*(TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E*)L_18 = L_19;
		goto IL_027c;
	}

IL_0089:
	{
		Type_t* L_20 = V_4;
		bool L_21;
		L_21 = TypeTraits_IsContainer_m46D04F3E3219371CC5F133E2CC54BCA46FD72505(L_20, NULL);
		V_7 = (bool)((((int32_t)L_21) == ((int32_t)0))? 1 : 0);
		bool L_22 = V_7;
		if (!L_22)
		{
			goto IL_00a6;
		}
	}
	{
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* L_23 = ___0_dstValue;
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E L_24 = ___1_srcValue;
		*(TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E*)L_23 = L_24;
		goto IL_027c;
	}

IL_00a6:
	{
		Type_t* L_25 = V_4;
		NullCheck(L_25);
		bool L_26;
		L_26 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_25, NULL);
		if (L_26)
		{
			goto IL_00c5;
		}
	}
	{
		Type_t* L_27 = V_4;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_28 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.string_class->byval_arg) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_29;
		L_29 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_28, NULL);
		bool L_30;
		L_30 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_27, L_29, NULL);
		G_B16_0 = ((((int32_t)L_30) == ((int32_t)0))? 1 : 0);
		goto IL_00c6;
	}

IL_00c5:
	{
		G_B16_0 = 0;
	}

IL_00c6:
	{
		V_5 = (bool)G_B16_0;
		bool L_31 = V_5;
		V_8 = L_31;
		bool L_32 = V_8;
		if (!L_32)
		{
			goto IL_0134;
		}
	}
	{
		RuntimeObject* L_33 = __this->___m_RootSource;
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E L_34 = ___1_srcValue;
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E L_35 = L_34;
		RuntimeObject* L_36 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_35);
		V_10 = (bool)((((RuntimeObject*)(RuntimeObject*)L_33) == ((RuntimeObject*)(RuntimeObject*)L_36))? 1 : 0);
		bool L_37 = V_10;
		if (!L_37)
		{
			goto IL_00fc;
		}
	}
	{
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* L_38 = ___0_dstValue;
		RuntimeObject* L_39 = __this->___m_RootDestination;
		*(TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E*)L_38 = ((*(TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E*)UnBox(L_39, il2cpp_rgctx_data(method->rgctx_data, 3))));
		goto IL_027c;
	}

IL_00fc:
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_40 = __this->___m_References;
		if (!L_40)
		{
			goto IL_0119;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_41 = __this->___m_References;
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E L_42 = ___1_srcValue;
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E L_43 = L_42;
		RuntimeObject* L_44 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_43);
		NullCheck(L_41);
		bool L_45;
		L_45 = Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849(L_41, L_44, (&V_9), Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		G_B22_0 = ((int32_t)(L_45));
		goto IL_011a;
	}

IL_0119:
	{
		G_B22_0 = 0;
	}

IL_011a:
	{
		V_11 = (bool)G_B22_0;
		bool L_46 = V_11;
		if (!L_46)
		{
			goto IL_0133;
		}
	}
	{
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* L_47 = ___0_dstValue;
		RuntimeObject* L_48 = V_9;
		*(TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E*)L_47 = ((*(TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E*)UnBox(L_48, il2cpp_rgctx_data(method->rgctx_data, 3))));
		goto IL_027c;
	}

IL_0133:
	{
	}

IL_0134:
	{
		Type_t* L_49 = V_4;
		NullCheck(L_49);
		bool L_50;
		L_50 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_49, NULL);
		V_12 = L_50;
		bool L_51 = V_12;
		if (!L_51)
		{
			goto IL_01b6;
		}
	}
	{
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E L_52 = ___1_srcValue;
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E L_53 = L_52;
		RuntimeObject* L_54 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_53);
		V_14 = (RuntimeObject*)NULL;
		RuntimeObject* L_55 = V_14;
		if (L_55)
		{
			goto IL_0156;
		}
	}
	{
		G_B29_0 = 0;
		goto IL_015d;
	}

IL_0156:
	{
		RuntimeObject* L_56 = V_14;
		NullCheck((RuntimeObject*)L_56);
		int32_t L_57;
		L_57 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_56);
		G_B29_0 = L_57;
	}

IL_015d:
	{
		V_13 = G_B29_0;
	}
	{
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* L_59 = ___0_dstValue;
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E L_60 = (*(TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E*)L_59);
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E L_61 = L_60;
		RuntimeObject* L_62 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_61);
		RuntimeArray* L_63 = ((RuntimeArray*)IsInstClass((RuntimeObject*)L_62, il2cpp_defaults.array_class));
		if (L_63)
		{
			G_B32_0 = L_63;
			goto IL_0183;
		}
		G_B31_0 = L_63;
	}
	{
		G_B33_0 = 1;
		goto IL_018f;
	}

IL_0183:
	{
		NullCheck(G_B32_0);
		int32_t L_64;
		L_64 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(G_B32_0, NULL);
		int32_t L_65 = V_13;
		G_B33_0 = ((((int32_t)((((int32_t)L_64) == ((int32_t)L_65))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_018f:
	{
		G_B35_0 = G_B33_0;
		goto IL_0192;
	}

IL_0192:
	{
		V_15 = (bool)G_B35_0;
		bool L_66 = V_15;
		if (!L_66)
		{
			goto IL_01b3;
		}
	}
	{
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* L_67 = ___0_dstValue;
		Type_t* L_68 = V_4;
		NullCheck(L_68);
		Type_t* L_69;
		L_69 = VirtualFuncInvoker0< Type_t* >::Invoke(48, L_68);
		int32_t L_70 = V_13;
		RuntimeArray* L_71;
		L_71 = Array_CreateInstance_m13B202130951A03AF5F52470A19E17D3AD2A8983(L_69, L_70, NULL);
		*(TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E*)L_67 = ((*(TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E*)UnBox((RuntimeObject*)L_71, il2cpp_rgctx_data(method->rgctx_data, 3))));
	}

IL_01b3:
	{
		goto IL_01f5;
	}

IL_01b6:
	{
	}
	{
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* L_73 = ___0_dstValue;
		Il2CppFakeBox<TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E> L_74(il2cpp_rgctx_data(method->rgctx_data, 3), L_73);
		Type_t* L_75;
		L_75 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((&L_74), NULL);
		Type_t* L_76 = V_4;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_77;
		L_77 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_75, L_76, NULL);
		G_B41_0 = ((int32_t)(L_77));
		goto IL_01da;
	}

IL_01da:
	{
		V_16 = (bool)G_B41_0;
		bool L_78 = V_16;
		if (!L_78)
		{
			goto IL_01f4;
		}
	}
	{
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* L_79 = ___0_dstValue;
		Type_t* L_80 = V_4;
		RuntimeObject* L_81;
		L_81 = Activator_CreateInstance_mFF030428C64FDDFACC74DFAC97388A1C628BFBCF(L_80, NULL);
		*(TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E*)L_79 = ((*(TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E*)UnBox(L_81, il2cpp_rgctx_data(method->rgctx_data, 3))));
	}

IL_01f4:
	{
	}

IL_01f5:
	{
		bool L_82 = V_5;
		V_17 = L_82;
		bool L_83 = V_17;
		if (!L_83)
		{
			goto IL_0236;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_84 = __this->___m_References;
		V_18 = (bool)((((RuntimeObject*)(Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*)L_84) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_85 = V_18;
		if (!L_85)
		{
			goto IL_0218;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_86 = (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*)il2cpp_codegen_object_new(Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329(L_86, Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_RuntimeMethod_var);
		__this->___m_References = L_86;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_References), (void*)L_86);
	}

IL_0218:
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_87 = __this->___m_References;
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E L_88 = ___1_srcValue;
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E L_89 = L_88;
		RuntimeObject* L_90 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_89);
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* L_91 = ___0_dstValue;
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E L_92 = (*(TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E*)L_91);
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E L_93 = L_92;
		RuntimeObject* L_94 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_93);
		NullCheck(L_87);
		Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1(L_87, L_90, L_94, Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
	}

IL_0236:
	{
	}

IL_0237:
	{
		RuntimeObject* L_95 = __this->___m_Stack;
		V_0 = L_95;
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* L_96 = ___0_dstValue;
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E L_97 = (*(TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E*)L_96);
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E L_98 = L_97;
		RuntimeObject* L_99 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_98);
		__this->___m_Stack = L_99;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Stack), (void*)L_99);
		il2cpp_codegen_initobj((&V_20), sizeof(VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE));
		VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE L_100 = V_20;
		bool L_101;
		L_101 = PropertyContainer_TryAccept_TisTimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E_m819FAFDED283FA7D709E3A9C5E5452897535732A((RuntimeObject*)__this, (&___1_srcValue), (&V_19), L_100, il2cpp_rgctx_method(method->rgctx_data, 7));
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* L_102 = ___0_dstValue;
		RuntimeObject* L_103 = __this->___m_Stack;
		*(TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E*)L_102 = ((*(TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E*)UnBox(L_103, il2cpp_rgctx_data(method->rgctx_data, 3))));
		RuntimeObject* L_104 = V_0;
		__this->___m_Stack = L_104;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Stack), (void*)L_104);
	}

IL_027c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManagedObjectClone_CloneValue_TisTransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502_m3AECC1E2BFA4064F002AFD05EECFBBE46F2D4C0D_gshared (ManagedObjectClone_t6E754ED2624B829553A94A85A0D62AD51B58FCD6* __this, TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* ___0_dstValue, TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 ___1_srcValue, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	Type_t* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	RuntimeObject* V_9 = NULL;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t V_13 = 0;
	RuntimeObject* V_14 = NULL;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	int32_t V_19 = 0;
	VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE V_20;
	memset((&V_20), 0, sizeof(V_20));
	int32_t G_B5_0 = 0;
	int32_t G_B16_0 = 0;
	int32_t G_B22_0 = 0;
	int32_t G_B29_0 = 0;
	RuntimeArray* G_B32_0 = NULL;
	RuntimeArray* G_B31_0 = NULL;
	int32_t G_B33_0 = 0;
	int32_t G_B35_0 = 0;
	int32_t G_B41_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_0;
		L_0 = TypeTraits_1_get_IsContainer_m6A352A501393CAE8E5F280361DA8F7D8C4689AF9_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* L_2 = ___0_dstValue;
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 L_3 = ___1_srcValue;
		*(TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502*)L_2 = L_3;
		goto IL_027c;
	}

IL_001a:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_4;
		L_4 = TypeTraits_1_get_CanBeNull_mAC32D5C4424D52F5A3E7FE46DC053073AC0B2521_inline(il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 L_5 = ___1_srcValue;
		G_B5_0 = ((int32_t)(false));
		goto IL_002d;
	}

IL_002c:
	{
		G_B5_0 = 0;
	}

IL_002d:
	{
		V_2 = (bool)G_B5_0;
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_003e;
		}
	}
	{
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* L_7 = ___0_dstValue;
		il2cpp_codegen_initobj(L_7, sizeof(TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502));
		goto IL_027c;
	}

IL_003e:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_8;
		L_8 = TypeTraits_1_get_IsValueType_m908C71E0F54A69691D54C444E2C23EF5C540FD1F_inline(il2cpp_rgctx_method(method->rgctx_data, 5));
		V_3 = L_8;
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_0055;
		}
	}
	{
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* L_10 = ___0_dstValue;
		il2cpp_codegen_initobj(L_10, sizeof(TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502));
		goto IL_0237;
	}

IL_0055:
	{
		Il2CppFakeBox<TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502> L_11(il2cpp_rgctx_data(method->rgctx_data, 3), (&___1_srcValue));
		Type_t* L_12;
		L_12 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((&L_11), NULL);
		V_4 = L_12;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		Type_t* L_15 = V_4;
		NullCheck(L_14);
		bool L_16;
		L_16 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_14, L_15);
		V_6 = L_16;
		bool L_17 = V_6;
		if (!L_17)
		{
			goto IL_0089;
		}
	}
	{
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* L_18 = ___0_dstValue;
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 L_19 = ___1_srcValue;
		*(TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502*)L_18 = L_19;
		goto IL_027c;
	}

IL_0089:
	{
		Type_t* L_20 = V_4;
		bool L_21;
		L_21 = TypeTraits_IsContainer_m46D04F3E3219371CC5F133E2CC54BCA46FD72505(L_20, NULL);
		V_7 = (bool)((((int32_t)L_21) == ((int32_t)0))? 1 : 0);
		bool L_22 = V_7;
		if (!L_22)
		{
			goto IL_00a6;
		}
	}
	{
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* L_23 = ___0_dstValue;
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 L_24 = ___1_srcValue;
		*(TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502*)L_23 = L_24;
		goto IL_027c;
	}

IL_00a6:
	{
		Type_t* L_25 = V_4;
		NullCheck(L_25);
		bool L_26;
		L_26 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_25, NULL);
		if (L_26)
		{
			goto IL_00c5;
		}
	}
	{
		Type_t* L_27 = V_4;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_28 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.string_class->byval_arg) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_29;
		L_29 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_28, NULL);
		bool L_30;
		L_30 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_27, L_29, NULL);
		G_B16_0 = ((((int32_t)L_30) == ((int32_t)0))? 1 : 0);
		goto IL_00c6;
	}

IL_00c5:
	{
		G_B16_0 = 0;
	}

IL_00c6:
	{
		V_5 = (bool)G_B16_0;
		bool L_31 = V_5;
		V_8 = L_31;
		bool L_32 = V_8;
		if (!L_32)
		{
			goto IL_0134;
		}
	}
	{
		RuntimeObject* L_33 = __this->___m_RootSource;
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 L_34 = ___1_srcValue;
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 L_35 = L_34;
		RuntimeObject* L_36 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_35);
		V_10 = (bool)((((RuntimeObject*)(RuntimeObject*)L_33) == ((RuntimeObject*)(RuntimeObject*)L_36))? 1 : 0);
		bool L_37 = V_10;
		if (!L_37)
		{
			goto IL_00fc;
		}
	}
	{
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* L_38 = ___0_dstValue;
		RuntimeObject* L_39 = __this->___m_RootDestination;
		*(TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502*)L_38 = ((*(TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502*)UnBox(L_39, il2cpp_rgctx_data(method->rgctx_data, 3))));
		goto IL_027c;
	}

IL_00fc:
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_40 = __this->___m_References;
		if (!L_40)
		{
			goto IL_0119;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_41 = __this->___m_References;
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 L_42 = ___1_srcValue;
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 L_43 = L_42;
		RuntimeObject* L_44 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_43);
		NullCheck(L_41);
		bool L_45;
		L_45 = Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849(L_41, L_44, (&V_9), Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		G_B22_0 = ((int32_t)(L_45));
		goto IL_011a;
	}

IL_0119:
	{
		G_B22_0 = 0;
	}

IL_011a:
	{
		V_11 = (bool)G_B22_0;
		bool L_46 = V_11;
		if (!L_46)
		{
			goto IL_0133;
		}
	}
	{
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* L_47 = ___0_dstValue;
		RuntimeObject* L_48 = V_9;
		*(TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502*)L_47 = ((*(TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502*)UnBox(L_48, il2cpp_rgctx_data(method->rgctx_data, 3))));
		goto IL_027c;
	}

IL_0133:
	{
	}

IL_0134:
	{
		Type_t* L_49 = V_4;
		NullCheck(L_49);
		bool L_50;
		L_50 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_49, NULL);
		V_12 = L_50;
		bool L_51 = V_12;
		if (!L_51)
		{
			goto IL_01b6;
		}
	}
	{
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 L_52 = ___1_srcValue;
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 L_53 = L_52;
		RuntimeObject* L_54 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_53);
		V_14 = (RuntimeObject*)NULL;
		RuntimeObject* L_55 = V_14;
		if (L_55)
		{
			goto IL_0156;
		}
	}
	{
		G_B29_0 = 0;
		goto IL_015d;
	}

IL_0156:
	{
		RuntimeObject* L_56 = V_14;
		NullCheck((RuntimeObject*)L_56);
		int32_t L_57;
		L_57 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_56);
		G_B29_0 = L_57;
	}

IL_015d:
	{
		V_13 = G_B29_0;
	}
	{
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* L_59 = ___0_dstValue;
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 L_60 = (*(TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502*)L_59);
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 L_61 = L_60;
		RuntimeObject* L_62 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_61);
		RuntimeArray* L_63 = ((RuntimeArray*)IsInstClass((RuntimeObject*)L_62, il2cpp_defaults.array_class));
		if (L_63)
		{
			G_B32_0 = L_63;
			goto IL_0183;
		}
		G_B31_0 = L_63;
	}
	{
		G_B33_0 = 1;
		goto IL_018f;
	}

IL_0183:
	{
		NullCheck(G_B32_0);
		int32_t L_64;
		L_64 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(G_B32_0, NULL);
		int32_t L_65 = V_13;
		G_B33_0 = ((((int32_t)((((int32_t)L_64) == ((int32_t)L_65))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_018f:
	{
		G_B35_0 = G_B33_0;
		goto IL_0192;
	}

IL_0192:
	{
		V_15 = (bool)G_B35_0;
		bool L_66 = V_15;
		if (!L_66)
		{
			goto IL_01b3;
		}
	}
	{
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* L_67 = ___0_dstValue;
		Type_t* L_68 = V_4;
		NullCheck(L_68);
		Type_t* L_69;
		L_69 = VirtualFuncInvoker0< Type_t* >::Invoke(48, L_68);
		int32_t L_70 = V_13;
		RuntimeArray* L_71;
		L_71 = Array_CreateInstance_m13B202130951A03AF5F52470A19E17D3AD2A8983(L_69, L_70, NULL);
		*(TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502*)L_67 = ((*(TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502*)UnBox((RuntimeObject*)L_71, il2cpp_rgctx_data(method->rgctx_data, 3))));
	}

IL_01b3:
	{
		goto IL_01f5;
	}

IL_01b6:
	{
	}
	{
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* L_73 = ___0_dstValue;
		Il2CppFakeBox<TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502> L_74(il2cpp_rgctx_data(method->rgctx_data, 3), L_73);
		Type_t* L_75;
		L_75 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((&L_74), NULL);
		Type_t* L_76 = V_4;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_77;
		L_77 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_75, L_76, NULL);
		G_B41_0 = ((int32_t)(L_77));
		goto IL_01da;
	}

IL_01da:
	{
		V_16 = (bool)G_B41_0;
		bool L_78 = V_16;
		if (!L_78)
		{
			goto IL_01f4;
		}
	}
	{
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* L_79 = ___0_dstValue;
		Type_t* L_80 = V_4;
		RuntimeObject* L_81;
		L_81 = Activator_CreateInstance_mFF030428C64FDDFACC74DFAC97388A1C628BFBCF(L_80, NULL);
		*(TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502*)L_79 = ((*(TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502*)UnBox(L_81, il2cpp_rgctx_data(method->rgctx_data, 3))));
	}

IL_01f4:
	{
	}

IL_01f5:
	{
		bool L_82 = V_5;
		V_17 = L_82;
		bool L_83 = V_17;
		if (!L_83)
		{
			goto IL_0236;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_84 = __this->___m_References;
		V_18 = (bool)((((RuntimeObject*)(Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*)L_84) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_85 = V_18;
		if (!L_85)
		{
			goto IL_0218;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_86 = (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*)il2cpp_codegen_object_new(Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329(L_86, Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_RuntimeMethod_var);
		__this->___m_References = L_86;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_References), (void*)L_86);
	}

IL_0218:
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_87 = __this->___m_References;
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 L_88 = ___1_srcValue;
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 L_89 = L_88;
		RuntimeObject* L_90 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_89);
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* L_91 = ___0_dstValue;
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 L_92 = (*(TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502*)L_91);
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 L_93 = L_92;
		RuntimeObject* L_94 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_93);
		NullCheck(L_87);
		Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1(L_87, L_90, L_94, Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
	}

IL_0236:
	{
	}

IL_0237:
	{
		RuntimeObject* L_95 = __this->___m_Stack;
		V_0 = L_95;
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* L_96 = ___0_dstValue;
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 L_97 = (*(TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502*)L_96);
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 L_98 = L_97;
		RuntimeObject* L_99 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_98);
		__this->___m_Stack = L_99;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Stack), (void*)L_99);
		il2cpp_codegen_initobj((&V_20), sizeof(VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE));
		VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE L_100 = V_20;
		bool L_101;
		L_101 = PropertyContainer_TryAccept_TisTransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502_mE5EBF77562B54CD1975DF95AFDDBBA0B8B0BF9E4((RuntimeObject*)__this, (&___1_srcValue), (&V_19), L_100, il2cpp_rgctx_method(method->rgctx_data, 7));
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* L_102 = ___0_dstValue;
		RuntimeObject* L_103 = __this->___m_Stack;
		*(TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502*)L_102 = ((*(TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502*)UnBox(L_103, il2cpp_rgctx_data(method->rgctx_data, 3))));
		RuntimeObject* L_104 = V_0;
		__this->___m_Stack = L_104;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Stack), (void*)L_104);
	}

IL_027c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManagedObjectClone_CloneValue_TisTranslate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_m8B59EFB23AAE7744DE0AEF22B254F6CD3AE2C00E_gshared (ManagedObjectClone_t6E754ED2624B829553A94A85A0D62AD51B58FCD6* __this, Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* ___0_dstValue, Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E ___1_srcValue, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	Type_t* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	RuntimeObject* V_9 = NULL;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t V_13 = 0;
	RuntimeObject* V_14 = NULL;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	int32_t V_19 = 0;
	VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE V_20;
	memset((&V_20), 0, sizeof(V_20));
	int32_t G_B5_0 = 0;
	int32_t G_B16_0 = 0;
	int32_t G_B22_0 = 0;
	int32_t G_B29_0 = 0;
	RuntimeArray* G_B32_0 = NULL;
	RuntimeArray* G_B31_0 = NULL;
	int32_t G_B33_0 = 0;
	int32_t G_B35_0 = 0;
	int32_t G_B41_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_0;
		L_0 = TypeTraits_1_get_IsContainer_m5324709E9C1E2AFCCE54DFE57CA9E5A134A5D7FC_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* L_2 = ___0_dstValue;
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E L_3 = ___1_srcValue;
		*(Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E*)L_2 = L_3;
		goto IL_027c;
	}

IL_001a:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_4;
		L_4 = TypeTraits_1_get_CanBeNull_mA069B0BDEC214B763CC8ECBCE3B72C13664A29E8_inline(il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E L_5 = ___1_srcValue;
		G_B5_0 = ((int32_t)(false));
		goto IL_002d;
	}

IL_002c:
	{
		G_B5_0 = 0;
	}

IL_002d:
	{
		V_2 = (bool)G_B5_0;
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_003e;
		}
	}
	{
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* L_7 = ___0_dstValue;
		il2cpp_codegen_initobj(L_7, sizeof(Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E));
		goto IL_027c;
	}

IL_003e:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_8;
		L_8 = TypeTraits_1_get_IsValueType_m468FD08CF92AA9CE1355826B4E5A8A7B92647567_inline(il2cpp_rgctx_method(method->rgctx_data, 5));
		V_3 = L_8;
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_0055;
		}
	}
	{
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* L_10 = ___0_dstValue;
		il2cpp_codegen_initobj(L_10, sizeof(Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E));
		goto IL_0237;
	}

IL_0055:
	{
		Il2CppFakeBox<Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E> L_11(il2cpp_rgctx_data(method->rgctx_data, 3), (&___1_srcValue));
		Type_t* L_12;
		L_12 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((&L_11), NULL);
		V_4 = L_12;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		Type_t* L_15 = V_4;
		NullCheck(L_14);
		bool L_16;
		L_16 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_14, L_15);
		V_6 = L_16;
		bool L_17 = V_6;
		if (!L_17)
		{
			goto IL_0089;
		}
	}
	{
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* L_18 = ___0_dstValue;
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E L_19 = ___1_srcValue;
		*(Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E*)L_18 = L_19;
		goto IL_027c;
	}

IL_0089:
	{
		Type_t* L_20 = V_4;
		bool L_21;
		L_21 = TypeTraits_IsContainer_m46D04F3E3219371CC5F133E2CC54BCA46FD72505(L_20, NULL);
		V_7 = (bool)((((int32_t)L_21) == ((int32_t)0))? 1 : 0);
		bool L_22 = V_7;
		if (!L_22)
		{
			goto IL_00a6;
		}
	}
	{
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* L_23 = ___0_dstValue;
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E L_24 = ___1_srcValue;
		*(Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E*)L_23 = L_24;
		goto IL_027c;
	}

IL_00a6:
	{
		Type_t* L_25 = V_4;
		NullCheck(L_25);
		bool L_26;
		L_26 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_25, NULL);
		if (L_26)
		{
			goto IL_00c5;
		}
	}
	{
		Type_t* L_27 = V_4;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_28 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.string_class->byval_arg) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_29;
		L_29 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_28, NULL);
		bool L_30;
		L_30 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_27, L_29, NULL);
		G_B16_0 = ((((int32_t)L_30) == ((int32_t)0))? 1 : 0);
		goto IL_00c6;
	}

IL_00c5:
	{
		G_B16_0 = 0;
	}

IL_00c6:
	{
		V_5 = (bool)G_B16_0;
		bool L_31 = V_5;
		V_8 = L_31;
		bool L_32 = V_8;
		if (!L_32)
		{
			goto IL_0134;
		}
	}
	{
		RuntimeObject* L_33 = __this->___m_RootSource;
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E L_34 = ___1_srcValue;
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E L_35 = L_34;
		RuntimeObject* L_36 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_35);
		V_10 = (bool)((((RuntimeObject*)(RuntimeObject*)L_33) == ((RuntimeObject*)(RuntimeObject*)L_36))? 1 : 0);
		bool L_37 = V_10;
		if (!L_37)
		{
			goto IL_00fc;
		}
	}
	{
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* L_38 = ___0_dstValue;
		RuntimeObject* L_39 = __this->___m_RootDestination;
		*(Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E*)L_38 = ((*(Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E*)UnBox(L_39, il2cpp_rgctx_data(method->rgctx_data, 3))));
		goto IL_027c;
	}

IL_00fc:
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_40 = __this->___m_References;
		if (!L_40)
		{
			goto IL_0119;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_41 = __this->___m_References;
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E L_42 = ___1_srcValue;
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E L_43 = L_42;
		RuntimeObject* L_44 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_43);
		NullCheck(L_41);
		bool L_45;
		L_45 = Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849(L_41, L_44, (&V_9), Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		G_B22_0 = ((int32_t)(L_45));
		goto IL_011a;
	}

IL_0119:
	{
		G_B22_0 = 0;
	}

IL_011a:
	{
		V_11 = (bool)G_B22_0;
		bool L_46 = V_11;
		if (!L_46)
		{
			goto IL_0133;
		}
	}
	{
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* L_47 = ___0_dstValue;
		RuntimeObject* L_48 = V_9;
		*(Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E*)L_47 = ((*(Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E*)UnBox(L_48, il2cpp_rgctx_data(method->rgctx_data, 3))));
		goto IL_027c;
	}

IL_0133:
	{
	}

IL_0134:
	{
		Type_t* L_49 = V_4;
		NullCheck(L_49);
		bool L_50;
		L_50 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_49, NULL);
		V_12 = L_50;
		bool L_51 = V_12;
		if (!L_51)
		{
			goto IL_01b6;
		}
	}
	{
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E L_52 = ___1_srcValue;
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E L_53 = L_52;
		RuntimeObject* L_54 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_53);
		V_14 = (RuntimeObject*)NULL;
		RuntimeObject* L_55 = V_14;
		if (L_55)
		{
			goto IL_0156;
		}
	}
	{
		G_B29_0 = 0;
		goto IL_015d;
	}

IL_0156:
	{
		RuntimeObject* L_56 = V_14;
		NullCheck((RuntimeObject*)L_56);
		int32_t L_57;
		L_57 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_56);
		G_B29_0 = L_57;
	}

IL_015d:
	{
		V_13 = G_B29_0;
	}
	{
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* L_59 = ___0_dstValue;
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E L_60 = (*(Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E*)L_59);
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E L_61 = L_60;
		RuntimeObject* L_62 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_61);
		RuntimeArray* L_63 = ((RuntimeArray*)IsInstClass((RuntimeObject*)L_62, il2cpp_defaults.array_class));
		if (L_63)
		{
			G_B32_0 = L_63;
			goto IL_0183;
		}
		G_B31_0 = L_63;
	}
	{
		G_B33_0 = 1;
		goto IL_018f;
	}

IL_0183:
	{
		NullCheck(G_B32_0);
		int32_t L_64;
		L_64 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(G_B32_0, NULL);
		int32_t L_65 = V_13;
		G_B33_0 = ((((int32_t)((((int32_t)L_64) == ((int32_t)L_65))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_018f:
	{
		G_B35_0 = G_B33_0;
		goto IL_0192;
	}

IL_0192:
	{
		V_15 = (bool)G_B35_0;
		bool L_66 = V_15;
		if (!L_66)
		{
			goto IL_01b3;
		}
	}
	{
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* L_67 = ___0_dstValue;
		Type_t* L_68 = V_4;
		NullCheck(L_68);
		Type_t* L_69;
		L_69 = VirtualFuncInvoker0< Type_t* >::Invoke(48, L_68);
		int32_t L_70 = V_13;
		RuntimeArray* L_71;
		L_71 = Array_CreateInstance_m13B202130951A03AF5F52470A19E17D3AD2A8983(L_69, L_70, NULL);
		*(Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E*)L_67 = ((*(Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E*)UnBox((RuntimeObject*)L_71, il2cpp_rgctx_data(method->rgctx_data, 3))));
	}

IL_01b3:
	{
		goto IL_01f5;
	}

IL_01b6:
	{
	}
	{
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* L_73 = ___0_dstValue;
		Il2CppFakeBox<Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E> L_74(il2cpp_rgctx_data(method->rgctx_data, 3), L_73);
		Type_t* L_75;
		L_75 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((&L_74), NULL);
		Type_t* L_76 = V_4;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_77;
		L_77 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_75, L_76, NULL);
		G_B41_0 = ((int32_t)(L_77));
		goto IL_01da;
	}

IL_01da:
	{
		V_16 = (bool)G_B41_0;
		bool L_78 = V_16;
		if (!L_78)
		{
			goto IL_01f4;
		}
	}
	{
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* L_79 = ___0_dstValue;
		Type_t* L_80 = V_4;
		RuntimeObject* L_81;
		L_81 = Activator_CreateInstance_mFF030428C64FDDFACC74DFAC97388A1C628BFBCF(L_80, NULL);
		*(Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E*)L_79 = ((*(Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E*)UnBox(L_81, il2cpp_rgctx_data(method->rgctx_data, 3))));
	}

IL_01f4:
	{
	}

IL_01f5:
	{
		bool L_82 = V_5;
		V_17 = L_82;
		bool L_83 = V_17;
		if (!L_83)
		{
			goto IL_0236;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_84 = __this->___m_References;
		V_18 = (bool)((((RuntimeObject*)(Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*)L_84) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_85 = V_18;
		if (!L_85)
		{
			goto IL_0218;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_86 = (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*)il2cpp_codegen_object_new(Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329(L_86, Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_RuntimeMethod_var);
		__this->___m_References = L_86;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_References), (void*)L_86);
	}

IL_0218:
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_87 = __this->___m_References;
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E L_88 = ___1_srcValue;
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E L_89 = L_88;
		RuntimeObject* L_90 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_89);
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* L_91 = ___0_dstValue;
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E L_92 = (*(Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E*)L_91);
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E L_93 = L_92;
		RuntimeObject* L_94 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_93);
		NullCheck(L_87);
		Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1(L_87, L_90, L_94, Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
	}

IL_0236:
	{
	}

IL_0237:
	{
		RuntimeObject* L_95 = __this->___m_Stack;
		V_0 = L_95;
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* L_96 = ___0_dstValue;
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E L_97 = (*(Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E*)L_96);
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E L_98 = L_97;
		RuntimeObject* L_99 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_98);
		__this->___m_Stack = L_99;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Stack), (void*)L_99);
		il2cpp_codegen_initobj((&V_20), sizeof(VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE));
		VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE L_100 = V_20;
		bool L_101;
		L_101 = PropertyContainer_TryAccept_TisTranslate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_m13B506EBE2662AA1EC36B1496B8EC4914253AAB1((RuntimeObject*)__this, (&___1_srcValue), (&V_19), L_100, il2cpp_rgctx_method(method->rgctx_data, 7));
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* L_102 = ___0_dstValue;
		RuntimeObject* L_103 = __this->___m_Stack;
		*(Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E*)L_102 = ((*(Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E*)UnBox(L_103, il2cpp_rgctx_data(method->rgctx_data, 3))));
		RuntimeObject* L_104 = V_0;
		__this->___m_Stack = L_104;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Stack), (void*)L_104);
	}

IL_027c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManagedObjectClone_CloneValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m1EAE983A71545FBCEDBDA2012B9D7DDD756339F7_gshared (ManagedObjectClone_t6E754ED2624B829553A94A85A0D62AD51B58FCD6* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___0_dstValue, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_srcValue, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	Type_t* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	RuntimeObject* V_9 = NULL;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t V_13 = 0;
	RuntimeObject* V_14 = NULL;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	int32_t V_19 = 0;
	VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE V_20;
	memset((&V_20), 0, sizeof(V_20));
	int32_t G_B5_0 = 0;
	int32_t G_B16_0 = 0;
	int32_t G_B22_0 = 0;
	int32_t G_B29_0 = 0;
	RuntimeArray* G_B32_0 = NULL;
	RuntimeArray* G_B31_0 = NULL;
	int32_t G_B33_0 = 0;
	int32_t G_B35_0 = 0;
	int32_t G_B41_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_0;
		L_0 = TypeTraits_1_get_IsContainer_m3CE73AFB74643BE29712805CBCAAE3AA11CEBA7F_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_2 = ___0_dstValue;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___1_srcValue;
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_2 = L_3;
		goto IL_027c;
	}

IL_001a:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_4;
		L_4 = TypeTraits_1_get_CanBeNull_m81BDFE95146A69F74EE7C1A8E7AF5B5700CF0BB3_inline(il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = ___1_srcValue;
		G_B5_0 = ((int32_t)(false));
		goto IL_002d;
	}

IL_002c:
	{
		G_B5_0 = 0;
	}

IL_002d:
	{
		V_2 = (bool)G_B5_0;
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_003e;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_7 = ___0_dstValue;
		il2cpp_codegen_initobj(L_7, sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		goto IL_027c;
	}

IL_003e:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_8;
		L_8 = TypeTraits_1_get_IsValueType_mC876849E832B2360A89D63D4816C6D9EF7994527_inline(il2cpp_rgctx_method(method->rgctx_data, 5));
		V_3 = L_8;
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_0055;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_10 = ___0_dstValue;
		il2cpp_codegen_initobj(L_10, sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		goto IL_0237;
	}

IL_0055:
	{
		Il2CppFakeBox<Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7> L_11(il2cpp_rgctx_data(method->rgctx_data, 3), (&___1_srcValue));
		Type_t* L_12;
		L_12 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((&L_11), NULL);
		V_4 = L_12;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		Type_t* L_15 = V_4;
		NullCheck(L_14);
		bool L_16;
		L_16 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_14, L_15);
		V_6 = L_16;
		bool L_17 = V_6;
		if (!L_17)
		{
			goto IL_0089;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_18 = ___0_dstValue;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19 = ___1_srcValue;
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_18 = L_19;
		goto IL_027c;
	}

IL_0089:
	{
		Type_t* L_20 = V_4;
		bool L_21;
		L_21 = TypeTraits_IsContainer_m46D04F3E3219371CC5F133E2CC54BCA46FD72505(L_20, NULL);
		V_7 = (bool)((((int32_t)L_21) == ((int32_t)0))? 1 : 0);
		bool L_22 = V_7;
		if (!L_22)
		{
			goto IL_00a6;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_23 = ___0_dstValue;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_24 = ___1_srcValue;
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_23 = L_24;
		goto IL_027c;
	}

IL_00a6:
	{
		Type_t* L_25 = V_4;
		NullCheck(L_25);
		bool L_26;
		L_26 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_25, NULL);
		if (L_26)
		{
			goto IL_00c5;
		}
	}
	{
		Type_t* L_27 = V_4;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_28 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.string_class->byval_arg) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_29;
		L_29 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_28, NULL);
		bool L_30;
		L_30 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_27, L_29, NULL);
		G_B16_0 = ((((int32_t)L_30) == ((int32_t)0))? 1 : 0);
		goto IL_00c6;
	}

IL_00c5:
	{
		G_B16_0 = 0;
	}

IL_00c6:
	{
		V_5 = (bool)G_B16_0;
		bool L_31 = V_5;
		V_8 = L_31;
		bool L_32 = V_8;
		if (!L_32)
		{
			goto IL_0134;
		}
	}
	{
		RuntimeObject* L_33 = __this->___m_RootSource;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_34 = ___1_srcValue;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_35 = L_34;
		RuntimeObject* L_36 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_35);
		V_10 = (bool)((((RuntimeObject*)(RuntimeObject*)L_33) == ((RuntimeObject*)(RuntimeObject*)L_36))? 1 : 0);
		bool L_37 = V_10;
		if (!L_37)
		{
			goto IL_00fc;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_38 = ___0_dstValue;
		RuntimeObject* L_39 = __this->___m_RootDestination;
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_38 = ((*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)UnBox(L_39, il2cpp_rgctx_data(method->rgctx_data, 3))));
		goto IL_027c;
	}

IL_00fc:
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_40 = __this->___m_References;
		if (!L_40)
		{
			goto IL_0119;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_41 = __this->___m_References;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_42 = ___1_srcValue;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_43 = L_42;
		RuntimeObject* L_44 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_43);
		NullCheck(L_41);
		bool L_45;
		L_45 = Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849(L_41, L_44, (&V_9), Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		G_B22_0 = ((int32_t)(L_45));
		goto IL_011a;
	}

IL_0119:
	{
		G_B22_0 = 0;
	}

IL_011a:
	{
		V_11 = (bool)G_B22_0;
		bool L_46 = V_11;
		if (!L_46)
		{
			goto IL_0133;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_47 = ___0_dstValue;
		RuntimeObject* L_48 = V_9;
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_47 = ((*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)UnBox(L_48, il2cpp_rgctx_data(method->rgctx_data, 3))));
		goto IL_027c;
	}

IL_0133:
	{
	}

IL_0134:
	{
		Type_t* L_49 = V_4;
		NullCheck(L_49);
		bool L_50;
		L_50 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_49, NULL);
		V_12 = L_50;
		bool L_51 = V_12;
		if (!L_51)
		{
			goto IL_01b6;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_52 = ___1_srcValue;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_53 = L_52;
		RuntimeObject* L_54 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_53);
		V_14 = (RuntimeObject*)NULL;
		RuntimeObject* L_55 = V_14;
		if (L_55)
		{
			goto IL_0156;
		}
	}
	{
		G_B29_0 = 0;
		goto IL_015d;
	}

IL_0156:
	{
		RuntimeObject* L_56 = V_14;
		NullCheck((RuntimeObject*)L_56);
		int32_t L_57;
		L_57 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_56);
		G_B29_0 = L_57;
	}

IL_015d:
	{
		V_13 = G_B29_0;
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_59 = ___0_dstValue;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_60 = (*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_59);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_61 = L_60;
		RuntimeObject* L_62 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_61);
		RuntimeArray* L_63 = ((RuntimeArray*)IsInstClass((RuntimeObject*)L_62, il2cpp_defaults.array_class));
		if (L_63)
		{
			G_B32_0 = L_63;
			goto IL_0183;
		}
		G_B31_0 = L_63;
	}
	{
		G_B33_0 = 1;
		goto IL_018f;
	}

IL_0183:
	{
		NullCheck(G_B32_0);
		int32_t L_64;
		L_64 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(G_B32_0, NULL);
		int32_t L_65 = V_13;
		G_B33_0 = ((((int32_t)((((int32_t)L_64) == ((int32_t)L_65))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_018f:
	{
		G_B35_0 = G_B33_0;
		goto IL_0192;
	}

IL_0192:
	{
		V_15 = (bool)G_B35_0;
		bool L_66 = V_15;
		if (!L_66)
		{
			goto IL_01b3;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_67 = ___0_dstValue;
		Type_t* L_68 = V_4;
		NullCheck(L_68);
		Type_t* L_69;
		L_69 = VirtualFuncInvoker0< Type_t* >::Invoke(48, L_68);
		int32_t L_70 = V_13;
		RuntimeArray* L_71;
		L_71 = Array_CreateInstance_m13B202130951A03AF5F52470A19E17D3AD2A8983(L_69, L_70, NULL);
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_67 = ((*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)UnBox((RuntimeObject*)L_71, il2cpp_rgctx_data(method->rgctx_data, 3))));
	}

IL_01b3:
	{
		goto IL_01f5;
	}

IL_01b6:
	{
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_73 = ___0_dstValue;
		Il2CppFakeBox<Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7> L_74(il2cpp_rgctx_data(method->rgctx_data, 3), L_73);
		Type_t* L_75;
		L_75 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((&L_74), NULL);
		Type_t* L_76 = V_4;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_77;
		L_77 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_75, L_76, NULL);
		G_B41_0 = ((int32_t)(L_77));
		goto IL_01da;
	}

IL_01da:
	{
		V_16 = (bool)G_B41_0;
		bool L_78 = V_16;
		if (!L_78)
		{
			goto IL_01f4;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_79 = ___0_dstValue;
		Type_t* L_80 = V_4;
		RuntimeObject* L_81;
		L_81 = Activator_CreateInstance_mFF030428C64FDDFACC74DFAC97388A1C628BFBCF(L_80, NULL);
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_79 = ((*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)UnBox(L_81, il2cpp_rgctx_data(method->rgctx_data, 3))));
	}

IL_01f4:
	{
	}

IL_01f5:
	{
		bool L_82 = V_5;
		V_17 = L_82;
		bool L_83 = V_17;
		if (!L_83)
		{
			goto IL_0236;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_84 = __this->___m_References;
		V_18 = (bool)((((RuntimeObject*)(Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*)L_84) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_85 = V_18;
		if (!L_85)
		{
			goto IL_0218;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_86 = (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*)il2cpp_codegen_object_new(Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329(L_86, Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_RuntimeMethod_var);
		__this->___m_References = L_86;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_References), (void*)L_86);
	}

IL_0218:
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_87 = __this->___m_References;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_88 = ___1_srcValue;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_89 = L_88;
		RuntimeObject* L_90 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_89);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_91 = ___0_dstValue;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_92 = (*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_91);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_93 = L_92;
		RuntimeObject* L_94 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_93);
		NullCheck(L_87);
		Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1(L_87, L_90, L_94, Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
	}

IL_0236:
	{
	}

IL_0237:
	{
		RuntimeObject* L_95 = __this->___m_Stack;
		V_0 = L_95;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_96 = ___0_dstValue;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_97 = (*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_96);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_98 = L_97;
		RuntimeObject* L_99 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_98);
		__this->___m_Stack = L_99;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Stack), (void*)L_99);
		il2cpp_codegen_initobj((&V_20), sizeof(VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE));
		VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE L_100 = V_20;
		bool L_101;
		L_101 = PropertyContainer_TryAccept_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m86391134C0A805647DED0CEC6F6AA3FBEB6A4F96((RuntimeObject*)__this, (&___1_srcValue), (&V_19), L_100, il2cpp_rgctx_method(method->rgctx_data, 7));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_102 = ___0_dstValue;
		RuntimeObject* L_103 = __this->___m_Stack;
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_102 = ((*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)UnBox(L_103, il2cpp_rgctx_data(method->rgctx_data, 3))));
		RuntimeObject* L_104 = V_0;
		__this->___m_Stack = L_104;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Stack), (void*)L_104);
	}

IL_027c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManagedObjectClone_CloneValue_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m06821191D3DE570FE8288299DFB0E19E5F52E3F7_gshared (ManagedObjectClone_t6E754ED2624B829553A94A85A0D62AD51B58FCD6* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_dstValue, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_srcValue, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	Type_t* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	RuntimeObject* V_9 = NULL;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t V_13 = 0;
	RuntimeObject* V_14 = NULL;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	int32_t V_19 = 0;
	VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE V_20;
	memset((&V_20), 0, sizeof(V_20));
	int32_t G_B5_0 = 0;
	int32_t G_B16_0 = 0;
	int32_t G_B22_0 = 0;
	int32_t G_B29_0 = 0;
	RuntimeArray* G_B32_0 = NULL;
	RuntimeArray* G_B31_0 = NULL;
	int32_t G_B33_0 = 0;
	int32_t G_B35_0 = 0;
	int32_t G_B41_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_0;
		L_0 = TypeTraits_1_get_IsContainer_m645CA7ABB91F0969D300A5965BEBB28C0D8445F3_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_2 = ___0_dstValue;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___1_srcValue;
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_2 = L_3;
		goto IL_027c;
	}

IL_001a:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_4;
		L_4 = TypeTraits_1_get_CanBeNull_m483FA59577B89A7210F233A7EA408B41FD9723BD_inline(il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___1_srcValue;
		G_B5_0 = ((int32_t)(false));
		goto IL_002d;
	}

IL_002c:
	{
		G_B5_0 = 0;
	}

IL_002d:
	{
		V_2 = (bool)G_B5_0;
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_003e;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_7 = ___0_dstValue;
		il2cpp_codegen_initobj(L_7, sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		goto IL_027c;
	}

IL_003e:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_8;
		L_8 = TypeTraits_1_get_IsValueType_m64554136176110FBD6D5948F7A8593317282D43D_inline(il2cpp_rgctx_method(method->rgctx_data, 5));
		V_3 = L_8;
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_0055;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_10 = ___0_dstValue;
		il2cpp_codegen_initobj(L_10, sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		goto IL_0237;
	}

IL_0055:
	{
		Il2CppFakeBox<Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2> L_11(il2cpp_rgctx_data(method->rgctx_data, 3), (&___1_srcValue));
		Type_t* L_12;
		L_12 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((&L_11), NULL);
		V_4 = L_12;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		Type_t* L_15 = V_4;
		NullCheck(L_14);
		bool L_16;
		L_16 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_14, L_15);
		V_6 = L_16;
		bool L_17 = V_6;
		if (!L_17)
		{
			goto IL_0089;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_18 = ___0_dstValue;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = ___1_srcValue;
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_18 = L_19;
		goto IL_027c;
	}

IL_0089:
	{
		Type_t* L_20 = V_4;
		bool L_21;
		L_21 = TypeTraits_IsContainer_m46D04F3E3219371CC5F133E2CC54BCA46FD72505(L_20, NULL);
		V_7 = (bool)((((int32_t)L_21) == ((int32_t)0))? 1 : 0);
		bool L_22 = V_7;
		if (!L_22)
		{
			goto IL_00a6;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_23 = ___0_dstValue;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = ___1_srcValue;
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_23 = L_24;
		goto IL_027c;
	}

IL_00a6:
	{
		Type_t* L_25 = V_4;
		NullCheck(L_25);
		bool L_26;
		L_26 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_25, NULL);
		if (L_26)
		{
			goto IL_00c5;
		}
	}
	{
		Type_t* L_27 = V_4;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_28 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.string_class->byval_arg) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_29;
		L_29 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_28, NULL);
		bool L_30;
		L_30 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_27, L_29, NULL);
		G_B16_0 = ((((int32_t)L_30) == ((int32_t)0))? 1 : 0);
		goto IL_00c6;
	}

IL_00c5:
	{
		G_B16_0 = 0;
	}

IL_00c6:
	{
		V_5 = (bool)G_B16_0;
		bool L_31 = V_5;
		V_8 = L_31;
		bool L_32 = V_8;
		if (!L_32)
		{
			goto IL_0134;
		}
	}
	{
		RuntimeObject* L_33 = __this->___m_RootSource;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = ___1_srcValue;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35 = L_34;
		RuntimeObject* L_36 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_35);
		V_10 = (bool)((((RuntimeObject*)(RuntimeObject*)L_33) == ((RuntimeObject*)(RuntimeObject*)L_36))? 1 : 0);
		bool L_37 = V_10;
		if (!L_37)
		{
			goto IL_00fc;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_38 = ___0_dstValue;
		RuntimeObject* L_39 = __this->___m_RootDestination;
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_38 = ((*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)UnBox(L_39, il2cpp_rgctx_data(method->rgctx_data, 3))));
		goto IL_027c;
	}

IL_00fc:
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_40 = __this->___m_References;
		if (!L_40)
		{
			goto IL_0119;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_41 = __this->___m_References;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42 = ___1_srcValue;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43 = L_42;
		RuntimeObject* L_44 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_43);
		NullCheck(L_41);
		bool L_45;
		L_45 = Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849(L_41, L_44, (&V_9), Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		G_B22_0 = ((int32_t)(L_45));
		goto IL_011a;
	}

IL_0119:
	{
		G_B22_0 = 0;
	}

IL_011a:
	{
		V_11 = (bool)G_B22_0;
		bool L_46 = V_11;
		if (!L_46)
		{
			goto IL_0133;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_47 = ___0_dstValue;
		RuntimeObject* L_48 = V_9;
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_47 = ((*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)UnBox(L_48, il2cpp_rgctx_data(method->rgctx_data, 3))));
		goto IL_027c;
	}

IL_0133:
	{
	}

IL_0134:
	{
		Type_t* L_49 = V_4;
		NullCheck(L_49);
		bool L_50;
		L_50 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_49, NULL);
		V_12 = L_50;
		bool L_51 = V_12;
		if (!L_51)
		{
			goto IL_01b6;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_52 = ___1_srcValue;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_53 = L_52;
		RuntimeObject* L_54 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_53);
		V_14 = (RuntimeObject*)NULL;
		RuntimeObject* L_55 = V_14;
		if (L_55)
		{
			goto IL_0156;
		}
	}
	{
		G_B29_0 = 0;
		goto IL_015d;
	}

IL_0156:
	{
		RuntimeObject* L_56 = V_14;
		NullCheck((RuntimeObject*)L_56);
		int32_t L_57;
		L_57 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_56);
		G_B29_0 = L_57;
	}

IL_015d:
	{
		V_13 = G_B29_0;
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_59 = ___0_dstValue;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_60 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_59);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_61 = L_60;
		RuntimeObject* L_62 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_61);
		RuntimeArray* L_63 = ((RuntimeArray*)IsInstClass((RuntimeObject*)L_62, il2cpp_defaults.array_class));
		if (L_63)
		{
			G_B32_0 = L_63;
			goto IL_0183;
		}
		G_B31_0 = L_63;
	}
	{
		G_B33_0 = 1;
		goto IL_018f;
	}

IL_0183:
	{
		NullCheck(G_B32_0);
		int32_t L_64;
		L_64 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(G_B32_0, NULL);
		int32_t L_65 = V_13;
		G_B33_0 = ((((int32_t)((((int32_t)L_64) == ((int32_t)L_65))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_018f:
	{
		G_B35_0 = G_B33_0;
		goto IL_0192;
	}

IL_0192:
	{
		V_15 = (bool)G_B35_0;
		bool L_66 = V_15;
		if (!L_66)
		{
			goto IL_01b3;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_67 = ___0_dstValue;
		Type_t* L_68 = V_4;
		NullCheck(L_68);
		Type_t* L_69;
		L_69 = VirtualFuncInvoker0< Type_t* >::Invoke(48, L_68);
		int32_t L_70 = V_13;
		RuntimeArray* L_71;
		L_71 = Array_CreateInstance_m13B202130951A03AF5F52470A19E17D3AD2A8983(L_69, L_70, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_67 = ((*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)UnBox((RuntimeObject*)L_71, il2cpp_rgctx_data(method->rgctx_data, 3))));
	}

IL_01b3:
	{
		goto IL_01f5;
	}

IL_01b6:
	{
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_73 = ___0_dstValue;
		Il2CppFakeBox<Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2> L_74(il2cpp_rgctx_data(method->rgctx_data, 3), L_73);
		Type_t* L_75;
		L_75 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((&L_74), NULL);
		Type_t* L_76 = V_4;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_77;
		L_77 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_75, L_76, NULL);
		G_B41_0 = ((int32_t)(L_77));
		goto IL_01da;
	}

IL_01da:
	{
		V_16 = (bool)G_B41_0;
		bool L_78 = V_16;
		if (!L_78)
		{
			goto IL_01f4;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_79 = ___0_dstValue;
		Type_t* L_80 = V_4;
		RuntimeObject* L_81;
		L_81 = Activator_CreateInstance_mFF030428C64FDDFACC74DFAC97388A1C628BFBCF(L_80, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_79 = ((*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)UnBox(L_81, il2cpp_rgctx_data(method->rgctx_data, 3))));
	}

IL_01f4:
	{
	}

IL_01f5:
	{
		bool L_82 = V_5;
		V_17 = L_82;
		bool L_83 = V_17;
		if (!L_83)
		{
			goto IL_0236;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_84 = __this->___m_References;
		V_18 = (bool)((((RuntimeObject*)(Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*)L_84) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_85 = V_18;
		if (!L_85)
		{
			goto IL_0218;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_86 = (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*)il2cpp_codegen_object_new(Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329(L_86, Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_RuntimeMethod_var);
		__this->___m_References = L_86;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_References), (void*)L_86);
	}

IL_0218:
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_87 = __this->___m_References;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_88 = ___1_srcValue;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_89 = L_88;
		RuntimeObject* L_90 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_89);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_91 = ___0_dstValue;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_92 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_91);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_93 = L_92;
		RuntimeObject* L_94 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_93);
		NullCheck(L_87);
		Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1(L_87, L_90, L_94, Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
	}

IL_0236:
	{
	}

IL_0237:
	{
		RuntimeObject* L_95 = __this->___m_Stack;
		V_0 = L_95;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_96 = ___0_dstValue;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_97 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_96);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_98 = L_97;
		RuntimeObject* L_99 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_98);
		__this->___m_Stack = L_99;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Stack), (void*)L_99);
		il2cpp_codegen_initobj((&V_20), sizeof(VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE));
		VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE L_100 = V_20;
		bool L_101;
		L_101 = PropertyContainer_TryAccept_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mE3B117E9CD2BEF9BEE2858069A392B02963737B6((RuntimeObject*)__this, (&___1_srcValue), (&V_19), L_100, il2cpp_rgctx_method(method->rgctx_data, 7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_102 = ___0_dstValue;
		RuntimeObject* L_103 = __this->___m_Stack;
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_102 = ((*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)UnBox(L_103, il2cpp_rgctx_data(method->rgctx_data, 3))));
		RuntimeObject* L_104 = V_0;
		__this->___m_Stack = L_104;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Stack), (void*)L_104);
	}

IL_027c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManagedObjectClone_CloneValue_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m5DFF72D930AAFFF3F1CBEE7F0AC5ABC90CD40DE2_gshared (ManagedObjectClone_t6E754ED2624B829553A94A85A0D62AD51B58FCD6* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___0_dstValue, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___1_srcValue, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	Type_t* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	RuntimeObject* V_9 = NULL;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t V_13 = 0;
	RuntimeObject* V_14 = NULL;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	int32_t V_19 = 0;
	VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE V_20;
	memset((&V_20), 0, sizeof(V_20));
	int32_t G_B5_0 = 0;
	int32_t G_B16_0 = 0;
	int32_t G_B22_0 = 0;
	int32_t G_B29_0 = 0;
	RuntimeArray* G_B32_0 = NULL;
	RuntimeArray* G_B31_0 = NULL;
	int32_t G_B33_0 = 0;
	int32_t G_B35_0 = 0;
	int32_t G_B41_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_0;
		L_0 = TypeTraits_1_get_IsContainer_mE287247F6E75ABBF9A49966FC51C6A66A4BF1FBE_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_2 = ___0_dstValue;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_3 = ___1_srcValue;
		*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)L_2 = L_3;
		goto IL_027c;
	}

IL_001a:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_4;
		L_4 = TypeTraits_1_get_CanBeNull_mD80D3A5E3EBEA503B228255B59012C64EAC0968C_inline(il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_5 = ___1_srcValue;
		G_B5_0 = ((int32_t)(false));
		goto IL_002d;
	}

IL_002c:
	{
		G_B5_0 = 0;
	}

IL_002d:
	{
		V_2 = (bool)G_B5_0;
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_003e;
		}
	}
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_7 = ___0_dstValue;
		il2cpp_codegen_initobj(L_7, sizeof(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376));
		goto IL_027c;
	}

IL_003e:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_8;
		L_8 = TypeTraits_1_get_IsValueType_m2E3E7C39FB0C7BFCE1F3BBFCA4135DF4945EAB8E_inline(il2cpp_rgctx_method(method->rgctx_data, 5));
		V_3 = L_8;
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_0055;
		}
	}
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_10 = ___0_dstValue;
		il2cpp_codegen_initobj(L_10, sizeof(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376));
		goto IL_0237;
	}

IL_0055:
	{
		Il2CppFakeBox<Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376> L_11(il2cpp_rgctx_data(method->rgctx_data, 3), (&___1_srcValue));
		Type_t* L_12;
		L_12 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((&L_11), NULL);
		V_4 = L_12;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		Type_t* L_15 = V_4;
		NullCheck(L_14);
		bool L_16;
		L_16 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_14, L_15);
		V_6 = L_16;
		bool L_17 = V_6;
		if (!L_17)
		{
			goto IL_0089;
		}
	}
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_18 = ___0_dstValue;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_19 = ___1_srcValue;
		*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)L_18 = L_19;
		goto IL_027c;
	}

IL_0089:
	{
		Type_t* L_20 = V_4;
		bool L_21;
		L_21 = TypeTraits_IsContainer_m46D04F3E3219371CC5F133E2CC54BCA46FD72505(L_20, NULL);
		V_7 = (bool)((((int32_t)L_21) == ((int32_t)0))? 1 : 0);
		bool L_22 = V_7;
		if (!L_22)
		{
			goto IL_00a6;
		}
	}
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_23 = ___0_dstValue;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_24 = ___1_srcValue;
		*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)L_23 = L_24;
		goto IL_027c;
	}

IL_00a6:
	{
		Type_t* L_25 = V_4;
		NullCheck(L_25);
		bool L_26;
		L_26 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_25, NULL);
		if (L_26)
		{
			goto IL_00c5;
		}
	}
	{
		Type_t* L_27 = V_4;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_28 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.string_class->byval_arg) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_29;
		L_29 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_28, NULL);
		bool L_30;
		L_30 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_27, L_29, NULL);
		G_B16_0 = ((((int32_t)L_30) == ((int32_t)0))? 1 : 0);
		goto IL_00c6;
	}

IL_00c5:
	{
		G_B16_0 = 0;
	}

IL_00c6:
	{
		V_5 = (bool)G_B16_0;
		bool L_31 = V_5;
		V_8 = L_31;
		bool L_32 = V_8;
		if (!L_32)
		{
			goto IL_0134;
		}
	}
	{
		RuntimeObject* L_33 = __this->___m_RootSource;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_34 = ___1_srcValue;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_35 = L_34;
		RuntimeObject* L_36 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_35);
		V_10 = (bool)((((RuntimeObject*)(RuntimeObject*)L_33) == ((RuntimeObject*)(RuntimeObject*)L_36))? 1 : 0);
		bool L_37 = V_10;
		if (!L_37)
		{
			goto IL_00fc;
		}
	}
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_38 = ___0_dstValue;
		RuntimeObject* L_39 = __this->___m_RootDestination;
		*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)L_38 = ((*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)UnBox(L_39, il2cpp_rgctx_data(method->rgctx_data, 3))));
		goto IL_027c;
	}

IL_00fc:
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_40 = __this->___m_References;
		if (!L_40)
		{
			goto IL_0119;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_41 = __this->___m_References;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_42 = ___1_srcValue;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_43 = L_42;
		RuntimeObject* L_44 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_43);
		NullCheck(L_41);
		bool L_45;
		L_45 = Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849(L_41, L_44, (&V_9), Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		G_B22_0 = ((int32_t)(L_45));
		goto IL_011a;
	}

IL_0119:
	{
		G_B22_0 = 0;
	}

IL_011a:
	{
		V_11 = (bool)G_B22_0;
		bool L_46 = V_11;
		if (!L_46)
		{
			goto IL_0133;
		}
	}
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_47 = ___0_dstValue;
		RuntimeObject* L_48 = V_9;
		*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)L_47 = ((*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)UnBox(L_48, il2cpp_rgctx_data(method->rgctx_data, 3))));
		goto IL_027c;
	}

IL_0133:
	{
	}

IL_0134:
	{
		Type_t* L_49 = V_4;
		NullCheck(L_49);
		bool L_50;
		L_50 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_49, NULL);
		V_12 = L_50;
		bool L_51 = V_12;
		if (!L_51)
		{
			goto IL_01b6;
		}
	}
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_52 = ___1_srcValue;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_53 = L_52;
		RuntimeObject* L_54 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_53);
		V_14 = (RuntimeObject*)NULL;
		RuntimeObject* L_55 = V_14;
		if (L_55)
		{
			goto IL_0156;
		}
	}
	{
		G_B29_0 = 0;
		goto IL_015d;
	}

IL_0156:
	{
		RuntimeObject* L_56 = V_14;
		NullCheck((RuntimeObject*)L_56);
		int32_t L_57;
		L_57 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_56);
		G_B29_0 = L_57;
	}

IL_015d:
	{
		V_13 = G_B29_0;
	}
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_59 = ___0_dstValue;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_60 = (*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)L_59);
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_61 = L_60;
		RuntimeObject* L_62 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_61);
		RuntimeArray* L_63 = ((RuntimeArray*)IsInstClass((RuntimeObject*)L_62, il2cpp_defaults.array_class));
		if (L_63)
		{
			G_B32_0 = L_63;
			goto IL_0183;
		}
		G_B31_0 = L_63;
	}
	{
		G_B33_0 = 1;
		goto IL_018f;
	}

IL_0183:
	{
		NullCheck(G_B32_0);
		int32_t L_64;
		L_64 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(G_B32_0, NULL);
		int32_t L_65 = V_13;
		G_B33_0 = ((((int32_t)((((int32_t)L_64) == ((int32_t)L_65))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_018f:
	{
		G_B35_0 = G_B33_0;
		goto IL_0192;
	}

IL_0192:
	{
		V_15 = (bool)G_B35_0;
		bool L_66 = V_15;
		if (!L_66)
		{
			goto IL_01b3;
		}
	}
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_67 = ___0_dstValue;
		Type_t* L_68 = V_4;
		NullCheck(L_68);
		Type_t* L_69;
		L_69 = VirtualFuncInvoker0< Type_t* >::Invoke(48, L_68);
		int32_t L_70 = V_13;
		RuntimeArray* L_71;
		L_71 = Array_CreateInstance_m13B202130951A03AF5F52470A19E17D3AD2A8983(L_69, L_70, NULL);
		*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)L_67 = ((*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)UnBox((RuntimeObject*)L_71, il2cpp_rgctx_data(method->rgctx_data, 3))));
	}

IL_01b3:
	{
		goto IL_01f5;
	}

IL_01b6:
	{
	}
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_73 = ___0_dstValue;
		Il2CppFakeBox<Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376> L_74(il2cpp_rgctx_data(method->rgctx_data, 3), L_73);
		Type_t* L_75;
		L_75 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((&L_74), NULL);
		Type_t* L_76 = V_4;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_77;
		L_77 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_75, L_76, NULL);
		G_B41_0 = ((int32_t)(L_77));
		goto IL_01da;
	}

IL_01da:
	{
		V_16 = (bool)G_B41_0;
		bool L_78 = V_16;
		if (!L_78)
		{
			goto IL_01f4;
		}
	}
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_79 = ___0_dstValue;
		Type_t* L_80 = V_4;
		RuntimeObject* L_81;
		L_81 = Activator_CreateInstance_mFF030428C64FDDFACC74DFAC97388A1C628BFBCF(L_80, NULL);
		*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)L_79 = ((*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)UnBox(L_81, il2cpp_rgctx_data(method->rgctx_data, 3))));
	}

IL_01f4:
	{
	}

IL_01f5:
	{
		bool L_82 = V_5;
		V_17 = L_82;
		bool L_83 = V_17;
		if (!L_83)
		{
			goto IL_0236;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_84 = __this->___m_References;
		V_18 = (bool)((((RuntimeObject*)(Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*)L_84) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_85 = V_18;
		if (!L_85)
		{
			goto IL_0218;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_86 = (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*)il2cpp_codegen_object_new(Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329(L_86, Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_RuntimeMethod_var);
		__this->___m_References = L_86;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_References), (void*)L_86);
	}

IL_0218:
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_87 = __this->___m_References;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_88 = ___1_srcValue;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_89 = L_88;
		RuntimeObject* L_90 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_89);
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_91 = ___0_dstValue;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_92 = (*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)L_91);
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_93 = L_92;
		RuntimeObject* L_94 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_93);
		NullCheck(L_87);
		Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1(L_87, L_90, L_94, Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
	}

IL_0236:
	{
	}

IL_0237:
	{
		RuntimeObject* L_95 = __this->___m_Stack;
		V_0 = L_95;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_96 = ___0_dstValue;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_97 = (*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)L_96);
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_98 = L_97;
		RuntimeObject* L_99 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_98);
		__this->___m_Stack = L_99;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Stack), (void*)L_99);
		il2cpp_codegen_initobj((&V_20), sizeof(VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE));
		VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE L_100 = V_20;
		bool L_101;
		L_101 = PropertyContainer_TryAccept_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m34950CB76D9D51770C30AA4ACF7C6B99E5A50062((RuntimeObject*)__this, (&___1_srcValue), (&V_19), L_100, il2cpp_rgctx_method(method->rgctx_data, 7));
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_102 = ___0_dstValue;
		RuntimeObject* L_103 = __this->___m_Stack;
		*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)L_102 = ((*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)UnBox(L_103, il2cpp_rgctx_data(method->rgctx_data, 3))));
		RuntimeObject* L_104 = V_0;
		__this->___m_Stack = L_104;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Stack), (void*)L_104);
	}

IL_027c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManagedObjectClone_CloneValue_TisIl2CppFullySharedGenericAny_mF21756BF43061E23F98F054F51438997B0A42BE1_gshared (ManagedObjectClone_t6E754ED2624B829553A94A85A0D62AD51B58FCD6* __this, Il2CppFullySharedGenericAny* ___0_dstValue, Il2CppFullySharedGenericAny ___1_srcValue, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_TValue_tC6C0DB784438B305BE989F855BD4B04C58DAC3CE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 3));
	void* L_13 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 3)));
	void* L_82 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 3)));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_TValue_tC6C0DB784438B305BE989F855BD4B04C58DAC3CE);
	const Il2CppFullySharedGenericAny L_5 = L_3;
	const Il2CppFullySharedGenericAny L_21 = L_3;
	const Il2CppFullySharedGenericAny L_26 = L_3;
	const Il2CppFullySharedGenericAny L_36 = L_3;
	const Il2CppFullySharedGenericAny L_41 = L_3;
	const Il2CppFullySharedGenericAny L_45 = L_3;
	const Il2CppFullySharedGenericAny L_51 = L_3;
	const Il2CppFullySharedGenericAny L_56 = L_3;
	const Il2CppFullySharedGenericAny L_62 = L_3;
	const Il2CppFullySharedGenericAny L_65 = L_3;
	const Il2CppFullySharedGenericAny L_76 = L_3;
	const Il2CppFullySharedGenericAny L_79 = L_3;
	const Il2CppFullySharedGenericAny L_90 = L_3;
	const Il2CppFullySharedGenericAny L_98 = L_3;
	const Il2CppFullySharedGenericAny L_105 = L_3;
	const Il2CppFullySharedGenericAny L_101 = alloca(SizeOf_TValue_tC6C0DB784438B305BE989F855BD4B04C58DAC3CE);
	const Il2CppFullySharedGenericAny L_111 = L_101;
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	Type_t* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	RuntimeObject* V_9 = NULL;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t V_13 = 0;
	RuntimeObject* V_14 = NULL;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	int32_t V_19 = 0;
	VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE V_20;
	memset((&V_20), 0, sizeof(V_20));
	int32_t G_B5_0 = 0;
	int32_t G_B16_0 = 0;
	int32_t G_B22_0 = 0;
	int32_t G_B29_0 = 0;
	RuntimeArray* G_B32_0 = NULL;
	RuntimeArray* G_B31_0 = NULL;
	int32_t G_B33_0 = 0;
	int32_t G_B35_0 = 0;
	int32_t G_B41_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_0;
		L_0 = ((  bool (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_2 = ___0_dstValue;
		il2cpp_codegen_memcpy(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 3)) ? ___1_srcValue : &___1_srcValue), SizeOf_TValue_tC6C0DB784438B305BE989F855BD4B04C58DAC3CE);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_2, L_3, SizeOf_TValue_tC6C0DB784438B305BE989F855BD4B04C58DAC3CE);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 3), (void**)(Il2CppFullySharedGenericAny*)L_2, (void*)L_3);
		goto IL_027c;
	}

IL_001a:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_4;
		L_4 = ((  bool (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		il2cpp_codegen_memcpy(L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 3)) ? ___1_srcValue : &___1_srcValue), SizeOf_TValue_tC6C0DB784438B305BE989F855BD4B04C58DAC3CE);
		bool L_6 = !il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), L_5);
		bool L_7 = L_6;
		G_B5_0 = ((int32_t)(L_7));
		goto IL_002d;
	}

IL_002c:
	{
		G_B5_0 = 0;
	}

IL_002d:
	{
		V_2 = (bool)G_B5_0;
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_003e;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_9 = ___0_dstValue;
		il2cpp_codegen_initobj(L_9, SizeOf_TValue_tC6C0DB784438B305BE989F855BD4B04C58DAC3CE);
		goto IL_027c;
	}

IL_003e:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_10;
		L_10 = ((  bool (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))(il2cpp_rgctx_method(method->rgctx_data, 5));
		V_3 = L_10;
		bool L_11 = V_3;
		if (!L_11)
		{
			goto IL_0055;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_12 = ___0_dstValue;
		il2cpp_codegen_initobj(L_12, SizeOf_TValue_tC6C0DB784438B305BE989F855BD4B04C58DAC3CE);
		goto IL_0237;
	}

IL_0055:
	{
		Type_t* L_14;
		L_14 = ConstrainedFuncInvoker0< Type_t* >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 3), il2cpp_rgctx_method(method->rgctx_data, 6), L_13, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 3)) ? ___1_srcValue : &___1_srcValue));
		V_4 = L_14;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		Type_t* L_17 = V_4;
		NullCheck(L_16);
		bool L_18;
		L_18 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_16, L_17);
		V_6 = L_18;
		bool L_19 = V_6;
		if (!L_19)
		{
			goto IL_0089;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_20 = ___0_dstValue;
		il2cpp_codegen_memcpy(L_21, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 3)) ? ___1_srcValue : &___1_srcValue), SizeOf_TValue_tC6C0DB784438B305BE989F855BD4B04C58DAC3CE);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_20, L_21, SizeOf_TValue_tC6C0DB784438B305BE989F855BD4B04C58DAC3CE);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 3), (void**)(Il2CppFullySharedGenericAny*)L_20, (void*)L_21);
		goto IL_027c;
	}

IL_0089:
	{
		Type_t* L_22 = V_4;
		bool L_23;
		L_23 = TypeTraits_IsContainer_m46D04F3E3219371CC5F133E2CC54BCA46FD72505(L_22, NULL);
		V_7 = (bool)((((int32_t)L_23) == ((int32_t)0))? 1 : 0);
		bool L_24 = V_7;
		if (!L_24)
		{
			goto IL_00a6;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_25 = ___0_dstValue;
		il2cpp_codegen_memcpy(L_26, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 3)) ? ___1_srcValue : &___1_srcValue), SizeOf_TValue_tC6C0DB784438B305BE989F855BD4B04C58DAC3CE);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_25, L_26, SizeOf_TValue_tC6C0DB784438B305BE989F855BD4B04C58DAC3CE);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 3), (void**)(Il2CppFullySharedGenericAny*)L_25, (void*)L_26);
		goto IL_027c;
	}

IL_00a6:
	{
		Type_t* L_27 = V_4;
		NullCheck(L_27);
		bool L_28;
		L_28 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_27, NULL);
		if (L_28)
		{
			goto IL_00c5;
		}
	}
	{
		Type_t* L_29 = V_4;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_30 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.string_class->byval_arg) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_31;
		L_31 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_30, NULL);
		bool L_32;
		L_32 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_29, L_31, NULL);
		G_B16_0 = ((((int32_t)L_32) == ((int32_t)0))? 1 : 0);
		goto IL_00c6;
	}

IL_00c5:
	{
		G_B16_0 = 0;
	}

IL_00c6:
	{
		V_5 = (bool)G_B16_0;
		bool L_33 = V_5;
		V_8 = L_33;
		bool L_34 = V_8;
		if (!L_34)
		{
			goto IL_0134;
		}
	}
	{
		RuntimeObject* L_35 = __this->___m_RootSource;
		il2cpp_codegen_memcpy(L_36, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 3)) ? ___1_srcValue : &___1_srcValue), SizeOf_TValue_tC6C0DB784438B305BE989F855BD4B04C58DAC3CE);
		RuntimeObject* L_37 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), L_36);
		V_10 = (bool)((((RuntimeObject*)(RuntimeObject*)L_35) == ((RuntimeObject*)(RuntimeObject*)L_37))? 1 : 0);
		bool L_38 = V_10;
		if (!L_38)
		{
			goto IL_00fc;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_39 = ___0_dstValue;
		RuntimeObject* L_40 = __this->___m_RootDestination;
		void* L_42 = UnBox_Any(L_40, il2cpp_rgctx_data(method->rgctx_data, 3), L_41);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_39, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_42)), SizeOf_TValue_tC6C0DB784438B305BE989F855BD4B04C58DAC3CE);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 3), (void**)(Il2CppFullySharedGenericAny*)L_39, (void*)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_42)));
		goto IL_027c;
	}

IL_00fc:
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_43 = __this->___m_References;
		if (!L_43)
		{
			goto IL_0119;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_44 = __this->___m_References;
		il2cpp_codegen_memcpy(L_45, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 3)) ? ___1_srcValue : &___1_srcValue), SizeOf_TValue_tC6C0DB784438B305BE989F855BD4B04C58DAC3CE);
		RuntimeObject* L_46 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), L_45);
		NullCheck(L_44);
		bool L_47;
		L_47 = Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849(L_44, L_46, (&V_9), Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		G_B22_0 = ((int32_t)(L_47));
		goto IL_011a;
	}

IL_0119:
	{
		G_B22_0 = 0;
	}

IL_011a:
	{
		V_11 = (bool)G_B22_0;
		bool L_48 = V_11;
		if (!L_48)
		{
			goto IL_0133;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_49 = ___0_dstValue;
		RuntimeObject* L_50 = V_9;
		void* L_52 = UnBox_Any(L_50, il2cpp_rgctx_data(method->rgctx_data, 3), L_51);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_49, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_52)), SizeOf_TValue_tC6C0DB784438B305BE989F855BD4B04C58DAC3CE);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 3), (void**)(Il2CppFullySharedGenericAny*)L_49, (void*)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_52)));
		goto IL_027c;
	}

IL_0133:
	{
	}

IL_0134:
	{
		Type_t* L_53 = V_4;
		NullCheck(L_53);
		bool L_54;
		L_54 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_53, NULL);
		V_12 = L_54;
		bool L_55 = V_12;
		if (!L_55)
		{
			goto IL_01b6;
		}
	}
	{
		il2cpp_codegen_memcpy(L_56, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 3)) ? ___1_srcValue : &___1_srcValue), SizeOf_TValue_tC6C0DB784438B305BE989F855BD4B04C58DAC3CE);
		RuntimeObject* L_57 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), L_56);
		V_14 = ((RuntimeObject*)IsInst((RuntimeObject*)L_57, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var));
		RuntimeObject* L_58 = V_14;
		if (L_58)
		{
			goto IL_0156;
		}
	}
	{
		G_B29_0 = 0;
		goto IL_015d;
	}

IL_0156:
	{
		RuntimeObject* L_59 = V_14;
		NullCheck((RuntimeObject*)L_59);
		int32_t L_60;
		L_60 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_59);
		G_B29_0 = L_60;
	}

IL_015d:
	{
		V_13 = G_B29_0;
		Il2CppFullySharedGenericAny* L_61 = ___0_dstValue;
		il2cpp_codegen_memcpy(L_62, L_61, SizeOf_TValue_tC6C0DB784438B305BE989F855BD4B04C58DAC3CE);
		bool L_63 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), L_62);
		if (!L_63)
		{
			goto IL_0191;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_64 = ___0_dstValue;
		il2cpp_codegen_memcpy(L_65, L_64, SizeOf_TValue_tC6C0DB784438B305BE989F855BD4B04C58DAC3CE);
		RuntimeObject* L_66 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), L_65);
		RuntimeArray* L_67 = ((RuntimeArray*)IsInstClass((RuntimeObject*)L_66, il2cpp_defaults.array_class));
		if (L_67)
		{
			G_B32_0 = L_67;
			goto IL_0183;
		}
		G_B31_0 = L_67;
	}
	{
		G_B33_0 = 1;
		goto IL_018f;
	}

IL_0183:
	{
		NullCheck(G_B32_0);
		int32_t L_68;
		L_68 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(G_B32_0, NULL);
		int32_t L_69 = V_13;
		G_B33_0 = ((((int32_t)((((int32_t)L_68) == ((int32_t)L_69))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_018f:
	{
		G_B35_0 = G_B33_0;
		goto IL_0192;
	}

IL_0191:
	{
		G_B35_0 = 1;
	}

IL_0192:
	{
		V_15 = (bool)G_B35_0;
		bool L_70 = V_15;
		if (!L_70)
		{
			goto IL_01b3;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_71 = ___0_dstValue;
		Type_t* L_72 = V_4;
		NullCheck(L_72);
		Type_t* L_73;
		L_73 = VirtualFuncInvoker0< Type_t* >::Invoke(48, L_72);
		int32_t L_74 = V_13;
		RuntimeArray* L_75;
		L_75 = Array_CreateInstance_m13B202130951A03AF5F52470A19E17D3AD2A8983(L_73, L_74, NULL);
		void* L_77 = UnBox_Any((RuntimeObject*)L_75, il2cpp_rgctx_data(method->rgctx_data, 3), L_76);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_71, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_77)), SizeOf_TValue_tC6C0DB784438B305BE989F855BD4B04C58DAC3CE);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 3), (void**)(Il2CppFullySharedGenericAny*)L_71, (void*)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_77)));
	}

IL_01b3:
	{
		goto IL_01f5;
	}

IL_01b6:
	{
		Il2CppFullySharedGenericAny* L_78 = ___0_dstValue;
		il2cpp_codegen_memcpy(L_79, L_78, SizeOf_TValue_tC6C0DB784438B305BE989F855BD4B04C58DAC3CE);
		bool L_80 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), L_79);
		if (!L_80)
		{
			goto IL_01d9;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_81 = ___0_dstValue;
		Type_t* L_83;
		L_83 = ConstrainedFuncInvoker0< Type_t* >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 3), il2cpp_rgctx_method(method->rgctx_data, 6), L_82, (void*)L_81);
		Type_t* L_84 = V_4;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_85;
		L_85 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_83, L_84, NULL);
		G_B41_0 = ((int32_t)(L_85));
		goto IL_01da;
	}

IL_01d9:
	{
		G_B41_0 = 1;
	}

IL_01da:
	{
		V_16 = (bool)G_B41_0;
		bool L_86 = V_16;
		if (!L_86)
		{
			goto IL_01f4;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_87 = ___0_dstValue;
		Type_t* L_88 = V_4;
		RuntimeObject* L_89;
		L_89 = Activator_CreateInstance_mFF030428C64FDDFACC74DFAC97388A1C628BFBCF(L_88, NULL);
		void* L_91 = UnBox_Any(L_89, il2cpp_rgctx_data(method->rgctx_data, 3), L_90);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_87, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_91)), SizeOf_TValue_tC6C0DB784438B305BE989F855BD4B04C58DAC3CE);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 3), (void**)(Il2CppFullySharedGenericAny*)L_87, (void*)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_91)));
	}

IL_01f4:
	{
	}

IL_01f5:
	{
		bool L_92 = V_5;
		V_17 = L_92;
		bool L_93 = V_17;
		if (!L_93)
		{
			goto IL_0236;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_94 = __this->___m_References;
		V_18 = (bool)((((RuntimeObject*)(Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*)L_94) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_95 = V_18;
		if (!L_95)
		{
			goto IL_0218;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_96 = (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*)il2cpp_codegen_object_new(Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329(L_96, Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_RuntimeMethod_var);
		__this->___m_References = L_96;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_References), (void*)L_96);
	}

IL_0218:
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_97 = __this->___m_References;
		il2cpp_codegen_memcpy(L_98, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 3)) ? ___1_srcValue : &___1_srcValue), SizeOf_TValue_tC6C0DB784438B305BE989F855BD4B04C58DAC3CE);
		RuntimeObject* L_99 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), L_98);
		Il2CppFullySharedGenericAny* L_100 = ___0_dstValue;
		il2cpp_codegen_memcpy(L_101, L_100, SizeOf_TValue_tC6C0DB784438B305BE989F855BD4B04C58DAC3CE);
		RuntimeObject* L_102 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), L_101);
		NullCheck(L_97);
		Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1(L_97, L_99, L_102, Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
	}

IL_0236:
	{
	}

IL_0237:
	{
		RuntimeObject* L_103 = __this->___m_Stack;
		V_0 = L_103;
		Il2CppFullySharedGenericAny* L_104 = ___0_dstValue;
		il2cpp_codegen_memcpy(L_105, L_104, SizeOf_TValue_tC6C0DB784438B305BE989F855BD4B04C58DAC3CE);
		RuntimeObject* L_106 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), L_105);
		__this->___m_Stack = L_106;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Stack), (void*)L_106);
		il2cpp_codegen_initobj((&V_20), sizeof(VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE));
		VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE L_107 = V_20;
		bool L_108;
		L_108 = ((  bool (*) (RuntimeObject*, Il2CppFullySharedGenericAny*, int32_t*, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 7)))((RuntimeObject*)__this, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 3)) ? ___1_srcValue : &___1_srcValue), (&V_19), L_107, il2cpp_rgctx_method(method->rgctx_data, 7));
		Il2CppFullySharedGenericAny* L_109 = ___0_dstValue;
		RuntimeObject* L_110 = __this->___m_Stack;
		void* L_112 = UnBox_Any(L_110, il2cpp_rgctx_data(method->rgctx_data, 3), L_111);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_109, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_112)), SizeOf_TValue_tC6C0DB784438B305BE989F855BD4B04C58DAC3CE);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 3), (void**)(Il2CppFullySharedGenericAny*)L_109, (void*)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_112)));
		RuntimeObject* L_113 = V_0;
		__this->___m_Stack = L_113;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Stack), (void*)L_113);
	}

IL_027c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsContainer_m09E64BD1591FB99C645EEBB13818E96BD276A910_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_tFE90E3B2683C0197B0BCDD15879B0B07DC84A24A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsContainerU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_mD8C1C97EEFB80C1D10345B27C921B3107DC17719_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_tFE90E3B2683C0197B0BCDD15879B0B07DC84A24A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CCanBeNullU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m34379A3583A38EDDB72134FED4BEF56D2A5D0BC5_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_tFE90E3B2683C0197B0BCDD15879B0B07DC84A24A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsContainer_m3C5F1818CDCF1B3B51278B90926C6423F84B2C3C_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t735C9596C4B0AACA90B2BE965362D57FA9C03B5E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsContainerU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_m0593429012E73872335C7F3058A5D2027B1FF643_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t735C9596C4B0AACA90B2BE965362D57FA9C03B5E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CCanBeNullU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_mF477B5DC4E7614585579DE3FDB399B21C104CB4E_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t735C9596C4B0AACA90B2BE965362D57FA9C03B5E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsContainer_m0DE5E9583D0EA919AE01523EC7CE7649FFCE6F54_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t8FFE575690EA6AC4B4647919E785D2AE72BE6D9B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsContainerU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_mB553A71A1C80612E9D79BBEC3C3CC85355E343FD_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t8FFE575690EA6AC4B4647919E785D2AE72BE6D9B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CCanBeNullU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m4B9BF8692A76065F40E050B75EE6702C6C784D30_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t8FFE575690EA6AC4B4647919E785D2AE72BE6D9B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsContainer_m14E4DAA47CE7873DE5C17F95F3BEFA0869609BB3_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_tADDF36A68586641E7714027F3533EC4E0DD869F6_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsContainerU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_m1E761EC4F6A20442B87753E1E6E8EA11B5FEE574_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_tADDF36A68586641E7714027F3533EC4E0DD869F6_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CCanBeNullU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_mD14761B683AB06C19DEE30867E250C46F6C8A11B_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_tADDF36A68586641E7714027F3533EC4E0DD869F6_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsContainer_mBE907BDA3A99126677DFF55E587BCD457EB39A4A_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_tF91BA2C79345F433195944D0618AB02D92236B21_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsContainerU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_mDB94662967E66AC074FE137EE4BD9FE82C76C0AB_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_tF91BA2C79345F433195944D0618AB02D92236B21_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CCanBeNullU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m00FCB5EF45C052616B43E1773B7FECC659D28F6E_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_tF91BA2C79345F433195944D0618AB02D92236B21_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsContainer_m9954C20121DAAFEFE7509702CC85124310BA3F83_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_tB01FA3B4A03D597A48820CE7FCC333DCA70FACC9_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsContainerU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_mAAD948E1BCC65D96F56C5DAD5F0A83D116272304_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_tB01FA3B4A03D597A48820CE7FCC333DCA70FACC9_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CCanBeNullU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m03C73EA225C7C6C16C2639EB5F76A808A2788050_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_tB01FA3B4A03D597A48820CE7FCC333DCA70FACC9_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsContainer_mBF4BFF0A6D1C23DF7294C1A793CCC3FA21D22822_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t21080F26F6131ECBC06910EE13D1DE330D245551_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsContainerU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_mDDCC371571712BD98B3A2EAA177F5D2E5E97FAD5_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t21080F26F6131ECBC06910EE13D1DE330D245551_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CCanBeNullU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m1D8B7A9107E1AC42133ADBB9D3E09F84BCC142DF_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t21080F26F6131ECBC06910EE13D1DE330D245551_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsContainer_m06C3A79C67236D6160E0E130244694827B949182_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_tA6D1100439FC903C4E5199EE4D277273E18BF039_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsContainerU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_m686F9F739041D767C3ACA256B3A68D6573B73B61_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_tA6D1100439FC903C4E5199EE4D277273E18BF039_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CCanBeNullU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_mCD2F075EE8FA987FED25F36ACC13C6D0F4A32693_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_tA6D1100439FC903C4E5199EE4D277273E18BF039_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsContainer_m0D78DAA55CA1CA3AE94272FDFF02D1C1BC1763C6_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t94405784E845EA464968A7BA6455EE4082C988EF_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsContainerU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_mE0F90826548B0C3102050B135AABD7FCF73A5120_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t94405784E845EA464968A7BA6455EE4082C988EF_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CCanBeNullU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m11497792427A6500E5BEC1F44B26CED5E4E210BB_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t94405784E845EA464968A7BA6455EE4082C988EF_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsContainer_mE25A4132A83087A571AA1CAE994FA56614EA64D7_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t14492BDEFA66B94D1A35E842BFAB7898518438E4_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsContainerU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_mB145F76964DE36569385F83F550741253F97BC8B_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t14492BDEFA66B94D1A35E842BFAB7898518438E4_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CCanBeNullU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m38FEC63D8762D52AF73C146A830156829593F37C_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t14492BDEFA66B94D1A35E842BFAB7898518438E4_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsContainer_m2299324716E9073847D43B5EE074036241CE2FDB_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t8883CD81D797B05BC15979287C7B2BC58F033BC9_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsContainerU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_m0D87D0851EC5F34630C609FC128C8673317DCEAA_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t8883CD81D797B05BC15979287C7B2BC58F033BC9_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CCanBeNullU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_mA5B381E720E0FDAE69EC5B76BA5DD0C67DEABD63_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t8883CD81D797B05BC15979287C7B2BC58F033BC9_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsContainer_mF635D475A726AB153ADB8A392F952CD771C9B9D6_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_tC1A46C3724D2DAD269AF6BD39D20DE59150FDF28_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsContainerU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_m735F17A1CDBD434E62378EBF10F8B56495139E17_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_tC1A46C3724D2DAD269AF6BD39D20DE59150FDF28_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CCanBeNullU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m15C2D35A2D23101135FF92723A5F1C06CA8FA59D_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_tC1A46C3724D2DAD269AF6BD39D20DE59150FDF28_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsContainer_m8743C852501A5A11E54F14DEA2070D10EB63A21F_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t9A92FED6D60DACE8C551B7F9D3A8C19FFD695D8A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsContainerU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_mB861B1B55CFCEBC9DFF4387F456C2AC80B02A103_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t9A92FED6D60DACE8C551B7F9D3A8C19FFD695D8A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CCanBeNullU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_mFD19BE22C91DFC05260F1AA812448E708E0FAFE3_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t9A92FED6D60DACE8C551B7F9D3A8C19FFD695D8A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsContainer_m55AA7A282B79A29C3DA24B56683A5897E5F7E9A0_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_tC6016152C0B1EA884A010EA192A177AF6D450C2E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsContainerU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_mC0DCE60D34CB3B625A7E957DD755BAAE3F5ADE91_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_tC6016152C0B1EA884A010EA192A177AF6D450C2E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CCanBeNullU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_mC7D50F5D193AA2EF3F84648A392176B9A906180A_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_tC6016152C0B1EA884A010EA192A177AF6D450C2E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsContainer_m371300A2F6CA88E8CC34EA1D30226DADF20DF159_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t2F0140ACB0515BDDC870EC97E27CB7FE1A3E632B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsContainerU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_mE4C358BCE5CA8EAEC8AFCE80969A622525644AE4_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t2F0140ACB0515BDDC870EC97E27CB7FE1A3E632B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CCanBeNullU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m0581F21AE7DCD3653CA50C2B1A83596515E469CE_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t2F0140ACB0515BDDC870EC97E27CB7FE1A3E632B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsContainer_m66017AAD546A97E689F25A40839FDDB2DDC69F2C_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t489E41DF3938E924D32457D7DE82598F4FD0A2DE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsContainerU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_m1070B18AE5014C462C176214EB504B80ABCF9E56_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t489E41DF3938E924D32457D7DE82598F4FD0A2DE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CCanBeNullU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_mE0107930FB17433A36E048CFF09C97DDDED87752_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t489E41DF3938E924D32457D7DE82598F4FD0A2DE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsContainer_mD0ED35F34834D1848D0D597AF906C3F712DAE09B_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_tB9DCCD3BBF3EE862519183C720AAC6BA3A86B1D1_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsContainerU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_m7220BB2ACCEE1EA2053D2E92E0DBE25DC43647B8_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_tB9DCCD3BBF3EE862519183C720AAC6BA3A86B1D1_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CCanBeNullU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m73DDE09E2C01B3DF5142420E2426E2A515C308C8_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_tB9DCCD3BBF3EE862519183C720AAC6BA3A86B1D1_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsContainer_m37D42BF4D5B4D9B0438EC68FF5805247017DD90D_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t7FBD6A3FBFE466CC7C2D8D3C046790A1B7E343E9_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsContainerU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_m0285698C5170350BB9326DA5102DE8A5CA6DE357_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t7FBD6A3FBFE466CC7C2D8D3C046790A1B7E343E9_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CCanBeNullU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m056052FE7567159FC8E6E245B57CCF22EAFB9A0C_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t7FBD6A3FBFE466CC7C2D8D3C046790A1B7E343E9_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsContainer_m71E5DD5E57922A24E5D8ACDC63720DA12180D119_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_tFAC2D7C6B051CC5476CDC3CD6449AED4A5D87408_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsContainerU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_mD22045184FA0539BA7AFCFABEAD125438AD5D418_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_tFAC2D7C6B051CC5476CDC3CD6449AED4A5D87408_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CCanBeNullU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_mCF6752FCDB191E6473D9F399BF25CE84E02C61B3_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_tFAC2D7C6B051CC5476CDC3CD6449AED4A5D87408_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsContainer_m392F4C8C66B4A071756DB71F627CAC269285D1BA_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t3F99D60DF484D7154D83563634764473B340414C_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsContainerU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_m33625EC55E4DE2F45D4BB9979B71B6394DCAA84B_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t3F99D60DF484D7154D83563634764473B340414C_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CCanBeNullU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m56D7A6A534892EC5D12D9A62CF04B0A27D3BD35B_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t3F99D60DF484D7154D83563634764473B340414C_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsContainer_m464DECD495CB2BC744CE122AAD07403C501AF87B_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t202E31FDCB5BFA14FDF87807FDAF5B04EB5F8034_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsContainerU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_mE961AAB25B0D1DD6A17564895842AF7BD52468DB_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t202E31FDCB5BFA14FDF87807FDAF5B04EB5F8034_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CCanBeNullU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m914EFA8D02D4B138FB957D9FFF73248121E5D2C0_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t202E31FDCB5BFA14FDF87807FDAF5B04EB5F8034_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsContainer_m28DFE80F9F70333A9ECB62AE877098092F39A47B_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_tD909FCFAF79D42896A1FC2CD20FB1ABCAAA257DD_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsContainerU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_mFE2AA6D4EF3606873E12E0201D79FECF7E52BFF5_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_tD909FCFAF79D42896A1FC2CD20FB1ABCAAA257DD_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CCanBeNullU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_mC864FBD8DC0E7F1EA00C328D2FDEACC7CD9DF1A4_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_tD909FCFAF79D42896A1FC2CD20FB1ABCAAA257DD_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsContainer_m72D732937C93BD7AE8F529A0430A8C7906DCD0F3_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_tFA0B43A2A3A7C2204717987FEC00B04AA9F81F00_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsContainerU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_m7A2EAA2C303B5864C0220CBD342C75E269A4AAA3_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_tFA0B43A2A3A7C2204717987FEC00B04AA9F81F00_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CCanBeNullU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m071C355797B42D5CCB33F14B83229C2C0D11580A_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_tFA0B43A2A3A7C2204717987FEC00B04AA9F81F00_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsContainer_mC27F117CAABDF35DCE60B44ED90CA5E0C316E87B_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t1702AD010C5DC0B1F26D46D5D2A182E9CAFCD640_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsContainerU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_m171E276B62877B02E9840B204D3ED28130D8DFCD_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t1702AD010C5DC0B1F26D46D5D2A182E9CAFCD640_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CCanBeNullU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m9BCC29E05C59AD59DAE817B570638E3899BD6523_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t1702AD010C5DC0B1F26D46D5D2A182E9CAFCD640_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsContainer_m2503D4240E029F16D5C98BD8DC5B732B8A02C98E_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_tFB3FC779258BD8C9717811E3C3FB85E125EFC8FB_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsContainerU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_m9812594FA23CC694FBDE4CA32625D3FBA1177A29_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_tFB3FC779258BD8C9717811E3C3FB85E125EFC8FB_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CCanBeNullU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m0F180F5B26765420CF3E3E12F04CA3225153AFCA_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_tFB3FC779258BD8C9717811E3C3FB85E125EFC8FB_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsContainer_m748E564407EE5311B3129B6563800575345A24B3_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_tCFF7A75C3914FB515773955DB32BE7BC4A1346DF_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsContainerU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_mBF67FA3A6F82EA4FD80F246E3D2AB424D28FD667_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_tCFF7A75C3914FB515773955DB32BE7BC4A1346DF_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CCanBeNullU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_mE15BF77911B4BEB5D3725CFAC54F480025A030CE_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_tCFF7A75C3914FB515773955DB32BE7BC4A1346DF_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsContainer_m916B9C203D96F12013B160116CA44AA967C225D4_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_tCC4BDF8E0A12FD764908EC189D75E770E4C60943_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsContainerU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_mBE2469309A59E9E64ED306132C6DB40EA211B02B_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_tCC4BDF8E0A12FD764908EC189D75E770E4C60943_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CCanBeNullU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m434194C02E674305D5939C3FB4388F1A60128356_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_tCC4BDF8E0A12FD764908EC189D75E770E4C60943_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsContainer_m9DFB57E57F4AC783DEAAC4F0A5E1CB11A90BA299_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t757ADFB4D991E864C5C73DA2C8ECE7DB437E2DDF_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsContainerU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_mAB96CAD5D360071A2AC29CEFA10D8376FE5A716C_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t757ADFB4D991E864C5C73DA2C8ECE7DB437E2DDF_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CCanBeNullU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_mB64CD1414AA6476F61F0C3568F12424180F97654_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t757ADFB4D991E864C5C73DA2C8ECE7DB437E2DDF_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsContainer_m908BDA55B06C8C24176F0E7F23FBE5D2CC34DC25_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_tC847C5AECFD56D7A03E78146847095A698E8A9D6_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsContainerU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_mC18B485E8C55F324812CBB67B78A007B739115E4_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_tC847C5AECFD56D7A03E78146847095A698E8A9D6_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CCanBeNullU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m2E1C8DF463CE67BB42937B640C27F546CAB0DE93_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_tC847C5AECFD56D7A03E78146847095A698E8A9D6_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsContainer_m26D8E5CB65881B90C23D386F1820AF754B074F26_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t2745081C9EBBFB683CA88BDE5D022B3E28F023BC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsContainerU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_mE022DBB0602AAADCAA703B4A54242852A8965853_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t2745081C9EBBFB683CA88BDE5D022B3E28F023BC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CCanBeNullU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m98BDAC1965215084D492BD054E3438503B1F8176_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t2745081C9EBBFB683CA88BDE5D022B3E28F023BC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsContainer_m1D1A832B4A280B5CC5A8F6103512BD85C232D534_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t9E0AB7A057AA6EE1CF91911858169EA0D58BB816_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsContainerU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_m989233B2F7F633EFE624A0CF8A5F9D3DAC75F00E_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t9E0AB7A057AA6EE1CF91911858169EA0D58BB816_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CCanBeNullU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_mD7AD2570031FF055D5EB8EC2F245A5A638022D20_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t9E0AB7A057AA6EE1CF91911858169EA0D58BB816_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsContainer_mB84DCA55DC40F517EE6B897F549822CF99051417_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_tEC4AD2AA03E1549DCDDCA8138E36D91F7BF393BB_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsContainerU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_m1499F4A014158A9E43B430FA922C10FA9BF42BDA_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_tEC4AD2AA03E1549DCDDCA8138E36D91F7BF393BB_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CCanBeNullU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m772EE1B98C79503AD94637C553736BDDA5E113E4_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_tEC4AD2AA03E1549DCDDCA8138E36D91F7BF393BB_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsContainer_m423D4EE31271BFF343FB125B5237B9FF71CFF524_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_tB395B95685AE971ABD5B79C40A58224E776FC934_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsContainerU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_m4BCDE88FF19C72620C04896DCEC626E7A9621B31_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_tB395B95685AE971ABD5B79C40A58224E776FC934_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CCanBeNullU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m472AD8D1120723C7E282C958A563BAB1A9843EB4_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_tB395B95685AE971ABD5B79C40A58224E776FC934_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsContainer_m3D4A64F52976BCB0D13C18E6667B03A7DDCBACED_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t71057E7D8F22A723DE8C778E71218D6DDFD2BAF0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsContainerU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_m867A30A06DF4DAE601C1437681BE61D0B03D0735_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t71057E7D8F22A723DE8C778E71218D6DDFD2BAF0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CCanBeNullU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m6D68904DCEC1B9E468B23D863D622ED2F08B3ACB_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t71057E7D8F22A723DE8C778E71218D6DDFD2BAF0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsContainer_m35FC9B6070CEB5A54D8C4333B165F7DCB68D66D9_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t863F95920EE834C0519085F7BDCA06C58BCD1DE3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsContainerU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_mA68BE2F93E951687D0F1ABE4A6A4A65A00DBB8B3_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t863F95920EE834C0519085F7BDCA06C58BCD1DE3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CCanBeNullU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m83BB11321A8205868232E6A9791231FCCAEE17E9_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t863F95920EE834C0519085F7BDCA06C58BCD1DE3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsContainer_m6A352A501393CAE8E5F280361DA8F7D8C4689AF9_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t621E3790C21984BE382EC32D6FE8EF59F9C81E4F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsContainerU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_mAC32D5C4424D52F5A3E7FE46DC053073AC0B2521_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t621E3790C21984BE382EC32D6FE8EF59F9C81E4F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CCanBeNullU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m908C71E0F54A69691D54C444E2C23EF5C540FD1F_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t621E3790C21984BE382EC32D6FE8EF59F9C81E4F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsContainer_m5324709E9C1E2AFCCE54DFE57CA9E5A134A5D7FC_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t3FA85198159658E010E08BB434B6F0D95CCF4310_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsContainerU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_mA069B0BDEC214B763CC8ECBCE3B72C13664A29E8_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t3FA85198159658E010E08BB434B6F0D95CCF4310_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CCanBeNullU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m468FD08CF92AA9CE1355826B4E5A8A7B92647567_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t3FA85198159658E010E08BB434B6F0D95CCF4310_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsContainer_m3CE73AFB74643BE29712805CBCAAE3AA11CEBA7F_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t12A4EFA4F288B8AEB9D8AF24C08B0E6BEC4A5283_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsContainerU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_m81BDFE95146A69F74EE7C1A8E7AF5B5700CF0BB3_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t12A4EFA4F288B8AEB9D8AF24C08B0E6BEC4A5283_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CCanBeNullU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_mC876849E832B2360A89D63D4816C6D9EF7994527_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t12A4EFA4F288B8AEB9D8AF24C08B0E6BEC4A5283_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsContainer_m645CA7ABB91F0969D300A5965BEBB28C0D8445F3_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_tB2BACC988B95FD4748EEAD9E106CEA7F11DBBE4B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsContainerU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_m483FA59577B89A7210F233A7EA408B41FD9723BD_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_tB2BACC988B95FD4748EEAD9E106CEA7F11DBBE4B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CCanBeNullU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m64554136176110FBD6D5948F7A8593317282D43D_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_tB2BACC988B95FD4748EEAD9E106CEA7F11DBBE4B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsContainer_mE287247F6E75ABBF9A49966FC51C6A66A4BF1FBE_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_tE403F840B1E4A05D3004758D60018F70BE11D92D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsContainerU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_mD80D3A5E3EBEA503B228255B59012C64EAC0968C_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_tE403F840B1E4A05D3004758D60018F70BE11D92D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CCanBeNullU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m2E3E7C39FB0C7BFCE1F3BBFCA4135DF4945EAB8E_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_tE403F840B1E4A05D3004758D60018F70BE11D92D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
