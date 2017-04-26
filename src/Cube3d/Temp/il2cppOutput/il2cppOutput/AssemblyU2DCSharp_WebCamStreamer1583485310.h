#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Collections.Generic.List`1<RemoteWebCamDevice>
struct List_1_t3150269705;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebCamStreamer
struct  WebCamStreamer_t1583485310  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1<RemoteWebCamDevice> WebCamStreamer::devices
	List_1_t3150269705 * ___devices_0;

public:
	inline static int32_t get_offset_of_devices_0() { return static_cast<int32_t>(offsetof(WebCamStreamer_t1583485310, ___devices_0)); }
	inline List_1_t3150269705 * get_devices_0() const { return ___devices_0; }
	inline List_1_t3150269705 ** get_address_of_devices_0() { return &___devices_0; }
	inline void set_devices_0(List_1_t3150269705 * value)
	{
		___devices_0 = value;
		Il2CppCodeGenWriteBarrier(&___devices_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
