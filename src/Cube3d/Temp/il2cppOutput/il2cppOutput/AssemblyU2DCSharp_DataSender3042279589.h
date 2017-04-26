#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// PacketWriter
struct PacketWriter_t1062484765;
// System.IO.Stream
struct Stream_t3255436806;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DataSender
struct  DataSender_t3042279589  : public Il2CppObject
{
public:
	// PacketWriter DataSender::writer
	PacketWriter_t1062484765 * ___writer_0;
	// System.IO.Stream DataSender::stream
	Stream_t3255436806 * ___stream_1;

public:
	inline static int32_t get_offset_of_writer_0() { return static_cast<int32_t>(offsetof(DataSender_t3042279589, ___writer_0)); }
	inline PacketWriter_t1062484765 * get_writer_0() const { return ___writer_0; }
	inline PacketWriter_t1062484765 ** get_address_of_writer_0() { return &___writer_0; }
	inline void set_writer_0(PacketWriter_t1062484765 * value)
	{
		___writer_0 = value;
		Il2CppCodeGenWriteBarrier(&___writer_0, value);
	}

	inline static int32_t get_offset_of_stream_1() { return static_cast<int32_t>(offsetof(DataSender_t3042279589, ___stream_1)); }
	inline Stream_t3255436806 * get_stream_1() const { return ___stream_1; }
	inline Stream_t3255436806 ** get_address_of_stream_1() { return &___stream_1; }
	inline void set_stream_1(Stream_t3255436806 * value)
	{
		___stream_1 = value;
		Il2CppCodeGenWriteBarrier(&___stream_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
