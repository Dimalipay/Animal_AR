#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.RenderTexture
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27;
// SSAOEffect
struct SSAOEffect_t1910A5D3936883279CA823A34C43306285D1ECB2;
// UnityEngine.Shader
struct Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692;
// System.String
struct String_t;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;

IL2CPP_EXTERN_C RuntimeClass* Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral5826A90C2A023CEF000FAA3A3456FA3BC3A1BF80;
IL2CPP_EXTERN_C String_t* _stringLiteral6238431605E3EDF93423004446032CC82A241F2C;
IL2CPP_EXTERN_C String_t* _stringLiteral83D3CB22CFCAF6C46B4A2D040B6BAD092671021A;
IL2CPP_EXTERN_C String_t* _stringLiteralF6964931913C0285B81AE3611DBB55AEF6ADC09A;
IL2CPP_EXTERN_C String_t* _stringLiteralF873D6748545B7516CD56A7A617453AEC82E7C8D;
IL2CPP_EXTERN_C String_t* _stringLiteralFB7478C21D272917F984D2563D604F75AD87D92C;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tF062866229C4952B8051AD32AB6E9D931142CC95 
{
};
struct Il2CppArrayBounds;

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
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

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
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

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
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

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
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

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
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

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Shader
struct Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.RenderTexture
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// SSAOEffect
struct SSAOEffect_t1910A5D3936883279CA823A34C43306285D1ECB2  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single SSAOEffect::m_Radius
	float ___m_Radius_4;
	// SSAOEffect/SSAOSamples SSAOEffect::m_SampleCount
	int32_t ___m_SampleCount_5;
	// System.Single SSAOEffect::m_OcclusionIntensity
	float ___m_OcclusionIntensity_6;
	// System.Int32 SSAOEffect::m_Blur
	int32_t ___m_Blur_7;
	// System.Int32 SSAOEffect::m_Downsampling
	int32_t ___m_Downsampling_8;
	// System.Single SSAOEffect::m_OcclusionAttenuation
	float ___m_OcclusionAttenuation_9;
	// System.Single SSAOEffect::m_MinZ
	float ___m_MinZ_10;
	// UnityEngine.Shader SSAOEffect::m_SSAOShader
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___m_SSAOShader_11;
	// UnityEngine.Material SSAOEffect::m_SSAOMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_SSAOMaterial_12;
	// UnityEngine.Texture2D SSAOEffect::m_RandomTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___m_RandomTexture_13;
	// System.Boolean SSAOEffect::m_Supported
	bool ___m_Supported_14;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif


// T UnityEngine.Component::GetComponent<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Component_GetComponent_TisIl2CppFullySharedGenericAny_m47CBDD147982125387F078ABBFDAAB92D397A6C2_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;

// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::.ctor(UnityEngine.Shader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___shader0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Void SSAOEffect::DestroyMaterial(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SSAOEffect_DestroyMaterial_mE8E016F07B90C215036703E72EB7575C6B379D4C (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___mat0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.SystemInfo::get_supportsImageEffects()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SystemInfo_get_supportsImageEffects_m42EC2773D0A8757B5D0F12080F999807F778668A (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.SystemInfo::SupportsRenderTextureFormat(UnityEngine.RenderTextureFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SystemInfo_SupportsRenderTextureFormat_mFF17D2CC50B98C7859CE0536524C612965ACF763 (int32_t ___format0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void SSAOEffect::CreateMaterials()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SSAOEffect_CreateMaterials_m3044E35ABF0A5E401A5BDF32AD75BD50991C5657 (SSAOEffect_t1910A5D3936883279CA823A34C43306285D1ECB2* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Material::get_passCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Material_get_passCount_m7BA071AFFA34DC3E49B56A16CB8B098566BDE765 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Camera>()
inline Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* il2cppRetVal;
	((  void (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Component_GetComponent_TisIl2CppFullySharedGenericAny_m47CBDD147982125387F078ABBFDAAB92D397A6C2_gshared)((Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// UnityEngine.DepthTextureMode UnityEngine.Camera::get_depthTextureMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Camera_get_depthTextureMode_m998CDEBC055FE2A910F3B650585ADE3E2BB141EE (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_depthTextureMode(UnityEngine.DepthTextureMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_depthTextureMode_mE722389E4DF8B3DF7F6100DB142E4DBAF698F6BF (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Shader::get_isSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Shader_get_isSupported_m21C3D0F1819054101DFE0C0C062A24464FA5CAE5 (Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* __this, const RuntimeMethod* method) ;
// UnityEngine.Material SSAOEffect::CreateMaterial(UnityEngine.Shader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* SSAOEffect_CreateMaterial_m3A047AE14B049BA63F3117DA0A3F7AE3A0338781 (Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___shader0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetTexture(System.String,UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___value1, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::Clamp(System.Int32,System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_mA48718D9A20D8972EDD41714CEF6BBF864F442EA_inline (int32_t ___value0, int32_t ___min1, int32_t ___max2, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) ;
// UnityEngine.RenderTexture UnityEngine.RenderTexture::GetTemporary(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* RenderTexture_GetTemporary_m47DF6AA5AB3A4360AF9CB62BE0180AE9505C6C66 (int32_t ___width0, int32_t ___height1, int32_t ___depthBuffer2, const RuntimeMethod* method) ;
// System.Single UnityEngine.Camera::get_fieldOfView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_fieldOfView_m9A93F17BBF89F496AE231C21817AFD1C1E833FBB (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Camera::get_farClipPlane()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_farClipPlane_m1D7128B85B5DB866F75FBE8CEBA48335716B67BD (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Camera::get_aspect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_aspect_m48BF8820EA2D55BE0D154BC5546819FB65BE257D (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Vector4::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_op_Implicit_mB05287DC52FC87A756AB80E837E1EC22FEEB3937_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetVector(System.String,UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Graphics::Blit(UnityEngine.Texture,UnityEngine.RenderTexture,UnityEngine.Material,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphics_Blit_m5A753341A113FB6501C64F73D62047F84F957E50 (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___source0, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___dest1, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___mat2, int32_t ___pass3, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTexture::ReleaseTemporary(UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_ReleaseTemporary_m7D9B385460ED0D0CF7BCC033605CEBD60A1A232F (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___temp0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
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
// UnityEngine.Material SSAOEffect::CreateMaterial(UnityEngine.Shader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* SSAOEffect_CreateMaterial_m3A047AE14B049BA63F3117DA0A3F7AE3A0338781 (Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___shader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!shader)
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_0 = ___shader0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		// return null;
		return (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)NULL;
	}

IL_000a:
	{
		// Material m = new Material (shader);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_2 = ___shader0;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_3, L_2, NULL);
		// m.hideFlags = HideFlags.HideAndDontSave;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = L_3;
		NullCheck(L_4);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_4, ((int32_t)61), NULL);
		// return m;
		return L_4;
	}
}
// System.Void SSAOEffect::DestroyMaterial(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SSAOEffect_DestroyMaterial_mE8E016F07B90C215036703E72EB7575C6B379D4C (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___mat0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (mat)
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = ___mat0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		// DestroyImmediate (mat);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = ___mat0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57(L_2, NULL);
		// mat = null;
		___mat0 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)NULL;
	}

IL_0011:
	{
		// }
		return;
	}
}
// System.Void SSAOEffect::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SSAOEffect_OnDisable_mA8DB91ED63F5F38F59370FA82E86C34495C46456 (SSAOEffect_t1910A5D3936883279CA823A34C43306285D1ECB2* __this, const RuntimeMethod* method) 
{
	{
		// DestroyMaterial (m_SSAOMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___m_SSAOMaterial_12;
		SSAOEffect_DestroyMaterial_mE8E016F07B90C215036703E72EB7575C6B379D4C(L_0, NULL);
		// }
		return;
	}
}
// System.Void SSAOEffect::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SSAOEffect_Start_mE4BC4B01A0D428A30FF4AE378989EC0DA7B35EF6 (SSAOEffect_t1910A5D3936883279CA823A34C43306285D1ECB2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!SystemInfo.supportsImageEffects || !SystemInfo.SupportsRenderTextureFormat (RenderTextureFormat.Depth))
		bool L_0;
		L_0 = SystemInfo_get_supportsImageEffects_m42EC2773D0A8757B5D0F12080F999807F778668A(NULL);
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		bool L_1;
		L_1 = SystemInfo_SupportsRenderTextureFormat_mFF17D2CC50B98C7859CE0536524C612965ACF763(1, NULL);
		if (L_1)
		{
			goto IL_001e;
		}
	}

IL_000f:
	{
		// m_Supported = false;
		__this->___m_Supported_14 = (bool)0;
		// enabled = false;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
		// return;
		return;
	}

IL_001e:
	{
		// CreateMaterials ();
		SSAOEffect_CreateMaterials_m3044E35ABF0A5E401A5BDF32AD75BD50991C5657(__this, NULL);
		// if (!m_SSAOMaterial || m_SSAOMaterial.passCount != 5)
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = __this->___m_SSAOMaterial_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_2, NULL);
		if (!L_3)
		{
			goto IL_003f;
		}
	}
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = __this->___m_SSAOMaterial_12;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = Material_get_passCount_m7BA071AFFA34DC3E49B56A16CB8B098566BDE765(L_4, NULL);
		if ((((int32_t)L_5) == ((int32_t)5)))
		{
			goto IL_004e;
		}
	}

IL_003f:
	{
		// m_Supported = false;
		__this->___m_Supported_14 = (bool)0;
		// enabled = false;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
		// return;
		return;
	}

IL_004e:
	{
		// m_Supported = true;
		__this->___m_Supported_14 = (bool)1;
		// }
		return;
	}
}
// System.Void SSAOEffect::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SSAOEffect_OnEnable_m80DBE152D70FD6594B29DAC2B556CDD07CF676AB (SSAOEffect_t1910A5D3936883279CA823A34C43306285D1ECB2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GetComponent<Camera>().depthTextureMode |= DepthTextureMode.DepthNormals;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4(__this, Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_1 = L_0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Camera_get_depthTextureMode_m998CDEBC055FE2A910F3B650585ADE3E2BB141EE(L_1, NULL);
		NullCheck(L_1);
		Camera_set_depthTextureMode_mE722389E4DF8B3DF7F6100DB142E4DBAF698F6BF(L_1, ((int32_t)((int32_t)L_2|2)), NULL);
		// }
		return;
	}
}
// System.Void SSAOEffect::CreateMaterials()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SSAOEffect_CreateMaterials_m3044E35ABF0A5E401A5BDF32AD75BD50991C5657 (SSAOEffect_t1910A5D3936883279CA823A34C43306285D1ECB2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5826A90C2A023CEF000FAA3A3456FA3BC3A1BF80);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!m_SSAOMaterial && m_SSAOShader.isSupported)
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___m_SSAOMaterial_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		if (L_1)
		{
			goto IL_0041;
		}
	}
	{
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_2 = __this->___m_SSAOShader_11;
		NullCheck(L_2);
		bool L_3;
		L_3 = Shader_get_isSupported_m21C3D0F1819054101DFE0C0C062A24464FA5CAE5(L_2, NULL);
		if (!L_3)
		{
			goto IL_0041;
		}
	}
	{
		// m_SSAOMaterial = CreateMaterial (m_SSAOShader);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_4 = __this->___m_SSAOShader_11;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_5;
		L_5 = SSAOEffect_CreateMaterial_m3A047AE14B049BA63F3117DA0A3F7AE3A0338781(L_4, NULL);
		__this->___m_SSAOMaterial_12 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_SSAOMaterial_12), (void*)L_5);
		// m_SSAOMaterial.SetTexture ("_RandomTexture", m_RandomTexture);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6 = __this->___m_SSAOMaterial_12;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_7 = __this->___m_RandomTexture_13;
		NullCheck(L_6);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_6, _stringLiteral5826A90C2A023CEF000FAA3A3456FA3BC3A1BF80, L_7, NULL);
	}

IL_0041:
	{
		// }
		return;
	}
}
// System.Void SSAOEffect::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SSAOEffect_OnRenderImage_mDC710D8C07A21FE528870F3242EE27032F0430E3 (SSAOEffect_t1910A5D3936883279CA823A34C43306285D1ECB2* __this, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___source0, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___destination1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6238431605E3EDF93423004446032CC82A241F2C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral83D3CB22CFCAF6C46B4A2D040B6BAD092671021A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF6964931913C0285B81AE3611DBB55AEF6ADC09A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF873D6748545B7516CD56A7A617453AEC82E7C8D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB7478C21D272917F984D2563D604F75AD87D92C);
		s_Il2CppMethodInitialized = true;
	}
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* V_0 = NULL;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* V_6 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* V_7 = NULL;
	int32_t G_B8_0 = 0;
	int32_t G_B7_0 = 0;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* G_B9_0 = NULL;
	int32_t G_B9_1 = 0;
	{
		// if (!m_Supported || !m_SSAOShader.isSupported) {
		bool L_0 = __this->___m_Supported_14;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_1 = __this->___m_SSAOShader_11;
		NullCheck(L_1);
		bool L_2;
		L_2 = Shader_get_isSupported_m21C3D0F1819054101DFE0C0C062A24464FA5CAE5(L_1, NULL);
		if (L_2)
		{
			goto IL_001d;
		}
	}

IL_0015:
	{
		// enabled = false;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
		// return;
		return;
	}

IL_001d:
	{
		// CreateMaterials ();
		SSAOEffect_CreateMaterials_m3044E35ABF0A5E401A5BDF32AD75BD50991C5657(__this, NULL);
		// m_Downsampling = Mathf.Clamp (m_Downsampling, 1, 6);
		int32_t L_3 = __this->___m_Downsampling_8;
		int32_t L_4;
		L_4 = Mathf_Clamp_mA48718D9A20D8972EDD41714CEF6BBF864F442EA_inline(L_3, 1, 6, NULL);
		__this->___m_Downsampling_8 = L_4;
		// m_Radius = Mathf.Clamp (m_Radius, 0.05f, 1.0f);
		float L_5 = __this->___m_Radius_4;
		float L_6;
		L_6 = Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline(L_5, (0.0500000007f), (1.0f), NULL);
		__this->___m_Radius_4 = L_6;
		// m_MinZ = Mathf.Clamp (m_MinZ, 0.00001f, 0.5f);
		float L_7 = __this->___m_MinZ_10;
		float L_8;
		L_8 = Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline(L_7, (9.99999975E-06f), (0.5f), NULL);
		__this->___m_MinZ_10 = L_8;
		// m_OcclusionIntensity = Mathf.Clamp (m_OcclusionIntensity, 0.5f, 4.0f);
		float L_9 = __this->___m_OcclusionIntensity_6;
		float L_10;
		L_10 = Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline(L_9, (0.5f), (4.0f), NULL);
		__this->___m_OcclusionIntensity_6 = L_10;
		// m_OcclusionAttenuation = Mathf.Clamp (m_OcclusionAttenuation, 0.2f, 2.0f);
		float L_11 = __this->___m_OcclusionAttenuation_9;
		float L_12;
		L_12 = Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline(L_11, (0.200000003f), (2.0f), NULL);
		__this->___m_OcclusionAttenuation_9 = L_12;
		// m_Blur = Mathf.Clamp (m_Blur, 0, 4);
		int32_t L_13 = __this->___m_Blur_7;
		int32_t L_14;
		L_14 = Mathf_Clamp_mA48718D9A20D8972EDD41714CEF6BBF864F442EA_inline(L_13, 0, 4, NULL);
		__this->___m_Blur_7 = L_14;
		// RenderTexture rtAO = RenderTexture.GetTemporary (source.width / m_Downsampling, source.height / m_Downsampling, 0);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_15 = ___source0;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_15);
		int32_t L_17 = __this->___m_Downsampling_8;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_18 = ___source0;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_18);
		int32_t L_20 = __this->___m_Downsampling_8;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_21;
		L_21 = RenderTexture_GetTemporary_m47DF6AA5AB3A4360AF9CB62BE0180AE9505C6C66(((int32_t)(L_16/L_17)), ((int32_t)(L_19/L_20)), 0, NULL);
		V_0 = L_21;
		// float fovY = GetComponent<Camera>().fieldOfView;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_22;
		L_22 = Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4(__this, Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var);
		NullCheck(L_22);
		float L_23;
		L_23 = Camera_get_fieldOfView_m9A93F17BBF89F496AE231C21817AFD1C1E833FBB(L_22, NULL);
		// float far = GetComponent<Camera>().farClipPlane;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_24;
		L_24 = Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4(__this, Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var);
		NullCheck(L_24);
		float L_25;
		L_25 = Camera_get_farClipPlane_m1D7128B85B5DB866F75FBE8CEBA48335716B67BD(L_24, NULL);
		V_1 = L_25;
		// float y = Mathf.Tan (fovY * Mathf.Deg2Rad * 0.5f) * far;
		float L_26;
		L_26 = tanf(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_23, (0.0174532924f))), (0.5f))));
		float L_27 = V_1;
		V_2 = ((float)il2cpp_codegen_multiply(L_26, L_27));
		// float x = y * GetComponent<Camera>().aspect;
		float L_28 = V_2;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_29;
		L_29 = Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4(__this, Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var);
		NullCheck(L_29);
		float L_30;
		L_30 = Camera_get_aspect_m48BF8820EA2D55BE0D154BC5546819FB65BE257D(L_29, NULL);
		V_3 = ((float)il2cpp_codegen_multiply(L_28, L_30));
		// m_SSAOMaterial.SetVector ("_FarCorner", new Vector3(x,y,far));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_31 = __this->___m_SSAOMaterial_12;
		float L_32 = V_3;
		float L_33 = V_2;
		float L_34 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		memset((&L_35), 0, sizeof(L_35));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_35), L_32, L_33, L_34, /*hidden argument*/NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_36;
		L_36 = Vector4_op_Implicit_mB05287DC52FC87A756AB80E837E1EC22FEEB3937_inline(L_35, NULL);
		NullCheck(L_31);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_31, _stringLiteral6238431605E3EDF93423004446032CC82A241F2C, L_36, NULL);
		// if (m_RandomTexture) {
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_37 = __this->___m_RandomTexture_13;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_38;
		L_38 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_37, NULL);
		if (!L_38)
		{
			goto IL_0155;
		}
	}
	{
		// noiseWidth = m_RandomTexture.width;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_39 = __this->___m_RandomTexture_13;
		NullCheck(L_39);
		int32_t L_40;
		L_40 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_39);
		V_4 = L_40;
		// noiseHeight = m_RandomTexture.height;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_41 = __this->___m_RandomTexture_13;
		NullCheck(L_41);
		int32_t L_42;
		L_42 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_41);
		V_5 = L_42;
		goto IL_015b;
	}

IL_0155:
	{
		// noiseWidth = 1; noiseHeight = 1;
		V_4 = 1;
		// noiseWidth = 1; noiseHeight = 1;
		V_5 = 1;
	}

IL_015b:
	{
		// m_SSAOMaterial.SetVector ("_NoiseScale", new Vector3 ((float)rtAO.width / noiseWidth, (float)rtAO.height / noiseHeight, 0.0f));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_43 = __this->___m_SSAOMaterial_12;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_44 = V_0;
		NullCheck(L_44);
		int32_t L_45;
		L_45 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_44);
		int32_t L_46 = V_4;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_47 = V_0;
		NullCheck(L_47);
		int32_t L_48;
		L_48 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_47);
		int32_t L_49 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_50;
		memset((&L_50), 0, sizeof(L_50));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_50), ((float)(((float)L_45)/((float)L_46))), ((float)(((float)L_48)/((float)L_49))), (0.0f), /*hidden argument*/NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_51;
		L_51 = Vector4_op_Implicit_mB05287DC52FC87A756AB80E837E1EC22FEEB3937_inline(L_50, NULL);
		NullCheck(L_43);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_43, _stringLiteral83D3CB22CFCAF6C46B4A2D040B6BAD092671021A, L_51, NULL);
		// m_SSAOMaterial.SetVector ("_Params", new Vector4(
		//     m_Radius,
		//     m_MinZ,
		//     1.0f / m_OcclusionAttenuation,
		//     m_OcclusionIntensity));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_52 = __this->___m_SSAOMaterial_12;
		float L_53 = __this->___m_Radius_4;
		float L_54 = __this->___m_MinZ_10;
		float L_55 = __this->___m_OcclusionAttenuation_9;
		float L_56 = __this->___m_OcclusionIntensity_6;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_57;
		memset((&L_57), 0, sizeof(L_57));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_57), L_53, L_54, ((float)((1.0f)/L_55)), L_56, /*hidden argument*/NULL);
		NullCheck(L_52);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_52, _stringLiteralF873D6748545B7516CD56A7A617453AEC82E7C8D, L_57, NULL);
		// bool doBlur = m_Blur > 0;
		int32_t L_58 = __this->___m_Blur_7;
		// Graphics.Blit (doBlur ? null : source, rtAO, m_SSAOMaterial, (int)m_SampleCount);
		int32_t L_59 = ((((int32_t)L_58) > ((int32_t)0))? 1 : 0);
		G_B7_0 = L_59;
		if (L_59)
		{
			G_B8_0 = L_59;
			goto IL_01d2;
		}
	}
	{
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_60 = ___source0;
		G_B9_0 = L_60;
		G_B9_1 = G_B7_0;
		goto IL_01d3;
	}

IL_01d2:
	{
		G_B9_0 = ((RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)(NULL));
		G_B9_1 = G_B8_0;
	}

IL_01d3:
	{
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_61 = V_0;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_62 = __this->___m_SSAOMaterial_12;
		int32_t L_63 = __this->___m_SampleCount_5;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m5A753341A113FB6501C64F73D62047F84F957E50(G_B9_0, L_61, L_62, L_63, NULL);
		// if (doBlur)
		if (!G_B9_1)
		{
			goto IL_02c9;
		}
	}
	{
		// RenderTexture rtBlurX = RenderTexture.GetTemporary (source.width, source.height, 0);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_64 = ___source0;
		NullCheck(L_64);
		int32_t L_65;
		L_65 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_64);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_66 = ___source0;
		NullCheck(L_66);
		int32_t L_67;
		L_67 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_66);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_68;
		L_68 = RenderTexture_GetTemporary_m47DF6AA5AB3A4360AF9CB62BE0180AE9505C6C66(L_65, L_67, 0, NULL);
		V_6 = L_68;
		// m_SSAOMaterial.SetVector ("_TexelOffsetScale",
		//     new Vector4 ((float)m_Blur / source.width, 0,0,0));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_69 = __this->___m_SSAOMaterial_12;
		int32_t L_70 = __this->___m_Blur_7;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_71 = ___source0;
		NullCheck(L_71);
		int32_t L_72;
		L_72 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_71);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_73;
		memset((&L_73), 0, sizeof(L_73));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_73), ((float)(((float)L_70)/((float)L_72))), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_69);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_69, _stringLiteralF6964931913C0285B81AE3611DBB55AEF6ADC09A, L_73, NULL);
		// m_SSAOMaterial.SetTexture ("_SSAO", rtAO);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_74 = __this->___m_SSAOMaterial_12;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_75 = V_0;
		NullCheck(L_74);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_74, _stringLiteralFB7478C21D272917F984D2563D604F75AD87D92C, L_75, NULL);
		// Graphics.Blit (null, rtBlurX, m_SSAOMaterial, 3);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_76 = V_6;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_77 = __this->___m_SSAOMaterial_12;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m5A753341A113FB6501C64F73D62047F84F957E50((Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)NULL, L_76, L_77, 3, NULL);
		// RenderTexture.ReleaseTemporary (rtAO); // original rtAO not needed anymore
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_78 = V_0;
		RenderTexture_ReleaseTemporary_m7D9B385460ED0D0CF7BCC033605CEBD60A1A232F(L_78, NULL);
		// RenderTexture rtBlurY = RenderTexture.GetTemporary (source.width, source.height, 0);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_79 = ___source0;
		NullCheck(L_79);
		int32_t L_80;
		L_80 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_79);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_81 = ___source0;
		NullCheck(L_81);
		int32_t L_82;
		L_82 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_81);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_83;
		L_83 = RenderTexture_GetTemporary_m47DF6AA5AB3A4360AF9CB62BE0180AE9505C6C66(L_80, L_82, 0, NULL);
		V_7 = L_83;
		// m_SSAOMaterial.SetVector ("_TexelOffsetScale",
		//     new Vector4 (0, (float)m_Blur/source.height, 0,0));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_84 = __this->___m_SSAOMaterial_12;
		int32_t L_85 = __this->___m_Blur_7;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_86 = ___source0;
		NullCheck(L_86);
		int32_t L_87;
		L_87 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_86);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_88;
		memset((&L_88), 0, sizeof(L_88));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_88), (0.0f), ((float)(((float)L_85)/((float)L_87))), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_84);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_84, _stringLiteralF6964931913C0285B81AE3611DBB55AEF6ADC09A, L_88, NULL);
		// m_SSAOMaterial.SetTexture ("_SSAO", rtBlurX);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_89 = __this->___m_SSAOMaterial_12;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_90 = V_6;
		NullCheck(L_89);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_89, _stringLiteralFB7478C21D272917F984D2563D604F75AD87D92C, L_90, NULL);
		// Graphics.Blit (source, rtBlurY, m_SSAOMaterial, 3);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_91 = ___source0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_92 = V_7;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_93 = __this->___m_SSAOMaterial_12;
		Graphics_Blit_m5A753341A113FB6501C64F73D62047F84F957E50(L_91, L_92, L_93, 3, NULL);
		// RenderTexture.ReleaseTemporary (rtBlurX); // blurX RT not needed anymore
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_94 = V_6;
		RenderTexture_ReleaseTemporary_m7D9B385460ED0D0CF7BCC033605CEBD60A1A232F(L_94, NULL);
		// rtAO = rtBlurY; // AO is the blurred one now
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_95 = V_7;
		V_0 = L_95;
	}

IL_02c9:
	{
		// m_SSAOMaterial.SetTexture ("_SSAO", rtAO);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_96 = __this->___m_SSAOMaterial_12;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_97 = V_0;
		NullCheck(L_96);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_96, _stringLiteralFB7478C21D272917F984D2563D604F75AD87D92C, L_97, NULL);
		// Graphics.Blit (source, destination, m_SSAOMaterial, 4);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_98 = ___source0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_99 = ___destination1;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_100 = __this->___m_SSAOMaterial_12;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m5A753341A113FB6501C64F73D62047F84F957E50(L_98, L_99, L_100, 4, NULL);
		// RenderTexture.ReleaseTemporary (rtAO);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_101 = V_0;
		RenderTexture_ReleaseTemporary_m7D9B385460ED0D0CF7BCC033605CEBD60A1A232F(L_101, NULL);
		// }
		return;
	}
}
// System.Void SSAOEffect::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SSAOEffect__ctor_m1E2D35DE2044DBAF29786FC1F986BA1BDE0CE84F (SSAOEffect_t1910A5D3936883279CA823A34C43306285D1ECB2* __this, const RuntimeMethod* method) 
{
	{
		// public float m_Radius = 0.4f;
		__this->___m_Radius_4 = (0.400000006f);
		// public SSAOSamples m_SampleCount = SSAOSamples.Medium;
		__this->___m_SampleCount_5 = 1;
		// public float m_OcclusionIntensity = 1.5f;
		__this->___m_OcclusionIntensity_6 = (1.5f);
		// public int m_Blur = 2;
		__this->___m_Blur_7 = 2;
		// public int m_Downsampling = 2;
		__this->___m_Downsampling_8 = 2;
		// public float m_OcclusionAttenuation = 1.0f;
		__this->___m_OcclusionAttenuation_9 = (1.0f);
		// public float m_MinZ = 0.01f;
		__this->___m_MinZ_10 = (0.00999999978f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_mA48718D9A20D8972EDD41714CEF6BBF864F442EA_inline (int32_t ___value0, int32_t ___min1, int32_t ___max2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___value0;
		int32_t L_1 = ___min1;
		V_0 = (bool)((((int32_t)L_0) < ((int32_t)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_3 = ___min1;
		___value0 = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		int32_t L_4 = ___value0;
		int32_t L_5 = ___max2;
		V_1 = (bool)((((int32_t)L_4) > ((int32_t)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_7 = ___max2;
		___value0 = L_7;
	}

IL_0019:
	{
		int32_t L_8 = ___value0;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		int32_t L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___value0;
		float L_1 = ___min1;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___min1;
		___value0 = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___value0;
		float L_5 = ___max2;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___max2;
		___value0 = L_7;
	}

IL_0019:
	{
		float L_8 = ___value0;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_op_Implicit_mB05287DC52FC87A756AB80E837E1EC22FEEB3937_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___v0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___v0;
		float L_3 = L_2.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___v0;
		float L_5 = L_4.___z_4;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_6), L_1, L_3, L_5, (0.0f), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0020;
	}

IL_0020:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_1 = L_0;
		float L_1 = ___y1;
		__this->___y_2 = L_1;
		float L_2 = ___z2;
		__this->___z_3 = L_2;
		float L_3 = ___w3;
		__this->___w_4 = L_3;
		return;
	}
}
