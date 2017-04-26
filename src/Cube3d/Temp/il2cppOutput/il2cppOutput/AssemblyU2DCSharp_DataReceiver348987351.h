#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.IO.MemoryStream
struct MemoryStream_t743994179;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// ScreenStream
struct ScreenStream_t3570668672;
// WebCamStreamer
struct WebCamStreamer_t1583485310;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DataReceiver
struct  DataReceiver_t348987351  : public Il2CppObject
{
public:
	// System.IO.MemoryStream DataReceiver::data
	MemoryStream_t743994179 * ___data_0;
	// System.Byte[] DataReceiver::buffer
	ByteU5BU5D_t3397334013* ___buffer_1;
	// ScreenStream DataReceiver::screen
	ScreenStream_t3570668672 * ___screen_2;
	// WebCamStreamer DataReceiver::webCamStreamer
	WebCamStreamer_t1583485310 * ___webCamStreamer_3;

public:
	inline static int32_t get_offset_of_data_0() { return static_cast<int32_t>(offsetof(DataReceiver_t348987351, ___data_0)); }
	inline MemoryStream_t743994179 * get_data_0() const { return ___data_0; }
	inline MemoryStream_t743994179 ** get_address_of_data_0() { return &___data_0; }
	inline void set_data_0(MemoryStream_t743994179 * value)
	{
		___data_0 = value;
		Il2CppCodeGenWriteBarrier(&___data_0, value);
	}

	inline static int32_t get_offset_of_buffer_1() { return static_cast<int32_t>(offsetof(DataReceiver_t348987351, ___buffer_1)); }
	inline ByteU5BU5D_t3397334013* get_buffer_1() const { return ___buffer_1; }
	inline ByteU5BU5D_t3397334013** get_address_of_buffer_1() { return &___buffer_1; }
	inline void set_buffer_1(ByteU5BU5D_t3397334013* value)
	{
		___buffer_1 = value;
		Il2CppCodeGenWriteBarrier(&___buffer_1, value);
	}

	inline static int32_t get_offset_of_screen_2() { return static_cast<int32_t>(offsetof(DataReceiver_t348987351, ___screen_2)); }
	inline ScreenStream_t3570668672 * get_screen_2() const { return ___screen_2; }
	inline ScreenStream_t3570668672 ** get_address_of_screen_2() { return &___screen_2; }
	inline void set_screen_2(ScreenStream_t3570668672 * value)
	{
		___screen_2 = value;
		Il2CppCodeGenWriteBarrier(&___screen_2, value);
	}

	inline static int32_t get_offset_of_webCamStreamer_3() { return static_cast<int32_t>(offsetof(DataReceiver_t348987351, ___webCamStreamer_3)); }
	inline WebCamStreamer_t1583485310 * get_webCamStreamer_3() const { return ___webCamStreamer_3; }
	inline WebCamStreamer_t1583485310 ** get_address_of_webCamStreamer_3() { return &___webCamStreamer_3; }
	inline void set_webCamStreamer_3(WebCamStreamer_t1583485310 * value)
	{
		___webCamStreamer_3 = value;
		Il2CppCodeGenWriteBarrier(&___webCamStreamer_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
