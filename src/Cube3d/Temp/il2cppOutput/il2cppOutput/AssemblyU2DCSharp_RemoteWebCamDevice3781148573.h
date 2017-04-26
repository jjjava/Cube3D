#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_WebCamDevice3983871389.h"

// System.String
struct String_t;
// UnityEngine.WebCamTexture
struct WebCamTexture_t1079476942;
// UnityEngine.Color32[]
struct Color32U5BU5D_t30278651;
// UnityEngine.Texture2D
struct Texture2D_t3542995729;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RemoteWebCamDevice
struct  RemoteWebCamDevice_t3781148573  : public Il2CppObject
{
public:
	// System.String RemoteWebCamDevice::name
	String_t* ___name_0;
	// System.String RemoteWebCamDevice::internalName
	String_t* ___internalName_1;
	// UnityEngine.WebCamDevice RemoteWebCamDevice::device
	WebCamDevice_t3983871389  ___device_2;
	// UnityEngine.WebCamTexture RemoteWebCamDevice::texture
	WebCamTexture_t1079476942 * ___texture_3;
	// UnityEngine.Color32[] RemoteWebCamDevice::imageBuffer
	Color32U5BU5D_t30278651* ___imageBuffer_4;
	// UnityEngine.Texture2D RemoteWebCamDevice::image
	Texture2D_t3542995729 * ___image_5;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(RemoteWebCamDevice_t3781148573, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier(&___name_0, value);
	}

	inline static int32_t get_offset_of_internalName_1() { return static_cast<int32_t>(offsetof(RemoteWebCamDevice_t3781148573, ___internalName_1)); }
	inline String_t* get_internalName_1() const { return ___internalName_1; }
	inline String_t** get_address_of_internalName_1() { return &___internalName_1; }
	inline void set_internalName_1(String_t* value)
	{
		___internalName_1 = value;
		Il2CppCodeGenWriteBarrier(&___internalName_1, value);
	}

	inline static int32_t get_offset_of_device_2() { return static_cast<int32_t>(offsetof(RemoteWebCamDevice_t3781148573, ___device_2)); }
	inline WebCamDevice_t3983871389  get_device_2() const { return ___device_2; }
	inline WebCamDevice_t3983871389 * get_address_of_device_2() { return &___device_2; }
	inline void set_device_2(WebCamDevice_t3983871389  value)
	{
		___device_2 = value;
	}

	inline static int32_t get_offset_of_texture_3() { return static_cast<int32_t>(offsetof(RemoteWebCamDevice_t3781148573, ___texture_3)); }
	inline WebCamTexture_t1079476942 * get_texture_3() const { return ___texture_3; }
	inline WebCamTexture_t1079476942 ** get_address_of_texture_3() { return &___texture_3; }
	inline void set_texture_3(WebCamTexture_t1079476942 * value)
	{
		___texture_3 = value;
		Il2CppCodeGenWriteBarrier(&___texture_3, value);
	}

	inline static int32_t get_offset_of_imageBuffer_4() { return static_cast<int32_t>(offsetof(RemoteWebCamDevice_t3781148573, ___imageBuffer_4)); }
	inline Color32U5BU5D_t30278651* get_imageBuffer_4() const { return ___imageBuffer_4; }
	inline Color32U5BU5D_t30278651** get_address_of_imageBuffer_4() { return &___imageBuffer_4; }
	inline void set_imageBuffer_4(Color32U5BU5D_t30278651* value)
	{
		___imageBuffer_4 = value;
		Il2CppCodeGenWriteBarrier(&___imageBuffer_4, value);
	}

	inline static int32_t get_offset_of_image_5() { return static_cast<int32_t>(offsetof(RemoteWebCamDevice_t3781148573, ___image_5)); }
	inline Texture2D_t3542995729 * get_image_5() const { return ___image_5; }
	inline Texture2D_t3542995729 ** get_address_of_image_5() { return &___image_5; }
	inline void set_image_5(Texture2D_t3542995729 * value)
	{
		___image_5 = value;
		Il2CppCodeGenWriteBarrier(&___image_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
