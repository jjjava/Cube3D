#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// System.Net.Sockets.Socket
struct Socket_t3821512045;
// System.Net.Sockets.TcpClient
struct TcpClient_t408947970;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.IO.MemoryStream
struct MemoryStream_t743994179;
// DataSender
struct DataSender_t3042279589;
// DataReceiver
struct DataReceiver_t348987351;
// WebCamStreamer
struct WebCamStreamer_t1583485310;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RemoteConnection
struct  RemoteConnection_t373468914  : public MonoBehaviour_t1158329972
{
public:
	// System.Net.Sockets.Socket RemoteConnection::m_listenSocket
	Socket_t3821512045 * ___m_listenSocket_4;
	// System.Net.Sockets.TcpClient RemoteConnection::m_tcpClient
	TcpClient_t408947970 * ___m_tcpClient_5;
	// System.Byte[] RemoteConnection::m_copyBuffer
	ByteU5BU5D_t3397334013* ___m_copyBuffer_6;
	// System.Byte[] RemoteConnection::m_readBuffer
	ByteU5BU5D_t3397334013* ___m_readBuffer_7;
	// System.IO.MemoryStream RemoteConnection::m_readStream
	MemoryStream_t743994179 * ___m_readStream_8;
	// System.IO.MemoryStream RemoteConnection::m_writeStream
	MemoryStream_t743994179 * ___m_writeStream_9;
	// DataSender RemoteConnection::m_dataSender
	DataSender_t3042279589 * ___m_dataSender_10;
	// DataReceiver RemoteConnection::m_dataReceiver
	DataReceiver_t348987351 * ___m_dataReceiver_11;
	// WebCamStreamer RemoteConnection::m_webCamStreamer
	WebCamStreamer_t1583485310 * ___m_webCamStreamer_12;
	// System.Int32 RemoteConnection::screenWidth
	int32_t ___screenWidth_13;
	// System.Int32 RemoteConnection::screenHeight
	int32_t ___screenHeight_14;

public:
	inline static int32_t get_offset_of_m_listenSocket_4() { return static_cast<int32_t>(offsetof(RemoteConnection_t373468914, ___m_listenSocket_4)); }
	inline Socket_t3821512045 * get_m_listenSocket_4() const { return ___m_listenSocket_4; }
	inline Socket_t3821512045 ** get_address_of_m_listenSocket_4() { return &___m_listenSocket_4; }
	inline void set_m_listenSocket_4(Socket_t3821512045 * value)
	{
		___m_listenSocket_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_listenSocket_4, value);
	}

	inline static int32_t get_offset_of_m_tcpClient_5() { return static_cast<int32_t>(offsetof(RemoteConnection_t373468914, ___m_tcpClient_5)); }
	inline TcpClient_t408947970 * get_m_tcpClient_5() const { return ___m_tcpClient_5; }
	inline TcpClient_t408947970 ** get_address_of_m_tcpClient_5() { return &___m_tcpClient_5; }
	inline void set_m_tcpClient_5(TcpClient_t408947970 * value)
	{
		___m_tcpClient_5 = value;
		Il2CppCodeGenWriteBarrier(&___m_tcpClient_5, value);
	}

	inline static int32_t get_offset_of_m_copyBuffer_6() { return static_cast<int32_t>(offsetof(RemoteConnection_t373468914, ___m_copyBuffer_6)); }
	inline ByteU5BU5D_t3397334013* get_m_copyBuffer_6() const { return ___m_copyBuffer_6; }
	inline ByteU5BU5D_t3397334013** get_address_of_m_copyBuffer_6() { return &___m_copyBuffer_6; }
	inline void set_m_copyBuffer_6(ByteU5BU5D_t3397334013* value)
	{
		___m_copyBuffer_6 = value;
		Il2CppCodeGenWriteBarrier(&___m_copyBuffer_6, value);
	}

	inline static int32_t get_offset_of_m_readBuffer_7() { return static_cast<int32_t>(offsetof(RemoteConnection_t373468914, ___m_readBuffer_7)); }
	inline ByteU5BU5D_t3397334013* get_m_readBuffer_7() const { return ___m_readBuffer_7; }
	inline ByteU5BU5D_t3397334013** get_address_of_m_readBuffer_7() { return &___m_readBuffer_7; }
	inline void set_m_readBuffer_7(ByteU5BU5D_t3397334013* value)
	{
		___m_readBuffer_7 = value;
		Il2CppCodeGenWriteBarrier(&___m_readBuffer_7, value);
	}

	inline static int32_t get_offset_of_m_readStream_8() { return static_cast<int32_t>(offsetof(RemoteConnection_t373468914, ___m_readStream_8)); }
	inline MemoryStream_t743994179 * get_m_readStream_8() const { return ___m_readStream_8; }
	inline MemoryStream_t743994179 ** get_address_of_m_readStream_8() { return &___m_readStream_8; }
	inline void set_m_readStream_8(MemoryStream_t743994179 * value)
	{
		___m_readStream_8 = value;
		Il2CppCodeGenWriteBarrier(&___m_readStream_8, value);
	}

	inline static int32_t get_offset_of_m_writeStream_9() { return static_cast<int32_t>(offsetof(RemoteConnection_t373468914, ___m_writeStream_9)); }
	inline MemoryStream_t743994179 * get_m_writeStream_9() const { return ___m_writeStream_9; }
	inline MemoryStream_t743994179 ** get_address_of_m_writeStream_9() { return &___m_writeStream_9; }
	inline void set_m_writeStream_9(MemoryStream_t743994179 * value)
	{
		___m_writeStream_9 = value;
		Il2CppCodeGenWriteBarrier(&___m_writeStream_9, value);
	}

	inline static int32_t get_offset_of_m_dataSender_10() { return static_cast<int32_t>(offsetof(RemoteConnection_t373468914, ___m_dataSender_10)); }
	inline DataSender_t3042279589 * get_m_dataSender_10() const { return ___m_dataSender_10; }
	inline DataSender_t3042279589 ** get_address_of_m_dataSender_10() { return &___m_dataSender_10; }
	inline void set_m_dataSender_10(DataSender_t3042279589 * value)
	{
		___m_dataSender_10 = value;
		Il2CppCodeGenWriteBarrier(&___m_dataSender_10, value);
	}

	inline static int32_t get_offset_of_m_dataReceiver_11() { return static_cast<int32_t>(offsetof(RemoteConnection_t373468914, ___m_dataReceiver_11)); }
	inline DataReceiver_t348987351 * get_m_dataReceiver_11() const { return ___m_dataReceiver_11; }
	inline DataReceiver_t348987351 ** get_address_of_m_dataReceiver_11() { return &___m_dataReceiver_11; }
	inline void set_m_dataReceiver_11(DataReceiver_t348987351 * value)
	{
		___m_dataReceiver_11 = value;
		Il2CppCodeGenWriteBarrier(&___m_dataReceiver_11, value);
	}

	inline static int32_t get_offset_of_m_webCamStreamer_12() { return static_cast<int32_t>(offsetof(RemoteConnection_t373468914, ___m_webCamStreamer_12)); }
	inline WebCamStreamer_t1583485310 * get_m_webCamStreamer_12() const { return ___m_webCamStreamer_12; }
	inline WebCamStreamer_t1583485310 ** get_address_of_m_webCamStreamer_12() { return &___m_webCamStreamer_12; }
	inline void set_m_webCamStreamer_12(WebCamStreamer_t1583485310 * value)
	{
		___m_webCamStreamer_12 = value;
		Il2CppCodeGenWriteBarrier(&___m_webCamStreamer_12, value);
	}

	inline static int32_t get_offset_of_screenWidth_13() { return static_cast<int32_t>(offsetof(RemoteConnection_t373468914, ___screenWidth_13)); }
	inline int32_t get_screenWidth_13() const { return ___screenWidth_13; }
	inline int32_t* get_address_of_screenWidth_13() { return &___screenWidth_13; }
	inline void set_screenWidth_13(int32_t value)
	{
		___screenWidth_13 = value;
	}

	inline static int32_t get_offset_of_screenHeight_14() { return static_cast<int32_t>(offsetof(RemoteConnection_t373468914, ___screenHeight_14)); }
	inline int32_t get_screenHeight_14() const { return ___screenHeight_14; }
	inline int32_t* get_address_of_screenHeight_14() { return &___screenHeight_14; }
	inline void set_screenHeight_14(int32_t value)
	{
		___screenHeight_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
