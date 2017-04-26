#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_RemoteMessage1942042117.h"

// System.IO.BinaryWriter
struct BinaryWriter_t3179371318;
// System.IO.MemoryStream
struct MemoryStream_t743994179;
// System.Byte[]
struct ByteU5BU5D_t3397334013;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PacketWriter
struct  PacketWriter_t1062484765  : public Il2CppObject
{
public:
	// System.IO.BinaryWriter PacketWriter::writer
	BinaryWriter_t3179371318 * ___writer_0;
	// System.IO.MemoryStream PacketWriter::packet
	MemoryStream_t743994179 * ___packet_1;
	// RemoteMessage PacketWriter::message
	uint8_t ___message_2;
	// System.Byte[] PacketWriter::buffer
	ByteU5BU5D_t3397334013* ___buffer_3;

public:
	inline static int32_t get_offset_of_writer_0() { return static_cast<int32_t>(offsetof(PacketWriter_t1062484765, ___writer_0)); }
	inline BinaryWriter_t3179371318 * get_writer_0() const { return ___writer_0; }
	inline BinaryWriter_t3179371318 ** get_address_of_writer_0() { return &___writer_0; }
	inline void set_writer_0(BinaryWriter_t3179371318 * value)
	{
		___writer_0 = value;
		Il2CppCodeGenWriteBarrier(&___writer_0, value);
	}

	inline static int32_t get_offset_of_packet_1() { return static_cast<int32_t>(offsetof(PacketWriter_t1062484765, ___packet_1)); }
	inline MemoryStream_t743994179 * get_packet_1() const { return ___packet_1; }
	inline MemoryStream_t743994179 ** get_address_of_packet_1() { return &___packet_1; }
	inline void set_packet_1(MemoryStream_t743994179 * value)
	{
		___packet_1 = value;
		Il2CppCodeGenWriteBarrier(&___packet_1, value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(PacketWriter_t1062484765, ___message_2)); }
	inline uint8_t get_message_2() const { return ___message_2; }
	inline uint8_t* get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(uint8_t value)
	{
		___message_2 = value;
	}

	inline static int32_t get_offset_of_buffer_3() { return static_cast<int32_t>(offsetof(PacketWriter_t1062484765, ___buffer_3)); }
	inline ByteU5BU5D_t3397334013* get_buffer_3() const { return ___buffer_3; }
	inline ByteU5BU5D_t3397334013** get_address_of_buffer_3() { return &___buffer_3; }
	inline void set_buffer_3(ByteU5BU5D_t3397334013* value)
	{
		___buffer_3 = value;
		Il2CppCodeGenWriteBarrier(&___buffer_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
